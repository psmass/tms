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

    shutdown = False

    # *** STANDUP PARTICIPANT WITH READERS AND WRITERS XML APP CREATE    
    qos_provider = dds.QosProvider(constants.QOS_URL)
    participant = qos_provider.create_participant_from_config(tmsConstants.master_controller.MASTER_CONTROLLER1)

    # *** DECLARE OUR APP_STATE_OBJ and (FIND) TOPICS for the device
    # (creates: readers, writers, and threads). All request reader topics also need
    # need the request response writer to post a response.
    # xml app create, so they already exist - here the base clas simply looks
    # up the handles so we can manipulate them.
    app_state_obj = topics.ApplicationStateObj(tmsConstants.tms_DeviceRole.ROLE_MICROGRID_CONTROLLER)

    controller_di_w = topics.DeviceInfoMC_Wtr(participant, app_state_obj)
    controller_di_r = topics.DeviceInfoMC_Rdr(participant, app_state_obj,
                                              controller_di_w.writer.instance_handle)
    controller_hb_w = topics.HeartbeatMC_Wtr(participant, app_state_obj)
    controller_hb_r = topics.HeartbeatMC_Rdr(participant, app_state_obj,
                                             controller_hb_w.writer.instance_handle)

    controller_amc_state_r = topics.AMCStateMC_Rdr(participant, app_state_obj)
    controller_ate_req_r = topics.ATEReqMC_Rdr(participant, app_state_obj)

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
    


    # *** START WRITER LISTENERS or MONITOR THREADS (This step Optional)
    # controller_di_w.start() # start a statuses monitor thread on the DA Writer
    # or...#listener, Heartbeat is periodic and runs in a thread.
    controller_di_w.writer.set_listener(ddsEntities.DefaultWriterListener(),
                                    dds.StatusMask.ALL)


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
    # Note - while we might expect an RR to come in before a response
    # e.g., if we post an STR, we expect a RR followed by a STS. While
    # both are sent reliably, the order is not guaranteed as the RR
    # could have gotten lost and need to be resent by DDS.
    #
    # The state machine will transition to ERROR if an unexpected command
    # or response is received (i.e., the SM is not in the proper state
    # to expect one) 
    #
    # INIT - Waits for a DA to transition to FOUND_NEW_DEVICE
    #
    # FOUND_NEW_DEVICE - fills in DeviceId (from DA) and waits for MMR
    #
    # JOINING_GRID - Received MMR, sending MMO, transition to POWERING_UP
    #
    # POWERING_UP - Send STR, transition to Steady State
    #
    # STEADY_STATE - Controller can have logic here to handle other functions
    #               In this example we just sit, printing '.'.
    #               Leave this state by either a new DA (go back to JOINING_GRID
    #               or CTRL-C for SHUT_DOWN
    #
    # SHUT_DOWN     Device has been turned-off (CTRL-C) - Shutdown
    #
    # ERROR         For a given state an unexpected command or event
    #               occured (SM has no basis to select next state)
    #
    # else          Logical default if no states were matched, (theortically
    #               can't occur, unless bug in Controller code)
    #
    # NOTE: With this version of TMS Data-model, all requests contain a keyed sampleID.
    #       Since the SampleID contains a unique "SequenceID" all requests are unique
    #       instances, and should be disposed of, or essentially we 'leak' memory.
    #       Having unique instances of every sample, essentially makes the idea of
    #       key'd managed resources per-instance effectively useless. This was corrected
    #       in later TMS data-models.
    #       Of course, since requests are sent reliably, we need to wait at least
    #       a second to allow a potential retransmission. Since repeated requests of
    #       the same topic is infrequent, and this issue has been corrected in
    #       subsequent TMS Data-models, we won't dispose of them. One way to do
    #       this is to have a DISPOSE_REQUEST state we transition to after each
    #       request. It might use the app_state_obj to track the request instance,
    #       unregistering and disposing of it.
    #
    #       For a controller managing more than one device, one would want to dispose
    #       of all writer instances as a Device departs the grid.
    
    print("\n\n **** Starting State Machine")
    
    while not shutdown:
        if not application.run_flag:
            app_state_obj.setAppState(constants.ControllerState.SHUT_DOWN)

        if app_state_obj.appState() == constants.ControllerState.INIT:
            print("Controller Initializing")
            if not controller_hb_w._thread_started: # Don't restart if reset DI 
                controller_di_w.write() # only need to write this once since QoS Durable
                controller_hb_w.start() # start sending heartbeats
            app_state_obj.setAppState(constants.ControllerState.DISCOVERY)

        elif app_state_obj.appState() == constants.ControllerState.DISCOVERY:
            print("D ", end="", flush = True) # sit printing 'Ds' while discovering MC
            # receiving DI will set the deviceId
            if app_state_obj._deviceIdSet:
                app_state_obj.setAppState(constants.ControllerState.FOUND_NEW_DEVICE)
            
        elif app_state_obj.appState() == constants.ControllerState.FOUND_NEW_DEVICE:
            # this state in case we get a DA and not an MMR so hold waiting for MMR
            # Note: DA is durable, so we can get a DA followed immediately by a DA
            print("Controller Found a New Device, awaiting to be Selected")
            if app_state_obj._thisMCSelected:
                # go to background Idle waiting for AuthorizationToPowerupRequest
                print ("This Master Controller ID: {id} has been selected"
                       .format(id=app_state_obj._masterControllerId))
                app_state_obj.setAppState(constants.ControllerState.WAIT_CMD_IDLE)
                                          

        elif app_state_obj.appState() == constants.ControllerState.POWER_UP_AUTH:
            print("Controller allowing Device to JOIN grid")
            # waiting for MMR causes RR to be sent (from MMR reader), and MMO, then
            # the state is set to POWERING_UP

            # at this point we know we received a DA and a MMR. If the controller
            # comes up late, it gets them back-to-back - so we go from INIT straight
            # to JOINING GRID. At this point we know and that the DeviceId has
            # been loaded into the app_state_obj. So populate remaining writers
            # if a new DA came in to reset to this state
            """
            app_state_obj.clearOutstandingRequest() 
            controller_mmo_w.fillInDevId()
            controller_str_w.fillInDevId()

            controller_mmo_w.setResult(constants.tms_MicrogridMembershipResult.MMR_COMPLETE)
            controller_mmo_w.write()
            """
            app_state_obj.setAppState(constants.ControllerState.ENERGIZE)
                        
        elif app_state_obj.appState() == constants.ControllerState.ENERGIZE:
            print("Controller Issuing Energizing Request to device")
            """
            controller_str_w.setTransition(constants.tms_SourceTransition.ST_POWER_UP)
            controller_str_w.write()
            app_state_obj.setAppState(constants.ControllerState.STEADY_STATE)
            """
            
        elif app_state_obj.appState() == constants.ControllerState.WAIT_CMD_IDLE:
            #print("Controller Steady-state - Waiting for other Device Requests")
            print(".", end="", flush=True)

        elif app_state_obj.appState() == constants.ControllerState.SHUT_DOWN:
            print("Controller Shutting down")
            shutdown = True

        elif app_state_obj.appState() == constants.ControllerState.ERROR:
            print("ERROR - Unexpected Event, resetting Target Device")
            # TODO: Printout, Device and event
            app_state_obj.setAppState(constants.ControllerState.STEADY_STATE)

        else:
            print("Device in undefined state")

        sleep(1)

    # ** SHUTDOWN READER THREADS (and WRITER THREADS, if used) AND EXIT
    # controller_mmo_w.join() # uncomment if Thread Monitor vs. Listener used
    if controller_hb_w._thread_started: # incase we ^C prior to heartbeat.start() 
        controller_hb_w.join()
    controller_di_r.join()

    print("Controller Exiting")


if __name__ == "__main__":
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

