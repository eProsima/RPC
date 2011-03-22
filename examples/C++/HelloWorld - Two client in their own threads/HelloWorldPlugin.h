
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HelloWorld.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
*/

#ifndef HelloWorldPlugin_h
#define HelloWorldPlugin_h

#ifndef HelloWorld_h
#include "HelloWorld.h"
#endif




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


#ifdef __cplusplus
extern "C" {
#endif


#define CookiePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define CookiePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define CookiePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CookiePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define CookiePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CookiePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Cookie*
CookiePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Cookie*
CookiePluginSupport_create_data();

NDDSUSERDllExport extern RTIBool 
CookiePluginSupport_copy_data(
    Cookie *out,
    const Cookie *in);

NDDSUSERDllExport extern void 
CookiePluginSupport_destroy_data_ex(
    Cookie *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CookiePluginSupport_destroy_data(
    Cookie *sample);

NDDSUSERDllExport extern void 
CookiePluginSupport_print_data(
    const Cookie *sample,
    const char *desc,
    unsigned int indent);

 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CookiePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CookiePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
CookiePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CookiePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
CookiePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Cookie *out,
    const Cookie *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CookiePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Cookie *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CookiePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Cookie *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
CookiePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CookiePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int 
CookiePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int
CookiePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CookiePlugin_get_key_kind();

NDDSUSERDllExport extern unsigned int 
CookiePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CookiePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Cookie *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CookiePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Cookie * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
CookiePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Cookie *sample,
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



#define tickConsumerPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define tickConsumerPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define tickConsumerPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define tickConsumerPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define tickConsumerPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define tickConsumerPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern tickConsumer*
tickConsumerPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern tickConsumer*
tickConsumerPluginSupport_create_data();

NDDSUSERDllExport extern RTIBool 
tickConsumerPluginSupport_copy_data(
    tickConsumer *out,
    const tickConsumer *in);

NDDSUSERDllExport extern void 
tickConsumerPluginSupport_destroy_data_ex(
    tickConsumer *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
tickConsumerPluginSupport_destroy_data(
    tickConsumer *sample);

NDDSUSERDllExport extern void 
tickConsumerPluginSupport_print_data(
    const tickConsumer *sample,
    const char *desc,
    unsigned int indent);

 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
tickConsumerPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
tickConsumerPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
tickConsumerPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
tickConsumerPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
tickConsumerPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    tickConsumer *out,
    const tickConsumer *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
tickConsumerPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const tickConsumer *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
tickConsumerPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    tickConsumer *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
tickConsumerPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
tickConsumerPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int 
tickConsumerPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int
tickConsumerPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
tickConsumerPlugin_get_key_kind();

NDDSUSERDllExport extern unsigned int 
tickConsumerPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
tickConsumerPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const tickConsumer *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
tickConsumerPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    tickConsumer * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
tickConsumerPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    tickConsumer *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
tickConsumerPlugin_new();

NDDSUSERDllExport extern void
tickConsumerPlugin_delete(struct PRESTypePlugin *);
 

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif


#ifdef __cplusplus
}
#endif
        

#endif /* HelloWorldPlugin_h */
