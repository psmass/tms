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
    device_rrd_r = topics.RequestRspDevRdr(participant, app_state_obj, device_rrd_w._writer.instance_handle)
    device_mmo_r = topics.MicrogridMembershipOutcomeRdr(participant, app_state_obj)
    device_str_r = topics.SrcTransitionRqstRdr(participant,
                                               app_state_obj,
                                               device_rrd_w)
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

    # *** START READER THREADS (Reads data and monitors statuses)
    device_rrd_r.start()
    device_mmo_r.start()
    device_str_r.start()
    
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
    # Note - while we might expect an RR to come in before a response
    # e.g., if we post an MMR, we expect a RR followed by a MMO. While
    # both are sent reliably, the order is not guaranteed as the RR
    # could have gotten lost and need to be resent by DDS.
    #
    # The state machine will transition to ERROR if an unexpected command
    # or response is received (i.e., the SM is not in the proper state
    # to expect one - e.g., say an unsolicited MMO comes in, we cannot
    # assume we sent an MMR and should transition to JOINING_GRID.)
    #
    # INIT - send DA and transition to JOINING_GRID
    #
    # JOINING_GRID - send MMR, wait for MMO, transition to JOINING GRID
    #
    # WAIT_CMD_IDLE - Device Received MMO with good Membership Result
    #                and has joined the grid. It now waits for a command/
    #                request from the controler. Their should be a state
    #                for each possible command supported (and a catch-all
    #                for unsupported commands). 
    #              - In this example we'll wait for a SourceTransitionRequest
    #                (STR - ST_POWER_UP) and transiton to POWERING_UP
    #                The example does not support other transitons, as
    #                a state would need to be supported for each.
    #
    # POWERING_UP - RECEIVED STR, handle and return to WAIT_CMD_IDLE
    #
    # SHUT_DOWN     Device has been turned-off (CTRL-C) - Shutdown
    #
    # ERROR         For a given state an unexpected command or event
    #               occured (SM has no basis to select next state)
    #
    # else          Logical default if no states were matched, (theortically
    #               can't occur, unless bug in Device code)
    
    print("\n\n **** Starting State Machine")
    
    count_in_state = 0

    while not shutdown:
        if not application.run_flag:
            app_state_obj.setAppState(constants.DeviceState.SHUT_DOWN)

        if app_state_obj.appState() == constants.DeviceState.INIT:
            print("Device Initializing ")
            device_da_w.write() # only need to write this once since QoS Durable
            app_state_obj.setAppState(constants.DeviceState.JOINING_GRID)

        elif app_state_obj.appState() == constants.DeviceState.JOINING_GRID:
            count_in_state +=1
            if count_in_state % 5 == 0: # request to membership every 5 sec
                print("Device asking to join grid")
                app_state_obj.clearOutstandingRequest()
                device_mmr_w.write()

        elif app_state_obj.appState() == constants.DeviceState.JOINED_GRID:
            print("Device Joined Grid - start HB")
            device_hb_w.start() # start sending heartbeats
            app_state_obj.setAppState(constants.DeviceState.WAIT_CMD_IDLE) # return idle
            
        elif app_state_obj.appState() == constants.DeviceState.WAIT_CMD_IDLE:
            #print("Device awating command")
            print(".", end="", flush=True)
                
        elif app_state_obj.appState() == constants.DeviceState.POWERING_UP:
            print("Device POWERED_UP as Requested")
            # publish an STS if new state asked for 
            if app_state_obj.devSrcXitionStateChange():
                device_sts_w.write()
            app_state_obj.setAppState(constants.DeviceState.WAIT_CMD_IDLE) # return idle

        elif app_state_obj.appState() == constants.DeviceState.SHUT_DOWN:
            print("Device Shutting down")
            shutdown = True
                                   
        elif app_state_obj.appState() == constants.DeviceState.ERROR:
            print("ERROR - Unexpected Event, resetting Device")
            # TODO: Printout currentState, and Event that occurred
            app_state_obj.setAppState(constants.DeviceState.JOINING_GRID)

        else:
            print("Device in undefined state")
        
        sleep(1)

    # ** SHUTDOWN READER THREADS (and WRITER THREADS, if used) AND EXIT
    # device_da_w.join()  # uncomment if Thread Monitor vs. Listener used
    # device_mmr_w.join() # uncomment if Thread Monitor vs. Listener used
    # device_rrd_w.join() # uncomment if Thread Monitor vs. Listener used
    # device_sts_w.join() # uncomment if Thread Monitor vs. Listener used
    if device_hb_w._thread_started: # incase we ^C prior to heartbeat.start() 
        device_hb_w.join() 
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

