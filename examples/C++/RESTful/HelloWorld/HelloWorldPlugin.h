
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HelloWorld.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef HelloWorldPlugin_1436885919_h
#define HelloWorldPlugin_1436885919_h

#include "HelloWorld.h"




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


namespace HelloWorld{

#define HelloWorld_EmptyHelloResponse_LAST_MEMBER_ID 0

#define EmptyHelloResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EmptyHelloResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EmptyHelloResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EmptyHelloResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define EmptyHelloResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EmptyHelloResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EmptyHelloResponse*
EmptyHelloResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EmptyHelloResponse*
EmptyHelloResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EmptyHelloResponsePluginSupport_copy_data(
    EmptyHelloResponse *out,
    const EmptyHelloResponse *in);

NDDSUSERDllExport extern void 
EmptyHelloResponsePluginSupport_destroy_data_ex(
    EmptyHelloResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EmptyHelloResponsePluginSupport_destroy_data(
    EmptyHelloResponse *sample);

NDDSUSERDllExport extern void 
EmptyHelloResponsePluginSupport_print_data(
    const EmptyHelloResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
EmptyHelloResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyHelloResponse *out,
    const EmptyHelloResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EmptyHelloResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EmptyHelloResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptyHelloResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyHelloResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptyHelloResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EmptyHelloResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EmptyHelloResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EmptyHelloResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EmptyHelloResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EmptyHelloResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EmptyHelloResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EmptyHelloResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EmptyHelloResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EmptyHelloResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EmptyHelloResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptyHelloResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyHelloResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptyHelloResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EmptyHelloResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EmptyHelloResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EmptyHelloResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define HelloWorld_XMLHelloResponse_LAST_MEMBER_ID 0

#define XMLHelloResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define XMLHelloResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define XMLHelloResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define XMLHelloResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define XMLHelloResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define XMLHelloResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern XMLHelloResponse*
XMLHelloResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern XMLHelloResponse*
XMLHelloResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
XMLHelloResponsePluginSupport_copy_data(
    XMLHelloResponse *out,
    const XMLHelloResponse *in);

NDDSUSERDllExport extern void 
XMLHelloResponsePluginSupport_destroy_data_ex(
    XMLHelloResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
XMLHelloResponsePluginSupport_destroy_data(
    XMLHelloResponse *sample);

NDDSUSERDllExport extern void 
XMLHelloResponsePluginSupport_print_data(
    const XMLHelloResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
XMLHelloResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLHelloResponse *out,
    const XMLHelloResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
XMLHelloResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const XMLHelloResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
XMLHelloResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLHelloResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
XMLHelloResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    XMLHelloResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
XMLHelloResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
XMLHelloResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
XMLHelloResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
XMLHelloResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const XMLHelloResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
XMLHelloResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
XMLHelloResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
XMLHelloResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const XMLHelloResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
XMLHelloResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLHelloResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
XMLHelloResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    XMLHelloResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
XMLHelloResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    XMLHelloResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define HelloWorld_HelloResponse_LAST_MEMBER_ID 0

#define HelloResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define HelloResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define HelloResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HelloResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define HelloResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HelloResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HelloResponse*
HelloResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HelloResponse*
HelloResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HelloResponsePluginSupport_copy_data(
    HelloResponse *out,
    const HelloResponse *in);

NDDSUSERDllExport extern void 
HelloResponsePluginSupport_destroy_data_ex(
    HelloResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HelloResponsePluginSupport_destroy_data(
    HelloResponse *sample);

NDDSUSERDllExport extern void 
HelloResponsePluginSupport_print_data(
    const HelloResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
HelloResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HelloResponse *out,
    const HelloResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
HelloResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const HelloResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HelloResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    HelloResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HelloResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HelloResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
HelloResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
HelloResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HelloResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
HelloResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const HelloResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
HelloResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HelloResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HelloResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const HelloResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HelloResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    HelloResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HelloResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HelloResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
HelloResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    HelloResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


} /* namespace HelloWorld */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* HelloWorldPlugin_1436885919_h */
