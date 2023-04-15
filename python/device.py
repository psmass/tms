"""
 * (c) Copyright, Real-Time Innovations, 2022.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.
 """


import sys
import os
import logging
import tmsConstants
import constants
import argparse
from os import path as osPath
from enum import IntEnum
from time import sleep
import rti.connextdds as dds
import application
import topics
import ddsEntities

filepath = osPath.dirname(osPath.realpath(__file__))


def device_main(domain_id):
    print("Device Powering Up")
    logging.info('Device Powering Up')

    shutdown = False

    # for python we'll just statically set these
    os.environ["OBSERVABILITY_DOMAIN"]="2"
    os.environ["APPLICATION_NAME"]="Device_DGen1234"
    os.environ["COLLECTOR_PEER"]="udpv4://localhost"
    os.environ["APPLICATION_DOMAIN"]=str(domain_id)

    print("Running with parameters:")
    print("\tApplication Resource Name: /applications/",os.environ["APPLICATION_NAME"])
    print("\tApplication Domain: ", os.environ["APPLICATION_DOMAIN"])
    print("\tObserability Domain: ", os.environ["OBSERVABILITY_DOMAIN"])
    print("\tCollector Peer: ", os.environ["COLLECTOR_PEER"])
    print("\tUsing Participant Library (hardcoded in XML for Particpant Qos):")
    print("\t\tParticipant_Profile_With_Observability_Over_LAN")
  
    # *** STANDUP PARTICIPANT WITH READERS AND WRITERS XML APP CREATE
    qos_provider = dds.QosProvider(constants.QOS_URL)
    participant = qos_provider.create_participant_from_config(tmsConstants.generator_device.DEVICE1)

    # *** ENABLE THE OBSERBABILITY LIBRARY IN THE XML FILE    
    provider_params = dds.QosProviderParams()
    provider_params.url_profile = [constants.QOS_URL]
    dds.QosProvider.default_provider_params = provider_params
    
    # *** DECLARE OUR APP_STATE_OBJ and (FIND) TOPICS for the device
    # (creates: readers, writers, and threads). All request reader topics also need
    # need the request response writer to post a response.
    # xml app create, so they already exist - here the base clas simply looks
    # up the handles so we can manipulate them.
    
    app_state_obj = topics.ApplicationStateObj(tmsConstants.tms_DeviceRole.ROLE_SOURCE)
    
    device_di_w = topics.DeviceInfoGD_Wtr(participant, app_state_obj)
    device_di_r = topics.DeviceInfoGD_Rdr(participant, app_state_obj, device_di_w.writer.instance_handle)
    device_hb_w = topics.HeartbeatGD_Wtr(participant, app_state_obj)
    device_hb_r = topics.HeartbeatGD_Rdr(participant, app_state_obj, device_hb_w.writer.instance_handle)
    device_amc_state_w = topics.AMCStateGD_Wtr(participant, app_state_obj)
    device_ate_req_w = topics.ATEReqGD_Wtr(participant, app_state_obj)
    device_ate_res_w = topics.ATEResultGD_Wtr(participant, app_state_obj)
    device_ate_rep_r = topics.ATERepGD_Rdr(participant, app_state_obj, device_ate_res_w)
    device_reply_w = topics.ReplyGD_Wtr(participant, app_state_obj)
    device_ess_req_r = topics.ESSReqGD_Rdr(participant, app_state_obj, device_reply_w)
    device_ess_state_w = topics.ESSStateGD_Wtr(participant, app_state_obj)

    
    # *** START WRITER LISTENERS or MONITOR THREADS (This step Optional)
    # device_di_w.start() # start a statuses monitor thread on the DA Writer
    # or...#listener, Heartbeat is periodic and will run as a thread
    device_di_w.writer.set_listener(ddsEntities.DefaultWriterListener(),
                                    dds.StatusMask.ALL)


    
    # *** START READER THREADS (Reads data and monitors statuses)
    device_di_r.start()
    device_hb_r.start()
    device_ate_rep_r.start()
    device_ess_req_r.start()
    
    sleep(5) # let threads spin up and settle down (output readabilty)

    # DEVICE STATE MACHINE 
    #
    # The SM is transitioned by receiving specific commands / responses
    # while in specific states (or from a specific state). A Request Response
    # will not transition the SM. But must be received and correlated using
    # the sequence  number. It is assumed only one request is allowed to be
    # outstanding at a time. No further requests may be made until the
    # outstanding request is cleared (either by receiving a correlated RR
    # or manually via the app_state_obj.clearOutstandingReq().)
    #
    # The state machine will transition to ERROR if an unexpected command
    # or response is received. 
    #
    # INIT - send DI, ESS State and start  Heartbeat. Transition to DISCOVERY
    #        reset state vars reset from DI. Note DI setMCId so leave that
    #        the _mcIdSet flag true
    #
    # DISCOVERY - wait for MasterController DI, select MC.
    #             Transition to FOUND_NEW_CONTROLLER
    #
    # FOUND_NEW_CONTROLLER - Set the new controller and transition immediately
    #                        to POWER_UP_AUTH. Here, on a real device,  we'd do
    #                        the MC selection process              
    #
    # POWER_UP_AUTH - send out AuthorizationToEnergize request every 10 sec
    #                 note: theoretically we only need to send this once as its
    #                 reliable. If the MC went away and came back we'd get a new DI
    #                 and go back through INIT. Once we are Authorized,
    #                 transition to WAIT_CMD_ILDE
    #
    # WAIT_CMD_IDLE - Idle State, check for things to do and do them
    #
    # ENERGIZE - one example of something to do when present and future state differ
    #
    # SHUT_DOWN     Device has been turned-off (CTRL-C) - Shutdown
    #
    # ERROR         For a given state an unexpected command or event
    #               occured (SM has no basis to select next state)
    #
    # else          Logical default if no states were matched, (theortically
    #               can't occur, unless bug in Device code)
    #
    #

    print("\n\n **** Starting State Machine")
    logging.info('Starting State Machine')
    
    count_in_state = 0

    while not shutdown:
        if not application.run_flag:
            app_state_obj.setAppState(constants.DeviceState.SHUT_DOWN)

        if app_state_obj.appState() == constants.DeviceState.INIT:
            print("\nDEVICE STATE: INIT")
            # reset state vars 
            app_state_obj._authorizedForEnergizing = False
            app_state_obj._masterControllerId = ''
            # reinitialize state object
            device_ess_state_w.__init__(participant, app_state_obj)
            device_di_w.write() # durable
            if not device_hb_w.is_alive(): # Don't restart if reset DI 
                device_hb_w.start() # start sending heartbeats

            device_ess_state_w.write() # publish on start
                
            app_state_obj.setAppState(constants.DeviceState.DISCOVERY)

        elif app_state_obj.appState() == constants.DeviceState.DISCOVERY:
            print("D ", end="", flush = True) # sit printing 'Ds' while discovering MC
            # receiving a DI will set the mcId 
            if app_state_obj._mcIdSet:
                app_state_obj.setAppState(constants.DeviceState.FOUND_NEW_CONTROLLER)

        elif app_state_obj.appState() == constants.DeviceState.FOUND_NEW_CONTROLLER:
            print("\nDEVICE STATE: FOUND NEW CONTROLLER") 
            # TODO: Implement tms Master Controller Selection Algorithm.
            # Here once we know an MC, we'll select it first come, first serve
            # returning an ActiveMicrogridControllerState
            device_amc_state_w.set_mc_in_sample(app_state_obj._masterControllerId)
            device_amc_state_w.write()

            app_state_obj.setAppState(constants.DeviceState.POWER_UP_AUTH) # Ask to PU

        elif app_state_obj.appState() == constants.DeviceState.POWER_UP_AUTH:
            print("P ", end="", flush = True) # sit printing 'Ps' - POWER_UP_AUTH
            # Theoretically, sending this once should work or if the MC went
            # away, we'd go back through discovery. We know there is a good MC
            # and the request is sent reliably.
            count_in_state +=1
            if count_in_state % 10 == 0: # request to power up every 10 sec
                app_state_obj.clearOutstandingRequest()
                device_ate_req_w.write()
            if app_state_obj._authorizedForEnergizing: # goto Idle and await commands
                app_state_obj.setAppState(constants.DeviceState.WAIT_CMD_IDLE) 
                 
        elif app_state_obj.appState() == constants.DeviceState.WAIT_CMD_IDLE:
            # Here we sit waiting for a command
            #print("Device awating command")
            print(".", end="", flush=True)
            if app_state_obj._deviceStartStopPresentLevel != \
               app_state_obj._deviceStartStopFutureLevel:
                app_state_obj.setAppState(constants.DeviceState.ENERGIZE)
               
                
        elif app_state_obj.appState() == constants.DeviceState.ENERGIZE:
            print("\nDEVICE STATE: ENGERGIZE")
            # energize in a separate state as likely we'd have lots of things
            # to check before just writing the state change, also, a real
            # generator would likely neeed to transition through a number of
            # states to go from OFF to OPERATIONAL
            # assumes we did what the generator does to get to the future level
            app_state_obj._deviceStartStopPresentLevel = app_state_obj._deviceStartStopFutureLevel 
            device_ess_state_w._sample["presentLevel"]=\
                                         app_state_obj._deviceStartStopPresentLevel 
            device_ess_state_w.write()
 
            app_state_obj.setAppState(constants.DeviceState.WAIT_CMD_IDLE) # return idle loop

        elif app_state_obj.appState() == constants.DeviceState.SHUT_DOWN:
            print("\nDEVICE STATE: SHUT_DOWN")
            shutdown = True
                                   
        elif app_state_obj.appState() == constants.DeviceState.ERROR:
            print("\nDEVICE STATE: ERROR - Unexpected Event, resetting Device")
            # TODO: Printout currentState, and Event that occurred
            app_state_obj.setAppState(constants.DeviceState.SHUT_DOWN)

        else:
            logging.error("State Machine else clause hit - Device in undefined state")
        
        sleep(1)

    # ** SHUTDOWN READER THREADS (and WRITER THREADS, if used) AND EXIT
    # device_mmr_w.join() # uncomment if Thread Monitor vs. Listener used
    if device_hb_w.is_alive(): # incase we ^C prior to heartbeat.start() 
        device_hb_w.join() 
    device_di_r.join()
    device_ate_rep_r.join()
    device_ess_req_r.join()
         
    print("Device Exiting")
    logging.info('Device Exiting')


if __name__ == "__main__":
    #logging.basicConfig(filename='device.log', encoding='utf-8', level=logging.INFO)
    logging.basicConfig(handlers=[logging.FileHandler(filename="./device.log", 
                                                 encoding='utf-8', mode='a+')],
                    format="%(asctime)s %(name)s:%(levelname)s:%(message)s", 
                    datefmt="%F %A %T", 
                    level=logging.INFO)
    parser = argparse.ArgumentParser(
        description="RTI Connext DDS Example: Command Response Device)"
    )
    parser.add_argument("-d", "--domain", type=int, default=0, help="DDS Domain ID")

    args = parser.parse_args()
    assert 0 <= args.domain < 233

    device_main(args.domain)  # uncomment for debug

    """
    try:
        device_main(args.domain)
    except:
        print("Exception Running Device")
    """

