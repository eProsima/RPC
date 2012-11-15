
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HelloWorldAsyncRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef HelloWorldAsyncRequestReplyPlugin_1955698971_h
#define HelloWorldAsyncRequestReplyPlugin_1955698971_h

#include "HelloWorldAsyncRequestReply.h"




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

#include "MessageHeaderPlugin.h"


#include "HelloWorldAsyncPlugin.h"


/* The type used to store keys for instances of type struct
 * HelloWorldAsync_sayHelloRequest.
 *
 * By default, this type is struct HelloWorldAsync_sayHelloRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct HelloWorldAsync_sayHelloRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct HelloWorldAsync_sayHelloRequest, the
 * following restriction applies: the key of struct
 * HelloWorldAsync_sayHelloRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct HelloWorldAsync_sayHelloRequest.
*/
typedef  struct HelloWorldAsync_sayHelloRequest HelloWorldAsync_sayHelloRequestKeyHolder;


#define HelloWorldAsync_sayHelloRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define HelloWorldAsync_sayHelloRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define HelloWorldAsync_sayHelloRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HelloWorldAsync_sayHelloRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define HelloWorldAsync_sayHelloRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define HelloWorldAsync_sayHelloRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define HelloWorldAsync_sayHelloRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HelloWorldAsync_sayHelloRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HelloWorldAsync_sayHelloRequest*
HelloWorldAsync_sayHelloRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HelloWorldAsync_sayHelloRequest*
HelloWorldAsync_sayHelloRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloRequestPluginSupport_copy_data(
    HelloWorldAsync_sayHelloRequest *out,
    const HelloWorldAsync_sayHelloRequest *in);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloRequestPluginSupport_destroy_data_ex(
    HelloWorldAsync_sayHelloRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloRequestPluginSupport_destroy_data(
    HelloWorldAsync_sayHelloRequest *sample);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloRequestPluginSupport_print_data(
    const HelloWorldAsync_sayHelloRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern HelloWorldAsync_sayHelloRequest*
HelloWorldAsync_sayHelloRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HelloWorldAsync_sayHelloRequest*
HelloWorldAsync_sayHelloRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloRequestPluginSupport_destroy_key_ex(
    HelloWorldAsync_sayHelloRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloRequestPluginSupport_destroy_key(
    HelloWorldAsync_sayHelloRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HelloWorldAsync_sayHelloRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
HelloWorldAsync_sayHelloRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloRequest *out,
    const HelloWorldAsync_sayHelloRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const HelloWorldAsync_sayHelloRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
HelloWorldAsync_sayHelloRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
HelloWorldAsync_sayHelloRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HelloWorldAsync_sayHelloRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
HelloWorldAsync_sayHelloRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const HelloWorldAsync_sayHelloRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
HelloWorldAsync_sayHelloRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HelloWorldAsync_sayHelloRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const HelloWorldAsync_sayHelloRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
HelloWorldAsync_sayHelloRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloRequestKeyHolder *key, 
    const HelloWorldAsync_sayHelloRequest *instance);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloRequest *instance, 
    const HelloWorldAsync_sayHelloRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const HelloWorldAsync_sayHelloRequest *instance);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HelloWorldAsync_sayHelloRequestPlugin_new(void);

NDDSUSERDllExport extern void
HelloWorldAsync_sayHelloRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * HelloWorldAsync_sayHelloReply.
 *
 * By default, this type is struct HelloWorldAsync_sayHelloReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct HelloWorldAsync_sayHelloReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct HelloWorldAsync_sayHelloReply, the
 * following restriction applies: the key of struct
 * HelloWorldAsync_sayHelloReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct HelloWorldAsync_sayHelloReply.
*/
typedef  struct HelloWorldAsync_sayHelloReply HelloWorldAsync_sayHelloReplyKeyHolder;


#define HelloWorldAsync_sayHelloReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define HelloWorldAsync_sayHelloReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define HelloWorldAsync_sayHelloReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HelloWorldAsync_sayHelloReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define HelloWorldAsync_sayHelloReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define HelloWorldAsync_sayHelloReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define HelloWorldAsync_sayHelloReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HelloWorldAsync_sayHelloReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HelloWorldAsync_sayHelloReply*
HelloWorldAsync_sayHelloReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HelloWorldAsync_sayHelloReply*
HelloWorldAsync_sayHelloReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloReplyPluginSupport_copy_data(
    HelloWorldAsync_sayHelloReply *out,
    const HelloWorldAsync_sayHelloReply *in);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloReplyPluginSupport_destroy_data_ex(
    HelloWorldAsync_sayHelloReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloReplyPluginSupport_destroy_data(
    HelloWorldAsync_sayHelloReply *sample);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloReplyPluginSupport_print_data(
    const HelloWorldAsync_sayHelloReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern HelloWorldAsync_sayHelloReply*
HelloWorldAsync_sayHelloReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HelloWorldAsync_sayHelloReply*
HelloWorldAsync_sayHelloReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloReplyPluginSupport_destroy_key_ex(
    HelloWorldAsync_sayHelloReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloReplyPluginSupport_destroy_key(
    HelloWorldAsync_sayHelloReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HelloWorldAsync_sayHelloReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
HelloWorldAsync_sayHelloReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HelloWorldAsync_sayHelloReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloReply *out,
    const HelloWorldAsync_sayHelloReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const HelloWorldAsync_sayHelloReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
HelloWorldAsync_sayHelloReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
HelloWorldAsync_sayHelloReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HelloWorldAsync_sayHelloReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
HelloWorldAsync_sayHelloReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const HelloWorldAsync_sayHelloReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
HelloWorldAsync_sayHelloReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HelloWorldAsync_sayHelloReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const HelloWorldAsync_sayHelloReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
HelloWorldAsync_sayHelloReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloReplyKeyHolder *key, 
    const HelloWorldAsync_sayHelloReply *instance);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    HelloWorldAsync_sayHelloReply *instance, 
    const HelloWorldAsync_sayHelloReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const HelloWorldAsync_sayHelloReply *instance);

NDDSUSERDllExport extern RTIBool 
HelloWorldAsync_sayHelloReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HelloWorldAsync_sayHelloReplyPlugin_new(void);

NDDSUSERDllExport extern void
HelloWorldAsync_sayHelloReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* HelloWorldAsyncRequestReplyPlugin_1955698971_h */
