
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Latency.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef LatencyPlugin_1496237631_h
#define LatencyPlugin_1496237631_h

#include "Latency.h"



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



#define elementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define elementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define elementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define elementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define elementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern element*
elementPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern element*
elementPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern element*
elementPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
elementPluginSupport_copy_data(
    element *out,
    const element *in);

NDDSUSERDllExport extern void 
elementPluginSupport_destroy_data_w_params(
    element *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
elementPluginSupport_destroy_data_ex(
    element *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
elementPluginSupport_destroy_data(
    element *sample);

NDDSUSERDllExport extern void 
elementPluginSupport_print_data(
    const element *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
elementPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    element *out,
    const element *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
elementPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const element *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
elementPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    element *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
elementPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    element **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
elementPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
elementPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
elementPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
elementPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const element * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
elementPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
elementPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
elementPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const element *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
elementPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    element * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
elementPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    element ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
elementPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    element *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define stPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define stPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define stPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define stPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define stPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern st*
stPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern st*
stPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern st*
stPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
stPluginSupport_copy_data(
    st *out,
    const st *in);

NDDSUSERDllExport extern void 
stPluginSupport_destroy_data_w_params(
    st *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
stPluginSupport_destroy_data_ex(
    st *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
stPluginSupport_destroy_data(
    st *sample);

NDDSUSERDllExport extern void 
stPluginSupport_print_data(
    const st *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
stPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    st *out,
    const st *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
stPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const st *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
stPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    st *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
stPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
stPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
stPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
stPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const st * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
stPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
stPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
stPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const st *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
stPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    st * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
stPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    st *sample,
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

#endif /* LatencyPlugin_1496237631_h */
