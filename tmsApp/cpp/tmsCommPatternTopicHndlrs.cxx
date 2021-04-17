/* (c) Copyright, Real-Time Innovations, 2012.  All rights reserved.
* RTI grants Licensee a license to use, modify, compile, and create derivative
* works of the software solely for use with RTI Connext DDS. Licensee may
* redistribute copies of the software provided that all such copies are subject
* to this license. The software is provided "as is", with no warranty of any
* type, including any warranty for fitness for any purpose. RTI is under no
* obligation to maintain or support the software. RTI shall not be liable for
* any incidental or consequential damages arising out of the use or inability
* to use the software.
*/

/*  This file is really an extension of the tmsCommsPattern.cxx and holds the
    Reader/Writer handlers that are dispatched from the comm patterns. As such 
    these functions are called with in the context of the thread processing a 
    particular pattern. 

    The signature and naming convention is:
        void TypeHandler_tms_TOPIC<TOPIC> (void);
        where type Handler is: Reader, Writer, PeriodicWriter, and OnChangeWriter.
 */

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "tmsCommPatternTopicHndlrs.h"

// Global arrays of different pattern handlers - we need separate arrays in case
// the same topic is both a reader and writer (e.g., RequestResponse)
ReaderHandlerPtr reader_handler_ptrs[] = {
    GenericDefaultReaderHandler,                            // tms_TOPIC_ACTIVE_DIAGNOSTICS_ENUM,,
    GenericDefaultReaderHandler,                            // tms_TOPIC_AUTHORIZATION_TO_ENERGIZE_OUTCOME_ENUM ,,
    GenericDefaultReaderHandler,                            // tms_TOPIC_AUTHORIZATION_TO_ENERGIZE_REQUEST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_AUTHORIZATION_TO_ENERGIZE_RESPONSE_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_CONFIG_RESERVATION_STATE_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_COPY_CONFIG_REQUEST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_DC_DEVICE_POWER_MEASUREMENT_LIST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_DC_LOAD_SHARING_REQUEST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_DC_LOAD_SHARING_STATUS_ENUM,
    ReaderHandler_tms_TOPIC_DEVICE_ANNOUNCEMENT,            // tms_TOPIC_DEVICE_ANNOUNCEMENT_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_DEVICE_CLOCK_STATUS_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_DEVICE_GROUNDING_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_DEVICE_GROUNDING_STATUS_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_DEVICE_PARAMETER_REQUEST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_DEVICE_PARAMETER_STATUS_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_DEVICE_POWER_MEASUREMENT_LIST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_DEVICE_POWER_PORT_LIST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_DEVICE_POWER_STATUS_LIST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_DISCOVERED_CONNECTION_LIST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_ENGINE_STATE_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_FINGERPRINT_NICKNAME_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_FINGERPRINT_NICKNAME_REQUEST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_GET_CONFIG_CONTENTS_REQUEST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_GET_CONFIG_DC_LOAD_SHARING_RESPONSE_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_GET_CONFIG_DEVICE_PARAMETER_RESPONSE_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_GET_CONFIG_GROUNDING_CIRCUIT_RESPONSE_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_GET_CONFIG_LOAD_SHARING_RESPONSE_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_GET_CONFIG_POWER_SWITCH_RESPONSE_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_GET_CONFIG_SOURCE_TRANSITION_RESPONSE_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_GET_CONFIG_STORAGE_CONTROL_RESPONSE_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_GROUNDING_CIRCUIT_REQUEST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_HEARTBEAT_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_LOAD_SHARING_REQUEST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_LOAD_SHARING_STATUS_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_MICROGRID_CONNECTION_LIST_ENUM,
    ReaderHandler_tms_TOPIC_MICROGRID_MEMBERSHIP_OUTCOME,   // tms_TOPIC_MICROGRID_MEMBERSHIP_OUTCOME_ENUM,
    ReaderHandler_tms_TOPIC_MICROGRID_MEMBERSHIP_REQUEST,   // tms_TOPIC_MICROGRID_MEMBERSHIP_REQUEST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_OPERATOR_CONNECTION_LIST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_OPERATOR_INTENT_REQUEST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_OPERATOR_INTENT_STATE_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_POWER_SWITCH_REQUEST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_RELEASE_CONFIG_REQUEST_ENUM,
    ReaderHandler_tms_TOPIC_REQUEST_RESPONSE,               // tms_TOPIC_REQUEST_RESPONSE_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_RESERVE_CONFIG_REPLY_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_RESERVE_CONFIG_REQUEST_ENUM,
    ReaderHandler_tms_TOPIC_SOURCE_TRANSITION_REQUEST,      // tms_TOPIC_SOURCE_TRANSITION_REQUEST_ENUM,
    ReaderHandler_tms_TOPIC_SOURCE_TRANSITION_STATE,        // tms_TOPIC_SOURCE_TRANSITION_STATE_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_STANDARD_CONFIG_MASTER_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_STORAGE_CONTROL_REQUEST_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_STORAGE_CONTROL_STATUS_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_STORAGE_INFO_ENUM,
    GenericDefaultReaderHandler,                            // tms_TOPIC_STORAGE_STATE_ENUM,
    GenericDefaultReaderHandler                             // tms_TOPIC_LAST_SENTINEL_ENUM        
};

PeriodicWriterHandlerPtr periodic_handler_ptrs[] = { 
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_ACTIVE_DIAGNOSTICS_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_AUTHORIZATION_TO_ENERGIZE_OUTCOME_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_AUTHORIZATION_TO_ENERGIZE_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_AUTHORIZATION_TO_ENERGIZE_RESPONSE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_CONFIG_RESERVATION_STATE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_COPY_CONFIG_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_DC_DEVICE_POWER_MEASUREMENT_LIST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_DC_LOAD_SHARING_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_DC_LOAD_SHARING_STATUS_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_DEVICE_ANNOUNCEMENT_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_DEVICE_CLOCK_STATUS_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_DEVICE_GROUNDING_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_DEVICE_GROUNDING_STATUS_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_DEVICE_PARAMETER_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_DEVICE_PARAMETER_STATUS_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_DEVICE_POWER_MEASUREMENT_LIST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_DEVICE_POWER_PORT_LIST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_DEVICE_POWER_STATUS_LIST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_DISCOVERED_CONNECTION_LIST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_ENGINE_STATE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_FINGERPRINT_NICKNAME_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_FINGERPRINT_NICKNAME_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_GET_CONFIG_CONTENTS_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_GET_CONFIG_DC_LOAD_SHARING_RESPONSE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_GET_CONFIG_DEVICE_PARAMETER_RESPONSE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_GET_CONFIG_GROUNDING_CIRCUIT_RESPONSE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_GET_CONFIG_LOAD_SHARING_RESPONSE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_GET_CONFIG_POWER_SWITCH_RESPONSE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_GET_CONFIG_SOURCE_TRANSITION_RESPONSE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_GET_CONFIG_STORAGE_CONTROL_RESPONSE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_GROUNDING_CIRCUIT_REQUEST_ENUM,
    PeriodicWriterHandler_tms_TOPIC_HEARTBEAT,              // tms_TOPIC_HEARTBEAT_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_LOAD_SHARING_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_LOAD_SHARING_STATUS_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_MICROGRID_CONNECTION_LIST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_MICROGRID_MEMBERSHIP_OUTCOME_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_MICROGRID_MEMBERSHIP_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_OPERATOR_CONNECTION_LIST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_OPERATOR_INTENT_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_OPERATOR_INTENT_STATE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_POWER_SWITCH_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_RELEASE_CONFIG_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_REQUEST_RESPONSE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_RESERVE_CONFIG_REPLY_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_RESERVE_CONFIG_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_SOURCE_TRANSITION_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_SOURCE_TRANSITION_STATE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_STANDARD_CONFIG_MASTER_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_STORAGE_CONTROL_REQUEST_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_STORAGE_CONTROL_STATUS_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_STORAGE_INFO_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_STORAGE_STATE_ENUM,
    GenericDefaultPeriodicWriterHandler,                    // tms_TOPIC_LAST_SENTINEL_ENUM        
};

// array of heartbeat_semaphores used by topic threads to set if enabled. A user heartbeat
// handler can then detect dead processes.
ThreadHeartbeatSem thread_heartbeat_semaphores[tms_TOPIC_LAST_SENTINEL_ENUM] = {{0}};

void GenericDefaultReaderHandler(ReaderThreadInfo * myReaderThreadInfo) {
    //ReaderThreadInfo * myReaderThreadInfo = (ReaderThreadInfo *) infoBlck; 
    std::cout << "No Handler attatched to topic: " << MY_READER_TOPIC_NAME << std::endl;
    return;
}

void GenericDefaultPeriodicWriterHandler(PeriodicWriterThreadInfo * myPeriodicWriterThreadInfo) {
    std::cout << "No Handler attatched to topic: " << MY_PERIODIC_TOPIC_NAME << std::endl;
    return;
}


void ReaderHandler_tms_TOPIC_MICROGRID_MEMBERSHIP_REQUEST (ReaderThreadInfo * myReaderThreadInfo) {
    DDS_UnsignedLong fingerprint_len = (DDS_UnsignedLong) tms_LEN_Fingerprint; // get requires a &var not value
    // MSM handles this and would normally have an array of intenal_membership_requesters and results
    // the main loop would take a change in the internal_membership_result[idx-requester] to publish the right approval
    // to the associated requester
    DDS_ReturnCode_t  retcode, retcode1;
    std::cout << "Receive Handler - Recieved " << MY_READER_TOPIC_NAME << " (should check for MM_JOIN/LEAVE) " << std::endl;

    // ****** PUT WHAT YOU NEED TO DO SPECIFICALLY FOR YOU TOPIC HERE

    // The GENERIC sends tms_REPLY_OK  unless we change it in the infoBlck here. If we send
    // tms_REPLY_OK, then we should set the internal variable as MMR_COMPLETE
    // The main_loop of the MSM should now see a difference between the internal state and the tms_state 
    // causing an On Change tms_TOPIC_MICROGRID_MEMBERSHIP_OUTCOME to get triggered
    // 
    // minimally we (MSM) will set the relatedRequestId in the MembershipOutcome/Approval
    // get the requesting device from the request
    retcode = myReaderThreadInfo->dataSeqInstance->get_octet_array(
                                    internal_membership_request.requesterId,
                                    &fingerprint_len,
                                    "requestId.deviceId",
                                    DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED
                                    );

    internal_membership_request.result = MMR_COMPLETE;

    //strncpy (myReaderThreadInfo->reason, "Goodbye World", tms_MAXLEN_reason); // example change default reason

   end_reader_hndlr:
   return;
}

bool isThisMyDeviceId (tms_Fingerprint fingerprint) {
    bool result = true;
    for (int i=0; i<tms_LEN_Fingerprint; i++){
        if (fingerprint[i] != this_device_id[i])
            result = false;
            break;
    }
    return result;
}

void ReaderHandler_tms_TOPIC_REQUEST_RESPONSE (ReaderThreadInfo * myReaderThreadInfo) {
    DDS_UnsignedLong fingerprint_len = (DDS_UnsignedLong) tms_LEN_Fingerprint;
    tms_SampleId tms_sample_id; // use microgrid def from model tmsTestExample.h
    DDS_UnsignedLongLong rcvd_sequence_number;
    enum TOPICS_E lookedUpTopicEnum;
    DDS_ReturnCode_t  retcode, retcode1;

    // local reqQaccess object
    RequestSequenceNumber * reqSeqNo = new RequestSequenceNumber(&req_cmd_q);

    std::cout << "Receive Handler - Received " << MY_READER_TOPIC_NAME;
    // See if anyone is getting Responses not directed to them 
    // filters should never allow this case so this block of code can be omitted.
    retcode = myReaderThreadInfo->dataSeqInstance->get_octet_array(
                                    tms_sample_id.deviceId,
                                    &fingerprint_len,
                                    "relatedRequestId.deviceId",
                                    DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED
                                    );
    retcode1 = myReaderThreadInfo->dataSeqInstance->get_ulonglong(
                                    rcvd_sequence_number,
                                    "relatedRequestId.sequenceNumber",
                                    DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED
                                    );
    if (retcode != DDS_RETCODE_OK || retcode1 != DDS_RETCODE_OK) {
        std::cerr << "Receive Handler  Error: " << MY_READER_TOPIC_NAME <<
            "Data get Error" << std::endl << std::flush;
        goto reader_handler_RR_end;
    };
    if (isThisMyDeviceId(tms_sample_id.deviceId)) 
        std::cout << " w/ Seq Num: " << rcvd_sequence_number;
    else  
        std::cout << " some other device." << std::endl;


    // now see we had a pending request queued up
    // reqSeqNo->printReqCmd();
    lookedUpTopicEnum = reqSeqNo->lookUpReqCmdQ(rcvd_sequence_number);
    if (lookedUpTopicEnum == tms_TOPIC_LAST_SENTINEL_ENUM) {
        std::cout << " no matching request found: "  << std::endl;
    } else {
        std::cout << " Matches: " << topic_name_array[lookedUpTopicEnum] << std::endl;
    }

    internal_membership_request.result = MMR_COMPLETE;

    reader_handler_RR_end:
    return;
}

void ReaderHandler_tms_TOPIC_DEVICE_ANNOUNCEMENT (ReaderThreadInfo * myReaderThreadInfo) {
    // MSM Sim code executes this handler
    DDS_UnsignedLong fingerprint_len = (DDS_UnsignedLong) tms_LEN_Fingerprint;
    tms_SampleId tms_sample_id; // use microgrid def from model tmsTestExample.h
    DDS_ReturnCode_t  retcode;

    std::cout << "Receive Handler - received " << MY_READER_TOPIC_NAME << std::endl;
    retcode = myReaderThreadInfo->dataSeqInstance->get_octet_array(
                                    tms_sample_id.deviceId,
                                    &fingerprint_len,
                                    "deviceId",
                                    DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED
                                    );
    if (retcode != DDS_RETCODE_OK ) {
        std::cerr << "Receive Handler  Error: " << MY_READER_TOPIC_NAME <<
            "Data get Error" << std::endl << std::flush;
        goto reader_handler_DA_end;
    };
    // copy the requesters deviceId to "that_device_id" - again - a real MSM 
    // would have an array of potential requesters/devices etc. - We are assuming just one.
    strncpy(that_device_id, (char *)tms_sample_id.deviceId, tms_LEN_Fingerprint);
    // std::cout << "Found Request Device: " << that_device_id << std::endl;

    reader_handler_DA_end:
    return;

}

void ReaderHandler_tms_TOPIC_MICROGRID_MEMBERSHIP_OUTCOME (ReaderThreadInfo * myReaderThreadInfo) {
    std::cout << "Receive Handler - received " << MY_READER_TOPIC_NAME << std::endl;
}

void ReaderHandler_tms_TOPIC_SOURCE_TRANSITION_REQUEST (ReaderThreadInfo * myReaderThreadInfo) {
    std::cout << "Receive Handler - received " << MY_READER_TOPIC_NAME << 
    " Yes Boss. Powering up (note I probably should see it that's what she is really asking.)" << std::endl;
    internal_source_transition_state = ST_POWER_UP;

}

void ReaderHandler_tms_TOPIC_SOURCE_TRANSITION_STATE (ReaderThreadInfo * myReaderThreadInfo) {
    std::cout << "Receive Handler - received " << MY_READER_TOPIC_NAME << 
    " Ok Sonny. Thanks for Powering up (should check state to see if that's what he did.)" << std::endl;

}

long int hb_seq_count = 0; // specific hb sequence - To Do: don't like it being a global
void PeriodicWriterHandler_tms_TOPIC_HEARTBEAT (PeriodicWriterThreadInfo * myPeriodicWriterThreadInfo) {
    // Periodic Handler to send specific periodic data for Heartbeat topic 

    DDS_ReturnCode_t retcode;
    for (int i=0; i<tms_TOPIC_LAST_SENTINEL_ENUM; i++) {
        // for active threads check for our deadman_reset 
        if (thread_heartbeat_semaphores[i].topic_thread_active) {
            /*
            std::cout 
            << " hb_dm_fired: " << thread_heartbeat_semaphores[i].deadman_fired
            << " hb_miss_count: " << thread_heartbeat_semaphores[i].dm_miss_count  
            << " " << topic_name_array[i]
            <<std::endl;
            */
            // if deadman reset clear any count otherwise increment it
            if (thread_heartbeat_semaphores[i].deadman_fired)
                thread_heartbeat_semaphores[i].dm_miss_count=0;
            else
                thread_heartbeat_semaphores[i].dm_miss_count++;
            
            if (thread_heartbeat_semaphores[i].dm_miss_count == 3) {
                std::cout << "Thread deadman failure (3 times): " << topic_name_array[i] << std::endl;
                myPeriodicWriterThreadInfo->enabled = false; // turn off the heartbeat
            }

            thread_heartbeat_semaphores[i].deadman_fired = false; // reset the deadman
        }
    }
    

    std::cout << "Periodic Writer Handler - Heartbeat " << hb_seq_count << std::endl;
    retcode = myPeriodicWriterThreadInfo->periodicData->set_ulong("sequenceNumber", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, hb_seq_count);
    hb_seq_count++; // increment seq_count here so 1) it starts at 0 as prescribed by TMS, 2) changes once per write of heartbeat
    if (retcode != DDS_RETCODE_OK) {
        std::cerr << "heartbeat: Dynamic Data Set Error" << std::endl << std::flush;
    };

}
    