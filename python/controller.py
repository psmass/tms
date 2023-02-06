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
    
    # *** RUN CONTROLLER STATE MACHINE
    while not shutdown:
        if not application.run_flag:
            app_state_obj.setState(constants.AppState.SHUT_DOWN)

        if app_state_obj.myState() == constants.AppState.INIT:
            print("Controller Initializing")
            # receiving a DA moves us to the next state

        elif app_state_obj.myState() == constants.AppState.FOUND_NEW_DEVICE:
            print("Controller Found a New Device")
            # receiving an MMR moves us to the next state

        elif app_state_obj.myState() == constants.AppState.JOINING_GRID:
            print("Controller allowing Device to join the grid")
            
        elif app_state_obj.myState() == constants.AppState.POWERING_UP:
            print("Controller Powering-up device")

        elif app_state_obj.myState() == constants.AppState.STEADY_STATE:
            print("Controller Steady-state - generating power")

        elif app_state_obj.myState() == constants.AppState.SHUT_DOWN:
            print("Controller Shutting down")
            shutdown = True
            
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

