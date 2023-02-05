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
    appState = constants.AppState.INIT

    # *** STANDUP PARTICIPANT WITH READERS AND WRITERS XML APP CREATE    
    qos_provider = dds.QosProvider(constants.QOS_URL)
    participant = qos_provider.create_participant_from_config(constants.CONTROLLER_PARTICIPANT_NAME)


    # *** DECLARE (FIND) TOPICS for the device (creates: readers, writers, and threads)   
    # xml app create, so they already exist - here the base clas simply looks
    # up the handles so we can manipulate them.
    controller_rrm_w = topics.RequestRspMSMSimWtr(participant)
    controller_rrm_r = topics.RequestRspMSMSimRdr(participant)
    controller_da_r = topics.DeviceAnnouncementRdr(participant)
    controller_mmr_r = topics.MicrogridMembershipRqstRdr(participant, controller_rrm_w)
    controller_mmo_w = topics.MicrogridMembershipOutcomeWtr(participant)
    controller_str_w = topics.SrcTransitionRqstWtr(participant)
    controller_sts_r = topics.SrcTransitionStateRdr(participant)
    # controller_hb_r = topics.HeartbeatRdr(participant) // TODO implemented hb on controller

    # *** DECLARE and ASSIGN APPLICATION SPECIFIC STATE OBJECT
    app_state_obj = topics.ApplicationStateObj(constants.tms_DeviceRole.ROLE_MICROGRID_SYSTEM_MANAGER)
    # Each controller writer object, needs a handle to the application_state object
    # to fetch the deviceId needed in commands/responses sent to each device.
    # Because this is a particular app design choice, so not implemented in
    # the base class - user impls set_hndl_devIdObj in each topic class in the
    # topics.py file.
    controller_rrm_w.setHndlDevIdObj(app_state_obj)
    controller_mmo_w.setHndlDevIdObj(app_state_obj)    
    controller_str_w.setHndlDevIdObj(app_state_obj)

    # Controller DA reader and STS topic reader also need access to the
    # application_state object to set and get deviceId and state respectively
    controller_da_r.setHndlDevIdObj(app_state_obj)
    controller_mmr_r.setHndlDevIdObj(app_state_obj)
    controller_sts_r.setHndlDevIdObj(app_state_obj)

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
    
    # *** RUN DEVICE STATE MACHINE
    while not shutdown:
        if not application.run_flag:
            app_state_obj.setState(constants.AppState.SHUT_DOWN)

        if app_state_obj.myState() == constants.AppState.INIT:
            print("Controller Initializing")

        elif app_state_obj.myState() == constants.AppState.FOUND_NEW_DEVICE:
            print("Controller Found a New Device")
            # Controller had to wait for a DA to get the DeviceID
            # We can now configure the target DeviceID in all our writers
            # not no harm if we sit here repeating this while in this state
            # vs. adding an new state
            controller_rrm_w.setSampleDeviceId()
            controller_mmo_w.setSampleDeviceId()
            controller_str_w.setSampleDeviceId()
            if app_state_obj.sendReqResp:  # wait for request
                controller_rrm_w.write()   # send response
                app_state_obj.setState(constants.AppState.POWERING_UP)
            
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

