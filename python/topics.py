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

class ApplicationStateObj():
    # this object will hold the deviceId and state, it will be
    # used by both device and controller (and it's handle will
    # be set in all readers that set the deviceId and state
    # and writers requiring either deviceId or target deviceId.
    # A 'real' controller would keep an array of DeviceIdState
    # objects, indexed by the deviceId (or hashed to an idx)
    def __init__(self, role):
        self._role = role
        self._deviceId = bytearray(32)
        # track device source transition, send STS on change (when ever they are different)
        self._device_source_transition_state = constants.tms_SourceTransition.ST_UNINITIALIZED
        self._requested_device_source_transition_state = constants.tms_SourceTransition.ST_UNINITIALIZED

        self._application_state = constants.ControllerState.INIT
        self._controller_rcvd_da = False
        self._deviceIdSet = False # flag to send a ReqResp in response to request
        self._sequenceNumber = 0 # unique sequence number for request/response
        self._outstandingRequest = False
        
        if (self._role != constants.tms_DeviceRole.ROLE_MICROGRID_CONTROLLER and
        self._role != constants.tms_DeviceRole.ROLE_MICROGRID_SYSTEM_MANAGER):
            # if not controller or MSM, get/set deviceId froom EEPROM or Flash
            for idx, x in enumerate(constants.DEVICE1_ID):
                self._deviceId[idx]=int(x)
                
            self._deviceIdSet = True # not really used by Device
            self.print_device_id()

    # Unique Sequence number used to correlate requests/responses
    # returns either the current sequence number outstanding or the next for use
    def sequenceNumber(self):
        if not self._outstandingRequest:
            self._sequenceNumber +=1
            self._outstandingRequest = True
        return self._sequenceNumber

    def outstandingRequest(self):
        return self._outstandingRequest

    def clearOutstandingRequest(self):
        self._outstandingRequest=False
        
    def print_device_id(self):
        print("Device ID: ", end="")
        for idx in range(constants.tms_LEN_FINGERPRINT):
            print (self._deviceId[idx], end="")
        
        print() # newline
           

    # used by the controller to set the deviceID upon receiveing DA
    # Calling this also changes the Controllers state from INIT to FOUND_DEVICE
    def setDevId(self, deviceId ):
        for idx, x in enumerate(deviceId):
            self._deviceId[idx]=int(x)

        self._deviceIdSet = True
        self.print_device_id()

    def deviceId(self):
        return self._deviceId

    def myState(self):
        return self._application_state

    def setState(self, state):
        self._application_state = state

    # Used by controller to ensure DA was processed before sending ReqResp w/targetID
    def deviceIdSet(self):
        return self._deviceIdSet
        
    # used to set the Id in a sample about to be written by any topic   
    def setDevIdInSample (self, sample, idStrName):
        for idx, x in enumerate(self._deviceId):
            # build sample member name with str index e.g., _sample["deviceId[1]"]
            deviceIdStr=idStrName+"["+str(idx)+"]"
            sample[deviceIdStr]=int(x)

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
    

# Device HB Topic Writer
class HeartbeatWtr(ddsEntities.Writer): 
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant, True, constants.HEARTBEAT_PERIOD,
                                    constants.HEARTBEAT_TYPE_NAME,
                                    constants.HEARTBEAT_WRITER)
        
        self._app_state_obj = app_state_obj
        

# Device RRD Topic Writer        
class RequestRspDevWtr(ddsEntities.Writer):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant, False, 0.0,
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_DEVICE_WRITER)

        self._app_state_obj = app_state_obj

    def write(self, req_seq_no): # override default writer
        print("Writing ReqRes (Device)", self._topic_type_name)
        # set the Id field - we do this each time we write
        self._app_state_obj.setDevIdInSample(self._sample, "relatedRequestId.deviceId")
        self._sample["relatedRequestId.sequenceNumber"]=req_seq_no
        self._writer.write(self._sample)

        
# Device RRD Topic Reader        
class RequestRspDevRdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Reader.__init__(self, participant, 
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_DEVICE_READER)

        self._app_state_obj = app_state_obj
        
        # Install the content filter for the devices Id, so we only get STR's to this device
        cft_topic = dds.DynamicData.ContentFilteredTopic.find(self._participant,
                                                              constants.REQUEST_RESPONSE_DEVICE_CFT)
        device_id = self._app_state_obj.deviceId()   
        cft_topic.filter_parameters = [str(device_id[28]), str(device_id[29]),
                                       str(device_id[30]), str(device_id[31])]
        print("RRD_RDR CFT ID installed")
    
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    def handler(self, data):
        print ("Received sample for topic {r_name}".format(r_name=self._reader_name))
        # print (data, end="", flush=True)
        if  data["relatedRequestId.sequenceNumber"] == self._app_state_obj.sequenceNumber():
            print("RRD_RDR - request responded")
            self._app_state_obj.clearOutstandingRequest()
            # self._app_state_obj.setState(constants.DeviceState.JOINING_GRID)

            
# Controller/MSM RRM Topic Writer
class RequestRspMSMSimWtr(ddsEntities.Writer):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant, False, 0.0,
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_MSMSIM_WRITER)
        
        self._app_state_obj = app_state_obj

    def write(self, req_seq_no): # override default writer
        print("Writing ReqRes (MSM)", self._topic_type_name)
        # set the Id field - we do this each time we write
        self._app_state_obj.setDevIdInSample(self._sample, "relatedRequestId.deviceId")
        self._sample["relatedRequestId.sequenceNumber"]=req_seq_no
        self._writer.write(self._sample)


# Controller/MSM RRM Topic Reader        
class RequestRspMSMSimRdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.REQUEST_RESPONSE_TYPE_NAME,
                                    constants.REQUEST_RESPONSE_MSMSIM_READER)

        self._app_state_obj = app_state_obj
        
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    def handler(self, data):
        print ("Received sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)
        

# Device DA Topic Writer        
class DeviceAnnouncementWtr(ddsEntities.Writer):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant,  False, 0.0,
                                    constants.DEVICE_ANNOUNCEMENT_TYPE_NAME,
                                    constants.DEVICE_ANNOUNCEMENT_WRITER)

        self._app_state_obj = app_state_obj
        self._app_state_obj.setDevIdInSample(self._sample, "deviceId")
        
        # Loadup  static fields in the C'tor (except deviceId as we have
        # common code to do this (see setHndlDevIdObj() below
        self._sample["role"]= constants.tms_DeviceRole.ROLE_SOURCE

        # example of multi-nested assignment - not working
        # self._sample["source[0].parameters[0].name"]="foobar"

    def get_data_sample(self): # Used to get the preloaded fingerprint/deviceID
        return self._sample
                

# Controller/MSM DA Topic Reader        
class DeviceAnnouncementRdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Reader.__init__(self, participant, 
                                    constants.DEVICE_ANNOUNCEMENT_TYPE_NAME,
                                    constants.DEVICE_ANNOUNCEMENT_READER)

        self._app_state_obj = app_state_obj
                
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    # For the DA Reader, we extract the DeviceId and save it in our app_state_obj
    # to track this device and send requests to it.
    def handler(self, data):
        print ("Received sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)
        devId=data["deviceId"]
        self._app_state_obj.setDevId(devId)
        self._app_state_obj.setState( constants.ControllerState.FOUND_NEW_DEVICE)

        
# Device Topic MMR Writer        
class MicrogridMembershipRqstWtr(ddsEntities.Writer):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant,  False, 0.0,
                                    constants.MICROGRID_MEMBERSHIP_REQUEST_TYPE_NAME,
                                    constants.MICROGRID_MEMBERSHIP_REQUEST_WRITER)

        self._app_state_obj = app_state_obj
        
        # Loadup all static fields in the C'tor
        self._app_state_obj.setDevIdInSample(self._sample, "deviceId")
        self._app_state_obj.setDevIdInSample(self._sample, "requestId.deviceId")
        self._sample["membership"]=constants.tms_MicrogridMembership.MM_JOIN

    def write(self):
        if not self._app_state_obj.outstandingRequest():
            print("Writing ", self._topic_type_name)
            self._sample["requestId.sequenceNumber"]=self._app_state_obj.sequenceNumber()
            self._writer.write(self._sample)
        else:
            print("** Application Error - Attempting to send a request while one is outstanding") 
        

        
# Controller/MSM MMR Topic Reader - all request Readers have to issue a requestResponse       
class MicrogridMembershipRqstRdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj, reqRes_wtr):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.MICROGRID_MEMBERSHIP_REQUEST_TYPE_NAME,
                                    constants.MICROGRID_MEMBERSHIP_REQUEST_READER)

        self._app_state_obj = app_state_obj   
        self._my_request_response_wtr = reqRes_wtr
    
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    # TODO: check deviceId again known DA's and actual request (JOIN/LEAVE etc)
    # send a response in the application StateMachine to avoid race condition, where
    # a DA quickly followed by a MMR comes in. If we respond too quickly, the writer
    # target DeviceId is not yet set in the sample.
    def handler(self, data):
        print ("Received sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)
        while (not self._app_state_obj.deviceIdSet()): # ensure the DA has been processed
            sleep(1)

        # The Controller can receive DA and MMR right on top of eachother, not a problem,
        # but the Controller DA Reader will set the app_state = FOUND_NEW_DEVICE, then
        # MMR will set app_state = JOINING_GRID, since the State Machine runs with a 1 sec
        # sleep between states, we can jump from INIT to JOINING_GRID w/o
        # Transitioning through FOUND_NEW_DEVICE
        sleep(1) # force the Controller SM to go through FOUND_NEW_DEVICE STATE

        req_sequence_no = data["requestId.sequenceNumber"]
        self._my_request_response_wtr.write(req_sequence_no) # send a good response
        self._app_state_obj.setState(constants.ControllerState.JOINING_GRID)
        
        
# Controller/MSM MMO Topic Writer - AKA - MembershipApproval
class MicrogridMembershipOutcomeWtr(ddsEntities.Writer):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant, False, 0.0,
                                    constants.MICROGRID_MEMBERSHIP_OUTCOME_TYPE_NAME,
                                    constants.MICROGRID_MEMBERSHIP_OUTCOME_WRITER)

        self._app_state_obj = app_state_obj

    def fillInDevId(self):
        # for Controllers this is called from the Device Announcement Reader after
        # we get the deviceId
        self._app_state_obj.setDevIdInSample(self._sample, "requestId.deviceId")
        self._app_state_obj.setDevIdInSample(self._sample, "relatedRequestId.deviceId")
        self._app_state_obj.setDevIdInSample(self._sample, "deviceId")

    def setResult(self, result):
        self._sample["result"] = result
    
# Device MMO Topic Reader        
class MicrogridMembershipOutcomeRdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.MICROGRID_MEMBERSHIP_OUTCOME_TYPE_NAME,
                                    constants.MICROGRID_MEMBERSHIP_OUTCOME_READER)

        self._app_state_obj = app_state_obj

        # Install the content filter for the devices Id, so we only get MMO's to this device
        cft_topic = dds.DynamicData.ContentFilteredTopic.find(self._participant,
                                                              constants.MICROGRID_MEMBERSHIP_OUTCOME_CFT)                                                              
        device_id = self._app_state_obj.deviceId()   
        cft_topic.filter_parameters = [str(device_id[28]), str(device_id[29]),
                                       str(device_id[30]), str(device_id[31])]
        print("MMO_RDR: CFT ID installed")

        # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    def handler(self, data):
        print ("Received sample for topic {r_name}".format(r_name=self._reader_name))
        #print (data, end="", flush=True)
        self._app_state_obj.setState(constants.DeviceState.WAIT_CMD_IDLE)

        
# Controller/MSM STR Topic Writer        
class SrcTransitionRqstWtr(ddsEntities.Writer):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant, False, 0.0,
                                    constants.SOURCE_TRANSITION_REQUEST_TYPE_NAME,
                                    constants.SOURCE_TRANSITION_REQUEST_WRITER)

        self._app_state_obj = app_state_obj
                
    def fillInDevId(self):    
        # for Controllers this is called from the Device Announcement Reader after
        # we get the deviceId
        self._app_state_obj.setDevIdInSample(self._sample, "requestId.deviceId")
        self._app_state_obj.setDevIdInSample(self._sample, "deviceId")

    def setTransition(self, transition):
        self._sample["desiredTransition"] = transition
        
# Device STR Topic Reader        
class SrcTransitionRqstRdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj, reqRes_wtr):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.SOURCE_TRANSITION_REQUEST_TYPE_NAME,
                                    constants.SOURCE_TRANSITION_REQUEST_READER)

        self._app_state_obj = app_state_obj
        self._my_request_response_wtr = reqRes_wtr
        
        # Install the content filter for the devices Id, so we only get STR's to this device
        cft_topic = dds.DynamicData.ContentFilteredTopic.find(self._participant,
                                                      constants.SOURCE_TRANSITION_REQUEST_CFT)
        device_id = self._app_state_obj.deviceId()   
        cft_topic.filter_parameters = [str(device_id[28]), str(device_id[29]),
                                       str(device_id[30]), str(device_id[31])]
        print("STR_RDR: CFT ID installed")

        
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    def handler(self, data):
        print ("Received sample for topic {r_name} {ns_name}".\
               format(r_name=self._reader_name, ns_name=data["desiredTransition"]))
        #print (data, end="", flush=True)
        req_sequence_no = data["requestId.sequenceNumber"]
        self._app_state_obj.setDevReqSrcXitionState(data["desiredTransition"])
        self._my_request_response_wtr.write(req_sequence_no) # send a good response
        self._app_state_obj.setState(constants.ControllerState.POWERING_UP)
         

# Device STS Topic Writer
class SrcTransitionStateWtr(ddsEntities.Writer):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Writer.__init__(self, participant, False, 0.0,
                                    constants.SOURCE_TRANSITION_STATE_TYPE_NAME,
                                    constants.SOURCE_TRANSITION_STATE_WRITER)

        self._app_state_obj = app_state_obj
        
        # Used to give the handle to the DeviceIdState Obj above to writer objects
        # for device Topic Writers, we have the device Id so load the topic sample
        self._app_state_obj.setDevIdInSample(self._sample, "deviceId")
        self._app_state_obj.setDevIdInSample(self._sample, "relatedRequestId.deviceId")

    def write(self):
        print("Writing STS - On Change: ", self._app_state_obj.devSrcState())
        self._sample["presentState"] = self._app_state_obj.devSrcState()
        self._sample["futureState"] = self._app_state_obj.devSrcState()
        self._writer.write(self._sample)


        
# Controller/MSM STS Topic Reader        
class SrcTransitionStateRdr(ddsEntities.Reader):
    def __init__(self, participant, app_state_obj):
        ddsEntities.Reader.__init__(self, participant,
                                    constants.SOURCE_TRANSITION_STATE_TYPE_NAME,
                                    constants.SOURCE_TRANSITION_STATE_READER)

        self._app_state_obj = app_state_obj
        
    # Topic Context Reader Handler (overrides ddsEntities.py Default Hander)
    def handler(self, data):
        print ("Received sample for topic {r_name} {ns_name}". \
               format(r_name=self._reader_name, ns_name=data["presentState"]))
        self._app_state_obj.setDevSrcState(data["presentState"])
        self._app_state_obj.print_device_id()
        print("State: ", self._app_state_obj.devSrcState())
        #print (data, end="", flush=True)
        

