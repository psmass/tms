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

class DeviceIdState():
    # this object will hold the deviceId and state, it will be
    # used by both device and controller (and it's handle will
    # be set in all writers requiring either deviceId or target
    # deviceId. A 'real' controller would keep an array of DeviceIdState
    # objects, indexed by the deviceId (or hashed to an idx)
    def __init__(self, role):
        self._role = role
        self._deviceId = bytearray(32)
        self._deviceState = constants.AppState.INIT
        
        if (self._role != constants.tms_DeviceRole.ROLE_MICROGRID_CONTROLLER and
        self._role != constants.tms_DeviceRole.ROLE_MICROGRID_SYSTEM_MANAGER):
            # if not controller or MSM, get/set deviceId froom EEPROM or Flash
            for idx, x in enumerate(constants.DEVICE1_ID):
                self._deviceId[idx]=int(x)
        
        self.print_device_id()

    def print_device_id(self):
        print("Loading this devices ID: ", end="")
        for idx in range(constants.tms_LEN_FINGERPRINT):
            print (self._deviceId[idx], end="")
        
        print() # newline
           
        
    # used by the controller to set the deviceID upon receiveing DA
    def setDevId(self, deviceId ):
        for idx, x in range(len(deviceId)):
            self._deviceId[idx]=int(x)
        
    
    # used to set the Id in a sample about to be written by any topic   
    def setDevIdInSample (self, sample, idStrName):
        for idx, x in enumerate(self._deviceId):
            # build sample member name with str index e.g., _sample["deviceId[1]"]
            deviceIdStr=idStrName+"["+str(idx)+"]"
            sample[deviceIdStr]=int(x)


# Device Topic Writer
class HeartbeatWtr(ddsEntities.Writer): 
    def __init__(self, participant, periodic=True, period=constants.HEARTBEAT_PERIOD):
        ddsEntities.Writer.__init__(self, participant, periodic, period,
                                    constants.HEARTBEAT_TYPE_NAME,
                                    constants.HEARTBEAT_WRITER)
        
        self._device_id_obj = None # holds handle to device_id_obj
        
    # Used to give the handle to the DeviceIdState Obj above to writer objects
    def setHndlDevIdObj(self, dev_id_obj):
        self._device_id_obj = dev_id_obj
        # for device Topic Writers, we have the device Id so load the topic sample
        self._device_id_obj.setDevIdInSample(self._sample, "deviceId")


# Device Topic Writer        
class RequestRspDevWtr(ddsEntities.Writer):
    def __init__(self, participant, periodic=False, period=0.0):
        ddsEntities.Writer.__init__(self, participant, periodic, period,
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_DEVICE_WRITER)

        self._device_id_obj = None # holds handle to device_id_obj

    # Used to give the handle to the DeviceIdState Obj above to writer objects
    def setHndlDevIdObj(self, dev_id_obj):
        self._device_id_obj = dev_id_obj
        # for device Topic Writers, we have the device Id so load the topic sample
        self._device_id_obj.setDevIdInSample(self._sample, "relatedRequestId.deviceId")

        
# Device Topic Reader        
class RequestRspDevRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_DEVICE_READER)

    def update_id_cft(self):
        cft_topic = dds.DynamicData.ContentFilteredTopic.find(self._participant,
                                                              constants.REQUEST_RESPONSE_DEVICE_CFT)
        dw_sample = self._device_state_writer.get_data_sample()
        cft_topic.filter_parameters = [str(dw_sample["myDeviceId.resourceId"]), str(dw_sample["myDeviceId.id"])]
        print("CFT ID installed")
    
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    def handler(self, data):
        print ("Recieved sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)


# Controller/MSM Topic Writer
class RequestRspMSMSimWtr(ddsEntities.Writer):
    def __init__(self, participant, periodic=False, period=0.0):
        ddsEntities.Writer.__init__(self, participant, periodic, period,
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_MSMSIM_WRITER)
        
        self._device_id_obj = None # holds handle to device_id_obj


    # Used to give the handle to the DeviceIdState Obj above to writer objects
    def setHndlDevIdObj(self, dev_id_obj):
        self._device_id_obj = dev_id_obj


    # for Controllers this is called from the Device Announcement Reader after
    # we get the deviceId
    def setSampleDeviceId(self):
        self._device_id_obj.setDevIdInSample(self._sample, "relatedRequestId.deviceId")


# Controller/MSM Topic Reader        
class RequestRspMSMSimRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_MSMSIM_READER)

    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    def handler(self, data):
        print ("Recieved sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)


# Device Topic Writer        
class DeviceAnnouncementWtr(ddsEntities.Writer):
    def __init__(self, participant, periodic=False, period=0.0):
        ddsEntities.Writer.__init__(self, participant,  periodic, period,
                                    constants.DEVICE_ANNOUNCEMENT_TYPE_NAME,
                                    constants.DEVICE_ANNOUNCEMENT_WRITER)

        self._device_id_obj = None # holds handle to device_id_obj
        
        # Loadup  static fields in the C'tor (except deviceId as we have
        # common code to do this (see setHndlDevIdObj() below
        self._sample["role"]= constants.tms_DeviceRole.ROLE_SOURCE

        # example of multi-nested assignment - not working
        # self._sample["source[0].parameters[0].name"]="foobar"

    def get_data_sample(self): # Used to get the preloaded fingerprint/deviceID
        return self._sample

    # Used to give the handle to the DeviceIdState Obj above to writer objects
    def setHndlDevIdObj(self, dev_id_obj):
        self._device_id_obj = dev_id_obj
        # for device Topic Writers, we have the device Id so load the topic sample
        self._device_id_obj.setDevIdInSample(self._sample, "deviceId")
                

# Controller Topic Reader        
class DeviceAnnouncementRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.DEVICE_ANNOUNCEMENT_TYPE_NAME,
                                    constants.DEVICE_ANNOUNCEMENT_READER)
        
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    def handler(self, data):
        print ("Recieved sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)

        
# Device Topic Writer        
class MicrogridMembershipRqstWtr(ddsEntities.Writer):
    def __init__(self, participant, periodic=False, period=0.0):
        ddsEntities.Writer.__init__(self, participant,  periodic, period,
                                    constants.MICROGRID_MEMBERSHIP_REQUEST_TYPE_NAME,
                                    constants.MICROGRID_MEMBERSHIP_REQUEST_WRITER)

        self._device_id_obj = None # holds handle to device_id_obj
        
        # Loadup all static fields in the C'tor
        self._sample["membership"]=constants.tms_MicrogridMembership.MM_JOIN

    # Used to give the handle to the DeviceIdState Obj above to writer objects
    def setHndlDevIdObj(self, dev_id_obj):
        self._device_id_obj = dev_id_obj
        # for device Topic Writers, we have the device Id so load the topic sample
        self._device_id_obj.setDevIdInSample(self._sample, "deviceId")
        self._device_id_obj.setDevIdInSample(self._sample, "requestId.deviceId")

        
# Controller/MSM Topic Reader        
class MicrogridMembershipRqstRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.MICROGRID_MEMBERSHIP_REQUEST_TYPE_NAME,
                                    constants.MICROGRID_MEMBERSHIP_REQUEST_READER)
        
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    def handler(self, data):
        print ("Recieved sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)

        
# Controller/MSM Topic Writer - AKA - MembershipApproval
class MicrogridMembershipOutcomeWtr(ddsEntities.Writer):
    def __init__(self, participant, periodic=False, period=0.0):
        ddsEntities.Writer.__init__(self, participant, periodic, period,
                                    constants.MICROGRID_MEMBERSHIP_OUTCOME_TYPE_NAME,
                                    constants.MICROGRID_MEMBERSHIP_OUTCOME_WRITER)

        self._device_id_obj = None # holds handle to device_id_obj

    def setHndlDevIdObj(self, dev_id_obj):
        self._device_id_obj = dev_id_obj

    # for Controllers this is called from the Device Announcement Reader after
    # we get the deviceId
    def setSampleDeviceId(self):
        self._device_id_obj.setDevIdInSample(self._sample, "requestId.deviceId")
        self._device_id_obj.setDevIdInSample(self._sample, "relatedRequestId.deviceId")
        self._device_id_obj.setDevIdInSample(self._sample, "deviceId")
        
# Device Topic Reader        
class MicrogridMembershipOutcomeRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.MICROGRID_MEMBERSHIP_OUTCOME_TYPE_NAME,
                                    constants.MICROGRID_MEMBERSHIP_OUTCOME_READER)
    def update_id_cft(self):
        cft_topic = dds.DynamicData.ContentFilteredTopic.find(self._participant,
                                                              constants.MICROGRID_MEMBERSHIP_OUTCOME_CFT)
        dw_sample = self._device_state_writer.get_data_sample()
        cft_topic.filter_parameters = [str(dw_sample["myDeviceId.resourceId"]), str(dw_sample["myDeviceId.id"])]
        print("CFT ID installed")

    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    def handler(self, data):
        print ("Recieved sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)

        
# Controller/MSM Topic Writer        
class SrcTransitionRqstWtr(ddsEntities.Writer):
    def __init__(self, participant, periodic=False, period=0.0):
        ddsEntities.Writer.__init__(self, participant, periodic, period,
                                    constants.SOURCE_TRANSITION_REQUEST_TYPE_NAME,
                                    constants.SOURCE_TRANSITION_REQUEST_WRITER)

        self._device_id_obj = None # holds handle to device_id_obj
                
    # Used to give the handle to the DeviceIdState Obj above to writer objects
    def setHndlDevIdObj(self, dev_id_obj):
        self._device_id_obj = dev_id_obj

    # for Controllers this is called from the Device Announcement Reader after
    # we get the deviceId
    def setSampleDeviceId(self):
        self._device_id_obj.setDevIdInSample(self._sample, "requestId.deviceId")
        self._device_id_obj.setDevIdInSample(self._sample, "deviceId")

        
# Device Topic Reader        
class SrcTransitionRqstRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.SOURCE_TRANSITION_REQUEST_TYPE_NAME,
                                    constants.SOURCE_TRANSITION_REQUEST_READER)
    def update_id_cft(self):
        cft_topic = dds.DynamicData.ContentFilteredTopic.find(self._participant,
                                                              constants.SOURCE_TRANSITION_REQUEST_CFT)
        dw_sample = self._device_state_writer.get_data_sample()
        cft_topic.filter_parameters = [str(dw_sample["myDeviceId.resourceId"]), str(dw_sample["myDeviceId.id"])]
        print("CFT ID installed")
        
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    def handler(self, data):
        print ("Recieved sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)


# Device Topic Writer
class SrcTransitionStateWtr(ddsEntities.Writer):
    def __init__(self, participant, periodic=False, period=0.0):
        ddsEntities.Writer.__init__(self, participant, periodic, period,
                                    constants.SOURCE_TRANSITION_STATE_TYPE_NAME,
                                    constants.SOURCE_TRANSITION_STATE_WRITER)

        self._device_id_obj = None # holds handle to device_id_obj
        
    # Used to give the handle to the DeviceIdState Obj above to writer objects
    def setHndlDevIdObj(self, dev_id_obj):
        self._device_id_obj = dev_id_obj
        # for device Topic Writers, we have the device Id so load the topic sample
        self._device_id_obj.setDevIdInSample(self._sample, "deviceId")
        self._device_id_obj.setDevIdInSample(self._sample, "relatedRequestId.deviceId")

        
# Controller/MSM Topic Reader        
class SrcTransitionStateRdr(ddsEntities.Reader):
    def __init__(self, participant):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.SOURCE_TRANSITION_STATE_TYPE_NAME,
                                    constants.SOURCE_TRANSITION_STATE_READER)

    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    def handler(self, data):
        print ("Recieved sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)


