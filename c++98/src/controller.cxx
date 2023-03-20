/*
 * (c) Copyright, Real-Time Innovations, 2022.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.
 */

#include <algorithm>
#include <iostream>
#include <ndds/ndds_cpp.h>
#include "tmsExampleApp.h"   // rti generated file from idl to use model const Topics
#include "tmsExampleAppSupport.h"
#include "ddsEntities.h"
#include "topics.h"
#include "application.h"


namespace controller
{
const char* QOS_URL = "../model_distroA/tmsExampleApp.xml";

static int participant_shutdown(DDSDomainParticipant *participant)
{
    DDS_ReturnCode_t retcode;
    int status = 0;

    if (participant != NULL) {
        retcode = participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK) {
            std::cout <<  "delete_contained_entities error: " << retcode << std::endl;
            status = -1;
        }

        retcode = DDSTheParticipantFactory->delete_participant(participant);
        if (retcode != DDS_RETCODE_OK) {
            std::cout <<  "delete_participant error: " << retcode << std::endl;
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
        std::cout << "finalize_instance error" << retcode << std::endl;
        status = -1;
    }
    */
    return status;
}


extern "C" int run_controller_application(int domain_id) {

    const char *url_profiles[1] = { QOS_URL }; 
    DDS_Duration_t wait_period = {2,0}; 

    // https://community.rti.com/static/documentation/connext-dds/5.3.0/doc/manuals/connext_dds/html_files/RTI_ConnextDDS_CoreLibraries_UsersManual/Content/UsersManual/PROFILE_QosPolicy__DDS_Extension__.htm
    // for doing this, but I like the way the Sensor Example uses 
    // TheParticipantFactory too load my_custom_qos_profiles.xml,we need
    // to modify the factory_qos profile
    DDS_DomainParticipantFactoryQos factory_qos;
    DDSTheParticipantFactory->get_qos(factory_qos);

    // We are only going to add one XML file to the url_profile sequence
    factory_qos.profile.url_profile.from_array(url_profiles, 1);
    DDSTheParticipantFactory->set_qos(factory_qos);

    // create DDS container entities: Participant, Publisher and Subscriber
    // (with default QoS Profiles, we'll put the  QoS on the Readers and Writers)
     DDSDomainParticipant * participant = 
        DDSTheParticipantFactory->create_participant_with_profile(
            domain_id,
            tms::QOS_LIBRARY,
	    "LargeTopicParticipantQoS", // Device Info topic is huge
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    
    if (participant == NULL) {
        std::cout << "create_participant error" << std::endl;
        participant_shutdown(participant);
        return -1;
    }

    DDSSubscriber * subscriber = participant->create_subscriber(
            DDS_SUBSCRIBER_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (subscriber == NULL) {
        std::cout << "create_subscriber error" << std::endl;
        participant_shutdown(participant);
        return -1;
    }

    DDSPublisher * publisher = participant->create_publisher(
            DDS_PUBLISHER_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (publisher == NULL) {
        std::cout << "create_publisher error" << std::endl;
        participant_shutdown(participant);
         return -1;
    }

    // App specific Object used to track global state 
    topics::ApplicationStateObj app_state_obj (tms::ROLE_MICROGRID_CONTROLLER);

    // create the device writer first since this devices ID is loaded in the c'tor
    topics::HeartbeatMC_Wtr controller_hb_w(participant, publisher, &app_state_obj);
    DDS_InstanceHandle_t controller_hb_w_instance =
      controller_hb_w.getMyDataWriter()->get_instance_handle();
    
    // Reader API take a filter, but controller does not need one
    topics::Cft cft;        // create a disabled filter for the DeviceStatus Rdr
    
    topics::HeartbeatMC_Rdr controller_hb_r(participant,
				    subscriber,
				    cft,
				    &app_state_obj,
				    controller_hb_w_instance
				    );

    topics::DeviceInfoMC_Wtr controller_di_w(participant, publisher, &app_state_obj);
    DDS_InstanceHandle_t controller_di_w_instance = \
      controller_di_w.getMyDataWriter()->get_instance_handle();
    topics::DeviceInfoMC_Rdr controller_di_r(participant,
					 subscriber,
					 cft,
					 &app_state_obj,
					 controller_di_w_instance
					 );

    topics::AMCStateMC_Rdr controller_amc_state_r(participant,
						  subscriber,
						  cft,
						  &app_state_obj
						  );
    
    topics::ATEReplyMC_Wtr controller_ate_reply_w(participant, publisher, &app_state_obj);
						  
					    
    topics::ATEReqMC_Rdr controller_ate_req_r(participant,
					       subscriber,
					       cft,
					       &app_state_obj,
					       &controller_ate_reply_w
					       );

    topics::ATEResultMC_Rdr controller_ate_result_r(participant,
						    subscriber,
						    cft,
						    &app_state_obj
						    );

    topics::ESSReqMC_Wtr controller_ess_req_w(participant, publisher, &app_state_obj);

    topics::ReplyMC_Rdr controller_reply_r(participant,
					   subscriber,
					   cft,
					   &app_state_obj
					   );
  
    topics::ESSStateMC_Rdr controller_ess_state_r(participant,
						  subscriber,
						  cft,
						  &app_state_obj
						  );
    
    // Create a listener if we'd rather use vs. event waitset thread.
    // Here we use a Default listener we created, but you can create your own
    // listener(s) (and as many as you need if topic specific)
    entities::DefaultDataWriterListener * listener = new entities::DefaultDataWriterListener();
    // not needed on hb, since periodic will run a thread (which monitors by default)
    // device_hb_w.getMyDataWriter()->set_listener(listener); 

    // *** START READER THREADS (Reads data and monitors statuses)
    controller_hb_r.runThread();
    controller_di_r.runThread();
    controller_amc_state_r.runThread();
    controller_ate_req_r.runThread();
    controller_ate_result_r.runThread();
    controller_reply_r.runThread();
    controller_ess_state_r.runThread();
  
    while (!application::shutdown_requested)  {
        // Controller State Machine goes here;
        // In this case, we simply publish current deviceState upon change.
        
        
        std::cout << "." << std::flush;        
        NDDSUtility::sleep(wait_period); // let entities get up and running
    }

    if (controller_hb_w.threadRunning()) // in case ^C hit prior to thread running
      pthread_cancel(controller_hb_w.Writer::getThreadId());
    pthread_cancel(controller_hb_r.Reader::getThreadId());
    pthread_cancel(controller_di_r.Reader::getThreadId());
    pthread_cancel(controller_amc_state_r.Reader::getThreadId());
    pthread_cancel(controller_ate_req_r.Reader::getThreadId());
    pthread_cancel(controller_ate_result_r.Reader::getThreadId());
    pthread_cancel(controller_reply_r.Reader::getThreadId());
    pthread_cancel(controller_ess_state_r.Reader::getThreadId());
  
    delete listener;

    // give threads a second to shut down
    NDDSUtility::sleep(wait_period); // give time for entities to shutdown

    // deleting topics, seems the python threads hang if you abruptly terminate
    // readers to topics with deadlines?
    controller_hb_r.deleteTopic();
    controller_di_r.deleteTopic();
    controller_amc_state_r.deleteTopic();
    controller_ate_req_r.deleteTopic();
    // controller_hb_w.deleteTopic(); // same topic as the reader
    // controller_di_w.deleteTopic(); // same topic as the reader
    controller_ate_result_r.deleteTopic();
    controller_reply_r.deleteTopic();
    controller_ess_state_r.deleteTopic();
    controller_ate_reply_w.deleteTopic();
    controller_ess_req_w.deleteTopic();
    
    /* Delete all entities */
    return participant_shutdown(participant);
    std::cout << "Controller main thread shutting down" << std::endl;

    // TO_DO do I need a delete_participant call to clean anything up?
}
} // namespace controller

int main(int argc, char *argv[]) {

    using namespace application;

    int domain_id = 0;

    setup_signal_handlers();

    
    try {
        return controller::run_controller_application(domain_id);
    }
    catch (const std::exception &ex) {
        // This will catch DDS exceptions
        std::cerr << "Exception in run_controller_application(): " << ex.what()
                  << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

