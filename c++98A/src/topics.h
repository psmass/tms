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

    public:
    ApplicationStateObj(enum tms::DeviceRole role);
    
      ~ApplicationStateObj() {};

    DDS_UnsignedLong sequenceNumber(void) {
      return this->sequence_number++;
    }

    DDS_UnsignedLong rrSequenceNumber() {
      if (!this->outstanding_request) {
	this->r_sequence_number=this->sequenceNumber();
	this->outstanding_request=true;
      }
      return this->r_sequence_number;
    }

    DDS_Char * myID(void) {
      if (role == tms::ROLE_MICROGRID_CONTROLLER)
	return masterControllerId;
      else
	return deviceId;
    }

    DDS_Char * controllerID(void) {
      return masterControllerId;
    }

    void setThisMCSelected(bool b){
      this->thisMCSelected = b;
    }

    bool outstandingRequest(void) {
      return this->outstanding_request;
    }

    enum tms::DeviceRole myRole() {return this->role;}

    private:
    enum ControllerState controllerState;
    enum DeviceState genDeviceState;
    enum tms::DeviceRole role;
    enum tms::EnergyStartStopLevel  deviceStartStopPresentLevel;
    enum tms::EnergyStartStopLevel  deviceStartStopFutureLevel;

    DDS_Char * deviceId;
    DDS_Char * masterControllerId;
    bool  thisMCSelected;  // designates that the device has selected this MC
    bool  authorizedForEnergizing;
    bool  deviceIdSet;
    bool  mcIdSet;
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

    void handler(const tms::DeviceInfo * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_DEVICE_INFO
		<< std::flush;
      this->appStateObj->setThisMCSelected(true);
    };
     
    private:
    ApplicationStateObj * appStateObj;
    
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
	

      };

    void write(void) {
      std::cout << "\nWriting " << this->topicName << std::endl;

      if (not this->appStateObj->outstandingRequest())
	{}
      else
	std::cout << "\n** Application Error - Attempting to send a request while one is outstanding" << std::endl;
    }
 
    
    private:
    ApplicationStateObj * appStateObj;

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
		   ApplicationStateObj * appStateObj
                   ) :
            TopicRdr(
		     participant, 
		     subscriber,
		     filter,
		     tms::QOS_LIBRARY,
		     "Command",                           // QoS Profile name from XML 
		     tms::topic::TOPIC_AUTHORIZATION_TO_ENERGIZE_REQUEST, // str name of topic
		     master_controller::ATE_REQUEST_READER  // str name of writer
		     ) {
	
	this->appStateObj=appStateObj;
	
      };

    void handler(const tms::AuthorizationToEnergizeRequest * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_AUTHORIZATION_TO_ENERGIZE_REQUEST
		<< std::flush;
 
    };
     
    private:
    ApplicationStateObj * appStateObj;
    
  };

  // Generator Device AuthorizationToEnergizeReply Reader  
  class ATERepGD_Rdr : public TopicRdr<tms::AuthorizationToEnergizeReply,
				       tms::AuthorizationToEnergizeReplyTypeSupport,
				       tms::AuthorizationToEnergizeReplyDataReader,
				       tms::AuthorizationToEnergizeReplySeq> {
    public:
      ATERepGD_Rdr(DDSDomainParticipant * participant, 
                   const DDSSubscriber * subscriber,
		   const Cft filter,   // Not Used - pass in an empty filter
		   ApplicationStateObj * appStateObj
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
  
      };

    void handler(const tms::AuthorizationToEnergizeReply * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_AUTHORIZATION_TO_ENERGIZE_REPLY
		<< std::flush; 
    };
     
    private:
    ApplicationStateObj * appStateObj; // we don't appear to use this object

  };

  // Master Contoller AuthorizationToEnergizeReply  Writer  
  class ATERepMC_Wtr : public TopicWtr<tms::AuthorizationToEnergizeReply,
					   tms::AuthorizationToEnergizeReplyTypeSupport,
					   tms::AuthorizationToEnergizeReplyDataWriter> {
    public:
      ATERepMC_Wtr(const DDSDomainParticipant * participant, 
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

    void handler(const tms::AuthorizationToEnergizeRequest * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_AUTHORIZATION_TO_ENERGIZE_RESULT
		<< std::flush;
 
    };
     
    private:
    ApplicationStateObj * appStateObj;
    
  };

  // Generator Device EnergyStartStopRequest Reader  
  class EESReqGD_Rdr : public TopicRdr<tms::EnergyStartStopRequest,
				       tms::EnergyStartStopRequestTypeSupport,
				       tms::EnergyStartStopRequestDataReader,
				       tms::EnergyStartStopRequestSeq> {
    public:
      EESReqGD_Rdr(DDSDomainParticipant * participant, 
                   const DDSSubscriber * subscriber,
		   const Cft filter,   // Not Used - pass in an empty filter
		   ApplicationStateObj * appStateObj
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
	
	this->appStateObj=appStateObj;
  
      };

    void handler(const tms::EnergyStartStopRequest * data) {
      std::cout << "\nReceived sample for topic: "
		<< tms::topic::TOPIC_ENERGY_START_STOP_REQUEST
		<< std::flush; 
    };
     
    private:
    ApplicationStateObj * appStateObj; // we don't appear to use this object

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

      };
     
    private:
    ApplicationStateObj * appStateObj;

  };
  
  
} // namespace topics


#endif // TOPICS_H
