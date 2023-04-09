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

#include <iostream>
#include <ndds/ndds_cpp.h>
#include "tmsExampleApp.h"   // rti generated file from idl to use model const Topics
#include "tmsExampleAppSupport.h"
#include "constants.h"
#include "ddsEntities.h"
#include "topics.h"
#include "application.h"

namespace device {

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
    // Create the participant
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
    
    // *** STANDUP PARTICIPANT AND PUBLISHER AND SUBSCRIBER ENTITIES
    // *
    // https://community.rti.com/static/documentation/connext-dds/5.3.0/doc/manuals/connext_dds/html_files/RTI_ConnextDDS_CoreLibraries_UsersManual/Content/UsersManual/PROFILE_QosPolicy__DDS_Extension__.htm
    // for doing this, but I like the way the Sensor Example uses 
    // TheParticipantFactory too load my_custom_qos_profiles.xml,we need
    // to modify the factory_qos profile
    DDS_DomainParticipantFactoryQos factory_qos;
    DDSTheParticipantFactory->get_qos(factory_qos);

    // We are only going to add one XML file to the url_profile sequence
    factory_qos.profile.url_profile.from_array(url_profiles, 1);
    DDSTheParticipantFactory->set_qos(factory_qos);

    // create DDS containser entities: Participant, Publisher and Subscriber
    // (with default QoS Profiles, we'll put the  QoS on the Readers and Writers)
     DDSDomainParticipant * participant = 
        DDSTheParticipantFactory->create_participant_with_profile(
	    Arguments.domain_id,
            tms::QOS_LIBRARY,
	    Arguments.participant_profile.c_str(),  // Device Info Topic is huge
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
        return participant_shutdown(participant,"create_publisher error", EXIT_FAILURE);
    }

    // ** CREATE TOPICS READERS AND WRITERS for the device
    // *
    // App specific Object used to track global state 
    topics::ApplicationStateObj app_state_obj(tms::ROLE_SOURCE);
					  
    // Typically create writers first as they are given to readers to respond.
    topics::HeartbeatGD_Wtr device_hb_w(participant, publisher, &app_state_obj);

    // Heartbeats and DeviceInfo topics are writen and read by each application,
    // so the readers take the writer instance handle to ignore our own writer
    DDS_InstanceHandle_t device_hb_w_instance =
      device_hb_w.getMyDataWriter()->get_instance_handle();

    // Reader API take a filter, but controller does not need one
    topics::Cft cft;        // create a disabled filter for the DeviceStatus Rdr
    /*
    // Device filters ConfigureDeviceRequests to it's deviceID
    std::string s1 = std::to_string(device_state_writer.getTopicSample()->myDeviceId.resourceId);
    std::string s2 = std::to_string(device_state_writer.getTopicSample()->myDeviceId.id);
    const char *param_list[] = { s1.c_str(), s2.c_str(), NULL };
    // std::cout << "****** " << param_list << " " << sizeof(param_list) << " " 
    << sizeof(param_list[0]) << std::endl;

    // create a filter for the ConfigureDeviceReader
    Cft cdr_cft(param_list, "targetDeviceId.resourceId = %0, targetDeviceId.id=%1" );
    */

    std::string p1 = app_state_obj.myID();
    app_state_obj.parameratizeStr(&p1);

    const char * param_list[] = { p1.c_str(), NULL };
    topics::Cft ate_reply_cft(param_list, "relatedRequestId.requestingDeviceId = %0" );
    topics::Cft ess_req_cft(param_list, "requestId.targetDeviceId = %0");
    
    topics::HeartbeatGD_Rdr device_hb_r(participant,
					subscriber,
					cft,
					&app_state_obj,
					device_hb_w_instance // suppress our own HB wtr
					);

    topics::DeviceInfoGD_Wtr device_di_w(participant, publisher, &app_state_obj);
    DDS_InstanceHandle_t device_di_w_instance =
      device_di_w.getMyDataWriter()->get_instance_handle();  
    topics::DeviceInfoGD_Rdr device_di_r(participant,
					 subscriber,
					 cft,
					 &app_state_obj,
					 device_di_w_instance
					 );

    topics::AMCStateGD_Wtr device_amc_state_w(participant, publisher, &app_state_obj);
    topics::ATEReqGD_Wtr device_ate_req_w(participant, publisher, &app_state_obj);
    topics::ATEResultGD_Wtr device_ate_result_w(participant, publisher, &app_state_obj);
    topics::ATEReplyGD_Rdr device_ate_reply_r(participant,
					      subscriber,
					      ate_reply_cft,
					      &app_state_obj,
					      &device_ate_result_w
					      );

    topics::ReplyGD_Wtr device_reply_w(participant, publisher, &app_state_obj);
    topics::ESSReqGD_Rdr device_ess_req_r(participant,
					  subscriber,
					  ess_req_cft,
					  &app_state_obj,
					  &device_reply_w);
    topics::ESSStateGD_Wtr device_ess_state_w(participant, publisher, &app_state_obj);

    // *** OPTIONALLY START WRITER LISTENER or MONITOR THREADS
    // *
    // Create a listener if we'd rather use vs. event waitset thread.
    // Here we use a Default listener we created, but you can create your own
    // listener(s) (and as many as you need if topic specific)
    entities::DefaultDataWriterListener * listener = new entities::DefaultDataWriterListener();
    // not needed on hb, since periodic will run a thread (which monitors by default)
    // device_hb_w.getMyDataWriter()->set_listener(listener); 
    
    // *** START READER THREADS (Read data and monitors statuses_
    // *
    device_hb_r.runThread();
    device_di_r.runThread();
    device_ate_reply_r.runThread();
    device_ess_req_r.runThread();

    NDDSUtility::sleep(wait_period); // let threads spin up and settle down for output readabilty 

    // DEVICE STATE MACHINE 
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
    // or response is received.
    //
    // INIT - send DI, ESS State and start  Heartbeat. Transition to DISCOVERY
    //        reset state vars reset from DI. Note DI setMCId so leave that
    //        the _mcIdSet flag true
    //
    // DISCOVERY - wait for MasterController DI, select MC.
    //             Transition to FOUND_NEW_CONTROLLER
    //
    // FOUND_NEW_CONTROLLER - Set the new controller and transition immediately
    //                        to POWER_UP_AUTH. Here, on a real device,  we'd do
    //                        the MC selection process              
    //
    // POWER_UP_AUTH - send out AuthorizationToEnergize request every 10 sec
    //                 note: theoretically we only need to send this once as its
    //                 reliable. If the MC went away and came back we'd get a new DI
    //                 and go back through INIT. Once we are Authorized,
    //                 transition to WAIT_CMD_ILDE
    //
    // WAIT_CMD_IDLE - Idle State, check for things to do and do them
    //
    // ENERGIZE - one example of something to do when present and future state differ
    //
    // SHUT_DOWN     Device has been turned-off (CTRL-C) - Shutdown
    //
    // ERROR         For a given state an unexpected command or event
    //               occured (SM has no basis to select next state)
    //
    // default       Logical default if no states were matched, (theortically
    //               can't occur, unless bug in Device code)

    std::cout << "\n\n **** Starting Device State Machine" << std::endl;

    app_state_obj.setDeviceState(D_INIT); // c'tor set to INIT anyway
    int count_in_state = 0;

    while (!shutdown)  {
      if (application::shutdown_requested)
	app_state_obj.setDeviceState(D_SHUT_DOWN);
 
      switch (app_state_obj.deviceState()) {
        case D_INIT:
	  std::cout << "\nDEVICE STATE: INIT" << std::endl;
	  // reset state vars (if we came back to INIT from a new DIscovery
	  app_state_obj.setAuthorizedForEnergizing(false);
	  device_ess_state_w.reset();
	  device_ess_state_w.write();
	  app_state_obj.clearOutstandingRequest();
	  device_di_w.write();  // di write force controller back to init
	  if (!device_hb_w.threadRunning())   // in case already running
	    device_hb_w.runThread();          // don't start again
	  
	  app_state_obj.setDeviceState(D_DISCOVERY);
	  break;
	  
        case D_DISCOVERY:
	  // just print 'D's while waiting for Controller DI
	  std::cout << "D " << std::flush;
	  if (app_state_obj.mcIdSet()) // receiving a DI will set the MC Id
	    app_state_obj.setDeviceState(D_FOUND_NEW_CONTROLLER);
 	  break;
	  
        case D_FOUND_NEW_CONTROLLER:
	  std::cout << "\nDEVICE STATE: FOUND NEW CONTROLLER" << std::endl;
	  // TODO: Implement tms Master Controller Selection Algorithm.
          // Here once we know an MC, we'll select it first come, first serve
          // returning an ActiveMicrogridControllerState
	  device_amc_state_w.setMCIDinSample(app_state_obj.controllerID());
	  device_amc_state_w.write();
	  app_state_obj.setDeviceState(D_POWER_UP_AUTH);
	  break;
	  
        case D_WAIT_CMD_IDLE:
	  // Here we sit waiting for a command
	  std::cout << "." << std::flush;
	  if (app_state_obj.deviceStartStopPresentLevel() !=
	      app_state_obj.deviceStartStopFutureLevel())
	    app_state_obj.setDeviceState(D_ENERGIZE);
 	  break;
	  
        case D_POWER_UP_AUTH:
	  std::cout << "P " << std::flush; // sit here printing P's
	  // Theoretically, sending this once should work or if the MC went
          // away, we'd go back through discovery. We know there is a good MC
          // and the request is sent reliably.
          count_in_state +=1;
	  if (count_in_state % 10 == 0) { // request to power up every 10 sec
	    app_state_obj.clearOutstandingRequest();
	    device_ate_req_w.write();
	  }
          if (app_state_obj.authorizedForEnergizing()) // goto Idle and await commands
	      app_state_obj.setDeviceState(D_WAIT_CMD_IDLE);
	  break;
	  
        case D_ENERGIZE:
	  std::cout << "\nDEVICE STATE: ENERGIZE" << std::endl;
          // energize in a separate state as likely we'd have lots of things
          // to check before just writing the state change, also, a real
          // generator would likely neeed to transition through a number of
          // states to go from OFF to OPERATIONAL
          // assumes we did what the generator does to get to the future level
	  app_state_obj.setDeviceStartStopPresentLevel\
	    (app_state_obj.deviceStartStopFutureLevel());
	  device_ess_state_w.getTopicSample()->presentLevel = \
	    app_state_obj.deviceStartStopPresentLevel();
	  device_ess_state_w.write();
 
	  app_state_obj.setDeviceState(D_WAIT_CMD_IDLE); // return idle loop
 	  break;
	  
        case D_SHUT_DOWN:
	  shutdown = true;
	  break;
	  
        case D_ERROR:
        default:
	  std::cout << "\nDEVICE STATE: ERROR" << std::endl;
	  app_state_obj.setDeviceState(D_SHUT_DOWN);
      };
            
      NDDSUtility::sleep(wait_period); // let entities get up and running
    };
    
    // ** SHUTDOWN READER THREADS (and WRITER THREADS, if used) AND EXIT
    // controller_mmo_w.join() # uncomment if Thread Monitor vs. Listener used 
    std::cout << "Device Exiting" << std::endl;

    if (device_hb_w.threadRunning())  // in case ^C hit prior to thread running
      pthread_cancel(device_hb_w.Writer::getThreadId());      
    pthread_cancel(device_hb_r.Reader::getThreadId());
    pthread_cancel(device_di_r.Reader::getThreadId());
    pthread_cancel(device_ate_reply_r.Reader::getThreadId());
    pthread_cancel(device_ess_req_r.Reader::getThreadId());

    delete listener;

    NDDSUtility::sleep(wait_period);   // give threads a second to shut down

    /* Delete all entities */
    return participant_shutdown(participant, "DeviceShutting down", EXIT_SUCCESS);
    
} // run_device_application
} // namespace device


int main(int argc, char *argv[]) {

    // Parse arguments and handle control-C
    parse_arguments(device::Arguments, argc, argv, false);
    if (device::Arguments.parse_result == application::PARSE_RETURN_EXIT) {
        return EXIT_SUCCESS;
    } else if (device::Arguments.parse_result == application::PARSE_RETURN_FAILURE) {
        return EXIT_FAILURE;
    }

    // Sets Connext verbosity to help debugging
    NDDSConfigLogger::get_instance()->set_verbosity(device::Arguments.verbosity);

    int status = device::run_application();

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    DDS_ReturnCode_t retcode = DDSDomainParticipantFactory::finalize_instance();
    if (retcode != DDS_RETCODE_OK) {
        std::cerr << "finalize_instance error " << retcode << std::endl;
        status = EXIT_FAILURE;
    }

    return status;
}
