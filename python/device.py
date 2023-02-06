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
    
    # *** STANDUP PARTICIPANT WITH READERS AND WRITERS XML APP CREATE
    qos_provider = dds.QosProvider(constants.QOS_URL)
    participant = qos_provider.create_participant_from_config(constants.DEVICE_PARTICIPANT_NAME)

   
    # *** DECLARE OUR APP_STATE_OBJ and (FIND) TOPICS for the device
    # (creates: readers, writers, and threads). All request reader topics also need
    # need the request response writer to post a response.
    # xml app create, so they already exist - here the base clas simply looks
    # up the handles so we can manipulate them.
    app_state_obj = topics.ApplicationStateObj(constants.tms_DeviceRole.ROLE_SOURCE)
    
    device_da_w = topics.DeviceAnnouncementWtr(participant, app_state_obj)
    device_mmr_w = topics.MicrogridMembershipRqstWtr(participant, app_state_obj)
    device_rrd_w = topics.RequestRspDevWtr(participant, app_state_obj)
    device_rrd_r = topics.RequestRspDevRdr(participant, app_state_obj)
    device_mmo_r = topics.MicrogridMembershipOutcomeRdr(participant, app_state_obj)
    device_str_r = topics.SrcTransitionRqstRdr(participant, app_state_obj)
    device_sts_w = topics.SrcTransitionStateWtr(participant, app_state_obj)
    device_hb_w = topics.HeartbeatWtr(participant, app_state_obj)

    # *** START WRITER LISTENERS or MONITOR THREADS (This step Optional)
    # device_da_w.start() # start a statuses monitor thread on the DA Writer
    # or...#listener
    device_da_w.writer.set_listener(ddsEntities.DefaultWriterListener(),
                                    dds.StatusMask.ALL)
    # device_mmr_w.start()# start a statuses monitor thread on Writer
    # or..listener
    device_mmr_w.writer.set_listener(ddsEntities.DefaultWriterListener(),
                                    dds.StatusMask.ALL)
    # device_rrd_w.start()# start a statuses monitor thread on Writer
    # or..listener
    device_rrd_w.writer.set_listener(ddsEntities.DefaultWriterListener(),
                                    dds.StatusMask.ALL)                                   
    # device_sts_w.start()# start a statuses monitor thread on Writer
    # or..listener
    device_sts_w.writer.set_listener(ddsEntities.DefaultWriterListener(),
                                    dds.StatusMask.ALL)                                   
    # device_hb.start()# start a statuses monitor thread on Writer
    # or..listener
    device_hb_w.writer.set_listener(ddsEntities.DefaultWriterListener(),
                                    dds.StatusMask.ALL)                                   

    # *** START READER THREADS (Reads data and monitors statuses)
    device_rrd_r.start()
    device_mmo_r.start()
    device_str_r.start()
    
    # *** SEND DEVICE ANNOUNCMENT  & RUN DEVICE STATE MACHINE
    device_da_w.write() # only need to write this onece since QoS Durable

    count_in_state = 0
    
    while not shutdown:
        if not application.run_flag:
            app_state_obj.setState(constants.AppState.SHUT_DOWN)

        if app_state_obj.myState() == constants.AppState.INIT:
            print("Device Initializing")
            count_in_state +=1
            if count_in_state % 5 == 0: # request to join every 5 sec
                app_state_obj.clearOutstandingRequest()
                device_mmr_w.write()
                
        elif app_state_obj.myState() == constants.AppState.POWERING_UP:
            print("Device Powering-up and on-line")

        elif app_state_obj.myState() == constants.AppState.STEADY_STATE:
            print("Device Steady-state - generating power")

        elif app_state_obj.myState() == constants.AppState.SHUT_DOWN:
            print("Device Shutting down")
            shutdown = True
            
        else:
            print("Device in undefined state")
        
        # print a background idle '.'
        print(".", end='', flush=True)
        sleep(1)

    # ** SHUTDOWN READER THREADS (and WRITER THREADS, if used) AND EXIT
    # device_da_w.join()  # uncomment if Thread Monitor vs. Listener used
    # device_mmr_w.join() # uncomment if Thread Monitor vs. Listener used
    # device_rrd_w.join() # uncomment if Thread Monitor vs. Listener used
    # device_sts_w.join() # uncomment if Thread Monitor vs. Listener used
    # device_hb_w.join() # uncomment if Thread Monitor vs. Listener used
    device_rrd_r.join()
    device_mmo_r.join()
    device_str_r.join()
    
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

