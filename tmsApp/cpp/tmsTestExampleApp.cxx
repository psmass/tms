/*
* (c) Copyright, Real-Time Innovations, 2012.  All rights reserved.
* RTI grants Licensee a license to use, modify, compile, and create derivative
* works of the software solely for use with RTI Connext DDS. Licensee may
* redistribute copies of the software provided that all such copies are subject
* to this license. The software is provided "as is", with no warranty of any
* type, including any warranty for fitness for any purpose. RTI is under no
* obligation to maintain or support the software. RTI shall not be liable for
* any incidental or consequential damages arising out of the use or inability
* to use the software.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <signal.h>
#include <iostream>

#include "ndds/ndds_cpp.h"
#include <pthread.h>
#include "tmsCommon.h"
#include "tmsCommPatterns.h"

bool run_flag = true;

std::string participant_name = "TMS Device";  // To Do - make participant names less hardwired 

// should tuck this var into the RequestSequenceNumber class and make that Class a singlton pattern
unsigned long long sequence_number=0; // ever monotonically increasing for each request sent

// used to reset the MSM App State Machine if the device reset 
// (In a real MSM also lack of hearbeat should reset the MSM App state machine)
bool received_device_announcement = false;

// Variable associated with Source Transition Request - note the TMS topic struct holds both present and future state
// so we should be able to leverage the state within the topic
// Also a real MSM would need to keep these in arrays for the maximum number of devices allowed on a Microgrid
struct Internal_membership_request internal_membership_request;

enum tms_MicrogridMembershipResult external_tms_membership_result = MMR_UNINITIALIZED;  
enum tms_SourceTransition internal_source_transition_state = ST_UNINITIALIZED; 
enum tms_SourceTransition external_tms_source_transition_state = ST_UNINITIALIZED; 

const DDS_Char * const topic_name_array [] = {
    tms_TOPIC_ACTIVE_DIAGNOSTICS,
    tms_TOPIC_AUTHORIZATION_TO_ENERGIZE_OUTCOME,
    tms_TOPIC_AUTHORIZATION_TO_ENERGIZE_REQUEST,
    tms_TOPIC_AUTHORIZATION_TO_ENERGIZE_RESPONSE,
    tms_TOPIC_CONFIG_RESERVATION_STATE,
    tms_TOPIC_COPY_CONFIG_REQUEST,
    tms_TOPIC_DC_DEVICE_POWER_MEASUREMENT_LIST,
    tms_TOPIC_DC_LOAD_SHARING_REQUEST,
    tms_TOPIC_DC_LOAD_SHARING_STATUS,
    tms_TOPIC_DEVICE_ANNOUNCEMENT,
    tms_TOPIC_DEVICE_CLOCK_STATUS,
    tms_TOPIC_DEVICE_GROUNDING,
    tms_TOPIC_DEVICE_GROUNDING_STATUS,
    tms_TOPIC_DEVICE_PARAMETER_REQUEST,
    tms_TOPIC_DEVICE_PARAMETER_STATUS,
    tms_TOPIC_DEVICE_POWER_MEASUREMENT_LIST,
    tms_TOPIC_DEVICE_POWER_PORT_LIST,
    tms_TOPIC_DEVICE_POWER_STATUS_LIST,
    tms_TOPIC_DISCOVERED_CONNECTION_LIST,
    tms_TOPIC_ENGINE_STATE,
    tms_TOPIC_FINGERPRINT_NICKNAME,
    tms_TOPIC_FINGERPRINT_NICKNAME_REQUEST,
    tms_TOPIC_GET_CONFIG_CONTENTS_REQUEST,
    tms_TOPIC_GET_CONFIG_DC_LOAD_SHARING_RESPONSE,
    tms_TOPIC_GET_CONFIG_DEVICE_PARAMETER_RESPONSE,
    tms_TOPIC_GET_CONFIG_GROUNDING_CIRCUIT_RESPONSE,
    tms_TOPIC_GET_CONFIG_LOAD_SHARING_RESPONSE,
    tms_TOPIC_GET_CONFIG_POWER_SWITCH_RESPONSE,
    tms_TOPIC_GET_CONFIG_SOURCE_TRANSITION_RESPONSE,
    tms_TOPIC_GET_CONFIG_STORAGE_CONTROL_RESPONSE,
    tms_TOPIC_GROUNDING_CIRCUIT_REQUEST,
    tms_TOPIC_HEARTBEAT,
    tms_TOPIC_LOAD_SHARING_REQUEST,
    tms_TOPIC_LOAD_SHARING_STATUS,
    tms_TOPIC_MICROGRID_CONNECTION_LIST,
    tms_TOPIC_MICROGRID_MEMBERSHIP_OUTCOME,
    tms_TOPIC_MICROGRID_MEMBERSHIP_REQUEST,
    tms_TOPIC_OPERATOR_CONNECTION_LIST,
    tms_TOPIC_OPERATOR_INTENT_REQUEST,
    tms_TOPIC_OPERATOR_INTENT_STATE,
    tms_TOPIC_POWER_SWITCH_REQUEST,
    tms_TOPIC_RELEASE_CONFIG_REQUEST,
    tms_TOPIC_REQUEST_RESPONSE,
    tms_TOPIC_RESERVE_CONFIG_REPLY,
    tms_TOPIC_RESERVE_CONFIG_REQUEST,
    tms_TOPIC_SOURCE_TRANSITION_REQUEST,
    tms_TOPIC_SOURCE_TRANSITION_STATE,
    tms_TOPIC_STANDARD_CONFIG_MASTER,
    tms_TOPIC_STORAGE_CONTROL_STATUS,
    tms_TOPIC_STORAGE_INFO,
    tms_TOPIC_STORAGE_STATE,
    "Sentinal Position"
};

ReqCmdQ  req_cmd_q;  // only one ReqCmdQ for the app so global (the access class is not global)

// Should probably intialize this_device_id in a loop since setting an array size tms_LEN_Fingerprint
// to a "fixed string 32 chars + null" defeats the purpose of using tms_LEN_Fingerprint - but eventually
// it would be populated via a CAN device ID access 
char this_device_id [tms_LEN_Fingerprint+1] = "00000000000000000000000000001234"; 
// that_device_id not used by the device, but like a few other globals, the tmsCommPatterns and
// tmsCommPatternTopicHandler references it so the linker needs it defined. (some code restructuring
// would get rid of this nuisanse ) 
char that_device_id [tms_LEN_Fingerprint+1] = "00000000000000000000000000000000"; 

// Local prototypes
void handle_SIGINT(int unused);
int tms_app_main (unsigned int);
int main (int argc, char *argv[]);

//-------------------------------------------------------------------
// handle_SIGINT - sets flag for orderly shutdown on Ctrl-C
//-------------------------------------------------------------------

void handle_SIGINT(int unused)
{
  // On CTRL+C - abort! //
  run_flag = false;
}

// class RequestSequenceNumber member function definitions (see class def in tmsTestExampleApp.h)
// Used to manage the static sequence_number across all requests
RequestSequenceNumber::RequestSequenceNumber(ReqCmdQ * req_cmd_q_ptr) {
    myReqCmdQptr =req_cmd_q_ptr;
    mySeqNum = &sequence_number;
}

unsigned long long RequestSequenceNumber::getNextSeqNo(enum TOPICS_E topic_enum) { 
    // this function increments and returns the next sequenceNo for the requestTopic write
    // and enques the topic_enum and sequence number for later response processing
    ReqQEntry rq_entry;
    rq_entry.requesterEnum = topic_enum;
    rq_entry.sequenceNum = (*mySeqNum);
    myReqCmdQptr->reqCmdQWrite(rq_entry);
    (*mySeqNum)++;  // increment for the next sequence
    return (*mySeqNum)-1; // but return the one we used
}

enum TOPICS_E RequestSequenceNumber::lookUpReqCmdQ(unsigned long long sequenceNo){
     return myReqCmdQptr->reqCmdQRead(sequenceNo);
};

void RequestSequenceNumber::printReqCmd() {
    myReqCmdQptr->printQueue();    
}

// END class RequestSequenceNumber member function definitions


// class ReqCmdQ member function definitions (see class def in tmsTestExampleApp.h)
ReqCmdQ::ReqCmdQ () {
// main thing is to set the start=end indexes to 0, 
// and sequence numbers to 0 to since we start at 1
   memset(&rq, 0, sizeof(rq));  
}

// The code below must be used as follows: reqCmdQwrite is only ever done
// from class RequestSequenceNumber::getNextSeqNo which is only ever used
// when sending a request from the main loop. This guarantees that any
// response we are processing can not be from the sequenced request we are
// about to write. To ensure the requestorEnum is paired with the
// sequenceNum if we write the sequenceNum before the requestorEnum and
// read the sequenceNum after the requestorEnum they MUST necessarily 
// be a pair IFF the read seqenceNum matches the requested seqnceNo.
void ReqCmdQ::reqCmdQWrite(ReqQEntry reqQentry) {
    // CAUTION: Keep Order - Write sequence number first, read sequence number last
    // read current sequence number in case of an overwrite
    unsigned long long prev_seq_num = rq.req_Q_entry[rq.end].sequenceNum;
    rq.req_Q_entry[rq.end].sequenceNum = reqQentry.sequenceNum;
    if (rq.req_Q_entry[rq.end].responseNotProcessed) {
        std::cout << "Overwrote unprocessed Response in RequestResponseQ: " 
        << prev_seq_num  << std::endl;
        // Application may want to add code to take action on prev_seq_num / request_enum
        // (not overwritten yet) here
    }
    rq.req_Q_entry[rq.end].responseNotProcessed = true;
    rq.req_Q_entry[rq.end].requesterEnum = reqQentry.requesterEnum;
    rq.end = (rq.end + 1) % RQ_SIZE;
}

enum TOPICS_E  ReqCmdQ::reqCmdQRead(unsigned long long sequenceNo){
    // CAUTION: Keep Order - Write squence number first, read sequence number last
    int idx = sequenceNo % RQ_SIZE;
    enum TOPICS_E enumFound = rq.req_Q_entry[idx].requesterEnum;
    if (rq.req_Q_entry[idx].sequenceNum != sequenceNo)
        enumFound = tms_TOPIC_LAST_SENTINEL_ENUM;
    else  // we found it - mark it processed
        rq.req_Q_entry[idx].responseNotProcessed = false;
    return enumFound;
}

void ReqCmdQ::printQueue() {
    std::cout << "ReqCmdQ Writer index (End) value: " << rq.end << std::endl;
    for (int i = 0; i< RQ_SIZE; i++) {
        std::cout << "index " << i << " Sequence No:  " << rq.req_Q_entry[i].sequenceNum
        << " Requester: " << topic_name_array[rq.req_Q_entry[i].requesterEnum] 
        << " ResponseNotProcessed(1/0): " << rq.req_Q_entry[i].responseNotProcessed
        << std::endl;
    }
}
// END class ReqQEntry member function definitions


/* Delete all entities */
static int participant_shutdown(
    DDSDomainParticipant *participant)
{
    DDS_ReturnCode_t retcode;
    int status = 0;

    if (participant != NULL) {
        retcode = participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK) {
            std::cerr <<  "delete_contained_entities error " << retcode << std::endl << std::flush;
            status = -1;
        }

        retcode = DDSTheParticipantFactory->delete_participant(participant);
        if (retcode != DDS_RETCODE_OK) {
            std::cerr <<  "delete_participant error " << retcode << std::endl << std::flush;
            status = -1;
        }
    }

    /* RTI Connext provides finalize_instance() method on
    domain participant factory for people who want to release memory used
    by the participant factory. Uncomment the following block of code for
    clean destruction of the singleton. */
    /*

    retcode = DDSDomainParticipantFactory::finalize_instance();
    if (retcode != DDS_RETCODE_OK) {
        std::cerr <<  "Finalize_instance error " << retcode << std::endl; 
        status = -1;
    }
    */

    return status;
}

extern "C" int tms_app_main(int sample_count) {
    DDSDomainParticipant * participant = NULL;
    DDSTopicDescription * topic_des_to_mod_cft = NULL; // we need to modify cft for reader topics
    DDSContentFilteredTopic * topic_handle_to_mod_cft = NULL;
    DDS_ReturnCode_t retcode, retcode1, retcode2, retcode3;  // compound retcodes to do one check
    enum APP_STATE_E app_state = INIT;  // application main loop state machine
    bool shut_down = false;

    DDS_Duration_t send_period = {1,0};
    DDS_Duration_t heartbeat_period = HEARTBEAT_PERIOD;
    DDS_Duration_t hb_deadman_period = HB_DEADMAN_PERIOD;

    PeriodicTopic * heartbeat;
    NormalWriterTopic * request_response_w;
    NormalWriterTopic * source_transition_state;
    NormalWriterTopic * device_announcement;
    NormalWriterTopic * microgrid_membership_request;
    ReaderTopic * microgrid_membership_outcome;
    ReaderTopic * request_response_r;
    ReaderTopic * source_transition_request;

   
    // local reqQaccess object
    RequestSequenceNumber * reqSeqNo = new RequestSequenceNumber(&req_cmd_q);

    std::cout << "Starting tms application" << std::endl;

    participant = DDSTheParticipantFactory->
            create_participant_from_config(
                                "TMS_ParticipantLibrary1::TMS Device Participant1");
    if (participant == NULL) {
        std::cerr << "create_participant_from_config error " << std::endl;
        participant_shutdown(participant);
        goto tms_app_main_just_return;
    }
    
    std::cout << "Successfully Created Tactical Microgrid Participant from the System Designer config file"
     << std::endl;

    // Create Topic Objects (each contains & runs a thread)
    try {
        heartbeat = new PeriodicTopic (participant, tms_TOPIC_HEARTBEAT_ENUM, heartbeat_period);
        request_response_w = new NormalWriterTopic (participant, tms_TOPIC_REQUEST_RESPONSE_ENUM, NO_PREFILL_DEVID);
        source_transition_state = new NormalWriterTopic (participant, tms_TOPIC_SOURCE_TRANSITION_STATE_ENUM, PREFILL_DEVID);
        device_announcement = new NormalWriterTopic (participant, tms_TOPIC_DEVICE_ANNOUNCEMENT_ENUM, PREFILL_DEVID);
        microgrid_membership_request = new NormalWriterTopic (participant, tms_TOPIC_MICROGRID_MEMBERSHIP_REQUEST_ENUM, PREFILL_DEVID);
        microgrid_membership_outcome = new ReaderTopic(participant, tms_TOPIC_MICROGRID_MEMBERSHIP_OUTCOME_ENUM);
        request_response_r = new ReaderTopic(participant, tms_TOPIC_REQUEST_RESPONSE_ENUM);
        source_transition_request = new ReaderTopic(participant, tms_TOPIC_SOURCE_TRANSITION_REQUEST_ENUM, request_response_w);
    } catch (const char* msg) {
        std::cerr << msg << std::endl;
        goto tms_app_main_end;  // we may attempt to delete a few things that never were created depending
    }                           // upon which object threw the exception

    NDDSUtility::sleep(send_period); // wait a second for thread initialization to complete printing (printing is not sychronized)

    /* Publish one-time topics here - QoS is likely keep last, with durability set to transient-local to allow late joiners
       to get these announcements
    */
    std::cout <<  std::endl << tms_TOPIC_DEVICE_ANNOUNCEMENT << ": " << this_device_id << std::endl;
    // deviceId is preloaded in writer handle lookup loop
    retcode = device_announcement->getMyWriter()->write(* device_announcement->getMyDataInstance(), DDS_HANDLE_NIL);
    if (retcode != DDS_RETCODE_OK) {
        std::cerr << "product_info: Dynamic Data Set Error " << std::endl << std::flush;
        goto tms_app_main_end;
    }
 
    // configure a request to join microgrid  - once configured - update the requestId.sequenceNumber and issue via the write below at will (not durable)
    
    retcode = microgrid_membership_request->getMyDataInstance()->set_octet_array
        ("requestId.deviceId", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, tms_LEN_Fingerprint, (const DDS_Octet *)&this_device_id); 
    // note enums are compiler dependent and here seem to be 4 bytes long (the compiler will tell you- and you can always printf sizeof(MM_JOIN))
    retcode1 = microgrid_membership_request->getMyDataInstance()->set_long
        ("membership", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, (DDS_Long) MM_JOIN);
    if (retcode != DDS_RETCODE_OK || retcode1 != DDS_RETCODE_OK) {
        std::cerr << "microgrid_membership_request: Dynamic Data Set Error" << std::endl << std::flush;
        goto tms_app_main_end;
    }
    NDDSUtility::sleep(send_period); // Optional - to let periodic writer go first

    /* Main loop */
    while (!shut_down) {
        if (!run_flag) // CTRL^C will transition to shut_down stat
            app_state = SHUT_DOWN;  // allows app level shut down - then exit

        // Do your stuff in the appropriate state to interact CAN to DDS (i.e. get devices state and
        // load DDS topics, set change triggers etc.)

        switch (app_state) {
            case INIT:
                // So long as we are not approved, keep asking
                if (internal_membership_request.result != MMR_COMPLETE) {
                    // get approval to enter the grid - according to TMS spec Command Profile = "As needed"
                    // Each (any type) request gets a unique global sequence number 
                    retcode = microgrid_membership_request->getMyDataInstance()->\
                        set_ulonglong("requestId.sequenceNumber", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, (DDS_UnsignedLongLong)\
                        reqSeqNo->getNextSeqNo(tms_TOPIC_MICROGRID_MEMBERSHIP_REQUEST_ENUM)); 
                    if (retcode != DDS_RETCODE_OK) {
                        std::cerr << "Microgrid Request Sequence number: Dynamic Data Set Error" << std::endl;
                        app_state = SHUT_DOWN;
                    }
                    // we unregister and dispose of this topic instance since each SampleId is unique and will
                    // consume resources.  In reality one (or very few request to join the microgrid should be
                    // generated so we could skip this. 
                    // dispose API: "The actual deletion is postponed until there is no more
                    // use for that data in the whole system". So if we use Reliable reliabily we can dispose of
                    // the data immediately else we should move the unregister and dispose operations to the
                    // req/response lookup and place a switch statement in the lookup, unregistering and disposing
                    // of the instance there.
                    retcode = microgrid_membership_request->getMyWriter()->write
                        (* microgrid_membership_request->getMyDataInstance(), DDS_HANDLE_NIL);
                    retcode1 = microgrid_membership_request->getMyWriter()->unregister_instance
                        (* microgrid_membership_request->getMyDataInstance(), DDS_HANDLE_NIL);
                    retcode2 = microgrid_membership_request->getMyWriter()->dispose
                        (* microgrid_membership_request->getMyDataInstance(), DDS_HANDLE_NIL);
                    if (retcode != DDS_RETCODE_OK || retcode1 != DDS_RETCODE_OK || retcode2 != DDS_RETCODE_OK) {
                        std::cerr << "Micrgrid Membership Request: Write Error " << std::endl;
                        app_state = SHUT_DOWN;
                    }
                } else {
                    // Upon approval enable heartbeat
                    heartbeat->enable(); 
                    app_state = POWER_UP;
                }
                NDDSUtility::sleep(send_period); // don't flood requests 
                break;
            case POWER_UP:  // wait for source transition request
                if (external_tms_source_transition_state != internal_source_transition_state ) {
                    // copy the targeted deviceId (from announcment) in to  the request 
                    //sstd::cout << "Main Device On Change Transition" << std::endl;
                    retcode = source_transition_state->getMyDataInstance()->set_octet_array
                        ("deviceId", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, tms_LEN_Fingerprint, 
                        (const DDS_Octet *) &this_device_id);
                    // sourceTransition we should actually get the real current state 
                    retcode1 = source_transition_state->getMyDataInstance()->set_long
                        ("presentState", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, (DDS_Long) SS_UNINITIALIZED);
                    retcode2 = source_transition_state->getMyDataInstance()->set_long
                        ("futureState", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, (DDS_Long) SS_ON);
                    if (retcode != DDS_RETCODE_OK || retcode1 != DDS_RETCODE_OK) {
                        std::cerr << "Main Source Transition: set data error\n" << std::endl;
                        app_state = SHUT_DOWN;
                    }
                    external_tms_source_transition_state=internal_source_transition_state;

                    retcode = source_transition_state->getMyWriter()->write
                        (* source_transition_state->getMyDataInstance(), DDS_HANDLE_NIL); 
                    if (retcode != DDS_RETCODE_OK) {
                        std::cerr << "Main Source State: Request: Write Error \n" << std::endl;
                        app_state = SHUT_DOWN;
                    }
                    app_state = STEADY_STATE;
                }
                NDDSUtility::sleep(send_period); // save the cpu - wait in between checks
                break;
            case STEADY_STATE:
                std::cout << ". "; // background idle
                NDDSUtility::sleep(send_period);  // remove eventually 
                break;
            case SHUT_DOWN:
                /* Do any app level shutdown  here */
                shut_down = true;  // exit the main_loop
                break;
            default:
                std::cerr << "Main loop State Machine unknown state" << std::endl;
                app_state = SHUT_DOWN;
        }
    } /* while !shut_down*/

    tms_app_main_end:
    std::cout << "Stopping - shutting down participant\n";
    delete heartbeat;
    delete request_response_w;
    delete source_transition_state;
    delete device_announcement;
    delete microgrid_membership_request;
    delete microgrid_membership_outcome;
    delete request_response_r;
    delete source_transition_request;

    tms_app_main_just_return:
    return participant_shutdown(participant);
}

int main(int argc, char *argv[])
{
    int sample_count = 0; /* infinite loop */
    signal(SIGINT, handle_SIGINT);

    if (argc >= 2) {
        sample_count = atoi(argv[2]);
    }

    /* Uncomment this to turn on additional logging
    NDDSConfigLogger::get_instance()->
    set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API, 
    NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
    */

    return tms_app_main(sample_count);
}