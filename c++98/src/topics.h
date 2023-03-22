/*
 * (c) Copyright, Real-Time Innovations, 2022.  All rights reserved.
 * RTI grants Licensee a license to use, modify, compile, and create derivative
 * works of the software solely for use with RTI Connext DDS. Licensee may
 * redistribute copies of the software provided that all such copies are subject
 * to this license. The software is provided "as is", with no warranty of any
 * type, including any warranty for fitness for any purpose. RTI is under no
 * obligation to maintain or support the software. RTI shall not be liable for
 * any incidental or consequential damages arising out of the use or inability
 * to use the software.
 * 
 * 
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

 If you don't wish to run writer threads for event or a periodic topics you may omit
 calling the writer.start(). If you would prefer to use a listener to montior events
 you will need to modify the ddsEntities.py infrastructure file.

 Periodic writers may be created by placing a call to a topic handler while loop.

 */

#ifndef TOPICS_H
#define TOPICS_H

#include <iostream>
#include "ddsEntities.h"
#include "tmsExampleApp.h"
#include "tmsExampleAppSupport.h"
#include "constants.h"
#include "topics_T.h"


namespace topics
{

  class ApplicationStateObj {

    public:    ApplicationStateObj(enum tms::DeviceRole role);
    
      ~ApplicationStateObj() {};

    enum tms::DeviceRole myRole(void) {return this->role;}
    
    void setControllerState(enum ControllerState newState){
      this->controller_state = newState;
    }

    enum ControllerState controllerState(void) {
      return this->controller_state;
    }
    
    void setDeviceState(enum DeviceState newState) {
      this->device_state = newState;
    }

    enum DeviceState deviceState(void) { return this->device_state; }
    
    DDS_UnsignedLong sequenceNumber(void) { return this->sequence_number++; }

    // Request Sequenc Number
    DDS_UnsignedLong rSequenceNumber() {
      if (!this->outstanding_request) {
	this->r_sequence_number=this->sequenceNumber();
	this->outstanding_request=true;
      }
      return this->r_sequence_number;
    }

    DDS_Char * myID(void) {
      if (role == tms::ROLE_MICROGRID_CONTROLLER)
	return this->masterControllerId;
      else
	return this->deviceId;
    }

    DDS_Char * controllerID(void) { return this->masterControllerId; }

    DDS_Char * deviceID(void) { return this->deviceId;}

    // used by the Device to track the controller it selected
    void setControllerId(DDS_Char * id) {
      this->masterControllerId = id;
      this->mc_id_set = true;
      std::cout << "\nFound Controller Id: "
		<< this->masterControllerId
		<< std::endl;
    }

    bool mcIdSet(void) { return this->mc_id_set;}

    // used by the Controller to track a found Device
    void setDeviceId(DDS_Char * id) {
      this->deviceId = id;
      this->device_id_set = true;
      std::cout << "\nFound Device Id: "
		<< this->deviceId
		<< std::endl;
    }

    bool deviceIdSet(void) { return this->device_id_set; }
    
    void setThisMCSelected(bool b){ this->this_MC_selected = b; }

    bool thisMCSelected (void) { return this->this_MC_selected; }

    bool outstandingRequest(void) {
      return this->outstanding_request;
    }

    void clearOutstandingRequest(void) {
      this->outstanding_request = false;
    } 

    bool authorizedForEnergizing(void) {
      return this->authorized_for_energizing;
    }

    void setAuthorizedForEnergizing(bool b) {
      this->authorized_for_energizing = b;
    }
      
    void setDeviceStartStopPresentLevel(enum tms::EnergyStartStopLevel newLevel) {
      this->device_start_stop_present_level = newLevel;
    }

    enum tms::EnergyStartStopLevel deviceStartStopPresentLevel(void) {
      return this->device_start_stop_present_level;
    }  

    void setDeviceStartStopFutureLevel(enum tms::EnergyStartStopLevel newLevel) {
      this->device_start_stop_future_level = newLevel;
    }

    enum tms::EnergyStartStopLevel deviceStartStopFutureLevel(void) {
      return this->device_start_stop_future_level;
    }

    std::string energyLevelEnumText(enum tms::EnergyStartStopLevel level) {
      switch (level) {
      case tms::ESSL_UNKNOWN:
	return "ESSL_UNKNOWN";
	break;
      case tms::ESSL_ANY:
	return "ESSL_ANY";
	break;
      case tms::ESSL_OFF:
	return "ESSL_OFF";
	break;
      case tms::ESSL_WARM:
	return "ESSL_WARM";
	break;
      case tms::ESSL_IDLE:
	return "ESSL_IDLE";
	break;
      case tms::ESSL_READY:
	return "ESSL_READY";
	break;
      case tms::ESSL_READY_SYNCED:
	return "ESSL_READY_SYNCED";
	break;
      case tms::ESSL_OPERATIONAL:
	return "ESSL_OPERATIONAL";
	break;
      default:
	return "Level Out of Range";
      }
    }
    
    private:
    enum ControllerState controller_state;
    enum DeviceState device_state;
    enum tms::DeviceRole role;
    enum tms::EnergyStartStopLevel  device_start_stop_present_level;
    enum tms::EnergyStartStopLevel  device_start_stop_future_level;

    DDS_Char * deviceId;
    DDS_Char * masterControllerId;
    bool  this_MC_selected;  // designates that the device has selected this MC
    bool  authorized_for_energizing;
    bool  device_id_set;
    bool  mc_id_set;
    DDS_UnsignedLong sequence_number;   // Unique running sequence
    DDS_UnsignedLong r_sequence_number; // Current out standing request SN
    bool outstanding_request;
    
  };

  // Generator Device Heartbeat Writer  
  class HeartbeatGD_Wtr : public TopicWtr<tms::Heartbeat,
					  tms::HeartbeatTypeSupport,
					  tms::HeartbeatDataWriter> {
    public:
      HeartbeatGD_Wtr(const DDSDomainParticipant * participant, 
                      const DDSPublisher * publisher,
		      ApplicationStateObj * appStateObj,
                      const bool periodic = true, 
                      const int period = 1 ) :
            TopicWtr(
		     participant, 
		     publisher,
		     periodic,
		     period,
		     tms::QOS_LIBRARY,
		     "Medium",                          // QoS Profile name from XML 
		     tms::topic::TOPIC_HEARTBEAT,       // str name of topic
		     generator_device::HEARTBEAT_WRITER // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
	this->getTopicSample()->deviceId = appStateObj->myID(); // load my device ID
	
      };
    
      void write(void) {
	//std::cout << " " << this->appStateObj->sequenceNumber() << std::flush;
	this->getTopicSample()->sequenceNumber =  this->appStateObj->sequenceNumber();
	this->topicWriter->write(*this->topicSample, DDS_HANDLE_NIL);
      };
    
     
    private:
    ApplicationStateObj * appStateObj;

  };
    
  // Generator Device Heartbeat Reader  
  class HeartbeatGD_Rdr : public TopicRdr<tms::Heartbeat,
					  tms::HeartbeatTypeSupport,
					  tms::HeartbeatDataReader,
					  tms::HeartbeatSeq> {
    public:
      HeartbeatGD_Rdr(DDSDomainParticipant * participant, 
                      const DDSSubscriber * subscriber,
		      const Cft filter,   // Not Used - pass in an empty filter
		      ApplicationStateObj * appStateObj,
		      const DDS_InstanceHandle_t  ignoreWtrInstanceHdl
                     ) :
            TopicRdr(
		     participant, 
		     subscriber,
		     filter,
		     tms::QOS_LIBRARY,
		     "Medium",                          // QoS Profile name from XML 
		     tms::topic::TOPIC_HEARTBEAT,       // str name of topic
		     generator_device::HEARTBEAT_READER // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
	participant->ignore_publication(ignoreWtrInstanceHdl);

      };

    void handler(const tms::Heartbeat * data) {
      std::cout << "HB" << std::flush; // just print "HB"s
    };
     
    private:
    ApplicationStateObj * appStateObj; // we don't appear to use this object

  };

  // Master Contoller Heartbeat Writer  
  class HeartbeatMC_Wtr : public TopicWtr<tms::Heartbeat,
					  tms::HeartbeatTypeSupport,
					  tms::HeartbeatDataWriter> {
    public:
      HeartbeatMC_Wtr(const DDSDomainParticipant * participant, 
                      const DDSPublisher * publisher,
		      ApplicationStateObj * appStateObj,
                      const bool periodic = true, 
                      const int period = 1 ) :
            TopicWtr(
		     participant, 
		     publisher,
		     periodic,
		     period,
		     tms::QOS_LIBRARY,
		     "Medium",                           // QoS Profile name from XML 
		     tms::topic::TOPIC_HEARTBEAT,        // str name of topic
		     master_controller::HEARTBEAT_WRITER // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
	this->getTopicSample()->deviceId = appStateObj->myID(); // load my device ID
	
      };

      void write(void) {
	this->getTopicSample()->sequenceNumber =  this->appStateObj->sequenceNumber();
	this->topicWriter->write(*this->topicSample, DDS_HANDLE_NIL);;
      };
     
    private:
    ApplicationStateObj * appStateObj;

  };
    
  // Master Controller Heartbeat Reader  
  class HeartbeatMC_Rdr : public TopicRdr<tms::Heartbeat,
					  tms::HeartbeatTypeSupport,
					  tms::HeartbeatDataReader,
					  tms::HeartbeatSeq> {
    public:
      HeartbeatMC_Rdr(DDSDomainParticipant * participant, 
                      const DDSSubscriber * subscriber,
		      const Cft filter,
		      ApplicationStateObj * appStateObj,
		      const DDS_InstanceHandle_t & ignoreWtrInstanceHdl		      
                     ) :
            TopicRdr(
		     participant, 
		     subscriber,
		     filter,
		     tms::QOS_LIBRARY,
		     "Medium",                          // QoS Profile name from XML 
		     tms::topic::TOPIC_HEARTBEAT,       // str name of topic
		     master_controller::HEARTBEAT_READER // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
	participant->ignore_publication(ignoreWtrInstanceHdl);
	
      };

    void handler(const tms::Heartbeat * data) {
      std::cout << "HB" << std::flush; // just print "HB"s
    };
     
    private:
    ApplicationStateObj * appStateObj;
  };


  // Generator Device Device Info Writer  
  class DeviceInfoGD_Wtr : public TopicWtr<tms::DeviceInfo,
					  tms::DeviceInfoTypeSupport,
					  tms::DeviceInfoDataWriter> {
    public:
      DeviceInfoGD_Wtr(const DDSDomainParticipant * participant, 
                      const DDSPublisher * publisher,
		      ApplicationStateObj * appStateObj,
                      const bool periodic = false, 
                      const int period = 0 ) :
            TopicWtr(
		     participant, 
		     publisher,
		     periodic,
		     period,
		     tms::QOS_LIBRARY,
		     "PublishLast",                       // QoS Profile name from XML 
		     tms::topic::TOPIC_DEVICE_INFO,       // str name of topic
		     generator_device::DEVICE_INFO_WRITER // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
	this->getTopicSample()->deviceId = appStateObj->myID(); // load my device ID
	this->getTopicSample()->role = appStateObj->myRole();   // load device role
	// example of multinested assignment
	this->getTopicSample()->product.modelName = (DDS_Char *)"MyGeneratorDevice";

	
      };
         
    private:
    ApplicationStateObj * appStateObj;

  };
    
  // Generator Device DeviceInfo Reader  
  class DeviceInfoGD_Rdr : public TopicRdr<tms::DeviceInfo,
					  tms::DeviceInfoTypeSupport,
					  tms::DeviceInfoDataReader,
					  tms::DeviceInfoSeq> {
    public:
      DeviceInfoGD_Rdr(DDSDomainParticipant * participant, 
                      const DDSSubscriber * subscriber,
		      const Cft filter,   // Not Used - pass in an empty filter
		      ApplicationStateObj * appStateObj,
		      const DDS_InstanceHandle_t  ignoreWtrInstanceHdl
                     ) :
            TopicRdr(
		     participant, 
		     subscriber,
		     filter,
		     tms::QOS_LIBRARY,
		     "PublishLast",                       // QoS Profile name from XML 
		     tms::topic::TOPIC_DEVICE_INFO,       // str name of topic
		     generator_device::DEVICE_INFO_READER // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
        participant->ignore_publication(ignoreWtrInstanceHdl);
	
      };

    void handler(const tms::DeviceInfo * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_DEVICE_INFO
		<< std::flush;
      this->appStateObj->setControllerId(data->deviceId);
      // Need some hysteresis here so the controller and device don't keep
      // reseting eachother indefinitely upon a reset of one or the other
      if (this->appStateObj->deviceState() != D_DISCOVERY) 
	this->appStateObj->setDeviceState(D_INIT);
    };
     
    private:
    ApplicationStateObj * appStateObj; // we don't appear to use this object

  };

  // Master Contoller DeviceInfo Writer  
  class DeviceInfoMC_Wtr : public TopicWtr<tms::DeviceInfo,
					  tms::DeviceInfoTypeSupport,
					  tms::DeviceInfoDataWriter> {
    public:
      DeviceInfoMC_Wtr(const DDSDomainParticipant * participant, 
                      const DDSPublisher * publisher,
		      ApplicationStateObj * appStateObj,
                      const bool periodic = false, 
                      const int period = 0 ) :
            TopicWtr(
		     participant, 
		     publisher,
		     periodic,
		     period,
		     tms::QOS_LIBRARY,
		     "PublishLast",                        // QoS Profile name from XML 
		     tms::topic::TOPIC_DEVICE_INFO,        // str name of topic
		     master_controller::DEVICE_INFO_WRITER // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
	this->getTopicSample()->deviceId = appStateObj->myID(); // load my MC ID
	this->getTopicSample()->role = appStateObj->myRole();   // load MC role
	// example of multinested assignment
	this->getTopicSample()->product.modelName = (DDS_Char *) "MyMasterController";
	
      };
     
    private:
    ApplicationStateObj * appStateObj;

  };
    
  // Master Controller DeviceInfo Reader  
  class DeviceInfoMC_Rdr : public TopicRdr<tms::DeviceInfo,
					  tms::DeviceInfoTypeSupport,
					  tms::DeviceInfoDataReader,
					  tms::DeviceInfoSeq> {
    public:
      DeviceInfoMC_Rdr(DDSDomainParticipant * participant, 
                      const DDSSubscriber * subscriber,
		      const Cft filter,
		      ApplicationStateObj * appStateObj,
		      const DDS_InstanceHandle_t  ignoreWtrInstanceHdl		      
                     ) :
            TopicRdr(
		     participant, 
		     subscriber,
		     filter,
		     tms::QOS_LIBRARY,
		     "PublishLast",                        // QoS Profile name from XML 
		     tms::topic::TOPIC_DEVICE_INFO,        // str name of topic
		     master_controller::DEVICE_INFO_READER // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
	participant->ignore_publication(ignoreWtrInstanceHdl);
	
      };

    void handler(const tms::DeviceInfo * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_DEVICE_INFO
		<< std::flush;
      this->appStateObj->setDeviceId(data->deviceId);
      // Need some hysteresis here so the controller and device don't keep
      // reseting eachother indefinitely upon a reset of one or the other
      if (this->appStateObj->controllerState() != MC_DISCOVERY)
	this->appStateObj->setControllerState(MC_INIT);
    };
     
    private:
    ApplicationStateObj * appStateObj;
    
  };

 // Generator Device ActiveMicrogridControllerState Writer  
  class AMCStateGD_Wtr : public TopicWtr<tms::ActiveMicrogridControllerState,
					 tms::ActiveMicrogridControllerStateTypeSupport,
					 tms::ActiveMicrogridControllerStateDataWriter> {
    public:
      AMCStateGD_Wtr(const DDSDomainParticipant * participant, 
                     const DDSPublisher * publisher,
		     ApplicationStateObj * appStateObj,
                     const bool periodic = false, 
                     const int period = 0 ) :
            TopicWtr(
		     participant, 
		     publisher,
		     periodic,
		     period,
		     tms::QOS_LIBRARY,
		     "PublishLast",                       // QoS Profile name from XML 
		     tms::topic::TOPIC_ACTIVE_MICROGRID_CONTROLLER_STATE, // str name of topic
		     generator_device::AMC_STATE_WRITER // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
	this->getTopicSample()->deviceId = appStateObj->myID();

      };

    void setMCIDinSample(DDS_Char * mcId) {
      this->getTopicSample()->masterId = appStateObj->controllerID(); // Select MC
    }
    
    private:
    ApplicationStateObj * appStateObj;

    };

  // Master Controller ActiveMicrogridController Reader  
  class AMCStateMC_Rdr : public TopicRdr<tms::ActiveMicrogridControllerState,
					 tms::ActiveMicrogridControllerStateTypeSupport,
					 tms::ActiveMicrogridControllerStateDataReader,
					 tms::ActiveMicrogridControllerStateSeq> {
    public:
      AMCStateMC_Rdr(DDSDomainParticipant * participant, 
                     const DDSSubscriber * subscriber,
		     const Cft filter,
		     ApplicationStateObj * appStateObj
                     ) :
            TopicRdr(
		     participant, 
		     subscriber,
		     filter,
		     tms::QOS_LIBRARY,
		     "PublishLast",                       // QoS Profile name from XML 
		     tms::topic::TOPIC_ACTIVE_MICROGRID_CONTROLLER_STATE, // str name of topic
		     master_controller::AMC_STATE_READER  // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
	
      };

    void handler(const tms::ActiveMicrogridControllerState * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_ACTIVE_MICROGRID_CONTROLLER_STATE
		<< std::flush;
      std::cout << "\nThis Master Controller ID: "
		<< appStateObj->myID()
		<< " has been selected"
		<< std:: endl;
      this->appStateObj->setThisMCSelected(true);
      // masterId is an optional field so the ptr has to be tested
      if (data->masterId == (DDS_Char) NULL)
	std::cout << "Optional field MasterId not populated";
	else
	  std::cout << "Optional Field MasterId is populated: "
		    << data->masterId;
      std::cout << std::endl;
    };
     
    private:
    ApplicationStateObj * appStateObj;
    
  };


  // Generator Device AuthorizationToEnergizeResult Writer  
  class ATEResultGD_Wtr : public TopicWtr<tms::AuthorizationToEnergizeResult,
					  tms::AuthorizationToEnergizeResultTypeSupport,
					  tms::AuthorizationToEnergizeResultDataWriter> {
    public:
      ATEResultGD_Wtr(const DDSDomainParticipant * participant, 
                      const DDSPublisher * publisher,
		      ApplicationStateObj * appStateObj,
                      const bool periodic = false, 
                      const int period = 0 ) :
            TopicWtr(
		     participant, 
		     publisher,
		     periodic,
		     period,
		     tms::QOS_LIBRARY,
		     "Response",                          // QoS Profile name from XML 
		     tms::topic::TOPIC_AUTHORIZATION_TO_ENERGIZE_RESULT, // str name of topic
		     generator_device::ATE_RESULT_WRITER // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
	// Initialize false, these get set in the ATEReplyGD_Rdr
	this->getTopicSample()->responseReceived = false;
	this->getTopicSample()->authorizationReviewValid = false;

      };
    
    private:
    ApplicationStateObj * appStateObj;

    };

  
  // Master Controller AuthorizationToEnergizeResult Reader  
  class ATEResultMC_Rdr : public TopicRdr<tms::AuthorizationToEnergizeResult,
				         tms::AuthorizationToEnergizeResultTypeSupport,
				         tms::AuthorizationToEnergizeResultDataReader,
				         tms::AuthorizationToEnergizeResultSeq> {
    public:
      ATEResultMC_Rdr(DDSDomainParticipant * participant, 
                     const DDSSubscriber * subscriber,
		     const Cft filter,
		     ApplicationStateObj * appStateObj
                     ) :
            TopicRdr(
		     participant, 
		     subscriber,
		     filter,
		     tms::QOS_LIBRARY,
		     "Response",                           // QoS Profile name from XML 
		     tms::topic::TOPIC_AUTHORIZATION_TO_ENERGIZE_RESULT, // str name of topic
		     master_controller::ATE_RESULT_READER  // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
	
      };

    void handler(const tms::AuthorizationToEnergizeResult * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_AUTHORIZATION_TO_ENERGIZE_RESULT
		<< std::flush;
 
    };
     
    private:
    ApplicationStateObj * appStateObj;
    
  };
  

  // Master Contoller AuthorizationToEnergizeReply  Writer  
  class ATEReplyMC_Wtr : public TopicWtr<tms::AuthorizationToEnergizeReply,
					 tms::AuthorizationToEnergizeReplyTypeSupport,
					 tms::AuthorizationToEnergizeReplyDataWriter> {
    public:
      ATEReplyMC_Wtr(const DDSDomainParticipant * participant, 
                     const DDSPublisher * publisher,
		     ApplicationStateObj * appStateObj,
                     const bool periodic = false, 
                     const int period = 0 ) :
	TopicWtr(
		 participant, 
		 publisher,
		 periodic,
		 period,
		 tms::QOS_LIBRARY,
		 "Response",                         // QoS Profile name from XML 
		 tms::topic::TOPIC_AUTHORIZATION_TO_ENERGIZE_REPLY,  // str name of topic
		 master_controller::ATE_REPLY_WRITER // str name of writer
		 ) {
	
	this->appStateObj=appStateObj;
	this->getTopicSample()->deviceId = appStateObj->myID(); // preload with our id

      };
     
    private:
    ApplicationStateObj * appStateObj;

  };

  // Generator Device AuthorizationToEnergizeReply Reader  
  class ATEReplyGD_Rdr : public TopicRdr<tms::AuthorizationToEnergizeReply,
				       tms::AuthorizationToEnergizeReplyTypeSupport,
				       tms::AuthorizationToEnergizeReplyDataReader,
				       tms::AuthorizationToEnergizeReplySeq> {
    public:
      ATEReplyGD_Rdr(DDSDomainParticipant * participant, 
                     const DDSSubscriber * subscriber,
		     const Cft filter,   // Not Used - pass in an empty filter
		     ApplicationStateObj * appStateObj,
		     ATEResultGD_Wtr * ateResultGD_Wtr
                     ) :
	  TopicRdr(
		   participant, 
		   subscriber,
		   filter,
		   tms::QOS_LIBRARY,
		   "Response",                          // QoS Profile name from XML 
		   tms::topic::TOPIC_AUTHORIZATION_TO_ENERGIZE_REPLY, // str name of topic
		   generator_device::ATE_REPLY_READER // str name of writer
		   ) {
	
	  this->appStateObj=appStateObj;
	  this->ateResultGD_Wtr = ateResultGD_Wtr;
  
      };

    void handler(const tms::AuthorizationToEnergizeReply * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_AUTHORIZATION_TO_ENERGIZE_REPLY
		<< std::flush;
      // copy much of the information out of the reply to the result topic and write
      this->appStateObj->setAuthorizedForEnergizing(true);
      this->ateResultGD_Wtr->getTopicSample()->relatedRequestId.requestingDeviceId =
	data->relatedRequestId.requestingDeviceId;
      this->ateResultGD_Wtr->getTopicSample()->relatedSequenceId =
	data->relatedSequenceId;
      this->ateResultGD_Wtr->getTopicSample()->authorizationDeviceId =
	data->deviceId;
      this->ateResultGD_Wtr->getTopicSample()->energizeRequestingDeviceId =
	data->energizeRequestingDeviceId;
      this->ateResultGD_Wtr->getTopicSample()->energizeSequenceId =
	data->energizeSequenceId;
      this->ateResultGD_Wtr->getTopicSample()->userId = data->userId;
      this->ateResultGD_Wtr->getTopicSample()->accepted = true;
      this->ateResultGD_Wtr->getTopicSample()->responseReceived = true;
      this->ateResultGD_Wtr->getTopicSample()->energizeRequestValid =
	this->appStateObj->authorizedForEnergizing();
      this->ateResultGD_Wtr->getTopicSample()->authorizationReviewValid = true;      
      this->ateResultGD_Wtr->write();

    };
     
    private:
    ApplicationStateObj * appStateObj; // we don't appear to use this object
    ATEResultGD_Wtr * ateResultGD_Wtr;

  };
  
  // Master Controller AuthorizationToEnergizeRequest Reader  
  class ATEReqMC_Rdr : public TopicRdr<tms::AuthorizationToEnergizeRequest,
				       tms::AuthorizationToEnergizeRequestTypeSupport,
				       tms::AuthorizationToEnergizeRequestDataReader,
				       tms::AuthorizationToEnergizeRequestSeq> {
    public:
      ATEReqMC_Rdr(DDSDomainParticipant * participant, 
                   const DDSSubscriber * subscriber,
		   const Cft filter,
		   ApplicationStateObj * appStateObj,
		   ATEReplyMC_Wtr * ateReplyMC_Wtr
                   ) :
	TopicRdr(
		 participant, 
		 subscriber,
		 filter,
		 tms::QOS_LIBRARY,
		 "Command",                             // QoS Profile name from XML 
		 tms::topic::TOPIC_AUTHORIZATION_TO_ENERGIZE_REQUEST, // str name of topic
		 master_controller::ATE_REQUEST_READER  // str name of writer
		 ) {
	
	this->appStateObj=appStateObj;
	this->ateReplyMC_Wtr = ateReplyMC_Wtr;
	
      };

    void handler(const tms::AuthorizationToEnergizeRequest * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_AUTHORIZATION_TO_ENERGIZE_REQUEST
		<< std::flush;
      // copy the request info into ATE Reply and set accept true
      this->ateReplyMC_Wtr->getTopicSample()->relatedRequestId.requestingDeviceId =
	data->requestId.requestingDeviceId;
      this->ateReplyMC_Wtr->getTopicSample()->relatedSequenceId =
	data->sequenceId;
      this->ateReplyMC_Wtr->getTopicSample()->energizeRequestingDeviceId =
	data->energizeRequestingDeviceId;
      this->ateReplyMC_Wtr->getTopicSample()->energizeSequenceId =
	data->energizeSequenceId;
      this->ateReplyMC_Wtr->getTopicSample()->accept = true;
      this->ateReplyMC_Wtr->getTopicSample()->deny = false;
      this->ateReplyMC_Wtr->getTopicSample()->userId = appStateObj->myID();
      this->ateReplyMC_Wtr->getTopicSample()->timeOfReview.epoch = 2;
      this->ateReplyMC_Wtr->getTopicSample()->timeOfReview.seconds = 35;
      this->ateReplyMC_Wtr->getTopicSample()->timeOfReview.nanoseconds = 55;
      this->appStateObj->setAuthorizedForEnergizing(true);
      this->ateReplyMC_Wtr->write();
    };
     
    private:
    ApplicationStateObj * appStateObj;
    ATEReplyMC_Wtr * ateReplyMC_Wtr;
    
  };

  
  // Generator Device AuthorizationToEnergizeRequest Writer  
  class ATEReqGD_Wtr : public TopicWtr<tms::AuthorizationToEnergizeRequest,
				       tms::AuthorizationToEnergizeRequestTypeSupport,
				       tms::AuthorizationToEnergizeRequestDataWriter> {
    public:
      ATEReqGD_Wtr(const DDSDomainParticipant * participant, 
                   const DDSPublisher * publisher,
		   ApplicationStateObj * appStateObj,
                   const bool periodic = false, 
                   const int period = 0 ) :
            TopicWtr(
		     participant, 
		     publisher,
		     periodic,
		     period,
		     tms::QOS_LIBRARY,
		     "Command",                         // QoS Profile name from XML 
		     tms::topic::TOPIC_AUTHORIZATION_TO_ENERGIZE_REQUEST, // str name of topic
		     generator_device::ATE_REQUEST_WRITER // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
        this->getTopicSample()->requestId.requestingDeviceId = appStateObj->myID();
        this->getTopicSample()->energizeRequestingDeviceId = appStateObj->myID(); 

      };

    void write(void) {
      std::cout << "\nWriting " << this->topicName << std::endl;

      if (not this->appStateObj->outstandingRequest()) {
	this->getTopicSample()->sequenceId =  this->appStateObj->rSequenceNumber();
	this->getTopicSample()->energizeSequenceId = this->getTopicSample()->sequenceId;
	this->topicWriter->write(*this->topicSample, DDS_HANDLE_NIL);
      }
      else
	std::cout << "\n** Application Error - Attempting to send a request while one is outstanding" << std::endl;
    }
 
    private:
    ApplicationStateObj * appStateObj;

    };


  // Generator Device Reply Writer  
  class ReplyGD_Wtr : public TopicWtr<tms::Reply,
				      tms::ReplyTypeSupport,
				      tms::ReplyDataWriter> {
    public:
      ReplyGD_Wtr(const DDSDomainParticipant * participant, 
                  const DDSPublisher * publisher,
		  ApplicationStateObj * appStateObj,
                  const bool periodic = false, 
                  const int period = 0 ) :
	TopicWtr(
		 participant, 
		 publisher,
		 periodic,
		 period,
		 tms::QOS_LIBRARY,
		 "Reply",                       // QoS Profile name from XML 
		 tms::topic::TOPIC_REPLY,       // str name of topic
		 generator_device::REPLY_WRITER // str name of writer
		 ) {
	
	this->appStateObj=appStateObj;
	// targetDeviceId - identity of the device snding this reply
	// the fields of the reply are filled out from the ESSReq topic below.
	this->getTopicSample()->targetDeviceId = this->appStateObj->myID();

      };
    
    private:
    ApplicationStateObj * appStateObj;

    };

  
  // Master Controller Reply Reader  
  class ReplyMC_Rdr : public TopicRdr<tms::Reply,
				      tms::ReplyTypeSupport,
				      tms::ReplyDataReader,
				      tms::ReplySeq> {
    public:
      ReplyMC_Rdr(DDSDomainParticipant * participant, 
                  const DDSSubscriber * subscriber,
		  const Cft filter,
		  ApplicationStateObj * appStateObj
                  ) :
	TopicRdr(
		 participant, 
		 subscriber,
		 filter,
		 tms::QOS_LIBRARY,
		 "Reply",                         // QoS Profile name from XML 
		 tms::topic::TOPIC_REPLY,         // str name of topic
		 master_controller::REPLY_READER  // str name of writer
		 ) {
	
	this->appStateObj=appStateObj;
	
      };

    void handler(const tms::Reply * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_REPLY
		<< std::flush;
 
    };
     
    private:
    ApplicationStateObj * appStateObj;
    
  };


  // Generator Device EnergyStartStopRequest Reader  
  class ESSReqGD_Rdr : public TopicRdr<tms::EnergyStartStopRequest,
				       tms::EnergyStartStopRequestTypeSupport,
				       tms::EnergyStartStopRequestDataReader,
				       tms::EnergyStartStopRequestSeq> {
    public:
      ESSReqGD_Rdr(DDSDomainParticipant * participant, 
                   const DDSSubscriber * subscriber,
		   const Cft filter,   // Not Used - pass in an empty filter
		   ApplicationStateObj * appStateObj,
		   ReplyGD_Wtr * replyGD_Wtr
                   ) :
	TopicRdr(
		 participant, 
		 subscriber,
		 filter,
		 tms::QOS_LIBRARY,
		 "Command",                          // QoS Profile name from XML 
		 tms::topic::TOPIC_ENERGY_START_STOP_REQUEST, // str name of topic
		 generator_device::ESS_REQUEST_READER // str name of writer
		 ) {
	
	this->appStateObj = appStateObj;
	this->replyGD_Wtr = replyGD_Wtr;
  
      };

    void handler(const tms::EnergyStartStopRequest * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_ENERGY_START_STOP_REQUEST
		<< std::flush;
      appStateObj->setDeviceStartStopFutureLevel(data->toLevel);
      replyGD_Wtr->getTopicSample()->requestingDeviceId = data->requestId.requestingDeviceId;
      // replyGD_Wtr->getTopicSample()->targetDeviceId <-- filled out in c'tor of ReplyGE_Wtr
      // replyGD_Wtr->getTopicSample()->config <-- default CONFIG__UNKNOWN is ok for PoC
      replyGD_Wtr->getTopicSample()->requestSequenceId = data->sequenceId;
      replyGD_Wtr->getTopicSample()->status.code = tms::REPLY_OK;
      replyGD_Wtr->getTopicSample()->status.reason = (DDS_Char *) "MC Requested it";
      replyGD_Wtr->write();
    };
     
    private:
    ApplicationStateObj * appStateObj; // we don't appear to use this object
    ReplyGD_Wtr * replyGD_Wtr;

  };

  // Master Contoller EnergyStartStopRequest  Writer  
  class ESSReqMC_Wtr : public TopicWtr<tms::EnergyStartStopRequest,
				       tms::EnergyStartStopRequestTypeSupport,
				       tms::EnergyStartStopRequestDataWriter> {
    public:
      ESSReqMC_Wtr(const DDSDomainParticipant * participant, 
                   const DDSPublisher * publisher,
		   ApplicationStateObj * appStateObj,
                   const bool periodic = false, 
                   const int period = 0 ) :
	TopicWtr(
		 participant, 
		 publisher,
		 periodic,
		 period,
		 tms::QOS_LIBRARY,
		 "Command",                         // QoS Profile name from XML 
		 tms::topic::TOPIC_ENERGY_START_STOP_REQUEST,  // str name of topic
		 master_controller::ESS_REQUEST_WRITER // str name of writer
		 ) {
	
	this->appStateObj=appStateObj;
	this->getTopicSample()->requestId.requestingDeviceId = appStateObj->myID();

      };

    void write(DDS_Char * targetDevId, tms::EnergyStartStopLevel newLevel) {
      std::cout << "\nWriting " << this->topicName << std::endl;
      this->getTopicSample()->requestId.targetDeviceId = targetDevId;
      this->getTopicSample()->sequenceId = this->appStateObj->rSequenceNumber();
      this->getTopicSample()->fromLevel = this->appStateObj->deviceStartStopPresentLevel();
      this->getTopicSample()->toLevel = newLevel;
      this->topicWriter->write(*this->topicSample, DDS_HANDLE_NIL);
      
    }
     
    private:
    ApplicationStateObj * appStateObj;

  };
  


  // Generator Device EnergyStartStopState Writer  
  class ESSStateGD_Wtr : public TopicWtr<tms::EnergyStartStopState,
					 tms::EnergyStartStopStateTypeSupport,
					 tms::EnergyStartStopStateDataWriter> {
    public:
      ESSStateGD_Wtr(const DDSDomainParticipant * participant, 
                     const DDSPublisher * publisher,
		     ApplicationStateObj * appStateObj,
                     const bool periodic = false, 
                     const int period = 0 ) :
	TopicWtr(
		 participant, 
		 publisher,
		 periodic,
		 period,
		 tms::QOS_LIBRARY,
		 "PublishLast",                      // QoS Profile name from XML 
		 tms::topic::TOPIC_ENERGY_START_STOP_STATE, // str name of topic
		 generator_device::ESS_STATE_WRITER  // str name of writer
		 ) {
	this->appStateObj=appStateObj;
	this->reset();
        };
	

	void reset(void) {

	this->appStateObj->setDeviceStartStopPresentLevel(tms::ESSL_OFF);
	this->appStateObj->setDeviceStartStopFutureLevel(tms::ESSL_OFF);

	// load up static sample fields
	this->getTopicSample()->deviceId = this->appStateObj->myID();
	this->getTopicSample()->presentLevel = tms::ESSL_OFF;
	this->getTopicSample()->futureLevel = tms::ESSL_OFF;
	this->getTopicSample()->requestLock = false;
	this->getTopicSample()->presentLevelReason = tms::PSR_STARTUP;
	this->getTopicSample()->presentLevelActor = this->appStateObj->myID();
	this->getTopicSample()->futureLevelReason = tms::PSTC_COMPLETE;	

      };
    
    private:
    ApplicationStateObj * appStateObj;

    };

  // Master Controller EnergyStartStopState Reader  
  class ESSStateMC_Rdr : public TopicRdr<tms::EnergyStartStopState,
				         tms::EnergyStartStopStateTypeSupport,
				         tms::EnergyStartStopStateDataReader,
				         tms::EnergyStartStopStateSeq> {
    public:
      ESSStateMC_Rdr(DDSDomainParticipant * participant, 
                     const DDSSubscriber * subscriber,
		     const Cft filter,
		     ApplicationStateObj * appStateObj
                     ) :
            TopicRdr(
		     participant, 
		     subscriber,
		     filter,
		     tms::QOS_LIBRARY,
		     "PublishLast",                       // QoS Profile name from XML 
		     tms::topic::TOPIC_ENERGY_START_STOP_STATE, // str name of topic
		     master_controller::ESS_STATE_READER  // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
	
      };

    void handler(const tms::EnergyStartStopState * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_ENERGY_START_STOP_STATE
		<< std::flush;
      // save relevant information in our appStateObj for later use
      appStateObj->setDeviceId(data->deviceId);
      appStateObj->setDeviceStartStopPresentLevel(data->presentLevel);
      appStateObj->setDeviceStartStopFutureLevel(data->futureLevel);
      std::cout << "\nDevice" << data->deviceId
		<< " Energy State: "
		<< this->appStateObj->energyLevelEnumText(data->presentLevel)
		<< "\n"
		<< std::endl;
 
    };
     
    private:
    ApplicationStateObj * appStateObj;
    
  };

  
} // namespace topics


#endif // TOPICS_H
