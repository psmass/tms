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
import topics
import ddsEntities

filepath = osPath.dirname(osPath.realpath(__file__))


def controller_main(domain_id):
    print("Controller Powering Up")

    shutdown = False

    # *** STANDUP PARTICIPANT WITH READERS AND WRITERS XML APP CREATE    
    qos_provider = dds.QosProvider(constants.QOS_URL)
    participant = qos_provider.create_participant_from_config(constants.CONTROLLER_PARTICIPANT_NAME)


    # *** DECLARE OUR APP_STATE_OBJ and (FIND) TOPICS for the device
    # (creates: readers, writers, and threads). All request reader topics also need
    # need the request response writer to post a response.
    # xml app create, so they already exist - here the base clas simply looks
    # up the handles so we can manipulate them.
    app_state_obj = topics.ApplicationStateObj(constants.tms_DeviceRole.ROLE_MICROGRID_SYSTEM_MANAGER)

    controller_rrm_w = topics.RequestRspMSMSimWtr(participant, app_state_obj)
    controller_rrm_r = topics.RequestRspMSMSimRdr(participant, app_state_obj)
    controller_da_r = topics.DeviceAnnouncementRdr(participant, app_state_obj)
    controller_mmr_r = topics.MicrogridMembershipRqstRdr(participant,
                                                         app_state_obj,
                                                         controller_rrm_w)
    controller_mmo_w = topics.MicrogridMembershipOutcomeWtr(participant, app_state_obj)
    controller_str_w = topics.SrcTransitionRqstWtr(participant, app_state_obj)
    controller_sts_r = topics.SrcTransitionStateRdr(participant, app_state_obj)
    # controller_hb_r = topics.HeartbeatRdr(participant) // TODO implemented hb on controller

    # *** START WRITER LISTENERS or MONITOR THREADS (This step Optional)
    # controller_rrm_w.start() # start a statuses monitor thread on the DA Writer
    # or...#listener
    controller_rrm_w.writer.set_listener(ddsEntities.DefaultWriterListener(),
                                    dds.StatusMask.ALL)
    # device_mmo_w.start() # start a statuses monitor thread on the DA Writer
    # or...#listener
    controller_mmo_w.writer.set_listener(ddsEntities.DefaultWriterListener(),
                                    dds.StatusMask.ALL)
    # device_str_w.start() # start a statuses monitor thread on the DA Writer
    # or...#listener
    controller_str_w.writer.set_listener(ddsEntities.DefaultWriterListener(),
                                    dds.StatusMask.ALL)

    # *** START READER THREADS (Reads data and monitors statuses)   
    controller_da_r.start()
    controller_mmr_r.start()
    controller_rrm_r.start()
    controller_sts_r.start()

    sleep(5) # wait for threads to spin up and settle printing (output readability)

    # CONTROLLER STATE MACHINE 
    #
    # The SM is transitioned by receiving specific commands / responses
    # while in specific states. An Request Response will not transition
    # the SM. But must be received and correlated using the sequence
    # number. It is assumed only one request is allowed to be outstanding
    # at a time. No further requests may be made until the outstanding
    # request is cleared (either by receiving a correlated RR or manually
    # via the app_state_obj.clearOutstandingReq().
    #
    # Note - while we might expect an RR to come in before a response
    # e.g., if we post an STR, we expect a RR followed by a STS. While
    # both are sent reliably, the order is not guaranteed as the RR
    # could have gotten lost and need to be resent by DDS.
    #
    # The state machine will transition to ERROR if an unexpected command
    # or response is received (i.e., the SM is not in the proper state
    # to expect one 
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
    #               can't occur, unless bug in Device code)

    print("\n\n **** Starting State Machine")
    
    while not shutdown:
        if not application.run_flag:
            app_state_obj.setState(constants.ControllerState.SHUT_DOWN)

        if app_state_obj.myState() == constants.ControllerState.INIT:
            print("Controller Initializing")
            # receiving a DA moves us to the next state

        elif app_state_obj.myState() == constants.ControllerState.FOUND_NEW_DEVICE:
            print("Controller Found a New Device, awaiting Microgrid JOIN Request")
            # waiting for MMR causes RR to be sent (from MMR reader), and MMO, then
            # the state is set to POWERING_UP

            # at this point we know we received a DA and that the DeviceId has
            # been loaded into the app_state_obj. So populate remaining writers
            controller_mmo_w.fillInDevId()
            controller_str_w.fillInDevId()

        elif app_state_obj.myState() == constants.ControllerState.JOINING_GRID:
            print("Controller allowing Device to JOIN grid")
            controller_mmo_w.setResult(constants.tms_MicrogridMembershipResult.MMR_COMPLETE)
            controller_mmo_w.write()
            app_state_obj.setState(constants.ControllerState.POWERING_UP)
                        
        elif app_state_obj.myState() == constants.ControllerState.POWERING_UP:
            print("Controller Powering-up device")
            controller_str_w.setTransition(constants.tms_SourceTransition.ST_POWER_UP)
            controller_str_w.write()
            app_state_obj.setState(constants.ControllerState.STEADY_STATE)
            

        elif app_state_obj.myState() == constants.ControllerState.STEADY_STATE:
            #print("Controller Steady-state - generating power")
            print(".", end="")

        elif app_state_obj.myState() == constants.ControllerState.SHUT_DOWN:
            print("Controller Shutting down")
            shutdown = True

        elif app_state_obj.myState() == constants.ControllerState.ERROR:
            print("ERROR - Unexpected Event, resetting Target Device")
            # TODO: Printout, Device and event
            app_state_obj.setState(constants.ControllerState.STEADY_STATE)

        else:
            print("Device in undefined state")

        # print a background idle '.'
        print(".", end='', flush=True)
        sleep(1)

    # ** SHUTDOWN READER THREADS (and WRITER THREADS, if used) AND EXIT
    # controller_mmo_w.join() # uncomment if Thread Monitor vs. Listener used
    # controller_rrm_w.join() # uncomment if Thread Monitor vs. Listener used
    # controller_str_w.join() # uncomment if Thread Monitor vs. Listener used
    controller_da_r.join()
    controller_mmr_r.join()
    controller_rrm_r.join()
    controller_sts_r.join()

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

