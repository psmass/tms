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
#include "constants.h"
#include "ddsEntities.h"
#include "topics.h"
#include "application.h"


namespace controller {

  using namespace application;

  ApplicationArguments Arguments;
  
// Delete all entities
static int participant_shutdown(
    DDSDomainParticipant *participant,
    const char *shutdown_message,
    int status)
{
    DDS_ReturnCode_t retcode;

    std::cout << shutdown_message << std::endl;

    if (participant != NULL) {
        // Cleanup everything created by this Participant
        retcode = participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK) {
            std::cerr << "delete_contained_entities error " << retcode
            << std::endl;
            status = EXIT_FAILURE;
        }

        retcode = DDSTheParticipantFactory->delete_participant(participant);
        if (retcode != DDS_RETCODE_OK) {
            std::cerr << "delete_participant error " << retcode << std::endl;
            status = EXIT_FAILURE;
        }
    }

    return status;
}


extern "C" int run_application(void) {

    const char *url_profiles[1] = { QOS_URL }; 
    DDS_Duration_t wait_period = {2,0};
    bool shutdown = false;

    std::string observabilityDomainStr =
            std::to_string(Arguments.observability_domain_id);
    DDS_ReturnCode_t retcode;

    application::set_env(
            "OBSERVABILITY_DOMAIN",
            observabilityDomainStr.c_str());
    application::set_env(
            "COLLECTOR_PEER",
            Arguments.collector_peer.c_str());
    application::set_env(
            "APPLICATION_NAME",
            Arguments.application_name.c_str());

    
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
            Arguments.domain_id,
            tms::QOS_LIBRARY,
	    Arguments.participant_profile.c_str(), // Device Info topic is huge
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    
    if (participant == NULL) {
        std::cout << "create_participant error" << std::endl;
        return participant_shutdown(participant,"create_participant error", EXIT_FAILURE);
    }

    DDSSubscriber * subscriber = participant->create_subscriber(
            DDS_SUBSCRIBER_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (subscriber == NULL) {
        std::cout << "create_subscriber error" << std::endl;
        return participant_shutdown(participant,"create_subscriber error", EXIT_FAILURE);
    }

    DDSPublisher * publisher = participant->create_publisher(
            DDS_PUBLISHER_QOS_DEFAULT,
            NULL /* listener */,
            DDS_STATUS_MASK_NONE);
    if (publisher == NULL) {
        std::cout << "create_publisher error" << std::endl;
        return participant_shutdown(participant, "create_publisher error", EXIT_FAILURE); 
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

    // CONTROLLER STATE MACHINE 
    //
    // The SM is transitioned by receiving specific commands / responses
    // while in specific states (or from a specific state). A Request Response
    // will not transition the SM. But must be received and correlated using
    // the sequence  number. It is assumed only one request is allowed to be
    // outstanding at a time. No further requests may be made until the
    // outstanding request is cleared (either by receiving a correlated RR
    // or manually via the app_state_obj.clearOutstandingReq().)
    //
    // The state machine will transition to ERROR if an unexpected command
    // or response is received (i.e., the SM is not in the proper state
    // to expect one) 
    //
    // INIT - send DI, ESS State and start  Heartbeat. Transition to DISCOVERY
    //        reset state vars reset from DI. Note DI setMCId so leave that
    //        the _mcIdSet flag true
    //
    // DISCOVERY - wait for Device DI.
    //             Transition to FOUND_NEW_DEVICE
    //
    // FOUND_NEW_DEVICE -  We check that this MC has been selected and that the
    //            device is AuthorizedForEnergization
    //
    // POWER_UP_AUTH - Note used - Powerup reply is sent when we recieve
    //                 (from the) the Powerup request topic reader        
    //
    // WAIT_CMD_IDLE - Idle State, check for things to do and do them
    //
    // ENERGIZE - This state is transitioned to after FOUND_NEW_DEVICE
    //            we check that the device is OFF and send a request to
    //            EngergizeStartStop OPERATIONAL. Here, we don't bother
    //            to repeat the request but assume it was received since
    //            loss of device would be noted wiht loss of Heartbeat and
    //            the request to energize is sent reliable.
    //
    // SHUT_DOWN   Device has been turned-off (CTRL-C) - Shutdown
    //
    // ERROR       For a given state an unexpected command or event
    //             occured (SM has no basis to select next state)
    //
    // default     Logical default if no states were matched, (theortically
    //             can't occur, unless bug in Device code)
    

     
    std::cout << "\n\n **** Starting Controller State Machine" << std::endl;

    app_state_obj.setControllerState(MC_INIT); // c'tor set to INIT anyway
    
    while (!shutdown)  {
      if (application::shutdown_requested)
	app_state_obj.setControllerState(MC_SHUT_DOWN);

      switch (app_state_obj.controllerState()) {

      case MC_INIT:
	std::cout << "\nCONTROLLER STATE: INIT" << std::endl;

        // reset state vars
        app_state_obj.setThisMCSelected(false);
        app_state_obj.setAuthorizedForEnergizing(false);
	controller_di_w.write();
        if (!controller_hb_w.threadRunning())  // Don't restart if reset DI
	  controller_hb_w.runThread();         // start sending heartbeat
            
        app_state_obj.setControllerState(MC_DISCOVERY);
	break;
      
      case MC_DISCOVERY:
	std::cout << "D " << std::flush; // sit printing 'Ds' while discovering MC
        // receiving DI will set the deviceId
        if (app_state_obj.deviceIdSet())
	  app_state_obj.setControllerState(MC_FOUND_NEW_DEVICE);
        break;
	    
      case MC_FOUND_NEW_DEVICE:
	std::cout << "F " << std::flush; // sit printing 'Fs' while FOUND_NEW_DEVICE
            
	// hold here until this MC has been selected and the device is authorized
	// for energizing (device request and is granted from the request topic
        if (app_state_obj.thisMCSelected() && app_state_obj.authorizedForEnergizing())
	  // go to background Idle waiting for AuthorizationToPowerupRequest
          app_state_obj.setControllerState(MC_ENERGIZE);
	break;
	
      case MC_ENERGIZE:
	std::cout << "\nCONTROLLER STATE: ENERGIZE" << std::endl;

	std::cout << "Controller Energizing device: " << app_state_obj.deviceID()
		  << " , current State: "
		  << app_state_obj.energyLevelEnumText(app_state_obj.deviceStartStopPresentLevel())
		  << "\n"
		  << std::endl;

	// In example, if we find a device is off, we'll turn it on, here since
	// we know the device just announced itself and the request is sent
	// reliably we only need to send it once. If the device goes away, we'll
	// loose heartbeat and expect to go back through DISCOVERY with it.
	if (app_state_obj.deviceStartStopPresentLevel() == tms::ESSL_OFF) {
	  // we are going to go from OFF -> OPERATIONAL - a real device probably
	  // would need to transition through other states. Below we'll hand in
	  // the deviceId only because in a real system the MC might be tracking
	  // an array of app_state_objs
          controller_ess_req_w.write(app_state_obj.deviceID(), tms::ESSL_OPERATIONAL);
	}
	app_state_obj.setControllerState(MC_WAIT_CMD_IDLE);
	break;
	
      case MC_WAIT_CMD_IDLE:
	std::cout << "." << std::flush;
	break;
	      
      case MC_SHUT_DOWN:
	std::cout << "\nCONTROLLER STATE: SHUTDOWN" << std::endl;
        shutdown = true;
	break;
	
      case MC_ERROR:
      default:
	std::cout << "\nCONTROLLER STATE: ERROR - Unexpected Event, resetting Target Device"
		  << std::endl;
	app_state_obj.setControllerState(MC_SHUT_DOWN);
      };

      NDDSUtility::sleep(wait_period); // let entities get up and running
 
    };

    // ** SHUTDOWN READER THREADS (and WRITER THREADS, if used) AND EXIT
    // controller_mmo_w.join() # uncomment if Thread Monitor vs. Listener used 
    std::cout << "Device Exiting" << std::endl;
    
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
    
    /* Delete all entities */
    return participant_shutdown(participant, "Controller Shutting down", EXIT_SUCCESS);

    // TO_DO do I need a delete_participant call to clean anything up?
}
} // namespace controller

int main(int argc, char *argv[]) {

    // Parse arguments and handle control-C
    parse_arguments(controller::Arguments, argc, argv, true);
    if (controller::Arguments.parse_result == application::PARSE_RETURN_EXIT) {
        return EXIT_SUCCESS;
    } else if (controller::Arguments.parse_result == application::PARSE_RETURN_FAILURE) {
        return EXIT_FAILURE;
    }

    // Sets Connext verbosity to help debugging
    NDDSConfigLogger::get_instance()->set_verbosity(controller::Arguments.verbosity);

    int status = controller::run_application();

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    DDS_ReturnCode_t retcode = DDSDomainParticipantFactory::finalize_instance();
    if (retcode != DDS_RETCODE_OK) {
        std::cerr << "finalize_instance error " << retcode << std::endl;
        status = EXIT_FAILURE;
    }

    return status;
 }

