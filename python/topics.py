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

 INSTANTIATE YOUR TOPICS IN THIS FILE

 Your topics must inherit either a ddsEntities.Reader or ddsEnities.Writer
 They MUST implement / override the handler() member functions to deal with
 topic specific fields (read/write) and will likely need extended member functions
 and data members to do specific functions based on application and specific
 topic status/state.

 You may also set filters and DDS event conditions as those may be topic dependent.
 Example, the a device application instance only needs concern itself with commands
 directed to it's target device ID. As such, code should be included in the configuration
 command to filter on the targetId fields that match this devices id.

 Filtering on controller bound topics is probably not desired as the controller usually
 needs to see all status and responses from a device unless there are multiple controllers
 where some topic field values are used to load balance.

 If you don't which to run writer threads for event or a periodic topics you may omit
 calling the writer.start(). If you would prefer to use a listener to montior events
 you will need to modify the ddsEntities.py infrastructure file.

 Periodic writers may be created by placing a call to a topic handler while loop.

"""

import application
import ddsEntities
import constants
import rti.connextdds as dds
from time import sleep


class HeartBeatWtr(ddsEntities.Writer):
    def __init__(self, participant):
        ddsEntities.Writer.__init__(self, participant,
                                    constants.HEARTBEAT_TYPE_NAME,
                                    constants.HEARTBEAT_WRITER)

# TODO Implement HeartBeat Reader on the MSM Sim
"""
class HeartBeatRdr(ddsEntities.Reader): # In this example, Not paid attention to by the Controller
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_READER)
"""

class RequestRspDevWtr(ddsEntities.Writer):
    def __init__(self, participant):
        ddsEntities.Writer.__init__(self, participant,
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_DEVICE_WRITER)
        
class RequestRspDevRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_DEVICE_READER)

class RequestRspMSMSimWtr(ddsEntities.Writer):
    def __init__(self, participant):
        ddsEntities.Writer.__init__(self, participant,
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_MSMSIM_WRITER)

class RequestRspMSMSimRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_MSMSIM_READER)

class DevAnnouncementWtr(ddsEntities.Writer):
    def __init__(self, participant):
        ddsEntities.Writer.__init__(self, participant,
                                    constants.DEVICE_ANNOUNCEMENT_TYPE_NAME,
                                    constants.DEVICE_ANNOUNCEMENT_WRITER)

class DevAnnouncementRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.DEVICE_ANNOUNCEMENT_TYPE_NAME,
                                    constants.DEVICE_ANNOUNCEMENT_READER)

class MicrogridMembershipRqstWtr(ddsEntities.Writer):
    def __init__(self, participant):
        ddsEntities.Writer.__init__(self, participant,
                                    constants.MICROGRID_MEMBERSHIP_REQUEST_TYPE_NAME,
                                    constants.MICROGRID_MEMBERSHIP_REQUEST_WRITER)

class MicrogridMembershipRqstRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_READER)

class MicrogridMembershipOutcomeWtr(ddsEntities.Writer):
    def __init__(self, participant):
        ddsEntities.Writer.__init__(self, participant,
                                    constants.MICROGRID_MEMBERSHIP_OUTCOME_TYPE_NAME,
                                    constants.MICROGRID_MEMBERSHIP_OUTCOME_WRITER)
                
class MicrogridMembershipOutcomeRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.MICROGRID_MEMBERSHIP_OUTCOME_TYPE_NAME,
                                    constants.MICROGRID_MEMBERSHIP_OUTCOME_READER)

class SrcTransitionRqstWtr(ddsEntities.Writer):
    def __init__(self, participant):
        ddsEntities.Writer.__init__(self, participant,
                                    constants.SOURCE_TRANSITION_TYPE_NAME,
                                    constants.SOURCE_TRANSITION_WRITER)

class SrcTransitionRqstRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.SOURCE_TRANSITION_REQUEST_TYPE_NAME,
                                    constants.SOURCE_TRANSITION_READER)

class SrcTransitionStateWtr(ddsEntities.Writer):
    def __init__(self, participant):
        ddsEntities.Writer.__init__(self, participant,
                                    constants.SOURCE_TRANSITION_STATE_TYPE_NAME,
                                    constants.SOURCE_TRANSITION_STATE_WRITER)

class SrcTransitionStateRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.SOURCE_TRANSITION_STATE_TYPE_NAME,
                                    constants.SOURCE_TRANSITION_STATE_READER)


