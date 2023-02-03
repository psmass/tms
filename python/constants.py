"""
 * (c) Copyright, Real-Time Innovations, 2020.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.

 Note: For other language bindings these constants are defined with the data
 module (in the idl). RtiCodeGenerator is used to create a project header file
 to ascertain these constants.
"""


from enum import IntEnum

MODULE = "tms::"  # IDL MODULE NAME SPACE NOT USED WITH Python
QOS_URL = "file://../model/tmsTestApp.xml"
DEVICE_PARTICIPANT_NAME = "TMS_ParticipantLibrary1::TMSDeviceParticipant1"
CONTROLLER_PARTICIPANT_NAME = "TMS_ParticipantLibrary1::TMSMSMSimParticipant1"

HEARTBEAT_PERIOD=1.0

# tms data model constants (copy and paste as needed from rtiCodeGen for tms.py)
tms_LEN_FINGERPRINT=32

class tms_DeviceRole(IntEnum):
    ROLE_MICROGRID_CONTROLLER = 0      
    ROLE_TIME_CONTROLLER = 1
    ROLE_SOURCE = 2      
    ROLE_LOAD = 3      
    ROLE_STORAGE = 4      
    ROLE_DISTRIBUTION = 5      
    ROLE_MICROGRID_SYSTEM_MANAGER = 6
    ROLE_CONVERSION = 7     

class tms_MicrogridMembership(IntEnum):
    MM_UNINITIALIZED = 0
    MM_JOIN = 1
    MM_LEAVE = 2

    


DEVICE1_ID='00000000000000000000000000001234' # Pretend this was in the device EEPROM

# Define Constants for Topic Type Names
HEARTBEAT_TYPE_NAME = MODULE+"Heartbeat"
REQUEST_RESPONSE_TYPE_NAME = MODULE+"RequestResponse"
DEVICE_ANNOUNCEMENT_TYPE_NAME = MODULE+"ProductInfo"
MICROGRID_MEMBERSHIP_REQUEST_TYPE_NAME = MODULE+"MicrogridMembershipRequest"
MICROGRID_MEMBERSHIP_OUTCOME_TYPE_NAME = MODULE+"MicrogridMembershipApproval"
SOURCE_TRANSITION_REQUEST_TYPE_NAME=MODULE+"SourceTransitionRequest"
SOURCE_TRANSITION_STATE_TYPE_NAME=MODULE+"SourceTransitionState"

# Define Constants for Writers and Readers for the Generator Device
# and MSM_Simulator (Manager)
# All Device Readers have a CFT for "MyDevice(ID)", to filter topics
# directed to them (vs. potentially another device)
HEARTBEAT_WRITER="TMSDevicePublisher1::HeartbeatWriter"
# HEARTBEAT_READER="TMSMSMSimSubscriber1::  TODO - IMPLEMENT HEARTBEAT READER
REQUEST_RESPONSE_DEVICE_WRITER="TMSDevicePublisher1::RequestResponseWriter"
REQUEST_RESPONSE_DEVICE_READER="TMSDeviceSubscriber1::RequestResponseReader"
REQUEST_RESPONSE_DEVICE_CFT="RequestResponse::MyFilter"
REQUEST_RESPONSE_MSMSIM_WRITER="TMSMSMSimPublisher1::RequestResponseWriter"
REQUEST_RESPONSE_MSMSIM_READER="TMSMSMSimSubscriber1::RequestResponseReader"
DEVICE_ANNOUNCEMENT_WRITER="TMSDevicePublisher1::DeviceAnnouncementWriter"
DEVICE_ANNOUNCEMENT_READER="TMSMSMSimSubscriber1::DeviceAnnouncementReader"
MICROGRID_MEMBERSHIP_REQUEST_WRITER="TMSDevicePublisher1::MicrogridMembershipRequestWriter"
MICROGRID_MEMBERSHIP_REQUEST_READER="TMSMSMSimSubscriber1::MicrogridMembershipRequestReader"
MICROGRID_MEMBERSHIP_OUTCOME_WRITER="TMSMSMSimPublisher1::MicrogridMembershipOutcomeWriter"
MICROGRID_MEMBERSHIP_OUTCOME_READER="TMSDeviceSubscriber1::MicrogridMembershipOutcomeReader"
MICROGRID_MEMBERSHIP_OUTCOME_CFT="MicrogridMembershipOutcome::MyFilter"
SOURCE_TRANSITION_REQUEST_WRITER="TMSMSMSimPublisher1::SourceTransitionRequestWriter"
SOURCE_TRANSITION_REQUEST_READER="TMSDeviceSubscriber1::SourceTransitionRequestReader"
SOURCE_TRANSITION_REQUEST_CFT="SourceTransitionRequest::MyFilter"
SOURCE_TRANSITION_STATE_WRITER="TMSDevicePublisher1::SourceTransitionStateWriter"
SOURCE_TRANSITION_STATE_READER="TMSMSMSimSubscriber1::SourceTransitionStateReader"


# Application (Controller and Device) State Machine 
class AppState(IntEnum):
    INIT = 0
    POWER_UP = 1
    STEADY_STATE = 2
    SHUT_DOWN = 3

