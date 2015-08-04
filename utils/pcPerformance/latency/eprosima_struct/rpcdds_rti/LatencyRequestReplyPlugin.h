
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from LatencyRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef LatencyRequestReplyPlugin_13938624_h
#define LatencyRequestReplyPlugin_13938624_h

#include "LatencyRequestReply.h"

#include "MessageHeaderPlugin.h"


#include "LatencyPlugin.h"




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



#define Latency_latency_InPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Latency_latency_InPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Latency_latency_InPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Latency_latency_InPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Latency_latency_InPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Latency_latency_In*
Latency_latency_InPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Latency_latency_In*
Latency_latency_InPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Latency_latency_In*
Latency_latency_InPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Latency_latency_InPluginSupport_copy_data(
    Latency_latency_In *out,
    const Latency_latency_In *in);

NDDSUSERDllExport extern void 
Latency_latency_InPluginSupport_destroy_data_w_params(
    Latency_latency_In *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Latency_latency_InPluginSupport_destroy_data_ex(
    Latency_latency_In *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Latency_latency_InPluginSupport_destroy_data(
    Latency_latency_In *sample);

NDDSUSERDllExport extern void 
Latency_latency_InPluginSupport_print_data(
    const Latency_latency_In *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Latency_latency_InPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_In *out,
    const Latency_latency_In *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Latency_latency_InPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_latency_In *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_latency_InPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_In *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_latency_InPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_In **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Latency_latency_InPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Latency_latency_InPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Latency_latency_InPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Latency_latency_InPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Latency_latency_In * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Latency_latency_InPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Latency_latency_InPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Latency_latency_InPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_latency_In *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_latency_InPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_In * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_latency_InPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_In ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Latency_latency_InPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_In *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Latency_latency_OutPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Latency_latency_OutPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Latency_latency_OutPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Latency_latency_OutPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Latency_latency_OutPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Latency_latency_Out*
Latency_latency_OutPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Latency_latency_Out*
Latency_latency_OutPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Latency_latency_Out*
Latency_latency_OutPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Latency_latency_OutPluginSupport_copy_data(
    Latency_latency_Out *out,
    const Latency_latency_Out *in);

NDDSUSERDllExport extern void 
Latency_latency_OutPluginSupport_destroy_data_w_params(
    Latency_latency_Out *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Latency_latency_OutPluginSupport_destroy_data_ex(
    Latency_latency_Out *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Latency_latency_OutPluginSupport_destroy_data(
    Latency_latency_Out *sample);

NDDSUSERDllExport extern void 
Latency_latency_OutPluginSupport_print_data(
    const Latency_latency_Out *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Latency_latency_OutPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_Out *out,
    const Latency_latency_Out *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Latency_latency_OutPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_latency_Out *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_latency_OutPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_Out *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_latency_OutPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_Out **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Latency_latency_OutPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Latency_latency_OutPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Latency_latency_OutPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Latency_latency_OutPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Latency_latency_Out * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Latency_latency_OutPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Latency_latency_OutPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Latency_latency_OutPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_latency_Out *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_latency_OutPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_Out * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_latency_OutPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_Out ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Latency_latency_OutPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_Out *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Latency_latency_ResultPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Latency_latency_ResultPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Latency_latency_ResultPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Latency_latency_ResultPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Latency_latency_ResultPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Latency_latency_Result*
Latency_latency_ResultPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Latency_latency_Result*
Latency_latency_ResultPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Latency_latency_Result*
Latency_latency_ResultPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Latency_latency_ResultPluginSupport_copy_data(
    Latency_latency_Result *out,
    const Latency_latency_Result *in);

NDDSUSERDllExport extern void 
Latency_latency_ResultPluginSupport_destroy_data_w_params(
    Latency_latency_Result *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Latency_latency_ResultPluginSupport_destroy_data_ex(
    Latency_latency_Result *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Latency_latency_ResultPluginSupport_destroy_data(
    Latency_latency_Result *sample);

NDDSUSERDllExport extern void 
Latency_latency_ResultPluginSupport_print_data(
    const Latency_latency_Result *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Latency_latency_ResultPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_Result *out,
    const Latency_latency_Result *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Latency_latency_ResultPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_latency_Result *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_latency_ResultPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_Result *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_latency_ResultPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_Result **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Latency_latency_ResultPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Latency_latency_ResultPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Latency_latency_ResultPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Latency_latency_ResultPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Latency_latency_Result * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Latency_latency_ResultPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Latency_latency_ResultPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Latency_latency_ResultPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_latency_Result *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_latency_ResultPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_Result * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_latency_ResultPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_Result ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Latency_latency_ResultPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_latency_Result *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Latency_CallPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Latency_CallPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Latency_CallPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Latency_CallPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Latency_CallPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Latency_Call*
Latency_CallPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Latency_Call*
Latency_CallPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Latency_Call*
Latency_CallPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Latency_CallPluginSupport_copy_data(
    Latency_Call *out,
    const Latency_Call *in);

NDDSUSERDllExport extern void 
Latency_CallPluginSupport_destroy_data_w_params(
    Latency_Call *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Latency_CallPluginSupport_destroy_data_ex(
    Latency_Call *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Latency_CallPluginSupport_destroy_data(
    Latency_Call *sample);

NDDSUSERDllExport extern void 
Latency_CallPluginSupport_print_data(
    const Latency_Call *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Latency_CallPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Call *out,
    const Latency_Call *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Latency_CallPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_Call *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_CallPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Call *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_CallPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Call **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Latency_CallPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Latency_CallPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Latency_CallPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Latency_CallPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Latency_Call * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Latency_CallPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Latency_CallPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Latency_CallPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_Call *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_CallPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Call * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_CallPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Call ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Latency_CallPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Call *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Latency_RequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Latency_RequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Latency_RequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Latency_RequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Latency_RequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Latency_Request*
Latency_RequestPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Latency_Request*
Latency_RequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Latency_Request*
Latency_RequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Latency_RequestPluginSupport_copy_data(
    Latency_Request *out,
    const Latency_Request *in);

NDDSUSERDllExport extern void 
Latency_RequestPluginSupport_destroy_data_w_params(
    Latency_Request *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Latency_RequestPluginSupport_destroy_data_ex(
    Latency_Request *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Latency_RequestPluginSupport_destroy_data(
    Latency_Request *sample);

NDDSUSERDllExport extern void 
Latency_RequestPluginSupport_print_data(
    const Latency_Request *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Latency_RequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Latency_RequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Latency_RequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Latency_RequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
Latency_RequestPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Request *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
Latency_RequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Request *out,
    const Latency_Request *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Latency_RequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_Request *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_RequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Request *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_RequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Request **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Latency_RequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Latency_RequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Latency_RequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Latency_RequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Latency_Request * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Latency_RequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Latency_RequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Latency_RequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_Request *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_RequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Request * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_RequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Request ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Latency_RequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Request *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Latency_RequestPlugin_new(void);

NDDSUSERDllExport extern void
Latency_RequestPlugin_delete(struct PRESTypePlugin *);


#define Latency_ReturnPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Latency_ReturnPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Latency_ReturnPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Latency_ReturnPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Latency_ReturnPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Latency_Return*
Latency_ReturnPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Latency_Return*
Latency_ReturnPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Latency_Return*
Latency_ReturnPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Latency_ReturnPluginSupport_copy_data(
    Latency_Return *out,
    const Latency_Return *in);

NDDSUSERDllExport extern void 
Latency_ReturnPluginSupport_destroy_data_w_params(
    Latency_Return *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Latency_ReturnPluginSupport_destroy_data_ex(
    Latency_Return *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Latency_ReturnPluginSupport_destroy_data(
    Latency_Return *sample);

NDDSUSERDllExport extern void 
Latency_ReturnPluginSupport_print_data(
    const Latency_Return *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Latency_ReturnPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Return *out,
    const Latency_Return *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Latency_ReturnPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_Return *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_ReturnPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Return *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_ReturnPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Return **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Latency_ReturnPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Latency_ReturnPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Latency_ReturnPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Latency_ReturnPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Latency_Return * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Latency_ReturnPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Latency_ReturnPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Latency_ReturnPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_Return *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_ReturnPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Return * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_ReturnPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Return ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Latency_ReturnPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Return *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Latency_ReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Latency_ReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Latency_ReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Latency_ReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Latency_ReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Latency_Reply*
Latency_ReplyPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Latency_Reply*
Latency_ReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Latency_Reply*
Latency_ReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Latency_ReplyPluginSupport_copy_data(
    Latency_Reply *out,
    const Latency_Reply *in);

NDDSUSERDllExport extern void 
Latency_ReplyPluginSupport_destroy_data_w_params(
    Latency_Reply *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Latency_ReplyPluginSupport_destroy_data_ex(
    Latency_Reply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Latency_ReplyPluginSupport_destroy_data(
    Latency_Reply *sample);

NDDSUSERDllExport extern void 
Latency_ReplyPluginSupport_print_data(
    const Latency_Reply *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Latency_ReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Latency_ReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Latency_ReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Latency_ReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
Latency_ReplyPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Reply *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
Latency_ReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Reply *out,
    const Latency_Reply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Latency_ReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_Reply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_ReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Reply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_ReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Reply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Latency_ReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Latency_ReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Latency_ReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Latency_ReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Latency_Reply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Latency_ReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Latency_ReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Latency_ReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Latency_Reply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Latency_ReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Reply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Latency_ReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Reply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Latency_ReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Latency_Reply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Latency_ReplyPlugin_new(void);

NDDSUSERDllExport extern void
Latency_ReplyPlugin_delete(struct PRESTypePlugin *);

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* LatencyRequestReplyPlugin_13938624_h */
