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
import constants
import argparse
from os import path as osPath
from time import sleep
import rti.connextdds as dds
import application
import topics
import ddsEntities

filepath = osPath.dirname(osPath.realpath(__file__))


def device_main(domain_id):
    print("Device Powering Up")

    shutdown = False
    appState = constants.AppState.INIT

    qos_provider = dds.QosProvider(constants.QOS_URL)
    participant = qos_provider.create_participant_from_config(constants.DEVICE_PARTICIPANT_NAME)

   
    # Declare topics for the device (creates: readers, writers, and threads)
    # xml app create, so they already exist - here the base clas simply looks
    # up the handles so we can manipulate them.
    device_da_w = topics.DeviceAnnouncementWtr(participant)
    device_mmr_w = topics.MicrogridMembershipRqstWtr(participant)
    device_rrd_w = topics.RequestRspDevWtr(participant)
    device_rrd_r = topics.RequestRspDevRdr(participant)
    device_mmo_r = topics.MicrogridMembershipOutcomeRdr(participant)
    device_str_r = topics.SrcTransitionRqstRdr(participant)
    device_sts_w = topics.SrcTransitionStateWtr(participant)
    device_hb_w = topics.HeartbeatWtr(participant)

    # for the device, declare the dev_id_ojb (for the device, this will
    # also load the deviceId from "EEPROM" or "Flash".
    device_id_obj = topics.DeviceIdState(constants.tms_DeviceRole.ROLE_SOURCE)
    # provide all the device writers with the dev_id_obj so they can get the
    # deviceId that they will need to populate the fingerprint the send
    # even though this is common to all writers, it's handled each topoic
    # class in the topics.py file, since it's an application specific impl.
    device_da_w.setHndlDevIdObj(device_id_obj)
    device_mmr_w.setHndlDevIdObj(device_id_obj)
    device_rrd_w.setHndlDevIdObj(device_id_obj)
    device_hb_w.setHndlDevIdObj(device_id_obj)
    
    
    # device_da_w.start() # start a statuses monitor thread on the DA Writer
    # or...#listener
    device_da_w.writer.set_listener(ddsEntities.DefaultWriterListener(),
                                    dds.StatusMask.ALL)
    device_da_w.write() # only need to write this onece since QoS Durable

    # device_mmr_w.start()# start a statuses monitor thread on the MMR Writer
    # or..listener
    device_mmr_w.writer.set_listener(ddsEntities.DefaultWriterListener(),
                                    dds.StatusMask.ALL)                                     
    """
    # Update the deviceID for the config_dev_reader so we only get config
    # commands directed to our device. It also loads the sample with static data (deviceID)
    # This must be done after the writer thread has run to as the deviceID is stored in the
    # sample that must be created within the device_state_writer thread.
    device_cdr.update_id_cft();
    """
    
    
    while not shutdown:
        if not application.run_flag:
            appState = constants.AppState.SHUT_DOWN

        if appState == constants.AppState.INIT:
            print("Device Initializing")
            device_mmr_w.write() # sit here and request to join the microgrid 

        elif appState == constants.AppState.POWER_UP:
            print("Device Powered-up and on-line")

        elif appState == constants.AppState.STEADY_STATE:
            print("Device Steady-state - generating power")

        elif appState == constants.AppState.SHUT_DOWN:
            print("Device Shutting down")
            shutdown = True
            
        else:
            print("Device in undefined state")
        
        # print a background idle '.'
        print(".", end='', flush=True)
        sleep(1)

    # shut down threads
    # device_cdr.join()
    # device_dsw.join() # uncomment if Thread Monitor vs. Listener used
    print("Device Exiting")


if __name__ == "__main__":
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

