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

filepath = osPath.dirname(osPath.realpath(__file__))


def controller_main(domain_id):
    print("Controller Powering Up")

    shutdown = False
    appState = constants.AppState.INIT
    
    qos_provider = dds.QosProvider(constants.QOS_URL)
    participant = qos_provider.create_participant_from_config(constants.CONTROLLER_PARTICIPANT_NAME)

    # Declare topics for the MSM Controller (creates: readers, writers, and threads)
    # xml app create, so they already exist - here the base clas simply looks
    # up the handles so we can manipulate them.

    controller_da_r = topics.DeviceAnnouncementRdr(participant)
    controller_mmr_r = topics.MicrogridMembershipRqstRdr(participant)
    controller_rrm_w = topics.RequestRspMSMSimWtr(participant)
    controller_rrm_r = topics.RequestRspMSMSimRdr(participant)
    controller_mmo_w = topics.MicrogridMembershipOutcomeWtr(participant)
    controller_str_w = topics.SrcTransitionRqstWtr(participant)
    controller_sts_r = topics.SrcTransitionStateRdr(participant)
    # controller_hb_r = topics.HeartbeatRdr(participant) // TODO implemented hb on controller

    # declare application specific DeviceIdState obj
    device_id_obj = topics.DeviceIdState(constants.tms_DeviceRole.ROLE_MICROGRID_SYSTEM_MANAGER)
    # Each controller writer object, needs a handle to the device_id object
    # to fetch the deviceId needed in commands/responses sent to each device.
    # Because this is a particular app design choice, so not implemented in
    # the base class - user impls set_hndl_devIdObj in each topic class in the
    # topics.py file.
    controller_rrm_w.setHndlDevIdObj(device_id_obj)
    controller_mmo_w.setHndlDevIdObj(device_id_obj)    
    controller_str_w.setHndlDevIdObj(device_id_obj)
    
    """
    controller_dsr.start()
    controller_cdw.start()
    """ 

    while not shutdown:
        if not application.run_flag:
            appState = constants.AppState.SHUT_DOWN

        if appState == constants.AppState.INIT:
            print("Controller Initializing")
            
        elif appState == constants.AppState.POWER_UP:
            print("Controller Powered-up and on-line")

        elif appState == constants.AppState.STEADY_STATE:
            print("Controller Steady-state - generating power")

        elif appState == constants.AppState.SHUT_DOWN:
            print("Controller Shutting down")
            shutdown = True
            
        else:
            print("Device in undefined state")

        # print a background idle '.'
        print(".", end='', flush=True)
        sleep(1)

            
    #controller_cdw.join() # uncomment if Thread Monitor vs. Listener used
    #controller_dsr.join()

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

