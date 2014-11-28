
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MessageHeader.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MessageHeaderPlugin_953112849_h
#define MessageHeaderPlugin_953112849_h

#include "MessageHeader.h"



struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif


#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif



#define UnknownOperationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define UnknownOperationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define UnknownOperationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define UnknownOperationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define UnknownOperationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern UnknownOperation*
UnknownOperationPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern UnknownOperation*
UnknownOperationPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern UnknownOperation*
UnknownOperationPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
UnknownOperationPluginSupport_copy_data(
    UnknownOperation *out,
    const UnknownOperation *in);

NDDSUSERDllExport extern void 
UnknownOperationPluginSupport_destroy_data_w_params(
    UnknownOperation *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
UnknownOperationPluginSupport_destroy_data_ex(
    UnknownOperation *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
UnknownOperationPluginSupport_destroy_data(
    UnknownOperation *sample);

NDDSUSERDllExport extern void 
UnknownOperationPluginSupport_print_data(
    const UnknownOperation *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
UnknownOperationPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UnknownOperation *out,
    const UnknownOperation *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
UnknownOperationPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const UnknownOperation *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
UnknownOperationPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    UnknownOperation *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
UnknownOperationPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
UnknownOperationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
UnknownOperationPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
UnknownOperationPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const UnknownOperation * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
UnknownOperationPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
UnknownOperationPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
UnknownOperationPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const UnknownOperation *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
UnknownOperationPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    UnknownOperation * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
UnknownOperationPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    UnknownOperation *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define UnknownExceptionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define UnknownExceptionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define UnknownExceptionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define UnknownExceptionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define UnknownExceptionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern UnknownException*
UnknownExceptionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern UnknownException*
UnknownExceptionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern UnknownException*
UnknownExceptionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
UnknownExceptionPluginSupport_copy_data(
    UnknownException *out,
    const UnknownException *in);

NDDSUSERDllExport extern void 
UnknownExceptionPluginSupport_destroy_data_w_params(
    UnknownException *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
UnknownExceptionPluginSupport_destroy_data_ex(
    UnknownException *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
UnknownExceptionPluginSupport_destroy_data(
    UnknownException *sample);

NDDSUSERDllExport extern void 
UnknownExceptionPluginSupport_print_data(
    const UnknownException *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
UnknownExceptionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UnknownException *out,
    const UnknownException *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
UnknownExceptionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const UnknownException *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
UnknownExceptionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    UnknownException *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
UnknownExceptionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
UnknownExceptionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
UnknownExceptionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
UnknownExceptionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const UnknownException * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
UnknownExceptionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
UnknownExceptionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
UnknownExceptionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const UnknownException *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
UnknownExceptionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    UnknownException * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
UnknownExceptionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    UnknownException *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



/* ------------------------------------------------------------------------
 * (De)Serialization Methods
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool
SystemExceptionCodePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SystemExceptionCode *sample, struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SystemExceptionCodePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SystemExceptionCode *sample, 
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SystemExceptionCodePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int
SystemExceptionCodePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SystemExceptionCodePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SystemExceptionCodePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SystemExceptionCode * sample);


/* ------------------------------------------------------------------------
    Key Management functions:
 * ------------------------------------------------------------------------ */

NDDSUSERDllExport extern RTIBool 
SystemExceptionCodePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SystemExceptionCode *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SystemExceptionCodePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SystemExceptionCode *sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SystemExceptionCodePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool
SystemExceptionCodePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SystemExceptionCode *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 


/* ----------------------------------------------------------------------------
    Support functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
SystemExceptionCodePluginSupport_print_data(
    const SystemExceptionCode *sample, const char *desc, int indent_level);



#define GUID_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define GUID_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define GUID_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define GUID_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define GUID_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern GUID_t*
GUID_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern GUID_t*
GUID_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GUID_t*
GUID_tPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
GUID_tPluginSupport_copy_data(
    GUID_t *out,
    const GUID_t *in);

NDDSUSERDllExport extern void 
GUID_tPluginSupport_destroy_data_w_params(
    GUID_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
GUID_tPluginSupport_destroy_data_ex(
    GUID_t *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GUID_tPluginSupport_destroy_data(
    GUID_t *sample);

NDDSUSERDllExport extern void 
GUID_tPluginSupport_print_data(
    const GUID_t *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
GUID_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GUID_t *out,
    const GUID_t *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
GUID_tPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GUID_t *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GUID_tPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GUID_t *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GUID_tPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    GUID_t **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
GUID_tPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
GUID_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
GUID_tPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
GUID_tPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GUID_t * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
GUID_tPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
GUID_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
GUID_tPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GUID_t *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GUID_tPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GUID_t * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GUID_tPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    GUID_t ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
GUID_tPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GUID_t *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define SampleIdentity_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SampleIdentity_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SampleIdentity_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SampleIdentity_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SampleIdentity_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SampleIdentity_t*
SampleIdentity_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SampleIdentity_t*
SampleIdentity_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SampleIdentity_t*
SampleIdentity_tPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SampleIdentity_tPluginSupport_copy_data(
    SampleIdentity_t *out,
    const SampleIdentity_t *in);

NDDSUSERDllExport extern void 
SampleIdentity_tPluginSupport_destroy_data_w_params(
    SampleIdentity_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SampleIdentity_tPluginSupport_destroy_data_ex(
    SampleIdentity_t *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SampleIdentity_tPluginSupport_destroy_data(
    SampleIdentity_t *sample);

NDDSUSERDllExport extern void 
SampleIdentity_tPluginSupport_print_data(
    const SampleIdentity_t *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SampleIdentity_tPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SampleIdentity_tPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SampleIdentity_tPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SampleIdentity_tPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SampleIdentity_tPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SampleIdentity_t *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SampleIdentity_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SampleIdentity_t *out,
    const SampleIdentity_t *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SampleIdentity_tPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SampleIdentity_t *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SampleIdentity_tPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SampleIdentity_t *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SampleIdentity_tPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SampleIdentity_t **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SampleIdentity_tPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SampleIdentity_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SampleIdentity_tPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SampleIdentity_tPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SampleIdentity_t * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SampleIdentity_tPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SampleIdentity_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SampleIdentity_tPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SampleIdentity_t *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SampleIdentity_tPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SampleIdentity_t * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SampleIdentity_tPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SampleIdentity_t ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SampleIdentity_tPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SampleIdentity_t *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SampleIdentity_tPlugin_new(void);

NDDSUSERDllExport extern void
SampleIdentity_tPlugin_delete(struct PRESTypePlugin *);


#define RequestHeaderPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define RequestHeaderPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RequestHeaderPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define RequestHeaderPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RequestHeaderPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RequestHeader*
RequestHeaderPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RequestHeader*
RequestHeaderPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RequestHeader*
RequestHeaderPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RequestHeaderPluginSupport_copy_data(
    RequestHeader *out,
    const RequestHeader *in);

NDDSUSERDllExport extern void 
RequestHeaderPluginSupport_destroy_data_w_params(
    RequestHeader *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RequestHeaderPluginSupport_destroy_data_ex(
    RequestHeader *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RequestHeaderPluginSupport_destroy_data(
    RequestHeader *sample);

NDDSUSERDllExport extern void 
RequestHeaderPluginSupport_print_data(
    const RequestHeader *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeader *out,
    const RequestHeader *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RequestHeader *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeader *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeader **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
RequestHeaderPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RequestHeaderPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RequestHeaderPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RequestHeaderPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RequestHeader * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
RequestHeaderPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RequestHeaderPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RequestHeader *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeader * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeader ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
RequestHeaderPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeader *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define ReplyHeaderPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ReplyHeaderPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ReplyHeaderPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ReplyHeaderPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ReplyHeaderPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ReplyHeader*
ReplyHeaderPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ReplyHeader*
ReplyHeaderPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ReplyHeader*
ReplyHeaderPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPluginSupport_copy_data(
    ReplyHeader *out,
    const ReplyHeader *in);

NDDSUSERDllExport extern void 
ReplyHeaderPluginSupport_destroy_data_w_params(
    ReplyHeader *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ReplyHeaderPluginSupport_destroy_data_ex(
    ReplyHeader *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ReplyHeaderPluginSupport_destroy_data(
    ReplyHeader *sample);

NDDSUSERDllExport extern void 
ReplyHeaderPluginSupport_print_data(
    const ReplyHeader *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeader *out,
    const ReplyHeader *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ReplyHeader *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeader *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeader **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ReplyHeaderPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ReplyHeaderPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ReplyHeaderPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ReplyHeaderPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ReplyHeader * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ReplyHeaderPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ReplyHeaderPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ReplyHeader *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeader * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeader ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ReplyHeaderPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeader *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* MessageHeaderPlugin_953112849_h */
