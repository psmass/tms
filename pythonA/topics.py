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
import tmsConstants
import rti.connextdds as dds
from time import sleep

class ApplicationStateObj():
    # this object will hold the deviceId and state, it will be
    # used by both device and controller (and it's handle will
    # be set in all readers that set the deviceId and state
    # and writers requiring either deviceId or target deviceId.
    # A 'real' controller would keep an array of DeviceIdState
    # objects, indexed by the deviceId (or hashed to an idx)
    def __init__(self, role):
        self._role = role
        self._deviceId = ''
        self._masterControllerId = ''
        self._thisMCSelected = False
        self._authorizedForEnergizing = False
        self._deviceStopStartLevel = tmsConstants.tms_EnergyStartStopLevel.ESSL_UNKNOWN 

        self._application_state = constants.ControllerState.INIT
        self._controller_rcvd_da = False
        self._deviceIdSet = False # flag indicates MC has received DI and _deviceId is valid
        self._mcIdSet = False # flag to device, indicated it received DI and _masterControllerId is valid
        self._sequenceNumber = 0  # unique running sequence number
        self._rrSequenceNumber = self._sequenceNumber  # sequenceNumber of outstanding Request 
        self._outstandingRequest = False
        
        # Load the Device and Controller IDs respectively
        if (self._role == tmsConstants.tms_DeviceRole.ROLE_MICROGRID_CONTROLLER):
            self._masterControllerId=constants.CONTROLLER1_ID 
            self._masterControllerIDSet = True
            print("Master Controller ID set: ", self._masterControllerId)
        else:
            self._deviceId=constants.DEVICE1_ID
            self._deviceIdSet = True # not really used by Device
            print("Generator Device ID set: ", self._deviceId)

    def appState(self):
        return self._application_state

    def setAppState(self, state):
        self._application_state = state

    def sequenceNumber(self):
        self._sequenceNumber +=1
        return self._sequenceNumber

    # Unique Sequence number used to correlate requests/responses
    # returns either the current sequence number outstanding or the next for use
    def rrSequenceNumber(self):
        if not self._outstandingRequest:
            self._rrSequenceNumber = self.sequenceNumber()
            self._outstandingRequest = True
        return self._rrSequenceNumber

    def outstandingRequest(self):
        return self._outstandingRequest

    def clearOutstandingRequest(self):
        self._outstandingRequest=False
 
        
    # used by the controller to set the deviceID upon receiveing DA
    # Calling this also changes the Controllers state from INIT to FOUND_DEVICE
    def setDevId(self, deviceId ):
        self._deviceId = deviceId

        self._deviceIdSet = True
        print(self._deviceId)

    # used by the Device to set the MCID upon receiveing DIs and making MC selection process
    def setMCId(self, mcId ):
        self._masterControllerId = mcId

        self._mcIdSet = True
        print(self._masterControllerId)
        
    def deviceId(self):
        return self._deviceId

    # Used by controller to ensure DA was processed before sending ReqResp w/targetID
    def deviceIdSet(self):
        return self._deviceIdSet
        
    # used to set the Id in a sample about to be written by any topic   
    def setDevIdInSample (self, sample, idStrName):
        sample[idStrName]=self._deviceId

    # used to set the Id in a sample about to be written by any topic   
    def setMCIdInSample (self, sample, idStrName):
        sample[idStrName]=self._masterControllerId

    def setDevReqSrcXitionState(self, newState):
        self._requested_device_source_transition_state = newState

    def devSrcState(self):
        return self._device_source_transition_state

    def setDevSrcState(self, srcState):
        self._device_source_transition_state=srcState

    def devSrcXitionStateChange(self):
        change = False
        if self._device_source_transition_state != \
            self._requested_device_source_transition_state:
            # set them equal
            self._device_source_transition_state = \
            self._requested_device_source_transition_state
            change = True
        return change
    

# Generator Device HB Topic Writer
class HeartbeatGD_Wtr(ddsEntities.Writer): 
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant, True, constants.HEARTBEAT_PERIOD,
                                    "tms::Heartbeat", # Heartbeat registered_type reference
                                    tmsConstants.generator_device.HEARTBEAT_WRITER)

        self._thread_started = False  # track thread, to join() on exit only if started 
        self._app_state_obj = app_state_obj

        self._app_state_obj.setDevIdInSample(self._sample, "deviceId")
        

    def write(self): # need to overload to add sequence #
        # A write is only called from a thread
        self._thread_started = True
        self._sample["sequenceNumber"]=self._app_state_obj.sequenceNumber()
        self._writer.write(self._sample)

        
# Generator Device HB Topic Reader        
class HeartbeatGD_Rdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj, ignore_wtr_instance_hndl):
        ddsEntities.Reader.__init__(self, participant, 
                                    "tms::Heartbeat", # Heartbeat registered_type reference
                                    tmsConstants.generator_device.HEARTBEAT_READER)

        self._app_state_obj = app_state_obj
        
        # TODO: Install the content filter to only receive active MC
        # cft_topic = dds.DynamicData.ContentFilteredTopic.find(self._participant,
        #                                                      constants.REQUEST_RESPONSE_DEVICE_CFT)
        #
        # cft_topic.filter_parameters = [self._app_state_obj.deviceID()]
        # print("RRD_RDR CFT ID installed")
        participant.ignore_datawriter(ignore_wtr_instance_hndl) # don't read our own Heartbeats 

    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    # For the HB Reader, we don't want to print the sample, but rather just echo an 'HB'
    def handler(self, data):
        print ("HB", end="", flush=True)
        
        
# MC HB Topic Writer
class HeartbeatMC_Wtr(ddsEntities.Writer): 
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant, True, constants.HEARTBEAT_PERIOD,
                                    "tms::Heartbeat", # Heartbeat registered_type reference
                                    tmsConstants.master_controller.HEARTBEAT_WRITER)

        self._thread_started = False  # track thread, to join() on exit only if started 
        self._app_state_obj = app_state_obj

        self._app_state_obj.setMCIdInSample(self._sample, "deviceId")
        

    def write(self): # need to overload to add sequence #
        # A write is only called from a thread
        self._thread_started = True
        self._sample["sequenceNumber"]=self._app_state_obj.sequenceNumber()
        self._writer.write(self._sample)

        
# MC HB Topic Reader        
class HeartbeatMC_Rdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj, ignore_wtr_instance_hndl):
        ddsEntities.Reader.__init__(self, participant, 
                                    "tms::Heartbeat", # Heartbeat registered_type reference
                                    tmsConstants.master_controller.HEARTBEAT_READER)

        self._app_state_obj = app_state_obj
        
        # TODO: Install the content filter to only receive active MC
        # cft_topic = dds.DynamicData.ContentFilteredTopic.find(self._participant,
        #                                                      constants.REQUEST_RESPONSE_DEVICE_CFT)
        #
        # cft_topic.filter_parameters = [self._app_state_obj.deviceID()]
        # print("RRD_RDR CFT ID installed")
        participant.ignore_datawriter(ignore_wtr_instance_hndl) # don't read our own Heartbeats
        
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    # For the HB Reader, we don't want to print the sample, but rather just echo an 'HB'
    def handler(self, data):
        print ("HB", end="", flush=True)
        
        
# Generator Device DI Topic Writer        
class DeviceInfoGD_Wtr(ddsEntities.Writer):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant,  False, 0.0,
                                    "tms::DeviceInfo", # DeviceInfo registered_type reference
                                    tmsConstants.generator_device.DEVICE_INFO_WRITER)

        self._app_state_obj = app_state_obj
        self._app_state_obj.setDevIdInSample(self._sample, "deviceId")
        
        # Loadup  static fields in the C'tor (except deviceId as we have
        # common code to do this (see setHndlDevIdObj() below
        self._sample["role"]= tmsConstants.tms_DeviceRole.ROLE_SOURCE

        # example of multi-nested assignment - not working
        self._sample["product.modelName"]="MyGeneratorDevice"

    def get_data_sample(self): # Used to get the preloaded fingerprint/deviceID
        return self._sample

    
# Generator Device DI Topic Reader        
class DeviceInfoGD_Rdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj, ignore_wtr_instance_hndl):
        ddsEntities.Reader.__init__(self, participant, 
                                    "tms::DeviceInfo", # DeviceInfo registered_type name
                                    tmsConstants.generator_device.DEVICE_INFO_READER)

        self._app_state_obj = app_state_obj

        participant.ignore_datawriter(ignore_wtr_instance_hndl) # don't read our own DI
        
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    # For the DI Reader, we extract the DeviceId and save it in our app_state_obj
    # The Device Received the MCs ID and save it
    # TODO: Implement MC selection per TMS spec
    def handler(self, data):
        print ("Received sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)
        mcId=data["deviceId"]
        self._app_state_obj.setMCId(mcId)
        self._app_state_obj.setAppState(constants.DeviceState.INIT)


# MC DI Topic Writer        
class DeviceInfoMC_Wtr(ddsEntities.Writer):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant,  False, 0.0,
                                    "tms::DeviceInfo", # DeviceInfo registered_type name
                                    tmsConstants.master_controller.DEVICE_INFO_WRITER)

        self._app_state_obj = app_state_obj
        self._app_state_obj.setMCIdInSample(self._sample, "deviceId")
        
        # Loadup  static fields in the C'tor (except deviceId as we have
        # common code to do this (see setHndlDevIdObj() below
        self._sample["role"]= tmsConstants.tms_DeviceRole.ROLE_MICROGRID_CONTROLLER

        # example of multi-nested assignment - not working
        self._sample["product.modelName"]="MyMasterController"

    def get_data_sample(self): # Used to get the preloaded fingerprint/deviceID
        return self._sample
                

# MC DI Topic Reader        
class DeviceInfoMC_Rdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj, ignore_wtr_instance_hndl):
        ddsEntities.Reader.__init__(self, participant, 
                                    "tms::DeviceInfo", # DeviceInfo registered_type name
                                    tmsConstants.master_controller.DEVICE_INFO_READER)

        self._app_state_obj = app_state_obj

        participant.ignore_datawriter(ignore_wtr_instance_hndl) # don't read our own DI
                
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    # For the DI Reader, we extract the DeviceId and save it in our app_state_obj
    # 
    def handler(self, data):
        print ("Received sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)
        devId=data["deviceId"]
        self._app_state_obj.setDevId(devId)
        self._app_state_obj.setAppState(constants.ControllerState.INIT)


# Generator Device Active Microgrid Controller State (MC Selection) Topic Writer        
class AMCStateGD_Wtr(ddsEntities.Writer):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant,  False, 0.0,
                                    "tms::ActiveMicrogridControllerState", # registered_type reference
                                    tmsConstants.generator_device.AMC_STATE_WRITER)

        self._app_state_obj = app_state_obj
        self._app_state_obj.setDevIdInSample(self._sample, "deviceId")

    def set_mc_in_sample(self, mcId):
        self._sample["masterId"] = mcId
                                            
        

# MC Active Microgrid Controller State Topic Reader        
class AMCStateMC_Rdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Reader.__init__(self, participant, 
                                    "tms::ActiveMicrogridControllerState", # registered_type name
                                    tmsConstants.master_controller.AMC_STATE_READER)

        self._app_state_obj = app_state_obj

        # TODO - Put a CFT on the masterId for this controller (so we only get notified if we
        # are the controller selected
                
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    # For the DI Reader, we extract the DeviceId and save it in our app_state_obj
    # 
    def handler(self, data):
        print ("Received sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)
        self._app_state_obj._thisMCSelected = True

        
# Generator Device AuthorizationToEnergizeRequest Topic Writer        
class ATEReqGD_Wtr(ddsEntities.Writer):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant,  False, 0.0,
                                    "tms::AuthorizationToEnergizeRequest", # registered_type reference
                                    tmsConstants.generator_device.ATE_REQUEST_WRITER)

        self._app_state_obj = app_state_obj
        self._app_state_obj.setDevIdInSample(self._sample, "requestId.requestingDeviceId")
        self._app_state_obj.setDevIdInSample(self._sample, "energizeRequestingDeviceId")


    def write(self): # Override to modify requestId and to set outstanding request
        print("Writing ", self._topic_type_name)

        if not self._app_state_obj.outstandingRequest():
            # print("Writing ", self._topic_type_name)
            self._sample["sequenceId"]=self._app_state_obj.rrSequenceNumber()
            self._sample["energizeSequenceId"]=self._sample["sequenceId"]
            self._writer.write(self._sample)
        else:
            print("** Application Error - Attempting to send a request while one is outstanding") 
        
        

# MC Active AuthorizationToEnergizeRequest Topic Reader        
class ATEReqMC_Rdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj, ATE_reply_wtr):
        ddsEntities.Reader.__init__(self, participant, 
                                    "tms::AuthorizationToEnergizeRequest", # registered_type name
                                    tmsConstants.master_controller.ATE_REQUEST_READER)

        self._app_state_obj = app_state_obj
        self._ate_reply_wtr = ATE_reply_wtr

        # TODO - Put a CFT on the masterId for this controller (so we only get notified if we
        # are the controller selected
                
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    # For the DI Reader, we extract the DeviceId and save it in our app_state_obj
    # 
    def handler(self, data):
        print ("Received sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)
        #print ("ATE-reply-sample: ", self._ate_reply_wtr._sample)

        # copy request info into ATE reply and reply accepting the request
        self._ate_reply_wtr._sample["relatedRequestId.requestingDeviceId"] = \
        data["requestId.requestingDeviceId"]
        self._ate_reply_wtr._sample["relatedSequenceId"]=data["sequenceId"]      
        self._ate_reply_wtr._sample["energizeRequestingDeviceId"]=data["energizeRequestingDeviceId"]
        self._ate_reply_wtr._sample["energizeSequenceId"]=data["energizeSequenceId"]
        self._ate_reply_wtr._sample["accept"]=True
        self._ate_reply_wtr._sample["deny"]=False
        self._ate_reply_wtr._sample["userId"]=self._app_state_obj._masterControllerId
        self._ate_reply_wtr._sample["timeOfReview.epoch"]=2
        self._ate_reply_wtr._sample["timeOfReview.seconds"]=35
        self._ate_reply_wtr._sample["timeOfReview.nanoseconds"]=55
        self._ate_reply_wtr.write()

        
# MC Generator Device AuthorizationToEnergizeReply Topic Writer        
class ATERepMC_Wtr(ddsEntities.Writer):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant,  False, 0.0,
                                    "tms::AuthorizationToEnergizeReply", # registered_type reference
                                    tmsConstants.master_controller.ATE_REPLY_WRITER)

        self._app_state_obj = app_state_obj
        self._sample["deviceId"]=self._app_state_obj._masterControllerId # preload with this deviceId


    def write(self): # Override to modify requestId and to set outstanding request
        # This sample is filled out from the ATE_Request Topic in it's handler()
        print("Writing ", self._topic_type_name)
        # print(self._sample)
        self._writer.write(self._sample)
          

# Generator Device  Active AuthorizationToEnergizeReply Topic Reader        
class ATERepGD_Rdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj, ate_result_wtr):
        ddsEntities.Reader.__init__(self, participant, 
                                    "tms::AuthorizationToEnergizeReply", # registered_type name
                                    tmsConstants.generator_device.ATE_REPLY_READER)

        self._app_state_obj = app_state_obj
        self._ate_result_wtr = ate_result_wtr

        # Install the content filter for the devices Id, so we only ATE Replies to this device
        cft_topic = dds.DynamicData.ContentFilteredTopic.find(self._participant,
                                                              tmsConstants.generator_device.ATE_REPLY_CFT)
        param = "\'" + self._app_state_obj._deviceId +  "\'"
        cft_topic.filter_parameters = [param]
        print("ATE_REPLY_RDR CFT ID installed")
                
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    # For the DI Reader, we extract the DeviceId and save it in our app_state_obj
    # 
    def handler(self, data):
        print ("Received sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)
        if data["accept"]:
            print("Authorized to Energize by Master Controller: ", data["userId"])
            self._app_state_obj._authorizedForEnergizing = True
            # copy reply info into ATEResult sample and send result
            self._ate_result_wtr._sample["relatedRequestId.requestingDeviceId"] = \
            data["relatedRequestId.requestingDeviceId"]
            self._ate_result_wtr._sample["relatedSequenceId"]=data["relatedSequenceId"]
            self._ate_result_wtr._sample["authorizationDeviceId"]=data["deviceId"]
            self._ate_result_wtr._sample["energizeRequestingDeviceId"]=data["energizeRequestingDeviceId"]
            self._ate_result_wtr._sample["energizeSequenceId"]=data["energizeSequenceId"]
            self._ate_result_wtr._sample["userId"]=data["userId"]
            self._ate_result_wtr._sample["accepted"]=True
            self._ate_result_wtr._sample["responseReceived"]=True
            # EnergizeReqestValid validates that this device requested to Energize
            self._ate_result_wtr._sample["energizeRequestValid"]=self._app_state_obj._authorizedForEnergizing
            self._ate_result_wtr._sample["authorizationReviewValid"]=True
            self._ate_result_wtr.write()
        
# Generator Device AuthorizationToEnergizeResult Topic Writer        
class ATEResultGD_Wtr(ddsEntities.Writer):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant,  False, 0.0,
                                    "tms::AuthorizationToEnergizeResult", # registered_type reference
                                    tmsConstants.generator_device.ATE_RESULT_WRITER)

        self._app_state_obj = app_state_obj
        self._sample["responseReceived"]=False # initialize false (set True in ATERepGD Rdr)
        self._sample["authorizationReviewValid"]=False


    def write(self): # Override to modify requestId and to set outstanding request
        # Most of the ATEResultGD_Wtr Sample is filled out in the ATERepGD_Rdr
        print("Writing ", self._topic_type_name)
        self._writer.write(self._sample)
        
        

# MC Active AuthorizationToEnergizeResult Topic Reader        
class ATEResultMC_Rdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Reader.__init__(self, participant, 
                                    "tms::AuthorizationToEnergizeResult", # registered_type name
                                    tmsConstants.master_controller.ATE_RESULT_READER)

        self._app_state_obj = app_state_obj

        # TODO - Put a CFT on the masterId for this controller (so we only get notified if we
        # are the controller selected
                
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    # For the DI Reader, we extract the DeviceId and save it in our app_state_obj
    # 
    def handler(self, data):
        print ("Received sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)
