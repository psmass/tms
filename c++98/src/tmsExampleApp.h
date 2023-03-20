

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from tmsExampleApp.idl
using RTI Code Generator (rtiddsgen) version 4.0.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef tmsExampleApp_1875817790_h
#define tmsExampleApp_1875817790_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

namespace generator_device {
    static const DDS_Char * const DEVICE1= "TMSParticipantLib::GeneratorDevice1";
    static const DDS_Char * const DEVICE_INFO_WRITER= "GD_Publisher::DeviceInfoWriter";
    static const DDS_Char * const HEARTBEAT_WRITER= "GD_Publisher::HeartbeatWriter";
    static const DDS_Char * const AMC_STATE_WRITER= "GD_Publisher::ActiveMicrogridControllerStateWriter";
    static const DDS_Char * const ATE_REQUEST_WRITER= "GD_Publisher::AuthorizationToEnergizeRequestWriter";
    static const DDS_Char * const ATE_RESULT_WRITER= "GD_Publisher::AuthorizationToEnergizeResultWriter";
    static const DDS_Char * const ESS_STATE_WRITER= "GD_Publisher::EnergyStartStopStateWriter";
    static const DDS_Char * const REPLY_WRITER= "GD_Publisher::ReplyWriter";
    static const DDS_Char * const DEVICE_INFO_READER= "GD_Subscriber::DeviceInfoReader";
    static const DDS_Char * const HEARTBEAT_READER= "GD_Subscriber::HeartbeatReader";
    static const DDS_Char * const ATE_REPLY_READER= "GD_Subscriber::AuthorizationToEnergizeReplyReader";
    static const DDS_Char * const ATE_REPLY_CFT= "AuthorizationToEnergizeReply::MyFilter";
    static const DDS_Char * const ESS_REQUEST_READER= "GD_Subscriber::EnergyStartStopRequestReader";
    static const DDS_Char * const ESS_REQUEST_CFT= "EnergyStartStopRequest::MyFilter";
} /* namespace generator_device  */
namespace master_controller {
    static const DDS_Char * const MASTER_CONTROLLER1= "TMSParticipantLib::MasterController1";
    static const DDS_Char * const DEVICE_INFO_WRITER= "MC_Publisher::DeviceInfoWriter";
    static const DDS_Char * const HEARTBEAT_WRITER= "MC_Publisher::HeartbeatWriter";
    static const DDS_Char * const ATE_REPLY_WRITER= "MC_Publisher::AuthorizationToEnergizeReplyWriter";
    static const DDS_Char * const ESS_REQUEST_WRITER= "MC_Publisher::EnergyStartStopRequestWriter";
    static const DDS_Char * const DEVICE_INFO_READER= "MC_Subscriber::DeviceInfoReader";
    static const DDS_Char * const HEARTBEAT_READER= "MC_Subscriber::HeartbeatReader";
    static const DDS_Char * const AMC_STATE_READER= "MC_Subscriber::ActiveMicrogridControllerStateReader";
    static const DDS_Char * const ATE_REQUEST_READER= "MC_Subscriber::AuthorizationToEnergizeRequestReader";
    static const DDS_Char * const ATE_RESULT_READER= "MC_Subscriber::AuthorizationToEnergizeResultReader";
    static const DDS_Char * const ESS_STATE_READER= "MC_Subscriber::EnergyStartStopStateReader";
    static const DDS_Char * const REPLY_READER= "MC_Subscriber::ReplyReader";
} /* namespace master_controller  */
namespace tms {
    static const DDS_Char * const QOS_LIBRARY= "TMSQoSLib";
    namespace topic {
        static const DDS_Char * const TOPIC_HEARTBEAT= "Heartbeat";
        static const DDS_Char * const TOPIC_DEVICE_INFO= "DeviceInfo";
        static const DDS_Char * const TOPIC_DEVICE_ICON= "DeviceIcon";
        static const DDS_Char * const TOPIC_IDENTITY_NICKNAME_STATE= "IdentityNicknameState";
        static const DDS_Char * const TOPIC_IDENTITY_NICKNAME_REQUEST= "IdentityNicknameRequest";
        static const DDS_Char * const TOPIC_OPERATOR_POWER_CONNECTION_STATE= "OperatorPowerConnectionState";
        static const DDS_Char * const TOPIC_DISCOVERED_POWER_CONNECTION_STATE= "DiscoveredPowerConnectionState";
        static const DDS_Char * const TOPIC_MICROGRID_POWER_CONNECTION_STATE= "MicrogridPowerConnectionState";
        static const DDS_Char * const TOPIC_ACTIVE_DIAGNOSTIC_STATE= "ActiveDiagnosticState";
        static const DDS_Char * const TOPIC_CLOCK_STATE= "ClockState";
        static const DDS_Char * const TOPIC_ACTIVE_MICROGRID_CONTROLLER_STATE= "ActiveMicrogridControllerState";
        static const DDS_Char * const TOPIC_AC_MEASUREMENT_UPDATE= "AcMeasurementUpdate";
        static const DDS_Char * const TOPIC_POWER_PORT_STATE= "PowerPortState";
        static const DDS_Char * const TOPIC_POWER_SWITCH_REQUEST= "PowerSwitchRequest";
        static const DDS_Char * const TOPIC_ENERGY_START_STOP_STATE= "EnergyStartStopState";
        static const DDS_Char * const TOPIC_ENERGY_START_STOP_REQUEST= "EnergyStartStopRequest";
        static const DDS_Char * const TOPIC_AC_LOAD_SHARING_STATE= "AcLoadSharingState";
        static const DDS_Char * const TOPIC_AC_LOAD_SHARING_REQUEST= "AcLoadSharingRequest";
        static const DDS_Char * const TOPIC_CONTROL_HARDWARE_UPDATE= "ControlHardwareUpdate";
        static const DDS_Char * const TOPIC_POWER_HARDWARE_UPDATE= "PowerHardwareUpdate";
        static const DDS_Char * const TOPIC_STORAGE_UPDATE= "StorageUpdate";
        static const DDS_Char * const TOPIC_REPLY= "Reply";
        static const DDS_Char * const TOPIC_CONTROL_PARAMETER_STATE= "ControlParameterState";
        static const DDS_Char * const TOPIC_CONTROL_PARAMETER_REQUEST= "ControlParameterRequest";
        static const DDS_Char * const TOPIC_METRIC_PARAMETER_STATE= "MetricParameterState";
        static const DDS_Char * const TOPIC_AUTHORIZATION_TO_ENERGIZE_REPLY= "AuthorizationToEnergizeReply";
        static const DDS_Char * const TOPIC_AUTHORIZATION_TO_ENERGIZE_REQUEST= "AuthorizationToEnergizeRequest";
        static const DDS_Char * const TOPIC_AUTHORIZATION_TO_ENERGIZE_RESULT= "AuthorizationToEnergizeResult";
        static const DDS_Char * const TOPIC_OPERATOR_INTENT_STATE= "OperatorIntentState";
        static const DDS_Char * const TOPIC_OPERATOR_INTENT_REQUEST= "OperatorIntentRequest";
        static const DDS_Char * const TOPIC_DEVICE_GROUNDING_STATE= "GroundingCircuitState";
        static const DDS_Char * const TOPIC_GROUNDING_CIRCUIT_REQUEST= "GroundingCircuitRequest";
        static const DDS_Char * const TOPIC_DC_MEASUREMENT_UPDATE= "DcMeasurementUpdate";
        static const DDS_Char * const TOPIC_DC_LOAD_SHARING_REQUEST= "DcLoadSharingRequest";
        static const DDS_Char * const TOPIC_AC_SUMMARY_MEASUREMENT_UPDATE= "AcSummaryMeasurementUpdate";
        static const DDS_Char * const TOPIC_DC_LOAD_SHARING_STATE= "DcLoadSharingState";
        static const DDS_Char * const TOPIC_DC_SUMMARY_MEASUREMENT_UPDATE= "DcSummaryMeasurementUpdate";
    } /* namespace topic  */
    static const DDS_Char * const TMS_VERSION= "1.0.1";
    static const DDS_UnsignedLong TopicName_MINLEN= 1UL;
    static const DDS_UnsignedLong TopicName_MAXLEN= 64UL;
    typedef    DDS_Char *   TopicName ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * TopicName_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TopicName_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TopicName_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TopicName_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TopicNameSeq, TopicName);

    NDDSUSERDllExport
    RTIBool TopicName_initialize(
        TopicName* self);

    NDDSUSERDllExport
    RTIBool TopicName_initialize_ex(
        TopicName* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TopicName_initialize_w_params(
        TopicName* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TopicName_finalize_w_return(
        TopicName* self);

    NDDSUSERDllExport
    void TopicName_finalize(
        TopicName* self);

    NDDSUSERDllExport
    void TopicName_finalize_ex(
        TopicName* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TopicName_finalize_w_params(
        TopicName* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TopicName_finalize_optional_members(
        TopicName* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TopicName_copy(
        TopicName* dst,
        const TopicName* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong TopicList_MINLEN= 0UL;
    static const DDS_UnsignedLong TopicList_MAXLEN= 64UL;
    typedef     tms::TopicNameSeq  TopicList ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * TopicList_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TopicList_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TopicList_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TopicList_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TopicListSeq, TopicList);

    NDDSUSERDllExport
    RTIBool TopicList_initialize(
        TopicList* self);

    NDDSUSERDllExport
    RTIBool TopicList_initialize_ex(
        TopicList* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TopicList_initialize_w_params(
        TopicList* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TopicList_finalize_w_return(
        TopicList* self);

    NDDSUSERDllExport
    void TopicList_finalize(
        TopicList* self);

    NDDSUSERDllExport
    void TopicList_finalize_ex(
        TopicList* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TopicList_finalize_w_params(
        TopicList* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TopicList_finalize_optional_members(
        TopicList* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TopicList_copy(
        TopicList* dst,
        const TopicList* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum CableSenseStatus
    {
        CS_UNKNOWN , 
        CS_DISCONNECTED , 
        CS_CONNECTED 
    } CableSenseStatus;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * CableSenseStatus_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *CableSenseStatus_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CableSenseStatus_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CableSenseStatus_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(CableSenseStatusSeq, CableSenseStatus);

    NDDSUSERDllExport
    RTIBool CableSenseStatus_initialize(
        CableSenseStatus* self);

    NDDSUSERDllExport
    RTIBool CableSenseStatus_initialize_ex(
        CableSenseStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool CableSenseStatus_initialize_w_params(
        CableSenseStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool CableSenseStatus_finalize_w_return(
        CableSenseStatus* self);

    NDDSUSERDllExport
    void CableSenseStatus_finalize(
        CableSenseStatus* self);

    NDDSUSERDllExport
    void CableSenseStatus_finalize_ex(
        CableSenseStatus* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void CableSenseStatus_finalize_w_params(
        CableSenseStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void CableSenseStatus_finalize_optional_members(
        CableSenseStatus* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool CableSenseStatus_copy(
        CableSenseStatus* dst,
        const CableSenseStatus* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum CircuitContinuity
    {
        CC_UNKNOWN , 
        CC_OPEN , 
        CC_CLOSED , 
        CC_INCONSISTENT 
    } CircuitContinuity;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * CircuitContinuity_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *CircuitContinuity_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CircuitContinuity_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CircuitContinuity_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(CircuitContinuitySeq, CircuitContinuity);

    NDDSUSERDllExport
    RTIBool CircuitContinuity_initialize(
        CircuitContinuity* self);

    NDDSUSERDllExport
    RTIBool CircuitContinuity_initialize_ex(
        CircuitContinuity* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool CircuitContinuity_initialize_w_params(
        CircuitContinuity* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool CircuitContinuity_finalize_w_return(
        CircuitContinuity* self);

    NDDSUSERDllExport
    void CircuitContinuity_finalize(
        CircuitContinuity* self);

    NDDSUSERDllExport
    void CircuitContinuity_finalize_ex(
        CircuitContinuity* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void CircuitContinuity_finalize_w_params(
        CircuitContinuity* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void CircuitContinuity_finalize_optional_members(
        CircuitContinuity* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool CircuitContinuity_copy(
        CircuitContinuity* dst,
        const CircuitContinuity* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum ClockMonotonicPersistenceType
    {
        CMPT_UNKNOWN , 
        CMPT_RESET , 
        CMPT_ACCUMULATE , 
        CMPT_OTHER 
    } ClockMonotonicPersistenceType;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ClockMonotonicPersistenceType_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ClockMonotonicPersistenceType_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ClockMonotonicPersistenceType_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ClockMonotonicPersistenceType_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ClockMonotonicPersistenceTypeSeq, ClockMonotonicPersistenceType);

    NDDSUSERDllExport
    RTIBool ClockMonotonicPersistenceType_initialize(
        ClockMonotonicPersistenceType* self);

    NDDSUSERDllExport
    RTIBool ClockMonotonicPersistenceType_initialize_ex(
        ClockMonotonicPersistenceType* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ClockMonotonicPersistenceType_initialize_w_params(
        ClockMonotonicPersistenceType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ClockMonotonicPersistenceType_finalize_w_return(
        ClockMonotonicPersistenceType* self);

    NDDSUSERDllExport
    void ClockMonotonicPersistenceType_finalize(
        ClockMonotonicPersistenceType* self);

    NDDSUSERDllExport
    void ClockMonotonicPersistenceType_finalize_ex(
        ClockMonotonicPersistenceType* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ClockMonotonicPersistenceType_finalize_w_params(
        ClockMonotonicPersistenceType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ClockMonotonicPersistenceType_finalize_optional_members(
        ClockMonotonicPersistenceType* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ClockMonotonicPersistenceType_copy(
        ClockMonotonicPersistenceType* dst,
        const ClockMonotonicPersistenceType* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum DesiredCircuitContinuity
    {
        DCC_UNKNOWN , 
        DCC_OPEN , 
        DCC_CLOSED , 
        DCC_SYNC_CLOSED , 
        DCC_CLOSED_INTERNAL , 
        DCC_NO_CHANGE 
    } DesiredCircuitContinuity;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DesiredCircuitContinuity_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DesiredCircuitContinuity_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DesiredCircuitContinuity_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DesiredCircuitContinuity_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DesiredCircuitContinuitySeq, DesiredCircuitContinuity);

    NDDSUSERDllExport
    RTIBool DesiredCircuitContinuity_initialize(
        DesiredCircuitContinuity* self);

    NDDSUSERDllExport
    RTIBool DesiredCircuitContinuity_initialize_ex(
        DesiredCircuitContinuity* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DesiredCircuitContinuity_initialize_w_params(
        DesiredCircuitContinuity* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DesiredCircuitContinuity_finalize_w_return(
        DesiredCircuitContinuity* self);

    NDDSUSERDllExport
    void DesiredCircuitContinuity_finalize(
        DesiredCircuitContinuity* self);

    NDDSUSERDllExport
    void DesiredCircuitContinuity_finalize_ex(
        DesiredCircuitContinuity* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DesiredCircuitContinuity_finalize_w_params(
        DesiredCircuitContinuity* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DesiredCircuitContinuity_finalize_optional_members(
        DesiredCircuitContinuity* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DesiredCircuitContinuity_copy(
        DesiredCircuitContinuity* dst,
        const DesiredCircuitContinuity* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum DeviceRole
    {
        ROLE_UNKNOWN , 
        ROLE_MICROGRID_CONTROLLER , 
        ROLE_SOURCE , 
        ROLE_LOAD , 
        ROLE_STORAGE , 
        ROLE_DISTRIBUTION , 
        ROLE_MICROGRID_DASHBOARD , 
        ROLE_CONVERSION , 
        ROLE_MONITOR 
    } DeviceRole;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DeviceRole_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DeviceRole_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceRole_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceRole_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DeviceRoleSeq, DeviceRole);

    NDDSUSERDllExport
    RTIBool DeviceRole_initialize(
        DeviceRole* self);

    NDDSUSERDllExport
    RTIBool DeviceRole_initialize_ex(
        DeviceRole* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DeviceRole_initialize_w_params(
        DeviceRole* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DeviceRole_finalize_w_return(
        DeviceRole* self);

    NDDSUSERDllExport
    void DeviceRole_finalize(
        DeviceRole* self);

    NDDSUSERDllExport
    void DeviceRole_finalize_ex(
        DeviceRole* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DeviceRole_finalize_w_params(
        DeviceRole* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DeviceRole_finalize_optional_members(
        DeviceRole* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DeviceRole_copy(
        DeviceRole* dst,
        const DeviceRole* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum DtcSeverity
    {
        SEV_UNKNOWN , 
        SEV_1_CLEAR , 
        SEV_2_INFORMATIVE , 
        SEV_3_PREVENTATIVE , 
        SEV_4_DEGRADED , 
        SEV_5_WARNING , 
        SEV_6_MINOR , 
        SEV_7_MAJOR , 
        SEV_8_CRITICAL , 
        SEV_9_FATAL , 
        SEV_10_HUMAN_SAFETY 
    } DtcSeverity;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DtcSeverity_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DtcSeverity_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DtcSeverity_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DtcSeverity_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DtcSeveritySeq, DtcSeverity);

    NDDSUSERDllExport
    RTIBool DtcSeverity_initialize(
        DtcSeverity* self);

    NDDSUSERDllExport
    RTIBool DtcSeverity_initialize_ex(
        DtcSeverity* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DtcSeverity_initialize_w_params(
        DtcSeverity* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DtcSeverity_finalize_w_return(
        DtcSeverity* self);

    NDDSUSERDllExport
    void DtcSeverity_finalize(
        DtcSeverity* self);

    NDDSUSERDllExport
    void DtcSeverity_finalize_ex(
        DtcSeverity* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DtcSeverity_finalize_w_params(
        DtcSeverity* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DtcSeverity_finalize_optional_members(
        DtcSeverity* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DtcSeverity_copy(
        DtcSeverity* dst,
        const DtcSeverity* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum EnergyStartStopLevel
    {
        ESSL_UNKNOWN , 
        ESSL_ANY , 
        ESSL_OFF , 
        ESSL_WARM , 
        ESSL_IDLE , 
        ESSL_READY , 
        ESSL_READY_SYNCED , 
        ESSL_OPERATIONAL 
    } EnergyStartStopLevel;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * EnergyStartStopLevel_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EnergyStartStopLevel_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnergyStartStopLevel_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnergyStartStopLevel_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EnergyStartStopLevelSeq, EnergyStartStopLevel);

    NDDSUSERDllExport
    RTIBool EnergyStartStopLevel_initialize(
        EnergyStartStopLevel* self);

    NDDSUSERDllExport
    RTIBool EnergyStartStopLevel_initialize_ex(
        EnergyStartStopLevel* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EnergyStartStopLevel_initialize_w_params(
        EnergyStartStopLevel* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EnergyStartStopLevel_finalize_w_return(
        EnergyStartStopLevel* self);

    NDDSUSERDllExport
    void EnergyStartStopLevel_finalize(
        EnergyStartStopLevel* self);

    NDDSUSERDllExport
    void EnergyStartStopLevel_finalize_ex(
        EnergyStartStopLevel* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EnergyStartStopLevel_finalize_w_params(
        EnergyStartStopLevel* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EnergyStartStopLevel_finalize_optional_members(
        EnergyStartStopLevel* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EnergyStartStopLevel_copy(
        EnergyStartStopLevel* dst,
        const EnergyStartStopLevel* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong EnergyStartStopLevelSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong EnergyStartStopLevelSequence_MAXLEN= 8UL;
    typedef     tms::EnergyStartStopLevelSeq  EnergyStartStopLevelSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * EnergyStartStopLevelSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EnergyStartStopLevelSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnergyStartStopLevelSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnergyStartStopLevelSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EnergyStartStopLevelSequenceSeq, EnergyStartStopLevelSequence);

    NDDSUSERDllExport
    RTIBool EnergyStartStopLevelSequence_initialize(
        EnergyStartStopLevelSequence* self);

    NDDSUSERDllExport
    RTIBool EnergyStartStopLevelSequence_initialize_ex(
        EnergyStartStopLevelSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EnergyStartStopLevelSequence_initialize_w_params(
        EnergyStartStopLevelSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EnergyStartStopLevelSequence_finalize_w_return(
        EnergyStartStopLevelSequence* self);

    NDDSUSERDllExport
    void EnergyStartStopLevelSequence_finalize(
        EnergyStartStopLevelSequence* self);

    NDDSUSERDllExport
    void EnergyStartStopLevelSequence_finalize_ex(
        EnergyStartStopLevelSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EnergyStartStopLevelSequence_finalize_w_params(
        EnergyStartStopLevelSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EnergyStartStopLevelSequence_finalize_optional_members(
        EnergyStartStopLevelSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EnergyStartStopLevelSequence_copy(
        EnergyStartStopLevelSequence* dst,
        const EnergyStartStopLevelSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum GroundFaultDetection
    {
        GFD_UNKNOWN , 
        GFD_NOT_APPLICABLE , 
        GFD_NONE , 
        GFD_ANY , 
        GFD_A , 
        GFD_B , 
        GFD_C , 
        GFD_DCPOS , 
        GFD_DCNEG 
    } GroundFaultDetection;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GroundFaultDetection_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GroundFaultDetection_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundFaultDetection_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundFaultDetection_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(GroundFaultDetectionSeq, GroundFaultDetection);

    NDDSUSERDllExport
    RTIBool GroundFaultDetection_initialize(
        GroundFaultDetection* self);

    NDDSUSERDllExport
    RTIBool GroundFaultDetection_initialize_ex(
        GroundFaultDetection* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GroundFaultDetection_initialize_w_params(
        GroundFaultDetection* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GroundFaultDetection_finalize_w_return(
        GroundFaultDetection* self);

    NDDSUSERDllExport
    void GroundFaultDetection_finalize(
        GroundFaultDetection* self);

    NDDSUSERDllExport
    void GroundFaultDetection_finalize_ex(
        GroundFaultDetection* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GroundFaultDetection_finalize_w_params(
        GroundFaultDetection* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GroundFaultDetection_finalize_optional_members(
        GroundFaultDetection* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GroundFaultDetection_copy(
        GroundFaultDetection* dst,
        const GroundFaultDetection* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum GroundingDesignType
    {
        GROUNDING_UNKNOWN , 
        GROUNDING_UNGROUNDED , 
        GROUNDING_SOLID , 
        GROUNDING_HIGH_RESISTANCE , 
        GROUNDING_LOW_RESISTANCE , 
        GROUNDING_REACTANCE 
    } GroundingDesignType;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GroundingDesignType_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GroundingDesignType_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingDesignType_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingDesignType_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(GroundingDesignTypeSeq, GroundingDesignType);

    NDDSUSERDllExport
    RTIBool GroundingDesignType_initialize(
        GroundingDesignType* self);

    NDDSUSERDllExport
    RTIBool GroundingDesignType_initialize_ex(
        GroundingDesignType* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GroundingDesignType_initialize_w_params(
        GroundingDesignType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GroundingDesignType_finalize_w_return(
        GroundingDesignType* self);

    NDDSUSERDllExport
    void GroundingDesignType_finalize(
        GroundingDesignType* self);

    NDDSUSERDllExport
    void GroundingDesignType_finalize_ex(
        GroundingDesignType* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GroundingDesignType_finalize_w_params(
        GroundingDesignType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GroundingDesignType_finalize_optional_members(
        GroundingDesignType* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GroundingDesignType_copy(
        GroundingDesignType* dst,
        const GroundingDesignType* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum OperatingMode
    {
        OPM_UNKNOWN , 
        OPM_NORMAL , 
        OPM_EMERGENCY , 
        OPM_SILENT_WATCH 
    } OperatingMode;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * OperatingMode_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *OperatingMode_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatingMode_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatingMode_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(OperatingModeSeq, OperatingMode);

    NDDSUSERDllExport
    RTIBool OperatingMode_initialize(
        OperatingMode* self);

    NDDSUSERDllExport
    RTIBool OperatingMode_initialize_ex(
        OperatingMode* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool OperatingMode_initialize_w_params(
        OperatingMode* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool OperatingMode_finalize_w_return(
        OperatingMode* self);

    NDDSUSERDllExport
    void OperatingMode_finalize(
        OperatingMode* self);

    NDDSUSERDllExport
    void OperatingMode_finalize_ex(
        OperatingMode* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void OperatingMode_finalize_w_params(
        OperatingMode* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void OperatingMode_finalize_optional_members(
        OperatingMode* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool OperatingMode_copy(
        OperatingMode* dst,
        const OperatingMode* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum OperatorPriorityType
    {
        OPT_UNKNOWN , 
        OPT_NEVER_OPERATE , 
        OPT_ALWAYS_OPERATE , 
        OPT_NUMERIC_RANK 
    } OperatorPriorityType;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * OperatorPriorityType_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *OperatorPriorityType_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatorPriorityType_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatorPriorityType_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(OperatorPriorityTypeSeq, OperatorPriorityType);

    NDDSUSERDllExport
    RTIBool OperatorPriorityType_initialize(
        OperatorPriorityType* self);

    NDDSUSERDllExport
    RTIBool OperatorPriorityType_initialize_ex(
        OperatorPriorityType* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool OperatorPriorityType_initialize_w_params(
        OperatorPriorityType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool OperatorPriorityType_finalize_w_return(
        OperatorPriorityType* self);

    NDDSUSERDllExport
    void OperatorPriorityType_finalize(
        OperatorPriorityType* self);

    NDDSUSERDllExport
    void OperatorPriorityType_finalize_ex(
        OperatorPriorityType* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void OperatorPriorityType_finalize_w_params(
        OperatorPriorityType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void OperatorPriorityType_finalize_optional_members(
        OperatorPriorityType* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool OperatorPriorityType_copy(
        OperatorPriorityType* dst,
        const OperatorPriorityType* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum OperatorIntentType
    {
        OIT_UNKNOWN , 
        OIT_DEFAULT_INTENT , 
        OIT_OPERATOR_DEFINED 
    } OperatorIntentType;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * OperatorIntentType_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *OperatorIntentType_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatorIntentType_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatorIntentType_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(OperatorIntentTypeSeq, OperatorIntentType);

    NDDSUSERDllExport
    RTIBool OperatorIntentType_initialize(
        OperatorIntentType* self);

    NDDSUSERDllExport
    RTIBool OperatorIntentType_initialize_ex(
        OperatorIntentType* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool OperatorIntentType_initialize_w_params(
        OperatorIntentType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool OperatorIntentType_finalize_w_return(
        OperatorIntentType* self);

    NDDSUSERDllExport
    void OperatorIntentType_finalize(
        OperatorIntentType* self);

    NDDSUSERDllExport
    void OperatorIntentType_finalize_ex(
        OperatorIntentType* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void OperatorIntentType_finalize_w_params(
        OperatorIntentType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void OperatorIntentType_finalize_optional_members(
        OperatorIntentType* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool OperatorIntentType_copy(
        OperatorIntentType* dst,
        const OperatorIntentType* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum PowerConnectionDetectionType
    {
        PCDT_UNKNOWN , 
        PCDT_OPERATOR , 
        PCDT_CABLE_ID , 
        PCDT_PROBE , 
        PCDT_CORRELATION , 
        PCDT_COMMUNICATIONS , 
        PCDT_HISTORY 
    } PowerConnectionDetectionType;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerConnectionDetectionType_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerConnectionDetectionType_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectionDetectionType_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectionDetectionType_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerConnectionDetectionTypeSeq, PowerConnectionDetectionType);

    NDDSUSERDllExport
    RTIBool PowerConnectionDetectionType_initialize(
        PowerConnectionDetectionType* self);

    NDDSUSERDllExport
    RTIBool PowerConnectionDetectionType_initialize_ex(
        PowerConnectionDetectionType* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerConnectionDetectionType_initialize_w_params(
        PowerConnectionDetectionType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerConnectionDetectionType_finalize_w_return(
        PowerConnectionDetectionType* self);

    NDDSUSERDllExport
    void PowerConnectionDetectionType_finalize(
        PowerConnectionDetectionType* self);

    NDDSUSERDllExport
    void PowerConnectionDetectionType_finalize_ex(
        PowerConnectionDetectionType* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerConnectionDetectionType_finalize_w_params(
        PowerConnectionDetectionType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerConnectionDetectionType_finalize_optional_members(
        PowerConnectionDetectionType* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerConnectionDetectionType_copy(
        PowerConnectionDetectionType* dst,
        const PowerConnectionDetectionType* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum ReplyCode
    {
        REPLY_UNKNOWN , 
        REPLY_OK , 
        REPLY_BAD_REQUEST , 
        REPLY_METHOD_NOT_ALLOWED , 
        REPLY_CONFLICT , 
        REPLY_GONE , 
        REPLY_PRECONDITION_FAILED , 
        REPLY_INTERNAL_SERVER_ERROR , 
        REPLY_NOT_IMPLEMENTED , 
        REPLY_SERVICE_UNAVAILABLE , 
        REPLY_PENDING_AUTHORIZATION , 
        REPLY_NOT_MASTER 
    } ReplyCode;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ReplyCode_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ReplyCode_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ReplyCode_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ReplyCode_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ReplyCodeSeq, ReplyCode);

    NDDSUSERDllExport
    RTIBool ReplyCode_initialize(
        ReplyCode* self);

    NDDSUSERDllExport
    RTIBool ReplyCode_initialize_ex(
        ReplyCode* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ReplyCode_initialize_w_params(
        ReplyCode* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ReplyCode_finalize_w_return(
        ReplyCode* self);

    NDDSUSERDllExport
    void ReplyCode_finalize(
        ReplyCode* self);

    NDDSUSERDllExport
    void ReplyCode_finalize_ex(
        ReplyCode* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ReplyCode_finalize_w_params(
        ReplyCode* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ReplyCode_finalize_optional_members(
        ReplyCode* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ReplyCode_copy(
        ReplyCode* dst,
        const ReplyCode* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum CircuitWiring
    {
        WIRING_UNKNOWN , 
        WIRING_AC_SINGLE , 
        WIRING_AC_SPLIT , 
        WIRING_AC_3WYE , 
        WIRING_AC_3DELTA , 
        WIRING_DC , 
        WIRING_DC_3WIRE 
    } CircuitWiring;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * CircuitWiring_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *CircuitWiring_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CircuitWiring_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *CircuitWiring_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(CircuitWiringSeq, CircuitWiring);

    NDDSUSERDllExport
    RTIBool CircuitWiring_initialize(
        CircuitWiring* self);

    NDDSUSERDllExport
    RTIBool CircuitWiring_initialize_ex(
        CircuitWiring* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool CircuitWiring_initialize_w_params(
        CircuitWiring* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool CircuitWiring_finalize_w_return(
        CircuitWiring* self);

    NDDSUSERDllExport
    void CircuitWiring_finalize(
        CircuitWiring* self);

    NDDSUSERDllExport
    void CircuitWiring_finalize_ex(
        CircuitWiring* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void CircuitWiring_finalize_w_params(
        CircuitWiring* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void CircuitWiring_finalize_optional_members(
        CircuitWiring* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool CircuitWiring_copy(
        CircuitWiring* dst,
        const CircuitWiring* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum PowerConnectorPolarity
    {
        POLARITY_UNKNOWN , 
        POLARITY_PIN , 
        POLARITY_SOCKET , 
        POLARITY_UNIVERSAL 
    } PowerConnectorPolarity;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerConnectorPolarity_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerConnectorPolarity_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectorPolarity_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectorPolarity_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerConnectorPolaritySeq, PowerConnectorPolarity);

    NDDSUSERDllExport
    RTIBool PowerConnectorPolarity_initialize(
        PowerConnectorPolarity* self);

    NDDSUSERDllExport
    RTIBool PowerConnectorPolarity_initialize_ex(
        PowerConnectorPolarity* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerConnectorPolarity_initialize_w_params(
        PowerConnectorPolarity* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerConnectorPolarity_finalize_w_return(
        PowerConnectorPolarity* self);

    NDDSUSERDllExport
    void PowerConnectorPolarity_finalize(
        PowerConnectorPolarity* self);

    NDDSUSERDllExport
    void PowerConnectorPolarity_finalize_ex(
        PowerConnectorPolarity* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerConnectorPolarity_finalize_w_params(
        PowerConnectorPolarity* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerConnectorPolarity_finalize_optional_members(
        PowerConnectorPolarity* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerConnectorPolarity_copy(
        PowerConnectorPolarity* dst,
        const PowerConnectorPolarity* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum PowerConnectorType
    {
        CONNECTOR_UNKNOWN , 
        CONNECTOR_TERMINAL_BLOCK , 
        CONNECTOR_MILSTD , 
        CONNECTOR_NEMA5 , 
        CONNECTOR_CAMLOCK , 
        CONNECTOR_POWERLOCK , 
        CONNECTOR_IEC60309 , 
        CONNECTOR_J1772 , 
        CONNECTOR_POWERLOK , 
        CONNECTOR_MILSTD1651 , 
        CONNECTOR_MILDTL22992 , 
        CONNECTOR_MILDTL53126 , 
        CONNECTOR_OTHER , 
        CONNECTOR_METER , 
        CONNECTOR_BUS 
    } PowerConnectorType;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerConnectorType_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerConnectorType_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectorType_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectorType_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerConnectorTypeSeq, PowerConnectorType);

    NDDSUSERDllExport
    RTIBool PowerConnectorType_initialize(
        PowerConnectorType* self);

    NDDSUSERDllExport
    RTIBool PowerConnectorType_initialize_ex(
        PowerConnectorType* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerConnectorType_initialize_w_params(
        PowerConnectorType* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerConnectorType_finalize_w_return(
        PowerConnectorType* self);

    NDDSUSERDllExport
    void PowerConnectorType_finalize(
        PowerConnectorType* self);

    NDDSUSERDllExport
    void PowerConnectorType_finalize_ex(
        PowerConnectorType* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerConnectorType_finalize_w_params(
        PowerConnectorType* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerConnectorType_finalize_optional_members(
        PowerConnectorType* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerConnectorType_copy(
        PowerConnectorType* dst,
        const PowerConnectorType* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum PowerPortDirectionality
    {
        PPD_UNKNOWN , 
        PPD_NONE , 
        PPD_IN , 
        PPD_OUT , 
        PPD_IN_OUT 
    } PowerPortDirectionality;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortDirectionality_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortDirectionality_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortDirectionality_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortDirectionality_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortDirectionalitySeq, PowerPortDirectionality);

    NDDSUSERDllExport
    RTIBool PowerPortDirectionality_initialize(
        PowerPortDirectionality* self);

    NDDSUSERDllExport
    RTIBool PowerPortDirectionality_initialize_ex(
        PowerPortDirectionality* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortDirectionality_initialize_w_params(
        PowerPortDirectionality* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortDirectionality_finalize_w_return(
        PowerPortDirectionality* self);

    NDDSUSERDllExport
    void PowerPortDirectionality_finalize(
        PowerPortDirectionality* self);

    NDDSUSERDllExport
    void PowerPortDirectionality_finalize_ex(
        PowerPortDirectionality* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortDirectionality_finalize_w_params(
        PowerPortDirectionality* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortDirectionality_finalize_optional_members(
        PowerPortDirectionality* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortDirectionality_copy(
        PowerPortDirectionality* dst,
        const PowerPortDirectionality* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum PowerConnectorFeature
    {
        PCF_UNKNOWN , 
        PCF_CABLE_SENSE , 
        PCF_CABLE_ID_READER , 
        PCF_CABLE_MEASUREMENT , 
        PCF_COMMUNICATION , 
        PCF_TOPOLOGY_DISCOVERY 
    } PowerConnectorFeature;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerConnectorFeature_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerConnectorFeature_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectorFeature_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectorFeature_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerConnectorFeatureSeq, PowerConnectorFeature);

    NDDSUSERDllExport
    RTIBool PowerConnectorFeature_initialize(
        PowerConnectorFeature* self);

    NDDSUSERDllExport
    RTIBool PowerConnectorFeature_initialize_ex(
        PowerConnectorFeature* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerConnectorFeature_initialize_w_params(
        PowerConnectorFeature* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerConnectorFeature_finalize_w_return(
        PowerConnectorFeature* self);

    NDDSUSERDllExport
    void PowerConnectorFeature_finalize(
        PowerConnectorFeature* self);

    NDDSUSERDllExport
    void PowerConnectorFeature_finalize_ex(
        PowerConnectorFeature* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerConnectorFeature_finalize_w_params(
        PowerConnectorFeature* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerConnectorFeature_finalize_optional_members(
        PowerConnectorFeature* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerConnectorFeature_copy(
        PowerConnectorFeature* dst,
        const PowerConnectorFeature* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum PowerSwitchFeature
    {
        PSF_UNKNOWN , 
        PSF_MANUAL_OPEN , 
        PSF_MANUAL_CLOSE , 
        PSF_AUTO_OPEN , 
        PSF_AUTO_CLOSE , 
        PSF_REQUEST_OPEN , 
        PSF_REQUEST_CLOSE , 
        PSF_LOCK , 
        PSF_RECLOSER , 
        PSF_BREAKER , 
        PSF_GFI , 
        PSF_ARC_FLASH , 
        PSF_SYNCHRONIZER , 
        PSF_SURGE , 
        PSF_SWITCH_CONDITIONS 
    } PowerSwitchFeature;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerSwitchFeature_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerSwitchFeature_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchFeature_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchFeature_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerSwitchFeatureSeq, PowerSwitchFeature);

    NDDSUSERDllExport
    RTIBool PowerSwitchFeature_initialize(
        PowerSwitchFeature* self);

    NDDSUSERDllExport
    RTIBool PowerSwitchFeature_initialize_ex(
        PowerSwitchFeature* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerSwitchFeature_initialize_w_params(
        PowerSwitchFeature* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerSwitchFeature_finalize_w_return(
        PowerSwitchFeature* self);

    NDDSUSERDllExport
    void PowerSwitchFeature_finalize(
        PowerSwitchFeature* self);

    NDDSUSERDllExport
    void PowerSwitchFeature_finalize_ex(
        PowerSwitchFeature* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerSwitchFeature_finalize_w_params(
        PowerSwitchFeature* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerSwitchFeature_finalize_optional_members(
        PowerSwitchFeature* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerSwitchFeature_copy(
        PowerSwitchFeature* dst,
        const PowerSwitchFeature* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum PowerSwitchReason
    {
        PSR_UNKNOWN , 
        PSR_STARTUP , 
        PSR_MANUAL , 
        PSR_AUTO , 
        PSR_REQUEST , 
        PSR_OPERATOR_LOGIN , 
        PSR_AUTO_PROTECTION , 
        PSR_AUTO_LOAD_SHED , 
        PSR_AUTO_VOLTAGE_LOSS , 
        PSR_AUTO_COMMS_LOSS , 
        PSR_MALFUNCTION 
    } PowerSwitchReason;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerSwitchReason_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerSwitchReason_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchReason_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchReason_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerSwitchReasonSeq, PowerSwitchReason);

    NDDSUSERDllExport
    RTIBool PowerSwitchReason_initialize(
        PowerSwitchReason* self);

    NDDSUSERDllExport
    RTIBool PowerSwitchReason_initialize_ex(
        PowerSwitchReason* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerSwitchReason_initialize_w_params(
        PowerSwitchReason* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerSwitchReason_finalize_w_return(
        PowerSwitchReason* self);

    NDDSUSERDllExport
    void PowerSwitchReason_finalize(
        PowerSwitchReason* self);

    NDDSUSERDllExport
    void PowerSwitchReason_finalize_ex(
        PowerSwitchReason* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerSwitchReason_finalize_w_params(
        PowerSwitchReason* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerSwitchReason_finalize_optional_members(
        PowerSwitchReason* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerSwitchReason_copy(
        PowerSwitchReason* dst,
        const PowerSwitchReason* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum SourceFeature
    {
        SRCF_UNKNOWN , 
        SRCF_GENSET , 
        SRCF_FUEL_CELL , 
        SRCF_SOLAR , 
        SRCF_WIND , 
        SRCF_VEHICLE 
    } SourceFeature;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * SourceFeature_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *SourceFeature_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SourceFeature_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SourceFeature_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(SourceFeatureSeq, SourceFeature);

    NDDSUSERDllExport
    RTIBool SourceFeature_initialize(
        SourceFeature* self);

    NDDSUSERDllExport
    RTIBool SourceFeature_initialize_ex(
        SourceFeature* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool SourceFeature_initialize_w_params(
        SourceFeature* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool SourceFeature_finalize_w_return(
        SourceFeature* self);

    NDDSUSERDllExport
    void SourceFeature_finalize(
        SourceFeature* self);

    NDDSUSERDllExport
    void SourceFeature_finalize_ex(
        SourceFeature* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void SourceFeature_finalize_w_params(
        SourceFeature* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void SourceFeature_finalize_optional_members(
        SourceFeature* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool SourceFeature_copy(
        SourceFeature* dst,
        const SourceFeature* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum LoadFeature
    {
        LOADF_UNKNOWN , 
        LOADF_DEMAND_RESPONSE , 
        LOADF_CHANGE_NOTIFICATION , 
        LOADF_SOFT_START 
    } LoadFeature;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * LoadFeature_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LoadFeature_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadFeature_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadFeature_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LoadFeatureSeq, LoadFeature);

    NDDSUSERDllExport
    RTIBool LoadFeature_initialize(
        LoadFeature* self);

    NDDSUSERDllExport
    RTIBool LoadFeature_initialize_ex(
        LoadFeature* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LoadFeature_initialize_w_params(
        LoadFeature* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LoadFeature_finalize_w_return(
        LoadFeature* self);

    NDDSUSERDllExport
    void LoadFeature_finalize(
        LoadFeature* self);

    NDDSUSERDllExport
    void LoadFeature_finalize_ex(
        LoadFeature* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LoadFeature_finalize_w_params(
        LoadFeature* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LoadFeature_finalize_optional_members(
        LoadFeature* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LoadFeature_copy(
        LoadFeature* dst,
        const LoadFeature* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum DistributionFeature
    {
        DISTF_UNKNOWN , 
        DISTF_CLAMP_METER , 
        DISTF_TAP_METER , 
        DISTF_PCC , 
        DISTF_FEEDER , 
        DISTF_DISTRIBUTION 
    } DistributionFeature;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DistributionFeature_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DistributionFeature_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DistributionFeature_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DistributionFeature_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DistributionFeatureSeq, DistributionFeature);

    NDDSUSERDllExport
    RTIBool DistributionFeature_initialize(
        DistributionFeature* self);

    NDDSUSERDllExport
    RTIBool DistributionFeature_initialize_ex(
        DistributionFeature* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DistributionFeature_initialize_w_params(
        DistributionFeature* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DistributionFeature_finalize_w_return(
        DistributionFeature* self);

    NDDSUSERDllExport
    void DistributionFeature_finalize(
        DistributionFeature* self);

    NDDSUSERDllExport
    void DistributionFeature_finalize_ex(
        DistributionFeature* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DistributionFeature_finalize_w_params(
        DistributionFeature* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DistributionFeature_finalize_optional_members(
        DistributionFeature* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DistributionFeature_copy(
        DistributionFeature* dst,
        const DistributionFeature* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum ConversionFeature
    {
        CONVF_UNKNOWN , 
        CONVF_ACTIVE , 
        CONVF_PASSIVE 
    } ConversionFeature;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ConversionFeature_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ConversionFeature_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConversionFeature_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConversionFeature_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ConversionFeatureSeq, ConversionFeature);

    NDDSUSERDllExport
    RTIBool ConversionFeature_initialize(
        ConversionFeature* self);

    NDDSUSERDllExport
    RTIBool ConversionFeature_initialize_ex(
        ConversionFeature* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ConversionFeature_initialize_w_params(
        ConversionFeature* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ConversionFeature_finalize_w_return(
        ConversionFeature* self);

    NDDSUSERDllExport
    void ConversionFeature_finalize(
        ConversionFeature* self);

    NDDSUSERDllExport
    void ConversionFeature_finalize_ex(
        ConversionFeature* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ConversionFeature_finalize_w_params(
        ConversionFeature* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ConversionFeature_finalize_optional_members(
        ConversionFeature* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ConversionFeature_copy(
        ConversionFeature* dst,
        const ConversionFeature* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum MicrogridDashboardFeature
    {
        MDF_UNKNOWN , 
        MDF_DISPLAY , 
        MDF_CONTROL 
    } MicrogridDashboardFeature;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * MicrogridDashboardFeature_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *MicrogridDashboardFeature_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridDashboardFeature_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridDashboardFeature_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(MicrogridDashboardFeatureSeq, MicrogridDashboardFeature);

    NDDSUSERDllExport
    RTIBool MicrogridDashboardFeature_initialize(
        MicrogridDashboardFeature* self);

    NDDSUSERDllExport
    RTIBool MicrogridDashboardFeature_initialize_ex(
        MicrogridDashboardFeature* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool MicrogridDashboardFeature_initialize_w_params(
        MicrogridDashboardFeature* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool MicrogridDashboardFeature_finalize_w_return(
        MicrogridDashboardFeature* self);

    NDDSUSERDllExport
    void MicrogridDashboardFeature_finalize(
        MicrogridDashboardFeature* self);

    NDDSUSERDllExport
    void MicrogridDashboardFeature_finalize_ex(
        MicrogridDashboardFeature* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void MicrogridDashboardFeature_finalize_w_params(
        MicrogridDashboardFeature* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void MicrogridDashboardFeature_finalize_optional_members(
        MicrogridDashboardFeature* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool MicrogridDashboardFeature_copy(
        MicrogridDashboardFeature* dst,
        const MicrogridDashboardFeature* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum MicrogridControllerFeature
    {
        MCF_UNKNOWN , 
        MCF_FIXED , 
        MCF_GENERAL 
    } MicrogridControllerFeature;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * MicrogridControllerFeature_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *MicrogridControllerFeature_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridControllerFeature_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridControllerFeature_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(MicrogridControllerFeatureSeq, MicrogridControllerFeature);

    NDDSUSERDllExport
    RTIBool MicrogridControllerFeature_initialize(
        MicrogridControllerFeature* self);

    NDDSUSERDllExport
    RTIBool MicrogridControllerFeature_initialize_ex(
        MicrogridControllerFeature* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool MicrogridControllerFeature_initialize_w_params(
        MicrogridControllerFeature* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool MicrogridControllerFeature_finalize_w_return(
        MicrogridControllerFeature* self);

    NDDSUSERDllExport
    void MicrogridControllerFeature_finalize(
        MicrogridControllerFeature* self);

    NDDSUSERDllExport
    void MicrogridControllerFeature_finalize_ex(
        MicrogridControllerFeature* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void MicrogridControllerFeature_finalize_w_params(
        MicrogridControllerFeature* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void MicrogridControllerFeature_finalize_optional_members(
        MicrogridControllerFeature* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool MicrogridControllerFeature_copy(
        MicrogridControllerFeature* dst,
        const MicrogridControllerFeature* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum StorageFeature
    {
        STORF_UNKNOWN , 
        STORF_GRID , 
        STORF_SUBCYCLE_UPS , 
        STORF_CHARGING , 
        STORF_VEHICLE 
    } StorageFeature;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * StorageFeature_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *StorageFeature_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageFeature_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageFeature_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(StorageFeatureSeq, StorageFeature);

    NDDSUSERDllExport
    RTIBool StorageFeature_initialize(
        StorageFeature* self);

    NDDSUSERDllExport
    RTIBool StorageFeature_initialize_ex(
        StorageFeature* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool StorageFeature_initialize_w_params(
        StorageFeature* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool StorageFeature_finalize_w_return(
        StorageFeature* self);

    NDDSUSERDllExport
    void StorageFeature_finalize(
        StorageFeature* self);

    NDDSUSERDllExport
    void StorageFeature_finalize_ex(
        StorageFeature* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void StorageFeature_finalize_w_params(
        StorageFeature* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void StorageFeature_finalize_optional_members(
        StorageFeature* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool StorageFeature_copy(
        StorageFeature* dst,
        const StorageFeature* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum ConfigId
    {
        CONFIG_UNKNOWN , 
        CONFIG_DEFAULTS , 
        CONFIG_ACTIVE , 
        CONFIG_ON_REBOOT , 
        CONFIG_ON_COMMS_LOSS 
    } ConfigId;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ConfigId_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ConfigId_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConfigId_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConfigId_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ConfigIdSeq, ConfigId);

    NDDSUSERDllExport
    RTIBool ConfigId_initialize(
        ConfigId* self);

    NDDSUSERDllExport
    RTIBool ConfigId_initialize_ex(
        ConfigId* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ConfigId_initialize_w_params(
        ConfigId* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ConfigId_finalize_w_return(
        ConfigId* self);

    NDDSUSERDllExport
    void ConfigId_finalize(
        ConfigId* self);

    NDDSUSERDllExport
    void ConfigId_finalize_ex(
        ConfigId* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ConfigId_finalize_w_params(
        ConfigId* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ConfigId_finalize_optional_members(
        ConfigId* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ConfigId_copy(
        ConfigId* dst,
        const ConfigId* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum FailureModeIndicator
    {
        FMI_UNKNOWN , 
        FMI_HIGH_MOST_SEVERE_HIGH , 
        FMI_HIGH_MOST_SEVERE_LOW , 
        FMI_DATA_ERRATIC , 
        FMI_VOLTAGE_HIGH , 
        FMI_VOLTAGE_LOW , 
        FMI_CURRENT_LOW , 
        FMI_CURRENT_HIGH , 
        FMI_NOT_RESPONDING , 
        FMI_ABNORMAL_FREQUENCY , 
        FMI_ABNORMAL_UPDATE_RATE , 
        FMI_ABNORMAL_RATE_OF_CHARGE , 
        FMI_FAILURE_CODE_NOT_IDENTIFIABLE , 
        FMI_BAD_INTELLIGENT_DEVICE , 
        FMI_OUT_OF_CALIBRATION , 
        FMI_SPECIAL_INSTRUCTIONS , 
        FMI_HIGH_LEAST_SEVERE , 
        FMI_HIGH_MODERATELY_SEVERE , 
        FMI_LOW_LEAST_SEVERE , 
        FMI_LOW_MODERATELY_SEVERE , 
        FMI_RECEIVED_DATA_ERROR , 
        FMI_DATA_DRIFTED_HIGH , 
        FMI_DATA_DRIFTED_LOW , 
        FMI_CONDITION_EXISTS 
    } FailureModeIndicator;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * FailureModeIndicator_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *FailureModeIndicator_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *FailureModeIndicator_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *FailureModeIndicator_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(FailureModeIndicatorSeq, FailureModeIndicator);

    NDDSUSERDllExport
    RTIBool FailureModeIndicator_initialize(
        FailureModeIndicator* self);

    NDDSUSERDllExport
    RTIBool FailureModeIndicator_initialize_ex(
        FailureModeIndicator* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool FailureModeIndicator_initialize_w_params(
        FailureModeIndicator* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool FailureModeIndicator_finalize_w_return(
        FailureModeIndicator* self);

    NDDSUSERDllExport
    void FailureModeIndicator_finalize(
        FailureModeIndicator* self);

    NDDSUSERDllExport
    void FailureModeIndicator_finalize_ex(
        FailureModeIndicator* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void FailureModeIndicator_finalize_w_params(
        FailureModeIndicator* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void FailureModeIndicator_finalize_optional_members(
        FailureModeIndicator* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool FailureModeIndicator_copy(
        FailureModeIndicator* dst,
        const FailureModeIndicator* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_Long   PowerPortNumber ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortNumber_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortNumber_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortNumber_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortNumber_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortNumberSeq, PowerPortNumber);

    NDDSUSERDllExport
    RTIBool PowerPortNumber_initialize(
        PowerPortNumber* self);

    NDDSUSERDllExport
    RTIBool PowerPortNumber_initialize_ex(
        PowerPortNumber* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortNumber_initialize_w_params(
        PowerPortNumber* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortNumber_finalize_w_return(
        PowerPortNumber* self);

    NDDSUSERDllExport
    void PowerPortNumber_finalize(
        PowerPortNumber* self);

    NDDSUSERDllExport
    void PowerPortNumber_finalize_ex(
        PowerPortNumber* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortNumber_finalize_w_params(
        PowerPortNumber* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortNumber_finalize_optional_members(
        PowerPortNumber* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortNumber_copy(
        PowerPortNumber* dst,
        const PowerPortNumber* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong MAX_PORTS= 64UL;
    static const DDS_Long INVALID_PORT_NUMBER= -1L;
    static const DDS_UnsignedLong Identity_MINLEN= 1UL;
    static const DDS_UnsignedLong Identity_MAXLEN= 32UL;
    typedef    DDS_Char *   Identity ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * Identity_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Identity_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Identity_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Identity_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(IdentitySeq, Identity);

    NDDSUSERDllExport
    RTIBool Identity_initialize(
        Identity* self);

    NDDSUSERDllExport
    RTIBool Identity_initialize_ex(
        Identity* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Identity_initialize_w_params(
        Identity* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Identity_finalize_w_return(
        Identity* self);

    NDDSUSERDllExport
    void Identity_finalize(
        Identity* self);

    NDDSUSERDllExport
    void Identity_finalize_ex(
        Identity* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Identity_finalize_w_params(
        Identity* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Identity_finalize_optional_members(
        Identity* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Identity_copy(
        Identity* dst,
        const Identity* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong IdentitySequence_MINLEN= 0UL;
    static const DDS_UnsignedLong IdentitySequence_MAXLEN= (tms::MAX_PORTS);
    typedef     tms::IdentitySeq  IdentitySequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * IdentitySequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *IdentitySequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *IdentitySequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *IdentitySequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(IdentitySequenceSeq, IdentitySequence);

    NDDSUSERDllExport
    RTIBool IdentitySequence_initialize(
        IdentitySequence* self);

    NDDSUSERDllExport
    RTIBool IdentitySequence_initialize_ex(
        IdentitySequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool IdentitySequence_initialize_w_params(
        IdentitySequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool IdentitySequence_finalize_w_return(
        IdentitySequence* self);

    NDDSUSERDllExport
    void IdentitySequence_finalize(
        IdentitySequence* self);

    NDDSUSERDllExport
    void IdentitySequence_finalize_ex(
        IdentitySequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void IdentitySequence_finalize_w_params(
        IdentitySequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void IdentitySequence_finalize_optional_members(
        IdentitySequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool IdentitySequence_copy(
        IdentitySequence* dst,
        const IdentitySequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong GlobalTradeItemNumber_LEN= 14UL;
    typedef    DDS_Char   GlobalTradeItemNumber [(tms::GlobalTradeItemNumber_LEN)];
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GlobalTradeItemNumber_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GlobalTradeItemNumber_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GlobalTradeItemNumber_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GlobalTradeItemNumber_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE_NO_GET(GlobalTradeItemNumberSeq, GlobalTradeItemNumber);

    NDDSUSERDllExport
    RTIBool GlobalTradeItemNumber_initialize(
        GlobalTradeItemNumber* self);

    NDDSUSERDllExport
    RTIBool GlobalTradeItemNumber_initialize_ex(
        GlobalTradeItemNumber* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GlobalTradeItemNumber_initialize_w_params(
        GlobalTradeItemNumber* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GlobalTradeItemNumber_finalize_w_return(
        GlobalTradeItemNumber* self);

    NDDSUSERDllExport
    void GlobalTradeItemNumber_finalize(
        GlobalTradeItemNumber* self);

    NDDSUSERDllExport
    void GlobalTradeItemNumber_finalize_ex(
        GlobalTradeItemNumber* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GlobalTradeItemNumber_finalize_w_params(
        GlobalTradeItemNumber* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GlobalTradeItemNumber_finalize_optional_members(
        GlobalTradeItemNumber* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GlobalTradeItemNumber_copy(
        GlobalTradeItemNumber* dst,
        const GlobalTradeItemNumber* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_Long   GroundingCircuitNumber ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GroundingCircuitNumber_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GroundingCircuitNumber_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingCircuitNumber_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingCircuitNumber_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(GroundingCircuitNumberSeq, GroundingCircuitNumber);

    NDDSUSERDllExport
    RTIBool GroundingCircuitNumber_initialize(
        GroundingCircuitNumber* self);

    NDDSUSERDllExport
    RTIBool GroundingCircuitNumber_initialize_ex(
        GroundingCircuitNumber* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GroundingCircuitNumber_initialize_w_params(
        GroundingCircuitNumber* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GroundingCircuitNumber_finalize_w_return(
        GroundingCircuitNumber* self);

    NDDSUSERDllExport
    void GroundingCircuitNumber_finalize(
        GroundingCircuitNumber* self);

    NDDSUSERDllExport
    void GroundingCircuitNumber_finalize_ex(
        GroundingCircuitNumber* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GroundingCircuitNumber_finalize_w_params(
        GroundingCircuitNumber* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GroundingCircuitNumber_finalize_optional_members(
        GroundingCircuitNumber* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GroundingCircuitNumber_copy(
        GroundingCircuitNumber* dst,
        const GroundingCircuitNumber* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_Long MAX_GROUNDING_CIRCUITS= 8L;
    static const DDS_Long INVALID_GROUNDING_CIRCUIT_NUMBER= -1L;
    static const DDS_UnsignedLong NatoStockNumber_LEN= 13UL;
    typedef    DDS_Char   NatoStockNumber [(tms::NatoStockNumber_LEN)];
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * NatoStockNumber_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *NatoStockNumber_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NatoStockNumber_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *NatoStockNumber_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE_NO_GET(NatoStockNumberSeq, NatoStockNumber);

    NDDSUSERDllExport
    RTIBool NatoStockNumber_initialize(
        NatoStockNumber* self);

    NDDSUSERDllExport
    RTIBool NatoStockNumber_initialize_ex(
        NatoStockNumber* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool NatoStockNumber_initialize_w_params(
        NatoStockNumber* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool NatoStockNumber_finalize_w_return(
        NatoStockNumber* self);

    NDDSUSERDllExport
    void NatoStockNumber_finalize(
        NatoStockNumber* self);

    NDDSUSERDllExport
    void NatoStockNumber_finalize_ex(
        NatoStockNumber* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void NatoStockNumber_finalize_w_params(
        NatoStockNumber* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void NatoStockNumber_finalize_optional_members(
        NatoStockNumber* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool NatoStockNumber_copy(
        NatoStockNumber* dst,
        const NatoStockNumber* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong String16_MINLEN= 0UL;
    static const DDS_UnsignedLong String16_MAXLEN= 16UL;
    typedef    DDS_Char *   String16 ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * String16_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *String16_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *String16_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *String16_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(String16Seq, String16);

    NDDSUSERDllExport
    RTIBool String16_initialize(
        String16* self);

    NDDSUSERDllExport
    RTIBool String16_initialize_ex(
        String16* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool String16_initialize_w_params(
        String16* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool String16_finalize_w_return(
        String16* self);

    NDDSUSERDllExport
    void String16_finalize(
        String16* self);

    NDDSUSERDllExport
    void String16_finalize_ex(
        String16* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void String16_finalize_w_params(
        String16* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void String16_finalize_optional_members(
        String16* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool String16_copy(
        String16* dst,
        const String16* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong String32_MINLEN= 0UL;
    static const DDS_UnsignedLong String32_MAXLEN= 32UL;
    typedef    DDS_Char *   String32 ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * String32_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *String32_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *String32_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *String32_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(String32Seq, String32);

    NDDSUSERDllExport
    RTIBool String32_initialize(
        String32* self);

    NDDSUSERDllExport
    RTIBool String32_initialize_ex(
        String32* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool String32_initialize_w_params(
        String32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool String32_finalize_w_return(
        String32* self);

    NDDSUSERDllExport
    void String32_finalize(
        String32* self);

    NDDSUSERDllExport
    void String32_finalize_ex(
        String32* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void String32_finalize_w_params(
        String32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void String32_finalize_optional_members(
        String32* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool String32_copy(
        String32* dst,
        const String32* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong String1_32_MINLEN= 1UL;
    static const DDS_UnsignedLong String1_32_MAXLEN= 32UL;
    typedef    DDS_Char *   String1_32 ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * String1_32_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *String1_32_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *String1_32_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *String1_32_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(String1_32Seq, String1_32);

    NDDSUSERDllExport
    RTIBool String1_32_initialize(
        String1_32* self);

    NDDSUSERDllExport
    RTIBool String1_32_initialize_ex(
        String1_32* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool String1_32_initialize_w_params(
        String1_32* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool String1_32_finalize_w_return(
        String1_32* self);

    NDDSUSERDllExport
    void String1_32_finalize(
        String1_32* self);

    NDDSUSERDllExport
    void String1_32_finalize_ex(
        String1_32* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void String1_32_finalize_w_params(
        String1_32* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void String1_32_finalize_optional_members(
        String1_32* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool String1_32_copy(
        String1_32* dst,
        const String1_32* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_UnsignedLong   SuspectParameterNumber ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * SuspectParameterNumber_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *SuspectParameterNumber_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SuspectParameterNumber_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SuspectParameterNumber_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(SuspectParameterNumberSeq, SuspectParameterNumber);

    NDDSUSERDllExport
    RTIBool SuspectParameterNumber_initialize(
        SuspectParameterNumber* self);

    NDDSUSERDllExport
    RTIBool SuspectParameterNumber_initialize_ex(
        SuspectParameterNumber* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool SuspectParameterNumber_initialize_w_params(
        SuspectParameterNumber* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool SuspectParameterNumber_finalize_w_return(
        SuspectParameterNumber* self);

    NDDSUSERDllExport
    void SuspectParameterNumber_finalize(
        SuspectParameterNumber* self);

    NDDSUSERDllExport
    void SuspectParameterNumber_finalize_ex(
        SuspectParameterNumber* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void SuspectParameterNumber_finalize_w_params(
        SuspectParameterNumber* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void SuspectParameterNumber_finalize_optional_members(
        SuspectParameterNumber* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool SuspectParameterNumber_copy(
        SuspectParameterNumber* dst,
        const SuspectParameterNumber* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_Long   TapNumber ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * TapNumber_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TapNumber_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TapNumber_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TapNumber_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TapNumberSeq, TapNumber);

    NDDSUSERDllExport
    RTIBool TapNumber_initialize(
        TapNumber* self);

    NDDSUSERDllExport
    RTIBool TapNumber_initialize_ex(
        TapNumber* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TapNumber_initialize_w_params(
        TapNumber* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TapNumber_finalize_w_return(
        TapNumber* self);

    NDDSUSERDllExport
    void TapNumber_finalize(
        TapNumber* self);

    NDDSUSERDllExport
    void TapNumber_finalize_ex(
        TapNumber* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TapNumber_finalize_w_params(
        TapNumber* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TapNumber_finalize_optional_members(
        TapNumber* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TapNumber_copy(
        TapNumber* dst,
        const TapNumber* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_Long MAX_TAPS= 64L;
    static const DDS_UnsignedLong PowerPortNumberSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong PowerPortNumberSequence_MAXLEN= (tms::MAX_PORTS);
    typedef     DDS_LongSeq  PowerPortNumberSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortNumberSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortNumberSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortNumberSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortNumberSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortNumberSequenceSeq, PowerPortNumberSequence);

    NDDSUSERDllExport
    RTIBool PowerPortNumberSequence_initialize(
        PowerPortNumberSequence* self);

    NDDSUSERDllExport
    RTIBool PowerPortNumberSequence_initialize_ex(
        PowerPortNumberSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortNumberSequence_initialize_w_params(
        PowerPortNumberSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortNumberSequence_finalize_w_return(
        PowerPortNumberSequence* self);

    NDDSUSERDllExport
    void PowerPortNumberSequence_finalize(
        PowerPortNumberSequence* self);

    NDDSUSERDllExport
    void PowerPortNumberSequence_finalize_ex(
        PowerPortNumberSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortNumberSequence_finalize_w_params(
        PowerPortNumberSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortNumberSequence_finalize_optional_members(
        PowerPortNumberSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortNumberSequence_copy(
        PowerPortNumberSequence* dst,
        const PowerPortNumberSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong ConversionFeatureSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong ConversionFeatureSequence_MAXLEN= 3UL;
    typedef     tms::ConversionFeatureSeq  ConversionFeatureSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ConversionFeatureSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ConversionFeatureSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConversionFeatureSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConversionFeatureSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ConversionFeatureSequenceSeq, ConversionFeatureSequence);

    NDDSUSERDllExport
    RTIBool ConversionFeatureSequence_initialize(
        ConversionFeatureSequence* self);

    NDDSUSERDllExport
    RTIBool ConversionFeatureSequence_initialize_ex(
        ConversionFeatureSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ConversionFeatureSequence_initialize_w_params(
        ConversionFeatureSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ConversionFeatureSequence_finalize_w_return(
        ConversionFeatureSequence* self);

    NDDSUSERDllExport
    void ConversionFeatureSequence_finalize(
        ConversionFeatureSequence* self);

    NDDSUSERDllExport
    void ConversionFeatureSequence_finalize_ex(
        ConversionFeatureSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ConversionFeatureSequence_finalize_w_params(
        ConversionFeatureSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ConversionFeatureSequence_finalize_optional_members(
        ConversionFeatureSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ConversionFeatureSequence_copy(
        ConversionFeatureSequence* dst,
        const ConversionFeatureSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong OctetSequence_MINLEN= 1UL;
    static const DDS_UnsignedLong OctetSequence_MAXLEN= 32768UL;
    typedef     DDS_OctetSeq  OctetSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * OctetSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *OctetSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OctetSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OctetSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(OctetSequenceSeq, OctetSequence);

    NDDSUSERDllExport
    RTIBool OctetSequence_initialize(
        OctetSequence* self);

    NDDSUSERDllExport
    RTIBool OctetSequence_initialize_ex(
        OctetSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool OctetSequence_initialize_w_params(
        OctetSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool OctetSequence_finalize_w_return(
        OctetSequence* self);

    NDDSUSERDllExport
    void OctetSequence_finalize(
        OctetSequence* self);

    NDDSUSERDllExport
    void OctetSequence_finalize_ex(
        OctetSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void OctetSequence_finalize_w_params(
        OctetSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void OctetSequence_finalize_optional_members(
        OctetSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool OctetSequence_copy(
        OctetSequence* dst,
        const OctetSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong DistributionFeatureSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong DistributionFeatureSequence_MAXLEN= 6UL;
    typedef     tms::DistributionFeatureSeq  DistributionFeatureSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DistributionFeatureSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DistributionFeatureSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DistributionFeatureSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DistributionFeatureSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DistributionFeatureSequenceSeq, DistributionFeatureSequence);

    NDDSUSERDllExport
    RTIBool DistributionFeatureSequence_initialize(
        DistributionFeatureSequence* self);

    NDDSUSERDllExport
    RTIBool DistributionFeatureSequence_initialize_ex(
        DistributionFeatureSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DistributionFeatureSequence_initialize_w_params(
        DistributionFeatureSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DistributionFeatureSequence_finalize_w_return(
        DistributionFeatureSequence* self);

    NDDSUSERDllExport
    void DistributionFeatureSequence_finalize(
        DistributionFeatureSequence* self);

    NDDSUSERDllExport
    void DistributionFeatureSequence_finalize_ex(
        DistributionFeatureSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DistributionFeatureSequence_finalize_w_params(
        DistributionFeatureSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DistributionFeatureSequence_finalize_optional_members(
        DistributionFeatureSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DistributionFeatureSequence_copy(
        DistributionFeatureSequence* dst,
        const DistributionFeatureSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong PowerConnectorFeatureSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong PowerConnectorFeatureSequence_MAXLEN= 6UL;
    typedef     tms::PowerConnectorFeatureSeq  PowerConnectorFeatureSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerConnectorFeatureSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerConnectorFeatureSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectorFeatureSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectorFeatureSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerConnectorFeatureSequenceSeq, PowerConnectorFeatureSequence);

    NDDSUSERDllExport
    RTIBool PowerConnectorFeatureSequence_initialize(
        PowerConnectorFeatureSequence* self);

    NDDSUSERDllExport
    RTIBool PowerConnectorFeatureSequence_initialize_ex(
        PowerConnectorFeatureSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerConnectorFeatureSequence_initialize_w_params(
        PowerConnectorFeatureSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerConnectorFeatureSequence_finalize_w_return(
        PowerConnectorFeatureSequence* self);

    NDDSUSERDllExport
    void PowerConnectorFeatureSequence_finalize(
        PowerConnectorFeatureSequence* self);

    NDDSUSERDllExport
    void PowerConnectorFeatureSequence_finalize_ex(
        PowerConnectorFeatureSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerConnectorFeatureSequence_finalize_w_params(
        PowerConnectorFeatureSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerConnectorFeatureSequence_finalize_optional_members(
        PowerConnectorFeatureSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerConnectorFeatureSequence_copy(
        PowerConnectorFeatureSequence* dst,
        const PowerConnectorFeatureSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong PowerSwitchFeatureSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong PowerSwitchFeatureSequence_MAXLEN= 15UL;
    typedef     tms::PowerSwitchFeatureSeq  PowerSwitchFeatureSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerSwitchFeatureSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerSwitchFeatureSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchFeatureSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchFeatureSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerSwitchFeatureSequenceSeq, PowerSwitchFeatureSequence);

    NDDSUSERDllExport
    RTIBool PowerSwitchFeatureSequence_initialize(
        PowerSwitchFeatureSequence* self);

    NDDSUSERDllExport
    RTIBool PowerSwitchFeatureSequence_initialize_ex(
        PowerSwitchFeatureSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerSwitchFeatureSequence_initialize_w_params(
        PowerSwitchFeatureSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerSwitchFeatureSequence_finalize_w_return(
        PowerSwitchFeatureSequence* self);

    NDDSUSERDllExport
    void PowerSwitchFeatureSequence_finalize(
        PowerSwitchFeatureSequence* self);

    NDDSUSERDllExport
    void PowerSwitchFeatureSequence_finalize_ex(
        PowerSwitchFeatureSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerSwitchFeatureSequence_finalize_w_params(
        PowerSwitchFeatureSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerSwitchFeatureSequence_finalize_optional_members(
        PowerSwitchFeatureSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerSwitchFeatureSequence_copy(
        PowerSwitchFeatureSequence* dst,
        const PowerSwitchFeatureSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong LoadFeatureSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong LoadFeatureSequence_MAXLEN= 4UL;
    typedef     tms::LoadFeatureSeq  LoadFeatureSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * LoadFeatureSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LoadFeatureSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadFeatureSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadFeatureSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LoadFeatureSequenceSeq, LoadFeatureSequence);

    NDDSUSERDllExport
    RTIBool LoadFeatureSequence_initialize(
        LoadFeatureSequence* self);

    NDDSUSERDllExport
    RTIBool LoadFeatureSequence_initialize_ex(
        LoadFeatureSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LoadFeatureSequence_initialize_w_params(
        LoadFeatureSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LoadFeatureSequence_finalize_w_return(
        LoadFeatureSequence* self);

    NDDSUSERDllExport
    void LoadFeatureSequence_finalize(
        LoadFeatureSequence* self);

    NDDSUSERDllExport
    void LoadFeatureSequence_finalize_ex(
        LoadFeatureSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LoadFeatureSequence_finalize_w_params(
        LoadFeatureSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LoadFeatureSequence_finalize_optional_members(
        LoadFeatureSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LoadFeatureSequence_copy(
        LoadFeatureSequence* dst,
        const LoadFeatureSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong MicrogridControllerFeatureSequence_MINLEN= 1UL;
    static const DDS_UnsignedLong MicrogridControllerFeatureSequence_MAXLEN= 3UL;
    typedef     tms::MicrogridControllerFeatureSeq  MicrogridControllerFeatureSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * MicrogridControllerFeatureSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *MicrogridControllerFeatureSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridControllerFeatureSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridControllerFeatureSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(MicrogridControllerFeatureSequenceSeq, MicrogridControllerFeatureSequence);

    NDDSUSERDllExport
    RTIBool MicrogridControllerFeatureSequence_initialize(
        MicrogridControllerFeatureSequence* self);

    NDDSUSERDllExport
    RTIBool MicrogridControllerFeatureSequence_initialize_ex(
        MicrogridControllerFeatureSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool MicrogridControllerFeatureSequence_initialize_w_params(
        MicrogridControllerFeatureSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool MicrogridControllerFeatureSequence_finalize_w_return(
        MicrogridControllerFeatureSequence* self);

    NDDSUSERDllExport
    void MicrogridControllerFeatureSequence_finalize(
        MicrogridControllerFeatureSequence* self);

    NDDSUSERDllExport
    void MicrogridControllerFeatureSequence_finalize_ex(
        MicrogridControllerFeatureSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void MicrogridControllerFeatureSequence_finalize_w_params(
        MicrogridControllerFeatureSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void MicrogridControllerFeatureSequence_finalize_optional_members(
        MicrogridControllerFeatureSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool MicrogridControllerFeatureSequence_copy(
        MicrogridControllerFeatureSequence* dst,
        const MicrogridControllerFeatureSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong MicrogridDashboardFeatureSequence_MINLEN= 1UL;
    static const DDS_UnsignedLong MicrogridDashboardFeatureSequence_MAXLEN= 3UL;
    typedef     tms::MicrogridDashboardFeatureSeq  MicrogridDashboardFeatureSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * MicrogridDashboardFeatureSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *MicrogridDashboardFeatureSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridDashboardFeatureSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridDashboardFeatureSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(MicrogridDashboardFeatureSequenceSeq, MicrogridDashboardFeatureSequence);

    NDDSUSERDllExport
    RTIBool MicrogridDashboardFeatureSequence_initialize(
        MicrogridDashboardFeatureSequence* self);

    NDDSUSERDllExport
    RTIBool MicrogridDashboardFeatureSequence_initialize_ex(
        MicrogridDashboardFeatureSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool MicrogridDashboardFeatureSequence_initialize_w_params(
        MicrogridDashboardFeatureSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool MicrogridDashboardFeatureSequence_finalize_w_return(
        MicrogridDashboardFeatureSequence* self);

    NDDSUSERDllExport
    void MicrogridDashboardFeatureSequence_finalize(
        MicrogridDashboardFeatureSequence* self);

    NDDSUSERDllExport
    void MicrogridDashboardFeatureSequence_finalize_ex(
        MicrogridDashboardFeatureSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void MicrogridDashboardFeatureSequence_finalize_w_params(
        MicrogridDashboardFeatureSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void MicrogridDashboardFeatureSequence_finalize_optional_members(
        MicrogridDashboardFeatureSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool MicrogridDashboardFeatureSequence_copy(
        MicrogridDashboardFeatureSequence* dst,
        const MicrogridDashboardFeatureSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong EnumLabelSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong EnumLabelSequence_MAXLEN= 128UL;
    typedef     tms::String1_32Seq  EnumLabelSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * EnumLabelSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EnumLabelSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnumLabelSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnumLabelSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EnumLabelSequenceSeq, EnumLabelSequence);

    NDDSUSERDllExport
    RTIBool EnumLabelSequence_initialize(
        EnumLabelSequence* self);

    NDDSUSERDllExport
    RTIBool EnumLabelSequence_initialize_ex(
        EnumLabelSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EnumLabelSequence_initialize_w_params(
        EnumLabelSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EnumLabelSequence_finalize_w_return(
        EnumLabelSequence* self);

    NDDSUSERDllExport
    void EnumLabelSequence_finalize(
        EnumLabelSequence* self);

    NDDSUSERDllExport
    void EnumLabelSequence_finalize_ex(
        EnumLabelSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EnumLabelSequence_finalize_w_params(
        EnumLabelSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EnumLabelSequence_finalize_optional_members(
        EnumLabelSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EnumLabelSequence_copy(
        EnumLabelSequence* dst,
        const EnumLabelSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong SourceFeatureSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong SourceFeatureSequence_MAXLEN= 6UL;
    typedef     tms::SourceFeatureSeq  SourceFeatureSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * SourceFeatureSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *SourceFeatureSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SourceFeatureSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SourceFeatureSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(SourceFeatureSequenceSeq, SourceFeatureSequence);

    NDDSUSERDllExport
    RTIBool SourceFeatureSequence_initialize(
        SourceFeatureSequence* self);

    NDDSUSERDllExport
    RTIBool SourceFeatureSequence_initialize_ex(
        SourceFeatureSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool SourceFeatureSequence_initialize_w_params(
        SourceFeatureSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool SourceFeatureSequence_finalize_w_return(
        SourceFeatureSequence* self);

    NDDSUSERDllExport
    void SourceFeatureSequence_finalize(
        SourceFeatureSequence* self);

    NDDSUSERDllExport
    void SourceFeatureSequence_finalize_ex(
        SourceFeatureSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void SourceFeatureSequence_finalize_w_params(
        SourceFeatureSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void SourceFeatureSequence_finalize_optional_members(
        SourceFeatureSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool SourceFeatureSequence_copy(
        SourceFeatureSequence* dst,
        const SourceFeatureSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong StorageFeatureSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong StorageFeatureSequence_MAXLEN= 5UL;
    typedef     tms::StorageFeatureSeq  StorageFeatureSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * StorageFeatureSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *StorageFeatureSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageFeatureSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageFeatureSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(StorageFeatureSequenceSeq, StorageFeatureSequence);

    NDDSUSERDllExport
    RTIBool StorageFeatureSequence_initialize(
        StorageFeatureSequence* self);

    NDDSUSERDllExport
    RTIBool StorageFeatureSequence_initialize_ex(
        StorageFeatureSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool StorageFeatureSequence_initialize_w_params(
        StorageFeatureSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool StorageFeatureSequence_finalize_w_return(
        StorageFeatureSequence* self);

    NDDSUSERDllExport
    void StorageFeatureSequence_finalize(
        StorageFeatureSequence* self);

    NDDSUSERDllExport
    void StorageFeatureSequence_finalize_ex(
        StorageFeatureSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void StorageFeatureSequence_finalize_w_params(
        StorageFeatureSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void StorageFeatureSequence_finalize_optional_members(
        StorageFeatureSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool StorageFeatureSequence_copy(
        StorageFeatureSequence* dst,
        const StorageFeatureSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong ThermalLoadSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong ThermalLoadSequence_MAXLEN= 5UL;
    typedef     DDS_FloatSeq  ThermalLoadSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ThermalLoadSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ThermalLoadSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThermalLoadSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThermalLoadSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ThermalLoadSequenceSeq, ThermalLoadSequence);

    NDDSUSERDllExport
    RTIBool ThermalLoadSequence_initialize(
        ThermalLoadSequence* self);

    NDDSUSERDllExport
    RTIBool ThermalLoadSequence_initialize_ex(
        ThermalLoadSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ThermalLoadSequence_initialize_w_params(
        ThermalLoadSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ThermalLoadSequence_finalize_w_return(
        ThermalLoadSequence* self);

    NDDSUSERDllExport
    void ThermalLoadSequence_finalize(
        ThermalLoadSequence* self);

    NDDSUSERDllExport
    void ThermalLoadSequence_finalize_ex(
        ThermalLoadSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ThermalLoadSequence_finalize_w_params(
        ThermalLoadSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ThermalLoadSequence_finalize_optional_members(
        ThermalLoadSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ThermalLoadSequence_copy(
        ThermalLoadSequence* dst,
        const ThermalLoadSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong ThermalZoneSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong ThermalZoneSequence_MAXLEN= 5UL;
    typedef     tms::String1_32Seq  ThermalZoneSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ThermalZoneSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ThermalZoneSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThermalZoneSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThermalZoneSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ThermalZoneSequenceSeq, ThermalZoneSequence);

    NDDSUSERDllExport
    RTIBool ThermalZoneSequence_initialize(
        ThermalZoneSequence* self);

    NDDSUSERDllExport
    RTIBool ThermalZoneSequence_initialize_ex(
        ThermalZoneSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ThermalZoneSequence_initialize_w_params(
        ThermalZoneSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ThermalZoneSequence_finalize_w_return(
        ThermalZoneSequence* self);

    NDDSUSERDllExport
    void ThermalZoneSequence_finalize(
        ThermalZoneSequence* self);

    NDDSUSERDllExport
    void ThermalZoneSequence_finalize_ex(
        ThermalZoneSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ThermalZoneSequence_finalize_w_params(
        ThermalZoneSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ThermalZoneSequence_finalize_optional_members(
        ThermalZoneSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ThermalZoneSequence_copy(
        ThermalZoneSequence* dst,
        const ThermalZoneSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *Point2DTYPENAME;

    struct Point2DSeq;
    class Point2D 
    {
      public:
        typedef struct Point2DSeq Seq;

        DDS_Float   x ;
        DDS_Float   y ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * Point2D_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Point2D_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Point2D_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Point2D_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(Point2DSeq, Point2D);

    NDDSUSERDllExport
    RTIBool Point2D_initialize(
        Point2D* self);

    NDDSUSERDllExport
    RTIBool Point2D_initialize_ex(
        Point2D* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Point2D_initialize_w_params(
        Point2D* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Point2D_finalize_w_return(
        Point2D* self);

    NDDSUSERDllExport
    void Point2D_finalize(
        Point2D* self);

    NDDSUSERDllExport
    void Point2D_finalize_ex(
        Point2D* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Point2D_finalize_w_params(
        Point2D* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Point2D_finalize_optional_members(
        Point2D* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Point2D_copy(
        Point2D* dst,
        const Point2D* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong Point2DSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong Point2DSequence_MAXLEN= 21UL;
    typedef     tms::Point2DSeq  Point2DSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * Point2DSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Point2DSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Point2DSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Point2DSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(Point2DSequenceSeq, Point2DSequence);

    NDDSUSERDllExport
    RTIBool Point2DSequence_initialize(
        Point2DSequence* self);

    NDDSUSERDllExport
    RTIBool Point2DSequence_initialize_ex(
        Point2DSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Point2DSequence_initialize_w_params(
        Point2DSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Point2DSequence_finalize_w_return(
        Point2DSequence* self);

    NDDSUSERDllExport
    void Point2DSequence_finalize(
        Point2DSequence* self);

    NDDSUSERDllExport
    void Point2DSequence_finalize_ex(
        Point2DSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Point2DSequence_finalize_w_params(
        Point2DSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Point2DSequence_finalize_optional_members(
        Point2DSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Point2DSequence_copy(
        Point2DSequence* dst,
        const Point2DSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *Curve2DTYPENAME;

    struct Curve2DSeq;
    class Curve2D 
    {
      public:
        typedef struct Curve2DSeq Seq;

        tms::Point2DSequence   points ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * Curve2D_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Curve2D_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Curve2D_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Curve2D_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(Curve2DSeq, Curve2D);

    NDDSUSERDllExport
    RTIBool Curve2D_initialize(
        Curve2D* self);

    NDDSUSERDllExport
    RTIBool Curve2D_initialize_ex(
        Curve2D* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Curve2D_initialize_w_params(
        Curve2D* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Curve2D_finalize_w_return(
        Curve2D* self);

    NDDSUSERDllExport
    void Curve2D_finalize(
        Curve2D* self);

    NDDSUSERDllExport
    void Curve2D_finalize_ex(
        Curve2D* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Curve2D_finalize_w_params(
        Curve2D* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Curve2D_finalize_optional_members(
        Curve2D* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Curve2D_copy(
        Curve2D* dst,
        const Curve2D* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ControlCurveTYPENAME;

    struct ControlCurveSeq;
    class ControlCurve 
    {
      public:
        typedef struct ControlCurveSeq Seq;

        tms::Curve2D   minimum ;
        tms::Curve2D   nominal ;
        tms::Curve2D   maximum ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ControlCurve_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ControlCurve_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlCurve_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlCurve_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ControlCurveSeq, ControlCurve);

    NDDSUSERDllExport
    RTIBool ControlCurve_initialize(
        ControlCurve* self);

    NDDSUSERDllExport
    RTIBool ControlCurve_initialize_ex(
        ControlCurve* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ControlCurve_initialize_w_params(
        ControlCurve* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ControlCurve_finalize_w_return(
        ControlCurve* self);

    NDDSUSERDllExport
    void ControlCurve_finalize(
        ControlCurve* self);

    NDDSUSERDllExport
    void ControlCurve_finalize_ex(
        ControlCurve* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ControlCurve_finalize_w_params(
        ControlCurve* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ControlCurve_finalize_optional_members(
        ControlCurve* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ControlCurve_copy(
        ControlCurve* dst,
        const ControlCurve* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *GridRequestTYPENAME;

    struct GridRequestSeq;
    class GridRequest 
    {
      public:
        typedef struct GridRequestSeq Seq;

        DDS_Char *   requestingDeviceId ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GridRequest_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GridRequest_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GridRequest_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GridRequest_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(GridRequestSeq, GridRequest);

    NDDSUSERDllExport
    RTIBool GridRequest_initialize(
        GridRequest* self);

    NDDSUSERDllExport
    RTIBool GridRequest_initialize_ex(
        GridRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GridRequest_initialize_w_params(
        GridRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GridRequest_finalize_w_return(
        GridRequest* self);

    NDDSUSERDllExport
    void GridRequest_finalize(
        GridRequest* self);

    NDDSUSERDllExport
    void GridRequest_finalize_ex(
        GridRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GridRequest_finalize_w_params(
        GridRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GridRequest_finalize_optional_members(
        GridRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GridRequest_copy(
        GridRequest* dst,
        const GridRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ClockMonotonicTYPENAME;

    struct ClockMonotonicSeq;
    class ClockMonotonic 
    {
      public:
        typedef struct ClockMonotonicSeq Seq;

        DDS_UnsignedLong   seconds ;
        DDS_UnsignedLong   nanoseconds ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ClockMonotonic_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ClockMonotonic_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ClockMonotonic_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ClockMonotonic_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ClockMonotonicSeq, ClockMonotonic);

    NDDSUSERDllExport
    RTIBool ClockMonotonic_initialize(
        ClockMonotonic* self);

    NDDSUSERDllExport
    RTIBool ClockMonotonic_initialize_ex(
        ClockMonotonic* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ClockMonotonic_initialize_w_params(
        ClockMonotonic* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ClockMonotonic_finalize_w_return(
        ClockMonotonic* self);

    NDDSUSERDllExport
    void ClockMonotonic_finalize(
        ClockMonotonic* self);

    NDDSUSERDllExport
    void ClockMonotonic_finalize_ex(
        ClockMonotonic* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ClockMonotonic_finalize_w_params(
        ClockMonotonic* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ClockMonotonic_finalize_optional_members(
        ClockMonotonic* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ClockMonotonic_copy(
        ClockMonotonic* dst,
        const ClockMonotonic* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ThermalInfoTYPENAME;

    struct ThermalInfoSeq;
    class ThermalInfo 
    {
      public:
        typedef struct ThermalInfoSeq Seq;

        tms::ThermalZoneSequence   thermalZone ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ThermalInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ThermalInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThermalInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThermalInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ThermalInfoSeq, ThermalInfo);

    NDDSUSERDllExport
    RTIBool ThermalInfo_initialize(
        ThermalInfo* self);

    NDDSUSERDllExport
    RTIBool ThermalInfo_initialize_ex(
        ThermalInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ThermalInfo_initialize_w_params(
        ThermalInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ThermalInfo_finalize_w_return(
        ThermalInfo* self);

    NDDSUSERDllExport
    void ThermalInfo_finalize(
        ThermalInfo* self);

    NDDSUSERDllExport
    void ThermalInfo_finalize_ex(
        ThermalInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ThermalInfo_finalize_w_params(
        ThermalInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ThermalInfo_finalize_optional_members(
        ThermalInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ThermalInfo_copy(
        ThermalInfo* dst,
        const ThermalInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ThermalStateTYPENAME;

    struct ThermalStateSeq;
    class ThermalState 
    {
      public:
        typedef struct ThermalStateSeq Seq;

        tms::ThermalLoadSequence   thermalLoad ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ThermalState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ThermalState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThermalState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ThermalState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ThermalStateSeq, ThermalState);

    NDDSUSERDllExport
    RTIBool ThermalState_initialize(
        ThermalState* self);

    NDDSUSERDllExport
    RTIBool ThermalState_initialize_ex(
        ThermalState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ThermalState_initialize_w_params(
        ThermalState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ThermalState_finalize_w_return(
        ThermalState* self);

    NDDSUSERDllExport
    void ThermalState_finalize(
        ThermalState* self);

    NDDSUSERDllExport
    void ThermalState_finalize_ex(
        ThermalState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ThermalState_finalize_w_params(
        ThermalState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ThermalState_finalize_optional_members(
        ThermalState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ThermalState_copy(
        ThermalState* dst,
        const ThermalState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *SynchronousMachineCoefficientsTYPENAME;

    struct SynchronousMachineCoefficientsSeq;
    class SynchronousMachineCoefficients 
    {
      public:
        typedef struct SynchronousMachineCoefficientsSeq Seq;

        DDS_Float   statorResistancePerPhase ;
        DDS_Float   statorLeakageReactance ;
        DDS_Float   zeroSequenceReactance ;
        DDS_Float   negativeSequenceReactance ;
        DDS_Float   zeroSequenceResistance ;
        DDS_Float   negativeSequenceResistance ;
        DDS_Float   directAxisSynchronousReactance ;
        DDS_Float   directAxisTransientReactance ;
        DDS_Float   directAxisSubtransientReactance ;
        DDS_Float   quadratureAxisSynchronousReactance ;
        DDS_Float   quadratureAxisTransientReactance ;
        DDS_Float   quadratureAxisSubtransientReactance ;
        DDS_Float   directAxisTransientShortCircuitTimeConstant ;
        DDS_Float   directAxisSubtransientShortCircuitTimeConstant ;
        DDS_Float   directAxisTransientOpenCircuitTimeConstant ;
        DDS_Float   directAxisSubtransientOpenCircuitTimeConstant ;
        DDS_Float   quadratureAxisTransientShortCircuitTimeConstant ;
        DDS_Float   quadratureAxisSubtransientShortCircuitTimeConstant ;
        DDS_Float   quadratureAxisTransientOpenCircuitTimeConstant ;
        DDS_Float   quadratureAxisSubtransientOpenCircuitTimeConstant ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * SynchronousMachineCoefficients_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *SynchronousMachineCoefficients_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SynchronousMachineCoefficients_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SynchronousMachineCoefficients_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(SynchronousMachineCoefficientsSeq, SynchronousMachineCoefficients);

    NDDSUSERDllExport
    RTIBool SynchronousMachineCoefficients_initialize(
        SynchronousMachineCoefficients* self);

    NDDSUSERDllExport
    RTIBool SynchronousMachineCoefficients_initialize_ex(
        SynchronousMachineCoefficients* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool SynchronousMachineCoefficients_initialize_w_params(
        SynchronousMachineCoefficients* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool SynchronousMachineCoefficients_finalize_w_return(
        SynchronousMachineCoefficients* self);

    NDDSUSERDllExport
    void SynchronousMachineCoefficients_finalize(
        SynchronousMachineCoefficients* self);

    NDDSUSERDllExport
    void SynchronousMachineCoefficients_finalize_ex(
        SynchronousMachineCoefficients* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void SynchronousMachineCoefficients_finalize_w_params(
        SynchronousMachineCoefficients* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void SynchronousMachineCoefficients_finalize_optional_members(
        SynchronousMachineCoefficients* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool SynchronousMachineCoefficients_copy(
        SynchronousMachineCoefficients* dst,
        const SynchronousMachineCoefficients* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerElectronicsInfoTYPENAME;

    struct PowerElectronicsInfoSeq;
    class PowerElectronicsInfo 
    {
      public:
        typedef struct PowerElectronicsInfoSeq Seq;

        DDS_Float   minTemperature ;
        DDS_Float   maxTemperature ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerElectronicsInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerElectronicsInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerElectronicsInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerElectronicsInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerElectronicsInfoSeq, PowerElectronicsInfo);

    NDDSUSERDllExport
    RTIBool PowerElectronicsInfo_initialize(
        PowerElectronicsInfo* self);

    NDDSUSERDllExport
    RTIBool PowerElectronicsInfo_initialize_ex(
        PowerElectronicsInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerElectronicsInfo_initialize_w_params(
        PowerElectronicsInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerElectronicsInfo_finalize_w_return(
        PowerElectronicsInfo* self);

    NDDSUSERDllExport
    void PowerElectronicsInfo_finalize(
        PowerElectronicsInfo* self);

    NDDSUSERDllExport
    void PowerElectronicsInfo_finalize_ex(
        PowerElectronicsInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerElectronicsInfo_finalize_w_params(
        PowerElectronicsInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerElectronicsInfo_finalize_optional_members(
        PowerElectronicsInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerElectronicsInfo_copy(
        PowerElectronicsInfo* dst,
        const PowerElectronicsInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerElectronicsStateTYPENAME;

    struct PowerElectronicsStateSeq;
    class PowerElectronicsState 
    {
      public:
        typedef struct PowerElectronicsStateSeq Seq;

        DDS_Float   temperature ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerElectronicsState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerElectronicsState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerElectronicsState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerElectronicsState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerElectronicsStateSeq, PowerElectronicsState);

    NDDSUSERDllExport
    RTIBool PowerElectronicsState_initialize(
        PowerElectronicsState* self);

    NDDSUSERDllExport
    RTIBool PowerElectronicsState_initialize_ex(
        PowerElectronicsState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerElectronicsState_initialize_w_params(
        PowerElectronicsState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerElectronicsState_finalize_w_return(
        PowerElectronicsState* self);

    NDDSUSERDllExport
    void PowerElectronicsState_finalize(
        PowerElectronicsState* self);

    NDDSUSERDllExport
    void PowerElectronicsState_finalize_ex(
        PowerElectronicsState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerElectronicsState_finalize_w_params(
        PowerElectronicsState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerElectronicsState_finalize_optional_members(
        PowerElectronicsState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerElectronicsState_copy(
        PowerElectronicsState* dst,
        const PowerElectronicsState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_UnsignedShort   StorageCellNumber ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * StorageCellNumber_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *StorageCellNumber_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageCellNumber_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageCellNumber_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(StorageCellNumberSeq, StorageCellNumber);

    NDDSUSERDllExport
    RTIBool StorageCellNumber_initialize(
        StorageCellNumber* self);

    NDDSUSERDllExport
    RTIBool StorageCellNumber_initialize_ex(
        StorageCellNumber* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool StorageCellNumber_initialize_w_params(
        StorageCellNumber* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool StorageCellNumber_finalize_w_return(
        StorageCellNumber* self);

    NDDSUSERDllExport
    void StorageCellNumber_finalize(
        StorageCellNumber* self);

    NDDSUSERDllExport
    void StorageCellNumber_finalize_ex(
        StorageCellNumber* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void StorageCellNumber_finalize_w_params(
        StorageCellNumber* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void StorageCellNumber_finalize_optional_members(
        StorageCellNumber* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool StorageCellNumber_copy(
        StorageCellNumber* dst,
        const StorageCellNumber* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedShort ONLY_CELL= 0U;
    static const DDS_UnsignedShort MAXLEN_storageCells= 50U;

    extern const char *StorageCellStateTYPENAME;

    struct StorageCellStateSeq;
    class StorageCellState 
    {
      public:
        typedef struct StorageCellStateSeq Seq;

        DDS_UnsignedShort   cellNumber ;
        DDS_Float   cycleCounter ;
        DDS_Float   stateOfCharge ;
        DDS_Float   temperature ;
        DDS_Float   voltage ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * StorageCellState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *StorageCellState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageCellState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageCellState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(StorageCellStateSeq, StorageCellState);

    NDDSUSERDllExport
    RTIBool StorageCellState_initialize(
        StorageCellState* self);

    NDDSUSERDllExport
    RTIBool StorageCellState_initialize_ex(
        StorageCellState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool StorageCellState_initialize_w_params(
        StorageCellState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool StorageCellState_finalize_w_return(
        StorageCellState* self);

    NDDSUSERDllExport
    void StorageCellState_finalize(
        StorageCellState* self);

    NDDSUSERDllExport
    void StorageCellState_finalize_ex(
        StorageCellState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void StorageCellState_finalize_w_params(
        StorageCellState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void StorageCellState_finalize_optional_members(
        StorageCellState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool StorageCellState_copy(
        StorageCellState* dst,
        const StorageCellState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong StorageCellStateSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong StorageCellStateSequence_MAXLEN= (tms::MAXLEN_storageCells);
    typedef     tms::StorageCellStateSeq  StorageCellStateSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * StorageCellStateSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *StorageCellStateSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageCellStateSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageCellStateSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(StorageCellStateSequenceSeq, StorageCellStateSequence);

    NDDSUSERDllExport
    RTIBool StorageCellStateSequence_initialize(
        StorageCellStateSequence* self);

    NDDSUSERDllExport
    RTIBool StorageCellStateSequence_initialize_ex(
        StorageCellStateSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool StorageCellStateSequence_initialize_w_params(
        StorageCellStateSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool StorageCellStateSequence_finalize_w_return(
        StorageCellStateSequence* self);

    NDDSUSERDllExport
    void StorageCellStateSequence_finalize(
        StorageCellStateSequence* self);

    NDDSUSERDllExport
    void StorageCellStateSequence_finalize_ex(
        StorageCellStateSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void StorageCellStateSequence_finalize_w_params(
        StorageCellStateSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void StorageCellStateSequence_finalize_optional_members(
        StorageCellStateSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool StorageCellStateSequence_copy(
        StorageCellStateSequence* dst,
        const StorageCellStateSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *EnergyStorageStateTYPENAME;

    struct EnergyStorageStateSeq;
    class EnergyStorageState 
    {
      public:
        typedef struct EnergyStorageStateSeq Seq;

        DDS_Float   minTemperature ;
        DDS_Float   averageTemperature ;
        DDS_Float   maxTemperature ;
        DDS_Float   runTime ;
        tms::StorageCellStateSequence   storageCells ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * EnergyStorageState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EnergyStorageState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnergyStorageState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnergyStorageState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EnergyStorageStateSeq, EnergyStorageState);

    NDDSUSERDllExport
    RTIBool EnergyStorageState_initialize(
        EnergyStorageState* self);

    NDDSUSERDllExport
    RTIBool EnergyStorageState_initialize_ex(
        EnergyStorageState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EnergyStorageState_initialize_w_params(
        EnergyStorageState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EnergyStorageState_finalize_w_return(
        EnergyStorageState* self);

    NDDSUSERDllExport
    void EnergyStorageState_finalize(
        EnergyStorageState* self);

    NDDSUSERDllExport
    void EnergyStorageState_finalize_ex(
        EnergyStorageState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EnergyStorageState_finalize_w_params(
        EnergyStorageState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EnergyStorageState_finalize_optional_members(
        EnergyStorageState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EnergyStorageState_copy(
        EnergyStorageState* dst,
        const EnergyStorageState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *EnergyStorageInfoTYPENAME;

    struct EnergyStorageInfoSeq;
    class EnergyStorageInfo 
    {
      public:
        typedef struct EnergyStorageInfoSeq Seq;

        DDS_Float   highStateOfCharge ;
        DDS_Float   lowStateOfCharge ;
        DDS_Float   minTemperature ;
        DDS_Float   nomTemperature ;
        DDS_Float   maxTemperature ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * EnergyStorageInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EnergyStorageInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnergyStorageInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnergyStorageInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EnergyStorageInfoSeq, EnergyStorageInfo);

    NDDSUSERDllExport
    RTIBool EnergyStorageInfo_initialize(
        EnergyStorageInfo* self);

    NDDSUSERDllExport
    RTIBool EnergyStorageInfo_initialize_ex(
        EnergyStorageInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EnergyStorageInfo_initialize_w_params(
        EnergyStorageInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EnergyStorageInfo_finalize_w_return(
        EnergyStorageInfo* self);

    NDDSUSERDllExport
    void EnergyStorageInfo_finalize(
        EnergyStorageInfo* self);

    NDDSUSERDllExport
    void EnergyStorageInfo_finalize_ex(
        EnergyStorageInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EnergyStorageInfo_finalize_w_params(
        EnergyStorageInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EnergyStorageInfo_finalize_optional_members(
        EnergyStorageInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EnergyStorageInfo_copy(
        EnergyStorageInfo* dst,
        const EnergyStorageInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *GeneratorInfoTYPENAME;

    struct GeneratorInfoSeq;
    class GeneratorInfo 
    {
      public:
        typedef struct GeneratorInfoSeq Seq;

        DDS_Float   minFieldCurrent ;
        DDS_Float   maxFieldCurrent ;
        DDS_Float   maxStatorTemperature ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GeneratorInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GeneratorInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GeneratorInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GeneratorInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(GeneratorInfoSeq, GeneratorInfo);

    NDDSUSERDllExport
    RTIBool GeneratorInfo_initialize(
        GeneratorInfo* self);

    NDDSUSERDllExport
    RTIBool GeneratorInfo_initialize_ex(
        GeneratorInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GeneratorInfo_initialize_w_params(
        GeneratorInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GeneratorInfo_finalize_w_return(
        GeneratorInfo* self);

    NDDSUSERDllExport
    void GeneratorInfo_finalize(
        GeneratorInfo* self);

    NDDSUSERDllExport
    void GeneratorInfo_finalize_ex(
        GeneratorInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GeneratorInfo_finalize_w_params(
        GeneratorInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GeneratorInfo_finalize_optional_members(
        GeneratorInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GeneratorInfo_copy(
        GeneratorInfo* dst,
        const GeneratorInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *GeneratorStateTYPENAME;

    struct GeneratorStateSeq;
    class GeneratorState 
    {
      public:
        typedef struct GeneratorStateSeq Seq;

        DDS_Float   fieldCurrent ;
        DDS_Float   statorTemperature ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GeneratorState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GeneratorState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GeneratorState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GeneratorState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(GeneratorStateSeq, GeneratorState);

    NDDSUSERDllExport
    RTIBool GeneratorState_initialize(
        GeneratorState* self);

    NDDSUSERDllExport
    RTIBool GeneratorState_initialize_ex(
        GeneratorState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GeneratorState_initialize_w_params(
        GeneratorState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GeneratorState_finalize_w_return(
        GeneratorState* self);

    NDDSUSERDllExport
    void GeneratorState_finalize(
        GeneratorState* self);

    NDDSUSERDllExport
    void GeneratorState_finalize_ex(
        GeneratorState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GeneratorState_finalize_w_params(
        GeneratorState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GeneratorState_finalize_optional_members(
        GeneratorState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GeneratorState_copy(
        GeneratorState* dst,
        const GeneratorState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *EngineInfoTYPENAME;

    struct EngineInfoSeq;
    class EngineInfo 
    {
      public:
        typedef struct EngineInfoSeq Seq;

        DDS_Float   minOilPressure ;
        DDS_Float   maxOilPressure ;
        DDS_Float   minCoolantTemperature ;
        DDS_Float   maxCoolantTemperature ;
        DDS_Float   minEngineSpeed ;
        DDS_Float   maxEngineSpeed ;
        DDS_Float   minWetStackPreventionLoad ;
        DDS_Float   minWetStackMitigationLoad ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * EngineInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EngineInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EngineInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EngineInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EngineInfoSeq, EngineInfo);

    NDDSUSERDllExport
    RTIBool EngineInfo_initialize(
        EngineInfo* self);

    NDDSUSERDllExport
    RTIBool EngineInfo_initialize_ex(
        EngineInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EngineInfo_initialize_w_params(
        EngineInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EngineInfo_finalize_w_return(
        EngineInfo* self);

    NDDSUSERDllExport
    void EngineInfo_finalize(
        EngineInfo* self);

    NDDSUSERDllExport
    void EngineInfo_finalize_ex(
        EngineInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EngineInfo_finalize_w_params(
        EngineInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EngineInfo_finalize_optional_members(
        EngineInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EngineInfo_copy(
        EngineInfo* dst,
        const EngineInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum EngineOperatingState
    {
        EOS_UNKNOWN , 
        EOS_STOPPED , 
        EOS_HEATING , 
        EOS_STARTING , 
        EOS_IDLING , 
        EOS_WARMUP , 
        EOS_RUNNING , 
        EOS_COOLDOWN , 
        EOS_STOPPING , 
        EOS_DISABLED 
    } EngineOperatingState;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * EngineOperatingState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EngineOperatingState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EngineOperatingState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EngineOperatingState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EngineOperatingStateSeq, EngineOperatingState);

    NDDSUSERDllExport
    RTIBool EngineOperatingState_initialize(
        EngineOperatingState* self);

    NDDSUSERDllExport
    RTIBool EngineOperatingState_initialize_ex(
        EngineOperatingState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EngineOperatingState_initialize_w_params(
        EngineOperatingState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EngineOperatingState_finalize_w_return(
        EngineOperatingState* self);

    NDDSUSERDllExport
    void EngineOperatingState_finalize(
        EngineOperatingState* self);

    NDDSUSERDllExport
    void EngineOperatingState_finalize_ex(
        EngineOperatingState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EngineOperatingState_finalize_w_params(
        EngineOperatingState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EngineOperatingState_finalize_optional_members(
        EngineOperatingState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EngineOperatingState_copy(
        EngineOperatingState* dst,
        const EngineOperatingState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *EngineStateTYPENAME;

    struct EngineStateSeq;
    class EngineState 
    {
      public:
        typedef struct EngineStateSeq Seq;

        tms::EngineOperatingState   operatingState ;
        DDS_Float   oilPressure ;
        DDS_Float   coolantTemperature ;
        DDS_Float   speed ;
        DDS_Float   * wetStack ;
        DDS_Float   engineRuntime ;
        DDS_Float   * fuelConsumptionRate ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * EngineState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EngineState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EngineState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EngineState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EngineStateSeq, EngineState);

    NDDSUSERDllExport
    RTIBool EngineState_initialize(
        EngineState* self);

    NDDSUSERDllExport
    RTIBool EngineState_initialize_ex(
        EngineState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EngineState_initialize_w_params(
        EngineState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EngineState_finalize_w_return(
        EngineState* self);

    NDDSUSERDllExport
    void EngineState_finalize(
        EngineState* self);

    NDDSUSERDllExport
    void EngineState_finalize_ex(
        EngineState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EngineState_finalize_w_params(
        EngineState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EngineState_finalize_optional_members(
        EngineState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EngineState_copy(
        EngineState* dst,
        const EngineState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *FuelInfoTYPENAME;

    struct FuelInfoSeq;
    class FuelInfo 
    {
      public:
        typedef struct FuelInfoSeq Seq;

        DDS_Float   maxFuelLevel ;
        DDS_Float   lowFuelLevelCutoff ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * FuelInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *FuelInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *FuelInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *FuelInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(FuelInfoSeq, FuelInfo);

    NDDSUSERDllExport
    RTIBool FuelInfo_initialize(
        FuelInfo* self);

    NDDSUSERDllExport
    RTIBool FuelInfo_initialize_ex(
        FuelInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool FuelInfo_initialize_w_params(
        FuelInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool FuelInfo_finalize_w_return(
        FuelInfo* self);

    NDDSUSERDllExport
    void FuelInfo_finalize(
        FuelInfo* self);

    NDDSUSERDllExport
    void FuelInfo_finalize_ex(
        FuelInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void FuelInfo_finalize_w_params(
        FuelInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void FuelInfo_finalize_optional_members(
        FuelInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool FuelInfo_copy(
        FuelInfo* dst,
        const FuelInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *FuelStateTYPENAME;

    struct FuelStateSeq;
    class FuelState 
    {
      public:
        typedef struct FuelStateSeq Seq;

        DDS_Float   fuelLevel ;
        DDS_Boolean   fuelPumpRunning ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * FuelState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *FuelState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *FuelState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *FuelState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(FuelStateSeq, FuelState);

    NDDSUSERDllExport
    RTIBool FuelState_initialize(
        FuelState* self);

    NDDSUSERDllExport
    RTIBool FuelState_initialize_ex(
        FuelState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool FuelState_initialize_w_params(
        FuelState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool FuelState_finalize_w_return(
        FuelState* self);

    NDDSUSERDllExport
    void FuelState_finalize(
        FuelState* self);

    NDDSUSERDllExport
    void FuelState_finalize_ex(
        FuelState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void FuelState_finalize_w_params(
        FuelState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void FuelState_finalize_optional_members(
        FuelState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool FuelState_copy(
        FuelState* dst,
        const FuelState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *LoadStepResponseTYPENAME;

    struct LoadStepResponseSeq;
    class LoadStepResponse 
    {
      public:
        typedef struct LoadStepResponseSeq Seq;

        DDS_Float   loadStepLowRealPower ;
        DDS_Float   loadStepHighRealPower ;
        DDS_Float   loadStepLowReactivePower ;
        DDS_Float   loadStepHighReactivePower ;
        tms::Curve2D   loadAcceptanceFrequency ;
        tms::Curve2D   loadAcceptanceVoltage ;
        tms::Curve2D   loadAcceptanceRealPower ;
        tms::Curve2D   loadAcceptanceReactivePower ;
        tms::Curve2D   loadRejectionFrequency ;
        tms::Curve2D   loadRejectionVoltage ;
        tms::Curve2D   loadRejectionRealPower ;
        tms::Curve2D   loadRejectionReactivePower ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * LoadStepResponse_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LoadStepResponse_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadStepResponse_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadStepResponse_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LoadStepResponseSeq, LoadStepResponse);

    NDDSUSERDllExport
    RTIBool LoadStepResponse_initialize(
        LoadStepResponse* self);

    NDDSUSERDllExport
    RTIBool LoadStepResponse_initialize_ex(
        LoadStepResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LoadStepResponse_initialize_w_params(
        LoadStepResponse* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LoadStepResponse_finalize_w_return(
        LoadStepResponse* self);

    NDDSUSERDllExport
    void LoadStepResponse_finalize(
        LoadStepResponse* self);

    NDDSUSERDllExport
    void LoadStepResponse_finalize_ex(
        LoadStepResponse* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LoadStepResponse_finalize_w_params(
        LoadStepResponse* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LoadStepResponse_finalize_optional_members(
        LoadStepResponse* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LoadStepResponse_copy(
        LoadStepResponse* dst,
        const LoadStepResponse* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong LoadStepResponseSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong LoadStepResponseSequence_MAXLEN= 16UL;
    typedef     tms::LoadStepResponseSeq  LoadStepResponseSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * LoadStepResponseSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LoadStepResponseSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadStepResponseSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadStepResponseSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LoadStepResponseSequenceSeq, LoadStepResponseSequence);

    NDDSUSERDllExport
    RTIBool LoadStepResponseSequence_initialize(
        LoadStepResponseSequence* self);

    NDDSUSERDllExport
    RTIBool LoadStepResponseSequence_initialize_ex(
        LoadStepResponseSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LoadStepResponseSequence_initialize_w_params(
        LoadStepResponseSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LoadStepResponseSequence_finalize_w_return(
        LoadStepResponseSequence* self);

    NDDSUSERDllExport
    void LoadStepResponseSequence_finalize(
        LoadStepResponseSequence* self);

    NDDSUSERDllExport
    void LoadStepResponseSequence_finalize_ex(
        LoadStepResponseSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LoadStepResponseSequence_finalize_w_params(
        LoadStepResponseSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LoadStepResponseSequence_finalize_optional_members(
        LoadStepResponseSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LoadStepResponseSequence_copy(
        LoadStepResponseSequence* dst,
        const LoadStepResponseSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *LoadSharingInfoTYPENAME;

    struct LoadSharingInfoSeq;
    class LoadSharingInfo 
    {
      public:
        typedef struct LoadSharingInfoSeq Seq;

        DDS_Long   portNumber ;
        DDS_Boolean   supportsDroop ;
        DDS_Boolean   supportsMultiSegmentDroop ;
        DDS_Boolean   supportsConstantPower ;
        DDS_Float   minRealPower ;
        DDS_Float   maxRealPower ;
        tms::Curve2D   * maxOverloadRealPower ;
        DDS_Float   minReactivePower ;
        DDS_Float   maxReactivePower ;
        DDS_Float   maxApparentPower ;
        DDS_Float   powerFactor ;
        tms::LoadStepResponseSequence   * loadResponse ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * LoadSharingInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LoadSharingInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LoadSharingInfoSeq, LoadSharingInfo);

    NDDSUSERDllExport
    RTIBool LoadSharingInfo_initialize(
        LoadSharingInfo* self);

    NDDSUSERDllExport
    RTIBool LoadSharingInfo_initialize_ex(
        LoadSharingInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LoadSharingInfo_initialize_w_params(
        LoadSharingInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LoadSharingInfo_finalize_w_return(
        LoadSharingInfo* self);

    NDDSUSERDllExport
    void LoadSharingInfo_finalize(
        LoadSharingInfo* self);

    NDDSUSERDllExport
    void LoadSharingInfo_finalize_ex(
        LoadSharingInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LoadSharingInfo_finalize_w_params(
        LoadSharingInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LoadSharingInfo_finalize_optional_members(
        LoadSharingInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LoadSharingInfo_copy(
        LoadSharingInfo* dst,
        const LoadSharingInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong LoadSharingInfoSequence_MINLEN= 1UL;
    static const DDS_UnsignedLong LoadSharingInfoSequence_MAXLEN= (tms::MAX_PORTS);
    typedef     tms::LoadSharingInfoSeq  LoadSharingInfoSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * LoadSharingInfoSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LoadSharingInfoSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingInfoSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingInfoSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LoadSharingInfoSequenceSeq, LoadSharingInfoSequence);

    NDDSUSERDllExport
    RTIBool LoadSharingInfoSequence_initialize(
        LoadSharingInfoSequence* self);

    NDDSUSERDllExport
    RTIBool LoadSharingInfoSequence_initialize_ex(
        LoadSharingInfoSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LoadSharingInfoSequence_initialize_w_params(
        LoadSharingInfoSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LoadSharingInfoSequence_finalize_w_return(
        LoadSharingInfoSequence* self);

    NDDSUSERDllExport
    void LoadSharingInfoSequence_finalize(
        LoadSharingInfoSequence* self);

    NDDSUSERDllExport
    void LoadSharingInfoSequence_finalize_ex(
        LoadSharingInfoSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LoadSharingInfoSequence_finalize_w_params(
        LoadSharingInfoSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LoadSharingInfoSequence_finalize_optional_members(
        LoadSharingInfoSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LoadSharingInfoSequence_copy(
        LoadSharingInfoSequence* dst,
        const LoadSharingInfoSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *StorageInfoTYPENAME;

    struct StorageInfoSeq;
    class StorageInfo 
    {
      public:
        typedef struct StorageInfoSeq Seq;

        tms::StorageFeatureSequence   features ;
        DDS_Float   maxChargeEnergy ;
        tms::LoadSharingInfo   loadSharing ;
        tms::EnergyStartStopLevelSequence   supportedEnergyStartStopLevels ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * StorageInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *StorageInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(StorageInfoSeq, StorageInfo);

    NDDSUSERDllExport
    RTIBool StorageInfo_initialize(
        StorageInfo* self);

    NDDSUSERDllExport
    RTIBool StorageInfo_initialize_ex(
        StorageInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool StorageInfo_initialize_w_params(
        StorageInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool StorageInfo_finalize_w_return(
        StorageInfo* self);

    NDDSUSERDllExport
    void StorageInfo_finalize(
        StorageInfo* self);

    NDDSUSERDllExport
    void StorageInfo_finalize_ex(
        StorageInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void StorageInfo_finalize_w_params(
        StorageInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void StorageInfo_finalize_optional_members(
        StorageInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool StorageInfo_copy(
        StorageInfo* dst,
        const StorageInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ControlHardwareInfoTYPENAME;

    struct ControlHardwareInfoSeq;
    class ControlHardwareInfo 
    {
      public:
        typedef struct ControlHardwareInfoSeq Seq;

        DDS_Boolean   hasRealtimeClock ;
        DDS_Float   minTemperature ;
        DDS_Float   maxTemperature ;
        DDS_UnsignedShort   numNetworkPorts ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ControlHardwareInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ControlHardwareInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlHardwareInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlHardwareInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ControlHardwareInfoSeq, ControlHardwareInfo);

    NDDSUSERDllExport
    RTIBool ControlHardwareInfo_initialize(
        ControlHardwareInfo* self);

    NDDSUSERDllExport
    RTIBool ControlHardwareInfo_initialize_ex(
        ControlHardwareInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ControlHardwareInfo_initialize_w_params(
        ControlHardwareInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ControlHardwareInfo_finalize_w_return(
        ControlHardwareInfo* self);

    NDDSUSERDllExport
    void ControlHardwareInfo_finalize(
        ControlHardwareInfo* self);

    NDDSUSERDllExport
    void ControlHardwareInfo_finalize_ex(
        ControlHardwareInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ControlHardwareInfo_finalize_w_params(
        ControlHardwareInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ControlHardwareInfo_finalize_optional_members(
        ControlHardwareInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ControlHardwareInfo_copy(
        ControlHardwareInfo* dst,
        const ControlHardwareInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ControlHardwareUpdateTYPENAME;

    struct ControlHardwareUpdateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ControlHardwareUpdateTypeSupport;
    class ControlHardwareUpdateDataWriter;
    class ControlHardwareUpdateDataReader;
    #endif
    class ControlHardwareUpdate 
    {
      public:
        typedef struct ControlHardwareUpdateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ControlHardwareUpdateTypeSupport TypeSupport;
        typedef ControlHardwareUpdateDataWriter DataWriter;
        typedef ControlHardwareUpdateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        tms::ClockMonotonic   timestamp ;
        DDS_Float   processorUsage ;
        DDS_Float   memoryUsage ;
        DDS_Float   networkUsage ;
        DDS_Float   storageUsage ;
        DDS_Float   temperature ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ControlHardwareUpdate_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ControlHardwareUpdate_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlHardwareUpdate_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlHardwareUpdate_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ControlHardwareUpdateSeq, ControlHardwareUpdate);

    NDDSUSERDllExport
    RTIBool ControlHardwareUpdate_initialize(
        ControlHardwareUpdate* self);

    NDDSUSERDllExport
    RTIBool ControlHardwareUpdate_initialize_ex(
        ControlHardwareUpdate* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ControlHardwareUpdate_initialize_w_params(
        ControlHardwareUpdate* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ControlHardwareUpdate_finalize_w_return(
        ControlHardwareUpdate* self);

    NDDSUSERDllExport
    void ControlHardwareUpdate_finalize(
        ControlHardwareUpdate* self);

    NDDSUSERDllExport
    void ControlHardwareUpdate_finalize_ex(
        ControlHardwareUpdate* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ControlHardwareUpdate_finalize_w_params(
        ControlHardwareUpdate* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ControlHardwareUpdate_finalize_optional_members(
        ControlHardwareUpdate* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ControlHardwareUpdate_copy(
        ControlHardwareUpdate* dst,
        const ControlHardwareUpdate* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerHardwareInfoTYPENAME;

    struct PowerHardwareInfoSeq;
    class PowerHardwareInfo 
    {
      public:
        typedef struct PowerHardwareInfoSeq Seq;

        tms::EngineInfo   * engine ;
        tms::FuelInfo   * fuel ;
        tms::GeneratorInfo   * generator ;
        tms::EnergyStorageInfo   * energyStorage ;
        tms::PowerElectronicsInfo   * powerElectronics ;
        tms::ThermalInfo   * thermal ;
        tms::SynchronousMachineCoefficients   * synchronousMachineModel ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerHardwareInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerHardwareInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerHardwareInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerHardwareInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerHardwareInfoSeq, PowerHardwareInfo);

    NDDSUSERDllExport
    RTIBool PowerHardwareInfo_initialize(
        PowerHardwareInfo* self);

    NDDSUSERDllExport
    RTIBool PowerHardwareInfo_initialize_ex(
        PowerHardwareInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerHardwareInfo_initialize_w_params(
        PowerHardwareInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerHardwareInfo_finalize_w_return(
        PowerHardwareInfo* self);

    NDDSUSERDllExport
    void PowerHardwareInfo_finalize(
        PowerHardwareInfo* self);

    NDDSUSERDllExport
    void PowerHardwareInfo_finalize_ex(
        PowerHardwareInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerHardwareInfo_finalize_w_params(
        PowerHardwareInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerHardwareInfo_finalize_optional_members(
        PowerHardwareInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerHardwareInfo_copy(
        PowerHardwareInfo* dst,
        const PowerHardwareInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerHardwareUpdateTYPENAME;

    struct PowerHardwareUpdateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PowerHardwareUpdateTypeSupport;
    class PowerHardwareUpdateDataWriter;
    class PowerHardwareUpdateDataReader;
    #endif
    class PowerHardwareUpdate 
    {
      public:
        typedef struct PowerHardwareUpdateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PowerHardwareUpdateTypeSupport TypeSupport;
        typedef PowerHardwareUpdateDataWriter DataWriter;
        typedef PowerHardwareUpdateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        tms::ClockMonotonic   timestamp ;
        tms::EngineState   * engine ;
        tms::FuelState   * fuel ;
        tms::GeneratorState   * generator ;
        tms::EnergyStorageState   * energyStorage ;
        tms::PowerElectronicsState   * powerElectronics ;
        tms::ThermalState   * thermal ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerHardwareUpdate_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerHardwareUpdate_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerHardwareUpdate_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerHardwareUpdate_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerHardwareUpdateSeq, PowerHardwareUpdate);

    NDDSUSERDllExport
    RTIBool PowerHardwareUpdate_initialize(
        PowerHardwareUpdate* self);

    NDDSUSERDllExport
    RTIBool PowerHardwareUpdate_initialize_ex(
        PowerHardwareUpdate* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerHardwareUpdate_initialize_w_params(
        PowerHardwareUpdate* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerHardwareUpdate_finalize_w_return(
        PowerHardwareUpdate* self);

    NDDSUSERDllExport
    void PowerHardwareUpdate_finalize(
        PowerHardwareUpdate* self);

    NDDSUSERDllExport
    void PowerHardwareUpdate_finalize_ex(
        PowerHardwareUpdate* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerHardwareUpdate_finalize_w_params(
        PowerHardwareUpdate* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerHardwareUpdate_finalize_optional_members(
        PowerHardwareUpdate* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerHardwareUpdate_copy(
        PowerHardwareUpdate* dst,
        const PowerHardwareUpdate* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *DiagnosticTroubleCodeTYPENAME;

    struct DiagnosticTroubleCodeSeq;
    class DiagnosticTroubleCode 
    {
      public:
        typedef struct DiagnosticTroubleCodeSeq Seq;

        DDS_Long   * portNumber ;
        DDS_UnsignedLong   suspectParameter ;
        tms::FailureModeIndicator   failureMode ;
        DDS_UnsignedLong   occurrenceCount ;
        tms::ClockMonotonic   timeRaised ;
        tms::DtcSeverity   severity ;
        tms::ClockMonotonic   * estimateTime ;
        tms::DtcSeverity   * estimateSeverity ;
        DDS_Char *   hint ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DiagnosticTroubleCode_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DiagnosticTroubleCode_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DiagnosticTroubleCode_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DiagnosticTroubleCode_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DiagnosticTroubleCodeSeq, DiagnosticTroubleCode);

    NDDSUSERDllExport
    RTIBool DiagnosticTroubleCode_initialize(
        DiagnosticTroubleCode* self);

    NDDSUSERDllExport
    RTIBool DiagnosticTroubleCode_initialize_ex(
        DiagnosticTroubleCode* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DiagnosticTroubleCode_initialize_w_params(
        DiagnosticTroubleCode* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DiagnosticTroubleCode_finalize_w_return(
        DiagnosticTroubleCode* self);

    NDDSUSERDllExport
    void DiagnosticTroubleCode_finalize(
        DiagnosticTroubleCode* self);

    NDDSUSERDllExport
    void DiagnosticTroubleCode_finalize_ex(
        DiagnosticTroubleCode* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DiagnosticTroubleCode_finalize_w_params(
        DiagnosticTroubleCode* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DiagnosticTroubleCode_finalize_optional_members(
        DiagnosticTroubleCode* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DiagnosticTroubleCode_copy(
        DiagnosticTroubleCode* dst,
        const DiagnosticTroubleCode* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong DiagnosticTroubleCodeSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong DiagnosticTroubleCodeSequence_MAXLEN= 64UL;
    typedef     tms::DiagnosticTroubleCodeSeq  DiagnosticTroubleCodeSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DiagnosticTroubleCodeSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DiagnosticTroubleCodeSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DiagnosticTroubleCodeSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DiagnosticTroubleCodeSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DiagnosticTroubleCodeSequenceSeq, DiagnosticTroubleCodeSequence);

    NDDSUSERDllExport
    RTIBool DiagnosticTroubleCodeSequence_initialize(
        DiagnosticTroubleCodeSequence* self);

    NDDSUSERDllExport
    RTIBool DiagnosticTroubleCodeSequence_initialize_ex(
        DiagnosticTroubleCodeSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DiagnosticTroubleCodeSequence_initialize_w_params(
        DiagnosticTroubleCodeSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DiagnosticTroubleCodeSequence_finalize_w_return(
        DiagnosticTroubleCodeSequence* self);

    NDDSUSERDllExport
    void DiagnosticTroubleCodeSequence_finalize(
        DiagnosticTroubleCodeSequence* self);

    NDDSUSERDllExport
    void DiagnosticTroubleCodeSequence_finalize_ex(
        DiagnosticTroubleCodeSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DiagnosticTroubleCodeSequence_finalize_w_params(
        DiagnosticTroubleCodeSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DiagnosticTroubleCodeSequence_finalize_optional_members(
        DiagnosticTroubleCodeSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DiagnosticTroubleCodeSequence_copy(
        DiagnosticTroubleCodeSequence* dst,
        const DiagnosticTroubleCodeSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ClockRealtimeTYPENAME;

    struct ClockRealtimeSeq;
    class ClockRealtime 
    {
      public:
        typedef struct ClockRealtimeSeq Seq;

        DDS_UnsignedShort   epoch ;
        DDS_UnsignedLong   seconds ;
        DDS_UnsignedLong   nanoseconds ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ClockRealtime_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ClockRealtime_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ClockRealtime_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ClockRealtime_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ClockRealtimeSeq, ClockRealtime);

    NDDSUSERDllExport
    RTIBool ClockRealtime_initialize(
        ClockRealtime* self);

    NDDSUSERDllExport
    RTIBool ClockRealtime_initialize_ex(
        ClockRealtime* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ClockRealtime_initialize_w_params(
        ClockRealtime* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ClockRealtime_finalize_w_return(
        ClockRealtime* self);

    NDDSUSERDllExport
    void ClockRealtime_finalize(
        ClockRealtime* self);

    NDDSUSERDllExport
    void ClockRealtime_finalize_ex(
        ClockRealtime* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ClockRealtime_finalize_w_params(
        ClockRealtime* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ClockRealtime_finalize_optional_members(
        ClockRealtime* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ClockRealtime_copy(
        ClockRealtime* dst,
        const ClockRealtime* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum ClockSource
    {
        CLOCK_UNKNOWN , 
        CLOCK_ATOMIC , 
        CLOCK_GPS , 
        CLOCK_RADIO , 
        CLOCK_PTP , 
        CLOCK_NTP , 
        CLOCK_HAND , 
        CLOCK_OTHER , 
        CLOCK_INTERNAL 
    } ClockSource;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ClockSource_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ClockSource_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ClockSource_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ClockSource_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ClockSourceSeq, ClockSource);

    NDDSUSERDllExport
    RTIBool ClockSource_initialize(
        ClockSource* self);

    NDDSUSERDllExport
    RTIBool ClockSource_initialize_ex(
        ClockSource* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ClockSource_initialize_w_params(
        ClockSource* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ClockSource_finalize_w_return(
        ClockSource* self);

    NDDSUSERDllExport
    void ClockSource_finalize(
        ClockSource* self);

    NDDSUSERDllExport
    void ClockSource_finalize_ex(
        ClockSource* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ClockSource_finalize_w_params(
        ClockSource* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ClockSource_finalize_optional_members(
        ClockSource* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ClockSource_copy(
        ClockSource* dst,
        const ClockSource* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ClockStateTYPENAME;

    struct ClockStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ClockStateTypeSupport;
    class ClockStateDataWriter;
    class ClockStateDataReader;
    #endif
    class ClockState 
    {
      public:
        typedef struct ClockStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ClockStateTypeSupport TypeSupport;
        typedef ClockStateDataWriter DataWriter;
        typedef ClockStateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        tms::ClockMonotonic   monotonic ;
        tms::ClockMonotonicPersistenceType   monotonicPersistence ;
        tms::ClockRealtime   realtime ;
        tms::ClockSource   realtimeSource ;
        tms::ClockRealtime   realtimeSetTime ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ClockState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ClockState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ClockState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ClockState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ClockStateSeq, ClockState);

    NDDSUSERDllExport
    RTIBool ClockState_initialize(
        ClockState* self);

    NDDSUSERDllExport
    RTIBool ClockState_initialize_ex(
        ClockState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ClockState_initialize_w_params(
        ClockState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ClockState_finalize_w_return(
        ClockState* self);

    NDDSUSERDllExport
    void ClockState_finalize(
        ClockState* self);

    NDDSUSERDllExport
    void ClockState_finalize_ex(
        ClockState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ClockState_finalize_w_params(
        ClockState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ClockState_finalize_optional_members(
        ClockState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ClockState_copy(
        ClockState* dst,
        const ClockState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef    DDS_UnsignedLongLong   RequestSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * RequestSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *RequestSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *RequestSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *RequestSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(RequestSequenceSeq, RequestSequence);

    NDDSUSERDllExport
    RTIBool RequestSequence_initialize(
        RequestSequence* self);

    NDDSUSERDllExport
    RTIBool RequestSequence_initialize_ex(
        RequestSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool RequestSequence_initialize_w_params(
        RequestSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool RequestSequence_finalize_w_return(
        RequestSequence* self);

    NDDSUSERDllExport
    void RequestSequence_finalize(
        RequestSequence* self);

    NDDSUSERDllExport
    void RequestSequence_finalize_ex(
        RequestSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void RequestSequence_finalize_w_params(
        RequestSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void RequestSequence_finalize_optional_members(
        RequestSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool RequestSequence_copy(
        RequestSequence* dst,
        const RequestSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *DeviceConfigRequestTYPENAME;

    struct DeviceConfigRequestSeq;
    class DeviceConfigRequest 
    {
      public:
        typedef struct DeviceConfigRequestSeq Seq;

        DDS_Char *   requestingDeviceId ;
        DDS_Char *   targetDeviceId ;
        tms::ConfigId   config ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DeviceConfigRequest_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DeviceConfigRequest_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceConfigRequest_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceConfigRequest_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DeviceConfigRequestSeq, DeviceConfigRequest);

    NDDSUSERDllExport
    RTIBool DeviceConfigRequest_initialize(
        DeviceConfigRequest* self);

    NDDSUSERDllExport
    RTIBool DeviceConfigRequest_initialize_ex(
        DeviceConfigRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DeviceConfigRequest_initialize_w_params(
        DeviceConfigRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DeviceConfigRequest_finalize_w_return(
        DeviceConfigRequest* self);

    NDDSUSERDllExport
    void DeviceConfigRequest_finalize(
        DeviceConfigRequest* self);

    NDDSUSERDllExport
    void DeviceConfigRequest_finalize_ex(
        DeviceConfigRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DeviceConfigRequest_finalize_w_params(
        DeviceConfigRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DeviceConfigRequest_finalize_optional_members(
        DeviceConfigRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DeviceConfigRequest_copy(
        DeviceConfigRequest* dst,
        const DeviceConfigRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *DeviceRequestTYPENAME;

    struct DeviceRequestSeq;
    class DeviceRequest 
    {
      public:
        typedef struct DeviceRequestSeq Seq;

        DDS_Char *   requestingDeviceId ;
        DDS_Char *   targetDeviceId ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DeviceRequest_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DeviceRequest_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceRequest_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceRequest_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DeviceRequestSeq, DeviceRequest);

    NDDSUSERDllExport
    RTIBool DeviceRequest_initialize(
        DeviceRequest* self);

    NDDSUSERDllExport
    RTIBool DeviceRequest_initialize_ex(
        DeviceRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DeviceRequest_initialize_w_params(
        DeviceRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DeviceRequest_finalize_w_return(
        DeviceRequest* self);

    NDDSUSERDllExport
    void DeviceRequest_finalize(
        DeviceRequest* self);

    NDDSUSERDllExport
    void DeviceRequest_finalize_ex(
        DeviceRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DeviceRequest_finalize_w_params(
        DeviceRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DeviceRequest_finalize_optional_members(
        DeviceRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DeviceRequest_copy(
        DeviceRequest* dst,
        const DeviceRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerPortIdTYPENAME;

    struct PowerPortIdSeq;
    class PowerPortId 
    {
      public:
        typedef struct PowerPortIdSeq Seq;

        DDS_Char *   deviceId ;
        DDS_Long   portNumber ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortId_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortId_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortId_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortId_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortIdSeq, PowerPortId);

    NDDSUSERDllExport
    RTIBool PowerPortId_initialize(
        PowerPortId* self);

    NDDSUSERDllExport
    RTIBool PowerPortId_initialize_ex(
        PowerPortId* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortId_initialize_w_params(
        PowerPortId* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortId_finalize_w_return(
        PowerPortId* self);

    NDDSUSERDllExport
    void PowerPortId_finalize(
        PowerPortId* self);

    NDDSUSERDllExport
    void PowerPortId_finalize_ex(
        PowerPortId* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortId_finalize_w_params(
        PowerPortId* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortId_finalize_optional_members(
        PowerPortId* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortId_copy(
        PowerPortId* dst,
        const PowerPortId* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerConnectorInfoTYPENAME;

    struct PowerConnectorInfoSeq;
    class PowerConnectorInfo 
    {
      public:
        typedef struct PowerConnectorInfoSeq Seq;

        tms::PowerConnectorFeatureSequence   features ;
        tms::PowerConnectorType   physicalType ;
        tms::PowerConnectorPolarity   polarity ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerConnectorInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerConnectorInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectorInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectorInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerConnectorInfoSeq, PowerConnectorInfo);

    NDDSUSERDllExport
    RTIBool PowerConnectorInfo_initialize(
        PowerConnectorInfo* self);

    NDDSUSERDllExport
    RTIBool PowerConnectorInfo_initialize_ex(
        PowerConnectorInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerConnectorInfo_initialize_w_params(
        PowerConnectorInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerConnectorInfo_finalize_w_return(
        PowerConnectorInfo* self);

    NDDSUSERDllExport
    void PowerConnectorInfo_finalize(
        PowerConnectorInfo* self);

    NDDSUSERDllExport
    void PowerConnectorInfo_finalize_ex(
        PowerConnectorInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerConnectorInfo_finalize_w_params(
        PowerConnectorInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerConnectorInfo_finalize_optional_members(
        PowerConnectorInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerConnectorInfo_copy(
        PowerConnectorInfo* dst,
        const PowerConnectorInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerSwitchInfoTYPENAME;

    struct PowerSwitchInfoSeq;
    class PowerSwitchInfo 
    {
      public:
        typedef struct PowerSwitchInfoSeq Seq;

        tms::PowerSwitchFeatureSequence   features ;
        DDS_Float   interruptAmperage ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerSwitchInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerSwitchInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerSwitchInfoSeq, PowerSwitchInfo);

    NDDSUSERDllExport
    RTIBool PowerSwitchInfo_initialize(
        PowerSwitchInfo* self);

    NDDSUSERDllExport
    RTIBool PowerSwitchInfo_initialize_ex(
        PowerSwitchInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerSwitchInfo_initialize_w_params(
        PowerSwitchInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerSwitchInfo_finalize_w_return(
        PowerSwitchInfo* self);

    NDDSUSERDllExport
    void PowerSwitchInfo_finalize(
        PowerSwitchInfo* self);

    NDDSUSERDllExport
    void PowerSwitchInfo_finalize_ex(
        PowerSwitchInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerSwitchInfo_finalize_w_params(
        PowerSwitchInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerSwitchInfo_finalize_optional_members(
        PowerSwitchInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerSwitchInfo_copy(
        PowerSwitchInfo* dst,
        const PowerSwitchInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerPortInfoTYPENAME;

    struct PowerPortInfoSeq;
    class PowerPortInfo 
    {
      public:
        typedef struct PowerPortInfoSeq Seq;

        DDS_Long   portNumber ;
        tms::CircuitWiring   wiring ;
        tms::PowerPortDirectionality   directionality ;
        DDS_Boolean   hasSwitch ;
        DDS_Boolean   hasExternalMeter ;
        DDS_Boolean   hasInternalMeter ;
        DDS_Boolean   hasSummaryMeasurementUpdate ;
        DDS_Float   minAmperage ;
        DDS_Float   maxAmperage ;
        DDS_Float   shortCircuitAmperage ;
        DDS_Float   minVoltage ;
        DDS_Float   maxVoltage ;
        DDS_Float   * minFrequency ;
        DDS_Float   * maxFrequency ;
        tms::PowerConnectorInfo   connectorInfo ;
        tms::PowerSwitchInfo   * switchInfo ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortInfoSeq, PowerPortInfo);

    NDDSUSERDllExport
    RTIBool PowerPortInfo_initialize(
        PowerPortInfo* self);

    NDDSUSERDllExport
    RTIBool PowerPortInfo_initialize_ex(
        PowerPortInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortInfo_initialize_w_params(
        PowerPortInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortInfo_finalize_w_return(
        PowerPortInfo* self);

    NDDSUSERDllExport
    void PowerPortInfo_finalize(
        PowerPortInfo* self);

    NDDSUSERDllExport
    void PowerPortInfo_finalize_ex(
        PowerPortInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortInfo_finalize_w_params(
        PowerPortInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortInfo_finalize_optional_members(
        PowerPortInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortInfo_copy(
        PowerPortInfo* dst,
        const PowerPortInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong PowerPortInfoSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong PowerPortInfoSequence_MAXLEN= (tms::MAX_PORTS);
    typedef     tms::PowerPortInfoSeq  PowerPortInfoSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortInfoSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortInfoSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortInfoSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortInfoSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortInfoSequenceSeq, PowerPortInfoSequence);

    NDDSUSERDllExport
    RTIBool PowerPortInfoSequence_initialize(
        PowerPortInfoSequence* self);

    NDDSUSERDllExport
    RTIBool PowerPortInfoSequence_initialize_ex(
        PowerPortInfoSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortInfoSequence_initialize_w_params(
        PowerPortInfoSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortInfoSequence_finalize_w_return(
        PowerPortInfoSequence* self);

    NDDSUSERDllExport
    void PowerPortInfoSequence_finalize(
        PowerPortInfoSequence* self);

    NDDSUSERDllExport
    void PowerPortInfoSequence_finalize_ex(
        PowerPortInfoSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortInfoSequence_finalize_w_params(
        PowerPortInfoSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortInfoSequence_finalize_optional_members(
        PowerPortInfoSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortInfoSequence_copy(
        PowerPortInfoSequence* dst,
        const PowerPortInfoSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    typedef enum PowerSwitchTransitionCode
    {
        PSTC_UNKNOWN , 
        PSTC_NONE , 
        PSTC_IN_PROGRESS , 
        PSTC_PENDING_SYNC , 
        PSTC_PENDING_SWITCH_CONDITIONS , 
        PSTC_PENDING_INTERLOCK , 
        PSTC_COMPLETE , 
        PSTC_MANUAL_OVERRIDE , 
        PSTC_AUTO_OVERRIDE , 
        PSTC_AUTO_LOCK , 
        PSTC_MALFUNCTION 
    } PowerSwitchTransitionCode;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerSwitchTransitionCode_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerSwitchTransitionCode_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchTransitionCode_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchTransitionCode_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerSwitchTransitionCodeSeq, PowerSwitchTransitionCode);

    NDDSUSERDllExport
    RTIBool PowerSwitchTransitionCode_initialize(
        PowerSwitchTransitionCode* self);

    NDDSUSERDllExport
    RTIBool PowerSwitchTransitionCode_initialize_ex(
        PowerSwitchTransitionCode* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerSwitchTransitionCode_initialize_w_params(
        PowerSwitchTransitionCode* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerSwitchTransitionCode_finalize_w_return(
        PowerSwitchTransitionCode* self);

    NDDSUSERDllExport
    void PowerSwitchTransitionCode_finalize(
        PowerSwitchTransitionCode* self);

    NDDSUSERDllExport
    void PowerSwitchTransitionCode_finalize_ex(
        PowerSwitchTransitionCode* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerSwitchTransitionCode_finalize_w_params(
        PowerSwitchTransitionCode* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerSwitchTransitionCode_finalize_optional_members(
        PowerSwitchTransitionCode* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerSwitchTransitionCode_copy(
        PowerSwitchTransitionCode* dst,
        const PowerSwitchTransitionCode* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerSwitchStatusTYPENAME;

    struct PowerSwitchStatusSeq;
    class PowerSwitchStatus 
    {
      public:
        typedef struct PowerSwitchStatusSeq Seq;

        tms::CircuitContinuity   presentContinuity ;
        tms::CircuitContinuity   futureContinuity ;
        DDS_Boolean   requestLock ;
        tms::PowerSwitchReason   presentContinuityReason ;
        DDS_Char *   presentContinuityActor ;
        tms::PowerSwitchTransitionCode   futureContinuityReason ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerSwitchStatus_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerSwitchStatus_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchStatus_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchStatus_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerSwitchStatusSeq, PowerSwitchStatus);

    NDDSUSERDllExport
    RTIBool PowerSwitchStatus_initialize(
        PowerSwitchStatus* self);

    NDDSUSERDllExport
    RTIBool PowerSwitchStatus_initialize_ex(
        PowerSwitchStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerSwitchStatus_initialize_w_params(
        PowerSwitchStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerSwitchStatus_finalize_w_return(
        PowerSwitchStatus* self);

    NDDSUSERDllExport
    void PowerSwitchStatus_finalize(
        PowerSwitchStatus* self);

    NDDSUSERDllExport
    void PowerSwitchStatus_finalize_ex(
        PowerSwitchStatus* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerSwitchStatus_finalize_w_params(
        PowerSwitchStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerSwitchStatus_finalize_optional_members(
        PowerSwitchStatus* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerSwitchStatus_copy(
        PowerSwitchStatus* dst,
        const PowerSwitchStatus* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *GroundingCircuitStatusTYPENAME;

    struct GroundingCircuitStatusSeq;
    class GroundingCircuitStatus 
    {
      public:
        typedef struct GroundingCircuitStatusSeq Seq;

        DDS_Long   groundNumber ;
        tms::PowerSwitchStatus   * control ;
        tms::PowerSwitchStatus   * pulse ;
        tms::GroundFaultDetection   faultDetection ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GroundingCircuitStatus_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GroundingCircuitStatus_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingCircuitStatus_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingCircuitStatus_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(GroundingCircuitStatusSeq, GroundingCircuitStatus);

    NDDSUSERDllExport
    RTIBool GroundingCircuitStatus_initialize(
        GroundingCircuitStatus* self);

    NDDSUSERDllExport
    RTIBool GroundingCircuitStatus_initialize_ex(
        GroundingCircuitStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GroundingCircuitStatus_initialize_w_params(
        GroundingCircuitStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GroundingCircuitStatus_finalize_w_return(
        GroundingCircuitStatus* self);

    NDDSUSERDllExport
    void GroundingCircuitStatus_finalize(
        GroundingCircuitStatus* self);

    NDDSUSERDllExport
    void GroundingCircuitStatus_finalize_ex(
        GroundingCircuitStatus* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GroundingCircuitStatus_finalize_w_params(
        GroundingCircuitStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GroundingCircuitStatus_finalize_optional_members(
        GroundingCircuitStatus* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GroundingCircuitStatus_copy(
        GroundingCircuitStatus* dst,
        const GroundingCircuitStatus* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong GroundingCircuitStateSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong GroundingCircuitStateSequence_MAXLEN= (tms::MAX_GROUNDING_CIRCUITS);
    typedef     tms::GroundingCircuitStatusSeq  GroundingCircuitStateSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GroundingCircuitStateSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GroundingCircuitStateSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingCircuitStateSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingCircuitStateSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(GroundingCircuitStateSequenceSeq, GroundingCircuitStateSequence);

    NDDSUSERDllExport
    RTIBool GroundingCircuitStateSequence_initialize(
        GroundingCircuitStateSequence* self);

    NDDSUSERDllExport
    RTIBool GroundingCircuitStateSequence_initialize_ex(
        GroundingCircuitStateSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GroundingCircuitStateSequence_initialize_w_params(
        GroundingCircuitStateSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GroundingCircuitStateSequence_finalize_w_return(
        GroundingCircuitStateSequence* self);

    NDDSUSERDllExport
    void GroundingCircuitStateSequence_finalize(
        GroundingCircuitStateSequence* self);

    NDDSUSERDllExport
    void GroundingCircuitStateSequence_finalize_ex(
        GroundingCircuitStateSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GroundingCircuitStateSequence_finalize_w_params(
        GroundingCircuitStateSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GroundingCircuitStateSequence_finalize_optional_members(
        GroundingCircuitStateSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GroundingCircuitStateSequence_copy(
        GroundingCircuitStateSequence* dst,
        const GroundingCircuitStateSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *GroundingCircuitStateTYPENAME;

    struct GroundingCircuitStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class GroundingCircuitStateTypeSupport;
    class GroundingCircuitStateDataWriter;
    class GroundingCircuitStateDataReader;
    #endif
    class GroundingCircuitState 
    {
      public:
        typedef struct GroundingCircuitStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef GroundingCircuitStateTypeSupport TypeSupport;
        typedef GroundingCircuitStateDataWriter DataWriter;
        typedef GroundingCircuitStateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        tms::GroundingCircuitStateSequence   grounds ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GroundingCircuitState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GroundingCircuitState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingCircuitState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingCircuitState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(GroundingCircuitStateSeq, GroundingCircuitState);

    NDDSUSERDllExport
    RTIBool GroundingCircuitState_initialize(
        GroundingCircuitState* self);

    NDDSUSERDllExport
    RTIBool GroundingCircuitState_initialize_ex(
        GroundingCircuitState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GroundingCircuitState_initialize_w_params(
        GroundingCircuitState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GroundingCircuitState_finalize_w_return(
        GroundingCircuitState* self);

    NDDSUSERDllExport
    void GroundingCircuitState_finalize(
        GroundingCircuitState* self);

    NDDSUSERDllExport
    void GroundingCircuitState_finalize_ex(
        GroundingCircuitState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GroundingCircuitState_finalize_w_params(
        GroundingCircuitState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GroundingCircuitState_finalize_optional_members(
        GroundingCircuitState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GroundingCircuitState_copy(
        GroundingCircuitState* dst,
        const GroundingCircuitState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *GroundingInfoTYPENAME;

    struct GroundingInfoSeq;
    class GroundingInfo 
    {
      public:
        typedef struct GroundingInfoSeq Seq;

        DDS_Long   groundNumber ;
        tms::GroundingDesignType   groundType ;
        tms::PowerPortNumberSequence   protectedPorts ;
        tms::PowerSwitchFeatureSequence   controlSwitchFeatures ;
        tms::PowerSwitchFeatureSequence   pulseSwitchFeatures ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GroundingInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GroundingInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(GroundingInfoSeq, GroundingInfo);

    NDDSUSERDllExport
    RTIBool GroundingInfo_initialize(
        GroundingInfo* self);

    NDDSUSERDllExport
    RTIBool GroundingInfo_initialize_ex(
        GroundingInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GroundingInfo_initialize_w_params(
        GroundingInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GroundingInfo_finalize_w_return(
        GroundingInfo* self);

    NDDSUSERDllExport
    void GroundingInfo_finalize(
        GroundingInfo* self);

    NDDSUSERDllExport
    void GroundingInfo_finalize_ex(
        GroundingInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GroundingInfo_finalize_w_params(
        GroundingInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GroundingInfo_finalize_optional_members(
        GroundingInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GroundingInfo_copy(
        GroundingInfo* dst,
        const GroundingInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong GroundingInfoSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong GroundingInfoSequence_MAXLEN= (tms::MAX_GROUNDING_CIRCUITS);
    typedef     tms::GroundingInfoSeq  GroundingInfoSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GroundingInfoSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GroundingInfoSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingInfoSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingInfoSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(GroundingInfoSequenceSeq, GroundingInfoSequence);

    NDDSUSERDllExport
    RTIBool GroundingInfoSequence_initialize(
        GroundingInfoSequence* self);

    NDDSUSERDllExport
    RTIBool GroundingInfoSequence_initialize_ex(
        GroundingInfoSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GroundingInfoSequence_initialize_w_params(
        GroundingInfoSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GroundingInfoSequence_finalize_w_return(
        GroundingInfoSequence* self);

    NDDSUSERDllExport
    void GroundingInfoSequence_finalize(
        GroundingInfoSequence* self);

    NDDSUSERDllExport
    void GroundingInfoSequence_finalize_ex(
        GroundingInfoSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GroundingInfoSequence_finalize_w_params(
        GroundingInfoSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GroundingInfoSequence_finalize_optional_members(
        GroundingInfoSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GroundingInfoSequence_copy(
        GroundingInfoSequence* dst,
        const GroundingInfoSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong MAX_PARAMETERS= 128UL;

    extern const char *ParameterMetadataTYPENAME;

    struct ParameterMetadataSeq;
    class ParameterMetadata 
    {
      public:
        typedef struct ParameterMetadataSeq Seq;

        DDS_Char *   name ;
        DDS_Char *   units ;
        DDS_Float   nominalMinValue ;
        DDS_Float   nominalMaxValue ;
        DDS_Float   hardMinValue ;
        DDS_Float   hardMaxValue ;
        DDS_Float   resolution ;
        tms::EnumLabelSequence   enumLabels ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ParameterMetadata_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ParameterMetadata_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ParameterMetadata_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ParameterMetadata_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ParameterMetadataSeq, ParameterMetadata);

    NDDSUSERDllExport
    RTIBool ParameterMetadata_initialize(
        ParameterMetadata* self);

    NDDSUSERDllExport
    RTIBool ParameterMetadata_initialize_ex(
        ParameterMetadata* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ParameterMetadata_initialize_w_params(
        ParameterMetadata* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ParameterMetadata_finalize_w_return(
        ParameterMetadata* self);

    NDDSUSERDllExport
    void ParameterMetadata_finalize(
        ParameterMetadata* self);

    NDDSUSERDllExport
    void ParameterMetadata_finalize_ex(
        ParameterMetadata* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ParameterMetadata_finalize_w_params(
        ParameterMetadata* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ParameterMetadata_finalize_optional_members(
        ParameterMetadata* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ParameterMetadata_copy(
        ParameterMetadata* dst,
        const ParameterMetadata* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ParameterValueTYPENAME;

    struct ParameterValueSeq;
    class ParameterValue 
    {
      public:
        typedef struct ParameterValueSeq Seq;

        DDS_Char *   name ;
        DDS_Float   value ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ParameterValue_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ParameterValue_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ParameterValue_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ParameterValue_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ParameterValueSeq, ParameterValue);

    NDDSUSERDllExport
    RTIBool ParameterValue_initialize(
        ParameterValue* self);

    NDDSUSERDllExport
    RTIBool ParameterValue_initialize_ex(
        ParameterValue* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ParameterValue_initialize_w_params(
        ParameterValue* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ParameterValue_finalize_w_return(
        ParameterValue* self);

    NDDSUSERDllExport
    void ParameterValue_finalize(
        ParameterValue* self);

    NDDSUSERDllExport
    void ParameterValue_finalize_ex(
        ParameterValue* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ParameterValue_finalize_w_params(
        ParameterValue* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ParameterValue_finalize_optional_members(
        ParameterValue* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ParameterValue_copy(
        ParameterValue* dst,
        const ParameterValue* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong ParameterValueSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong ParameterValueSequence_MAXLEN= 128UL;
    typedef     tms::ParameterValueSeq  ParameterValueSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ParameterValueSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ParameterValueSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ParameterValueSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ParameterValueSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ParameterValueSequenceSeq, ParameterValueSequence);

    NDDSUSERDllExport
    RTIBool ParameterValueSequence_initialize(
        ParameterValueSequence* self);

    NDDSUSERDllExport
    RTIBool ParameterValueSequence_initialize_ex(
        ParameterValueSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ParameterValueSequence_initialize_w_params(
        ParameterValueSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ParameterValueSequence_finalize_w_return(
        ParameterValueSequence* self);

    NDDSUSERDllExport
    void ParameterValueSequence_finalize(
        ParameterValueSequence* self);

    NDDSUSERDllExport
    void ParameterValueSequence_finalize_ex(
        ParameterValueSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ParameterValueSequence_finalize_w_params(
        ParameterValueSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ParameterValueSequence_finalize_optional_members(
        ParameterValueSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ParameterValueSequence_copy(
        ParameterValueSequence* dst,
        const ParameterValueSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong ParameterMetadataSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong ParameterMetadataSequence_MAXLEN= 128UL;
    typedef     tms::ParameterMetadataSeq  ParameterMetadataSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ParameterMetadataSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ParameterMetadataSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ParameterMetadataSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ParameterMetadataSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ParameterMetadataSequenceSeq, ParameterMetadataSequence);

    NDDSUSERDllExport
    RTIBool ParameterMetadataSequence_initialize(
        ParameterMetadataSequence* self);

    NDDSUSERDllExport
    RTIBool ParameterMetadataSequence_initialize_ex(
        ParameterMetadataSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ParameterMetadataSequence_initialize_w_params(
        ParameterMetadataSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ParameterMetadataSequence_finalize_w_return(
        ParameterMetadataSequence* self);

    NDDSUSERDllExport
    void ParameterMetadataSequence_finalize(
        ParameterMetadataSequence* self);

    NDDSUSERDllExport
    void ParameterMetadataSequence_finalize_ex(
        ParameterMetadataSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ParameterMetadataSequence_finalize_w_params(
        ParameterMetadataSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ParameterMetadataSequence_finalize_optional_members(
        ParameterMetadataSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ParameterMetadataSequence_copy(
        ParameterMetadataSequence* dst,
        const ParameterMetadataSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerPortStatusTYPENAME;

    struct PowerPortStatusSeq;
    class PowerPortStatus 
    {
      public:
        typedef struct PowerPortStatusSeq Seq;

        DDS_Long   portNumber ;
        tms::CableSenseStatus   cableStatus ;
        DDS_Char *   cableId ;
        tms::PowerPortId   * connection ;
        tms::PowerSwitchStatus   * switchStatus ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortStatus_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortStatus_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortStatus_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortStatus_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortStatusSeq, PowerPortStatus);

    NDDSUSERDllExport
    RTIBool PowerPortStatus_initialize(
        PowerPortStatus* self);

    NDDSUSERDllExport
    RTIBool PowerPortStatus_initialize_ex(
        PowerPortStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortStatus_initialize_w_params(
        PowerPortStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortStatus_finalize_w_return(
        PowerPortStatus* self);

    NDDSUSERDllExport
    void PowerPortStatus_finalize(
        PowerPortStatus* self);

    NDDSUSERDllExport
    void PowerPortStatus_finalize_ex(
        PowerPortStatus* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortStatus_finalize_w_params(
        PowerPortStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortStatus_finalize_optional_members(
        PowerPortStatus* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortStatus_copy(
        PowerPortStatus* dst,
        const PowerPortStatus* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong PowerPortStatusSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong PowerPortStatusSequence_MAXLEN= (tms::MAX_PORTS);
    typedef     tms::PowerPortStatusSeq  PowerPortStatusSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortStatusSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortStatusSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortStatusSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortStatusSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortStatusSequenceSeq, PowerPortStatusSequence);

    NDDSUSERDllExport
    RTIBool PowerPortStatusSequence_initialize(
        PowerPortStatusSequence* self);

    NDDSUSERDllExport
    RTIBool PowerPortStatusSequence_initialize_ex(
        PowerPortStatusSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortStatusSequence_initialize_w_params(
        PowerPortStatusSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortStatusSequence_finalize_w_return(
        PowerPortStatusSequence* self);

    NDDSUSERDllExport
    void PowerPortStatusSequence_finalize(
        PowerPortStatusSequence* self);

    NDDSUSERDllExport
    void PowerPortStatusSequence_finalize_ex(
        PowerPortStatusSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortStatusSequence_finalize_w_params(
        PowerPortStatusSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortStatusSequence_finalize_optional_members(
        PowerPortStatusSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortStatusSequence_copy(
        PowerPortStatusSequence* dst,
        const PowerPortStatusSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *OperatorPriorityTYPENAME;

    struct OperatorPrioritySeq;
    class OperatorPriority 
    {
      public:
        typedef struct OperatorPrioritySeq Seq;

        tms::OperatorPriorityType   priorityType ;
        DDS_Short   numericRank ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * OperatorPriority_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *OperatorPriority_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatorPriority_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatorPriority_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(OperatorPrioritySeq, OperatorPriority);

    NDDSUSERDllExport
    RTIBool OperatorPriority_initialize(
        OperatorPriority* self);

    NDDSUSERDllExport
    RTIBool OperatorPriority_initialize_ex(
        OperatorPriority* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool OperatorPriority_initialize_w_params(
        OperatorPriority* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool OperatorPriority_finalize_w_return(
        OperatorPriority* self);

    NDDSUSERDllExport
    void OperatorPriority_finalize(
        OperatorPriority* self);

    NDDSUSERDllExport
    void OperatorPriority_finalize_ex(
        OperatorPriority* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void OperatorPriority_finalize_w_params(
        OperatorPriority* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void OperatorPriority_finalize_optional_members(
        OperatorPriority* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool OperatorPriority_copy(
        OperatorPriority* dst,
        const OperatorPriority* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerPortIntentTYPENAME;

    struct PowerPortIntentSeq;
    class PowerPortIntent 
    {
      public:
        typedef struct PowerPortIntentSeq Seq;

        DDS_Char *   deviceId ;
        DDS_Long   portNumber ;
        tms::OperatorPriority   priority ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortIntent_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortIntent_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortIntent_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortIntent_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortIntentSeq, PowerPortIntent);

    NDDSUSERDllExport
    RTIBool PowerPortIntent_initialize(
        PowerPortIntent* self);

    NDDSUSERDllExport
    RTIBool PowerPortIntent_initialize_ex(
        PowerPortIntent* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortIntent_initialize_w_params(
        PowerPortIntent* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortIntent_finalize_w_return(
        PowerPortIntent* self);

    NDDSUSERDllExport
    void PowerPortIntent_finalize(
        PowerPortIntent* self);

    NDDSUSERDllExport
    void PowerPortIntent_finalize_ex(
        PowerPortIntent* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortIntent_finalize_w_params(
        PowerPortIntent* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortIntent_finalize_optional_members(
        PowerPortIntent* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortIntent_copy(
        PowerPortIntent* dst,
        const PowerPortIntent* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerConnectionIdTYPENAME;

    struct PowerConnectionIdSeq;
    class PowerConnectionId 
    {
      public:
        typedef struct PowerConnectionIdSeq Seq;

        tms::PowerPortId   portA ;
        tms::PowerPortId   * portB ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerConnectionId_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerConnectionId_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectionId_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectionId_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerConnectionIdSeq, PowerConnectionId);

    NDDSUSERDllExport
    RTIBool PowerConnectionId_initialize(
        PowerConnectionId* self);

    NDDSUSERDllExport
    RTIBool PowerConnectionId_initialize_ex(
        PowerConnectionId* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerConnectionId_initialize_w_params(
        PowerConnectionId* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerConnectionId_finalize_w_return(
        PowerConnectionId* self);

    NDDSUSERDllExport
    void PowerConnectionId_finalize(
        PowerConnectionId* self);

    NDDSUSERDllExport
    void PowerConnectionId_finalize_ex(
        PowerConnectionId* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerConnectionId_finalize_w_params(
        PowerConnectionId* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerConnectionId_finalize_optional_members(
        PowerConnectionId* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerConnectionId_copy(
        PowerConnectionId* dst,
        const PowerConnectionId* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *SourceInfoTYPENAME;

    struct SourceInfoSeq;
    class SourceInfo 
    {
      public:
        typedef struct SourceInfoSeq Seq;

        tms::SourceFeatureSequence   features ;
        tms::LoadSharingInfo   loadSharing ;
        tms::EnergyStartStopLevelSequence   supportedEnergyStartStopLevels ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * SourceInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *SourceInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SourceInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *SourceInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(SourceInfoSeq, SourceInfo);

    NDDSUSERDllExport
    RTIBool SourceInfo_initialize(
        SourceInfo* self);

    NDDSUSERDllExport
    RTIBool SourceInfo_initialize_ex(
        SourceInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool SourceInfo_initialize_w_params(
        SourceInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool SourceInfo_finalize_w_return(
        SourceInfo* self);

    NDDSUSERDllExport
    void SourceInfo_finalize(
        SourceInfo* self);

    NDDSUSERDllExport
    void SourceInfo_finalize_ex(
        SourceInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void SourceInfo_finalize_w_params(
        SourceInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void SourceInfo_finalize_optional_members(
        SourceInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool SourceInfo_copy(
        SourceInfo* dst,
        const SourceInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ActiveDiagnosticStateTYPENAME;

    struct ActiveDiagnosticStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ActiveDiagnosticStateTypeSupport;
    class ActiveDiagnosticStateDataWriter;
    class ActiveDiagnosticStateDataReader;
    #endif
    class ActiveDiagnosticState 
    {
      public:
        typedef struct ActiveDiagnosticStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ActiveDiagnosticStateTypeSupport TypeSupport;
        typedef ActiveDiagnosticStateDataWriter DataWriter;
        typedef ActiveDiagnosticStateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        tms::DiagnosticTroubleCodeSequence   codes ;
        DDS_UnsignedLong   overflow ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ActiveDiagnosticState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ActiveDiagnosticState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ActiveDiagnosticState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ActiveDiagnosticState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ActiveDiagnosticStateSeq, ActiveDiagnosticState);

    NDDSUSERDllExport
    RTIBool ActiveDiagnosticState_initialize(
        ActiveDiagnosticState* self);

    NDDSUSERDllExport
    RTIBool ActiveDiagnosticState_initialize_ex(
        ActiveDiagnosticState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ActiveDiagnosticState_initialize_w_params(
        ActiveDiagnosticState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ActiveDiagnosticState_finalize_w_return(
        ActiveDiagnosticState* self);

    NDDSUSERDllExport
    void ActiveDiagnosticState_finalize(
        ActiveDiagnosticState* self);

    NDDSUSERDllExport
    void ActiveDiagnosticState_finalize_ex(
        ActiveDiagnosticState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ActiveDiagnosticState_finalize_w_params(
        ActiveDiagnosticState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ActiveDiagnosticState_finalize_optional_members(
        ActiveDiagnosticState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ActiveDiagnosticState_copy(
        ActiveDiagnosticState* dst,
        const ActiveDiagnosticState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *AuthorizationToEnergizeResultTYPENAME;

    struct AuthorizationToEnergizeResultSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class AuthorizationToEnergizeResultTypeSupport;
    class AuthorizationToEnergizeResultDataWriter;
    class AuthorizationToEnergizeResultDataReader;
    #endif
    class AuthorizationToEnergizeResult 
    {
      public:
        typedef struct AuthorizationToEnergizeResultSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef AuthorizationToEnergizeResultTypeSupport TypeSupport;
        typedef AuthorizationToEnergizeResultDataWriter DataWriter;
        typedef AuthorizationToEnergizeResultDataReader DataReader;
        #endif

        tms::GridRequest   relatedRequestId ;
        DDS_UnsignedLongLong   relatedSequenceId ;
        DDS_Char *   authorizationDeviceId ;
        DDS_Char *   energizeRequestingDeviceId ;
        DDS_UnsignedLongLong   energizeSequenceId ;
        DDS_Char *   userId ;
        DDS_Boolean   accepted ;
        DDS_Boolean   responseReceived ;
        DDS_Boolean   energizeRequestValid ;
        DDS_Boolean   authorizationReviewValid ;
        tms::ClockMonotonic   outcomeMonotonic ;
        tms::ClockRealtime   outcomeRealtime ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * AuthorizationToEnergizeResult_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *AuthorizationToEnergizeResult_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *AuthorizationToEnergizeResult_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *AuthorizationToEnergizeResult_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(AuthorizationToEnergizeResultSeq, AuthorizationToEnergizeResult);

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeResult_initialize(
        AuthorizationToEnergizeResult* self);

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeResult_initialize_ex(
        AuthorizationToEnergizeResult* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeResult_initialize_w_params(
        AuthorizationToEnergizeResult* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeResult_finalize_w_return(
        AuthorizationToEnergizeResult* self);

    NDDSUSERDllExport
    void AuthorizationToEnergizeResult_finalize(
        AuthorizationToEnergizeResult* self);

    NDDSUSERDllExport
    void AuthorizationToEnergizeResult_finalize_ex(
        AuthorizationToEnergizeResult* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void AuthorizationToEnergizeResult_finalize_w_params(
        AuthorizationToEnergizeResult* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void AuthorizationToEnergizeResult_finalize_optional_members(
        AuthorizationToEnergizeResult* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeResult_copy(
        AuthorizationToEnergizeResult* dst,
        const AuthorizationToEnergizeResult* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *AuthorizationToEnergizeRequestTYPENAME;

    struct AuthorizationToEnergizeRequestSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class AuthorizationToEnergizeRequestTypeSupport;
    class AuthorizationToEnergizeRequestDataWriter;
    class AuthorizationToEnergizeRequestDataReader;
    #endif
    class AuthorizationToEnergizeRequest 
    {
      public:
        typedef struct AuthorizationToEnergizeRequestSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef AuthorizationToEnergizeRequestTypeSupport TypeSupport;
        typedef AuthorizationToEnergizeRequestDataWriter DataWriter;
        typedef AuthorizationToEnergizeRequestDataReader DataReader;
        #endif

        tms::GridRequest   requestId ;
        DDS_UnsignedLongLong   sequenceId ;
        DDS_Char *   energizeRequestingDeviceId ;
        DDS_UnsignedLongLong   energizeSequenceId ;
        tms::PowerPortNumberSequence   powerPorts ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * AuthorizationToEnergizeRequest_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *AuthorizationToEnergizeRequest_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *AuthorizationToEnergizeRequest_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *AuthorizationToEnergizeRequest_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(AuthorizationToEnergizeRequestSeq, AuthorizationToEnergizeRequest);

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeRequest_initialize(
        AuthorizationToEnergizeRequest* self);

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeRequest_initialize_ex(
        AuthorizationToEnergizeRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeRequest_initialize_w_params(
        AuthorizationToEnergizeRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeRequest_finalize_w_return(
        AuthorizationToEnergizeRequest* self);

    NDDSUSERDllExport
    void AuthorizationToEnergizeRequest_finalize(
        AuthorizationToEnergizeRequest* self);

    NDDSUSERDllExport
    void AuthorizationToEnergizeRequest_finalize_ex(
        AuthorizationToEnergizeRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void AuthorizationToEnergizeRequest_finalize_w_params(
        AuthorizationToEnergizeRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void AuthorizationToEnergizeRequest_finalize_optional_members(
        AuthorizationToEnergizeRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeRequest_copy(
        AuthorizationToEnergizeRequest* dst,
        const AuthorizationToEnergizeRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *AuthorizationToEnergizeReplyTYPENAME;

    struct AuthorizationToEnergizeReplySeq;
    #ifndef NDDS_STANDALONE_TYPE
    class AuthorizationToEnergizeReplyTypeSupport;
    class AuthorizationToEnergizeReplyDataWriter;
    class AuthorizationToEnergizeReplyDataReader;
    #endif
    class AuthorizationToEnergizeReply 
    {
      public:
        typedef struct AuthorizationToEnergizeReplySeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef AuthorizationToEnergizeReplyTypeSupport TypeSupport;
        typedef AuthorizationToEnergizeReplyDataWriter DataWriter;
        typedef AuthorizationToEnergizeReplyDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        tms::GridRequest   relatedRequestId ;
        DDS_UnsignedLongLong   relatedSequenceId ;
        DDS_Char *   energizeRequestingDeviceId ;
        DDS_UnsignedLongLong   energizeSequenceId ;
        tms::PowerPortNumberSequence   powerPorts ;
        DDS_Char *   userId ;
        DDS_Boolean   accept ;
        DDS_Boolean   deny ;
        tms::ClockRealtime   timeOfReview ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * AuthorizationToEnergizeReply_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *AuthorizationToEnergizeReply_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *AuthorizationToEnergizeReply_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *AuthorizationToEnergizeReply_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(AuthorizationToEnergizeReplySeq, AuthorizationToEnergizeReply);

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeReply_initialize(
        AuthorizationToEnergizeReply* self);

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeReply_initialize_ex(
        AuthorizationToEnergizeReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeReply_initialize_w_params(
        AuthorizationToEnergizeReply* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeReply_finalize_w_return(
        AuthorizationToEnergizeReply* self);

    NDDSUSERDllExport
    void AuthorizationToEnergizeReply_finalize(
        AuthorizationToEnergizeReply* self);

    NDDSUSERDllExport
    void AuthorizationToEnergizeReply_finalize_ex(
        AuthorizationToEnergizeReply* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void AuthorizationToEnergizeReply_finalize_w_params(
        AuthorizationToEnergizeReply* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void AuthorizationToEnergizeReply_finalize_optional_members(
        AuthorizationToEnergizeReply* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool AuthorizationToEnergizeReply_copy(
        AuthorizationToEnergizeReply* dst,
        const AuthorizationToEnergizeReply* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *IdentityNicknameRequestTYPENAME;

    struct IdentityNicknameRequestSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class IdentityNicknameRequestTypeSupport;
    class IdentityNicknameRequestDataWriter;
    class IdentityNicknameRequestDataReader;
    #endif
    class IdentityNicknameRequest 
    {
      public:
        typedef struct IdentityNicknameRequestSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef IdentityNicknameRequestTypeSupport TypeSupport;
        typedef IdentityNicknameRequestDataWriter DataWriter;
        typedef IdentityNicknameRequestDataReader DataReader;
        #endif

        tms::DeviceRequest   requestId ;
        DDS_UnsignedLongLong   sequenceId ;
        DDS_Char *   nickname ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * IdentityNicknameRequest_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *IdentityNicknameRequest_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *IdentityNicknameRequest_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *IdentityNicknameRequest_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(IdentityNicknameRequestSeq, IdentityNicknameRequest);

    NDDSUSERDllExport
    RTIBool IdentityNicknameRequest_initialize(
        IdentityNicknameRequest* self);

    NDDSUSERDllExport
    RTIBool IdentityNicknameRequest_initialize_ex(
        IdentityNicknameRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool IdentityNicknameRequest_initialize_w_params(
        IdentityNicknameRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool IdentityNicknameRequest_finalize_w_return(
        IdentityNicknameRequest* self);

    NDDSUSERDllExport
    void IdentityNicknameRequest_finalize(
        IdentityNicknameRequest* self);

    NDDSUSERDllExport
    void IdentityNicknameRequest_finalize_ex(
        IdentityNicknameRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void IdentityNicknameRequest_finalize_w_params(
        IdentityNicknameRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void IdentityNicknameRequest_finalize_optional_members(
        IdentityNicknameRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool IdentityNicknameRequest_copy(
        IdentityNicknameRequest* dst,
        const IdentityNicknameRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *DeviceIconTYPENAME;

    struct DeviceIconSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class DeviceIconTypeSupport;
    class DeviceIconDataWriter;
    class DeviceIconDataReader;
    #endif
    class DeviceIcon 
    {
      public:
        typedef struct DeviceIconSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef DeviceIconTypeSupport TypeSupport;
        typedef DeviceIconDataWriter DataWriter;
        typedef DeviceIconDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        DDS_Char *   mimeType ;
        tms::OctetSequence   data ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DeviceIcon_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DeviceIcon_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceIcon_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceIcon_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DeviceIconSeq, DeviceIcon);

    NDDSUSERDllExport
    RTIBool DeviceIcon_initialize(
        DeviceIcon* self);

    NDDSUSERDllExport
    RTIBool DeviceIcon_initialize_ex(
        DeviceIcon* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DeviceIcon_initialize_w_params(
        DeviceIcon* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DeviceIcon_finalize_w_return(
        DeviceIcon* self);

    NDDSUSERDllExport
    void DeviceIcon_finalize(
        DeviceIcon* self);

    NDDSUSERDllExport
    void DeviceIcon_finalize_ex(
        DeviceIcon* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DeviceIcon_finalize_w_params(
        DeviceIcon* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DeviceIcon_finalize_optional_members(
        DeviceIcon* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DeviceIcon_copy(
        DeviceIcon* dst,
        const DeviceIcon* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *DeviceIntentTYPENAME;

    struct DeviceIntentSeq;
    class DeviceIntent 
    {
      public:
        typedef struct DeviceIntentSeq Seq;

        DDS_Char *   deviceId ;
        DDS_Boolean   battleShort ;
        tms::OperatorPriority   priority ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DeviceIntent_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DeviceIntent_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceIntent_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceIntent_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DeviceIntentSeq, DeviceIntent);

    NDDSUSERDllExport
    RTIBool DeviceIntent_initialize(
        DeviceIntent* self);

    NDDSUSERDllExport
    RTIBool DeviceIntent_initialize_ex(
        DeviceIntent* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DeviceIntent_initialize_w_params(
        DeviceIntent* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DeviceIntent_finalize_w_return(
        DeviceIntent* self);

    NDDSUSERDllExport
    void DeviceIntent_finalize(
        DeviceIntent* self);

    NDDSUSERDllExport
    void DeviceIntent_finalize_ex(
        DeviceIntent* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DeviceIntent_finalize_w_params(
        DeviceIntent* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DeviceIntent_finalize_optional_members(
        DeviceIntent* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DeviceIntent_copy(
        DeviceIntent* dst,
        const DeviceIntent* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong DeviceIntentSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong DeviceIntentSequence_MAXLEN= 200UL;
    typedef     tms::DeviceIntentSeq  DeviceIntentSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DeviceIntentSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DeviceIntentSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceIntentSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceIntentSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DeviceIntentSequenceSeq, DeviceIntentSequence);

    NDDSUSERDllExport
    RTIBool DeviceIntentSequence_initialize(
        DeviceIntentSequence* self);

    NDDSUSERDllExport
    RTIBool DeviceIntentSequence_initialize_ex(
        DeviceIntentSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DeviceIntentSequence_initialize_w_params(
        DeviceIntentSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DeviceIntentSequence_finalize_w_return(
        DeviceIntentSequence* self);

    NDDSUSERDllExport
    void DeviceIntentSequence_finalize(
        DeviceIntentSequence* self);

    NDDSUSERDllExport
    void DeviceIntentSequence_finalize_ex(
        DeviceIntentSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DeviceIntentSequence_finalize_w_params(
        DeviceIntentSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DeviceIntentSequence_finalize_optional_members(
        DeviceIntentSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DeviceIntentSequence_copy(
        DeviceIntentSequence* dst,
        const DeviceIntentSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ControlParameterRequestTYPENAME;

    struct ControlParameterRequestSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ControlParameterRequestTypeSupport;
    class ControlParameterRequestDataWriter;
    class ControlParameterRequestDataReader;
    #endif
    class ControlParameterRequest 
    {
      public:
        typedef struct ControlParameterRequestSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ControlParameterRequestTypeSupport TypeSupport;
        typedef ControlParameterRequestDataWriter DataWriter;
        typedef ControlParameterRequestDataReader DataReader;
        #endif

        tms::DeviceConfigRequest   requestId ;
        DDS_UnsignedLongLong   sequenceId ;
        tms::ParameterValueSequence   parameters ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ControlParameterRequest_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ControlParameterRequest_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlParameterRequest_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlParameterRequest_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ControlParameterRequestSeq, ControlParameterRequest);

    NDDSUSERDllExport
    RTIBool ControlParameterRequest_initialize(
        ControlParameterRequest* self);

    NDDSUSERDllExport
    RTIBool ControlParameterRequest_initialize_ex(
        ControlParameterRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ControlParameterRequest_initialize_w_params(
        ControlParameterRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ControlParameterRequest_finalize_w_return(
        ControlParameterRequest* self);

    NDDSUSERDllExport
    void ControlParameterRequest_finalize(
        ControlParameterRequest* self);

    NDDSUSERDllExport
    void ControlParameterRequest_finalize_ex(
        ControlParameterRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ControlParameterRequest_finalize_w_params(
        ControlParameterRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ControlParameterRequest_finalize_optional_members(
        ControlParameterRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ControlParameterRequest_copy(
        ControlParameterRequest* dst,
        const ControlParameterRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ControlParameterStateTYPENAME;

    struct ControlParameterStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ControlParameterStateTypeSupport;
    class ControlParameterStateDataWriter;
    class ControlParameterStateDataReader;
    #endif
    class ControlParameterState 
    {
      public:
        typedef struct ControlParameterStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ControlParameterStateTypeSupport TypeSupport;
        typedef ControlParameterStateDataWriter DataWriter;
        typedef ControlParameterStateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        tms::ConfigId   config ;
        tms::ParameterValueSequence   parameters ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ControlParameterState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ControlParameterState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlParameterState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlParameterState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ControlParameterStateSeq, ControlParameterState);

    NDDSUSERDllExport
    RTIBool ControlParameterState_initialize(
        ControlParameterState* self);

    NDDSUSERDllExport
    RTIBool ControlParameterState_initialize_ex(
        ControlParameterState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ControlParameterState_initialize_w_params(
        ControlParameterState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ControlParameterState_finalize_w_return(
        ControlParameterState* self);

    NDDSUSERDllExport
    void ControlParameterState_finalize(
        ControlParameterState* self);

    NDDSUSERDllExport
    void ControlParameterState_finalize_ex(
        ControlParameterState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ControlParameterState_finalize_w_params(
        ControlParameterState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ControlParameterState_finalize_optional_members(
        ControlParameterState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ControlParameterState_copy(
        ControlParameterState* dst,
        const ControlParameterState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerPortStateTYPENAME;

    struct PowerPortStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PowerPortStateTypeSupport;
    class PowerPortStateDataWriter;
    class PowerPortStateDataReader;
    #endif
    class PowerPortState 
    {
      public:
        typedef struct PowerPortStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PowerPortStateTypeSupport TypeSupport;
        typedef PowerPortStateDataWriter DataWriter;
        typedef PowerPortStateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        tms::PowerPortStatusSequence   powerPorts ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortStateSeq, PowerPortState);

    NDDSUSERDllExport
    RTIBool PowerPortState_initialize(
        PowerPortState* self);

    NDDSUSERDllExport
    RTIBool PowerPortState_initialize_ex(
        PowerPortState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortState_initialize_w_params(
        PowerPortState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortState_finalize_w_return(
        PowerPortState* self);

    NDDSUSERDllExport
    void PowerPortState_finalize(
        PowerPortState* self);

    NDDSUSERDllExport
    void PowerPortState_finalize_ex(
        PowerPortState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortState_finalize_w_params(
        PowerPortState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortState_finalize_optional_members(
        PowerPortState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortState_copy(
        PowerPortState* dst,
        const PowerPortState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *DistributionInfoTYPENAME;

    struct DistributionInfoSeq;
    class DistributionInfo 
    {
      public:
        typedef struct DistributionInfoSeq Seq;

        tms::DistributionFeatureSequence   features ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DistributionInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DistributionInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DistributionInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DistributionInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DistributionInfoSeq, DistributionInfo);

    NDDSUSERDllExport
    RTIBool DistributionInfo_initialize(
        DistributionInfo* self);

    NDDSUSERDllExport
    RTIBool DistributionInfo_initialize_ex(
        DistributionInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DistributionInfo_initialize_w_params(
        DistributionInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DistributionInfo_finalize_w_return(
        DistributionInfo* self);

    NDDSUSERDllExport
    void DistributionInfo_finalize(
        DistributionInfo* self);

    NDDSUSERDllExport
    void DistributionInfo_finalize_ex(
        DistributionInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DistributionInfo_finalize_w_params(
        DistributionInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DistributionInfo_finalize_optional_members(
        DistributionInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DistributionInfo_copy(
        DistributionInfo* dst,
        const DistributionInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *IdentityNicknameStateTYPENAME;

    struct IdentityNicknameStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class IdentityNicknameStateTypeSupport;
    class IdentityNicknameStateDataWriter;
    class IdentityNicknameStateDataReader;
    #endif
    class IdentityNicknameState 
    {
      public:
        typedef struct IdentityNicknameStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef IdentityNicknameStateTypeSupport TypeSupport;
        typedef IdentityNicknameStateDataWriter DataWriter;
        typedef IdentityNicknameStateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        DDS_Char *   identityId ;
        DDS_Char *   nickname ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * IdentityNicknameState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *IdentityNicknameState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *IdentityNicknameState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *IdentityNicknameState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(IdentityNicknameStateSeq, IdentityNicknameState);

    NDDSUSERDllExport
    RTIBool IdentityNicknameState_initialize(
        IdentityNicknameState* self);

    NDDSUSERDllExport
    RTIBool IdentityNicknameState_initialize_ex(
        IdentityNicknameState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool IdentityNicknameState_initialize_w_params(
        IdentityNicknameState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool IdentityNicknameState_finalize_w_return(
        IdentityNicknameState* self);

    NDDSUSERDllExport
    void IdentityNicknameState_finalize(
        IdentityNicknameState* self);

    NDDSUSERDllExport
    void IdentityNicknameState_finalize_ex(
        IdentityNicknameState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void IdentityNicknameState_finalize_w_params(
        IdentityNicknameState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void IdentityNicknameState_finalize_optional_members(
        IdentityNicknameState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool IdentityNicknameState_copy(
        IdentityNicknameState* dst,
        const IdentityNicknameState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *GroundingCircuitRequestTYPENAME;

    struct GroundingCircuitRequestSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class GroundingCircuitRequestTypeSupport;
    class GroundingCircuitRequestDataWriter;
    class GroundingCircuitRequestDataReader;
    #endif
    class GroundingCircuitRequest 
    {
      public:
        typedef struct GroundingCircuitRequestSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef GroundingCircuitRequestTypeSupport TypeSupport;
        typedef GroundingCircuitRequestDataWriter DataWriter;
        typedef GroundingCircuitRequestDataReader DataReader;
        #endif

        tms::DeviceConfigRequest   requestId ;
        DDS_UnsignedLongLong   sequenceId ;
        DDS_Long   groundNumber ;
        tms::DesiredCircuitContinuity   control ;
        tms::DesiredCircuitContinuity   pulse ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * GroundingCircuitRequest_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *GroundingCircuitRequest_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingCircuitRequest_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *GroundingCircuitRequest_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(GroundingCircuitRequestSeq, GroundingCircuitRequest);

    NDDSUSERDllExport
    RTIBool GroundingCircuitRequest_initialize(
        GroundingCircuitRequest* self);

    NDDSUSERDllExport
    RTIBool GroundingCircuitRequest_initialize_ex(
        GroundingCircuitRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool GroundingCircuitRequest_initialize_w_params(
        GroundingCircuitRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool GroundingCircuitRequest_finalize_w_return(
        GroundingCircuitRequest* self);

    NDDSUSERDllExport
    void GroundingCircuitRequest_finalize(
        GroundingCircuitRequest* self);

    NDDSUSERDllExport
    void GroundingCircuitRequest_finalize_ex(
        GroundingCircuitRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void GroundingCircuitRequest_finalize_w_params(
        GroundingCircuitRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void GroundingCircuitRequest_finalize_optional_members(
        GroundingCircuitRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool GroundingCircuitRequest_copy(
        GroundingCircuitRequest* dst,
        const GroundingCircuitRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *HeartbeatTYPENAME;

    struct HeartbeatSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class HeartbeatTypeSupport;
    class HeartbeatDataWriter;
    class HeartbeatDataReader;
    #endif
    class Heartbeat 
    {
      public:
        typedef struct HeartbeatSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef HeartbeatTypeSupport TypeSupport;
        typedef HeartbeatDataWriter DataWriter;
        typedef HeartbeatDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        DDS_UnsignedLong   sequenceNumber ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * Heartbeat_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Heartbeat_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Heartbeat_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Heartbeat_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(HeartbeatSeq, Heartbeat);

    NDDSUSERDllExport
    RTIBool Heartbeat_initialize(
        Heartbeat* self);

    NDDSUSERDllExport
    RTIBool Heartbeat_initialize_ex(
        Heartbeat* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Heartbeat_initialize_w_params(
        Heartbeat* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Heartbeat_finalize_w_return(
        Heartbeat* self);

    NDDSUSERDllExport
    void Heartbeat_finalize(
        Heartbeat* self);

    NDDSUSERDllExport
    void Heartbeat_finalize_ex(
        Heartbeat* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Heartbeat_finalize_w_params(
        Heartbeat* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Heartbeat_finalize_optional_members(
        Heartbeat* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Heartbeat_copy(
        Heartbeat* dst,
        const Heartbeat* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *LoadInfoTYPENAME;

    struct LoadInfoSeq;
    class LoadInfo 
    {
      public:
        typedef struct LoadInfoSeq Seq;

        tms::LoadFeatureSequence   features ;
        DDS_Float   maxRealPower ;
        DDS_Float   maxReactivePower ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * LoadInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LoadInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LoadInfoSeq, LoadInfo);

    NDDSUSERDllExport
    RTIBool LoadInfo_initialize(
        LoadInfo* self);

    NDDSUSERDllExport
    RTIBool LoadInfo_initialize_ex(
        LoadInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LoadInfo_initialize_w_params(
        LoadInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LoadInfo_finalize_w_return(
        LoadInfo* self);

    NDDSUSERDllExport
    void LoadInfo_finalize(
        LoadInfo* self);

    NDDSUSERDllExport
    void LoadInfo_finalize_ex(
        LoadInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LoadInfo_finalize_w_params(
        LoadInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LoadInfo_finalize_optional_members(
        LoadInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LoadInfo_copy(
        LoadInfo* dst,
        const LoadInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *MetricParameterStateTYPENAME;

    struct MetricParameterStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class MetricParameterStateTypeSupport;
    class MetricParameterStateDataWriter;
    class MetricParameterStateDataReader;
    #endif
    class MetricParameterState 
    {
      public:
        typedef struct MetricParameterStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef MetricParameterStateTypeSupport TypeSupport;
        typedef MetricParameterStateDataWriter DataWriter;
        typedef MetricParameterStateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        tms::ParameterValueSequence   metricParameters ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * MetricParameterState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *MetricParameterState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MetricParameterState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MetricParameterState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(MetricParameterStateSeq, MetricParameterState);

    NDDSUSERDllExport
    RTIBool MetricParameterState_initialize(
        MetricParameterState* self);

    NDDSUSERDllExport
    RTIBool MetricParameterState_initialize_ex(
        MetricParameterState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool MetricParameterState_initialize_w_params(
        MetricParameterState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool MetricParameterState_finalize_w_return(
        MetricParameterState* self);

    NDDSUSERDllExport
    void MetricParameterState_finalize(
        MetricParameterState* self);

    NDDSUSERDllExport
    void MetricParameterState_finalize_ex(
        MetricParameterState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void MetricParameterState_finalize_w_params(
        MetricParameterState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void MetricParameterState_finalize_optional_members(
        MetricParameterState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool MetricParameterState_copy(
        MetricParameterState* dst,
        const MetricParameterState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *LoadSharingIntentTYPENAME;

    struct LoadSharingIntentSeq;
    class LoadSharingIntent 
    {
      public:
        typedef struct LoadSharingIntentSeq Seq;

        DDS_Float   increaseCapacityThreshold ;
        DDS_Float   decreaseCapacityThreshold ;
        DDS_Float   decreaseCapacityDuration ;
        tms::OperatorPriority   priorityLoadCurtailmentAllowed ;
        tms::OperatorPriority   priorityPowerPortSheddingAllowed ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * LoadSharingIntent_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *LoadSharingIntent_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingIntent_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingIntent_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(LoadSharingIntentSeq, LoadSharingIntent);

    NDDSUSERDllExport
    RTIBool LoadSharingIntent_initialize(
        LoadSharingIntent* self);

    NDDSUSERDllExport
    RTIBool LoadSharingIntent_initialize_ex(
        LoadSharingIntent* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool LoadSharingIntent_initialize_w_params(
        LoadSharingIntent* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool LoadSharingIntent_finalize_w_return(
        LoadSharingIntent* self);

    NDDSUSERDllExport
    void LoadSharingIntent_finalize(
        LoadSharingIntent* self);

    NDDSUSERDllExport
    void LoadSharingIntent_finalize_ex(
        LoadSharingIntent* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void LoadSharingIntent_finalize_w_params(
        LoadSharingIntent* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void LoadSharingIntent_finalize_optional_members(
        LoadSharingIntent* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool LoadSharingIntent_copy(
        LoadSharingIntent* dst,
        const LoadSharingIntent* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *StorageIntentTYPENAME;

    struct StorageIntentSeq;
    class StorageIntent 
    {
      public:
        typedef struct StorageIntentSeq Seq;

        DDS_Float   reservedStateOfCharge ;
        tms::ClockMonotonic   timeTillReservedSoc ;
        tms::OperatorPriority   priorityLoadSheddingAllowed ;
        tms::OperatorPriority   priorityPowerPortSheddingAllowed ;
        tms::IdentitySequence   reservedDeviceIds ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * StorageIntent_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *StorageIntent_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageIntent_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageIntent_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(StorageIntentSeq, StorageIntent);

    NDDSUSERDllExport
    RTIBool StorageIntent_initialize(
        StorageIntent* self);

    NDDSUSERDllExport
    RTIBool StorageIntent_initialize_ex(
        StorageIntent* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool StorageIntent_initialize_w_params(
        StorageIntent* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool StorageIntent_finalize_w_return(
        StorageIntent* self);

    NDDSUSERDllExport
    void StorageIntent_finalize(
        StorageIntent* self);

    NDDSUSERDllExport
    void StorageIntent_finalize_ex(
        StorageIntent* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void StorageIntent_finalize_w_params(
        StorageIntent* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void StorageIntent_finalize_optional_members(
        StorageIntent* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool StorageIntent_copy(
        StorageIntent* dst,
        const StorageIntent* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *MicrogridIntentTYPENAME;

    struct MicrogridIntentSeq;
    class MicrogridIntent 
    {
      public:
        typedef struct MicrogridIntentSeq Seq;

        tms::OperatingMode   operatingModeValue ;
        tms::LoadSharingIntent   loadSharingIntentValue ;
        tms::StorageIntent   * storageIntentValue ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * MicrogridIntent_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *MicrogridIntent_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridIntent_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridIntent_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(MicrogridIntentSeq, MicrogridIntent);

    NDDSUSERDllExport
    RTIBool MicrogridIntent_initialize(
        MicrogridIntent* self);

    NDDSUSERDllExport
    RTIBool MicrogridIntent_initialize_ex(
        MicrogridIntent* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool MicrogridIntent_initialize_w_params(
        MicrogridIntent* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool MicrogridIntent_finalize_w_return(
        MicrogridIntent* self);

    NDDSUSERDllExport
    void MicrogridIntent_finalize(
        MicrogridIntent* self);

    NDDSUSERDllExport
    void MicrogridIntent_finalize_ex(
        MicrogridIntent* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void MicrogridIntent_finalize_w_params(
        MicrogridIntent* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void MicrogridIntent_finalize_optional_members(
        MicrogridIntent* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool MicrogridIntent_copy(
        MicrogridIntent* dst,
        const MicrogridIntent* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong PowerPortIntentSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong PowerPortIntentSequence_MAXLEN= 4000UL;
    typedef     tms::PowerPortIntentSeq  PowerPortIntentSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortIntentSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortIntentSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortIntentSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortIntentSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortIntentSequenceSeq, PowerPortIntentSequence);

    NDDSUSERDllExport
    RTIBool PowerPortIntentSequence_initialize(
        PowerPortIntentSequence* self);

    NDDSUSERDllExport
    RTIBool PowerPortIntentSequence_initialize_ex(
        PowerPortIntentSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortIntentSequence_initialize_w_params(
        PowerPortIntentSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortIntentSequence_finalize_w_return(
        PowerPortIntentSequence* self);

    NDDSUSERDllExport
    void PowerPortIntentSequence_finalize(
        PowerPortIntentSequence* self);

    NDDSUSERDllExport
    void PowerPortIntentSequence_finalize_ex(
        PowerPortIntentSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortIntentSequence_finalize_w_params(
        PowerPortIntentSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortIntentSequence_finalize_optional_members(
        PowerPortIntentSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortIntentSequence_copy(
        PowerPortIntentSequence* dst,
        const PowerPortIntentSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *OperatorIntentTYPENAME;

    struct OperatorIntentSeq;
    class OperatorIntent 
    {
      public:
        typedef struct OperatorIntentSeq Seq;

        tms::GridRequest   requestId ;
        tms::OperatorIntentType   intentType ;
        tms::MicrogridIntent   microgrid ;
        tms::DeviceIntentSequence   devices ;
        tms::PowerPortIntentSequence   powerPorts ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * OperatorIntent_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *OperatorIntent_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatorIntent_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatorIntent_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(OperatorIntentSeq, OperatorIntent);

    NDDSUSERDllExport
    RTIBool OperatorIntent_initialize(
        OperatorIntent* self);

    NDDSUSERDllExport
    RTIBool OperatorIntent_initialize_ex(
        OperatorIntent* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool OperatorIntent_initialize_w_params(
        OperatorIntent* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool OperatorIntent_finalize_w_return(
        OperatorIntent* self);

    NDDSUSERDllExport
    void OperatorIntent_finalize(
        OperatorIntent* self);

    NDDSUSERDllExport
    void OperatorIntent_finalize_ex(
        OperatorIntent* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void OperatorIntent_finalize_w_params(
        OperatorIntent* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void OperatorIntent_finalize_optional_members(
        OperatorIntent* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool OperatorIntent_copy(
        OperatorIntent* dst,
        const OperatorIntent* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *OperatorIntentRequestTYPENAME;

    struct OperatorIntentRequestSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class OperatorIntentRequestTypeSupport;
    class OperatorIntentRequestDataWriter;
    class OperatorIntentRequestDataReader;
    #endif
    class OperatorIntentRequest 
    {
      public:
        typedef struct OperatorIntentRequestSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef OperatorIntentRequestTypeSupport TypeSupport;
        typedef OperatorIntentRequestDataWriter DataWriter;
        typedef OperatorIntentRequestDataReader DataReader;
        #endif

        tms::GridRequest   requestId ;
        DDS_UnsignedLongLong   sequenceId ;
        tms::OperatorIntent   desiredOperatorIntent ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * OperatorIntentRequest_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *OperatorIntentRequest_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatorIntentRequest_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatorIntentRequest_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(OperatorIntentRequestSeq, OperatorIntentRequest);

    NDDSUSERDllExport
    RTIBool OperatorIntentRequest_initialize(
        OperatorIntentRequest* self);

    NDDSUSERDllExport
    RTIBool OperatorIntentRequest_initialize_ex(
        OperatorIntentRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool OperatorIntentRequest_initialize_w_params(
        OperatorIntentRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool OperatorIntentRequest_finalize_w_return(
        OperatorIntentRequest* self);

    NDDSUSERDllExport
    void OperatorIntentRequest_finalize(
        OperatorIntentRequest* self);

    NDDSUSERDllExport
    void OperatorIntentRequest_finalize_ex(
        OperatorIntentRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void OperatorIntentRequest_finalize_w_params(
        OperatorIntentRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void OperatorIntentRequest_finalize_optional_members(
        OperatorIntentRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool OperatorIntentRequest_copy(
        OperatorIntentRequest* dst,
        const OperatorIntentRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *OperatorIntentStateTYPENAME;

    struct OperatorIntentStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class OperatorIntentStateTypeSupport;
    class OperatorIntentStateDataWriter;
    class OperatorIntentStateDataReader;
    #endif
    class OperatorIntentState 
    {
      public:
        typedef struct OperatorIntentStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef OperatorIntentStateTypeSupport TypeSupport;
        typedef OperatorIntentStateDataWriter DataWriter;
        typedef OperatorIntentStateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        tms::OperatorIntent   activeOperatorIntent ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * OperatorIntentState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *OperatorIntentState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatorIntentState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *OperatorIntentState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(OperatorIntentStateSeq, OperatorIntentState);

    NDDSUSERDllExport
    RTIBool OperatorIntentState_initialize(
        OperatorIntentState* self);

    NDDSUSERDllExport
    RTIBool OperatorIntentState_initialize_ex(
        OperatorIntentState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool OperatorIntentState_initialize_w_params(
        OperatorIntentState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool OperatorIntentState_finalize_w_return(
        OperatorIntentState* self);

    NDDSUSERDllExport
    void OperatorIntentState_finalize(
        OperatorIntentState* self);

    NDDSUSERDllExport
    void OperatorIntentState_finalize_ex(
        OperatorIntentState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void OperatorIntentState_finalize_w_params(
        OperatorIntentState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void OperatorIntentState_finalize_optional_members(
        OperatorIntentState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool OperatorIntentState_copy(
        OperatorIntentState* dst,
        const OperatorIntentState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerPortConfigRequestTYPENAME;

    struct PowerPortConfigRequestSeq;
    class PowerPortConfigRequest 
    {
      public:
        typedef struct PowerPortConfigRequestSeq Seq;

        DDS_Char *   requestingDeviceId ;
        DDS_Char *   targetDeviceId ;
        tms::ConfigId   config ;
        DDS_Long   portNumber ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortConfigRequest_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortConfigRequest_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortConfigRequest_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortConfigRequest_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortConfigRequestSeq, PowerPortConfigRequest);

    NDDSUSERDllExport
    RTIBool PowerPortConfigRequest_initialize(
        PowerPortConfigRequest* self);

    NDDSUSERDllExport
    RTIBool PowerPortConfigRequest_initialize_ex(
        PowerPortConfigRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortConfigRequest_initialize_w_params(
        PowerPortConfigRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortConfigRequest_finalize_w_return(
        PowerPortConfigRequest* self);

    NDDSUSERDllExport
    void PowerPortConfigRequest_finalize(
        PowerPortConfigRequest* self);

    NDDSUSERDllExport
    void PowerPortConfigRequest_finalize_ex(
        PowerPortConfigRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortConfigRequest_finalize_w_params(
        PowerPortConfigRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortConfigRequest_finalize_optional_members(
        PowerPortConfigRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortConfigRequest_copy(
        PowerPortConfigRequest* dst,
        const PowerPortConfigRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerConnectionTYPENAME;

    struct PowerConnectionSeq;
    class PowerConnection 
    {
      public:
        typedef struct PowerConnectionSeq Seq;

        tms::PowerConnectionId   connectionId ;
        tms::PowerConnectionDetectionType   detectionType ;
        DDS_Char *   detectionSource ;
        DDS_Float   detectionConfidence ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerConnection_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerConnection_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnection_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnection_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerConnectionSeq, PowerConnection);

    NDDSUSERDllExport
    RTIBool PowerConnection_initialize(
        PowerConnection* self);

    NDDSUSERDllExport
    RTIBool PowerConnection_initialize_ex(
        PowerConnection* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerConnection_initialize_w_params(
        PowerConnection* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerConnection_finalize_w_return(
        PowerConnection* self);

    NDDSUSERDllExport
    void PowerConnection_finalize(
        PowerConnection* self);

    NDDSUSERDllExport
    void PowerConnection_finalize_ex(
        PowerConnection* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerConnection_finalize_w_params(
        PowerConnection* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerConnection_finalize_optional_members(
        PowerConnection* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerConnection_copy(
        PowerConnection* dst,
        const PowerConnection* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong PowerConnectionSequence_MINLEN= 0UL;
    static const DDS_UnsignedLong PowerConnectionSequence_MAXLEN= 200UL;
    typedef     tms::PowerConnectionSeq  PowerConnectionSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerConnectionSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerConnectionSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectionSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectionSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerConnectionSequenceSeq, PowerConnectionSequence);

    NDDSUSERDllExport
    RTIBool PowerConnectionSequence_initialize(
        PowerConnectionSequence* self);

    NDDSUSERDllExport
    RTIBool PowerConnectionSequence_initialize_ex(
        PowerConnectionSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerConnectionSequence_initialize_w_params(
        PowerConnectionSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerConnectionSequence_finalize_w_return(
        PowerConnectionSequence* self);

    NDDSUSERDllExport
    void PowerConnectionSequence_finalize(
        PowerConnectionSequence* self);

    NDDSUSERDllExport
    void PowerConnectionSequence_finalize_ex(
        PowerConnectionSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerConnectionSequence_finalize_w_params(
        PowerConnectionSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerConnectionSequence_finalize_optional_members(
        PowerConnectionSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerConnectionSequence_copy(
        PowerConnectionSequence* dst,
        const PowerConnectionSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerConnectionStateTYPENAME;

    struct PowerConnectionStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PowerConnectionStateTypeSupport;
    class PowerConnectionStateDataWriter;
    class PowerConnectionStateDataReader;
    #endif
    class PowerConnectionState 
    {
      public:
        typedef struct PowerConnectionStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PowerConnectionStateTypeSupport TypeSupport;
        typedef PowerConnectionStateDataWriter DataWriter;
        typedef PowerConnectionStateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        tms::PowerConnectionSequence   connections ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerConnectionState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerConnectionState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectionState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerConnectionState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerConnectionStateSeq, PowerConnectionState);

    NDDSUSERDllExport
    RTIBool PowerConnectionState_initialize(
        PowerConnectionState* self);

    NDDSUSERDllExport
    RTIBool PowerConnectionState_initialize_ex(
        PowerConnectionState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerConnectionState_initialize_w_params(
        PowerConnectionState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerConnectionState_finalize_w_return(
        PowerConnectionState* self);

    NDDSUSERDllExport
    void PowerConnectionState_finalize(
        PowerConnectionState* self);

    NDDSUSERDllExport
    void PowerConnectionState_finalize_ex(
        PowerConnectionState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerConnectionState_finalize_w_params(
        PowerConnectionState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerConnectionState_finalize_optional_members(
        PowerConnectionState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerConnectionState_copy(
        PowerConnectionState* dst,
        const PowerConnectionState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerSwitchCloseConditionsTYPENAME;

    struct PowerSwitchCloseConditionsSeq;
    class PowerSwitchCloseConditions 
    {
      public:
        typedef struct PowerSwitchCloseConditionsSeq Seq;

        DDS_Float   minVoltage ;
        DDS_Float   maxVoltage ;
        DDS_Float   minFrequency ;
        DDS_Float   maxFrequency ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerSwitchCloseConditions_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerSwitchCloseConditions_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchCloseConditions_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchCloseConditions_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerSwitchCloseConditionsSeq, PowerSwitchCloseConditions);

    NDDSUSERDllExport
    RTIBool PowerSwitchCloseConditions_initialize(
        PowerSwitchCloseConditions* self);

    NDDSUSERDllExport
    RTIBool PowerSwitchCloseConditions_initialize_ex(
        PowerSwitchCloseConditions* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerSwitchCloseConditions_initialize_w_params(
        PowerSwitchCloseConditions* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerSwitchCloseConditions_finalize_w_return(
        PowerSwitchCloseConditions* self);

    NDDSUSERDllExport
    void PowerSwitchCloseConditions_finalize(
        PowerSwitchCloseConditions* self);

    NDDSUSERDllExport
    void PowerSwitchCloseConditions_finalize_ex(
        PowerSwitchCloseConditions* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerSwitchCloseConditions_finalize_w_params(
        PowerSwitchCloseConditions* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerSwitchCloseConditions_finalize_optional_members(
        PowerSwitchCloseConditions* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerSwitchCloseConditions_copy(
        PowerSwitchCloseConditions* dst,
        const PowerSwitchCloseConditions* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerSwitchRequestTYPENAME;

    struct PowerSwitchRequestSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class PowerSwitchRequestTypeSupport;
    class PowerSwitchRequestDataWriter;
    class PowerSwitchRequestDataReader;
    #endif
    class PowerSwitchRequest 
    {
      public:
        typedef struct PowerSwitchRequestSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef PowerSwitchRequestTypeSupport TypeSupport;
        typedef PowerSwitchRequestDataWriter DataWriter;
        typedef PowerSwitchRequestDataReader DataReader;
        #endif

        tms::PowerPortConfigRequest   requestId ;
        DDS_UnsignedLongLong   sequenceId ;
        tms::DesiredCircuitContinuity   continuity ;
        tms::PowerSwitchCloseConditions   * switchConditions ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerSwitchRequest_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerSwitchRequest_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchRequest_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerSwitchRequest_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerSwitchRequestSeq, PowerSwitchRequest);

    NDDSUSERDllExport
    RTIBool PowerSwitchRequest_initialize(
        PowerSwitchRequest* self);

    NDDSUSERDllExport
    RTIBool PowerSwitchRequest_initialize_ex(
        PowerSwitchRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerSwitchRequest_initialize_w_params(
        PowerSwitchRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerSwitchRequest_finalize_w_return(
        PowerSwitchRequest* self);

    NDDSUSERDllExport
    void PowerSwitchRequest_finalize(
        PowerSwitchRequest* self);

    NDDSUSERDllExport
    void PowerSwitchRequest_finalize_ex(
        PowerSwitchRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerSwitchRequest_finalize_w_params(
        PowerSwitchRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerSwitchRequest_finalize_optional_members(
        PowerSwitchRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerSwitchRequest_copy(
        PowerSwitchRequest* dst,
        const PowerSwitchRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *TopicInfoTYPENAME;

    struct TopicInfoSeq;
    class TopicInfo 
    {
      public:
        typedef struct TopicInfoSeq Seq;

        DDS_Char *   dataModelVersion ;
        tms::TopicList   publishedConditionalTopics ;
        tms::TopicList   publishedOptionalTopics ;
        tms::TopicList   supportedRequestTopics ;
        tms::TopicList   * extensionTopics ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * TopicInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *TopicInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TopicInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *TopicInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(TopicInfoSeq, TopicInfo);

    NDDSUSERDllExport
    RTIBool TopicInfo_initialize(
        TopicInfo* self);

    NDDSUSERDllExport
    RTIBool TopicInfo_initialize_ex(
        TopicInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool TopicInfo_initialize_w_params(
        TopicInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool TopicInfo_finalize_w_return(
        TopicInfo* self);

    NDDSUSERDllExport
    void TopicInfo_finalize(
        TopicInfo* self);

    NDDSUSERDllExport
    void TopicInfo_finalize_ex(
        TopicInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void TopicInfo_finalize_w_params(
        TopicInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void TopicInfo_finalize_optional_members(
        TopicInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool TopicInfo_copy(
        TopicInfo* dst,
        const TopicInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ActiveConversionInfoTYPENAME;

    struct ActiveConversionInfoSeq;
    class ActiveConversionInfo 
    {
      public:
        typedef struct ActiveConversionInfoSeq Seq;

        tms::LoadSharingInfoSequence   loadSharing ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ActiveConversionInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ActiveConversionInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ActiveConversionInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ActiveConversionInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ActiveConversionInfoSeq, ActiveConversionInfo);

    NDDSUSERDllExport
    RTIBool ActiveConversionInfo_initialize(
        ActiveConversionInfo* self);

    NDDSUSERDllExport
    RTIBool ActiveConversionInfo_initialize_ex(
        ActiveConversionInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ActiveConversionInfo_initialize_w_params(
        ActiveConversionInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ActiveConversionInfo_finalize_w_return(
        ActiveConversionInfo* self);

    NDDSUSERDllExport
    void ActiveConversionInfo_finalize(
        ActiveConversionInfo* self);

    NDDSUSERDllExport
    void ActiveConversionInfo_finalize_ex(
        ActiveConversionInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ActiveConversionInfo_finalize_w_params(
        ActiveConversionInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ActiveConversionInfo_finalize_optional_members(
        ActiveConversionInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ActiveConversionInfo_copy(
        ActiveConversionInfo* dst,
        const ActiveConversionInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ConversionTapInfoTYPENAME;

    struct ConversionTapInfoSeq;
    class ConversionTapInfo 
    {
      public:
        typedef struct ConversionTapInfoSeq Seq;

        DDS_Long   tapId ;
        DDS_Float   phaseShift ;
        DDS_Float   voltageRatio ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ConversionTapInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ConversionTapInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConversionTapInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConversionTapInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ConversionTapInfoSeq, ConversionTapInfo);

    NDDSUSERDllExport
    RTIBool ConversionTapInfo_initialize(
        ConversionTapInfo* self);

    NDDSUSERDllExport
    RTIBool ConversionTapInfo_initialize_ex(
        ConversionTapInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ConversionTapInfo_initialize_w_params(
        ConversionTapInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ConversionTapInfo_finalize_w_return(
        ConversionTapInfo* self);

    NDDSUSERDllExport
    void ConversionTapInfo_finalize(
        ConversionTapInfo* self);

    NDDSUSERDllExport
    void ConversionTapInfo_finalize_ex(
        ConversionTapInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ConversionTapInfo_finalize_w_params(
        ConversionTapInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ConversionTapInfo_finalize_optional_members(
        ConversionTapInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ConversionTapInfo_copy(
        ConversionTapInfo* dst,
        const ConversionTapInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong ConversionTapInfoSequence_MINLEN= 1UL;
    static const DDS_UnsignedLong ConversionTapInfoSequence_MAXLEN= (tms::MAX_TAPS);
    typedef     tms::ConversionTapInfoSeq  ConversionTapInfoSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ConversionTapInfoSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ConversionTapInfoSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConversionTapInfoSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConversionTapInfoSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ConversionTapInfoSequenceSeq, ConversionTapInfoSequence);

    NDDSUSERDllExport
    RTIBool ConversionTapInfoSequence_initialize(
        ConversionTapInfoSequence* self);

    NDDSUSERDllExport
    RTIBool ConversionTapInfoSequence_initialize_ex(
        ConversionTapInfoSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ConversionTapInfoSequence_initialize_w_params(
        ConversionTapInfoSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ConversionTapInfoSequence_finalize_w_return(
        ConversionTapInfoSequence* self);

    NDDSUSERDllExport
    void ConversionTapInfoSequence_finalize(
        ConversionTapInfoSequence* self);

    NDDSUSERDllExport
    void ConversionTapInfoSequence_finalize_ex(
        ConversionTapInfoSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ConversionTapInfoSequence_finalize_w_params(
        ConversionTapInfoSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ConversionTapInfoSequence_finalize_optional_members(
        ConversionTapInfoSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ConversionTapInfoSequence_copy(
        ConversionTapInfoSequence* dst,
        const ConversionTapInfoSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerPortConversionInfoTYPENAME;

    struct PowerPortConversionInfoSeq;
    class PowerPortConversionInfo 
    {
      public:
        typedef struct PowerPortConversionInfoSeq Seq;

        DDS_Long   portNumber ;
        tms::ConversionTapInfoSequence   conversionTaps ;
        DDS_Boolean   changeUnderLoad ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortConversionInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortConversionInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortConversionInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortConversionInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortConversionInfoSeq, PowerPortConversionInfo);

    NDDSUSERDllExport
    RTIBool PowerPortConversionInfo_initialize(
        PowerPortConversionInfo* self);

    NDDSUSERDllExport
    RTIBool PowerPortConversionInfo_initialize_ex(
        PowerPortConversionInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortConversionInfo_initialize_w_params(
        PowerPortConversionInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortConversionInfo_finalize_w_return(
        PowerPortConversionInfo* self);

    NDDSUSERDllExport
    void PowerPortConversionInfo_finalize(
        PowerPortConversionInfo* self);

    NDDSUSERDllExport
    void PowerPortConversionInfo_finalize_ex(
        PowerPortConversionInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortConversionInfo_finalize_w_params(
        PowerPortConversionInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortConversionInfo_finalize_optional_members(
        PowerPortConversionInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortConversionInfo_copy(
        PowerPortConversionInfo* dst,
        const PowerPortConversionInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    static const DDS_UnsignedLong PowerPortConversionInfoSequence_MINLEN= 1UL;
    static const DDS_UnsignedLong PowerPortConversionInfoSequence_MAXLEN= (tms::MAX_PORTS);
    typedef     tms::PowerPortConversionInfoSeq  PowerPortConversionInfoSequence ;
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerPortConversionInfoSequence_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortConversionInfoSequence_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortConversionInfoSequence_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortConversionInfoSequence_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerPortConversionInfoSequenceSeq, PowerPortConversionInfoSequence);

    NDDSUSERDllExport
    RTIBool PowerPortConversionInfoSequence_initialize(
        PowerPortConversionInfoSequence* self);

    NDDSUSERDllExport
    RTIBool PowerPortConversionInfoSequence_initialize_ex(
        PowerPortConversionInfoSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerPortConversionInfoSequence_initialize_w_params(
        PowerPortConversionInfoSequence* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerPortConversionInfoSequence_finalize_w_return(
        PowerPortConversionInfoSequence* self);

    NDDSUSERDllExport
    void PowerPortConversionInfoSequence_finalize(
        PowerPortConversionInfoSequence* self);

    NDDSUSERDllExport
    void PowerPortConversionInfoSequence_finalize_ex(
        PowerPortConversionInfoSequence* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerPortConversionInfoSequence_finalize_w_params(
        PowerPortConversionInfoSequence* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerPortConversionInfoSequence_finalize_optional_members(
        PowerPortConversionInfoSequence* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerPortConversionInfoSequence_copy(
        PowerPortConversionInfoSequence* dst,
        const PowerPortConversionInfoSequence* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PassiveConversionInfoTYPENAME;

    struct PassiveConversionInfoSeq;
    class PassiveConversionInfo 
    {
      public:
        typedef struct PassiveConversionInfoSeq Seq;

        tms::PowerPortConversionInfoSequence   portConversion ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PassiveConversionInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PassiveConversionInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PassiveConversionInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PassiveConversionInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PassiveConversionInfoSeq, PassiveConversionInfo);

    NDDSUSERDllExport
    RTIBool PassiveConversionInfo_initialize(
        PassiveConversionInfo* self);

    NDDSUSERDllExport
    RTIBool PassiveConversionInfo_initialize_ex(
        PassiveConversionInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PassiveConversionInfo_initialize_w_params(
        PassiveConversionInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PassiveConversionInfo_finalize_w_return(
        PassiveConversionInfo* self);

    NDDSUSERDllExport
    void PassiveConversionInfo_finalize(
        PassiveConversionInfo* self);

    NDDSUSERDllExport
    void PassiveConversionInfo_finalize_ex(
        PassiveConversionInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PassiveConversionInfo_finalize_w_params(
        PassiveConversionInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PassiveConversionInfo_finalize_optional_members(
        PassiveConversionInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PassiveConversionInfo_copy(
        PassiveConversionInfo* dst,
        const PassiveConversionInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ConversionInfoTYPENAME;

    struct ConversionInfoSeq;
    class ConversionInfo 
    {
      public:
        typedef struct ConversionInfoSeq Seq;

        tms::ConversionFeatureSequence   features ;
        tms::ActiveConversionInfo   * activeConversion ;
        tms::PassiveConversionInfo   * passiveConversion ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ConversionInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ConversionInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConversionInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ConversionInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ConversionInfoSeq, ConversionInfo);

    NDDSUSERDllExport
    RTIBool ConversionInfo_initialize(
        ConversionInfo* self);

    NDDSUSERDllExport
    RTIBool ConversionInfo_initialize_ex(
        ConversionInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ConversionInfo_initialize_w_params(
        ConversionInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ConversionInfo_finalize_w_return(
        ConversionInfo* self);

    NDDSUSERDllExport
    void ConversionInfo_finalize(
        ConversionInfo* self);

    NDDSUSERDllExport
    void ConversionInfo_finalize_ex(
        ConversionInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ConversionInfo_finalize_w_params(
        ConversionInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ConversionInfo_finalize_optional_members(
        ConversionInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ConversionInfo_copy(
        ConversionInfo* dst,
        const ConversionInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ProductInfoTYPENAME;

    struct ProductInfoSeq;
    class ProductInfo 
    {
      public:
        typedef struct ProductInfoSeq Seq;

        tms::NatoStockNumber   nsn ;
        tms::GlobalTradeItemNumber   gtin ;
        DDS_Char *   manufacturerName ;
        DDS_Char *   modelName ;
        DDS_Char *   modelNumber ;
        DDS_Char *   serialNumber ;
        DDS_Char *   softwareVersion ;
        DDS_Char *   platformId ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ProductInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ProductInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ProductInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ProductInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ProductInfoSeq, ProductInfo);

    NDDSUSERDllExport
    RTIBool ProductInfo_initialize(
        ProductInfo* self);

    NDDSUSERDllExport
    RTIBool ProductInfo_initialize_ex(
        ProductInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ProductInfo_initialize_w_params(
        ProductInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ProductInfo_finalize_w_return(
        ProductInfo* self);

    NDDSUSERDllExport
    void ProductInfo_finalize(
        ProductInfo* self);

    NDDSUSERDllExport
    void ProductInfo_finalize_ex(
        ProductInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ProductInfo_finalize_w_params(
        ProductInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ProductInfo_finalize_optional_members(
        ProductInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ProductInfo_copy(
        ProductInfo* dst,
        const ProductInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *MicrogridDashboardInfoTYPENAME;

    struct MicrogridDashboardInfoSeq;
    class MicrogridDashboardInfo 
    {
      public:
        typedef struct MicrogridDashboardInfoSeq Seq;

        tms::MicrogridDashboardFeatureSequence   features ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * MicrogridDashboardInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *MicrogridDashboardInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridDashboardInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridDashboardInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(MicrogridDashboardInfoSeq, MicrogridDashboardInfo);

    NDDSUSERDllExport
    RTIBool MicrogridDashboardInfo_initialize(
        MicrogridDashboardInfo* self);

    NDDSUSERDllExport
    RTIBool MicrogridDashboardInfo_initialize_ex(
        MicrogridDashboardInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool MicrogridDashboardInfo_initialize_w_params(
        MicrogridDashboardInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool MicrogridDashboardInfo_finalize_w_return(
        MicrogridDashboardInfo* self);

    NDDSUSERDllExport
    void MicrogridDashboardInfo_finalize(
        MicrogridDashboardInfo* self);

    NDDSUSERDllExport
    void MicrogridDashboardInfo_finalize_ex(
        MicrogridDashboardInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void MicrogridDashboardInfo_finalize_w_params(
        MicrogridDashboardInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void MicrogridDashboardInfo_finalize_optional_members(
        MicrogridDashboardInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool MicrogridDashboardInfo_copy(
        MicrogridDashboardInfo* dst,
        const MicrogridDashboardInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *MicrogridControllerInfoTYPENAME;

    struct MicrogridControllerInfoSeq;
    class MicrogridControllerInfo 
    {
      public:
        typedef struct MicrogridControllerInfoSeq Seq;

        tms::MicrogridControllerFeatureSequence   features ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * MicrogridControllerInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *MicrogridControllerInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridControllerInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *MicrogridControllerInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(MicrogridControllerInfoSeq, MicrogridControllerInfo);

    NDDSUSERDllExport
    RTIBool MicrogridControllerInfo_initialize(
        MicrogridControllerInfo* self);

    NDDSUSERDllExport
    RTIBool MicrogridControllerInfo_initialize_ex(
        MicrogridControllerInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool MicrogridControllerInfo_initialize_w_params(
        MicrogridControllerInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool MicrogridControllerInfo_finalize_w_return(
        MicrogridControllerInfo* self);

    NDDSUSERDllExport
    void MicrogridControllerInfo_finalize(
        MicrogridControllerInfo* self);

    NDDSUSERDllExport
    void MicrogridControllerInfo_finalize_ex(
        MicrogridControllerInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void MicrogridControllerInfo_finalize_w_params(
        MicrogridControllerInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void MicrogridControllerInfo_finalize_optional_members(
        MicrogridControllerInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool MicrogridControllerInfo_copy(
        MicrogridControllerInfo* dst,
        const MicrogridControllerInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ReplyStatusTYPENAME;

    struct ReplyStatusSeq;
    class ReplyStatus 
    {
      public:
        typedef struct ReplyStatusSeq Seq;

        tms::ReplyCode   code ;
        DDS_Char *   reason ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ReplyStatus_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ReplyStatus_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ReplyStatus_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ReplyStatus_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ReplyStatusSeq, ReplyStatus);

    NDDSUSERDllExport
    RTIBool ReplyStatus_initialize(
        ReplyStatus* self);

    NDDSUSERDllExport
    RTIBool ReplyStatus_initialize_ex(
        ReplyStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ReplyStatus_initialize_w_params(
        ReplyStatus* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ReplyStatus_finalize_w_return(
        ReplyStatus* self);

    NDDSUSERDllExport
    void ReplyStatus_finalize(
        ReplyStatus* self);

    NDDSUSERDllExport
    void ReplyStatus_finalize_ex(
        ReplyStatus* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ReplyStatus_finalize_w_params(
        ReplyStatus* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ReplyStatus_finalize_optional_members(
        ReplyStatus* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ReplyStatus_copy(
        ReplyStatus* dst,
        const ReplyStatus* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ReplyTYPENAME;

    struct ReplySeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ReplyTypeSupport;
    class ReplyDataWriter;
    class ReplyDataReader;
    #endif
    class Reply 
    {
      public:
        typedef struct ReplySeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ReplyTypeSupport TypeSupport;
        typedef ReplyDataWriter DataWriter;
        typedef ReplyDataReader DataReader;
        #endif

        DDS_Char *   requestingDeviceId ;
        DDS_Char *   targetDeviceId ;
        tms::ConfigId   config ;
        DDS_Long   portNumber ;
        DDS_UnsignedLongLong   requestSequenceId ;
        tms::ReplyStatus   status ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * Reply_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *Reply_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Reply_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *Reply_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ReplySeq, Reply);

    NDDSUSERDllExport
    RTIBool Reply_initialize(
        Reply* self);

    NDDSUSERDllExport
    RTIBool Reply_initialize_ex(
        Reply* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool Reply_initialize_w_params(
        Reply* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool Reply_finalize_w_return(
        Reply* self);

    NDDSUSERDllExport
    void Reply_finalize(
        Reply* self);

    NDDSUSERDllExport
    void Reply_finalize_ex(
        Reply* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void Reply_finalize_w_params(
        Reply* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void Reply_finalize_optional_members(
        Reply* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool Reply_copy(
        Reply* dst,
        const Reply* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *EnergyStartStopRequestTYPENAME;

    struct EnergyStartStopRequestSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class EnergyStartStopRequestTypeSupport;
    class EnergyStartStopRequestDataWriter;
    class EnergyStartStopRequestDataReader;
    #endif
    class EnergyStartStopRequest 
    {
      public:
        typedef struct EnergyStartStopRequestSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef EnergyStartStopRequestTypeSupport TypeSupport;
        typedef EnergyStartStopRequestDataWriter DataWriter;
        typedef EnergyStartStopRequestDataReader DataReader;
        #endif

        tms::DeviceConfigRequest   requestId ;
        DDS_UnsignedLongLong   sequenceId ;
        tms::EnergyStartStopLevel   fromLevel ;
        tms::EnergyStartStopLevel   toLevel ;
        tms::PowerSwitchCloseConditions   * switchConditions ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * EnergyStartStopRequest_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EnergyStartStopRequest_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnergyStartStopRequest_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnergyStartStopRequest_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EnergyStartStopRequestSeq, EnergyStartStopRequest);

    NDDSUSERDllExport
    RTIBool EnergyStartStopRequest_initialize(
        EnergyStartStopRequest* self);

    NDDSUSERDllExport
    RTIBool EnergyStartStopRequest_initialize_ex(
        EnergyStartStopRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EnergyStartStopRequest_initialize_w_params(
        EnergyStartStopRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EnergyStartStopRequest_finalize_w_return(
        EnergyStartStopRequest* self);

    NDDSUSERDllExport
    void EnergyStartStopRequest_finalize(
        EnergyStartStopRequest* self);

    NDDSUSERDllExport
    void EnergyStartStopRequest_finalize_ex(
        EnergyStartStopRequest* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EnergyStartStopRequest_finalize_w_params(
        EnergyStartStopRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EnergyStartStopRequest_finalize_optional_members(
        EnergyStartStopRequest* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EnergyStartStopRequest_copy(
        EnergyStartStopRequest* dst,
        const EnergyStartStopRequest* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *EnergyStartStopStateTYPENAME;

    struct EnergyStartStopStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class EnergyStartStopStateTypeSupport;
    class EnergyStartStopStateDataWriter;
    class EnergyStartStopStateDataReader;
    #endif
    class EnergyStartStopState 
    {
      public:
        typedef struct EnergyStartStopStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef EnergyStartStopStateTypeSupport TypeSupport;
        typedef EnergyStartStopStateDataWriter DataWriter;
        typedef EnergyStartStopStateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        tms::EnergyStartStopLevel   presentLevel ;
        tms::EnergyStartStopLevel   futureLevel ;
        DDS_Boolean   requestLock ;
        DDS_Float   elapsedTime ;
        DDS_Float   remainingTime ;
        tms::PowerSwitchReason   presentLevelReason ;
        DDS_Char *   presentLevelActor ;
        tms::PowerSwitchTransitionCode   futureLevelReason ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * EnergyStartStopState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *EnergyStartStopState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnergyStartStopState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *EnergyStartStopState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(EnergyStartStopStateSeq, EnergyStartStopState);

    NDDSUSERDllExport
    RTIBool EnergyStartStopState_initialize(
        EnergyStartStopState* self);

    NDDSUSERDllExport
    RTIBool EnergyStartStopState_initialize_ex(
        EnergyStartStopState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool EnergyStartStopState_initialize_w_params(
        EnergyStartStopState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool EnergyStartStopState_finalize_w_return(
        EnergyStartStopState* self);

    NDDSUSERDllExport
    void EnergyStartStopState_finalize(
        EnergyStartStopState* self);

    NDDSUSERDllExport
    void EnergyStartStopState_finalize_ex(
        EnergyStartStopState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void EnergyStartStopState_finalize_w_params(
        EnergyStartStopState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void EnergyStartStopState_finalize_optional_members(
        EnergyStartStopState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool EnergyStartStopState_copy(
        EnergyStartStopState* dst,
        const EnergyStartStopState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ActiveMicrogridControllerStateTYPENAME;

    struct ActiveMicrogridControllerStateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class ActiveMicrogridControllerStateTypeSupport;
    class ActiveMicrogridControllerStateDataWriter;
    class ActiveMicrogridControllerStateDataReader;
    #endif
    class ActiveMicrogridControllerState 
    {
      public:
        typedef struct ActiveMicrogridControllerStateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef ActiveMicrogridControllerStateTypeSupport TypeSupport;
        typedef ActiveMicrogridControllerStateDataWriter DataWriter;
        typedef ActiveMicrogridControllerStateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        DDS_Char *   masterId ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ActiveMicrogridControllerState_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ActiveMicrogridControllerState_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ActiveMicrogridControllerState_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ActiveMicrogridControllerState_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ActiveMicrogridControllerStateSeq, ActiveMicrogridControllerState);

    NDDSUSERDllExport
    RTIBool ActiveMicrogridControllerState_initialize(
        ActiveMicrogridControllerState* self);

    NDDSUSERDllExport
    RTIBool ActiveMicrogridControllerState_initialize_ex(
        ActiveMicrogridControllerState* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ActiveMicrogridControllerState_initialize_w_params(
        ActiveMicrogridControllerState* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ActiveMicrogridControllerState_finalize_w_return(
        ActiveMicrogridControllerState* self);

    NDDSUSERDllExport
    void ActiveMicrogridControllerState_finalize(
        ActiveMicrogridControllerState* self);

    NDDSUSERDllExport
    void ActiveMicrogridControllerState_finalize_ex(
        ActiveMicrogridControllerState* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ActiveMicrogridControllerState_finalize_w_params(
        ActiveMicrogridControllerState* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ActiveMicrogridControllerState_finalize_optional_members(
        ActiveMicrogridControllerState* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ActiveMicrogridControllerState_copy(
        ActiveMicrogridControllerState* dst,
        const ActiveMicrogridControllerState* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
    namespace ac {
        static const DDS_UnsignedLong PhaseAngleSequence_MINLEN= 0UL;
        static const DDS_UnsignedLong PhaseAngleSequence_MAXLEN= 3UL;
        typedef     DDS_FloatSeq  PhaseAngleSequence ;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PhaseAngleSequence_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PhaseAngleSequence_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PhaseAngleSequence_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PhaseAngleSequence_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PhaseAngleSequenceSeq, PhaseAngleSequence);

        NDDSUSERDllExport
        RTIBool PhaseAngleSequence_initialize(
            PhaseAngleSequence* self);

        NDDSUSERDllExport
        RTIBool PhaseAngleSequence_initialize_ex(
            PhaseAngleSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PhaseAngleSequence_initialize_w_params(
            PhaseAngleSequence* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PhaseAngleSequence_finalize_w_return(
            PhaseAngleSequence* self);

        NDDSUSERDllExport
        void PhaseAngleSequence_finalize(
            PhaseAngleSequence* self);

        NDDSUSERDllExport
        void PhaseAngleSequence_finalize_ex(
            PhaseAngleSequence* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PhaseAngleSequence_finalize_w_params(
            PhaseAngleSequence* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PhaseAngleSequence_finalize_optional_members(
            PhaseAngleSequence* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PhaseAngleSequence_copy(
            PhaseAngleSequence* dst,
            const PhaseAngleSequence* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *PowerLineMeasurementTYPENAME;

        struct PowerLineMeasurementSeq;
        class PowerLineMeasurement 
        {
          public:
            typedef struct PowerLineMeasurementSeq Seq;

            DDS_Float   voltage ;
            DDS_Float   frequency ;
            DDS_Float   amperage ;
            DDS_Float   phaseOffset ;
            DDS_Float   realPower ;
            DDS_Float   reactivePower ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PowerLineMeasurement_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PowerLineMeasurement_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerLineMeasurement_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerLineMeasurement_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PowerLineMeasurementSeq, PowerLineMeasurement);

        NDDSUSERDllExport
        RTIBool PowerLineMeasurement_initialize(
            PowerLineMeasurement* self);

        NDDSUSERDllExport
        RTIBool PowerLineMeasurement_initialize_ex(
            PowerLineMeasurement* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PowerLineMeasurement_initialize_w_params(
            PowerLineMeasurement* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PowerLineMeasurement_finalize_w_return(
            PowerLineMeasurement* self);

        NDDSUSERDllExport
        void PowerLineMeasurement_finalize(
            PowerLineMeasurement* self);

        NDDSUSERDllExport
        void PowerLineMeasurement_finalize_ex(
            PowerLineMeasurement* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PowerLineMeasurement_finalize_w_params(
            PowerLineMeasurement* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PowerLineMeasurement_finalize_optional_members(
            PowerLineMeasurement* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PowerLineMeasurement_copy(
            PowerLineMeasurement* dst,
            const PowerLineMeasurement* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const DDS_UnsignedLong PowerLineMeasurementSequence_MINLEN= 1UL;
        static const DDS_UnsignedLong PowerLineMeasurementSequence_MAXLEN= 4UL;
        typedef     tms::ac::PowerLineMeasurementSeq  PowerLineMeasurementSequence ;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PowerLineMeasurementSequence_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PowerLineMeasurementSequence_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerLineMeasurementSequence_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerLineMeasurementSequence_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PowerLineMeasurementSequenceSeq, PowerLineMeasurementSequence);

        NDDSUSERDllExport
        RTIBool PowerLineMeasurementSequence_initialize(
            PowerLineMeasurementSequence* self);

        NDDSUSERDllExport
        RTIBool PowerLineMeasurementSequence_initialize_ex(
            PowerLineMeasurementSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PowerLineMeasurementSequence_initialize_w_params(
            PowerLineMeasurementSequence* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PowerLineMeasurementSequence_finalize_w_return(
            PowerLineMeasurementSequence* self);

        NDDSUSERDllExport
        void PowerLineMeasurementSequence_finalize(
            PowerLineMeasurementSequence* self);

        NDDSUSERDllExport
        void PowerLineMeasurementSequence_finalize_ex(
            PowerLineMeasurementSequence* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PowerLineMeasurementSequence_finalize_w_params(
            PowerLineMeasurementSequence* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PowerLineMeasurementSequence_finalize_optional_members(
            PowerLineMeasurementSequence* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PowerLineMeasurementSequence_copy(
            PowerLineMeasurementSequence* dst,
            const PowerLineMeasurementSequence* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *PowerPortMeasurementTYPENAME;

        struct PowerPortMeasurementSeq;
        class PowerPortMeasurement 
        {
          public:
            typedef struct PowerPortMeasurementSeq Seq;

            DDS_Long   portNumber ;
            tms::ac::PowerLineMeasurementSequence   line ;
            tms::ac::PhaseAngleSequence   phaseAngle ;
            DDS_Float   realPowerRateOfChange ;
            DDS_Float   reactivePowerRateOfChange ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PowerPortMeasurement_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortMeasurement_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortMeasurement_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortMeasurement_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PowerPortMeasurementSeq, PowerPortMeasurement);

        NDDSUSERDllExport
        RTIBool PowerPortMeasurement_initialize(
            PowerPortMeasurement* self);

        NDDSUSERDllExport
        RTIBool PowerPortMeasurement_initialize_ex(
            PowerPortMeasurement* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PowerPortMeasurement_initialize_w_params(
            PowerPortMeasurement* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PowerPortMeasurement_finalize_w_return(
            PowerPortMeasurement* self);

        NDDSUSERDllExport
        void PowerPortMeasurement_finalize(
            PowerPortMeasurement* self);

        NDDSUSERDllExport
        void PowerPortMeasurement_finalize_ex(
            PowerPortMeasurement* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PowerPortMeasurement_finalize_w_params(
            PowerPortMeasurement* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PowerPortMeasurement_finalize_optional_members(
            PowerPortMeasurement* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PowerPortMeasurement_copy(
            PowerPortMeasurement* dst,
            const PowerPortMeasurement* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const DDS_UnsignedLong PowerPortMeasurementSequence_MINLEN= 0UL;
        static const DDS_UnsignedLong PowerPortMeasurementSequence_MAXLEN= (tms::MAX_PORTS);
        typedef     tms::ac::PowerPortMeasurementSeq  PowerPortMeasurementSequence ;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PowerPortMeasurementSequence_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortMeasurementSequence_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortMeasurementSequence_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortMeasurementSequence_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PowerPortMeasurementSequenceSeq, PowerPortMeasurementSequence);

        NDDSUSERDllExport
        RTIBool PowerPortMeasurementSequence_initialize(
            PowerPortMeasurementSequence* self);

        NDDSUSERDllExport
        RTIBool PowerPortMeasurementSequence_initialize_ex(
            PowerPortMeasurementSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PowerPortMeasurementSequence_initialize_w_params(
            PowerPortMeasurementSequence* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PowerPortMeasurementSequence_finalize_w_return(
            PowerPortMeasurementSequence* self);

        NDDSUSERDllExport
        void PowerPortMeasurementSequence_finalize(
            PowerPortMeasurementSequence* self);

        NDDSUSERDllExport
        void PowerPortMeasurementSequence_finalize_ex(
            PowerPortMeasurementSequence* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PowerPortMeasurementSequence_finalize_w_params(
            PowerPortMeasurementSequence* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PowerPortMeasurementSequence_finalize_optional_members(
            PowerPortMeasurementSequence* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PowerPortMeasurementSequence_copy(
            PowerPortMeasurementSequence* dst,
            const PowerPortMeasurementSequence* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *MeasurementUpdateTYPENAME;

        struct MeasurementUpdateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class MeasurementUpdateTypeSupport;
        class MeasurementUpdateDataWriter;
        class MeasurementUpdateDataReader;
        #endif
        class MeasurementUpdate 
        {
          public:
            typedef struct MeasurementUpdateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef MeasurementUpdateTypeSupport TypeSupport;
            typedef MeasurementUpdateDataWriter DataWriter;
            typedef MeasurementUpdateDataReader DataReader;
            #endif

            DDS_Char *   deviceId ;
            tms::ClockMonotonic   timeMeasured ;
            tms::ac::PowerPortMeasurementSequence   externalMeasurement ;
            tms::ac::PowerPortMeasurementSequence   internalMeasurement ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * MeasurementUpdate_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *MeasurementUpdate_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *MeasurementUpdate_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *MeasurementUpdate_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(MeasurementUpdateSeq, MeasurementUpdate);

        NDDSUSERDllExport
        RTIBool MeasurementUpdate_initialize(
            MeasurementUpdate* self);

        NDDSUSERDllExport
        RTIBool MeasurementUpdate_initialize_ex(
            MeasurementUpdate* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool MeasurementUpdate_initialize_w_params(
            MeasurementUpdate* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool MeasurementUpdate_finalize_w_return(
            MeasurementUpdate* self);

        NDDSUSERDllExport
        void MeasurementUpdate_finalize(
            MeasurementUpdate* self);

        NDDSUSERDllExport
        void MeasurementUpdate_finalize_ex(
            MeasurementUpdate* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void MeasurementUpdate_finalize_w_params(
            MeasurementUpdate* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void MeasurementUpdate_finalize_optional_members(
            MeasurementUpdate* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool MeasurementUpdate_copy(
            MeasurementUpdate* dst,
            const MeasurementUpdate* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *LoadSharingParametersTYPENAME;

        struct LoadSharingParametersSeq;
        class LoadSharingParameters 
        {
          public:
            typedef struct LoadSharingParametersSeq Seq;

            DDS_Long   portNumber ;
            tms::ControlCurve   referenceFrequency ;
            tms::ControlCurve   referenceVoltage ;
            DDS_Float   minRealPower ;
            DDS_Float   maxRealPower ;
            DDS_Float   minFrequency ;
            DDS_Float   maxFrequency ;
            DDS_Float   minReactivePower ;
            DDS_Float   maxReactivePower ;
            DDS_Float   minVoltage ;
            DDS_Float   maxVoltage ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * LoadSharingParameters_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *LoadSharingParameters_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingParameters_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingParameters_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(LoadSharingParametersSeq, LoadSharingParameters);

        NDDSUSERDllExport
        RTIBool LoadSharingParameters_initialize(
            LoadSharingParameters* self);

        NDDSUSERDllExport
        RTIBool LoadSharingParameters_initialize_ex(
            LoadSharingParameters* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool LoadSharingParameters_initialize_w_params(
            LoadSharingParameters* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool LoadSharingParameters_finalize_w_return(
            LoadSharingParameters* self);

        NDDSUSERDllExport
        void LoadSharingParameters_finalize(
            LoadSharingParameters* self);

        NDDSUSERDllExport
        void LoadSharingParameters_finalize_ex(
            LoadSharingParameters* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void LoadSharingParameters_finalize_w_params(
            LoadSharingParameters* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void LoadSharingParameters_finalize_optional_members(
            LoadSharingParameters* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool LoadSharingParameters_copy(
            LoadSharingParameters* dst,
            const LoadSharingParameters* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const DDS_UnsignedLong LoadSharingParameterSequence_MINLEN= 1UL;
        static const DDS_UnsignedLong LoadSharingParameterSequence_MAXLEN= (tms::MAX_PORTS);
        typedef     tms::ac::LoadSharingParametersSeq  LoadSharingParameterSequence ;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * LoadSharingParameterSequence_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *LoadSharingParameterSequence_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingParameterSequence_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingParameterSequence_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(LoadSharingParameterSequenceSeq, LoadSharingParameterSequence);

        NDDSUSERDllExport
        RTIBool LoadSharingParameterSequence_initialize(
            LoadSharingParameterSequence* self);

        NDDSUSERDllExport
        RTIBool LoadSharingParameterSequence_initialize_ex(
            LoadSharingParameterSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool LoadSharingParameterSequence_initialize_w_params(
            LoadSharingParameterSequence* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool LoadSharingParameterSequence_finalize_w_return(
            LoadSharingParameterSequence* self);

        NDDSUSERDllExport
        void LoadSharingParameterSequence_finalize(
            LoadSharingParameterSequence* self);

        NDDSUSERDllExport
        void LoadSharingParameterSequence_finalize_ex(
            LoadSharingParameterSequence* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void LoadSharingParameterSequence_finalize_w_params(
            LoadSharingParameterSequence* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void LoadSharingParameterSequence_finalize_optional_members(
            LoadSharingParameterSequence* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool LoadSharingParameterSequence_copy(
            LoadSharingParameterSequence* dst,
            const LoadSharingParameterSequence* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *LoadSharingRequestTYPENAME;

        struct LoadSharingRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class LoadSharingRequestTypeSupport;
        class LoadSharingRequestDataWriter;
        class LoadSharingRequestDataReader;
        #endif
        class LoadSharingRequest 
        {
          public:
            typedef struct LoadSharingRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef LoadSharingRequestTypeSupport TypeSupport;
            typedef LoadSharingRequestDataWriter DataWriter;
            typedef LoadSharingRequestDataReader DataReader;
            #endif

            tms::PowerPortConfigRequest   requestId ;
            DDS_UnsignedLongLong   sequenceId ;
            tms::ac::LoadSharingParameters   parameters ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * LoadSharingRequest_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *LoadSharingRequest_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingRequest_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingRequest_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(LoadSharingRequestSeq, LoadSharingRequest);

        NDDSUSERDllExport
        RTIBool LoadSharingRequest_initialize(
            LoadSharingRequest* self);

        NDDSUSERDllExport
        RTIBool LoadSharingRequest_initialize_ex(
            LoadSharingRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool LoadSharingRequest_initialize_w_params(
            LoadSharingRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool LoadSharingRequest_finalize_w_return(
            LoadSharingRequest* self);

        NDDSUSERDllExport
        void LoadSharingRequest_finalize(
            LoadSharingRequest* self);

        NDDSUSERDllExport
        void LoadSharingRequest_finalize_ex(
            LoadSharingRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void LoadSharingRequest_finalize_w_params(
            LoadSharingRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void LoadSharingRequest_finalize_optional_members(
            LoadSharingRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool LoadSharingRequest_copy(
            LoadSharingRequest* dst,
            const LoadSharingRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *LoadSharingStateTYPENAME;

        struct LoadSharingStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class LoadSharingStateTypeSupport;
        class LoadSharingStateDataWriter;
        class LoadSharingStateDataReader;
        #endif
        class LoadSharingState 
        {
          public:
            typedef struct LoadSharingStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef LoadSharingStateTypeSupport TypeSupport;
            typedef LoadSharingStateDataWriter DataWriter;
            typedef LoadSharingStateDataReader DataReader;
            #endif

            DDS_Char *   deviceId ;
            tms::ConfigId   config ;
            tms::ac::LoadSharingParameterSequence   parameters ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * LoadSharingState_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *LoadSharingState_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingState_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingState_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(LoadSharingStateSeq, LoadSharingState);

        NDDSUSERDllExport
        RTIBool LoadSharingState_initialize(
            LoadSharingState* self);

        NDDSUSERDllExport
        RTIBool LoadSharingState_initialize_ex(
            LoadSharingState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool LoadSharingState_initialize_w_params(
            LoadSharingState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool LoadSharingState_finalize_w_return(
            LoadSharingState* self);

        NDDSUSERDllExport
        void LoadSharingState_finalize(
            LoadSharingState* self);

        NDDSUSERDllExport
        void LoadSharingState_finalize_ex(
            LoadSharingState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void LoadSharingState_finalize_w_params(
            LoadSharingState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void LoadSharingState_finalize_optional_members(
            LoadSharingState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool LoadSharingState_copy(
            LoadSharingState* dst,
            const LoadSharingState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace ac  */
    namespace dc {

        extern const char *PowerLineMeasurementTYPENAME;

        struct PowerLineMeasurementSeq;
        class PowerLineMeasurement 
        {
          public:
            typedef struct PowerLineMeasurementSeq Seq;

            DDS_Float   voltage ;
            DDS_Float   amperage ;
            DDS_Float   power ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PowerLineMeasurement_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PowerLineMeasurement_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerLineMeasurement_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerLineMeasurement_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PowerLineMeasurementSeq, PowerLineMeasurement);

        NDDSUSERDllExport
        RTIBool PowerLineMeasurement_initialize(
            PowerLineMeasurement* self);

        NDDSUSERDllExport
        RTIBool PowerLineMeasurement_initialize_ex(
            PowerLineMeasurement* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PowerLineMeasurement_initialize_w_params(
            PowerLineMeasurement* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PowerLineMeasurement_finalize_w_return(
            PowerLineMeasurement* self);

        NDDSUSERDllExport
        void PowerLineMeasurement_finalize(
            PowerLineMeasurement* self);

        NDDSUSERDllExport
        void PowerLineMeasurement_finalize_ex(
            PowerLineMeasurement* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PowerLineMeasurement_finalize_w_params(
            PowerLineMeasurement* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PowerLineMeasurement_finalize_optional_members(
            PowerLineMeasurement* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PowerLineMeasurement_copy(
            PowerLineMeasurement* dst,
            const PowerLineMeasurement* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const DDS_UnsignedLong PowerLineMeasurementSequence_MINLEN= 1UL;
        static const DDS_UnsignedLong PowerLineMeasurementSequence_MAXLEN= 3UL;
        typedef     tms::dc::PowerLineMeasurementSeq  PowerLineMeasurementSequence ;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PowerLineMeasurementSequence_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PowerLineMeasurementSequence_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerLineMeasurementSequence_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerLineMeasurementSequence_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PowerLineMeasurementSequenceSeq, PowerLineMeasurementSequence);

        NDDSUSERDllExport
        RTIBool PowerLineMeasurementSequence_initialize(
            PowerLineMeasurementSequence* self);

        NDDSUSERDllExport
        RTIBool PowerLineMeasurementSequence_initialize_ex(
            PowerLineMeasurementSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PowerLineMeasurementSequence_initialize_w_params(
            PowerLineMeasurementSequence* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PowerLineMeasurementSequence_finalize_w_return(
            PowerLineMeasurementSequence* self);

        NDDSUSERDllExport
        void PowerLineMeasurementSequence_finalize(
            PowerLineMeasurementSequence* self);

        NDDSUSERDllExport
        void PowerLineMeasurementSequence_finalize_ex(
            PowerLineMeasurementSequence* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PowerLineMeasurementSequence_finalize_w_params(
            PowerLineMeasurementSequence* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PowerLineMeasurementSequence_finalize_optional_members(
            PowerLineMeasurementSequence* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PowerLineMeasurementSequence_copy(
            PowerLineMeasurementSequence* dst,
            const PowerLineMeasurementSequence* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *PowerPortMeasurementTYPENAME;

        struct PowerPortMeasurementSeq;
        class PowerPortMeasurement 
        {
          public:
            typedef struct PowerPortMeasurementSeq Seq;

            DDS_Long   portNumber ;
            tms::dc::PowerLineMeasurementSequence   line ;
            DDS_Float   powerRateOfChange ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PowerPortMeasurement_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortMeasurement_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortMeasurement_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortMeasurement_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PowerPortMeasurementSeq, PowerPortMeasurement);

        NDDSUSERDllExport
        RTIBool PowerPortMeasurement_initialize(
            PowerPortMeasurement* self);

        NDDSUSERDllExport
        RTIBool PowerPortMeasurement_initialize_ex(
            PowerPortMeasurement* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PowerPortMeasurement_initialize_w_params(
            PowerPortMeasurement* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PowerPortMeasurement_finalize_w_return(
            PowerPortMeasurement* self);

        NDDSUSERDllExport
        void PowerPortMeasurement_finalize(
            PowerPortMeasurement* self);

        NDDSUSERDllExport
        void PowerPortMeasurement_finalize_ex(
            PowerPortMeasurement* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PowerPortMeasurement_finalize_w_params(
            PowerPortMeasurement* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PowerPortMeasurement_finalize_optional_members(
            PowerPortMeasurement* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PowerPortMeasurement_copy(
            PowerPortMeasurement* dst,
            const PowerPortMeasurement* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const DDS_UnsignedLong PowerPortMeasurementSequence_MINLEN= 0UL;
        static const DDS_UnsignedLong PowerPortMeasurementSequence_MAXLEN= (tms::MAX_PORTS);
        typedef     tms::dc::PowerPortMeasurementSeq  PowerPortMeasurementSequence ;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * PowerPortMeasurementSequence_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *PowerPortMeasurementSequence_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortMeasurementSequence_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerPortMeasurementSequence_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(PowerPortMeasurementSequenceSeq, PowerPortMeasurementSequence);

        NDDSUSERDllExport
        RTIBool PowerPortMeasurementSequence_initialize(
            PowerPortMeasurementSequence* self);

        NDDSUSERDllExport
        RTIBool PowerPortMeasurementSequence_initialize_ex(
            PowerPortMeasurementSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool PowerPortMeasurementSequence_initialize_w_params(
            PowerPortMeasurementSequence* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool PowerPortMeasurementSequence_finalize_w_return(
            PowerPortMeasurementSequence* self);

        NDDSUSERDllExport
        void PowerPortMeasurementSequence_finalize(
            PowerPortMeasurementSequence* self);

        NDDSUSERDllExport
        void PowerPortMeasurementSequence_finalize_ex(
            PowerPortMeasurementSequence* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void PowerPortMeasurementSequence_finalize_w_params(
            PowerPortMeasurementSequence* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void PowerPortMeasurementSequence_finalize_optional_members(
            PowerPortMeasurementSequence* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool PowerPortMeasurementSequence_copy(
            PowerPortMeasurementSequence* dst,
            const PowerPortMeasurementSequence* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *MeasurementUpdateTYPENAME;

        struct MeasurementUpdateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class MeasurementUpdateTypeSupport;
        class MeasurementUpdateDataWriter;
        class MeasurementUpdateDataReader;
        #endif
        class MeasurementUpdate 
        {
          public:
            typedef struct MeasurementUpdateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef MeasurementUpdateTypeSupport TypeSupport;
            typedef MeasurementUpdateDataWriter DataWriter;
            typedef MeasurementUpdateDataReader DataReader;
            #endif

            DDS_Char *   deviceId ;
            tms::ClockMonotonic   timeMeasured ;
            tms::dc::PowerPortMeasurementSequence   externalMeasurement ;
            tms::dc::PowerPortMeasurementSequence   internalMeasurement ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * MeasurementUpdate_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *MeasurementUpdate_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *MeasurementUpdate_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *MeasurementUpdate_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(MeasurementUpdateSeq, MeasurementUpdate);

        NDDSUSERDllExport
        RTIBool MeasurementUpdate_initialize(
            MeasurementUpdate* self);

        NDDSUSERDllExport
        RTIBool MeasurementUpdate_initialize_ex(
            MeasurementUpdate* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool MeasurementUpdate_initialize_w_params(
            MeasurementUpdate* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool MeasurementUpdate_finalize_w_return(
            MeasurementUpdate* self);

        NDDSUSERDllExport
        void MeasurementUpdate_finalize(
            MeasurementUpdate* self);

        NDDSUSERDllExport
        void MeasurementUpdate_finalize_ex(
            MeasurementUpdate* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void MeasurementUpdate_finalize_w_params(
            MeasurementUpdate* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void MeasurementUpdate_finalize_optional_members(
            MeasurementUpdate* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool MeasurementUpdate_copy(
            MeasurementUpdate* dst,
            const MeasurementUpdate* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *LoadSharingParametersTYPENAME;

        struct LoadSharingParametersSeq;
        class LoadSharingParameters 
        {
          public:
            typedef struct LoadSharingParametersSeq Seq;

            DDS_Long   portNumber ;
            tms::ControlCurve   referenceVoltage ;
            DDS_Float   minAmperage ;
            DDS_Float   maxAmperage ;
            DDS_Float   minVoltage ;
            DDS_Float   maxVoltage ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * LoadSharingParameters_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *LoadSharingParameters_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingParameters_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingParameters_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(LoadSharingParametersSeq, LoadSharingParameters);

        NDDSUSERDllExport
        RTIBool LoadSharingParameters_initialize(
            LoadSharingParameters* self);

        NDDSUSERDllExport
        RTIBool LoadSharingParameters_initialize_ex(
            LoadSharingParameters* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool LoadSharingParameters_initialize_w_params(
            LoadSharingParameters* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool LoadSharingParameters_finalize_w_return(
            LoadSharingParameters* self);

        NDDSUSERDllExport
        void LoadSharingParameters_finalize(
            LoadSharingParameters* self);

        NDDSUSERDllExport
        void LoadSharingParameters_finalize_ex(
            LoadSharingParameters* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void LoadSharingParameters_finalize_w_params(
            LoadSharingParameters* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void LoadSharingParameters_finalize_optional_members(
            LoadSharingParameters* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool LoadSharingParameters_copy(
            LoadSharingParameters* dst,
            const LoadSharingParameters* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
        static const DDS_UnsignedLong LoadSharingParameterSequence_MINLEN= 1UL;
        static const DDS_UnsignedLong LoadSharingParameterSequence_MAXLEN= (tms::MAX_PORTS);
        typedef     tms::dc::LoadSharingParametersSeq  LoadSharingParameterSequence ;
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * LoadSharingParameterSequence_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *LoadSharingParameterSequence_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingParameterSequence_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingParameterSequence_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(LoadSharingParameterSequenceSeq, LoadSharingParameterSequence);

        NDDSUSERDllExport
        RTIBool LoadSharingParameterSequence_initialize(
            LoadSharingParameterSequence* self);

        NDDSUSERDllExport
        RTIBool LoadSharingParameterSequence_initialize_ex(
            LoadSharingParameterSequence* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool LoadSharingParameterSequence_initialize_w_params(
            LoadSharingParameterSequence* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool LoadSharingParameterSequence_finalize_w_return(
            LoadSharingParameterSequence* self);

        NDDSUSERDllExport
        void LoadSharingParameterSequence_finalize(
            LoadSharingParameterSequence* self);

        NDDSUSERDllExport
        void LoadSharingParameterSequence_finalize_ex(
            LoadSharingParameterSequence* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void LoadSharingParameterSequence_finalize_w_params(
            LoadSharingParameterSequence* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void LoadSharingParameterSequence_finalize_optional_members(
            LoadSharingParameterSequence* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool LoadSharingParameterSequence_copy(
            LoadSharingParameterSequence* dst,
            const LoadSharingParameterSequence* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *LoadSharingRequestTYPENAME;

        struct LoadSharingRequestSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class LoadSharingRequestTypeSupport;
        class LoadSharingRequestDataWriter;
        class LoadSharingRequestDataReader;
        #endif
        class LoadSharingRequest 
        {
          public:
            typedef struct LoadSharingRequestSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef LoadSharingRequestTypeSupport TypeSupport;
            typedef LoadSharingRequestDataWriter DataWriter;
            typedef LoadSharingRequestDataReader DataReader;
            #endif

            tms::PowerPortConfigRequest   requestId ;
            DDS_UnsignedLongLong   sequenceId ;
            tms::dc::LoadSharingParameters   parameters ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * LoadSharingRequest_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *LoadSharingRequest_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingRequest_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingRequest_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(LoadSharingRequestSeq, LoadSharingRequest);

        NDDSUSERDllExport
        RTIBool LoadSharingRequest_initialize(
            LoadSharingRequest* self);

        NDDSUSERDllExport
        RTIBool LoadSharingRequest_initialize_ex(
            LoadSharingRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool LoadSharingRequest_initialize_w_params(
            LoadSharingRequest* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool LoadSharingRequest_finalize_w_return(
            LoadSharingRequest* self);

        NDDSUSERDllExport
        void LoadSharingRequest_finalize(
            LoadSharingRequest* self);

        NDDSUSERDllExport
        void LoadSharingRequest_finalize_ex(
            LoadSharingRequest* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void LoadSharingRequest_finalize_w_params(
            LoadSharingRequest* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void LoadSharingRequest_finalize_optional_members(
            LoadSharingRequest* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool LoadSharingRequest_copy(
            LoadSharingRequest* dst,
            const LoadSharingRequest* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif

        extern const char *LoadSharingStateTYPENAME;

        struct LoadSharingStateSeq;
        #ifndef NDDS_STANDALONE_TYPE
        class LoadSharingStateTypeSupport;
        class LoadSharingStateDataWriter;
        class LoadSharingStateDataReader;
        #endif
        class LoadSharingState 
        {
          public:
            typedef struct LoadSharingStateSeq Seq;
            #ifndef NDDS_STANDALONE_TYPE
            typedef LoadSharingStateTypeSupport TypeSupport;
            typedef LoadSharingStateDataWriter DataWriter;
            typedef LoadSharingStateDataReader DataReader;
            #endif

            DDS_Char *   deviceId ;
            tms::ConfigId   config ;
            tms::dc::LoadSharingParameterSequence   parameters ;

        };
        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, start exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport __declspec(dllexport)
        #endif

        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport DDS_TypeCode * LoadSharingState_get_typecode(void); /* Type code */
        NDDSUSERDllExport RTIXCdrTypePlugin *LoadSharingState_get_type_plugin_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingState_get_sample_access_info(void);
        NDDSUSERDllExport RTIXCdrSampleAccessInfo *LoadSharingState_get_sample_seq_access_info(void);
        #endif

        DDS_SEQUENCE(LoadSharingStateSeq, LoadSharingState);

        NDDSUSERDllExport
        RTIBool LoadSharingState_initialize(
            LoadSharingState* self);

        NDDSUSERDllExport
        RTIBool LoadSharingState_initialize_ex(
            LoadSharingState* self,RTIBool allocatePointers,RTIBool allocateMemory);

        NDDSUSERDllExport
        RTIBool LoadSharingState_initialize_w_params(
            LoadSharingState* self,
            const struct DDS_TypeAllocationParams_t * allocParams);  

        NDDSUSERDllExport
        RTIBool LoadSharingState_finalize_w_return(
            LoadSharingState* self);

        NDDSUSERDllExport
        void LoadSharingState_finalize(
            LoadSharingState* self);

        NDDSUSERDllExport
        void LoadSharingState_finalize_ex(
            LoadSharingState* self,RTIBool deletePointers);

        NDDSUSERDllExport
        void LoadSharingState_finalize_w_params(
            LoadSharingState* self,
            const struct DDS_TypeDeallocationParams_t * deallocParams);

        NDDSUSERDllExport
        void LoadSharingState_finalize_optional_members(
            LoadSharingState* self, RTIBool deletePointers);  

        NDDSUSERDllExport
        RTIBool LoadSharingState_copy(
            LoadSharingState* dst,
            const LoadSharingState* src);

        #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
        /* If the code is building on Windows, stop exporting symbols.
        */
        #undef NDDSUSERDllExport
        #define NDDSUSERDllExport
        #endif
    } /* namespace dc  */

    extern const char *StorageUpdateTYPENAME;

    struct StorageUpdateSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class StorageUpdateTypeSupport;
    class StorageUpdateDataWriter;
    class StorageUpdateDataReader;
    #endif
    class StorageUpdate 
    {
      public:
        typedef struct StorageUpdateSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef StorageUpdateTypeSupport TypeSupport;
        typedef StorageUpdateDataWriter DataWriter;
        typedef StorageUpdateDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        DDS_Float   internalVoltage ;
        DDS_Float   stateOfCharge ;
        DDS_Float   availableEnergy ;
        DDS_Float   holdTime ;
        tms::Curve2D   chargeTime ;
        tms::Curve2D   dischargeTime ;
        tms::Curve2D   maxChargeTime ;
        tms::Curve2D   maxDischargeTime ;
        DDS_Float   maxChargeRate ;
        DDS_Float   maxDischargeRate ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * StorageUpdate_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *StorageUpdate_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageUpdate_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *StorageUpdate_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(StorageUpdateSeq, StorageUpdate);

    NDDSUSERDllExport
    RTIBool StorageUpdate_initialize(
        StorageUpdate* self);

    NDDSUSERDllExport
    RTIBool StorageUpdate_initialize_ex(
        StorageUpdate* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool StorageUpdate_initialize_w_params(
        StorageUpdate* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool StorageUpdate_finalize_w_return(
        StorageUpdate* self);

    NDDSUSERDllExport
    void StorageUpdate_finalize(
        StorageUpdate* self);

    NDDSUSERDllExport
    void StorageUpdate_finalize_ex(
        StorageUpdate* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void StorageUpdate_finalize_w_params(
        StorageUpdate* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void StorageUpdate_finalize_optional_members(
        StorageUpdate* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool StorageUpdate_copy(
        StorageUpdate* dst,
        const StorageUpdate* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *ControlServiceInfoTYPENAME;

    struct ControlServiceInfoSeq;
    class ControlServiceInfo 
    {
      public:
        typedef struct ControlServiceInfoSeq Seq;

        tms::MicrogridControllerInfo   * mc ;
        tms::MicrogridDashboardInfo   * md ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * ControlServiceInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *ControlServiceInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlServiceInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *ControlServiceInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(ControlServiceInfoSeq, ControlServiceInfo);

    NDDSUSERDllExport
    RTIBool ControlServiceInfo_initialize(
        ControlServiceInfo* self);

    NDDSUSERDllExport
    RTIBool ControlServiceInfo_initialize_ex(
        ControlServiceInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool ControlServiceInfo_initialize_w_params(
        ControlServiceInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool ControlServiceInfo_finalize_w_return(
        ControlServiceInfo* self);

    NDDSUSERDllExport
    void ControlServiceInfo_finalize(
        ControlServiceInfo* self);

    NDDSUSERDllExport
    void ControlServiceInfo_finalize_ex(
        ControlServiceInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void ControlServiceInfo_finalize_w_params(
        ControlServiceInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void ControlServiceInfo_finalize_optional_members(
        ControlServiceInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool ControlServiceInfo_copy(
        ControlServiceInfo* dst,
        const ControlServiceInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *PowerDeviceInfoTYPENAME;

    struct PowerDeviceInfoSeq;
    class PowerDeviceInfo 
    {
      public:
        typedef struct PowerDeviceInfoSeq Seq;

        tms::PowerPortInfoSequence   powerPorts ;
        tms::GroundingInfoSequence   grounds ;
        tms::ConversionInfo   * conversion ;
        tms::DistributionInfo   * distribution ;
        tms::SourceInfo   * source ;
        tms::StorageInfo   * storage ;
        tms::LoadInfo   * load ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * PowerDeviceInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *PowerDeviceInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerDeviceInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *PowerDeviceInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(PowerDeviceInfoSeq, PowerDeviceInfo);

    NDDSUSERDllExport
    RTIBool PowerDeviceInfo_initialize(
        PowerDeviceInfo* self);

    NDDSUSERDllExport
    RTIBool PowerDeviceInfo_initialize_ex(
        PowerDeviceInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool PowerDeviceInfo_initialize_w_params(
        PowerDeviceInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool PowerDeviceInfo_finalize_w_return(
        PowerDeviceInfo* self);

    NDDSUSERDllExport
    void PowerDeviceInfo_finalize(
        PowerDeviceInfo* self);

    NDDSUSERDllExport
    void PowerDeviceInfo_finalize_ex(
        PowerDeviceInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void PowerDeviceInfo_finalize_w_params(
        PowerDeviceInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void PowerDeviceInfo_finalize_optional_members(
        PowerDeviceInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool PowerDeviceInfo_copy(
        PowerDeviceInfo* dst,
        const PowerDeviceInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif

    extern const char *DeviceInfoTYPENAME;

    struct DeviceInfoSeq;
    #ifndef NDDS_STANDALONE_TYPE
    class DeviceInfoTypeSupport;
    class DeviceInfoDataWriter;
    class DeviceInfoDataReader;
    #endif
    class DeviceInfo 
    {
      public:
        typedef struct DeviceInfoSeq Seq;
        #ifndef NDDS_STANDALONE_TYPE
        typedef DeviceInfoTypeSupport TypeSupport;
        typedef DeviceInfoDataWriter DataWriter;
        typedef DeviceInfoDataReader DataReader;
        #endif

        DDS_Char *   deviceId ;
        tms::DeviceRole   role ;
        tms::ProductInfo   product ;
        tms::TopicInfo   topics ;
        tms::ControlHardwareInfo   * controlHardware ;
        tms::PowerHardwareInfo   * powerHardware ;
        tms::ParameterMetadataSequence   * controlParameters ;
        tms::ParameterMetadataSequence   * metricParameters ;
        tms::ControlServiceInfo   * controlService ;
        tms::PowerDeviceInfo   * powerDevice ;

    };
    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, start exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport __declspec(dllexport)
    #endif

    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport DDS_TypeCode * DeviceInfo_get_typecode(void); /* Type code */
    NDDSUSERDllExport RTIXCdrTypePlugin *DeviceInfo_get_type_plugin_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceInfo_get_sample_access_info(void);
    NDDSUSERDllExport RTIXCdrSampleAccessInfo *DeviceInfo_get_sample_seq_access_info(void);
    #endif

    DDS_SEQUENCE(DeviceInfoSeq, DeviceInfo);

    NDDSUSERDllExport
    RTIBool DeviceInfo_initialize(
        DeviceInfo* self);

    NDDSUSERDllExport
    RTIBool DeviceInfo_initialize_ex(
        DeviceInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

    NDDSUSERDllExport
    RTIBool DeviceInfo_initialize_w_params(
        DeviceInfo* self,
        const struct DDS_TypeAllocationParams_t * allocParams);  

    NDDSUSERDllExport
    RTIBool DeviceInfo_finalize_w_return(
        DeviceInfo* self);

    NDDSUSERDllExport
    void DeviceInfo_finalize(
        DeviceInfo* self);

    NDDSUSERDllExport
    void DeviceInfo_finalize_ex(
        DeviceInfo* self,RTIBool deletePointers);

    NDDSUSERDllExport
    void DeviceInfo_finalize_w_params(
        DeviceInfo* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

    NDDSUSERDllExport
    void DeviceInfo_finalize_optional_members(
        DeviceInfo* self, RTIBool deletePointers);  

    NDDSUSERDllExport
    RTIBool DeviceInfo_copy(
        DeviceInfo* dst,
        const DeviceInfo* src);

    #if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
    /* If the code is building on Windows, stop exporting symbols.
    */
    #undef NDDSUSERDllExport
    #define NDDSUSERDllExport
    #endif
} /* namespace tms  */

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<tms::Point2D> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::Curve2D> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ControlCurve> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::GridRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ClockMonotonic> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ThermalInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ThermalState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::SynchronousMachineCoefficients> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerElectronicsInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerElectronicsState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::StorageCellState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::EnergyStorageState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::EnergyStorageInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::GeneratorInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::GeneratorState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::EngineInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::EngineState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::FuelInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::FuelState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::LoadStepResponse> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::LoadSharingInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::StorageInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ControlHardwareInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ControlHardwareUpdate> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerHardwareInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerHardwareUpdate> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::DiagnosticTroubleCode> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ClockRealtime> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ClockState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::DeviceConfigRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::DeviceRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerPortId> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerConnectorInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerSwitchInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerPortInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerSwitchStatus> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::GroundingCircuitStatus> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::GroundingCircuitState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::GroundingInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ParameterMetadata> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ParameterValue> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerPortStatus> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::OperatorPriority> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerPortIntent> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerConnectionId> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::SourceInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ActiveDiagnosticState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::AuthorizationToEnergizeResult> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::AuthorizationToEnergizeRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::AuthorizationToEnergizeReply> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::IdentityNicknameRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::DeviceIcon> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::DeviceIntent> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ControlParameterRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ControlParameterState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerPortState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::DistributionInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::IdentityNicknameState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::GroundingCircuitRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::Heartbeat> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::LoadInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::MetricParameterState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::LoadSharingIntent> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::StorageIntent> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::MicrogridIntent> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::OperatorIntent> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::OperatorIntentRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::OperatorIntentState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerPortConfigRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerConnection> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerConnectionState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerSwitchCloseConditions> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerSwitchRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::TopicInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ActiveConversionInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ConversionTapInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerPortConversionInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PassiveConversionInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ConversionInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ProductInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::MicrogridDashboardInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::MicrogridControllerInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ReplyStatus> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::Reply> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::EnergyStartStopRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::EnergyStartStopState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ActiveMicrogridControllerState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ac::PowerLineMeasurement> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ac::PowerPortMeasurement> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ac::MeasurementUpdate> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ac::LoadSharingParameters> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ac::LoadSharingRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ac::LoadSharingState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::dc::PowerLineMeasurement> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::dc::PowerPortMeasurement> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::dc::MeasurementUpdate> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::dc::LoadSharingParameters> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::dc::LoadSharingRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::dc::LoadSharingState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::StorageUpdate> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::ControlServiceInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::PowerDeviceInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms::DeviceInfo> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* tmsExampleApp */

