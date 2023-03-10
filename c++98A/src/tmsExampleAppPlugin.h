

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from tmsExampleApp.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef tmsExampleAppPlugin_1875817790_h
#define tmsExampleAppPlugin_1875817790_h

#include "tmsExampleApp.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace generator_device {
} /* namespace generator_device  */
namespace master_controller {
} /* namespace master_controller  */
namespace tms {
    namespace topic {
    } /* namespace topic  */

    #define TopicNamePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define TopicNamePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TopicNamePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define TopicNamePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TopicNamePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TopicName*
    TopicNamePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TopicName*
    TopicNamePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TopicName*
    TopicNamePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TopicNamePluginSupport_copy_data(
        TopicName *out,
        const TopicName *in);

    NDDSUSERDllExport extern void 
    TopicNamePluginSupport_destroy_data_w_params(
        TopicName *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TopicNamePluginSupport_destroy_data_ex(
        TopicName *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TopicNamePluginSupport_destroy_data(
        TopicName *sample);

    NDDSUSERDllExport extern void 
    TopicNamePluginSupport_print_data(
        const TopicName *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    TopicNamePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TopicName *out,
        const TopicName *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    TopicNamePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TopicNamePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TopicNamePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TopicNamePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define TopicListPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define TopicListPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TopicListPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define TopicListPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TopicListPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TopicList*
    TopicListPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TopicList*
    TopicListPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TopicList*
    TopicListPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TopicListPluginSupport_copy_data(
        TopicList *out,
        const TopicList *in);

    NDDSUSERDllExport extern void 
    TopicListPluginSupport_destroy_data_w_params(
        TopicList *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TopicListPluginSupport_destroy_data_ex(
        TopicList *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TopicListPluginSupport_destroy_data(
        TopicList *sample);

    NDDSUSERDllExport extern void 
    TopicListPluginSupport_print_data(
        const TopicList *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    TopicListPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TopicList *out,
        const TopicList *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    TopicListPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TopicListPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TopicListPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TopicListPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    CableSenseStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    CableSenseStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CableSenseStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    CableSenseStatusPluginSupport_print_data(
        const CableSenseStatus *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    CircuitContinuityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    CircuitContinuityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CircuitContinuityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    CircuitContinuityPluginSupport_print_data(
        const CircuitContinuity *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ClockMonotonicPersistenceTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ClockMonotonicPersistenceTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ClockMonotonicPersistenceTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    ClockMonotonicPersistenceTypePluginSupport_print_data(
        const ClockMonotonicPersistenceType *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DesiredCircuitContinuityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DesiredCircuitContinuityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DesiredCircuitContinuityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    DesiredCircuitContinuityPluginSupport_print_data(
        const DesiredCircuitContinuity *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DeviceRolePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DeviceRolePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DeviceRolePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    DeviceRolePluginSupport_print_data(
        const DeviceRole *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DtcSeverityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DtcSeverityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DtcSeverityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    DtcSeverityPluginSupport_print_data(
        const DtcSeverity *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    EnergyStartStopLevelPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    EnergyStartStopLevelPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    EnergyStartStopLevelPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    EnergyStartStopLevelPluginSupport_print_data(
        const EnergyStartStopLevel *sample, const char *desc, int indent_level);

    #define EnergyStartStopLevelSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define EnergyStartStopLevelSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define EnergyStartStopLevelSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define EnergyStartStopLevelSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define EnergyStartStopLevelSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern EnergyStartStopLevelSequence*
    EnergyStartStopLevelSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern EnergyStartStopLevelSequence*
    EnergyStartStopLevelSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EnergyStartStopLevelSequence*
    EnergyStartStopLevelSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopLevelSequencePluginSupport_copy_data(
        EnergyStartStopLevelSequence *out,
        const EnergyStartStopLevelSequence *in);

    NDDSUSERDllExport extern void 
    EnergyStartStopLevelSequencePluginSupport_destroy_data_w_params(
        EnergyStartStopLevelSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    EnergyStartStopLevelSequencePluginSupport_destroy_data_ex(
        EnergyStartStopLevelSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EnergyStartStopLevelSequencePluginSupport_destroy_data(
        EnergyStartStopLevelSequence *sample);

    NDDSUSERDllExport extern void 
    EnergyStartStopLevelSequencePluginSupport_print_data(
        const EnergyStartStopLevelSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopLevelSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStartStopLevelSequence *out,
        const EnergyStartStopLevelSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    EnergyStartStopLevelSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    EnergyStartStopLevelSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    EnergyStartStopLevelSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    EnergyStartStopLevelSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    GroundFaultDetectionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    GroundFaultDetectionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GroundFaultDetectionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    GroundFaultDetectionPluginSupport_print_data(
        const GroundFaultDetection *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    GroundingDesignTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    GroundingDesignTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GroundingDesignTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    GroundingDesignTypePluginSupport_print_data(
        const GroundingDesignType *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    OperatingModePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    OperatingModePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    OperatingModePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    OperatingModePluginSupport_print_data(
        const OperatingMode *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    OperatorPriorityTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    OperatorPriorityTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    OperatorPriorityTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    OperatorPriorityTypePluginSupport_print_data(
        const OperatorPriorityType *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    OperatorIntentTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    OperatorIntentTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    OperatorIntentTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    OperatorIntentTypePluginSupport_print_data(
        const OperatorIntentType *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionDetectionTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionDetectionTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionDetectionTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    PowerConnectionDetectionTypePluginSupport_print_data(
        const PowerConnectionDetectionType *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ReplyCodePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ReplyCodePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ReplyCodePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    ReplyCodePluginSupport_print_data(
        const ReplyCode *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    CircuitWiringPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    CircuitWiringPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    CircuitWiringPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    CircuitWiringPluginSupport_print_data(
        const CircuitWiring *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorPolarityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorPolarityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorPolarityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    PowerConnectorPolarityPluginSupport_print_data(
        const PowerConnectorPolarity *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    PowerConnectorTypePluginSupport_print_data(
        const PowerConnectorType *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerPortDirectionalityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerPortDirectionalityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortDirectionalityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    PowerPortDirectionalityPluginSupport_print_data(
        const PowerPortDirectionality *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorFeaturePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorFeaturePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorFeaturePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    PowerConnectorFeaturePluginSupport_print_data(
        const PowerConnectorFeature *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchFeaturePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchFeaturePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchFeaturePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    PowerSwitchFeaturePluginSupport_print_data(
        const PowerSwitchFeature *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchReasonPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchReasonPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchReasonPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    PowerSwitchReasonPluginSupport_print_data(
        const PowerSwitchReason *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    SourceFeaturePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    SourceFeaturePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SourceFeaturePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    SourceFeaturePluginSupport_print_data(
        const SourceFeature *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    LoadFeaturePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    LoadFeaturePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LoadFeaturePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    LoadFeaturePluginSupport_print_data(
        const LoadFeature *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DistributionFeaturePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DistributionFeaturePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DistributionFeaturePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    DistributionFeaturePluginSupport_print_data(
        const DistributionFeature *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ConversionFeaturePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ConversionFeaturePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ConversionFeaturePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    ConversionFeaturePluginSupport_print_data(
        const ConversionFeature *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    MicrogridDashboardFeaturePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    MicrogridDashboardFeaturePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MicrogridDashboardFeaturePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    MicrogridDashboardFeaturePluginSupport_print_data(
        const MicrogridDashboardFeature *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    MicrogridControllerFeaturePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    MicrogridControllerFeaturePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MicrogridControllerFeaturePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    MicrogridControllerFeaturePluginSupport_print_data(
        const MicrogridControllerFeature *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    StorageFeaturePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    StorageFeaturePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    StorageFeaturePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    StorageFeaturePluginSupport_print_data(
        const StorageFeature *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ConfigIdPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ConfigIdPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ConfigIdPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    ConfigIdPluginSupport_print_data(
        const ConfigId *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    FailureModeIndicatorPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    FailureModeIndicatorPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    FailureModeIndicatorPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    FailureModeIndicatorPluginSupport_print_data(
        const FailureModeIndicator *sample, const char *desc, int indent_level);

    #define PowerPortNumberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerPortNumberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerPortNumberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerPortNumberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerPortNumberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerPortNumber*
    PowerPortNumberPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerPortNumber*
    PowerPortNumberPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortNumber*
    PowerPortNumberPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerPortNumberPluginSupport_copy_data(
        PowerPortNumber *out,
        const PowerPortNumber *in);

    NDDSUSERDllExport extern void 
    PowerPortNumberPluginSupport_destroy_data_w_params(
        PowerPortNumber *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerPortNumberPluginSupport_destroy_data_ex(
        PowerPortNumber *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortNumberPluginSupport_destroy_data(
        PowerPortNumber *sample);

    NDDSUSERDllExport extern void 
    PowerPortNumberPluginSupport_print_data(
        const PowerPortNumber *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerPortNumberPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortNumber *out,
        const PowerPortNumber *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerPortNumberPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerPortNumberPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerPortNumberPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortNumberPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define IdentityPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define IdentityPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define IdentityPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define IdentityPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define IdentityPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Identity*
    IdentityPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Identity*
    IdentityPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Identity*
    IdentityPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    IdentityPluginSupport_copy_data(
        Identity *out,
        const Identity *in);

    NDDSUSERDllExport extern void 
    IdentityPluginSupport_destroy_data_w_params(
        Identity *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    IdentityPluginSupport_destroy_data_ex(
        Identity *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    IdentityPluginSupport_destroy_data(
        Identity *sample);

    NDDSUSERDllExport extern void 
    IdentityPluginSupport_print_data(
        const Identity *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    IdentityPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Identity *out,
        const Identity *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    IdentityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    IdentityPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    IdentityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    IdentityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define IdentitySequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define IdentitySequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define IdentitySequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define IdentitySequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define IdentitySequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern IdentitySequence*
    IdentitySequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern IdentitySequence*
    IdentitySequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern IdentitySequence*
    IdentitySequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    IdentitySequencePluginSupport_copy_data(
        IdentitySequence *out,
        const IdentitySequence *in);

    NDDSUSERDllExport extern void 
    IdentitySequencePluginSupport_destroy_data_w_params(
        IdentitySequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    IdentitySequencePluginSupport_destroy_data_ex(
        IdentitySequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    IdentitySequencePluginSupport_destroy_data(
        IdentitySequence *sample);

    NDDSUSERDllExport extern void 
    IdentitySequencePluginSupport_print_data(
        const IdentitySequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    IdentitySequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        IdentitySequence *out,
        const IdentitySequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    IdentitySequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    IdentitySequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    IdentitySequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    IdentitySequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define GlobalTradeItemNumberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define GlobalTradeItemNumberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GlobalTradeItemNumberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define GlobalTradeItemNumberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GlobalTradeItemNumberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GlobalTradeItemNumber*
    GlobalTradeItemNumberPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GlobalTradeItemNumber*
    GlobalTradeItemNumberPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GlobalTradeItemNumber*
    GlobalTradeItemNumberPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GlobalTradeItemNumberPluginSupport_copy_data(
        GlobalTradeItemNumber *out,
        const GlobalTradeItemNumber *in);

    NDDSUSERDllExport extern void 
    GlobalTradeItemNumberPluginSupport_destroy_data_w_params(
        GlobalTradeItemNumber *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GlobalTradeItemNumberPluginSupport_destroy_data_ex(
        GlobalTradeItemNumber *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GlobalTradeItemNumberPluginSupport_destroy_data(
        GlobalTradeItemNumber *sample);

    NDDSUSERDllExport extern void 
    GlobalTradeItemNumberPluginSupport_print_data(
        const GlobalTradeItemNumber *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    GlobalTradeItemNumberPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GlobalTradeItemNumber *out,
        const GlobalTradeItemNumber *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    GlobalTradeItemNumberPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GlobalTradeItemNumberPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GlobalTradeItemNumberPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GlobalTradeItemNumberPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define GroundingCircuitNumberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define GroundingCircuitNumberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GroundingCircuitNumberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define GroundingCircuitNumberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GroundingCircuitNumberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GroundingCircuitNumber*
    GroundingCircuitNumberPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GroundingCircuitNumber*
    GroundingCircuitNumberPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GroundingCircuitNumber*
    GroundingCircuitNumberPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitNumberPluginSupport_copy_data(
        GroundingCircuitNumber *out,
        const GroundingCircuitNumber *in);

    NDDSUSERDllExport extern void 
    GroundingCircuitNumberPluginSupport_destroy_data_w_params(
        GroundingCircuitNumber *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GroundingCircuitNumberPluginSupport_destroy_data_ex(
        GroundingCircuitNumber *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GroundingCircuitNumberPluginSupport_destroy_data(
        GroundingCircuitNumber *sample);

    NDDSUSERDllExport extern void 
    GroundingCircuitNumberPluginSupport_print_data(
        const GroundingCircuitNumber *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitNumberPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitNumber *out,
        const GroundingCircuitNumber *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitNumberPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GroundingCircuitNumberPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitNumberPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitNumberPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define NatoStockNumberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define NatoStockNumberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define NatoStockNumberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define NatoStockNumberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define NatoStockNumberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern NatoStockNumber*
    NatoStockNumberPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern NatoStockNumber*
    NatoStockNumberPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern NatoStockNumber*
    NatoStockNumberPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    NatoStockNumberPluginSupport_copy_data(
        NatoStockNumber *out,
        const NatoStockNumber *in);

    NDDSUSERDllExport extern void 
    NatoStockNumberPluginSupport_destroy_data_w_params(
        NatoStockNumber *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    NatoStockNumberPluginSupport_destroy_data_ex(
        NatoStockNumber *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    NatoStockNumberPluginSupport_destroy_data(
        NatoStockNumber *sample);

    NDDSUSERDllExport extern void 
    NatoStockNumberPluginSupport_print_data(
        const NatoStockNumber *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    NatoStockNumberPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        NatoStockNumber *out,
        const NatoStockNumber *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    NatoStockNumberPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    NatoStockNumberPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    NatoStockNumberPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    NatoStockNumberPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define String16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define String16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define String16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define String16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define String16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern String16*
    String16PluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern String16*
    String16PluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern String16*
    String16PluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    String16PluginSupport_copy_data(
        String16 *out,
        const String16 *in);

    NDDSUSERDllExport extern void 
    String16PluginSupport_destroy_data_w_params(
        String16 *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    String16PluginSupport_destroy_data_ex(
        String16 *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    String16PluginSupport_destroy_data(
        String16 *sample);

    NDDSUSERDllExport extern void 
    String16PluginSupport_print_data(
        const String16 *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    String16Plugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        String16 *out,
        const String16 *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    String16Plugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    String16Plugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    String16Plugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    String16Plugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define String32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define String32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define String32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define String32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define String32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern String32*
    String32PluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern String32*
    String32PluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern String32*
    String32PluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    String32PluginSupport_copy_data(
        String32 *out,
        const String32 *in);

    NDDSUSERDllExport extern void 
    String32PluginSupport_destroy_data_w_params(
        String32 *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    String32PluginSupport_destroy_data_ex(
        String32 *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    String32PluginSupport_destroy_data(
        String32 *sample);

    NDDSUSERDllExport extern void 
    String32PluginSupport_print_data(
        const String32 *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    String32Plugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        String32 *out,
        const String32 *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    String32Plugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    String32Plugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    String32Plugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    String32Plugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define String1_32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define String1_32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define String1_32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define String1_32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define String1_32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern String1_32*
    String1_32PluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern String1_32*
    String1_32PluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern String1_32*
    String1_32PluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    String1_32PluginSupport_copy_data(
        String1_32 *out,
        const String1_32 *in);

    NDDSUSERDllExport extern void 
    String1_32PluginSupport_destroy_data_w_params(
        String1_32 *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    String1_32PluginSupport_destroy_data_ex(
        String1_32 *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    String1_32PluginSupport_destroy_data(
        String1_32 *sample);

    NDDSUSERDllExport extern void 
    String1_32PluginSupport_print_data(
        const String1_32 *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    String1_32Plugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        String1_32 *out,
        const String1_32 *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    String1_32Plugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    String1_32Plugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    String1_32Plugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    String1_32Plugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define SuspectParameterNumberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define SuspectParameterNumberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define SuspectParameterNumberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define SuspectParameterNumberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define SuspectParameterNumberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern SuspectParameterNumber*
    SuspectParameterNumberPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern SuspectParameterNumber*
    SuspectParameterNumberPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SuspectParameterNumber*
    SuspectParameterNumberPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    SuspectParameterNumberPluginSupport_copy_data(
        SuspectParameterNumber *out,
        const SuspectParameterNumber *in);

    NDDSUSERDllExport extern void 
    SuspectParameterNumberPluginSupport_destroy_data_w_params(
        SuspectParameterNumber *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    SuspectParameterNumberPluginSupport_destroy_data_ex(
        SuspectParameterNumber *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    SuspectParameterNumberPluginSupport_destroy_data(
        SuspectParameterNumber *sample);

    NDDSUSERDllExport extern void 
    SuspectParameterNumberPluginSupport_print_data(
        const SuspectParameterNumber *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    SuspectParameterNumberPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SuspectParameterNumber *out,
        const SuspectParameterNumber *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    SuspectParameterNumberPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    SuspectParameterNumberPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    SuspectParameterNumberPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SuspectParameterNumberPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define TapNumberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define TapNumberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TapNumberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define TapNumberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TapNumberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TapNumber*
    TapNumberPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TapNumber*
    TapNumberPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TapNumber*
    TapNumberPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TapNumberPluginSupport_copy_data(
        TapNumber *out,
        const TapNumber *in);

    NDDSUSERDllExport extern void 
    TapNumberPluginSupport_destroy_data_w_params(
        TapNumber *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TapNumberPluginSupport_destroy_data_ex(
        TapNumber *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TapNumberPluginSupport_destroy_data(
        TapNumber *sample);

    NDDSUSERDllExport extern void 
    TapNumberPluginSupport_print_data(
        const TapNumber *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    TapNumberPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TapNumber *out,
        const TapNumber *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    TapNumberPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TapNumberPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TapNumberPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TapNumberPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define PowerPortNumberSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerPortNumberSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerPortNumberSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerPortNumberSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerPortNumberSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerPortNumberSequence*
    PowerPortNumberSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerPortNumberSequence*
    PowerPortNumberSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortNumberSequence*
    PowerPortNumberSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerPortNumberSequencePluginSupport_copy_data(
        PowerPortNumberSequence *out,
        const PowerPortNumberSequence *in);

    NDDSUSERDllExport extern void 
    PowerPortNumberSequencePluginSupport_destroy_data_w_params(
        PowerPortNumberSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerPortNumberSequencePluginSupport_destroy_data_ex(
        PowerPortNumberSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortNumberSequencePluginSupport_destroy_data(
        PowerPortNumberSequence *sample);

    NDDSUSERDllExport extern void 
    PowerPortNumberSequencePluginSupport_print_data(
        const PowerPortNumberSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerPortNumberSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortNumberSequence *out,
        const PowerPortNumberSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerPortNumberSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerPortNumberSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerPortNumberSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortNumberSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define ConversionFeatureSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ConversionFeatureSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ConversionFeatureSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ConversionFeatureSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ConversionFeatureSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ConversionFeatureSequence*
    ConversionFeatureSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ConversionFeatureSequence*
    ConversionFeatureSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ConversionFeatureSequence*
    ConversionFeatureSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ConversionFeatureSequencePluginSupport_copy_data(
        ConversionFeatureSequence *out,
        const ConversionFeatureSequence *in);

    NDDSUSERDllExport extern void 
    ConversionFeatureSequencePluginSupport_destroy_data_w_params(
        ConversionFeatureSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ConversionFeatureSequencePluginSupport_destroy_data_ex(
        ConversionFeatureSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ConversionFeatureSequencePluginSupport_destroy_data(
        ConversionFeatureSequence *sample);

    NDDSUSERDllExport extern void 
    ConversionFeatureSequencePluginSupport_print_data(
        const ConversionFeatureSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ConversionFeatureSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ConversionFeatureSequence *out,
        const ConversionFeatureSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ConversionFeatureSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ConversionFeatureSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ConversionFeatureSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ConversionFeatureSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define OctetSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define OctetSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define OctetSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define OctetSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define OctetSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern OctetSequence*
    OctetSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern OctetSequence*
    OctetSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern OctetSequence*
    OctetSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    OctetSequencePluginSupport_copy_data(
        OctetSequence *out,
        const OctetSequence *in);

    NDDSUSERDllExport extern void 
    OctetSequencePluginSupport_destroy_data_w_params(
        OctetSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    OctetSequencePluginSupport_destroy_data_ex(
        OctetSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    OctetSequencePluginSupport_destroy_data(
        OctetSequence *sample);

    NDDSUSERDllExport extern void 
    OctetSequencePluginSupport_print_data(
        const OctetSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    OctetSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        OctetSequence *out,
        const OctetSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    OctetSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    OctetSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    OctetSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    OctetSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define DistributionFeatureSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DistributionFeatureSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DistributionFeatureSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DistributionFeatureSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DistributionFeatureSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DistributionFeatureSequence*
    DistributionFeatureSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DistributionFeatureSequence*
    DistributionFeatureSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DistributionFeatureSequence*
    DistributionFeatureSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DistributionFeatureSequencePluginSupport_copy_data(
        DistributionFeatureSequence *out,
        const DistributionFeatureSequence *in);

    NDDSUSERDllExport extern void 
    DistributionFeatureSequencePluginSupport_destroy_data_w_params(
        DistributionFeatureSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DistributionFeatureSequencePluginSupport_destroy_data_ex(
        DistributionFeatureSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DistributionFeatureSequencePluginSupport_destroy_data(
        DistributionFeatureSequence *sample);

    NDDSUSERDllExport extern void 
    DistributionFeatureSequencePluginSupport_print_data(
        const DistributionFeatureSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    DistributionFeatureSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DistributionFeatureSequence *out,
        const DistributionFeatureSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DistributionFeatureSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DistributionFeatureSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DistributionFeatureSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DistributionFeatureSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define PowerConnectorFeatureSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerConnectorFeatureSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerConnectorFeatureSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerConnectorFeatureSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerConnectorFeatureSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerConnectorFeatureSequence*
    PowerConnectorFeatureSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerConnectorFeatureSequence*
    PowerConnectorFeatureSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerConnectorFeatureSequence*
    PowerConnectorFeatureSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerConnectorFeatureSequencePluginSupport_copy_data(
        PowerConnectorFeatureSequence *out,
        const PowerConnectorFeatureSequence *in);

    NDDSUSERDllExport extern void 
    PowerConnectorFeatureSequencePluginSupport_destroy_data_w_params(
        PowerConnectorFeatureSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerConnectorFeatureSequencePluginSupport_destroy_data_ex(
        PowerConnectorFeatureSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerConnectorFeatureSequencePluginSupport_destroy_data(
        PowerConnectorFeatureSequence *sample);

    NDDSUSERDllExport extern void 
    PowerConnectorFeatureSequencePluginSupport_print_data(
        const PowerConnectorFeatureSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerConnectorFeatureSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerConnectorFeatureSequence *out,
        const PowerConnectorFeatureSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorFeatureSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerConnectorFeatureSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorFeatureSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorFeatureSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define PowerSwitchFeatureSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerSwitchFeatureSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerSwitchFeatureSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerSwitchFeatureSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerSwitchFeatureSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerSwitchFeatureSequence*
    PowerSwitchFeatureSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerSwitchFeatureSequence*
    PowerSwitchFeatureSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerSwitchFeatureSequence*
    PowerSwitchFeatureSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchFeatureSequencePluginSupport_copy_data(
        PowerSwitchFeatureSequence *out,
        const PowerSwitchFeatureSequence *in);

    NDDSUSERDllExport extern void 
    PowerSwitchFeatureSequencePluginSupport_destroy_data_w_params(
        PowerSwitchFeatureSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerSwitchFeatureSequencePluginSupport_destroy_data_ex(
        PowerSwitchFeatureSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerSwitchFeatureSequencePluginSupport_destroy_data(
        PowerSwitchFeatureSequence *sample);

    NDDSUSERDllExport extern void 
    PowerSwitchFeatureSequencePluginSupport_print_data(
        const PowerSwitchFeatureSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchFeatureSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerSwitchFeatureSequence *out,
        const PowerSwitchFeatureSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchFeatureSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerSwitchFeatureSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchFeatureSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchFeatureSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define LoadFeatureSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LoadFeatureSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LoadFeatureSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LoadFeatureSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LoadFeatureSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LoadFeatureSequence*
    LoadFeatureSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LoadFeatureSequence*
    LoadFeatureSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LoadFeatureSequence*
    LoadFeatureSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LoadFeatureSequencePluginSupport_copy_data(
        LoadFeatureSequence *out,
        const LoadFeatureSequence *in);

    NDDSUSERDllExport extern void 
    LoadFeatureSequencePluginSupport_destroy_data_w_params(
        LoadFeatureSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LoadFeatureSequencePluginSupport_destroy_data_ex(
        LoadFeatureSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LoadFeatureSequencePluginSupport_destroy_data(
        LoadFeatureSequence *sample);

    NDDSUSERDllExport extern void 
    LoadFeatureSequencePluginSupport_print_data(
        const LoadFeatureSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    LoadFeatureSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LoadFeatureSequence *out,
        const LoadFeatureSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    LoadFeatureSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LoadFeatureSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LoadFeatureSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LoadFeatureSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define MicrogridControllerFeatureSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define MicrogridControllerFeatureSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define MicrogridControllerFeatureSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define MicrogridControllerFeatureSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define MicrogridControllerFeatureSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern MicrogridControllerFeatureSequence*
    MicrogridControllerFeatureSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern MicrogridControllerFeatureSequence*
    MicrogridControllerFeatureSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern MicrogridControllerFeatureSequence*
    MicrogridControllerFeatureSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    MicrogridControllerFeatureSequencePluginSupport_copy_data(
        MicrogridControllerFeatureSequence *out,
        const MicrogridControllerFeatureSequence *in);

    NDDSUSERDllExport extern void 
    MicrogridControllerFeatureSequencePluginSupport_destroy_data_w_params(
        MicrogridControllerFeatureSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    MicrogridControllerFeatureSequencePluginSupport_destroy_data_ex(
        MicrogridControllerFeatureSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    MicrogridControllerFeatureSequencePluginSupport_destroy_data(
        MicrogridControllerFeatureSequence *sample);

    NDDSUSERDllExport extern void 
    MicrogridControllerFeatureSequencePluginSupport_print_data(
        const MicrogridControllerFeatureSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    MicrogridControllerFeatureSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        MicrogridControllerFeatureSequence *out,
        const MicrogridControllerFeatureSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    MicrogridControllerFeatureSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    MicrogridControllerFeatureSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    MicrogridControllerFeatureSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MicrogridControllerFeatureSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define MicrogridDashboardFeatureSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define MicrogridDashboardFeatureSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define MicrogridDashboardFeatureSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define MicrogridDashboardFeatureSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define MicrogridDashboardFeatureSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern MicrogridDashboardFeatureSequence*
    MicrogridDashboardFeatureSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern MicrogridDashboardFeatureSequence*
    MicrogridDashboardFeatureSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern MicrogridDashboardFeatureSequence*
    MicrogridDashboardFeatureSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    MicrogridDashboardFeatureSequencePluginSupport_copy_data(
        MicrogridDashboardFeatureSequence *out,
        const MicrogridDashboardFeatureSequence *in);

    NDDSUSERDllExport extern void 
    MicrogridDashboardFeatureSequencePluginSupport_destroy_data_w_params(
        MicrogridDashboardFeatureSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    MicrogridDashboardFeatureSequencePluginSupport_destroy_data_ex(
        MicrogridDashboardFeatureSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    MicrogridDashboardFeatureSequencePluginSupport_destroy_data(
        MicrogridDashboardFeatureSequence *sample);

    NDDSUSERDllExport extern void 
    MicrogridDashboardFeatureSequencePluginSupport_print_data(
        const MicrogridDashboardFeatureSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    MicrogridDashboardFeatureSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        MicrogridDashboardFeatureSequence *out,
        const MicrogridDashboardFeatureSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    MicrogridDashboardFeatureSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    MicrogridDashboardFeatureSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    MicrogridDashboardFeatureSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MicrogridDashboardFeatureSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define EnumLabelSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define EnumLabelSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define EnumLabelSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define EnumLabelSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define EnumLabelSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern EnumLabelSequence*
    EnumLabelSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern EnumLabelSequence*
    EnumLabelSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EnumLabelSequence*
    EnumLabelSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    EnumLabelSequencePluginSupport_copy_data(
        EnumLabelSequence *out,
        const EnumLabelSequence *in);

    NDDSUSERDllExport extern void 
    EnumLabelSequencePluginSupport_destroy_data_w_params(
        EnumLabelSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    EnumLabelSequencePluginSupport_destroy_data_ex(
        EnumLabelSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EnumLabelSequencePluginSupport_destroy_data(
        EnumLabelSequence *sample);

    NDDSUSERDllExport extern void 
    EnumLabelSequencePluginSupport_print_data(
        const EnumLabelSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    EnumLabelSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        EnumLabelSequence *out,
        const EnumLabelSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    EnumLabelSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    EnumLabelSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    EnumLabelSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    EnumLabelSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define SourceFeatureSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define SourceFeatureSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define SourceFeatureSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define SourceFeatureSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define SourceFeatureSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern SourceFeatureSequence*
    SourceFeatureSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern SourceFeatureSequence*
    SourceFeatureSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SourceFeatureSequence*
    SourceFeatureSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    SourceFeatureSequencePluginSupport_copy_data(
        SourceFeatureSequence *out,
        const SourceFeatureSequence *in);

    NDDSUSERDllExport extern void 
    SourceFeatureSequencePluginSupport_destroy_data_w_params(
        SourceFeatureSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    SourceFeatureSequencePluginSupport_destroy_data_ex(
        SourceFeatureSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    SourceFeatureSequencePluginSupport_destroy_data(
        SourceFeatureSequence *sample);

    NDDSUSERDllExport extern void 
    SourceFeatureSequencePluginSupport_print_data(
        const SourceFeatureSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    SourceFeatureSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SourceFeatureSequence *out,
        const SourceFeatureSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    SourceFeatureSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    SourceFeatureSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    SourceFeatureSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SourceFeatureSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define StorageFeatureSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define StorageFeatureSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define StorageFeatureSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define StorageFeatureSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define StorageFeatureSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern StorageFeatureSequence*
    StorageFeatureSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern StorageFeatureSequence*
    StorageFeatureSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern StorageFeatureSequence*
    StorageFeatureSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    StorageFeatureSequencePluginSupport_copy_data(
        StorageFeatureSequence *out,
        const StorageFeatureSequence *in);

    NDDSUSERDllExport extern void 
    StorageFeatureSequencePluginSupport_destroy_data_w_params(
        StorageFeatureSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    StorageFeatureSequencePluginSupport_destroy_data_ex(
        StorageFeatureSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    StorageFeatureSequencePluginSupport_destroy_data(
        StorageFeatureSequence *sample);

    NDDSUSERDllExport extern void 
    StorageFeatureSequencePluginSupport_print_data(
        const StorageFeatureSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    StorageFeatureSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        StorageFeatureSequence *out,
        const StorageFeatureSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    StorageFeatureSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    StorageFeatureSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    StorageFeatureSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    StorageFeatureSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define ThermalLoadSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ThermalLoadSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ThermalLoadSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ThermalLoadSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ThermalLoadSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ThermalLoadSequence*
    ThermalLoadSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ThermalLoadSequence*
    ThermalLoadSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ThermalLoadSequence*
    ThermalLoadSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ThermalLoadSequencePluginSupport_copy_data(
        ThermalLoadSequence *out,
        const ThermalLoadSequence *in);

    NDDSUSERDllExport extern void 
    ThermalLoadSequencePluginSupport_destroy_data_w_params(
        ThermalLoadSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ThermalLoadSequencePluginSupport_destroy_data_ex(
        ThermalLoadSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ThermalLoadSequencePluginSupport_destroy_data(
        ThermalLoadSequence *sample);

    NDDSUSERDllExport extern void 
    ThermalLoadSequencePluginSupport_print_data(
        const ThermalLoadSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ThermalLoadSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ThermalLoadSequence *out,
        const ThermalLoadSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ThermalLoadSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ThermalLoadSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ThermalLoadSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ThermalLoadSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define ThermalZoneSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ThermalZoneSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ThermalZoneSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ThermalZoneSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ThermalZoneSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ThermalZoneSequence*
    ThermalZoneSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ThermalZoneSequence*
    ThermalZoneSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ThermalZoneSequence*
    ThermalZoneSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ThermalZoneSequencePluginSupport_copy_data(
        ThermalZoneSequence *out,
        const ThermalZoneSequence *in);

    NDDSUSERDllExport extern void 
    ThermalZoneSequencePluginSupport_destroy_data_w_params(
        ThermalZoneSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ThermalZoneSequencePluginSupport_destroy_data_ex(
        ThermalZoneSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ThermalZoneSequencePluginSupport_destroy_data(
        ThermalZoneSequence *sample);

    NDDSUSERDllExport extern void 
    ThermalZoneSequencePluginSupport_print_data(
        const ThermalZoneSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ThermalZoneSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ThermalZoneSequence *out,
        const ThermalZoneSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ThermalZoneSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ThermalZoneSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ThermalZoneSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ThermalZoneSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define Point2DPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Point2DPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Point2DPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Point2DPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Point2DPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Point2D*
    Point2DPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Point2D*
    Point2DPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Point2D*
    Point2DPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Point2DPluginSupport_copy_data(
        Point2D *out,
        const Point2D *in);

    NDDSUSERDllExport extern void 
    Point2DPluginSupport_destroy_data_w_params(
        Point2D *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Point2DPluginSupport_destroy_data_ex(
        Point2D *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Point2DPluginSupport_destroy_data(
        Point2D *sample);

    NDDSUSERDllExport extern void 
    Point2DPluginSupport_print_data(
        const Point2D *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Point2DPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Point2D *out,
        const Point2D *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Point2DPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Point2D *sample); 

    NDDSUSERDllExport extern RTIBool
    Point2DPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Point2D *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    Point2DPlugin_deserialize_from_cdr_buffer(
        Point2D *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Point2DPlugin_data_to_string(
        const Point2D *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Point2DPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Point2DPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Point2DPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Point2DPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Point2DPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Point2D ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * Point2DPlugin_get_programs(void);

    #define Point2DSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Point2DSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Point2DSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Point2DSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Point2DSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Point2DSequence*
    Point2DSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Point2DSequence*
    Point2DSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Point2DSequence*
    Point2DSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Point2DSequencePluginSupport_copy_data(
        Point2DSequence *out,
        const Point2DSequence *in);

    NDDSUSERDllExport extern void 
    Point2DSequencePluginSupport_destroy_data_w_params(
        Point2DSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Point2DSequencePluginSupport_destroy_data_ex(
        Point2DSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Point2DSequencePluginSupport_destroy_data(
        Point2DSequence *sample);

    NDDSUSERDllExport extern void 
    Point2DSequencePluginSupport_print_data(
        const Point2DSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Point2DSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Point2DSequence *out,
        const Point2DSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    Point2DSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Point2DSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Point2DSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Point2DSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define Curve2DPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define Curve2DPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define Curve2DPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define Curve2DPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define Curve2DPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Curve2D*
    Curve2DPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Curve2D*
    Curve2DPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Curve2D*
    Curve2DPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    Curve2DPluginSupport_copy_data(
        Curve2D *out,
        const Curve2D *in);

    NDDSUSERDllExport extern void 
    Curve2DPluginSupport_destroy_data_w_params(
        Curve2D *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    Curve2DPluginSupport_destroy_data_ex(
        Curve2D *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    Curve2DPluginSupport_destroy_data(
        Curve2D *sample);

    NDDSUSERDllExport extern void 
    Curve2DPluginSupport_print_data(
        const Curve2D *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    Curve2DPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Curve2D *out,
        const Curve2D *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    Curve2DPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Curve2D *sample); 

    NDDSUSERDllExport extern RTIBool
    Curve2DPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Curve2D *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    Curve2DPlugin_deserialize_from_cdr_buffer(
        Curve2D *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    Curve2DPlugin_data_to_string(
        const Curve2D *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    Curve2DPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    Curve2DPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    Curve2DPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    Curve2DPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    Curve2DPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Curve2D ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * Curve2DPlugin_get_programs(void);

    #define ControlCurvePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ControlCurvePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ControlCurvePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ControlCurvePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ControlCurvePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ControlCurve*
    ControlCurvePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ControlCurve*
    ControlCurvePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ControlCurve*
    ControlCurvePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ControlCurvePluginSupport_copy_data(
        ControlCurve *out,
        const ControlCurve *in);

    NDDSUSERDllExport extern void 
    ControlCurvePluginSupport_destroy_data_w_params(
        ControlCurve *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ControlCurvePluginSupport_destroy_data_ex(
        ControlCurve *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ControlCurvePluginSupport_destroy_data(
        ControlCurve *sample);

    NDDSUSERDllExport extern void 
    ControlCurvePluginSupport_print_data(
        const ControlCurve *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ControlCurvePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ControlCurve *out,
        const ControlCurve *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ControlCurvePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ControlCurve *sample); 

    NDDSUSERDllExport extern RTIBool
    ControlCurvePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ControlCurve *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ControlCurvePlugin_deserialize_from_cdr_buffer(
        ControlCurve *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ControlCurvePlugin_data_to_string(
        const ControlCurve *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ControlCurvePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ControlCurvePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ControlCurvePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ControlCurvePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ControlCurvePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ControlCurve ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ControlCurvePlugin_get_programs(void);

    #define GridRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define GridRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GridRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define GridRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GridRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GridRequest*
    GridRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GridRequest*
    GridRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GridRequest*
    GridRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GridRequestPluginSupport_copy_data(
        GridRequest *out,
        const GridRequest *in);

    NDDSUSERDllExport extern void 
    GridRequestPluginSupport_destroy_data_w_params(
        GridRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GridRequestPluginSupport_destroy_data_ex(
        GridRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GridRequestPluginSupport_destroy_data(
        GridRequest *sample);

    NDDSUSERDllExport extern void 
    GridRequestPluginSupport_print_data(
        const GridRequest *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    GridRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GridRequest *out,
        const GridRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    GridRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const GridRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    GridRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const GridRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    GridRequestPlugin_deserialize_from_cdr_buffer(
        GridRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    GridRequestPlugin_data_to_string(
        const GridRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    GridRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GridRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GridRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GridRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    GridRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        GridRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * GridRequestPlugin_get_programs(void);

    #define ClockMonotonicPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ClockMonotonicPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ClockMonotonicPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ClockMonotonicPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ClockMonotonicPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ClockMonotonic*
    ClockMonotonicPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ClockMonotonic*
    ClockMonotonicPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ClockMonotonic*
    ClockMonotonicPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ClockMonotonicPluginSupport_copy_data(
        ClockMonotonic *out,
        const ClockMonotonic *in);

    NDDSUSERDllExport extern void 
    ClockMonotonicPluginSupport_destroy_data_w_params(
        ClockMonotonic *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ClockMonotonicPluginSupport_destroy_data_ex(
        ClockMonotonic *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ClockMonotonicPluginSupport_destroy_data(
        ClockMonotonic *sample);

    NDDSUSERDllExport extern void 
    ClockMonotonicPluginSupport_print_data(
        const ClockMonotonic *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ClockMonotonicPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ClockMonotonic *out,
        const ClockMonotonic *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ClockMonotonicPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ClockMonotonic *sample); 

    NDDSUSERDllExport extern RTIBool
    ClockMonotonicPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ClockMonotonic *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ClockMonotonicPlugin_deserialize_from_cdr_buffer(
        ClockMonotonic *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ClockMonotonicPlugin_data_to_string(
        const ClockMonotonic *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ClockMonotonicPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ClockMonotonicPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ClockMonotonicPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ClockMonotonicPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ClockMonotonicPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ClockMonotonic ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ClockMonotonicPlugin_get_programs(void);

    #define ThermalInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ThermalInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ThermalInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ThermalInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ThermalInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ThermalInfo*
    ThermalInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ThermalInfo*
    ThermalInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ThermalInfo*
    ThermalInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ThermalInfoPluginSupport_copy_data(
        ThermalInfo *out,
        const ThermalInfo *in);

    NDDSUSERDllExport extern void 
    ThermalInfoPluginSupport_destroy_data_w_params(
        ThermalInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ThermalInfoPluginSupport_destroy_data_ex(
        ThermalInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ThermalInfoPluginSupport_destroy_data(
        ThermalInfo *sample);

    NDDSUSERDllExport extern void 
    ThermalInfoPluginSupport_print_data(
        const ThermalInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ThermalInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ThermalInfo *out,
        const ThermalInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ThermalInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ThermalInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    ThermalInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ThermalInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ThermalInfoPlugin_deserialize_from_cdr_buffer(
        ThermalInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ThermalInfoPlugin_data_to_string(
        const ThermalInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ThermalInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ThermalInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ThermalInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ThermalInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ThermalInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ThermalInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ThermalInfoPlugin_get_programs(void);

    #define ThermalStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ThermalStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ThermalStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ThermalStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ThermalStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ThermalState*
    ThermalStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ThermalState*
    ThermalStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ThermalState*
    ThermalStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ThermalStatePluginSupport_copy_data(
        ThermalState *out,
        const ThermalState *in);

    NDDSUSERDllExport extern void 
    ThermalStatePluginSupport_destroy_data_w_params(
        ThermalState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ThermalStatePluginSupport_destroy_data_ex(
        ThermalState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ThermalStatePluginSupport_destroy_data(
        ThermalState *sample);

    NDDSUSERDllExport extern void 
    ThermalStatePluginSupport_print_data(
        const ThermalState *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ThermalStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ThermalState *out,
        const ThermalState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ThermalStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ThermalState *sample); 

    NDDSUSERDllExport extern RTIBool
    ThermalStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ThermalState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ThermalStatePlugin_deserialize_from_cdr_buffer(
        ThermalState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ThermalStatePlugin_data_to_string(
        const ThermalState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ThermalStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ThermalStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ThermalStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ThermalStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ThermalStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ThermalState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ThermalStatePlugin_get_programs(void);

    #define SynchronousMachineCoefficientsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define SynchronousMachineCoefficientsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define SynchronousMachineCoefficientsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define SynchronousMachineCoefficientsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define SynchronousMachineCoefficientsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern SynchronousMachineCoefficients*
    SynchronousMachineCoefficientsPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern SynchronousMachineCoefficients*
    SynchronousMachineCoefficientsPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SynchronousMachineCoefficients*
    SynchronousMachineCoefficientsPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    SynchronousMachineCoefficientsPluginSupport_copy_data(
        SynchronousMachineCoefficients *out,
        const SynchronousMachineCoefficients *in);

    NDDSUSERDllExport extern void 
    SynchronousMachineCoefficientsPluginSupport_destroy_data_w_params(
        SynchronousMachineCoefficients *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    SynchronousMachineCoefficientsPluginSupport_destroy_data_ex(
        SynchronousMachineCoefficients *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    SynchronousMachineCoefficientsPluginSupport_destroy_data(
        SynchronousMachineCoefficients *sample);

    NDDSUSERDllExport extern void 
    SynchronousMachineCoefficientsPluginSupport_print_data(
        const SynchronousMachineCoefficients *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    SynchronousMachineCoefficientsPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SynchronousMachineCoefficients *out,
        const SynchronousMachineCoefficients *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    SynchronousMachineCoefficientsPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const SynchronousMachineCoefficients *sample); 

    NDDSUSERDllExport extern RTIBool
    SynchronousMachineCoefficientsPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const SynchronousMachineCoefficients *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    SynchronousMachineCoefficientsPlugin_deserialize_from_cdr_buffer(
        SynchronousMachineCoefficients *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    SynchronousMachineCoefficientsPlugin_data_to_string(
        const SynchronousMachineCoefficients *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    SynchronousMachineCoefficientsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    SynchronousMachineCoefficientsPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    SynchronousMachineCoefficientsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SynchronousMachineCoefficientsPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    SynchronousMachineCoefficientsPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        SynchronousMachineCoefficients ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * SynchronousMachineCoefficientsPlugin_get_programs(void);

    #define PowerElectronicsInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerElectronicsInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerElectronicsInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerElectronicsInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerElectronicsInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerElectronicsInfo*
    PowerElectronicsInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerElectronicsInfo*
    PowerElectronicsInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerElectronicsInfo*
    PowerElectronicsInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerElectronicsInfoPluginSupport_copy_data(
        PowerElectronicsInfo *out,
        const PowerElectronicsInfo *in);

    NDDSUSERDllExport extern void 
    PowerElectronicsInfoPluginSupport_destroy_data_w_params(
        PowerElectronicsInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerElectronicsInfoPluginSupport_destroy_data_ex(
        PowerElectronicsInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerElectronicsInfoPluginSupport_destroy_data(
        PowerElectronicsInfo *sample);

    NDDSUSERDllExport extern void 
    PowerElectronicsInfoPluginSupport_print_data(
        const PowerElectronicsInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerElectronicsInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerElectronicsInfo *out,
        const PowerElectronicsInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerElectronicsInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerElectronicsInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerElectronicsInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerElectronicsInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerElectronicsInfoPlugin_deserialize_from_cdr_buffer(
        PowerElectronicsInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerElectronicsInfoPlugin_data_to_string(
        const PowerElectronicsInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerElectronicsInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerElectronicsInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerElectronicsInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerElectronicsInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerElectronicsInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerElectronicsInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerElectronicsInfoPlugin_get_programs(void);

    #define PowerElectronicsStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerElectronicsStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerElectronicsStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerElectronicsStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerElectronicsStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerElectronicsState*
    PowerElectronicsStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerElectronicsState*
    PowerElectronicsStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerElectronicsState*
    PowerElectronicsStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerElectronicsStatePluginSupport_copy_data(
        PowerElectronicsState *out,
        const PowerElectronicsState *in);

    NDDSUSERDllExport extern void 
    PowerElectronicsStatePluginSupport_destroy_data_w_params(
        PowerElectronicsState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerElectronicsStatePluginSupport_destroy_data_ex(
        PowerElectronicsState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerElectronicsStatePluginSupport_destroy_data(
        PowerElectronicsState *sample);

    NDDSUSERDllExport extern void 
    PowerElectronicsStatePluginSupport_print_data(
        const PowerElectronicsState *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerElectronicsStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerElectronicsState *out,
        const PowerElectronicsState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerElectronicsStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerElectronicsState *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerElectronicsStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerElectronicsState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerElectronicsStatePlugin_deserialize_from_cdr_buffer(
        PowerElectronicsState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerElectronicsStatePlugin_data_to_string(
        const PowerElectronicsState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerElectronicsStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerElectronicsStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerElectronicsStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerElectronicsStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerElectronicsStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerElectronicsState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerElectronicsStatePlugin_get_programs(void);

    #define StorageCellNumberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define StorageCellNumberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define StorageCellNumberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define StorageCellNumberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define StorageCellNumberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern StorageCellNumber*
    StorageCellNumberPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern StorageCellNumber*
    StorageCellNumberPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern StorageCellNumber*
    StorageCellNumberPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    StorageCellNumberPluginSupport_copy_data(
        StorageCellNumber *out,
        const StorageCellNumber *in);

    NDDSUSERDllExport extern void 
    StorageCellNumberPluginSupport_destroy_data_w_params(
        StorageCellNumber *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    StorageCellNumberPluginSupport_destroy_data_ex(
        StorageCellNumber *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    StorageCellNumberPluginSupport_destroy_data(
        StorageCellNumber *sample);

    NDDSUSERDllExport extern void 
    StorageCellNumberPluginSupport_print_data(
        const StorageCellNumber *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    StorageCellNumberPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        StorageCellNumber *out,
        const StorageCellNumber *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    StorageCellNumberPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    StorageCellNumberPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    StorageCellNumberPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    StorageCellNumberPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define StorageCellStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define StorageCellStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define StorageCellStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define StorageCellStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define StorageCellStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern StorageCellState*
    StorageCellStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern StorageCellState*
    StorageCellStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern StorageCellState*
    StorageCellStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    StorageCellStatePluginSupport_copy_data(
        StorageCellState *out,
        const StorageCellState *in);

    NDDSUSERDllExport extern void 
    StorageCellStatePluginSupport_destroy_data_w_params(
        StorageCellState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    StorageCellStatePluginSupport_destroy_data_ex(
        StorageCellState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    StorageCellStatePluginSupport_destroy_data(
        StorageCellState *sample);

    NDDSUSERDllExport extern void 
    StorageCellStatePluginSupport_print_data(
        const StorageCellState *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    StorageCellStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        StorageCellState *out,
        const StorageCellState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    StorageCellStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const StorageCellState *sample); 

    NDDSUSERDllExport extern RTIBool
    StorageCellStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const StorageCellState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    StorageCellStatePlugin_deserialize_from_cdr_buffer(
        StorageCellState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    StorageCellStatePlugin_data_to_string(
        const StorageCellState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    StorageCellStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    StorageCellStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    StorageCellStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    StorageCellStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    StorageCellStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        StorageCellState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * StorageCellStatePlugin_get_programs(void);

    #define StorageCellStateSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define StorageCellStateSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define StorageCellStateSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define StorageCellStateSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define StorageCellStateSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern StorageCellStateSequence*
    StorageCellStateSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern StorageCellStateSequence*
    StorageCellStateSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern StorageCellStateSequence*
    StorageCellStateSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    StorageCellStateSequencePluginSupport_copy_data(
        StorageCellStateSequence *out,
        const StorageCellStateSequence *in);

    NDDSUSERDllExport extern void 
    StorageCellStateSequencePluginSupport_destroy_data_w_params(
        StorageCellStateSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    StorageCellStateSequencePluginSupport_destroy_data_ex(
        StorageCellStateSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    StorageCellStateSequencePluginSupport_destroy_data(
        StorageCellStateSequence *sample);

    NDDSUSERDllExport extern void 
    StorageCellStateSequencePluginSupport_print_data(
        const StorageCellStateSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    StorageCellStateSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        StorageCellStateSequence *out,
        const StorageCellStateSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    StorageCellStateSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    StorageCellStateSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    StorageCellStateSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    StorageCellStateSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define EnergyStorageStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define EnergyStorageStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define EnergyStorageStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define EnergyStorageStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define EnergyStorageStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern EnergyStorageState*
    EnergyStorageStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern EnergyStorageState*
    EnergyStorageStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EnergyStorageState*
    EnergyStorageStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    EnergyStorageStatePluginSupport_copy_data(
        EnergyStorageState *out,
        const EnergyStorageState *in);

    NDDSUSERDllExport extern void 
    EnergyStorageStatePluginSupport_destroy_data_w_params(
        EnergyStorageState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    EnergyStorageStatePluginSupport_destroy_data_ex(
        EnergyStorageState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EnergyStorageStatePluginSupport_destroy_data(
        EnergyStorageState *sample);

    NDDSUSERDllExport extern void 
    EnergyStorageStatePluginSupport_print_data(
        const EnergyStorageState *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    EnergyStorageStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStorageState *out,
        const EnergyStorageState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    EnergyStorageStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const EnergyStorageState *sample); 

    NDDSUSERDllExport extern RTIBool
    EnergyStorageStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const EnergyStorageState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    EnergyStorageStatePlugin_deserialize_from_cdr_buffer(
        EnergyStorageState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    EnergyStorageStatePlugin_data_to_string(
        const EnergyStorageState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    EnergyStorageStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    EnergyStorageStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    EnergyStorageStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    EnergyStorageStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    EnergyStorageStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStorageState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * EnergyStorageStatePlugin_get_programs(void);

    #define EnergyStorageInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define EnergyStorageInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define EnergyStorageInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define EnergyStorageInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define EnergyStorageInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern EnergyStorageInfo*
    EnergyStorageInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern EnergyStorageInfo*
    EnergyStorageInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EnergyStorageInfo*
    EnergyStorageInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    EnergyStorageInfoPluginSupport_copy_data(
        EnergyStorageInfo *out,
        const EnergyStorageInfo *in);

    NDDSUSERDllExport extern void 
    EnergyStorageInfoPluginSupport_destroy_data_w_params(
        EnergyStorageInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    EnergyStorageInfoPluginSupport_destroy_data_ex(
        EnergyStorageInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EnergyStorageInfoPluginSupport_destroy_data(
        EnergyStorageInfo *sample);

    NDDSUSERDllExport extern void 
    EnergyStorageInfoPluginSupport_print_data(
        const EnergyStorageInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    EnergyStorageInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStorageInfo *out,
        const EnergyStorageInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    EnergyStorageInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const EnergyStorageInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    EnergyStorageInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const EnergyStorageInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    EnergyStorageInfoPlugin_deserialize_from_cdr_buffer(
        EnergyStorageInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    EnergyStorageInfoPlugin_data_to_string(
        const EnergyStorageInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    EnergyStorageInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    EnergyStorageInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    EnergyStorageInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    EnergyStorageInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    EnergyStorageInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStorageInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * EnergyStorageInfoPlugin_get_programs(void);

    #define GeneratorInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define GeneratorInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GeneratorInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define GeneratorInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GeneratorInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GeneratorInfo*
    GeneratorInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GeneratorInfo*
    GeneratorInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GeneratorInfo*
    GeneratorInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GeneratorInfoPluginSupport_copy_data(
        GeneratorInfo *out,
        const GeneratorInfo *in);

    NDDSUSERDllExport extern void 
    GeneratorInfoPluginSupport_destroy_data_w_params(
        GeneratorInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GeneratorInfoPluginSupport_destroy_data_ex(
        GeneratorInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GeneratorInfoPluginSupport_destroy_data(
        GeneratorInfo *sample);

    NDDSUSERDllExport extern void 
    GeneratorInfoPluginSupport_print_data(
        const GeneratorInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    GeneratorInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GeneratorInfo *out,
        const GeneratorInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    GeneratorInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const GeneratorInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    GeneratorInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const GeneratorInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    GeneratorInfoPlugin_deserialize_from_cdr_buffer(
        GeneratorInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    GeneratorInfoPlugin_data_to_string(
        const GeneratorInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    GeneratorInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GeneratorInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GeneratorInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GeneratorInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    GeneratorInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        GeneratorInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * GeneratorInfoPlugin_get_programs(void);

    #define GeneratorStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define GeneratorStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GeneratorStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define GeneratorStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GeneratorStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GeneratorState*
    GeneratorStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GeneratorState*
    GeneratorStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GeneratorState*
    GeneratorStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GeneratorStatePluginSupport_copy_data(
        GeneratorState *out,
        const GeneratorState *in);

    NDDSUSERDllExport extern void 
    GeneratorStatePluginSupport_destroy_data_w_params(
        GeneratorState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GeneratorStatePluginSupport_destroy_data_ex(
        GeneratorState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GeneratorStatePluginSupport_destroy_data(
        GeneratorState *sample);

    NDDSUSERDllExport extern void 
    GeneratorStatePluginSupport_print_data(
        const GeneratorState *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    GeneratorStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GeneratorState *out,
        const GeneratorState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    GeneratorStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const GeneratorState *sample); 

    NDDSUSERDllExport extern RTIBool
    GeneratorStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const GeneratorState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    GeneratorStatePlugin_deserialize_from_cdr_buffer(
        GeneratorState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    GeneratorStatePlugin_data_to_string(
        const GeneratorState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    GeneratorStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GeneratorStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GeneratorStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GeneratorStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    GeneratorStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        GeneratorState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * GeneratorStatePlugin_get_programs(void);

    #define EngineInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define EngineInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define EngineInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define EngineInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define EngineInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern EngineInfo*
    EngineInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern EngineInfo*
    EngineInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EngineInfo*
    EngineInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    EngineInfoPluginSupport_copy_data(
        EngineInfo *out,
        const EngineInfo *in);

    NDDSUSERDllExport extern void 
    EngineInfoPluginSupport_destroy_data_w_params(
        EngineInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    EngineInfoPluginSupport_destroy_data_ex(
        EngineInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EngineInfoPluginSupport_destroy_data(
        EngineInfo *sample);

    NDDSUSERDllExport extern void 
    EngineInfoPluginSupport_print_data(
        const EngineInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    EngineInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        EngineInfo *out,
        const EngineInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    EngineInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const EngineInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    EngineInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const EngineInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    EngineInfoPlugin_deserialize_from_cdr_buffer(
        EngineInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    EngineInfoPlugin_data_to_string(
        const EngineInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    EngineInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    EngineInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    EngineInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    EngineInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    EngineInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        EngineInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * EngineInfoPlugin_get_programs(void);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    EngineOperatingStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    EngineOperatingStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    EngineOperatingStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    EngineOperatingStatePluginSupport_print_data(
        const EngineOperatingState *sample, const char *desc, int indent_level);

    #define EngineStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define EngineStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define EngineStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define EngineStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define EngineStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern EngineState*
    EngineStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern EngineState*
    EngineStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EngineState*
    EngineStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    EngineStatePluginSupport_copy_data(
        EngineState *out,
        const EngineState *in);

    NDDSUSERDllExport extern void 
    EngineStatePluginSupport_destroy_data_w_params(
        EngineState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    EngineStatePluginSupport_destroy_data_ex(
        EngineState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EngineStatePluginSupport_destroy_data(
        EngineState *sample);

    NDDSUSERDllExport extern void 
    EngineStatePluginSupport_print_data(
        const EngineState *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    EngineStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        EngineState *out,
        const EngineState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    EngineStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const EngineState *sample); 

    NDDSUSERDllExport extern RTIBool
    EngineStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const EngineState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    EngineStatePlugin_deserialize_from_cdr_buffer(
        EngineState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    EngineStatePlugin_data_to_string(
        const EngineState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    EngineStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    EngineStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    EngineStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    EngineStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    EngineStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        EngineState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * EngineStatePlugin_get_programs(void);

    #define FuelInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define FuelInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define FuelInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define FuelInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define FuelInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern FuelInfo*
    FuelInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern FuelInfo*
    FuelInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern FuelInfo*
    FuelInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    FuelInfoPluginSupport_copy_data(
        FuelInfo *out,
        const FuelInfo *in);

    NDDSUSERDllExport extern void 
    FuelInfoPluginSupport_destroy_data_w_params(
        FuelInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    FuelInfoPluginSupport_destroy_data_ex(
        FuelInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    FuelInfoPluginSupport_destroy_data(
        FuelInfo *sample);

    NDDSUSERDllExport extern void 
    FuelInfoPluginSupport_print_data(
        const FuelInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    FuelInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        FuelInfo *out,
        const FuelInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    FuelInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const FuelInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    FuelInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const FuelInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    FuelInfoPlugin_deserialize_from_cdr_buffer(
        FuelInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    FuelInfoPlugin_data_to_string(
        const FuelInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    FuelInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    FuelInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    FuelInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    FuelInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    FuelInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        FuelInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * FuelInfoPlugin_get_programs(void);

    #define FuelStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define FuelStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define FuelStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define FuelStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define FuelStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern FuelState*
    FuelStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern FuelState*
    FuelStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern FuelState*
    FuelStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    FuelStatePluginSupport_copy_data(
        FuelState *out,
        const FuelState *in);

    NDDSUSERDllExport extern void 
    FuelStatePluginSupport_destroy_data_w_params(
        FuelState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    FuelStatePluginSupport_destroy_data_ex(
        FuelState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    FuelStatePluginSupport_destroy_data(
        FuelState *sample);

    NDDSUSERDllExport extern void 
    FuelStatePluginSupport_print_data(
        const FuelState *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    FuelStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        FuelState *out,
        const FuelState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    FuelStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const FuelState *sample); 

    NDDSUSERDllExport extern RTIBool
    FuelStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const FuelState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    FuelStatePlugin_deserialize_from_cdr_buffer(
        FuelState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    FuelStatePlugin_data_to_string(
        const FuelState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    FuelStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    FuelStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    FuelStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    FuelStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    FuelStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        FuelState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * FuelStatePlugin_get_programs(void);

    #define LoadStepResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LoadStepResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LoadStepResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LoadStepResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LoadStepResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LoadStepResponse*
    LoadStepResponsePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LoadStepResponse*
    LoadStepResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LoadStepResponse*
    LoadStepResponsePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LoadStepResponsePluginSupport_copy_data(
        LoadStepResponse *out,
        const LoadStepResponse *in);

    NDDSUSERDllExport extern void 
    LoadStepResponsePluginSupport_destroy_data_w_params(
        LoadStepResponse *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LoadStepResponsePluginSupport_destroy_data_ex(
        LoadStepResponse *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LoadStepResponsePluginSupport_destroy_data(
        LoadStepResponse *sample);

    NDDSUSERDllExport extern void 
    LoadStepResponsePluginSupport_print_data(
        const LoadStepResponse *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    LoadStepResponsePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LoadStepResponse *out,
        const LoadStepResponse *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    LoadStepResponsePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const LoadStepResponse *sample); 

    NDDSUSERDllExport extern RTIBool
    LoadStepResponsePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const LoadStepResponse *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    LoadStepResponsePlugin_deserialize_from_cdr_buffer(
        LoadStepResponse *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    LoadStepResponsePlugin_data_to_string(
        const LoadStepResponse *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    LoadStepResponsePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LoadStepResponsePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LoadStepResponsePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LoadStepResponsePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    LoadStepResponsePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        LoadStepResponse ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * LoadStepResponsePlugin_get_programs(void);

    #define LoadStepResponseSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LoadStepResponseSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LoadStepResponseSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LoadStepResponseSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LoadStepResponseSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LoadStepResponseSequence*
    LoadStepResponseSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LoadStepResponseSequence*
    LoadStepResponseSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LoadStepResponseSequence*
    LoadStepResponseSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LoadStepResponseSequencePluginSupport_copy_data(
        LoadStepResponseSequence *out,
        const LoadStepResponseSequence *in);

    NDDSUSERDllExport extern void 
    LoadStepResponseSequencePluginSupport_destroy_data_w_params(
        LoadStepResponseSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LoadStepResponseSequencePluginSupport_destroy_data_ex(
        LoadStepResponseSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LoadStepResponseSequencePluginSupport_destroy_data(
        LoadStepResponseSequence *sample);

    NDDSUSERDllExport extern void 
    LoadStepResponseSequencePluginSupport_print_data(
        const LoadStepResponseSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    LoadStepResponseSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LoadStepResponseSequence *out,
        const LoadStepResponseSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    LoadStepResponseSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LoadStepResponseSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LoadStepResponseSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LoadStepResponseSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define LoadSharingInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LoadSharingInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LoadSharingInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LoadSharingInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LoadSharingInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LoadSharingInfo*
    LoadSharingInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LoadSharingInfo*
    LoadSharingInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LoadSharingInfo*
    LoadSharingInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LoadSharingInfoPluginSupport_copy_data(
        LoadSharingInfo *out,
        const LoadSharingInfo *in);

    NDDSUSERDllExport extern void 
    LoadSharingInfoPluginSupport_destroy_data_w_params(
        LoadSharingInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LoadSharingInfoPluginSupport_destroy_data_ex(
        LoadSharingInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LoadSharingInfoPluginSupport_destroy_data(
        LoadSharingInfo *sample);

    NDDSUSERDllExport extern void 
    LoadSharingInfoPluginSupport_print_data(
        const LoadSharingInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    LoadSharingInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LoadSharingInfo *out,
        const LoadSharingInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    LoadSharingInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const LoadSharingInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    LoadSharingInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const LoadSharingInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    LoadSharingInfoPlugin_deserialize_from_cdr_buffer(
        LoadSharingInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    LoadSharingInfoPlugin_data_to_string(
        const LoadSharingInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    LoadSharingInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LoadSharingInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LoadSharingInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LoadSharingInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    LoadSharingInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        LoadSharingInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * LoadSharingInfoPlugin_get_programs(void);

    #define LoadSharingInfoSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LoadSharingInfoSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LoadSharingInfoSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LoadSharingInfoSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LoadSharingInfoSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LoadSharingInfoSequence*
    LoadSharingInfoSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LoadSharingInfoSequence*
    LoadSharingInfoSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LoadSharingInfoSequence*
    LoadSharingInfoSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LoadSharingInfoSequencePluginSupport_copy_data(
        LoadSharingInfoSequence *out,
        const LoadSharingInfoSequence *in);

    NDDSUSERDllExport extern void 
    LoadSharingInfoSequencePluginSupport_destroy_data_w_params(
        LoadSharingInfoSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LoadSharingInfoSequencePluginSupport_destroy_data_ex(
        LoadSharingInfoSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LoadSharingInfoSequencePluginSupport_destroy_data(
        LoadSharingInfoSequence *sample);

    NDDSUSERDllExport extern void 
    LoadSharingInfoSequencePluginSupport_print_data(
        const LoadSharingInfoSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    LoadSharingInfoSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LoadSharingInfoSequence *out,
        const LoadSharingInfoSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    LoadSharingInfoSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LoadSharingInfoSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LoadSharingInfoSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LoadSharingInfoSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define StorageInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define StorageInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define StorageInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define StorageInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define StorageInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern StorageInfo*
    StorageInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern StorageInfo*
    StorageInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern StorageInfo*
    StorageInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    StorageInfoPluginSupport_copy_data(
        StorageInfo *out,
        const StorageInfo *in);

    NDDSUSERDllExport extern void 
    StorageInfoPluginSupport_destroy_data_w_params(
        StorageInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    StorageInfoPluginSupport_destroy_data_ex(
        StorageInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    StorageInfoPluginSupport_destroy_data(
        StorageInfo *sample);

    NDDSUSERDllExport extern void 
    StorageInfoPluginSupport_print_data(
        const StorageInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    StorageInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        StorageInfo *out,
        const StorageInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    StorageInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const StorageInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    StorageInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const StorageInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    StorageInfoPlugin_deserialize_from_cdr_buffer(
        StorageInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    StorageInfoPlugin_data_to_string(
        const StorageInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    StorageInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    StorageInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    StorageInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    StorageInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    StorageInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        StorageInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * StorageInfoPlugin_get_programs(void);

    #define ControlHardwareInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ControlHardwareInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ControlHardwareInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ControlHardwareInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ControlHardwareInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ControlHardwareInfo*
    ControlHardwareInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ControlHardwareInfo*
    ControlHardwareInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ControlHardwareInfo*
    ControlHardwareInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ControlHardwareInfoPluginSupport_copy_data(
        ControlHardwareInfo *out,
        const ControlHardwareInfo *in);

    NDDSUSERDllExport extern void 
    ControlHardwareInfoPluginSupport_destroy_data_w_params(
        ControlHardwareInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ControlHardwareInfoPluginSupport_destroy_data_ex(
        ControlHardwareInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ControlHardwareInfoPluginSupport_destroy_data(
        ControlHardwareInfo *sample);

    NDDSUSERDllExport extern void 
    ControlHardwareInfoPluginSupport_print_data(
        const ControlHardwareInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ControlHardwareInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ControlHardwareInfo *out,
        const ControlHardwareInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ControlHardwareInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ControlHardwareInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    ControlHardwareInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ControlHardwareInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ControlHardwareInfoPlugin_deserialize_from_cdr_buffer(
        ControlHardwareInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ControlHardwareInfoPlugin_data_to_string(
        const ControlHardwareInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ControlHardwareInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ControlHardwareInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ControlHardwareInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ControlHardwareInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ControlHardwareInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ControlHardwareInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ControlHardwareInfoPlugin_get_programs(void);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ControlHardwareUpdate
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ControlHardwareUpdate)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ControlHardwareUpdate must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ControlHardwareUpdate.
    */
    typedef  class ControlHardwareUpdate ControlHardwareUpdateKeyHolder;

    #define ControlHardwareUpdatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ControlHardwareUpdatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ControlHardwareUpdatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ControlHardwareUpdatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ControlHardwareUpdatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ControlHardwareUpdatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ControlHardwareUpdatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ControlHardwareUpdate*
    ControlHardwareUpdatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ControlHardwareUpdate*
    ControlHardwareUpdatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ControlHardwareUpdate*
    ControlHardwareUpdatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ControlHardwareUpdatePluginSupport_copy_data(
        ControlHardwareUpdate *out,
        const ControlHardwareUpdate *in);

    NDDSUSERDllExport extern void 
    ControlHardwareUpdatePluginSupport_destroy_data_w_params(
        ControlHardwareUpdate *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ControlHardwareUpdatePluginSupport_destroy_data_ex(
        ControlHardwareUpdate *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ControlHardwareUpdatePluginSupport_destroy_data(
        ControlHardwareUpdate *sample);

    NDDSUSERDllExport extern void 
    ControlHardwareUpdatePluginSupport_print_data(
        const ControlHardwareUpdate *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern ControlHardwareUpdate*
    ControlHardwareUpdatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ControlHardwareUpdate*
    ControlHardwareUpdatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ControlHardwareUpdatePluginSupport_destroy_key_ex(
        ControlHardwareUpdateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ControlHardwareUpdatePluginSupport_destroy_key(
        ControlHardwareUpdateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ControlHardwareUpdatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ControlHardwareUpdatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ControlHardwareUpdatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ControlHardwareUpdatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ControlHardwareUpdatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ControlHardwareUpdate *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ControlHardwareUpdatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ControlHardwareUpdate *out,
        const ControlHardwareUpdate *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ControlHardwareUpdatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ControlHardwareUpdate *sample); 

    NDDSUSERDllExport extern RTIBool
    ControlHardwareUpdatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ControlHardwareUpdate *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ControlHardwareUpdatePlugin_deserialize_from_cdr_buffer(
        ControlHardwareUpdate *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ControlHardwareUpdatePlugin_data_to_string(
        const ControlHardwareUpdate *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ControlHardwareUpdatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ControlHardwareUpdatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ControlHardwareUpdatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ControlHardwareUpdatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ControlHardwareUpdatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ControlHardwareUpdate ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ControlHardwareUpdatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ControlHardwareUpdateKeyHolder *key, 
        const ControlHardwareUpdate *instance);

    NDDSUSERDllExport extern RTIBool 
    ControlHardwareUpdatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        ControlHardwareUpdate *instance, 
        const ControlHardwareUpdateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ControlHardwareUpdatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ControlHardwareUpdatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ControlHardwareUpdatePlugin_new(void);

    NDDSUSERDllExport extern void
    ControlHardwareUpdatePlugin_delete(struct PRESTypePlugin *);

    #define PowerHardwareInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerHardwareInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerHardwareInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerHardwareInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerHardwareInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerHardwareInfo*
    PowerHardwareInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerHardwareInfo*
    PowerHardwareInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerHardwareInfo*
    PowerHardwareInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerHardwareInfoPluginSupport_copy_data(
        PowerHardwareInfo *out,
        const PowerHardwareInfo *in);

    NDDSUSERDllExport extern void 
    PowerHardwareInfoPluginSupport_destroy_data_w_params(
        PowerHardwareInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerHardwareInfoPluginSupport_destroy_data_ex(
        PowerHardwareInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerHardwareInfoPluginSupport_destroy_data(
        PowerHardwareInfo *sample);

    NDDSUSERDllExport extern void 
    PowerHardwareInfoPluginSupport_print_data(
        const PowerHardwareInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerHardwareInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerHardwareInfo *out,
        const PowerHardwareInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerHardwareInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerHardwareInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerHardwareInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerHardwareInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerHardwareInfoPlugin_deserialize_from_cdr_buffer(
        PowerHardwareInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerHardwareInfoPlugin_data_to_string(
        const PowerHardwareInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerHardwareInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerHardwareInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerHardwareInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerHardwareInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerHardwareInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerHardwareInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerHardwareInfoPlugin_get_programs(void);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct PowerHardwareUpdate
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct PowerHardwareUpdate)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * PowerHardwareUpdate must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct PowerHardwareUpdate.
    */
    typedef  class PowerHardwareUpdate PowerHardwareUpdateKeyHolder;

    #define PowerHardwareUpdatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerHardwareUpdatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerHardwareUpdatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerHardwareUpdatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define PowerHardwareUpdatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define PowerHardwareUpdatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerHardwareUpdatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerHardwareUpdate*
    PowerHardwareUpdatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerHardwareUpdate*
    PowerHardwareUpdatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerHardwareUpdate*
    PowerHardwareUpdatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerHardwareUpdatePluginSupport_copy_data(
        PowerHardwareUpdate *out,
        const PowerHardwareUpdate *in);

    NDDSUSERDllExport extern void 
    PowerHardwareUpdatePluginSupport_destroy_data_w_params(
        PowerHardwareUpdate *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerHardwareUpdatePluginSupport_destroy_data_ex(
        PowerHardwareUpdate *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerHardwareUpdatePluginSupport_destroy_data(
        PowerHardwareUpdate *sample);

    NDDSUSERDllExport extern void 
    PowerHardwareUpdatePluginSupport_print_data(
        const PowerHardwareUpdate *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern PowerHardwareUpdate*
    PowerHardwareUpdatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerHardwareUpdate*
    PowerHardwareUpdatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    PowerHardwareUpdatePluginSupport_destroy_key_ex(
        PowerHardwareUpdateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerHardwareUpdatePluginSupport_destroy_key(
        PowerHardwareUpdateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    PowerHardwareUpdatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    PowerHardwareUpdatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    PowerHardwareUpdatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    PowerHardwareUpdatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    PowerHardwareUpdatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerHardwareUpdate *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    PowerHardwareUpdatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerHardwareUpdate *out,
        const PowerHardwareUpdate *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerHardwareUpdatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerHardwareUpdate *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerHardwareUpdatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerHardwareUpdate *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerHardwareUpdatePlugin_deserialize_from_cdr_buffer(
        PowerHardwareUpdate *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerHardwareUpdatePlugin_data_to_string(
        const PowerHardwareUpdate *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerHardwareUpdatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerHardwareUpdatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerHardwareUpdatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerHardwareUpdatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerHardwareUpdatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerHardwareUpdate ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    PowerHardwareUpdatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerHardwareUpdateKeyHolder *key, 
        const PowerHardwareUpdate *instance);

    NDDSUSERDllExport extern RTIBool 
    PowerHardwareUpdatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        PowerHardwareUpdate *instance, 
        const PowerHardwareUpdateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    PowerHardwareUpdatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerHardwareUpdatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    PowerHardwareUpdatePlugin_new(void);

    NDDSUSERDllExport extern void
    PowerHardwareUpdatePlugin_delete(struct PRESTypePlugin *);

    #define DiagnosticTroubleCodePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DiagnosticTroubleCodePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DiagnosticTroubleCodePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DiagnosticTroubleCodePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DiagnosticTroubleCodePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DiagnosticTroubleCode*
    DiagnosticTroubleCodePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DiagnosticTroubleCode*
    DiagnosticTroubleCodePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DiagnosticTroubleCode*
    DiagnosticTroubleCodePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DiagnosticTroubleCodePluginSupport_copy_data(
        DiagnosticTroubleCode *out,
        const DiagnosticTroubleCode *in);

    NDDSUSERDllExport extern void 
    DiagnosticTroubleCodePluginSupport_destroy_data_w_params(
        DiagnosticTroubleCode *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DiagnosticTroubleCodePluginSupport_destroy_data_ex(
        DiagnosticTroubleCode *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DiagnosticTroubleCodePluginSupport_destroy_data(
        DiagnosticTroubleCode *sample);

    NDDSUSERDllExport extern void 
    DiagnosticTroubleCodePluginSupport_print_data(
        const DiagnosticTroubleCode *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    DiagnosticTroubleCodePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DiagnosticTroubleCode *out,
        const DiagnosticTroubleCode *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    DiagnosticTroubleCodePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const DiagnosticTroubleCode *sample); 

    NDDSUSERDllExport extern RTIBool
    DiagnosticTroubleCodePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DiagnosticTroubleCode *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    DiagnosticTroubleCodePlugin_deserialize_from_cdr_buffer(
        DiagnosticTroubleCode *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    DiagnosticTroubleCodePlugin_data_to_string(
        const DiagnosticTroubleCode *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    DiagnosticTroubleCodePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DiagnosticTroubleCodePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DiagnosticTroubleCodePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DiagnosticTroubleCodePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    DiagnosticTroubleCodePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DiagnosticTroubleCode ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * DiagnosticTroubleCodePlugin_get_programs(void);

    #define DiagnosticTroubleCodeSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DiagnosticTroubleCodeSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DiagnosticTroubleCodeSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DiagnosticTroubleCodeSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DiagnosticTroubleCodeSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DiagnosticTroubleCodeSequence*
    DiagnosticTroubleCodeSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DiagnosticTroubleCodeSequence*
    DiagnosticTroubleCodeSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DiagnosticTroubleCodeSequence*
    DiagnosticTroubleCodeSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DiagnosticTroubleCodeSequencePluginSupport_copy_data(
        DiagnosticTroubleCodeSequence *out,
        const DiagnosticTroubleCodeSequence *in);

    NDDSUSERDllExport extern void 
    DiagnosticTroubleCodeSequencePluginSupport_destroy_data_w_params(
        DiagnosticTroubleCodeSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DiagnosticTroubleCodeSequencePluginSupport_destroy_data_ex(
        DiagnosticTroubleCodeSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DiagnosticTroubleCodeSequencePluginSupport_destroy_data(
        DiagnosticTroubleCodeSequence *sample);

    NDDSUSERDllExport extern void 
    DiagnosticTroubleCodeSequencePluginSupport_print_data(
        const DiagnosticTroubleCodeSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    DiagnosticTroubleCodeSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DiagnosticTroubleCodeSequence *out,
        const DiagnosticTroubleCodeSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DiagnosticTroubleCodeSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DiagnosticTroubleCodeSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DiagnosticTroubleCodeSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DiagnosticTroubleCodeSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define ClockRealtimePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ClockRealtimePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ClockRealtimePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ClockRealtimePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ClockRealtimePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ClockRealtime*
    ClockRealtimePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ClockRealtime*
    ClockRealtimePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ClockRealtime*
    ClockRealtimePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ClockRealtimePluginSupport_copy_data(
        ClockRealtime *out,
        const ClockRealtime *in);

    NDDSUSERDllExport extern void 
    ClockRealtimePluginSupport_destroy_data_w_params(
        ClockRealtime *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ClockRealtimePluginSupport_destroy_data_ex(
        ClockRealtime *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ClockRealtimePluginSupport_destroy_data(
        ClockRealtime *sample);

    NDDSUSERDllExport extern void 
    ClockRealtimePluginSupport_print_data(
        const ClockRealtime *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ClockRealtimePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ClockRealtime *out,
        const ClockRealtime *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ClockRealtimePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ClockRealtime *sample); 

    NDDSUSERDllExport extern RTIBool
    ClockRealtimePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ClockRealtime *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ClockRealtimePlugin_deserialize_from_cdr_buffer(
        ClockRealtime *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ClockRealtimePlugin_data_to_string(
        const ClockRealtime *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ClockRealtimePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ClockRealtimePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ClockRealtimePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ClockRealtimePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ClockRealtimePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ClockRealtime ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ClockRealtimePlugin_get_programs(void);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ClockSourcePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ClockSourcePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ClockSourcePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    ClockSourcePluginSupport_print_data(
        const ClockSource *sample, const char *desc, int indent_level);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ClockState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ClockState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ClockState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ClockState.
    */
    typedef  class ClockState ClockStateKeyHolder;

    #define ClockStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ClockStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ClockStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ClockStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ClockStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ClockStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ClockStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ClockState*
    ClockStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ClockState*
    ClockStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ClockState*
    ClockStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ClockStatePluginSupport_copy_data(
        ClockState *out,
        const ClockState *in);

    NDDSUSERDllExport extern void 
    ClockStatePluginSupport_destroy_data_w_params(
        ClockState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ClockStatePluginSupport_destroy_data_ex(
        ClockState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ClockStatePluginSupport_destroy_data(
        ClockState *sample);

    NDDSUSERDllExport extern void 
    ClockStatePluginSupport_print_data(
        const ClockState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern ClockState*
    ClockStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ClockState*
    ClockStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ClockStatePluginSupport_destroy_key_ex(
        ClockStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ClockStatePluginSupport_destroy_key(
        ClockStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ClockStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ClockStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ClockStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ClockStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ClockStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ClockState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ClockStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ClockState *out,
        const ClockState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ClockStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ClockState *sample); 

    NDDSUSERDllExport extern RTIBool
    ClockStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ClockState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ClockStatePlugin_deserialize_from_cdr_buffer(
        ClockState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ClockStatePlugin_data_to_string(
        const ClockState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ClockStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ClockStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ClockStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ClockStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ClockStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ClockState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ClockStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ClockStateKeyHolder *key, 
        const ClockState *instance);

    NDDSUSERDllExport extern RTIBool 
    ClockStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        ClockState *instance, 
        const ClockStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ClockStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ClockStatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ClockStatePlugin_new(void);

    NDDSUSERDllExport extern void
    ClockStatePlugin_delete(struct PRESTypePlugin *);

    #define RequestSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RequestSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RequestSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RequestSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RequestSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RequestSequence*
    RequestSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RequestSequence*
    RequestSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RequestSequence*
    RequestSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RequestSequencePluginSupport_copy_data(
        RequestSequence *out,
        const RequestSequence *in);

    NDDSUSERDllExport extern void 
    RequestSequencePluginSupport_destroy_data_w_params(
        RequestSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RequestSequencePluginSupport_destroy_data_ex(
        RequestSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RequestSequencePluginSupport_destroy_data(
        RequestSequence *sample);

    NDDSUSERDllExport extern void 
    RequestSequencePluginSupport_print_data(
        const RequestSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    RequestSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RequestSequence *out,
        const RequestSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    RequestSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RequestSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RequestSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RequestSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define DeviceConfigRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DeviceConfigRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DeviceConfigRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DeviceConfigRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DeviceConfigRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DeviceConfigRequest*
    DeviceConfigRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DeviceConfigRequest*
    DeviceConfigRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DeviceConfigRequest*
    DeviceConfigRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DeviceConfigRequestPluginSupport_copy_data(
        DeviceConfigRequest *out,
        const DeviceConfigRequest *in);

    NDDSUSERDllExport extern void 
    DeviceConfigRequestPluginSupport_destroy_data_w_params(
        DeviceConfigRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DeviceConfigRequestPluginSupport_destroy_data_ex(
        DeviceConfigRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DeviceConfigRequestPluginSupport_destroy_data(
        DeviceConfigRequest *sample);

    NDDSUSERDllExport extern void 
    DeviceConfigRequestPluginSupport_print_data(
        const DeviceConfigRequest *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    DeviceConfigRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceConfigRequest *out,
        const DeviceConfigRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    DeviceConfigRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const DeviceConfigRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    DeviceConfigRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DeviceConfigRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    DeviceConfigRequestPlugin_deserialize_from_cdr_buffer(
        DeviceConfigRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    DeviceConfigRequestPlugin_data_to_string(
        const DeviceConfigRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    DeviceConfigRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DeviceConfigRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DeviceConfigRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DeviceConfigRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    DeviceConfigRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceConfigRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * DeviceConfigRequestPlugin_get_programs(void);

    #define DeviceRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DeviceRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DeviceRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DeviceRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DeviceRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DeviceRequest*
    DeviceRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DeviceRequest*
    DeviceRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DeviceRequest*
    DeviceRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DeviceRequestPluginSupport_copy_data(
        DeviceRequest *out,
        const DeviceRequest *in);

    NDDSUSERDllExport extern void 
    DeviceRequestPluginSupport_destroy_data_w_params(
        DeviceRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DeviceRequestPluginSupport_destroy_data_ex(
        DeviceRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DeviceRequestPluginSupport_destroy_data(
        DeviceRequest *sample);

    NDDSUSERDllExport extern void 
    DeviceRequestPluginSupport_print_data(
        const DeviceRequest *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    DeviceRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceRequest *out,
        const DeviceRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    DeviceRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const DeviceRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    DeviceRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DeviceRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    DeviceRequestPlugin_deserialize_from_cdr_buffer(
        DeviceRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    DeviceRequestPlugin_data_to_string(
        const DeviceRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    DeviceRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DeviceRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DeviceRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DeviceRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    DeviceRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * DeviceRequestPlugin_get_programs(void);

    #define PowerPortIdPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerPortIdPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerPortIdPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerPortIdPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerPortIdPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerPortId*
    PowerPortIdPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerPortId*
    PowerPortIdPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortId*
    PowerPortIdPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerPortIdPluginSupport_copy_data(
        PowerPortId *out,
        const PowerPortId *in);

    NDDSUSERDllExport extern void 
    PowerPortIdPluginSupport_destroy_data_w_params(
        PowerPortId *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerPortIdPluginSupport_destroy_data_ex(
        PowerPortId *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortIdPluginSupport_destroy_data(
        PowerPortId *sample);

    NDDSUSERDllExport extern void 
    PowerPortIdPluginSupport_print_data(
        const PowerPortId *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerPortIdPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortId *out,
        const PowerPortId *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerPortIdPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerPortId *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerPortIdPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerPortId *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerPortIdPlugin_deserialize_from_cdr_buffer(
        PowerPortId *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerPortIdPlugin_data_to_string(
        const PowerPortId *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerPortIdPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerPortIdPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerPortIdPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortIdPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerPortIdPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortId ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerPortIdPlugin_get_programs(void);

    #define PowerConnectorInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerConnectorInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerConnectorInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerConnectorInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerConnectorInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerConnectorInfo*
    PowerConnectorInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerConnectorInfo*
    PowerConnectorInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerConnectorInfo*
    PowerConnectorInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerConnectorInfoPluginSupport_copy_data(
        PowerConnectorInfo *out,
        const PowerConnectorInfo *in);

    NDDSUSERDllExport extern void 
    PowerConnectorInfoPluginSupport_destroy_data_w_params(
        PowerConnectorInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerConnectorInfoPluginSupport_destroy_data_ex(
        PowerConnectorInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerConnectorInfoPluginSupport_destroy_data(
        PowerConnectorInfo *sample);

    NDDSUSERDllExport extern void 
    PowerConnectorInfoPluginSupport_print_data(
        const PowerConnectorInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerConnectorInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerConnectorInfo *out,
        const PowerConnectorInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerConnectorInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerConnectorInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerConnectorInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerConnectorInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerConnectorInfoPlugin_deserialize_from_cdr_buffer(
        PowerConnectorInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerConnectorInfoPlugin_data_to_string(
        const PowerConnectorInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerConnectorInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectorInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerConnectorInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerConnectorInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerConnectorInfoPlugin_get_programs(void);

    #define PowerSwitchInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerSwitchInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerSwitchInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerSwitchInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerSwitchInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerSwitchInfo*
    PowerSwitchInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerSwitchInfo*
    PowerSwitchInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerSwitchInfo*
    PowerSwitchInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchInfoPluginSupport_copy_data(
        PowerSwitchInfo *out,
        const PowerSwitchInfo *in);

    NDDSUSERDllExport extern void 
    PowerSwitchInfoPluginSupport_destroy_data_w_params(
        PowerSwitchInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerSwitchInfoPluginSupport_destroy_data_ex(
        PowerSwitchInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerSwitchInfoPluginSupport_destroy_data(
        PowerSwitchInfo *sample);

    NDDSUSERDllExport extern void 
    PowerSwitchInfoPluginSupport_print_data(
        const PowerSwitchInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerSwitchInfo *out,
        const PowerSwitchInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerSwitchInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerSwitchInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerSwitchInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerSwitchInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerSwitchInfoPlugin_deserialize_from_cdr_buffer(
        PowerSwitchInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerSwitchInfoPlugin_data_to_string(
        const PowerSwitchInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerSwitchInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerSwitchInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerSwitchInfoPlugin_get_programs(void);

    #define PowerPortInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerPortInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerPortInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerPortInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerPortInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerPortInfo*
    PowerPortInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerPortInfo*
    PowerPortInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortInfo*
    PowerPortInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerPortInfoPluginSupport_copy_data(
        PowerPortInfo *out,
        const PowerPortInfo *in);

    NDDSUSERDllExport extern void 
    PowerPortInfoPluginSupport_destroy_data_w_params(
        PowerPortInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerPortInfoPluginSupport_destroy_data_ex(
        PowerPortInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortInfoPluginSupport_destroy_data(
        PowerPortInfo *sample);

    NDDSUSERDllExport extern void 
    PowerPortInfoPluginSupport_print_data(
        const PowerPortInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerPortInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortInfo *out,
        const PowerPortInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerPortInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerPortInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerPortInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerPortInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerPortInfoPlugin_deserialize_from_cdr_buffer(
        PowerPortInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerPortInfoPlugin_data_to_string(
        const PowerPortInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerPortInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerPortInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerPortInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerPortInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerPortInfoPlugin_get_programs(void);

    #define PowerPortInfoSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerPortInfoSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerPortInfoSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerPortInfoSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerPortInfoSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerPortInfoSequence*
    PowerPortInfoSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerPortInfoSequence*
    PowerPortInfoSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortInfoSequence*
    PowerPortInfoSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerPortInfoSequencePluginSupport_copy_data(
        PowerPortInfoSequence *out,
        const PowerPortInfoSequence *in);

    NDDSUSERDllExport extern void 
    PowerPortInfoSequencePluginSupport_destroy_data_w_params(
        PowerPortInfoSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerPortInfoSequencePluginSupport_destroy_data_ex(
        PowerPortInfoSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortInfoSequencePluginSupport_destroy_data(
        PowerPortInfoSequence *sample);

    NDDSUSERDllExport extern void 
    PowerPortInfoSequencePluginSupport_print_data(
        const PowerPortInfoSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerPortInfoSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortInfoSequence *out,
        const PowerPortInfoSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerPortInfoSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerPortInfoSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerPortInfoSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortInfoSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchTransitionCodePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchTransitionCodePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchTransitionCodePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    PowerSwitchTransitionCodePluginSupport_print_data(
        const PowerSwitchTransitionCode *sample, const char *desc, int indent_level);

    #define PowerSwitchStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerSwitchStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerSwitchStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerSwitchStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerSwitchStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerSwitchStatus*
    PowerSwitchStatusPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerSwitchStatus*
    PowerSwitchStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerSwitchStatus*
    PowerSwitchStatusPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchStatusPluginSupport_copy_data(
        PowerSwitchStatus *out,
        const PowerSwitchStatus *in);

    NDDSUSERDllExport extern void 
    PowerSwitchStatusPluginSupport_destroy_data_w_params(
        PowerSwitchStatus *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerSwitchStatusPluginSupport_destroy_data_ex(
        PowerSwitchStatus *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerSwitchStatusPluginSupport_destroy_data(
        PowerSwitchStatus *sample);

    NDDSUSERDllExport extern void 
    PowerSwitchStatusPluginSupport_print_data(
        const PowerSwitchStatus *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchStatusPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerSwitchStatus *out,
        const PowerSwitchStatus *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerSwitchStatusPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerSwitchStatus *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerSwitchStatusPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerSwitchStatus *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerSwitchStatusPlugin_deserialize_from_cdr_buffer(
        PowerSwitchStatus *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerSwitchStatusPlugin_data_to_string(
        const PowerSwitchStatus *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerSwitchStatusPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchStatusPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerSwitchStatus ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerSwitchStatusPlugin_get_programs(void);

    #define GroundingCircuitStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define GroundingCircuitStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GroundingCircuitStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define GroundingCircuitStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GroundingCircuitStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GroundingCircuitStatus*
    GroundingCircuitStatusPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GroundingCircuitStatus*
    GroundingCircuitStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GroundingCircuitStatus*
    GroundingCircuitStatusPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitStatusPluginSupport_copy_data(
        GroundingCircuitStatus *out,
        const GroundingCircuitStatus *in);

    NDDSUSERDllExport extern void 
    GroundingCircuitStatusPluginSupport_destroy_data_w_params(
        GroundingCircuitStatus *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GroundingCircuitStatusPluginSupport_destroy_data_ex(
        GroundingCircuitStatus *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GroundingCircuitStatusPluginSupport_destroy_data(
        GroundingCircuitStatus *sample);

    NDDSUSERDllExport extern void 
    GroundingCircuitStatusPluginSupport_print_data(
        const GroundingCircuitStatus *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitStatusPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitStatus *out,
        const GroundingCircuitStatus *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    GroundingCircuitStatusPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const GroundingCircuitStatus *sample); 

    NDDSUSERDllExport extern RTIBool
    GroundingCircuitStatusPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const GroundingCircuitStatus *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    GroundingCircuitStatusPlugin_deserialize_from_cdr_buffer(
        GroundingCircuitStatus *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    GroundingCircuitStatusPlugin_data_to_string(
        const GroundingCircuitStatus *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GroundingCircuitStatusPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitStatusPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitStatus ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * GroundingCircuitStatusPlugin_get_programs(void);

    #define GroundingCircuitStateSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define GroundingCircuitStateSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GroundingCircuitStateSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define GroundingCircuitStateSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GroundingCircuitStateSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GroundingCircuitStateSequence*
    GroundingCircuitStateSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GroundingCircuitStateSequence*
    GroundingCircuitStateSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GroundingCircuitStateSequence*
    GroundingCircuitStateSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitStateSequencePluginSupport_copy_data(
        GroundingCircuitStateSequence *out,
        const GroundingCircuitStateSequence *in);

    NDDSUSERDllExport extern void 
    GroundingCircuitStateSequencePluginSupport_destroy_data_w_params(
        GroundingCircuitStateSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GroundingCircuitStateSequencePluginSupport_destroy_data_ex(
        GroundingCircuitStateSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GroundingCircuitStateSequencePluginSupport_destroy_data(
        GroundingCircuitStateSequence *sample);

    NDDSUSERDllExport extern void 
    GroundingCircuitStateSequencePluginSupport_print_data(
        const GroundingCircuitStateSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitStateSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitStateSequence *out,
        const GroundingCircuitStateSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitStateSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GroundingCircuitStateSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitStateSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitStateSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct GroundingCircuitState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct GroundingCircuitState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * GroundingCircuitState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct GroundingCircuitState.
    */
    typedef  class GroundingCircuitState GroundingCircuitStateKeyHolder;

    #define GroundingCircuitStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define GroundingCircuitStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GroundingCircuitStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define GroundingCircuitStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define GroundingCircuitStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define GroundingCircuitStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GroundingCircuitStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GroundingCircuitState*
    GroundingCircuitStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GroundingCircuitState*
    GroundingCircuitStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GroundingCircuitState*
    GroundingCircuitStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitStatePluginSupport_copy_data(
        GroundingCircuitState *out,
        const GroundingCircuitState *in);

    NDDSUSERDllExport extern void 
    GroundingCircuitStatePluginSupport_destroy_data_w_params(
        GroundingCircuitState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GroundingCircuitStatePluginSupport_destroy_data_ex(
        GroundingCircuitState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GroundingCircuitStatePluginSupport_destroy_data(
        GroundingCircuitState *sample);

    NDDSUSERDllExport extern void 
    GroundingCircuitStatePluginSupport_print_data(
        const GroundingCircuitState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern GroundingCircuitState*
    GroundingCircuitStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GroundingCircuitState*
    GroundingCircuitStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    GroundingCircuitStatePluginSupport_destroy_key_ex(
        GroundingCircuitStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GroundingCircuitStatePluginSupport_destroy_key(
        GroundingCircuitStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    GroundingCircuitStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    GroundingCircuitStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    GroundingCircuitStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    GroundingCircuitStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    GroundingCircuitStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitState *out,
        const GroundingCircuitState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    GroundingCircuitStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const GroundingCircuitState *sample); 

    NDDSUSERDllExport extern RTIBool
    GroundingCircuitStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const GroundingCircuitState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    GroundingCircuitStatePlugin_deserialize_from_cdr_buffer(
        GroundingCircuitState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    GroundingCircuitStatePlugin_data_to_string(
        const GroundingCircuitState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GroundingCircuitStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitStateKeyHolder *key, 
        const GroundingCircuitState *instance);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitState *instance, 
        const GroundingCircuitStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * GroundingCircuitStatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    GroundingCircuitStatePlugin_new(void);

    NDDSUSERDllExport extern void
    GroundingCircuitStatePlugin_delete(struct PRESTypePlugin *);

    #define GroundingInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define GroundingInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GroundingInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define GroundingInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GroundingInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GroundingInfo*
    GroundingInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GroundingInfo*
    GroundingInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GroundingInfo*
    GroundingInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GroundingInfoPluginSupport_copy_data(
        GroundingInfo *out,
        const GroundingInfo *in);

    NDDSUSERDllExport extern void 
    GroundingInfoPluginSupport_destroy_data_w_params(
        GroundingInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GroundingInfoPluginSupport_destroy_data_ex(
        GroundingInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GroundingInfoPluginSupport_destroy_data(
        GroundingInfo *sample);

    NDDSUSERDllExport extern void 
    GroundingInfoPluginSupport_print_data(
        const GroundingInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    GroundingInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GroundingInfo *out,
        const GroundingInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    GroundingInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const GroundingInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    GroundingInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const GroundingInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    GroundingInfoPlugin_deserialize_from_cdr_buffer(
        GroundingInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    GroundingInfoPlugin_data_to_string(
        const GroundingInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    GroundingInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GroundingInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GroundingInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GroundingInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    GroundingInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        GroundingInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * GroundingInfoPlugin_get_programs(void);

    #define GroundingInfoSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define GroundingInfoSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GroundingInfoSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define GroundingInfoSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GroundingInfoSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GroundingInfoSequence*
    GroundingInfoSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GroundingInfoSequence*
    GroundingInfoSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GroundingInfoSequence*
    GroundingInfoSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GroundingInfoSequencePluginSupport_copy_data(
        GroundingInfoSequence *out,
        const GroundingInfoSequence *in);

    NDDSUSERDllExport extern void 
    GroundingInfoSequencePluginSupport_destroy_data_w_params(
        GroundingInfoSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GroundingInfoSequencePluginSupport_destroy_data_ex(
        GroundingInfoSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GroundingInfoSequencePluginSupport_destroy_data(
        GroundingInfoSequence *sample);

    NDDSUSERDllExport extern void 
    GroundingInfoSequencePluginSupport_print_data(
        const GroundingInfoSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    GroundingInfoSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GroundingInfoSequence *out,
        const GroundingInfoSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    GroundingInfoSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GroundingInfoSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GroundingInfoSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GroundingInfoSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define ParameterMetadataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ParameterMetadataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ParameterMetadataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ParameterMetadataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ParameterMetadataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ParameterMetadata*
    ParameterMetadataPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ParameterMetadata*
    ParameterMetadataPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ParameterMetadata*
    ParameterMetadataPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ParameterMetadataPluginSupport_copy_data(
        ParameterMetadata *out,
        const ParameterMetadata *in);

    NDDSUSERDllExport extern void 
    ParameterMetadataPluginSupport_destroy_data_w_params(
        ParameterMetadata *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ParameterMetadataPluginSupport_destroy_data_ex(
        ParameterMetadata *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ParameterMetadataPluginSupport_destroy_data(
        ParameterMetadata *sample);

    NDDSUSERDllExport extern void 
    ParameterMetadataPluginSupport_print_data(
        const ParameterMetadata *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ParameterMetadataPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ParameterMetadata *out,
        const ParameterMetadata *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ParameterMetadataPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ParameterMetadata *sample); 

    NDDSUSERDllExport extern RTIBool
    ParameterMetadataPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ParameterMetadata *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ParameterMetadataPlugin_deserialize_from_cdr_buffer(
        ParameterMetadata *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ParameterMetadataPlugin_data_to_string(
        const ParameterMetadata *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ParameterMetadataPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ParameterMetadataPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ParameterMetadataPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ParameterMetadataPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ParameterMetadataPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ParameterMetadata ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ParameterMetadataPlugin_get_programs(void);

    #define ParameterValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ParameterValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ParameterValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ParameterValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ParameterValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ParameterValue*
    ParameterValuePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ParameterValue*
    ParameterValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ParameterValue*
    ParameterValuePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ParameterValuePluginSupport_copy_data(
        ParameterValue *out,
        const ParameterValue *in);

    NDDSUSERDllExport extern void 
    ParameterValuePluginSupport_destroy_data_w_params(
        ParameterValue *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ParameterValuePluginSupport_destroy_data_ex(
        ParameterValue *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ParameterValuePluginSupport_destroy_data(
        ParameterValue *sample);

    NDDSUSERDllExport extern void 
    ParameterValuePluginSupport_print_data(
        const ParameterValue *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ParameterValuePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ParameterValue *out,
        const ParameterValue *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ParameterValuePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ParameterValue *sample); 

    NDDSUSERDllExport extern RTIBool
    ParameterValuePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ParameterValue *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ParameterValuePlugin_deserialize_from_cdr_buffer(
        ParameterValue *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ParameterValuePlugin_data_to_string(
        const ParameterValue *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ParameterValuePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ParameterValuePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ParameterValuePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ParameterValuePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ParameterValuePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ParameterValue ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ParameterValuePlugin_get_programs(void);

    #define ParameterValueSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ParameterValueSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ParameterValueSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ParameterValueSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ParameterValueSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ParameterValueSequence*
    ParameterValueSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ParameterValueSequence*
    ParameterValueSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ParameterValueSequence*
    ParameterValueSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ParameterValueSequencePluginSupport_copy_data(
        ParameterValueSequence *out,
        const ParameterValueSequence *in);

    NDDSUSERDllExport extern void 
    ParameterValueSequencePluginSupport_destroy_data_w_params(
        ParameterValueSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ParameterValueSequencePluginSupport_destroy_data_ex(
        ParameterValueSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ParameterValueSequencePluginSupport_destroy_data(
        ParameterValueSequence *sample);

    NDDSUSERDllExport extern void 
    ParameterValueSequencePluginSupport_print_data(
        const ParameterValueSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ParameterValueSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ParameterValueSequence *out,
        const ParameterValueSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ParameterValueSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ParameterValueSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ParameterValueSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ParameterValueSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define ParameterMetadataSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ParameterMetadataSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ParameterMetadataSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ParameterMetadataSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ParameterMetadataSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ParameterMetadataSequence*
    ParameterMetadataSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ParameterMetadataSequence*
    ParameterMetadataSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ParameterMetadataSequence*
    ParameterMetadataSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ParameterMetadataSequencePluginSupport_copy_data(
        ParameterMetadataSequence *out,
        const ParameterMetadataSequence *in);

    NDDSUSERDllExport extern void 
    ParameterMetadataSequencePluginSupport_destroy_data_w_params(
        ParameterMetadataSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ParameterMetadataSequencePluginSupport_destroy_data_ex(
        ParameterMetadataSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ParameterMetadataSequencePluginSupport_destroy_data(
        ParameterMetadataSequence *sample);

    NDDSUSERDllExport extern void 
    ParameterMetadataSequencePluginSupport_print_data(
        const ParameterMetadataSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ParameterMetadataSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ParameterMetadataSequence *out,
        const ParameterMetadataSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ParameterMetadataSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ParameterMetadataSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ParameterMetadataSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ParameterMetadataSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define PowerPortStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerPortStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerPortStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerPortStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerPortStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerPortStatus*
    PowerPortStatusPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerPortStatus*
    PowerPortStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortStatus*
    PowerPortStatusPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerPortStatusPluginSupport_copy_data(
        PowerPortStatus *out,
        const PowerPortStatus *in);

    NDDSUSERDllExport extern void 
    PowerPortStatusPluginSupport_destroy_data_w_params(
        PowerPortStatus *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerPortStatusPluginSupport_destroy_data_ex(
        PowerPortStatus *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortStatusPluginSupport_destroy_data(
        PowerPortStatus *sample);

    NDDSUSERDllExport extern void 
    PowerPortStatusPluginSupport_print_data(
        const PowerPortStatus *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerPortStatusPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortStatus *out,
        const PowerPortStatus *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerPortStatusPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerPortStatus *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerPortStatusPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerPortStatus *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerPortStatusPlugin_deserialize_from_cdr_buffer(
        PowerPortStatus *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerPortStatusPlugin_data_to_string(
        const PowerPortStatus *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerPortStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerPortStatusPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerPortStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerPortStatusPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortStatus ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerPortStatusPlugin_get_programs(void);

    #define PowerPortStatusSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerPortStatusSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerPortStatusSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerPortStatusSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerPortStatusSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerPortStatusSequence*
    PowerPortStatusSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerPortStatusSequence*
    PowerPortStatusSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortStatusSequence*
    PowerPortStatusSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerPortStatusSequencePluginSupport_copy_data(
        PowerPortStatusSequence *out,
        const PowerPortStatusSequence *in);

    NDDSUSERDllExport extern void 
    PowerPortStatusSequencePluginSupport_destroy_data_w_params(
        PowerPortStatusSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerPortStatusSequencePluginSupport_destroy_data_ex(
        PowerPortStatusSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortStatusSequencePluginSupport_destroy_data(
        PowerPortStatusSequence *sample);

    NDDSUSERDllExport extern void 
    PowerPortStatusSequencePluginSupport_print_data(
        const PowerPortStatusSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerPortStatusSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortStatusSequence *out,
        const PowerPortStatusSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerPortStatusSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerPortStatusSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerPortStatusSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortStatusSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define OperatorPriorityPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define OperatorPriorityPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define OperatorPriorityPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define OperatorPriorityPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define OperatorPriorityPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern OperatorPriority*
    OperatorPriorityPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern OperatorPriority*
    OperatorPriorityPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern OperatorPriority*
    OperatorPriorityPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    OperatorPriorityPluginSupport_copy_data(
        OperatorPriority *out,
        const OperatorPriority *in);

    NDDSUSERDllExport extern void 
    OperatorPriorityPluginSupport_destroy_data_w_params(
        OperatorPriority *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    OperatorPriorityPluginSupport_destroy_data_ex(
        OperatorPriority *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    OperatorPriorityPluginSupport_destroy_data(
        OperatorPriority *sample);

    NDDSUSERDllExport extern void 
    OperatorPriorityPluginSupport_print_data(
        const OperatorPriority *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    OperatorPriorityPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        OperatorPriority *out,
        const OperatorPriority *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    OperatorPriorityPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const OperatorPriority *sample); 

    NDDSUSERDllExport extern RTIBool
    OperatorPriorityPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const OperatorPriority *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    OperatorPriorityPlugin_deserialize_from_cdr_buffer(
        OperatorPriority *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    OperatorPriorityPlugin_data_to_string(
        const OperatorPriority *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    OperatorPriorityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    OperatorPriorityPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    OperatorPriorityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    OperatorPriorityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    OperatorPriorityPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        OperatorPriority ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * OperatorPriorityPlugin_get_programs(void);

    #define PowerPortIntentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerPortIntentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerPortIntentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerPortIntentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerPortIntentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerPortIntent*
    PowerPortIntentPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerPortIntent*
    PowerPortIntentPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortIntent*
    PowerPortIntentPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerPortIntentPluginSupport_copy_data(
        PowerPortIntent *out,
        const PowerPortIntent *in);

    NDDSUSERDllExport extern void 
    PowerPortIntentPluginSupport_destroy_data_w_params(
        PowerPortIntent *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerPortIntentPluginSupport_destroy_data_ex(
        PowerPortIntent *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortIntentPluginSupport_destroy_data(
        PowerPortIntent *sample);

    NDDSUSERDllExport extern void 
    PowerPortIntentPluginSupport_print_data(
        const PowerPortIntent *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerPortIntentPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortIntent *out,
        const PowerPortIntent *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerPortIntentPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerPortIntent *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerPortIntentPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerPortIntent *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerPortIntentPlugin_deserialize_from_cdr_buffer(
        PowerPortIntent *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerPortIntentPlugin_data_to_string(
        const PowerPortIntent *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerPortIntentPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerPortIntentPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerPortIntentPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortIntentPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerPortIntentPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortIntent ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerPortIntentPlugin_get_programs(void);

    #define PowerConnectionIdPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerConnectionIdPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerConnectionIdPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerConnectionIdPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerConnectionIdPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerConnectionId*
    PowerConnectionIdPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerConnectionId*
    PowerConnectionIdPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerConnectionId*
    PowerConnectionIdPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionIdPluginSupport_copy_data(
        PowerConnectionId *out,
        const PowerConnectionId *in);

    NDDSUSERDllExport extern void 
    PowerConnectionIdPluginSupport_destroy_data_w_params(
        PowerConnectionId *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerConnectionIdPluginSupport_destroy_data_ex(
        PowerConnectionId *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerConnectionIdPluginSupport_destroy_data(
        PowerConnectionId *sample);

    NDDSUSERDllExport extern void 
    PowerConnectionIdPluginSupport_print_data(
        const PowerConnectionId *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionIdPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerConnectionId *out,
        const PowerConnectionId *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerConnectionIdPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerConnectionId *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerConnectionIdPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerConnectionId *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerConnectionIdPlugin_deserialize_from_cdr_buffer(
        PowerConnectionId *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerConnectionIdPlugin_data_to_string(
        const PowerConnectionId *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionIdPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerConnectionIdPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionIdPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionIdPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionIdPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerConnectionId ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerConnectionIdPlugin_get_programs(void);

    #define SourceInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define SourceInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define SourceInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define SourceInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define SourceInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern SourceInfo*
    SourceInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern SourceInfo*
    SourceInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern SourceInfo*
    SourceInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    SourceInfoPluginSupport_copy_data(
        SourceInfo *out,
        const SourceInfo *in);

    NDDSUSERDllExport extern void 
    SourceInfoPluginSupport_destroy_data_w_params(
        SourceInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    SourceInfoPluginSupport_destroy_data_ex(
        SourceInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    SourceInfoPluginSupport_destroy_data(
        SourceInfo *sample);

    NDDSUSERDllExport extern void 
    SourceInfoPluginSupport_print_data(
        const SourceInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    SourceInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        SourceInfo *out,
        const SourceInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    SourceInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const SourceInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    SourceInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const SourceInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    SourceInfoPlugin_deserialize_from_cdr_buffer(
        SourceInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    SourceInfoPlugin_data_to_string(
        const SourceInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    SourceInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    SourceInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    SourceInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    SourceInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    SourceInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        SourceInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * SourceInfoPlugin_get_programs(void);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ActiveDiagnosticState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ActiveDiagnosticState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ActiveDiagnosticState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ActiveDiagnosticState.
    */
    typedef  class ActiveDiagnosticState ActiveDiagnosticStateKeyHolder;

    #define ActiveDiagnosticStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ActiveDiagnosticStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ActiveDiagnosticStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ActiveDiagnosticStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ActiveDiagnosticStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ActiveDiagnosticStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ActiveDiagnosticStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ActiveDiagnosticState*
    ActiveDiagnosticStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ActiveDiagnosticState*
    ActiveDiagnosticStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ActiveDiagnosticState*
    ActiveDiagnosticStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ActiveDiagnosticStatePluginSupport_copy_data(
        ActiveDiagnosticState *out,
        const ActiveDiagnosticState *in);

    NDDSUSERDllExport extern void 
    ActiveDiagnosticStatePluginSupport_destroy_data_w_params(
        ActiveDiagnosticState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ActiveDiagnosticStatePluginSupport_destroy_data_ex(
        ActiveDiagnosticState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ActiveDiagnosticStatePluginSupport_destroy_data(
        ActiveDiagnosticState *sample);

    NDDSUSERDllExport extern void 
    ActiveDiagnosticStatePluginSupport_print_data(
        const ActiveDiagnosticState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern ActiveDiagnosticState*
    ActiveDiagnosticStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ActiveDiagnosticState*
    ActiveDiagnosticStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ActiveDiagnosticStatePluginSupport_destroy_key_ex(
        ActiveDiagnosticStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ActiveDiagnosticStatePluginSupport_destroy_key(
        ActiveDiagnosticStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ActiveDiagnosticStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ActiveDiagnosticStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ActiveDiagnosticStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ActiveDiagnosticStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ActiveDiagnosticStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ActiveDiagnosticState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ActiveDiagnosticStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ActiveDiagnosticState *out,
        const ActiveDiagnosticState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ActiveDiagnosticStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ActiveDiagnosticState *sample); 

    NDDSUSERDllExport extern RTIBool
    ActiveDiagnosticStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ActiveDiagnosticState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ActiveDiagnosticStatePlugin_deserialize_from_cdr_buffer(
        ActiveDiagnosticState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ActiveDiagnosticStatePlugin_data_to_string(
        const ActiveDiagnosticState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ActiveDiagnosticStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ActiveDiagnosticStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ActiveDiagnosticStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ActiveDiagnosticStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ActiveDiagnosticStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ActiveDiagnosticState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ActiveDiagnosticStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ActiveDiagnosticStateKeyHolder *key, 
        const ActiveDiagnosticState *instance);

    NDDSUSERDllExport extern RTIBool 
    ActiveDiagnosticStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        ActiveDiagnosticState *instance, 
        const ActiveDiagnosticStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ActiveDiagnosticStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ActiveDiagnosticStatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ActiveDiagnosticStatePlugin_new(void);

    NDDSUSERDllExport extern void
    ActiveDiagnosticStatePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct AuthorizationToEnergizeResult
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct AuthorizationToEnergizeResult)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * AuthorizationToEnergizeResult must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct AuthorizationToEnergizeResult.
    */
    typedef  class AuthorizationToEnergizeResult AuthorizationToEnergizeResultKeyHolder;

    #define AuthorizationToEnergizeResultPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define AuthorizationToEnergizeResultPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define AuthorizationToEnergizeResultPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define AuthorizationToEnergizeResultPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define AuthorizationToEnergizeResultPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define AuthorizationToEnergizeResultPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define AuthorizationToEnergizeResultPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern AuthorizationToEnergizeResult*
    AuthorizationToEnergizeResultPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern AuthorizationToEnergizeResult*
    AuthorizationToEnergizeResultPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern AuthorizationToEnergizeResult*
    AuthorizationToEnergizeResultPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeResultPluginSupport_copy_data(
        AuthorizationToEnergizeResult *out,
        const AuthorizationToEnergizeResult *in);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeResultPluginSupport_destroy_data_w_params(
        AuthorizationToEnergizeResult *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeResultPluginSupport_destroy_data_ex(
        AuthorizationToEnergizeResult *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeResultPluginSupport_destroy_data(
        AuthorizationToEnergizeResult *sample);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeResultPluginSupport_print_data(
        const AuthorizationToEnergizeResult *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern AuthorizationToEnergizeResult*
    AuthorizationToEnergizeResultPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern AuthorizationToEnergizeResult*
    AuthorizationToEnergizeResultPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeResultPluginSupport_destroy_key_ex(
        AuthorizationToEnergizeResultKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeResultPluginSupport_destroy_key(
        AuthorizationToEnergizeResultKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    AuthorizationToEnergizeResultPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeResultPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    AuthorizationToEnergizeResultPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeResultPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    AuthorizationToEnergizeResultPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeResult *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeResultPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeResult *out,
        const AuthorizationToEnergizeResult *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    AuthorizationToEnergizeResultPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const AuthorizationToEnergizeResult *sample); 

    NDDSUSERDllExport extern RTIBool
    AuthorizationToEnergizeResultPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const AuthorizationToEnergizeResult *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    AuthorizationToEnergizeResultPlugin_deserialize_from_cdr_buffer(
        AuthorizationToEnergizeResult *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    AuthorizationToEnergizeResultPlugin_data_to_string(
        const AuthorizationToEnergizeResult *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    AuthorizationToEnergizeResultPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    AuthorizationToEnergizeResultPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    AuthorizationToEnergizeResultPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    AuthorizationToEnergizeResultPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeResultPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeResult ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeResultPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeResultKeyHolder *key, 
        const AuthorizationToEnergizeResult *instance);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeResultPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeResult *instance, 
        const AuthorizationToEnergizeResultKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeResultPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * AuthorizationToEnergizeResultPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    AuthorizationToEnergizeResultPlugin_new(void);

    NDDSUSERDllExport extern void
    AuthorizationToEnergizeResultPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct AuthorizationToEnergizeRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct AuthorizationToEnergizeRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * AuthorizationToEnergizeRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct AuthorizationToEnergizeRequest.
    */
    typedef  class AuthorizationToEnergizeRequest AuthorizationToEnergizeRequestKeyHolder;

    #define AuthorizationToEnergizeRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define AuthorizationToEnergizeRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define AuthorizationToEnergizeRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define AuthorizationToEnergizeRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define AuthorizationToEnergizeRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define AuthorizationToEnergizeRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define AuthorizationToEnergizeRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern AuthorizationToEnergizeRequest*
    AuthorizationToEnergizeRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern AuthorizationToEnergizeRequest*
    AuthorizationToEnergizeRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern AuthorizationToEnergizeRequest*
    AuthorizationToEnergizeRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeRequestPluginSupport_copy_data(
        AuthorizationToEnergizeRequest *out,
        const AuthorizationToEnergizeRequest *in);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeRequestPluginSupport_destroy_data_w_params(
        AuthorizationToEnergizeRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeRequestPluginSupport_destroy_data_ex(
        AuthorizationToEnergizeRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeRequestPluginSupport_destroy_data(
        AuthorizationToEnergizeRequest *sample);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeRequestPluginSupport_print_data(
        const AuthorizationToEnergizeRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern AuthorizationToEnergizeRequest*
    AuthorizationToEnergizeRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern AuthorizationToEnergizeRequest*
    AuthorizationToEnergizeRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeRequestPluginSupport_destroy_key_ex(
        AuthorizationToEnergizeRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeRequestPluginSupport_destroy_key(
        AuthorizationToEnergizeRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    AuthorizationToEnergizeRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    AuthorizationToEnergizeRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    AuthorizationToEnergizeRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeRequest *out,
        const AuthorizationToEnergizeRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    AuthorizationToEnergizeRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const AuthorizationToEnergizeRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    AuthorizationToEnergizeRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const AuthorizationToEnergizeRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    AuthorizationToEnergizeRequestPlugin_deserialize_from_cdr_buffer(
        AuthorizationToEnergizeRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    AuthorizationToEnergizeRequestPlugin_data_to_string(
        const AuthorizationToEnergizeRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    AuthorizationToEnergizeRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    AuthorizationToEnergizeRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    AuthorizationToEnergizeRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    AuthorizationToEnergizeRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeRequestKeyHolder *key, 
        const AuthorizationToEnergizeRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeRequest *instance, 
        const AuthorizationToEnergizeRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * AuthorizationToEnergizeRequestPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    AuthorizationToEnergizeRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    AuthorizationToEnergizeRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct AuthorizationToEnergizeReply
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct AuthorizationToEnergizeReply)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * AuthorizationToEnergizeReply must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct AuthorizationToEnergizeReply.
    */
    typedef  class AuthorizationToEnergizeReply AuthorizationToEnergizeReplyKeyHolder;

    #define AuthorizationToEnergizeReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define AuthorizationToEnergizeReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define AuthorizationToEnergizeReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define AuthorizationToEnergizeReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define AuthorizationToEnergizeReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define AuthorizationToEnergizeReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define AuthorizationToEnergizeReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern AuthorizationToEnergizeReply*
    AuthorizationToEnergizeReplyPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern AuthorizationToEnergizeReply*
    AuthorizationToEnergizeReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern AuthorizationToEnergizeReply*
    AuthorizationToEnergizeReplyPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeReplyPluginSupport_copy_data(
        AuthorizationToEnergizeReply *out,
        const AuthorizationToEnergizeReply *in);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeReplyPluginSupport_destroy_data_w_params(
        AuthorizationToEnergizeReply *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeReplyPluginSupport_destroy_data_ex(
        AuthorizationToEnergizeReply *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeReplyPluginSupport_destroy_data(
        AuthorizationToEnergizeReply *sample);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeReplyPluginSupport_print_data(
        const AuthorizationToEnergizeReply *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern AuthorizationToEnergizeReply*
    AuthorizationToEnergizeReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern AuthorizationToEnergizeReply*
    AuthorizationToEnergizeReplyPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeReplyPluginSupport_destroy_key_ex(
        AuthorizationToEnergizeReplyKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeReplyPluginSupport_destroy_key(
        AuthorizationToEnergizeReplyKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    AuthorizationToEnergizeReplyPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeReplyPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    AuthorizationToEnergizeReplyPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    AuthorizationToEnergizeReplyPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    AuthorizationToEnergizeReplyPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeReply *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeReplyPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeReply *out,
        const AuthorizationToEnergizeReply *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    AuthorizationToEnergizeReplyPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const AuthorizationToEnergizeReply *sample); 

    NDDSUSERDllExport extern RTIBool
    AuthorizationToEnergizeReplyPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const AuthorizationToEnergizeReply *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    AuthorizationToEnergizeReplyPlugin_deserialize_from_cdr_buffer(
        AuthorizationToEnergizeReply *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    AuthorizationToEnergizeReplyPlugin_data_to_string(
        const AuthorizationToEnergizeReply *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    AuthorizationToEnergizeReplyPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    AuthorizationToEnergizeReplyPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    AuthorizationToEnergizeReplyPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    AuthorizationToEnergizeReplyPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeReplyPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeReply ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeReplyPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeReplyKeyHolder *key, 
        const AuthorizationToEnergizeReply *instance);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeReplyPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        AuthorizationToEnergizeReply *instance, 
        const AuthorizationToEnergizeReplyKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    AuthorizationToEnergizeReplyPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * AuthorizationToEnergizeReplyPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    AuthorizationToEnergizeReplyPlugin_new(void);

    NDDSUSERDllExport extern void
    AuthorizationToEnergizeReplyPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct IdentityNicknameRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct IdentityNicknameRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * IdentityNicknameRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct IdentityNicknameRequest.
    */
    typedef  class IdentityNicknameRequest IdentityNicknameRequestKeyHolder;

    #define IdentityNicknameRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define IdentityNicknameRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define IdentityNicknameRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define IdentityNicknameRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define IdentityNicknameRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define IdentityNicknameRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define IdentityNicknameRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern IdentityNicknameRequest*
    IdentityNicknameRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern IdentityNicknameRequest*
    IdentityNicknameRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern IdentityNicknameRequest*
    IdentityNicknameRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    IdentityNicknameRequestPluginSupport_copy_data(
        IdentityNicknameRequest *out,
        const IdentityNicknameRequest *in);

    NDDSUSERDllExport extern void 
    IdentityNicknameRequestPluginSupport_destroy_data_w_params(
        IdentityNicknameRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    IdentityNicknameRequestPluginSupport_destroy_data_ex(
        IdentityNicknameRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    IdentityNicknameRequestPluginSupport_destroy_data(
        IdentityNicknameRequest *sample);

    NDDSUSERDllExport extern void 
    IdentityNicknameRequestPluginSupport_print_data(
        const IdentityNicknameRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern IdentityNicknameRequest*
    IdentityNicknameRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern IdentityNicknameRequest*
    IdentityNicknameRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    IdentityNicknameRequestPluginSupport_destroy_key_ex(
        IdentityNicknameRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    IdentityNicknameRequestPluginSupport_destroy_key(
        IdentityNicknameRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    IdentityNicknameRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    IdentityNicknameRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    IdentityNicknameRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    IdentityNicknameRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    IdentityNicknameRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        IdentityNicknameRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    IdentityNicknameRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        IdentityNicknameRequest *out,
        const IdentityNicknameRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    IdentityNicknameRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const IdentityNicknameRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    IdentityNicknameRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const IdentityNicknameRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    IdentityNicknameRequestPlugin_deserialize_from_cdr_buffer(
        IdentityNicknameRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    IdentityNicknameRequestPlugin_data_to_string(
        const IdentityNicknameRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    IdentityNicknameRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    IdentityNicknameRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    IdentityNicknameRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    IdentityNicknameRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    IdentityNicknameRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        IdentityNicknameRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    IdentityNicknameRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        IdentityNicknameRequestKeyHolder *key, 
        const IdentityNicknameRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    IdentityNicknameRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        IdentityNicknameRequest *instance, 
        const IdentityNicknameRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    IdentityNicknameRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * IdentityNicknameRequestPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    IdentityNicknameRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    IdentityNicknameRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct DeviceIcon
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct DeviceIcon)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * DeviceIcon must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct DeviceIcon.
    */
    typedef  class DeviceIcon DeviceIconKeyHolder;

    #define DeviceIconPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DeviceIconPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DeviceIconPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DeviceIconPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define DeviceIconPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define DeviceIconPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DeviceIconPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DeviceIcon*
    DeviceIconPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DeviceIcon*
    DeviceIconPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DeviceIcon*
    DeviceIconPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DeviceIconPluginSupport_copy_data(
        DeviceIcon *out,
        const DeviceIcon *in);

    NDDSUSERDllExport extern void 
    DeviceIconPluginSupport_destroy_data_w_params(
        DeviceIcon *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DeviceIconPluginSupport_destroy_data_ex(
        DeviceIcon *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DeviceIconPluginSupport_destroy_data(
        DeviceIcon *sample);

    NDDSUSERDllExport extern void 
    DeviceIconPluginSupport_print_data(
        const DeviceIcon *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern DeviceIcon*
    DeviceIconPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DeviceIcon*
    DeviceIconPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    DeviceIconPluginSupport_destroy_key_ex(
        DeviceIconKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DeviceIconPluginSupport_destroy_key(
        DeviceIconKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    DeviceIconPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    DeviceIconPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    DeviceIconPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    DeviceIconPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    DeviceIconPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceIcon *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    DeviceIconPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceIcon *out,
        const DeviceIcon *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    DeviceIconPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const DeviceIcon *sample); 

    NDDSUSERDllExport extern RTIBool
    DeviceIconPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DeviceIcon *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    DeviceIconPlugin_deserialize_from_cdr_buffer(
        DeviceIcon *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    DeviceIconPlugin_data_to_string(
        const DeviceIcon *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    DeviceIconPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DeviceIconPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DeviceIconPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DeviceIconPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    DeviceIconPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceIcon ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    DeviceIconPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceIconKeyHolder *key, 
        const DeviceIcon *instance);

    NDDSUSERDllExport extern RTIBool 
    DeviceIconPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        DeviceIcon *instance, 
        const DeviceIconKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    DeviceIconPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * DeviceIconPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    DeviceIconPlugin_new(void);

    NDDSUSERDllExport extern void
    DeviceIconPlugin_delete(struct PRESTypePlugin *);

    #define DeviceIntentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DeviceIntentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DeviceIntentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DeviceIntentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DeviceIntentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DeviceIntent*
    DeviceIntentPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DeviceIntent*
    DeviceIntentPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DeviceIntent*
    DeviceIntentPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DeviceIntentPluginSupport_copy_data(
        DeviceIntent *out,
        const DeviceIntent *in);

    NDDSUSERDllExport extern void 
    DeviceIntentPluginSupport_destroy_data_w_params(
        DeviceIntent *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DeviceIntentPluginSupport_destroy_data_ex(
        DeviceIntent *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DeviceIntentPluginSupport_destroy_data(
        DeviceIntent *sample);

    NDDSUSERDllExport extern void 
    DeviceIntentPluginSupport_print_data(
        const DeviceIntent *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    DeviceIntentPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceIntent *out,
        const DeviceIntent *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    DeviceIntentPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const DeviceIntent *sample); 

    NDDSUSERDllExport extern RTIBool
    DeviceIntentPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DeviceIntent *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    DeviceIntentPlugin_deserialize_from_cdr_buffer(
        DeviceIntent *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    DeviceIntentPlugin_data_to_string(
        const DeviceIntent *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    DeviceIntentPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DeviceIntentPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DeviceIntentPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DeviceIntentPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    DeviceIntentPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceIntent ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * DeviceIntentPlugin_get_programs(void);

    #define DeviceIntentSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DeviceIntentSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DeviceIntentSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DeviceIntentSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DeviceIntentSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DeviceIntentSequence*
    DeviceIntentSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DeviceIntentSequence*
    DeviceIntentSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DeviceIntentSequence*
    DeviceIntentSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DeviceIntentSequencePluginSupport_copy_data(
        DeviceIntentSequence *out,
        const DeviceIntentSequence *in);

    NDDSUSERDllExport extern void 
    DeviceIntentSequencePluginSupport_destroy_data_w_params(
        DeviceIntentSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DeviceIntentSequencePluginSupport_destroy_data_ex(
        DeviceIntentSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DeviceIntentSequencePluginSupport_destroy_data(
        DeviceIntentSequence *sample);

    NDDSUSERDllExport extern void 
    DeviceIntentSequencePluginSupport_print_data(
        const DeviceIntentSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    DeviceIntentSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceIntentSequence *out,
        const DeviceIntentSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    DeviceIntentSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DeviceIntentSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DeviceIntentSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DeviceIntentSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ControlParameterRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ControlParameterRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ControlParameterRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ControlParameterRequest.
    */
    typedef  class ControlParameterRequest ControlParameterRequestKeyHolder;

    #define ControlParameterRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ControlParameterRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ControlParameterRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ControlParameterRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ControlParameterRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ControlParameterRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ControlParameterRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ControlParameterRequest*
    ControlParameterRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ControlParameterRequest*
    ControlParameterRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ControlParameterRequest*
    ControlParameterRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ControlParameterRequestPluginSupport_copy_data(
        ControlParameterRequest *out,
        const ControlParameterRequest *in);

    NDDSUSERDllExport extern void 
    ControlParameterRequestPluginSupport_destroy_data_w_params(
        ControlParameterRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ControlParameterRequestPluginSupport_destroy_data_ex(
        ControlParameterRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ControlParameterRequestPluginSupport_destroy_data(
        ControlParameterRequest *sample);

    NDDSUSERDllExport extern void 
    ControlParameterRequestPluginSupport_print_data(
        const ControlParameterRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern ControlParameterRequest*
    ControlParameterRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ControlParameterRequest*
    ControlParameterRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ControlParameterRequestPluginSupport_destroy_key_ex(
        ControlParameterRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ControlParameterRequestPluginSupport_destroy_key(
        ControlParameterRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ControlParameterRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ControlParameterRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ControlParameterRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ControlParameterRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ControlParameterRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ControlParameterRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ControlParameterRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ControlParameterRequest *out,
        const ControlParameterRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ControlParameterRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ControlParameterRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    ControlParameterRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ControlParameterRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ControlParameterRequestPlugin_deserialize_from_cdr_buffer(
        ControlParameterRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ControlParameterRequestPlugin_data_to_string(
        const ControlParameterRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ControlParameterRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ControlParameterRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ControlParameterRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ControlParameterRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ControlParameterRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ControlParameterRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ControlParameterRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ControlParameterRequestKeyHolder *key, 
        const ControlParameterRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    ControlParameterRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        ControlParameterRequest *instance, 
        const ControlParameterRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ControlParameterRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ControlParameterRequestPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ControlParameterRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    ControlParameterRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ControlParameterState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ControlParameterState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ControlParameterState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ControlParameterState.
    */
    typedef  class ControlParameterState ControlParameterStateKeyHolder;

    #define ControlParameterStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ControlParameterStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ControlParameterStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ControlParameterStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ControlParameterStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ControlParameterStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ControlParameterStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ControlParameterState*
    ControlParameterStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ControlParameterState*
    ControlParameterStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ControlParameterState*
    ControlParameterStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ControlParameterStatePluginSupport_copy_data(
        ControlParameterState *out,
        const ControlParameterState *in);

    NDDSUSERDllExport extern void 
    ControlParameterStatePluginSupport_destroy_data_w_params(
        ControlParameterState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ControlParameterStatePluginSupport_destroy_data_ex(
        ControlParameterState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ControlParameterStatePluginSupport_destroy_data(
        ControlParameterState *sample);

    NDDSUSERDllExport extern void 
    ControlParameterStatePluginSupport_print_data(
        const ControlParameterState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern ControlParameterState*
    ControlParameterStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ControlParameterState*
    ControlParameterStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ControlParameterStatePluginSupport_destroy_key_ex(
        ControlParameterStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ControlParameterStatePluginSupport_destroy_key(
        ControlParameterStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ControlParameterStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ControlParameterStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ControlParameterStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ControlParameterStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ControlParameterStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ControlParameterState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ControlParameterStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ControlParameterState *out,
        const ControlParameterState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ControlParameterStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ControlParameterState *sample); 

    NDDSUSERDllExport extern RTIBool
    ControlParameterStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ControlParameterState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ControlParameterStatePlugin_deserialize_from_cdr_buffer(
        ControlParameterState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ControlParameterStatePlugin_data_to_string(
        const ControlParameterState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ControlParameterStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ControlParameterStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ControlParameterStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ControlParameterStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ControlParameterStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ControlParameterState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ControlParameterStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ControlParameterStateKeyHolder *key, 
        const ControlParameterState *instance);

    NDDSUSERDllExport extern RTIBool 
    ControlParameterStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        ControlParameterState *instance, 
        const ControlParameterStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ControlParameterStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ControlParameterStatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ControlParameterStatePlugin_new(void);

    NDDSUSERDllExport extern void
    ControlParameterStatePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct PowerPortState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct PowerPortState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * PowerPortState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct PowerPortState.
    */
    typedef  class PowerPortState PowerPortStateKeyHolder;

    #define PowerPortStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerPortStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerPortStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerPortStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define PowerPortStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define PowerPortStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerPortStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerPortState*
    PowerPortStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerPortState*
    PowerPortStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortState*
    PowerPortStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerPortStatePluginSupport_copy_data(
        PowerPortState *out,
        const PowerPortState *in);

    NDDSUSERDllExport extern void 
    PowerPortStatePluginSupport_destroy_data_w_params(
        PowerPortState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerPortStatePluginSupport_destroy_data_ex(
        PowerPortState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortStatePluginSupport_destroy_data(
        PowerPortState *sample);

    NDDSUSERDllExport extern void 
    PowerPortStatePluginSupport_print_data(
        const PowerPortState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern PowerPortState*
    PowerPortStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortState*
    PowerPortStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    PowerPortStatePluginSupport_destroy_key_ex(
        PowerPortStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortStatePluginSupport_destroy_key(
        PowerPortStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    PowerPortStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    PowerPortStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    PowerPortStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    PowerPortStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    PowerPortStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    PowerPortStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortState *out,
        const PowerPortState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerPortStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerPortState *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerPortStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerPortState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerPortStatePlugin_deserialize_from_cdr_buffer(
        PowerPortState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerPortStatePlugin_data_to_string(
        const PowerPortState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerPortStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerPortStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerPortStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerPortStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    PowerPortStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortStateKeyHolder *key, 
        const PowerPortState *instance);

    NDDSUSERDllExport extern RTIBool 
    PowerPortStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortState *instance, 
        const PowerPortStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    PowerPortStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerPortStatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    PowerPortStatePlugin_new(void);

    NDDSUSERDllExport extern void
    PowerPortStatePlugin_delete(struct PRESTypePlugin *);

    #define DistributionInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DistributionInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DistributionInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DistributionInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DistributionInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DistributionInfo*
    DistributionInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DistributionInfo*
    DistributionInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DistributionInfo*
    DistributionInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DistributionInfoPluginSupport_copy_data(
        DistributionInfo *out,
        const DistributionInfo *in);

    NDDSUSERDllExport extern void 
    DistributionInfoPluginSupport_destroy_data_w_params(
        DistributionInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DistributionInfoPluginSupport_destroy_data_ex(
        DistributionInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DistributionInfoPluginSupport_destroy_data(
        DistributionInfo *sample);

    NDDSUSERDllExport extern void 
    DistributionInfoPluginSupport_print_data(
        const DistributionInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    DistributionInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DistributionInfo *out,
        const DistributionInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    DistributionInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const DistributionInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    DistributionInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DistributionInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    DistributionInfoPlugin_deserialize_from_cdr_buffer(
        DistributionInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    DistributionInfoPlugin_data_to_string(
        const DistributionInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    DistributionInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DistributionInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DistributionInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DistributionInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    DistributionInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DistributionInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * DistributionInfoPlugin_get_programs(void);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct IdentityNicknameState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct IdentityNicknameState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * IdentityNicknameState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct IdentityNicknameState.
    */
    typedef  class IdentityNicknameState IdentityNicknameStateKeyHolder;

    #define IdentityNicknameStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define IdentityNicknameStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define IdentityNicknameStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define IdentityNicknameStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define IdentityNicknameStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define IdentityNicknameStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define IdentityNicknameStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern IdentityNicknameState*
    IdentityNicknameStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern IdentityNicknameState*
    IdentityNicknameStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern IdentityNicknameState*
    IdentityNicknameStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    IdentityNicknameStatePluginSupport_copy_data(
        IdentityNicknameState *out,
        const IdentityNicknameState *in);

    NDDSUSERDllExport extern void 
    IdentityNicknameStatePluginSupport_destroy_data_w_params(
        IdentityNicknameState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    IdentityNicknameStatePluginSupport_destroy_data_ex(
        IdentityNicknameState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    IdentityNicknameStatePluginSupport_destroy_data(
        IdentityNicknameState *sample);

    NDDSUSERDllExport extern void 
    IdentityNicknameStatePluginSupport_print_data(
        const IdentityNicknameState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern IdentityNicknameState*
    IdentityNicknameStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern IdentityNicknameState*
    IdentityNicknameStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    IdentityNicknameStatePluginSupport_destroy_key_ex(
        IdentityNicknameStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    IdentityNicknameStatePluginSupport_destroy_key(
        IdentityNicknameStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    IdentityNicknameStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    IdentityNicknameStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    IdentityNicknameStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    IdentityNicknameStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    IdentityNicknameStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        IdentityNicknameState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    IdentityNicknameStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        IdentityNicknameState *out,
        const IdentityNicknameState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    IdentityNicknameStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const IdentityNicknameState *sample); 

    NDDSUSERDllExport extern RTIBool
    IdentityNicknameStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const IdentityNicknameState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    IdentityNicknameStatePlugin_deserialize_from_cdr_buffer(
        IdentityNicknameState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    IdentityNicknameStatePlugin_data_to_string(
        const IdentityNicknameState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    IdentityNicknameStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    IdentityNicknameStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    IdentityNicknameStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    IdentityNicknameStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    IdentityNicknameStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        IdentityNicknameState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    IdentityNicknameStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        IdentityNicknameStateKeyHolder *key, 
        const IdentityNicknameState *instance);

    NDDSUSERDllExport extern RTIBool 
    IdentityNicknameStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        IdentityNicknameState *instance, 
        const IdentityNicknameStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    IdentityNicknameStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * IdentityNicknameStatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    IdentityNicknameStatePlugin_new(void);

    NDDSUSERDllExport extern void
    IdentityNicknameStatePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct GroundingCircuitRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct GroundingCircuitRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * GroundingCircuitRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct GroundingCircuitRequest.
    */
    typedef  class GroundingCircuitRequest GroundingCircuitRequestKeyHolder;

    #define GroundingCircuitRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define GroundingCircuitRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define GroundingCircuitRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define GroundingCircuitRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define GroundingCircuitRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define GroundingCircuitRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define GroundingCircuitRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern GroundingCircuitRequest*
    GroundingCircuitRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern GroundingCircuitRequest*
    GroundingCircuitRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GroundingCircuitRequest*
    GroundingCircuitRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitRequestPluginSupport_copy_data(
        GroundingCircuitRequest *out,
        const GroundingCircuitRequest *in);

    NDDSUSERDllExport extern void 
    GroundingCircuitRequestPluginSupport_destroy_data_w_params(
        GroundingCircuitRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    GroundingCircuitRequestPluginSupport_destroy_data_ex(
        GroundingCircuitRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GroundingCircuitRequestPluginSupport_destroy_data(
        GroundingCircuitRequest *sample);

    NDDSUSERDllExport extern void 
    GroundingCircuitRequestPluginSupport_print_data(
        const GroundingCircuitRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern GroundingCircuitRequest*
    GroundingCircuitRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern GroundingCircuitRequest*
    GroundingCircuitRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    GroundingCircuitRequestPluginSupport_destroy_key_ex(
        GroundingCircuitRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    GroundingCircuitRequestPluginSupport_destroy_key(
        GroundingCircuitRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    GroundingCircuitRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    GroundingCircuitRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    GroundingCircuitRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    GroundingCircuitRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    GroundingCircuitRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitRequest *out,
        const GroundingCircuitRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    GroundingCircuitRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const GroundingCircuitRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    GroundingCircuitRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const GroundingCircuitRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    GroundingCircuitRequestPlugin_deserialize_from_cdr_buffer(
        GroundingCircuitRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    GroundingCircuitRequestPlugin_data_to_string(
        const GroundingCircuitRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    GroundingCircuitRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    GroundingCircuitRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitRequestKeyHolder *key, 
        const GroundingCircuitRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        GroundingCircuitRequest *instance, 
        const GroundingCircuitRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    GroundingCircuitRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * GroundingCircuitRequestPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    GroundingCircuitRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    GroundingCircuitRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct Heartbeat
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct Heartbeat)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * Heartbeat must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct Heartbeat.
    */
    typedef  class Heartbeat HeartbeatKeyHolder;

    #define HeartbeatPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define HeartbeatPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define HeartbeatPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define HeartbeatPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define HeartbeatPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define HeartbeatPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define HeartbeatPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Heartbeat*
    HeartbeatPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Heartbeat*
    HeartbeatPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Heartbeat*
    HeartbeatPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    HeartbeatPluginSupport_copy_data(
        Heartbeat *out,
        const Heartbeat *in);

    NDDSUSERDllExport extern void 
    HeartbeatPluginSupport_destroy_data_w_params(
        Heartbeat *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    HeartbeatPluginSupport_destroy_data_ex(
        Heartbeat *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    HeartbeatPluginSupport_destroy_data(
        Heartbeat *sample);

    NDDSUSERDllExport extern void 
    HeartbeatPluginSupport_print_data(
        const Heartbeat *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Heartbeat*
    HeartbeatPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Heartbeat*
    HeartbeatPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    HeartbeatPluginSupport_destroy_key_ex(
        HeartbeatKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    HeartbeatPluginSupport_destroy_key(
        HeartbeatKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    HeartbeatPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    HeartbeatPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    HeartbeatPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    HeartbeatPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    HeartbeatPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Heartbeat *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    HeartbeatPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Heartbeat *out,
        const Heartbeat *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    HeartbeatPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Heartbeat *sample); 

    NDDSUSERDllExport extern RTIBool
    HeartbeatPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Heartbeat *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    HeartbeatPlugin_deserialize_from_cdr_buffer(
        Heartbeat *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    HeartbeatPlugin_data_to_string(
        const Heartbeat *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    HeartbeatPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    HeartbeatPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    HeartbeatPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    HeartbeatPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    HeartbeatPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Heartbeat ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    HeartbeatPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        HeartbeatKeyHolder *key, 
        const Heartbeat *instance);

    NDDSUSERDllExport extern RTIBool 
    HeartbeatPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Heartbeat *instance, 
        const HeartbeatKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    HeartbeatPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * HeartbeatPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    HeartbeatPlugin_new(void);

    NDDSUSERDllExport extern void
    HeartbeatPlugin_delete(struct PRESTypePlugin *);

    #define LoadInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LoadInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LoadInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LoadInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LoadInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LoadInfo*
    LoadInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LoadInfo*
    LoadInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LoadInfo*
    LoadInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LoadInfoPluginSupport_copy_data(
        LoadInfo *out,
        const LoadInfo *in);

    NDDSUSERDllExport extern void 
    LoadInfoPluginSupport_destroy_data_w_params(
        LoadInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LoadInfoPluginSupport_destroy_data_ex(
        LoadInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LoadInfoPluginSupport_destroy_data(
        LoadInfo *sample);

    NDDSUSERDllExport extern void 
    LoadInfoPluginSupport_print_data(
        const LoadInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    LoadInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LoadInfo *out,
        const LoadInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    LoadInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const LoadInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    LoadInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const LoadInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    LoadInfoPlugin_deserialize_from_cdr_buffer(
        LoadInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    LoadInfoPlugin_data_to_string(
        const LoadInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    LoadInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LoadInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LoadInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LoadInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    LoadInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        LoadInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * LoadInfoPlugin_get_programs(void);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct MetricParameterState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct MetricParameterState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * MetricParameterState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct MetricParameterState.
    */
    typedef  class MetricParameterState MetricParameterStateKeyHolder;

    #define MetricParameterStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define MetricParameterStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define MetricParameterStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define MetricParameterStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define MetricParameterStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define MetricParameterStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define MetricParameterStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern MetricParameterState*
    MetricParameterStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern MetricParameterState*
    MetricParameterStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern MetricParameterState*
    MetricParameterStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    MetricParameterStatePluginSupport_copy_data(
        MetricParameterState *out,
        const MetricParameterState *in);

    NDDSUSERDllExport extern void 
    MetricParameterStatePluginSupport_destroy_data_w_params(
        MetricParameterState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    MetricParameterStatePluginSupport_destroy_data_ex(
        MetricParameterState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    MetricParameterStatePluginSupport_destroy_data(
        MetricParameterState *sample);

    NDDSUSERDllExport extern void 
    MetricParameterStatePluginSupport_print_data(
        const MetricParameterState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern MetricParameterState*
    MetricParameterStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern MetricParameterState*
    MetricParameterStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    MetricParameterStatePluginSupport_destroy_key_ex(
        MetricParameterStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    MetricParameterStatePluginSupport_destroy_key(
        MetricParameterStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    MetricParameterStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    MetricParameterStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    MetricParameterStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    MetricParameterStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    MetricParameterStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        MetricParameterState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    MetricParameterStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        MetricParameterState *out,
        const MetricParameterState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    MetricParameterStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const MetricParameterState *sample); 

    NDDSUSERDllExport extern RTIBool
    MetricParameterStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const MetricParameterState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    MetricParameterStatePlugin_deserialize_from_cdr_buffer(
        MetricParameterState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    MetricParameterStatePlugin_data_to_string(
        const MetricParameterState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    MetricParameterStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    MetricParameterStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    MetricParameterStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MetricParameterStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    MetricParameterStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        MetricParameterState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    MetricParameterStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        MetricParameterStateKeyHolder *key, 
        const MetricParameterState *instance);

    NDDSUSERDllExport extern RTIBool 
    MetricParameterStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        MetricParameterState *instance, 
        const MetricParameterStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    MetricParameterStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * MetricParameterStatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    MetricParameterStatePlugin_new(void);

    NDDSUSERDllExport extern void
    MetricParameterStatePlugin_delete(struct PRESTypePlugin *);

    #define LoadSharingIntentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define LoadSharingIntentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define LoadSharingIntentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define LoadSharingIntentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define LoadSharingIntentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern LoadSharingIntent*
    LoadSharingIntentPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern LoadSharingIntent*
    LoadSharingIntentPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern LoadSharingIntent*
    LoadSharingIntentPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    LoadSharingIntentPluginSupport_copy_data(
        LoadSharingIntent *out,
        const LoadSharingIntent *in);

    NDDSUSERDllExport extern void 
    LoadSharingIntentPluginSupport_destroy_data_w_params(
        LoadSharingIntent *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    LoadSharingIntentPluginSupport_destroy_data_ex(
        LoadSharingIntent *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    LoadSharingIntentPluginSupport_destroy_data(
        LoadSharingIntent *sample);

    NDDSUSERDllExport extern void 
    LoadSharingIntentPluginSupport_print_data(
        const LoadSharingIntent *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    LoadSharingIntentPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        LoadSharingIntent *out,
        const LoadSharingIntent *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    LoadSharingIntentPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const LoadSharingIntent *sample); 

    NDDSUSERDllExport extern RTIBool
    LoadSharingIntentPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const LoadSharingIntent *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    LoadSharingIntentPlugin_deserialize_from_cdr_buffer(
        LoadSharingIntent *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    LoadSharingIntentPlugin_data_to_string(
        const LoadSharingIntent *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    LoadSharingIntentPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    LoadSharingIntentPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    LoadSharingIntentPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    LoadSharingIntentPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    LoadSharingIntentPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        LoadSharingIntent ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * LoadSharingIntentPlugin_get_programs(void);

    #define StorageIntentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define StorageIntentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define StorageIntentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define StorageIntentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define StorageIntentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern StorageIntent*
    StorageIntentPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern StorageIntent*
    StorageIntentPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern StorageIntent*
    StorageIntentPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    StorageIntentPluginSupport_copy_data(
        StorageIntent *out,
        const StorageIntent *in);

    NDDSUSERDllExport extern void 
    StorageIntentPluginSupport_destroy_data_w_params(
        StorageIntent *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    StorageIntentPluginSupport_destroy_data_ex(
        StorageIntent *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    StorageIntentPluginSupport_destroy_data(
        StorageIntent *sample);

    NDDSUSERDllExport extern void 
    StorageIntentPluginSupport_print_data(
        const StorageIntent *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    StorageIntentPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        StorageIntent *out,
        const StorageIntent *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    StorageIntentPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const StorageIntent *sample); 

    NDDSUSERDllExport extern RTIBool
    StorageIntentPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const StorageIntent *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    StorageIntentPlugin_deserialize_from_cdr_buffer(
        StorageIntent *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    StorageIntentPlugin_data_to_string(
        const StorageIntent *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    StorageIntentPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    StorageIntentPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    StorageIntentPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    StorageIntentPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    StorageIntentPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        StorageIntent ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * StorageIntentPlugin_get_programs(void);

    #define MicrogridIntentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define MicrogridIntentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define MicrogridIntentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define MicrogridIntentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define MicrogridIntentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern MicrogridIntent*
    MicrogridIntentPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern MicrogridIntent*
    MicrogridIntentPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern MicrogridIntent*
    MicrogridIntentPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    MicrogridIntentPluginSupport_copy_data(
        MicrogridIntent *out,
        const MicrogridIntent *in);

    NDDSUSERDllExport extern void 
    MicrogridIntentPluginSupport_destroy_data_w_params(
        MicrogridIntent *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    MicrogridIntentPluginSupport_destroy_data_ex(
        MicrogridIntent *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    MicrogridIntentPluginSupport_destroy_data(
        MicrogridIntent *sample);

    NDDSUSERDllExport extern void 
    MicrogridIntentPluginSupport_print_data(
        const MicrogridIntent *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    MicrogridIntentPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        MicrogridIntent *out,
        const MicrogridIntent *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    MicrogridIntentPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const MicrogridIntent *sample); 

    NDDSUSERDllExport extern RTIBool
    MicrogridIntentPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const MicrogridIntent *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    MicrogridIntentPlugin_deserialize_from_cdr_buffer(
        MicrogridIntent *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    MicrogridIntentPlugin_data_to_string(
        const MicrogridIntent *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    MicrogridIntentPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    MicrogridIntentPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    MicrogridIntentPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MicrogridIntentPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    MicrogridIntentPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        MicrogridIntent ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * MicrogridIntentPlugin_get_programs(void);

    #define PowerPortIntentSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerPortIntentSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerPortIntentSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerPortIntentSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerPortIntentSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerPortIntentSequence*
    PowerPortIntentSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerPortIntentSequence*
    PowerPortIntentSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortIntentSequence*
    PowerPortIntentSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerPortIntentSequencePluginSupport_copy_data(
        PowerPortIntentSequence *out,
        const PowerPortIntentSequence *in);

    NDDSUSERDllExport extern void 
    PowerPortIntentSequencePluginSupport_destroy_data_w_params(
        PowerPortIntentSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerPortIntentSequencePluginSupport_destroy_data_ex(
        PowerPortIntentSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortIntentSequencePluginSupport_destroy_data(
        PowerPortIntentSequence *sample);

    NDDSUSERDllExport extern void 
    PowerPortIntentSequencePluginSupport_print_data(
        const PowerPortIntentSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerPortIntentSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortIntentSequence *out,
        const PowerPortIntentSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerPortIntentSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerPortIntentSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerPortIntentSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortIntentSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define OperatorIntentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define OperatorIntentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define OperatorIntentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define OperatorIntentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define OperatorIntentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern OperatorIntent*
    OperatorIntentPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern OperatorIntent*
    OperatorIntentPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern OperatorIntent*
    OperatorIntentPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentPluginSupport_copy_data(
        OperatorIntent *out,
        const OperatorIntent *in);

    NDDSUSERDllExport extern void 
    OperatorIntentPluginSupport_destroy_data_w_params(
        OperatorIntent *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    OperatorIntentPluginSupport_destroy_data_ex(
        OperatorIntent *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    OperatorIntentPluginSupport_destroy_data(
        OperatorIntent *sample);

    NDDSUSERDllExport extern void 
    OperatorIntentPluginSupport_print_data(
        const OperatorIntent *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        OperatorIntent *out,
        const OperatorIntent *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    OperatorIntentPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const OperatorIntent *sample); 

    NDDSUSERDllExport extern RTIBool
    OperatorIntentPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const OperatorIntent *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    OperatorIntentPlugin_deserialize_from_cdr_buffer(
        OperatorIntent *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    OperatorIntentPlugin_data_to_string(
        const OperatorIntent *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    OperatorIntentPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    OperatorIntentPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    OperatorIntentPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    OperatorIntentPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        OperatorIntent ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * OperatorIntentPlugin_get_programs(void);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct OperatorIntentRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct OperatorIntentRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * OperatorIntentRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct OperatorIntentRequest.
    */
    typedef  class OperatorIntentRequest OperatorIntentRequestKeyHolder;

    #define OperatorIntentRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define OperatorIntentRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define OperatorIntentRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define OperatorIntentRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define OperatorIntentRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define OperatorIntentRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define OperatorIntentRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern OperatorIntentRequest*
    OperatorIntentRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern OperatorIntentRequest*
    OperatorIntentRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern OperatorIntentRequest*
    OperatorIntentRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentRequestPluginSupport_copy_data(
        OperatorIntentRequest *out,
        const OperatorIntentRequest *in);

    NDDSUSERDllExport extern void 
    OperatorIntentRequestPluginSupport_destroy_data_w_params(
        OperatorIntentRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    OperatorIntentRequestPluginSupport_destroy_data_ex(
        OperatorIntentRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    OperatorIntentRequestPluginSupport_destroy_data(
        OperatorIntentRequest *sample);

    NDDSUSERDllExport extern void 
    OperatorIntentRequestPluginSupport_print_data(
        const OperatorIntentRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern OperatorIntentRequest*
    OperatorIntentRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern OperatorIntentRequest*
    OperatorIntentRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    OperatorIntentRequestPluginSupport_destroy_key_ex(
        OperatorIntentRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    OperatorIntentRequestPluginSupport_destroy_key(
        OperatorIntentRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    OperatorIntentRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    OperatorIntentRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    OperatorIntentRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    OperatorIntentRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    OperatorIntentRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        OperatorIntentRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        OperatorIntentRequest *out,
        const OperatorIntentRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    OperatorIntentRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const OperatorIntentRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    OperatorIntentRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const OperatorIntentRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    OperatorIntentRequestPlugin_deserialize_from_cdr_buffer(
        OperatorIntentRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    OperatorIntentRequestPlugin_data_to_string(
        const OperatorIntentRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    OperatorIntentRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    OperatorIntentRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    OperatorIntentRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    OperatorIntentRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        OperatorIntentRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        OperatorIntentRequestKeyHolder *key, 
        const OperatorIntentRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        OperatorIntentRequest *instance, 
        const OperatorIntentRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * OperatorIntentRequestPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    OperatorIntentRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    OperatorIntentRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct OperatorIntentState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct OperatorIntentState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * OperatorIntentState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct OperatorIntentState.
    */
    typedef  class OperatorIntentState OperatorIntentStateKeyHolder;

    #define OperatorIntentStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define OperatorIntentStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define OperatorIntentStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define OperatorIntentStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define OperatorIntentStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define OperatorIntentStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define OperatorIntentStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern OperatorIntentState*
    OperatorIntentStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern OperatorIntentState*
    OperatorIntentStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern OperatorIntentState*
    OperatorIntentStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentStatePluginSupport_copy_data(
        OperatorIntentState *out,
        const OperatorIntentState *in);

    NDDSUSERDllExport extern void 
    OperatorIntentStatePluginSupport_destroy_data_w_params(
        OperatorIntentState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    OperatorIntentStatePluginSupport_destroy_data_ex(
        OperatorIntentState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    OperatorIntentStatePluginSupport_destroy_data(
        OperatorIntentState *sample);

    NDDSUSERDllExport extern void 
    OperatorIntentStatePluginSupport_print_data(
        const OperatorIntentState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern OperatorIntentState*
    OperatorIntentStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern OperatorIntentState*
    OperatorIntentStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    OperatorIntentStatePluginSupport_destroy_key_ex(
        OperatorIntentStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    OperatorIntentStatePluginSupport_destroy_key(
        OperatorIntentStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    OperatorIntentStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    OperatorIntentStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    OperatorIntentStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    OperatorIntentStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    OperatorIntentStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        OperatorIntentState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        OperatorIntentState *out,
        const OperatorIntentState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    OperatorIntentStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const OperatorIntentState *sample); 

    NDDSUSERDllExport extern RTIBool
    OperatorIntentStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const OperatorIntentState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    OperatorIntentStatePlugin_deserialize_from_cdr_buffer(
        OperatorIntentState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    OperatorIntentStatePlugin_data_to_string(
        const OperatorIntentState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    OperatorIntentStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    OperatorIntentStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    OperatorIntentStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    OperatorIntentStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        OperatorIntentState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        OperatorIntentStateKeyHolder *key, 
        const OperatorIntentState *instance);

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        OperatorIntentState *instance, 
        const OperatorIntentStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    OperatorIntentStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * OperatorIntentStatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    OperatorIntentStatePlugin_new(void);

    NDDSUSERDllExport extern void
    OperatorIntentStatePlugin_delete(struct PRESTypePlugin *);

    #define PowerPortConfigRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerPortConfigRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerPortConfigRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerPortConfigRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerPortConfigRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerPortConfigRequest*
    PowerPortConfigRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerPortConfigRequest*
    PowerPortConfigRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortConfigRequest*
    PowerPortConfigRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerPortConfigRequestPluginSupport_copy_data(
        PowerPortConfigRequest *out,
        const PowerPortConfigRequest *in);

    NDDSUSERDllExport extern void 
    PowerPortConfigRequestPluginSupport_destroy_data_w_params(
        PowerPortConfigRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerPortConfigRequestPluginSupport_destroy_data_ex(
        PowerPortConfigRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortConfigRequestPluginSupport_destroy_data(
        PowerPortConfigRequest *sample);

    NDDSUSERDllExport extern void 
    PowerPortConfigRequestPluginSupport_print_data(
        const PowerPortConfigRequest *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerPortConfigRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortConfigRequest *out,
        const PowerPortConfigRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerPortConfigRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerPortConfigRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerPortConfigRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerPortConfigRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerPortConfigRequestPlugin_deserialize_from_cdr_buffer(
        PowerPortConfigRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerPortConfigRequestPlugin_data_to_string(
        const PowerPortConfigRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerPortConfigRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerPortConfigRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerPortConfigRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortConfigRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerPortConfigRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortConfigRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerPortConfigRequestPlugin_get_programs(void);

    #define PowerConnectionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerConnectionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerConnectionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerConnectionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerConnectionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerConnection*
    PowerConnectionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerConnection*
    PowerConnectionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerConnection*
    PowerConnectionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionPluginSupport_copy_data(
        PowerConnection *out,
        const PowerConnection *in);

    NDDSUSERDllExport extern void 
    PowerConnectionPluginSupport_destroy_data_w_params(
        PowerConnection *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerConnectionPluginSupport_destroy_data_ex(
        PowerConnection *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerConnectionPluginSupport_destroy_data(
        PowerConnection *sample);

    NDDSUSERDllExport extern void 
    PowerConnectionPluginSupport_print_data(
        const PowerConnection *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerConnection *out,
        const PowerConnection *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerConnectionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerConnection *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerConnectionPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerConnection *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerConnectionPlugin_deserialize_from_cdr_buffer(
        PowerConnection *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerConnectionPlugin_data_to_string(
        const PowerConnection *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerConnectionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerConnection ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerConnectionPlugin_get_programs(void);

    #define PowerConnectionSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerConnectionSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerConnectionSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerConnectionSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerConnectionSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerConnectionSequence*
    PowerConnectionSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerConnectionSequence*
    PowerConnectionSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerConnectionSequence*
    PowerConnectionSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionSequencePluginSupport_copy_data(
        PowerConnectionSequence *out,
        const PowerConnectionSequence *in);

    NDDSUSERDllExport extern void 
    PowerConnectionSequencePluginSupport_destroy_data_w_params(
        PowerConnectionSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerConnectionSequencePluginSupport_destroy_data_ex(
        PowerConnectionSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerConnectionSequencePluginSupport_destroy_data(
        PowerConnectionSequence *sample);

    NDDSUSERDllExport extern void 
    PowerConnectionSequencePluginSupport_print_data(
        const PowerConnectionSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerConnectionSequence *out,
        const PowerConnectionSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerConnectionSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct PowerConnectionState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct PowerConnectionState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * PowerConnectionState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct PowerConnectionState.
    */
    typedef  class PowerConnectionState PowerConnectionStateKeyHolder;

    #define PowerConnectionStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerConnectionStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerConnectionStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerConnectionStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define PowerConnectionStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define PowerConnectionStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerConnectionStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerConnectionState*
    PowerConnectionStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerConnectionState*
    PowerConnectionStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerConnectionState*
    PowerConnectionStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionStatePluginSupport_copy_data(
        PowerConnectionState *out,
        const PowerConnectionState *in);

    NDDSUSERDllExport extern void 
    PowerConnectionStatePluginSupport_destroy_data_w_params(
        PowerConnectionState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerConnectionStatePluginSupport_destroy_data_ex(
        PowerConnectionState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerConnectionStatePluginSupport_destroy_data(
        PowerConnectionState *sample);

    NDDSUSERDllExport extern void 
    PowerConnectionStatePluginSupport_print_data(
        const PowerConnectionState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern PowerConnectionState*
    PowerConnectionStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerConnectionState*
    PowerConnectionStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    PowerConnectionStatePluginSupport_destroy_key_ex(
        PowerConnectionStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerConnectionStatePluginSupport_destroy_key(
        PowerConnectionStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    PowerConnectionStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    PowerConnectionStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    PowerConnectionStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    PowerConnectionStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    PowerConnectionStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerConnectionState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerConnectionState *out,
        const PowerConnectionState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerConnectionStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerConnectionState *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerConnectionStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerConnectionState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerConnectionStatePlugin_deserialize_from_cdr_buffer(
        PowerConnectionState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerConnectionStatePlugin_data_to_string(
        const PowerConnectionState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerConnectionStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerConnectionStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerConnectionState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerConnectionStateKeyHolder *key, 
        const PowerConnectionState *instance);

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        PowerConnectionState *instance, 
        const PowerConnectionStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    PowerConnectionStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerConnectionStatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    PowerConnectionStatePlugin_new(void);

    NDDSUSERDllExport extern void
    PowerConnectionStatePlugin_delete(struct PRESTypePlugin *);

    #define PowerSwitchCloseConditionsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerSwitchCloseConditionsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerSwitchCloseConditionsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerSwitchCloseConditionsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerSwitchCloseConditionsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerSwitchCloseConditions*
    PowerSwitchCloseConditionsPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerSwitchCloseConditions*
    PowerSwitchCloseConditionsPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerSwitchCloseConditions*
    PowerSwitchCloseConditionsPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchCloseConditionsPluginSupport_copy_data(
        PowerSwitchCloseConditions *out,
        const PowerSwitchCloseConditions *in);

    NDDSUSERDllExport extern void 
    PowerSwitchCloseConditionsPluginSupport_destroy_data_w_params(
        PowerSwitchCloseConditions *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerSwitchCloseConditionsPluginSupport_destroy_data_ex(
        PowerSwitchCloseConditions *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerSwitchCloseConditionsPluginSupport_destroy_data(
        PowerSwitchCloseConditions *sample);

    NDDSUSERDllExport extern void 
    PowerSwitchCloseConditionsPluginSupport_print_data(
        const PowerSwitchCloseConditions *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchCloseConditionsPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerSwitchCloseConditions *out,
        const PowerSwitchCloseConditions *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerSwitchCloseConditionsPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerSwitchCloseConditions *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerSwitchCloseConditionsPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerSwitchCloseConditions *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerSwitchCloseConditionsPlugin_deserialize_from_cdr_buffer(
        PowerSwitchCloseConditions *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerSwitchCloseConditionsPlugin_data_to_string(
        const PowerSwitchCloseConditions *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchCloseConditionsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerSwitchCloseConditionsPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchCloseConditionsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchCloseConditionsPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchCloseConditionsPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerSwitchCloseConditions ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerSwitchCloseConditionsPlugin_get_programs(void);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct PowerSwitchRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct PowerSwitchRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * PowerSwitchRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct PowerSwitchRequest.
    */
    typedef  class PowerSwitchRequest PowerSwitchRequestKeyHolder;

    #define PowerSwitchRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerSwitchRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerSwitchRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerSwitchRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define PowerSwitchRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define PowerSwitchRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerSwitchRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerSwitchRequest*
    PowerSwitchRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerSwitchRequest*
    PowerSwitchRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerSwitchRequest*
    PowerSwitchRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchRequestPluginSupport_copy_data(
        PowerSwitchRequest *out,
        const PowerSwitchRequest *in);

    NDDSUSERDllExport extern void 
    PowerSwitchRequestPluginSupport_destroy_data_w_params(
        PowerSwitchRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerSwitchRequestPluginSupport_destroy_data_ex(
        PowerSwitchRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerSwitchRequestPluginSupport_destroy_data(
        PowerSwitchRequest *sample);

    NDDSUSERDllExport extern void 
    PowerSwitchRequestPluginSupport_print_data(
        const PowerSwitchRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern PowerSwitchRequest*
    PowerSwitchRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerSwitchRequest*
    PowerSwitchRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    PowerSwitchRequestPluginSupport_destroy_key_ex(
        PowerSwitchRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerSwitchRequestPluginSupport_destroy_key(
        PowerSwitchRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    PowerSwitchRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    PowerSwitchRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    PowerSwitchRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    PowerSwitchRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    PowerSwitchRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerSwitchRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerSwitchRequest *out,
        const PowerSwitchRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerSwitchRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerSwitchRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerSwitchRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerSwitchRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerSwitchRequestPlugin_deserialize_from_cdr_buffer(
        PowerSwitchRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerSwitchRequestPlugin_data_to_string(
        const PowerSwitchRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerSwitchRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerSwitchRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerSwitchRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerSwitchRequestKeyHolder *key, 
        const PowerSwitchRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        PowerSwitchRequest *instance, 
        const PowerSwitchRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    PowerSwitchRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerSwitchRequestPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    PowerSwitchRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    PowerSwitchRequestPlugin_delete(struct PRESTypePlugin *);

    #define TopicInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define TopicInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define TopicInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define TopicInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define TopicInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern TopicInfo*
    TopicInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern TopicInfo*
    TopicInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern TopicInfo*
    TopicInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    TopicInfoPluginSupport_copy_data(
        TopicInfo *out,
        const TopicInfo *in);

    NDDSUSERDllExport extern void 
    TopicInfoPluginSupport_destroy_data_w_params(
        TopicInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    TopicInfoPluginSupport_destroy_data_ex(
        TopicInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    TopicInfoPluginSupport_destroy_data(
        TopicInfo *sample);

    NDDSUSERDllExport extern void 
    TopicInfoPluginSupport_print_data(
        const TopicInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    TopicInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        TopicInfo *out,
        const TopicInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    TopicInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const TopicInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    TopicInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const TopicInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    TopicInfoPlugin_deserialize_from_cdr_buffer(
        TopicInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    TopicInfoPlugin_data_to_string(
        const TopicInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    TopicInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    TopicInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    TopicInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    TopicInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    TopicInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        TopicInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * TopicInfoPlugin_get_programs(void);

    #define ActiveConversionInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ActiveConversionInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ActiveConversionInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ActiveConversionInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ActiveConversionInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ActiveConversionInfo*
    ActiveConversionInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ActiveConversionInfo*
    ActiveConversionInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ActiveConversionInfo*
    ActiveConversionInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ActiveConversionInfoPluginSupport_copy_data(
        ActiveConversionInfo *out,
        const ActiveConversionInfo *in);

    NDDSUSERDllExport extern void 
    ActiveConversionInfoPluginSupport_destroy_data_w_params(
        ActiveConversionInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ActiveConversionInfoPluginSupport_destroy_data_ex(
        ActiveConversionInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ActiveConversionInfoPluginSupport_destroy_data(
        ActiveConversionInfo *sample);

    NDDSUSERDllExport extern void 
    ActiveConversionInfoPluginSupport_print_data(
        const ActiveConversionInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ActiveConversionInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ActiveConversionInfo *out,
        const ActiveConversionInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ActiveConversionInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ActiveConversionInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    ActiveConversionInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ActiveConversionInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ActiveConversionInfoPlugin_deserialize_from_cdr_buffer(
        ActiveConversionInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ActiveConversionInfoPlugin_data_to_string(
        const ActiveConversionInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ActiveConversionInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ActiveConversionInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ActiveConversionInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ActiveConversionInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ActiveConversionInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ActiveConversionInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ActiveConversionInfoPlugin_get_programs(void);

    #define ConversionTapInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ConversionTapInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ConversionTapInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ConversionTapInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ConversionTapInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ConversionTapInfo*
    ConversionTapInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ConversionTapInfo*
    ConversionTapInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ConversionTapInfo*
    ConversionTapInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ConversionTapInfoPluginSupport_copy_data(
        ConversionTapInfo *out,
        const ConversionTapInfo *in);

    NDDSUSERDllExport extern void 
    ConversionTapInfoPluginSupport_destroy_data_w_params(
        ConversionTapInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ConversionTapInfoPluginSupport_destroy_data_ex(
        ConversionTapInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ConversionTapInfoPluginSupport_destroy_data(
        ConversionTapInfo *sample);

    NDDSUSERDllExport extern void 
    ConversionTapInfoPluginSupport_print_data(
        const ConversionTapInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ConversionTapInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ConversionTapInfo *out,
        const ConversionTapInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ConversionTapInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ConversionTapInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    ConversionTapInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ConversionTapInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ConversionTapInfoPlugin_deserialize_from_cdr_buffer(
        ConversionTapInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ConversionTapInfoPlugin_data_to_string(
        const ConversionTapInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ConversionTapInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ConversionTapInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ConversionTapInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ConversionTapInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ConversionTapInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ConversionTapInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ConversionTapInfoPlugin_get_programs(void);

    #define ConversionTapInfoSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ConversionTapInfoSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ConversionTapInfoSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ConversionTapInfoSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ConversionTapInfoSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ConversionTapInfoSequence*
    ConversionTapInfoSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ConversionTapInfoSequence*
    ConversionTapInfoSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ConversionTapInfoSequence*
    ConversionTapInfoSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ConversionTapInfoSequencePluginSupport_copy_data(
        ConversionTapInfoSequence *out,
        const ConversionTapInfoSequence *in);

    NDDSUSERDllExport extern void 
    ConversionTapInfoSequencePluginSupport_destroy_data_w_params(
        ConversionTapInfoSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ConversionTapInfoSequencePluginSupport_destroy_data_ex(
        ConversionTapInfoSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ConversionTapInfoSequencePluginSupport_destroy_data(
        ConversionTapInfoSequence *sample);

    NDDSUSERDllExport extern void 
    ConversionTapInfoSequencePluginSupport_print_data(
        const ConversionTapInfoSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ConversionTapInfoSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ConversionTapInfoSequence *out,
        const ConversionTapInfoSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    ConversionTapInfoSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ConversionTapInfoSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ConversionTapInfoSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ConversionTapInfoSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define PowerPortConversionInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerPortConversionInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerPortConversionInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerPortConversionInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerPortConversionInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerPortConversionInfo*
    PowerPortConversionInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerPortConversionInfo*
    PowerPortConversionInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortConversionInfo*
    PowerPortConversionInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerPortConversionInfoPluginSupport_copy_data(
        PowerPortConversionInfo *out,
        const PowerPortConversionInfo *in);

    NDDSUSERDllExport extern void 
    PowerPortConversionInfoPluginSupport_destroy_data_w_params(
        PowerPortConversionInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerPortConversionInfoPluginSupport_destroy_data_ex(
        PowerPortConversionInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortConversionInfoPluginSupport_destroy_data(
        PowerPortConversionInfo *sample);

    NDDSUSERDllExport extern void 
    PowerPortConversionInfoPluginSupport_print_data(
        const PowerPortConversionInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerPortConversionInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortConversionInfo *out,
        const PowerPortConversionInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerPortConversionInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerPortConversionInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerPortConversionInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerPortConversionInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerPortConversionInfoPlugin_deserialize_from_cdr_buffer(
        PowerPortConversionInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerPortConversionInfoPlugin_data_to_string(
        const PowerPortConversionInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerPortConversionInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerPortConversionInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerPortConversionInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortConversionInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerPortConversionInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortConversionInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerPortConversionInfoPlugin_get_programs(void);

    #define PowerPortConversionInfoSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerPortConversionInfoSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerPortConversionInfoSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerPortConversionInfoSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerPortConversionInfoSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerPortConversionInfoSequence*
    PowerPortConversionInfoSequencePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerPortConversionInfoSequence*
    PowerPortConversionInfoSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerPortConversionInfoSequence*
    PowerPortConversionInfoSequencePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerPortConversionInfoSequencePluginSupport_copy_data(
        PowerPortConversionInfoSequence *out,
        const PowerPortConversionInfoSequence *in);

    NDDSUSERDllExport extern void 
    PowerPortConversionInfoSequencePluginSupport_destroy_data_w_params(
        PowerPortConversionInfoSequence *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerPortConversionInfoSequencePluginSupport_destroy_data_ex(
        PowerPortConversionInfoSequence *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerPortConversionInfoSequencePluginSupport_destroy_data(
        PowerPortConversionInfoSequence *sample);

    NDDSUSERDllExport extern void 
    PowerPortConversionInfoSequencePluginSupport_print_data(
        const PowerPortConversionInfoSequence *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerPortConversionInfoSequencePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerPortConversionInfoSequence *out,
        const PowerPortConversionInfoSequence *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    PowerPortConversionInfoSequencePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerPortConversionInfoSequencePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerPortConversionInfoSequencePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerPortConversionInfoSequencePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define PassiveConversionInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PassiveConversionInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PassiveConversionInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PassiveConversionInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PassiveConversionInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PassiveConversionInfo*
    PassiveConversionInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PassiveConversionInfo*
    PassiveConversionInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PassiveConversionInfo*
    PassiveConversionInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PassiveConversionInfoPluginSupport_copy_data(
        PassiveConversionInfo *out,
        const PassiveConversionInfo *in);

    NDDSUSERDllExport extern void 
    PassiveConversionInfoPluginSupport_destroy_data_w_params(
        PassiveConversionInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PassiveConversionInfoPluginSupport_destroy_data_ex(
        PassiveConversionInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PassiveConversionInfoPluginSupport_destroy_data(
        PassiveConversionInfo *sample);

    NDDSUSERDllExport extern void 
    PassiveConversionInfoPluginSupport_print_data(
        const PassiveConversionInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PassiveConversionInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PassiveConversionInfo *out,
        const PassiveConversionInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PassiveConversionInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PassiveConversionInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    PassiveConversionInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PassiveConversionInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PassiveConversionInfoPlugin_deserialize_from_cdr_buffer(
        PassiveConversionInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PassiveConversionInfoPlugin_data_to_string(
        const PassiveConversionInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PassiveConversionInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PassiveConversionInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PassiveConversionInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PassiveConversionInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PassiveConversionInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PassiveConversionInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PassiveConversionInfoPlugin_get_programs(void);

    #define ConversionInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ConversionInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ConversionInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ConversionInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ConversionInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ConversionInfo*
    ConversionInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ConversionInfo*
    ConversionInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ConversionInfo*
    ConversionInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ConversionInfoPluginSupport_copy_data(
        ConversionInfo *out,
        const ConversionInfo *in);

    NDDSUSERDllExport extern void 
    ConversionInfoPluginSupport_destroy_data_w_params(
        ConversionInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ConversionInfoPluginSupport_destroy_data_ex(
        ConversionInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ConversionInfoPluginSupport_destroy_data(
        ConversionInfo *sample);

    NDDSUSERDllExport extern void 
    ConversionInfoPluginSupport_print_data(
        const ConversionInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ConversionInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ConversionInfo *out,
        const ConversionInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ConversionInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ConversionInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    ConversionInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ConversionInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ConversionInfoPlugin_deserialize_from_cdr_buffer(
        ConversionInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ConversionInfoPlugin_data_to_string(
        const ConversionInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ConversionInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ConversionInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ConversionInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ConversionInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ConversionInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ConversionInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ConversionInfoPlugin_get_programs(void);

    #define ProductInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ProductInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ProductInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ProductInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ProductInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ProductInfo*
    ProductInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ProductInfo*
    ProductInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ProductInfo*
    ProductInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ProductInfoPluginSupport_copy_data(
        ProductInfo *out,
        const ProductInfo *in);

    NDDSUSERDllExport extern void 
    ProductInfoPluginSupport_destroy_data_w_params(
        ProductInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ProductInfoPluginSupport_destroy_data_ex(
        ProductInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ProductInfoPluginSupport_destroy_data(
        ProductInfo *sample);

    NDDSUSERDllExport extern void 
    ProductInfoPluginSupport_print_data(
        const ProductInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ProductInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ProductInfo *out,
        const ProductInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ProductInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ProductInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    ProductInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ProductInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ProductInfoPlugin_deserialize_from_cdr_buffer(
        ProductInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ProductInfoPlugin_data_to_string(
        const ProductInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ProductInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ProductInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ProductInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ProductInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ProductInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ProductInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ProductInfoPlugin_get_programs(void);

    #define MicrogridDashboardInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define MicrogridDashboardInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define MicrogridDashboardInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define MicrogridDashboardInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define MicrogridDashboardInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern MicrogridDashboardInfo*
    MicrogridDashboardInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern MicrogridDashboardInfo*
    MicrogridDashboardInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern MicrogridDashboardInfo*
    MicrogridDashboardInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    MicrogridDashboardInfoPluginSupport_copy_data(
        MicrogridDashboardInfo *out,
        const MicrogridDashboardInfo *in);

    NDDSUSERDllExport extern void 
    MicrogridDashboardInfoPluginSupport_destroy_data_w_params(
        MicrogridDashboardInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    MicrogridDashboardInfoPluginSupport_destroy_data_ex(
        MicrogridDashboardInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    MicrogridDashboardInfoPluginSupport_destroy_data(
        MicrogridDashboardInfo *sample);

    NDDSUSERDllExport extern void 
    MicrogridDashboardInfoPluginSupport_print_data(
        const MicrogridDashboardInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    MicrogridDashboardInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        MicrogridDashboardInfo *out,
        const MicrogridDashboardInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    MicrogridDashboardInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const MicrogridDashboardInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    MicrogridDashboardInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const MicrogridDashboardInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    MicrogridDashboardInfoPlugin_deserialize_from_cdr_buffer(
        MicrogridDashboardInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    MicrogridDashboardInfoPlugin_data_to_string(
        const MicrogridDashboardInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    MicrogridDashboardInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    MicrogridDashboardInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    MicrogridDashboardInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MicrogridDashboardInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    MicrogridDashboardInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        MicrogridDashboardInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * MicrogridDashboardInfoPlugin_get_programs(void);

    #define MicrogridControllerInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define MicrogridControllerInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define MicrogridControllerInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define MicrogridControllerInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define MicrogridControllerInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern MicrogridControllerInfo*
    MicrogridControllerInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern MicrogridControllerInfo*
    MicrogridControllerInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern MicrogridControllerInfo*
    MicrogridControllerInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    MicrogridControllerInfoPluginSupport_copy_data(
        MicrogridControllerInfo *out,
        const MicrogridControllerInfo *in);

    NDDSUSERDllExport extern void 
    MicrogridControllerInfoPluginSupport_destroy_data_w_params(
        MicrogridControllerInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    MicrogridControllerInfoPluginSupport_destroy_data_ex(
        MicrogridControllerInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    MicrogridControllerInfoPluginSupport_destroy_data(
        MicrogridControllerInfo *sample);

    NDDSUSERDllExport extern void 
    MicrogridControllerInfoPluginSupport_print_data(
        const MicrogridControllerInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    MicrogridControllerInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        MicrogridControllerInfo *out,
        const MicrogridControllerInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    MicrogridControllerInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const MicrogridControllerInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    MicrogridControllerInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const MicrogridControllerInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    MicrogridControllerInfoPlugin_deserialize_from_cdr_buffer(
        MicrogridControllerInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    MicrogridControllerInfoPlugin_data_to_string(
        const MicrogridControllerInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    MicrogridControllerInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    MicrogridControllerInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    MicrogridControllerInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    MicrogridControllerInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    MicrogridControllerInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        MicrogridControllerInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * MicrogridControllerInfoPlugin_get_programs(void);

    #define ReplyStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ReplyStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ReplyStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ReplyStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ReplyStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ReplyStatus*
    ReplyStatusPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ReplyStatus*
    ReplyStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ReplyStatus*
    ReplyStatusPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ReplyStatusPluginSupport_copy_data(
        ReplyStatus *out,
        const ReplyStatus *in);

    NDDSUSERDllExport extern void 
    ReplyStatusPluginSupport_destroy_data_w_params(
        ReplyStatus *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ReplyStatusPluginSupport_destroy_data_ex(
        ReplyStatus *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ReplyStatusPluginSupport_destroy_data(
        ReplyStatus *sample);

    NDDSUSERDllExport extern void 
    ReplyStatusPluginSupport_print_data(
        const ReplyStatus *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ReplyStatusPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ReplyStatus *out,
        const ReplyStatus *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ReplyStatusPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ReplyStatus *sample); 

    NDDSUSERDllExport extern RTIBool
    ReplyStatusPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ReplyStatus *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ReplyStatusPlugin_deserialize_from_cdr_buffer(
        ReplyStatus *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ReplyStatusPlugin_data_to_string(
        const ReplyStatus *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ReplyStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ReplyStatusPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ReplyStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ReplyStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ReplyStatusPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ReplyStatus ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ReplyStatusPlugin_get_programs(void);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct Reply
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct Reply)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * Reply must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct Reply.
    */
    typedef  class Reply ReplyKeyHolder;

    #define ReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern Reply*
    ReplyPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern Reply*
    ReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Reply*
    ReplyPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ReplyPluginSupport_copy_data(
        Reply *out,
        const Reply *in);

    NDDSUSERDllExport extern void 
    ReplyPluginSupport_destroy_data_w_params(
        Reply *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ReplyPluginSupport_destroy_data_ex(
        Reply *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ReplyPluginSupport_destroy_data(
        Reply *sample);

    NDDSUSERDllExport extern void 
    ReplyPluginSupport_print_data(
        const Reply *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern Reply*
    ReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern Reply*
    ReplyPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ReplyPluginSupport_destroy_key_ex(
        ReplyKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ReplyPluginSupport_destroy_key(
        ReplyKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ReplyPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ReplyPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ReplyPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ReplyPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ReplyPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        Reply *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ReplyPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        Reply *out,
        const Reply *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ReplyPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const Reply *sample); 

    NDDSUSERDllExport extern RTIBool
    ReplyPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const Reply *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ReplyPlugin_deserialize_from_cdr_buffer(
        Reply *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ReplyPlugin_data_to_string(
        const Reply *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ReplyPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ReplyPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ReplyPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ReplyPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ReplyPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        Reply ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ReplyPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ReplyKeyHolder *key, 
        const Reply *instance);

    NDDSUSERDllExport extern RTIBool 
    ReplyPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        Reply *instance, 
        const ReplyKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ReplyPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ReplyPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ReplyPlugin_new(void);

    NDDSUSERDllExport extern void
    ReplyPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct EnergyStartStopRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct EnergyStartStopRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * EnergyStartStopRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct EnergyStartStopRequest.
    */
    typedef  class EnergyStartStopRequest EnergyStartStopRequestKeyHolder;

    #define EnergyStartStopRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define EnergyStartStopRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define EnergyStartStopRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define EnergyStartStopRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define EnergyStartStopRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define EnergyStartStopRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define EnergyStartStopRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern EnergyStartStopRequest*
    EnergyStartStopRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern EnergyStartStopRequest*
    EnergyStartStopRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EnergyStartStopRequest*
    EnergyStartStopRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopRequestPluginSupport_copy_data(
        EnergyStartStopRequest *out,
        const EnergyStartStopRequest *in);

    NDDSUSERDllExport extern void 
    EnergyStartStopRequestPluginSupport_destroy_data_w_params(
        EnergyStartStopRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    EnergyStartStopRequestPluginSupport_destroy_data_ex(
        EnergyStartStopRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EnergyStartStopRequestPluginSupport_destroy_data(
        EnergyStartStopRequest *sample);

    NDDSUSERDllExport extern void 
    EnergyStartStopRequestPluginSupport_print_data(
        const EnergyStartStopRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern EnergyStartStopRequest*
    EnergyStartStopRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EnergyStartStopRequest*
    EnergyStartStopRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    EnergyStartStopRequestPluginSupport_destroy_key_ex(
        EnergyStartStopRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EnergyStartStopRequestPluginSupport_destroy_key(
        EnergyStartStopRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    EnergyStartStopRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    EnergyStartStopRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    EnergyStartStopRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    EnergyStartStopRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    EnergyStartStopRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStartStopRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStartStopRequest *out,
        const EnergyStartStopRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    EnergyStartStopRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const EnergyStartStopRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    EnergyStartStopRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const EnergyStartStopRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    EnergyStartStopRequestPlugin_deserialize_from_cdr_buffer(
        EnergyStartStopRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    EnergyStartStopRequestPlugin_data_to_string(
        const EnergyStartStopRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    EnergyStartStopRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    EnergyStartStopRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    EnergyStartStopRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    EnergyStartStopRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStartStopRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStartStopRequestKeyHolder *key, 
        const EnergyStartStopRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStartStopRequest *instance, 
        const EnergyStartStopRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * EnergyStartStopRequestPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    EnergyStartStopRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    EnergyStartStopRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct EnergyStartStopState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct EnergyStartStopState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * EnergyStartStopState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct EnergyStartStopState.
    */
    typedef  class EnergyStartStopState EnergyStartStopStateKeyHolder;

    #define EnergyStartStopStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define EnergyStartStopStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define EnergyStartStopStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define EnergyStartStopStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define EnergyStartStopStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define EnergyStartStopStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define EnergyStartStopStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern EnergyStartStopState*
    EnergyStartStopStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern EnergyStartStopState*
    EnergyStartStopStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EnergyStartStopState*
    EnergyStartStopStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopStatePluginSupport_copy_data(
        EnergyStartStopState *out,
        const EnergyStartStopState *in);

    NDDSUSERDllExport extern void 
    EnergyStartStopStatePluginSupport_destroy_data_w_params(
        EnergyStartStopState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    EnergyStartStopStatePluginSupport_destroy_data_ex(
        EnergyStartStopState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EnergyStartStopStatePluginSupport_destroy_data(
        EnergyStartStopState *sample);

    NDDSUSERDllExport extern void 
    EnergyStartStopStatePluginSupport_print_data(
        const EnergyStartStopState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern EnergyStartStopState*
    EnergyStartStopStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern EnergyStartStopState*
    EnergyStartStopStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    EnergyStartStopStatePluginSupport_destroy_key_ex(
        EnergyStartStopStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    EnergyStartStopStatePluginSupport_destroy_key(
        EnergyStartStopStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    EnergyStartStopStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    EnergyStartStopStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    EnergyStartStopStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    EnergyStartStopStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    EnergyStartStopStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStartStopState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStartStopState *out,
        const EnergyStartStopState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    EnergyStartStopStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const EnergyStartStopState *sample); 

    NDDSUSERDllExport extern RTIBool
    EnergyStartStopStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const EnergyStartStopState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    EnergyStartStopStatePlugin_deserialize_from_cdr_buffer(
        EnergyStartStopState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    EnergyStartStopStatePlugin_data_to_string(
        const EnergyStartStopState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    EnergyStartStopStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    EnergyStartStopStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    EnergyStartStopStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    EnergyStartStopStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStartStopState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStartStopStateKeyHolder *key, 
        const EnergyStartStopState *instance);

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        EnergyStartStopState *instance, 
        const EnergyStartStopStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    EnergyStartStopStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * EnergyStartStopStatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    EnergyStartStopStatePlugin_new(void);

    NDDSUSERDllExport extern void
    EnergyStartStopStatePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ActiveMicrogridControllerState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ActiveMicrogridControllerState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ActiveMicrogridControllerState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ActiveMicrogridControllerState.
    */
    typedef  class ActiveMicrogridControllerState ActiveMicrogridControllerStateKeyHolder;

    #define ActiveMicrogridControllerStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ActiveMicrogridControllerStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ActiveMicrogridControllerStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ActiveMicrogridControllerStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ActiveMicrogridControllerStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ActiveMicrogridControllerStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ActiveMicrogridControllerStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ActiveMicrogridControllerState*
    ActiveMicrogridControllerStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ActiveMicrogridControllerState*
    ActiveMicrogridControllerStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ActiveMicrogridControllerState*
    ActiveMicrogridControllerStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ActiveMicrogridControllerStatePluginSupport_copy_data(
        ActiveMicrogridControllerState *out,
        const ActiveMicrogridControllerState *in);

    NDDSUSERDllExport extern void 
    ActiveMicrogridControllerStatePluginSupport_destroy_data_w_params(
        ActiveMicrogridControllerState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ActiveMicrogridControllerStatePluginSupport_destroy_data_ex(
        ActiveMicrogridControllerState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ActiveMicrogridControllerStatePluginSupport_destroy_data(
        ActiveMicrogridControllerState *sample);

    NDDSUSERDllExport extern void 
    ActiveMicrogridControllerStatePluginSupport_print_data(
        const ActiveMicrogridControllerState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern ActiveMicrogridControllerState*
    ActiveMicrogridControllerStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ActiveMicrogridControllerState*
    ActiveMicrogridControllerStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ActiveMicrogridControllerStatePluginSupport_destroy_key_ex(
        ActiveMicrogridControllerStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ActiveMicrogridControllerStatePluginSupport_destroy_key(
        ActiveMicrogridControllerStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ActiveMicrogridControllerStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ActiveMicrogridControllerStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ActiveMicrogridControllerStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ActiveMicrogridControllerStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ActiveMicrogridControllerStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ActiveMicrogridControllerState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ActiveMicrogridControllerStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ActiveMicrogridControllerState *out,
        const ActiveMicrogridControllerState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ActiveMicrogridControllerStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ActiveMicrogridControllerState *sample); 

    NDDSUSERDllExport extern RTIBool
    ActiveMicrogridControllerStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ActiveMicrogridControllerState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ActiveMicrogridControllerStatePlugin_deserialize_from_cdr_buffer(
        ActiveMicrogridControllerState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ActiveMicrogridControllerStatePlugin_data_to_string(
        const ActiveMicrogridControllerState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ActiveMicrogridControllerStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ActiveMicrogridControllerStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ActiveMicrogridControllerStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ActiveMicrogridControllerStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ActiveMicrogridControllerStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ActiveMicrogridControllerState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ActiveMicrogridControllerStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ActiveMicrogridControllerStateKeyHolder *key, 
        const ActiveMicrogridControllerState *instance);

    NDDSUSERDllExport extern RTIBool 
    ActiveMicrogridControllerStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        ActiveMicrogridControllerState *instance, 
        const ActiveMicrogridControllerStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ActiveMicrogridControllerStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ActiveMicrogridControllerStatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ActiveMicrogridControllerStatePlugin_new(void);

    NDDSUSERDllExport extern void
    ActiveMicrogridControllerStatePlugin_delete(struct PRESTypePlugin *);

    namespace ac {

        #define PhaseAngleSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PhaseAngleSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PhaseAngleSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PhaseAngleSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PhaseAngleSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PhaseAngleSequence*
        PhaseAngleSequencePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PhaseAngleSequence*
        PhaseAngleSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PhaseAngleSequence*
        PhaseAngleSequencePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PhaseAngleSequencePluginSupport_copy_data(
            PhaseAngleSequence *out,
            const PhaseAngleSequence *in);

        NDDSUSERDllExport extern void 
        PhaseAngleSequencePluginSupport_destroy_data_w_params(
            PhaseAngleSequence *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PhaseAngleSequencePluginSupport_destroy_data_ex(
            PhaseAngleSequence *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PhaseAngleSequencePluginSupport_destroy_data(
            PhaseAngleSequence *sample);

        NDDSUSERDllExport extern void 
        PhaseAngleSequencePluginSupport_print_data(
            const PhaseAngleSequence *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        PhaseAngleSequencePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PhaseAngleSequence *out,
            const PhaseAngleSequence *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        PhaseAngleSequencePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PhaseAngleSequencePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PhaseAngleSequencePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PhaseAngleSequencePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define PowerLineMeasurementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PowerLineMeasurementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PowerLineMeasurementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PowerLineMeasurementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PowerLineMeasurementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PowerLineMeasurement*
        PowerLineMeasurementPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PowerLineMeasurement*
        PowerLineMeasurementPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PowerLineMeasurement*
        PowerLineMeasurementPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PowerLineMeasurementPluginSupport_copy_data(
            PowerLineMeasurement *out,
            const PowerLineMeasurement *in);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementPluginSupport_destroy_data_w_params(
            PowerLineMeasurement *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementPluginSupport_destroy_data_ex(
            PowerLineMeasurement *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementPluginSupport_destroy_data(
            PowerLineMeasurement *sample);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementPluginSupport_print_data(
            const PowerLineMeasurement *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        PowerLineMeasurementPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PowerLineMeasurement *out,
            const PowerLineMeasurement *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PowerLineMeasurementPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PowerLineMeasurement *sample); 

        NDDSUSERDllExport extern RTIBool
        PowerLineMeasurementPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PowerLineMeasurement *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        PowerLineMeasurementPlugin_deserialize_from_cdr_buffer(
            PowerLineMeasurement *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PowerLineMeasurementPlugin_data_to_string(
            const PowerLineMeasurement *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PowerLineMeasurementPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PowerLineMeasurementPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PowerLineMeasurementPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PowerLineMeasurementPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PowerLineMeasurementPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PowerLineMeasurement ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * PowerLineMeasurementPlugin_get_programs(void);

        #define PowerLineMeasurementSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PowerLineMeasurementSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PowerLineMeasurementSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PowerLineMeasurementSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PowerLineMeasurementSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PowerLineMeasurementSequence*
        PowerLineMeasurementSequencePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PowerLineMeasurementSequence*
        PowerLineMeasurementSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PowerLineMeasurementSequence*
        PowerLineMeasurementSequencePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PowerLineMeasurementSequencePluginSupport_copy_data(
            PowerLineMeasurementSequence *out,
            const PowerLineMeasurementSequence *in);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementSequencePluginSupport_destroy_data_w_params(
            PowerLineMeasurementSequence *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementSequencePluginSupport_destroy_data_ex(
            PowerLineMeasurementSequence *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementSequencePluginSupport_destroy_data(
            PowerLineMeasurementSequence *sample);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementSequencePluginSupport_print_data(
            const PowerLineMeasurementSequence *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        PowerLineMeasurementSequencePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PowerLineMeasurementSequence *out,
            const PowerLineMeasurementSequence *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        PowerLineMeasurementSequencePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PowerLineMeasurementSequencePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PowerLineMeasurementSequencePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PowerLineMeasurementSequencePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define PowerPortMeasurementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PowerPortMeasurementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PowerPortMeasurementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PowerPortMeasurementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PowerPortMeasurementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PowerPortMeasurement*
        PowerPortMeasurementPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PowerPortMeasurement*
        PowerPortMeasurementPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PowerPortMeasurement*
        PowerPortMeasurementPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PowerPortMeasurementPluginSupport_copy_data(
            PowerPortMeasurement *out,
            const PowerPortMeasurement *in);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementPluginSupport_destroy_data_w_params(
            PowerPortMeasurement *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementPluginSupport_destroy_data_ex(
            PowerPortMeasurement *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementPluginSupport_destroy_data(
            PowerPortMeasurement *sample);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementPluginSupport_print_data(
            const PowerPortMeasurement *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        PowerPortMeasurementPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PowerPortMeasurement *out,
            const PowerPortMeasurement *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PowerPortMeasurementPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PowerPortMeasurement *sample); 

        NDDSUSERDllExport extern RTIBool
        PowerPortMeasurementPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PowerPortMeasurement *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        PowerPortMeasurementPlugin_deserialize_from_cdr_buffer(
            PowerPortMeasurement *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PowerPortMeasurementPlugin_data_to_string(
            const PowerPortMeasurement *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PowerPortMeasurementPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PowerPortMeasurementPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PowerPortMeasurementPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PowerPortMeasurementPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PowerPortMeasurementPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PowerPortMeasurement ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * PowerPortMeasurementPlugin_get_programs(void);

        #define PowerPortMeasurementSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PowerPortMeasurementSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PowerPortMeasurementSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PowerPortMeasurementSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PowerPortMeasurementSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PowerPortMeasurementSequence*
        PowerPortMeasurementSequencePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PowerPortMeasurementSequence*
        PowerPortMeasurementSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PowerPortMeasurementSequence*
        PowerPortMeasurementSequencePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PowerPortMeasurementSequencePluginSupport_copy_data(
            PowerPortMeasurementSequence *out,
            const PowerPortMeasurementSequence *in);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementSequencePluginSupport_destroy_data_w_params(
            PowerPortMeasurementSequence *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementSequencePluginSupport_destroy_data_ex(
            PowerPortMeasurementSequence *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementSequencePluginSupport_destroy_data(
            PowerPortMeasurementSequence *sample);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementSequencePluginSupport_print_data(
            const PowerPortMeasurementSequence *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        PowerPortMeasurementSequencePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PowerPortMeasurementSequence *out,
            const PowerPortMeasurementSequence *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        PowerPortMeasurementSequencePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PowerPortMeasurementSequencePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PowerPortMeasurementSequencePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PowerPortMeasurementSequencePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct MeasurementUpdate
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct MeasurementUpdate)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * MeasurementUpdate must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct MeasurementUpdate.
        */
        typedef  class MeasurementUpdate MeasurementUpdateKeyHolder;

        #define MeasurementUpdatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define MeasurementUpdatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define MeasurementUpdatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define MeasurementUpdatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define MeasurementUpdatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define MeasurementUpdatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define MeasurementUpdatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern MeasurementUpdate*
        MeasurementUpdatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern MeasurementUpdate*
        MeasurementUpdatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern MeasurementUpdate*
        MeasurementUpdatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        MeasurementUpdatePluginSupport_copy_data(
            MeasurementUpdate *out,
            const MeasurementUpdate *in);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePluginSupport_destroy_data_w_params(
            MeasurementUpdate *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePluginSupport_destroy_data_ex(
            MeasurementUpdate *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePluginSupport_destroy_data(
            MeasurementUpdate *sample);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePluginSupport_print_data(
            const MeasurementUpdate *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern MeasurementUpdate*
        MeasurementUpdatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern MeasurementUpdate*
        MeasurementUpdatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePluginSupport_destroy_key_ex(
            MeasurementUpdateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePluginSupport_destroy_key(
            MeasurementUpdateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        MeasurementUpdatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        MeasurementUpdatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        MeasurementUpdatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            MeasurementUpdate *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        MeasurementUpdatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            MeasurementUpdate *out,
            const MeasurementUpdate *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        MeasurementUpdatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const MeasurementUpdate *sample); 

        NDDSUSERDllExport extern RTIBool
        MeasurementUpdatePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const MeasurementUpdate *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        MeasurementUpdatePlugin_deserialize_from_cdr_buffer(
            MeasurementUpdate *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        MeasurementUpdatePlugin_data_to_string(
            const MeasurementUpdate *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        MeasurementUpdatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        MeasurementUpdatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        MeasurementUpdatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        MeasurementUpdatePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        MeasurementUpdatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            MeasurementUpdate ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        MeasurementUpdatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            MeasurementUpdateKeyHolder *key, 
            const MeasurementUpdate *instance);

        NDDSUSERDllExport extern RTIBool 
        MeasurementUpdatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            MeasurementUpdate *instance, 
            const MeasurementUpdateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        MeasurementUpdatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * MeasurementUpdatePlugin_get_programs(void);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        MeasurementUpdatePlugin_new(void);

        NDDSUSERDllExport extern void
        MeasurementUpdatePlugin_delete(struct PRESTypePlugin *);

        #define LoadSharingParametersPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define LoadSharingParametersPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define LoadSharingParametersPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define LoadSharingParametersPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define LoadSharingParametersPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern LoadSharingParameters*
        LoadSharingParametersPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern LoadSharingParameters*
        LoadSharingParametersPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LoadSharingParameters*
        LoadSharingParametersPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingParametersPluginSupport_copy_data(
            LoadSharingParameters *out,
            const LoadSharingParameters *in);

        NDDSUSERDllExport extern void 
        LoadSharingParametersPluginSupport_destroy_data_w_params(
            LoadSharingParameters *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        LoadSharingParametersPluginSupport_destroy_data_ex(
            LoadSharingParameters *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LoadSharingParametersPluginSupport_destroy_data(
            LoadSharingParameters *sample);

        NDDSUSERDllExport extern void 
        LoadSharingParametersPluginSupport_print_data(
            const LoadSharingParameters *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        LoadSharingParametersPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingParameters *out,
            const LoadSharingParameters *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        LoadSharingParametersPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const LoadSharingParameters *sample); 

        NDDSUSERDllExport extern RTIBool
        LoadSharingParametersPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const LoadSharingParameters *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        LoadSharingParametersPlugin_deserialize_from_cdr_buffer(
            LoadSharingParameters *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        LoadSharingParametersPlugin_data_to_string(
            const LoadSharingParameters *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        LoadSharingParametersPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        LoadSharingParametersPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingParametersPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingParametersPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingParametersPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingParameters ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * LoadSharingParametersPlugin_get_programs(void);

        #define LoadSharingParameterSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define LoadSharingParameterSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define LoadSharingParameterSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define LoadSharingParameterSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define LoadSharingParameterSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern LoadSharingParameterSequence*
        LoadSharingParameterSequencePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern LoadSharingParameterSequence*
        LoadSharingParameterSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LoadSharingParameterSequence*
        LoadSharingParameterSequencePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingParameterSequencePluginSupport_copy_data(
            LoadSharingParameterSequence *out,
            const LoadSharingParameterSequence *in);

        NDDSUSERDllExport extern void 
        LoadSharingParameterSequencePluginSupport_destroy_data_w_params(
            LoadSharingParameterSequence *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        LoadSharingParameterSequencePluginSupport_destroy_data_ex(
            LoadSharingParameterSequence *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LoadSharingParameterSequencePluginSupport_destroy_data(
            LoadSharingParameterSequence *sample);

        NDDSUSERDllExport extern void 
        LoadSharingParameterSequencePluginSupport_print_data(
            const LoadSharingParameterSequence *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        LoadSharingParameterSequencePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingParameterSequence *out,
            const LoadSharingParameterSequence *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        LoadSharingParameterSequencePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        LoadSharingParameterSequencePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingParameterSequencePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingParameterSequencePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct LoadSharingRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct LoadSharingRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * LoadSharingRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct LoadSharingRequest.
        */
        typedef  class LoadSharingRequest LoadSharingRequestKeyHolder;

        #define LoadSharingRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define LoadSharingRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define LoadSharingRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define LoadSharingRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define LoadSharingRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define LoadSharingRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define LoadSharingRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern LoadSharingRequest*
        LoadSharingRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern LoadSharingRequest*
        LoadSharingRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LoadSharingRequest*
        LoadSharingRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingRequestPluginSupport_copy_data(
            LoadSharingRequest *out,
            const LoadSharingRequest *in);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPluginSupport_destroy_data_w_params(
            LoadSharingRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPluginSupport_destroy_data_ex(
            LoadSharingRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPluginSupport_destroy_data(
            LoadSharingRequest *sample);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPluginSupport_print_data(
            const LoadSharingRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern LoadSharingRequest*
        LoadSharingRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LoadSharingRequest*
        LoadSharingRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPluginSupport_destroy_key_ex(
            LoadSharingRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPluginSupport_destroy_key(
            LoadSharingRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        LoadSharingRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        LoadSharingRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        LoadSharingRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        LoadSharingRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingRequest *out,
            const LoadSharingRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        LoadSharingRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const LoadSharingRequest *sample); 

        NDDSUSERDllExport extern RTIBool
        LoadSharingRequestPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const LoadSharingRequest *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        LoadSharingRequestPlugin_deserialize_from_cdr_buffer(
            LoadSharingRequest *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        LoadSharingRequestPlugin_data_to_string(
            const LoadSharingRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        LoadSharingRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        LoadSharingRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingRequestPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingRequestKeyHolder *key, 
            const LoadSharingRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingRequest *instance, 
            const LoadSharingRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * LoadSharingRequestPlugin_get_programs(void);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        LoadSharingRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        LoadSharingRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct LoadSharingState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct LoadSharingState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * LoadSharingState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct LoadSharingState.
        */
        typedef  class LoadSharingState LoadSharingStateKeyHolder;

        #define LoadSharingStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define LoadSharingStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define LoadSharingStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define LoadSharingStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define LoadSharingStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define LoadSharingStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define LoadSharingStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern LoadSharingState*
        LoadSharingStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern LoadSharingState*
        LoadSharingStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LoadSharingState*
        LoadSharingStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingStatePluginSupport_copy_data(
            LoadSharingState *out,
            const LoadSharingState *in);

        NDDSUSERDllExport extern void 
        LoadSharingStatePluginSupport_destroy_data_w_params(
            LoadSharingState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        LoadSharingStatePluginSupport_destroy_data_ex(
            LoadSharingState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LoadSharingStatePluginSupport_destroy_data(
            LoadSharingState *sample);

        NDDSUSERDllExport extern void 
        LoadSharingStatePluginSupport_print_data(
            const LoadSharingState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern LoadSharingState*
        LoadSharingStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LoadSharingState*
        LoadSharingStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        LoadSharingStatePluginSupport_destroy_key_ex(
            LoadSharingStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LoadSharingStatePluginSupport_destroy_key(
            LoadSharingStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        LoadSharingStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        LoadSharingStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        LoadSharingStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        LoadSharingStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        LoadSharingStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        LoadSharingStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingState *out,
            const LoadSharingState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        LoadSharingStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const LoadSharingState *sample); 

        NDDSUSERDllExport extern RTIBool
        LoadSharingStatePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const LoadSharingState *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        LoadSharingStatePlugin_deserialize_from_cdr_buffer(
            LoadSharingState *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        LoadSharingStatePlugin_data_to_string(
            const LoadSharingState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        LoadSharingStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        LoadSharingStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingStatePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingStateKeyHolder *key, 
            const LoadSharingState *instance);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingState *instance, 
            const LoadSharingStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * LoadSharingStatePlugin_get_programs(void);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        LoadSharingStatePlugin_new(void);

        NDDSUSERDllExport extern void
        LoadSharingStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace ac  */
    namespace dc {

        #define PowerLineMeasurementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PowerLineMeasurementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PowerLineMeasurementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PowerLineMeasurementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PowerLineMeasurementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PowerLineMeasurement*
        PowerLineMeasurementPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PowerLineMeasurement*
        PowerLineMeasurementPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PowerLineMeasurement*
        PowerLineMeasurementPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PowerLineMeasurementPluginSupport_copy_data(
            PowerLineMeasurement *out,
            const PowerLineMeasurement *in);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementPluginSupport_destroy_data_w_params(
            PowerLineMeasurement *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementPluginSupport_destroy_data_ex(
            PowerLineMeasurement *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementPluginSupport_destroy_data(
            PowerLineMeasurement *sample);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementPluginSupport_print_data(
            const PowerLineMeasurement *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        PowerLineMeasurementPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PowerLineMeasurement *out,
            const PowerLineMeasurement *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PowerLineMeasurementPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PowerLineMeasurement *sample); 

        NDDSUSERDllExport extern RTIBool
        PowerLineMeasurementPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PowerLineMeasurement *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        PowerLineMeasurementPlugin_deserialize_from_cdr_buffer(
            PowerLineMeasurement *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PowerLineMeasurementPlugin_data_to_string(
            const PowerLineMeasurement *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PowerLineMeasurementPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PowerLineMeasurementPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PowerLineMeasurementPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PowerLineMeasurementPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PowerLineMeasurementPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PowerLineMeasurement ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * PowerLineMeasurementPlugin_get_programs(void);

        #define PowerLineMeasurementSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PowerLineMeasurementSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PowerLineMeasurementSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PowerLineMeasurementSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PowerLineMeasurementSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PowerLineMeasurementSequence*
        PowerLineMeasurementSequencePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PowerLineMeasurementSequence*
        PowerLineMeasurementSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PowerLineMeasurementSequence*
        PowerLineMeasurementSequencePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PowerLineMeasurementSequencePluginSupport_copy_data(
            PowerLineMeasurementSequence *out,
            const PowerLineMeasurementSequence *in);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementSequencePluginSupport_destroy_data_w_params(
            PowerLineMeasurementSequence *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementSequencePluginSupport_destroy_data_ex(
            PowerLineMeasurementSequence *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementSequencePluginSupport_destroy_data(
            PowerLineMeasurementSequence *sample);

        NDDSUSERDllExport extern void 
        PowerLineMeasurementSequencePluginSupport_print_data(
            const PowerLineMeasurementSequence *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        PowerLineMeasurementSequencePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PowerLineMeasurementSequence *out,
            const PowerLineMeasurementSequence *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        PowerLineMeasurementSequencePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PowerLineMeasurementSequencePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PowerLineMeasurementSequencePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PowerLineMeasurementSequencePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        #define PowerPortMeasurementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PowerPortMeasurementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PowerPortMeasurementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PowerPortMeasurementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PowerPortMeasurementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PowerPortMeasurement*
        PowerPortMeasurementPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PowerPortMeasurement*
        PowerPortMeasurementPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PowerPortMeasurement*
        PowerPortMeasurementPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PowerPortMeasurementPluginSupport_copy_data(
            PowerPortMeasurement *out,
            const PowerPortMeasurement *in);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementPluginSupport_destroy_data_w_params(
            PowerPortMeasurement *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementPluginSupport_destroy_data_ex(
            PowerPortMeasurement *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementPluginSupport_destroy_data(
            PowerPortMeasurement *sample);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementPluginSupport_print_data(
            const PowerPortMeasurement *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        PowerPortMeasurementPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PowerPortMeasurement *out,
            const PowerPortMeasurement *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        PowerPortMeasurementPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const PowerPortMeasurement *sample); 

        NDDSUSERDllExport extern RTIBool
        PowerPortMeasurementPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const PowerPortMeasurement *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        PowerPortMeasurementPlugin_deserialize_from_cdr_buffer(
            PowerPortMeasurement *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        PowerPortMeasurementPlugin_data_to_string(
            const PowerPortMeasurement *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        PowerPortMeasurementPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PowerPortMeasurementPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PowerPortMeasurementPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PowerPortMeasurementPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        PowerPortMeasurementPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            PowerPortMeasurement ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * PowerPortMeasurementPlugin_get_programs(void);

        #define PowerPortMeasurementSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define PowerPortMeasurementSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define PowerPortMeasurementSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define PowerPortMeasurementSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define PowerPortMeasurementSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PowerPortMeasurementSequence*
        PowerPortMeasurementSequencePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern PowerPortMeasurementSequence*
        PowerPortMeasurementSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern PowerPortMeasurementSequence*
        PowerPortMeasurementSequencePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        PowerPortMeasurementSequencePluginSupport_copy_data(
            PowerPortMeasurementSequence *out,
            const PowerPortMeasurementSequence *in);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementSequencePluginSupport_destroy_data_w_params(
            PowerPortMeasurementSequence *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementSequencePluginSupport_destroy_data_ex(
            PowerPortMeasurementSequence *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementSequencePluginSupport_destroy_data(
            PowerPortMeasurementSequence *sample);

        NDDSUSERDllExport extern void 
        PowerPortMeasurementSequencePluginSupport_print_data(
            const PowerPortMeasurementSequence *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        PowerPortMeasurementSequencePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            PowerPortMeasurementSequence *out,
            const PowerPortMeasurementSequence *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        PowerPortMeasurementSequencePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        PowerPortMeasurementSequencePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        PowerPortMeasurementSequencePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        PowerPortMeasurementSequencePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct MeasurementUpdate
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct MeasurementUpdate)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * MeasurementUpdate must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct MeasurementUpdate.
        */
        typedef  class MeasurementUpdate MeasurementUpdateKeyHolder;

        #define MeasurementUpdatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define MeasurementUpdatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define MeasurementUpdatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define MeasurementUpdatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define MeasurementUpdatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define MeasurementUpdatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define MeasurementUpdatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern MeasurementUpdate*
        MeasurementUpdatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern MeasurementUpdate*
        MeasurementUpdatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern MeasurementUpdate*
        MeasurementUpdatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        MeasurementUpdatePluginSupport_copy_data(
            MeasurementUpdate *out,
            const MeasurementUpdate *in);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePluginSupport_destroy_data_w_params(
            MeasurementUpdate *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePluginSupport_destroy_data_ex(
            MeasurementUpdate *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePluginSupport_destroy_data(
            MeasurementUpdate *sample);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePluginSupport_print_data(
            const MeasurementUpdate *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern MeasurementUpdate*
        MeasurementUpdatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern MeasurementUpdate*
        MeasurementUpdatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePluginSupport_destroy_key_ex(
            MeasurementUpdateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePluginSupport_destroy_key(
            MeasurementUpdateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        MeasurementUpdatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        MeasurementUpdatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        MeasurementUpdatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        MeasurementUpdatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            MeasurementUpdate *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        MeasurementUpdatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            MeasurementUpdate *out,
            const MeasurementUpdate *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        MeasurementUpdatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const MeasurementUpdate *sample); 

        NDDSUSERDllExport extern RTIBool
        MeasurementUpdatePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const MeasurementUpdate *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        MeasurementUpdatePlugin_deserialize_from_cdr_buffer(
            MeasurementUpdate *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        MeasurementUpdatePlugin_data_to_string(
            const MeasurementUpdate *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        MeasurementUpdatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        MeasurementUpdatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        MeasurementUpdatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        MeasurementUpdatePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        MeasurementUpdatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            MeasurementUpdate ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        MeasurementUpdatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            MeasurementUpdateKeyHolder *key, 
            const MeasurementUpdate *instance);

        NDDSUSERDllExport extern RTIBool 
        MeasurementUpdatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            MeasurementUpdate *instance, 
            const MeasurementUpdateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        MeasurementUpdatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * MeasurementUpdatePlugin_get_programs(void);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        MeasurementUpdatePlugin_new(void);

        NDDSUSERDllExport extern void
        MeasurementUpdatePlugin_delete(struct PRESTypePlugin *);

        #define LoadSharingParametersPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define LoadSharingParametersPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define LoadSharingParametersPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define LoadSharingParametersPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define LoadSharingParametersPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern LoadSharingParameters*
        LoadSharingParametersPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern LoadSharingParameters*
        LoadSharingParametersPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LoadSharingParameters*
        LoadSharingParametersPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingParametersPluginSupport_copy_data(
            LoadSharingParameters *out,
            const LoadSharingParameters *in);

        NDDSUSERDllExport extern void 
        LoadSharingParametersPluginSupport_destroy_data_w_params(
            LoadSharingParameters *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        LoadSharingParametersPluginSupport_destroy_data_ex(
            LoadSharingParameters *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LoadSharingParametersPluginSupport_destroy_data(
            LoadSharingParameters *sample);

        NDDSUSERDllExport extern void 
        LoadSharingParametersPluginSupport_print_data(
            const LoadSharingParameters *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        LoadSharingParametersPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingParameters *out,
            const LoadSharingParameters *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        LoadSharingParametersPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const LoadSharingParameters *sample); 

        NDDSUSERDllExport extern RTIBool
        LoadSharingParametersPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const LoadSharingParameters *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        LoadSharingParametersPlugin_deserialize_from_cdr_buffer(
            LoadSharingParameters *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        LoadSharingParametersPlugin_data_to_string(
            const LoadSharingParameters *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        LoadSharingParametersPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        LoadSharingParametersPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingParametersPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingParametersPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingParametersPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingParameters ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * LoadSharingParametersPlugin_get_programs(void);

        #define LoadSharingParameterSequencePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define LoadSharingParameterSequencePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define LoadSharingParameterSequencePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define LoadSharingParameterSequencePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define LoadSharingParameterSequencePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern LoadSharingParameterSequence*
        LoadSharingParameterSequencePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern LoadSharingParameterSequence*
        LoadSharingParameterSequencePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LoadSharingParameterSequence*
        LoadSharingParameterSequencePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingParameterSequencePluginSupport_copy_data(
            LoadSharingParameterSequence *out,
            const LoadSharingParameterSequence *in);

        NDDSUSERDllExport extern void 
        LoadSharingParameterSequencePluginSupport_destroy_data_w_params(
            LoadSharingParameterSequence *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        LoadSharingParameterSequencePluginSupport_destroy_data_ex(
            LoadSharingParameterSequence *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LoadSharingParameterSequencePluginSupport_destroy_data(
            LoadSharingParameterSequence *sample);

        NDDSUSERDllExport extern void 
        LoadSharingParameterSequencePluginSupport_print_data(
            const LoadSharingParameterSequence *sample,
            const char *desc,
            unsigned int indent);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool 
        LoadSharingParameterSequencePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingParameterSequence *out,
            const LoadSharingParameterSequence *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern unsigned int 
        LoadSharingParameterSequencePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        LoadSharingParameterSequencePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingParameterSequencePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingParameterSequencePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct LoadSharingRequest
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct LoadSharingRequest)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * LoadSharingRequest must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct LoadSharingRequest.
        */
        typedef  class LoadSharingRequest LoadSharingRequestKeyHolder;

        #define LoadSharingRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define LoadSharingRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define LoadSharingRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define LoadSharingRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define LoadSharingRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define LoadSharingRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define LoadSharingRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern LoadSharingRequest*
        LoadSharingRequestPluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern LoadSharingRequest*
        LoadSharingRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LoadSharingRequest*
        LoadSharingRequestPluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingRequestPluginSupport_copy_data(
            LoadSharingRequest *out,
            const LoadSharingRequest *in);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPluginSupport_destroy_data_w_params(
            LoadSharingRequest *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPluginSupport_destroy_data_ex(
            LoadSharingRequest *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPluginSupport_destroy_data(
            LoadSharingRequest *sample);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPluginSupport_print_data(
            const LoadSharingRequest *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern LoadSharingRequest*
        LoadSharingRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LoadSharingRequest*
        LoadSharingRequestPluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPluginSupport_destroy_key_ex(
            LoadSharingRequestKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPluginSupport_destroy_key(
            LoadSharingRequestKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        LoadSharingRequestPlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        LoadSharingRequestPlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        LoadSharingRequestPlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        LoadSharingRequestPlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingRequest *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        LoadSharingRequestPlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingRequest *out,
            const LoadSharingRequest *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        LoadSharingRequestPlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const LoadSharingRequest *sample); 

        NDDSUSERDllExport extern RTIBool
        LoadSharingRequestPlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const LoadSharingRequest *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        LoadSharingRequestPlugin_deserialize_from_cdr_buffer(
            LoadSharingRequest *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        LoadSharingRequestPlugin_data_to_string(
            const LoadSharingRequest *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        LoadSharingRequestPlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        LoadSharingRequestPlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingRequestPlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingRequestPlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingRequestPlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingRequest ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingRequestPlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingRequestKeyHolder *key, 
            const LoadSharingRequest *instance);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingRequestPlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingRequest *instance, 
            const LoadSharingRequestKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingRequestPlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * LoadSharingRequestPlugin_get_programs(void);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        LoadSharingRequestPlugin_new(void);

        NDDSUSERDllExport extern void
        LoadSharingRequestPlugin_delete(struct PRESTypePlugin *);

        /* The type used to store keys for instances of type struct
        * AnotherSimple.
        *
        * By default, this type is struct LoadSharingState
        * itself. However, if for some reason this choice is not practical for your
        * system (e.g. if sizeof(struct LoadSharingState)
        * is very large), you may redefine this typedef in terms of another type of
        * your choosing. HOWEVER, if you define the KeyHolder type to be something
        * other than struct AnotherSimple, the
        * following restriction applies: the key of struct
        * LoadSharingState must consist of a
        * single field of your redefined KeyHolder type and that field must be the
        * first field in struct LoadSharingState.
        */
        typedef  class LoadSharingState LoadSharingStateKeyHolder;

        #define LoadSharingStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

        #define LoadSharingStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
        #define LoadSharingStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

        #define LoadSharingStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
        #define LoadSharingStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

        #define LoadSharingStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
        #define LoadSharingStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

        /* --------------------------------------------------------------------------------------
        Support functions:
        * -------------------------------------------------------------------------------------- */

        NDDSUSERDllExport extern LoadSharingState*
        LoadSharingStatePluginSupport_create_data_w_params(
            const struct DDS_TypeAllocationParams_t * alloc_params);

        NDDSUSERDllExport extern LoadSharingState*
        LoadSharingStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LoadSharingState*
        LoadSharingStatePluginSupport_create_data(void);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingStatePluginSupport_copy_data(
            LoadSharingState *out,
            const LoadSharingState *in);

        NDDSUSERDllExport extern void 
        LoadSharingStatePluginSupport_destroy_data_w_params(
            LoadSharingState *sample,
            const struct DDS_TypeDeallocationParams_t * dealloc_params);

        NDDSUSERDllExport extern void 
        LoadSharingStatePluginSupport_destroy_data_ex(
            LoadSharingState *sample,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LoadSharingStatePluginSupport_destroy_data(
            LoadSharingState *sample);

        NDDSUSERDllExport extern void 
        LoadSharingStatePluginSupport_print_data(
            const LoadSharingState *sample,
            const char *desc,
            unsigned int indent);

        NDDSUSERDllExport extern LoadSharingState*
        LoadSharingStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

        NDDSUSERDllExport extern LoadSharingState*
        LoadSharingStatePluginSupport_create_key(void);

        NDDSUSERDllExport extern void 
        LoadSharingStatePluginSupport_destroy_key_ex(
            LoadSharingStateKeyHolder *key,RTIBool deallocate_pointers);

        NDDSUSERDllExport extern void 
        LoadSharingStatePluginSupport_destroy_key(
            LoadSharingStateKeyHolder *key);

        /* ----------------------------------------------------------------------------
        Callback functions:
        * ---------------------------------------------------------------------------- */

        NDDSUSERDllExport extern PRESTypePluginParticipantData 
        LoadSharingStatePlugin_on_participant_attached(
            void *registration_data, 
            const struct PRESTypePluginParticipantInfo *participant_info,
            RTIBool top_level_registration, 
            void *container_plugin_context,
            RTICdrTypeCode *typeCode);

        NDDSUSERDllExport extern void 
        LoadSharingStatePlugin_on_participant_detached(
            PRESTypePluginParticipantData participant_data);

        NDDSUSERDllExport extern PRESTypePluginEndpointData 
        LoadSharingStatePlugin_on_endpoint_attached(
            PRESTypePluginParticipantData participant_data,
            const struct PRESTypePluginEndpointInfo *endpoint_info,
            RTIBool top_level_registration, 
            void *container_plugin_context);

        NDDSUSERDllExport extern void 
        LoadSharingStatePlugin_on_endpoint_detached(
            PRESTypePluginEndpointData endpoint_data);

        NDDSUSERDllExport extern void    
        LoadSharingStatePlugin_return_sample(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingState *sample,
            void *handle);    

        NDDSUSERDllExport extern RTIBool 
        LoadSharingStatePlugin_copy_sample(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingState *out,
            const LoadSharingState *in);

        /* ----------------------------------------------------------------------------
        (De)Serialize functions:
        * ------------------------------------------------------------------------- */

        NDDSUSERDllExport extern RTIBool
        LoadSharingStatePlugin_serialize_to_cdr_buffer(
            char * buffer,
            unsigned int * length,
            const LoadSharingState *sample); 

        NDDSUSERDllExport extern RTIBool
        LoadSharingStatePlugin_serialize_to_cdr_buffer_ex(
            char *buffer,
            unsigned int *length,
            const LoadSharingState *sample,
            DDS_DataRepresentationId_t representation);

        NDDSUSERDllExport extern RTIBool
        LoadSharingStatePlugin_deserialize_from_cdr_buffer(
            LoadSharingState *sample,
            const char * buffer,
            unsigned int length);    
        #ifndef NDDS_STANDALONE_TYPE
        NDDSUSERDllExport extern DDS_ReturnCode_t
        LoadSharingStatePlugin_data_to_string(
            const LoadSharingState *sample,
            char *str,
            DDS_UnsignedLong *str_size, 
            const struct DDS_PrintFormatProperty *property);    
        #endif

        NDDSUSERDllExport extern unsigned int 
        LoadSharingStatePlugin_get_serialized_sample_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        /* --------------------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------------------- */
        NDDSUSERDllExport extern PRESTypePluginKeyKind 
        LoadSharingStatePlugin_get_key_kind(void);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingStatePlugin_get_serialized_key_max_size(
            PRESTypePluginEndpointData endpoint_data,
            RTIBool include_encapsulation,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern unsigned int 
        LoadSharingStatePlugin_get_serialized_key_max_size_for_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            RTIEncapsulationId encapsulation_id,
            unsigned int current_alignment);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingStatePlugin_deserialize_key(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingState ** sample,
            RTIBool * drop_sample,
            struct RTICdrStream *stream,
            RTIBool deserialize_encapsulation,
            RTIBool deserialize_key,
            void *endpoint_plugin_qos);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingStatePlugin_instance_to_key(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingStateKeyHolder *key, 
            const LoadSharingState *instance);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingStatePlugin_key_to_instance(
            PRESTypePluginEndpointData endpoint_data,
            LoadSharingState *instance, 
            const LoadSharingStateKeyHolder *key);

        NDDSUSERDllExport extern RTIBool 
        LoadSharingStatePlugin_serialized_sample_to_keyhash(
            PRESTypePluginEndpointData endpoint_data,
            struct RTICdrStream *stream, 
            DDS_KeyHash_t *keyhash,
            RTIBool deserialize_encapsulation,
            void *endpoint_plugin_qos); 

        NDDSUSERDllExport extern
        struct RTIXCdrInterpreterPrograms * LoadSharingStatePlugin_get_programs(void);

        /* Plugin Functions */
        NDDSUSERDllExport extern struct PRESTypePlugin*
        LoadSharingStatePlugin_new(void);

        NDDSUSERDllExport extern void
        LoadSharingStatePlugin_delete(struct PRESTypePlugin *);

    } /* namespace dc  */

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct StorageUpdate
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct StorageUpdate)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * StorageUpdate must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct StorageUpdate.
    */
    typedef  class StorageUpdate StorageUpdateKeyHolder;

    #define StorageUpdatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define StorageUpdatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define StorageUpdatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define StorageUpdatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define StorageUpdatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define StorageUpdatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define StorageUpdatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern StorageUpdate*
    StorageUpdatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern StorageUpdate*
    StorageUpdatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern StorageUpdate*
    StorageUpdatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    StorageUpdatePluginSupport_copy_data(
        StorageUpdate *out,
        const StorageUpdate *in);

    NDDSUSERDllExport extern void 
    StorageUpdatePluginSupport_destroy_data_w_params(
        StorageUpdate *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    StorageUpdatePluginSupport_destroy_data_ex(
        StorageUpdate *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    StorageUpdatePluginSupport_destroy_data(
        StorageUpdate *sample);

    NDDSUSERDllExport extern void 
    StorageUpdatePluginSupport_print_data(
        const StorageUpdate *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern StorageUpdate*
    StorageUpdatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern StorageUpdate*
    StorageUpdatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    StorageUpdatePluginSupport_destroy_key_ex(
        StorageUpdateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    StorageUpdatePluginSupport_destroy_key(
        StorageUpdateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    StorageUpdatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    StorageUpdatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    StorageUpdatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    StorageUpdatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    StorageUpdatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        StorageUpdate *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    StorageUpdatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        StorageUpdate *out,
        const StorageUpdate *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    StorageUpdatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const StorageUpdate *sample); 

    NDDSUSERDllExport extern RTIBool
    StorageUpdatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const StorageUpdate *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    StorageUpdatePlugin_deserialize_from_cdr_buffer(
        StorageUpdate *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    StorageUpdatePlugin_data_to_string(
        const StorageUpdate *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    StorageUpdatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    StorageUpdatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    StorageUpdatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    StorageUpdatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    StorageUpdatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        StorageUpdate ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    StorageUpdatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        StorageUpdateKeyHolder *key, 
        const StorageUpdate *instance);

    NDDSUSERDllExport extern RTIBool 
    StorageUpdatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        StorageUpdate *instance, 
        const StorageUpdateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    StorageUpdatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * StorageUpdatePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    StorageUpdatePlugin_new(void);

    NDDSUSERDllExport extern void
    StorageUpdatePlugin_delete(struct PRESTypePlugin *);

    #define ControlServiceInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ControlServiceInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ControlServiceInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ControlServiceInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ControlServiceInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ControlServiceInfo*
    ControlServiceInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ControlServiceInfo*
    ControlServiceInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ControlServiceInfo*
    ControlServiceInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ControlServiceInfoPluginSupport_copy_data(
        ControlServiceInfo *out,
        const ControlServiceInfo *in);

    NDDSUSERDllExport extern void 
    ControlServiceInfoPluginSupport_destroy_data_w_params(
        ControlServiceInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ControlServiceInfoPluginSupport_destroy_data_ex(
        ControlServiceInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ControlServiceInfoPluginSupport_destroy_data(
        ControlServiceInfo *sample);

    NDDSUSERDllExport extern void 
    ControlServiceInfoPluginSupport_print_data(
        const ControlServiceInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    ControlServiceInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ControlServiceInfo *out,
        const ControlServiceInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ControlServiceInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ControlServiceInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    ControlServiceInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ControlServiceInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ControlServiceInfoPlugin_deserialize_from_cdr_buffer(
        ControlServiceInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ControlServiceInfoPlugin_data_to_string(
        const ControlServiceInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ControlServiceInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ControlServiceInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ControlServiceInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ControlServiceInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ControlServiceInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ControlServiceInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ControlServiceInfoPlugin_get_programs(void);

    #define PowerDeviceInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define PowerDeviceInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define PowerDeviceInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define PowerDeviceInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define PowerDeviceInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PowerDeviceInfo*
    PowerDeviceInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern PowerDeviceInfo*
    PowerDeviceInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern PowerDeviceInfo*
    PowerDeviceInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    PowerDeviceInfoPluginSupport_copy_data(
        PowerDeviceInfo *out,
        const PowerDeviceInfo *in);

    NDDSUSERDllExport extern void 
    PowerDeviceInfoPluginSupport_destroy_data_w_params(
        PowerDeviceInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    PowerDeviceInfoPluginSupport_destroy_data_ex(
        PowerDeviceInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    PowerDeviceInfoPluginSupport_destroy_data(
        PowerDeviceInfo *sample);

    NDDSUSERDllExport extern void 
    PowerDeviceInfoPluginSupport_print_data(
        const PowerDeviceInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    PowerDeviceInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        PowerDeviceInfo *out,
        const PowerDeviceInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    PowerDeviceInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const PowerDeviceInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    PowerDeviceInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const PowerDeviceInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    PowerDeviceInfoPlugin_deserialize_from_cdr_buffer(
        PowerDeviceInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    PowerDeviceInfoPlugin_data_to_string(
        const PowerDeviceInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    PowerDeviceInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    PowerDeviceInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    PowerDeviceInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    PowerDeviceInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    PowerDeviceInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        PowerDeviceInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * PowerDeviceInfoPlugin_get_programs(void);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct DeviceInfo
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct DeviceInfo)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * DeviceInfo must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct DeviceInfo.
    */
    typedef  class DeviceInfo DeviceInfoKeyHolder;

    #define DeviceInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define DeviceInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define DeviceInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define DeviceInfoPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define DeviceInfoPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define DeviceInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define DeviceInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern DeviceInfo*
    DeviceInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern DeviceInfo*
    DeviceInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DeviceInfo*
    DeviceInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    DeviceInfoPluginSupport_copy_data(
        DeviceInfo *out,
        const DeviceInfo *in);

    NDDSUSERDllExport extern void 
    DeviceInfoPluginSupport_destroy_data_w_params(
        DeviceInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    DeviceInfoPluginSupport_destroy_data_ex(
        DeviceInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DeviceInfoPluginSupport_destroy_data(
        DeviceInfo *sample);

    NDDSUSERDllExport extern void 
    DeviceInfoPluginSupport_print_data(
        const DeviceInfo *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern DeviceInfo*
    DeviceInfoPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern DeviceInfo*
    DeviceInfoPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    DeviceInfoPluginSupport_destroy_key_ex(
        DeviceInfoKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    DeviceInfoPluginSupport_destroy_key(
        DeviceInfoKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    DeviceInfoPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    DeviceInfoPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    DeviceInfoPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    DeviceInfoPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    DeviceInfoPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceInfo *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    DeviceInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        DeviceInfo *out,
        const DeviceInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    DeviceInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const DeviceInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    DeviceInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const DeviceInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    DeviceInfoPlugin_deserialize_from_cdr_buffer(
        DeviceInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    DeviceInfoPlugin_data_to_string(
        const DeviceInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    DeviceInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    DeviceInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    DeviceInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    DeviceInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    DeviceInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    DeviceInfoPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        DeviceInfoKeyHolder *key, 
        const DeviceInfo *instance);

    NDDSUSERDllExport extern RTIBool 
    DeviceInfoPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        DeviceInfo *instance, 
        const DeviceInfoKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    DeviceInfoPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * DeviceInfoPlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    DeviceInfoPlugin_new(void);

    NDDSUSERDllExport extern void
    DeviceInfoPlugin_delete(struct PRESTypePlugin *);

} /* namespace tms  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* tmsExampleAppPlugin_1875817790_h */

