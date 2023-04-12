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
 */
"""
import sys
import os
import logging
import argparse
from os import path as osPath
from time import sleep
import rti.connextdds as dds
import application
import constants
import tmsConstants
import topics
import ddsEntities

filepath = osPath.dirname(osPath.realpath(__file__))


def controller_main(domain_id):
    print("Controller Powering Up")
    logging.info('Controller Powering Up')

    shutdown = False
    # for python we'll just statically set these
    os.environ["OBSERVABILITY_DOMAIN"]="2"
    os.environ["APPLICATION_NAME"]="Controller_MC0001"
    os.environ["COLLECTOR_PEER"]="udpv4://localhost"

    print("Running with parameters:")
    print("\tApplication Resource Name: /applications/",os.environ["APPLICATION_NAME"])
    print("\tObserability Domain: ", os.environ["OBSERVABILITY_DOMAIN"])
    print("\tCollector Peer: ", os.environ["COLLECTOR_PEER"])
    print("\tUsing Participant Library (hardcoded in XML for Particpant Qos):")
    print("\t\tParticipant_Profile_With_Observability_Over_LAN")
      
    # *** STANDUP PARTICIPANT WITH READERS AND WRITERS XML APP CREATE    
    qos_provider = dds.QosProvider(constants.QOS_URL)
    participant = qos_provider.create_participant_from_config(tmsConstants.master_controller.MASTER_CONTROLLER1)

    # *** DECLARE OUR APP_STATE_OBJ and (FIND) TOPICS for the device
    # (creates: readers, writers, and threads). All request reader topics also need
    # need the request response writer to post a response.
    # xml app create, so they already exist - here the base class simply looks
    # up the handles so we can manipulate them.
    app_state_obj = topics.ApplicationStateObj(tmsConstants.tms_DeviceRole.ROLE_MICROGRID_CONTROLLER)

    controller_di_w = topics.DeviceInfoMC_Wtr(participant, app_state_obj)
    controller_di_r = topics.DeviceInfoMC_Rdr(participant, app_state_obj,
                                              controller_di_w.writer.instance_handle)
    controller_hb_w = topics.HeartbeatMC_Wtr(participant, app_state_obj)
    controller_hb_r = topics.HeartbeatMC_Rdr(participant, app_state_obj,
                                             controller_hb_w.writer.instance_handle)

    controller_amc_state_r = topics.AMCStateMC_Rdr(participant, app_state_obj)
    controller_ate_rep_w = topics.ATERepMC_Wtr(participant, app_state_obj)
    controller_ate_req_r = topics.ATEReqMC_Rdr(participant, app_state_obj, controller_ate_rep_w)
    controller_ate_result_r = topics.ATEResultMC_Rdr(participant, app_state_obj)
    controller_ess_req_w = topics.ESSReqMC_Wtr(participant, app_state_obj)
    controller_reply_r = topics.ReplyMC_Rdr(participant, app_state_obj)
    controller_ess_state_r = topics.ESSStateMC_Rdr(participant, app_state_obj)
    
    # *** START WRITER LISTENERS or MONITOR THREADS (This step Optional)
    # device_di_w.start() # start a statuses monitor thread on the DA Writer
    # or...#listener, Heartbeat is periodic and will run as a thread
    controller_di_w.writer.set_listener(ddsEntities.DefaultWriterListener(),
                                        dds.StatusMask.ALL)

    # *** START READER THREADS (Reads data and monitors statuses)
    controller_di_r.start()
    controller_hb_r.start()
    controller_amc_state_r.start()
    controller_ate_req_r.start()
    controller_ate_result_r.start()
    controller_reply_r.start()
    controller_ess_state_r.start()

    sleep(5) # wait for threads to spin up and settle printing (output readability)

    # CONTROLLER STATE MACHINE 
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
    # or response is received (i.e., the SM is not in the proper state
    # to expect one) 
    #
    # INIT - send DI, ESS State and start  Heartbeat. Transition to DISCOVERY
    #        reset state vars reset from DI. Note DI setMCId so leave that
    #        the _mcIdSet flag true
    #
    # DISCOVERY - wait for Device DI.
    #             Transition to FOUND_NEW_DEVICE
    #
    # FOUND_NEW_DEVICE -  We check that this MC has been selected and that the
    #            device is AuthorizedForEnergization
    #
    # POWER_UP_AUTH - Note used - Powerup reply is sent when we recieve
    #                 (from the) the Powerup request topic reader        
    #
    # WAIT_CMD_IDLE - Idle State, check for things to do and do them
    #
    # ENERGIZE - This state is transitioned to after FOUND_NEW_DEVICE
    #            we check that the device is OFF and send a request to
    #            EngergizeStartStop OPERATIONAL. Here, we don't bother
    #            to repeat the request but assume it was received since
    #            loss of device would be noted wiht loss of Heartbeat and
    #            the request to energize is sent reliable.
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
    
    while not shutdown:
        if not application.run_flag:
            app_state_obj.setAppState(constants.ControllerState.SHUT_DOWN)
            
        if app_state_obj.appState() == constants.ControllerState.INIT:
            print("\nCONTROLLER STATE: INIT")

            # reset state vars
            app_state_obj._thisMCSelected=False
            app_state_obj._authorizedForEnergizing=False
            controller_di_w.write() # only need to write this once since QoS Durable    
            if not controller_hb_w.is_alive(): # Don't restart if reset DI
                controller_hb_w.start() # start sending heartbeat
            
            app_state_obj.setAppState(constants.ControllerState.DISCOVERY)
            
        elif app_state_obj.appState() == constants.ControllerState.DISCOVERY:
            print("D ", end="", flush = True) # sit printing 'Ds' while discovering MC
            
            # receiving DI will set the deviceId
            if app_state_obj._deviceIdSet:
                app_state_obj.setAppState(constants.ControllerState.FOUND_NEW_DEVICE)
            
        elif app_state_obj.appState() == constants.ControllerState.FOUND_NEW_DEVICE:
            print("F ", end="", flush = True) # sit printing 'Fs' while FOUND_NEW_DEVICE
            
            # hold here until this MC has been selected and the device is authorized
            # for energizing (device request and is granted from the request topic
            if app_state_obj._thisMCSelected and app_state_obj._authorizedForEnergizing:
                # go to background Idle waiting for AuthorizationToPowerupRequest
                app_state_obj.setAppState(constants.ControllerState.ENERGIZE)
            
        elif app_state_obj.appState() == constants.ControllerState.ENERGIZE:
            print("\nCONTROLLER STATE: ENERGIZE")

            print("Controller Energizing device {d_id}, current State: {e_state}".
                  format(d_id=app_state_obj._deviceId,
                     e_state=app_state_obj._deviceStartStopPresentLevel))

            # In example, if we find a device is off, we'll turn it on, here since
            # we know the device just announced itself and the request is sent
            # reliably we only need to send it once. If the device goes away, we'll
            # loose hearbeat and expect to go back through DISCOVERY with it.
            if app_state_obj._deviceStartStopPresentLevel == \
               tmsConstants.tms_EnergyStartStopLevel.ESSL_OFF:
                # we are going to go from OFF -> OPERATIONAL - a real device probably
                # would need to transition through other states. Below we'll hand in
                # the deviceId only because in a real system the MC might be tracking
                # an array of app_state_objs
                controller_ess_req_w.write(app_state_obj._deviceId,
                    tmsConstants.tms_EnergyStartStopLevel.ESSL_OPERATIONAL)
            app_state_obj.setAppState(constants.ControllerState.WAIT_CMD_IDLE)
            
        elif app_state_obj.appState() == constants.ControllerState.WAIT_CMD_IDLE:
            #print("Controller Steady-state - Waiting for other Device Requests")
            print(".", end="", flush=True)

        elif app_state_obj.appState() == constants.ControllerState.SHUT_DOWN:
            print("\nCONTROLLER STATE: SHUTDOWN")
            shutdown = True

        elif app_state_obj.appState() == constants.ControllerState.ERROR:
            print("\nCONTROLLER STATE: ERROR - Unexpected Event, resetting Target Device")

            # TODO: Printout, Device and event
            app_state_obj.setAppState(constants.ControllerState.SHUT_DOWN)

        else:
            print("Else")
            logging.error('State Machine hit default(impossible?) else clause')
            
        sleep(1)

    # ** SHUTDOWN READER THREADS (and WRITER THREADS, if used) AND EXIT
    # controller_mmo_w.join() # uncomment if Thread Monitor vs. Listener used 
    print("Controller Exiting")
    logging.info('Controller Exiting')
    
    if controller_hb_w.is_alive(): # incase we ^C prior to heartbeat.start() 
        controller_hb_w.join()
    controller_hb_r.join()
    controller_di_r.join()
    controller_amc_state_r.join()
    controller_ate_req_r.join()
    controller_ate_result_r.join()
    controller_reply_r.join()
    controller_ess_state_r.join()


if __name__ == "__main__":
    #logging.basicConfig(filename='controller.log', encoding='utf-8', level=logging.INFO)
    logging.basicConfig(handlers=[logging.FileHandler(filename="./controller.log", 
                                                 encoding='utf-8', mode='a+')],
                    format="%(asctime)s %(name)s:%(levelname)s:%(message)s", 
                    datefmt="%F %A %T", 
                    level=logging.INFO)
    parser = argparse.ArgumentParser(
        description="RTI Connext DDS Example: Command Response Controller)"
    )
    parser.add_argument("-d", "--domain", type=int, default=0, help="DDS Domain ID")

    args = parser.parse_args()
    assert 0 <= args.domain < 233

    controller_main(args.domain) # uncomment for debug

    """
    try:
        controller_main(args.domain)
    except:
        print("Exception Running Device")
    """

