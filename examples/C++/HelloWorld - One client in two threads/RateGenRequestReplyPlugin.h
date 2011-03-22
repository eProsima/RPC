
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RateGenRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
*/

#ifndef RateGenRequestReplyPlugin_h
#define RateGenRequestReplyPlugin_h

#ifndef RateGenRequestReply_h
#include "RateGenRequestReply.h"
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

#include "HelloWorldPlugin.h"


/* The type used to store keys for instances of type struct
 * subscribe_PulseRequest.
 *
 * By default, this type is struct subscribe_PulseRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct subscribe_PulseRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct subscribe_PulseRequest, the
 * following restriction applies: the key of struct
 * subscribe_PulseRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct subscribe_PulseRequest.
*/
typedef  struct subscribe_PulseRequest subscribe_PulseRequestKeyHolder;


#define subscribe_PulseRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define subscribe_PulseRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define subscribe_PulseRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define subscribe_PulseRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define subscribe_PulseRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define subscribe_PulseRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define subscribe_PulseRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define subscribe_PulseRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern subscribe_PulseRequest*
subscribe_PulseRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern subscribe_PulseRequest*
subscribe_PulseRequestPluginSupport_create_data();

NDDSUSERDllExport extern RTIBool 
subscribe_PulseRequestPluginSupport_copy_data(
    subscribe_PulseRequest *out,
    const subscribe_PulseRequest *in);

NDDSUSERDllExport extern void 
subscribe_PulseRequestPluginSupport_destroy_data_ex(
    subscribe_PulseRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
subscribe_PulseRequestPluginSupport_destroy_data(
    subscribe_PulseRequest *sample);

NDDSUSERDllExport extern void 
subscribe_PulseRequestPluginSupport_print_data(
    const subscribe_PulseRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern subscribe_PulseRequest*
subscribe_PulseRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern subscribe_PulseRequest*
subscribe_PulseRequestPluginSupport_create_key();

NDDSUSERDllExport extern void 
subscribe_PulseRequestPluginSupport_destroy_key_ex(
    subscribe_PulseRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
subscribe_PulseRequestPluginSupport_destroy_key(
    subscribe_PulseRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
subscribe_PulseRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
subscribe_PulseRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
subscribe_PulseRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
subscribe_PulseRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseRequest *out,
    const subscribe_PulseRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
subscribe_PulseRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const subscribe_PulseRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
subscribe_PulseRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
subscribe_PulseRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int 
subscribe_PulseRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int
subscribe_PulseRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
subscribe_PulseRequestPlugin_get_key_kind();

NDDSUSERDllExport extern unsigned int 
subscribe_PulseRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const subscribe_PulseRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
subscribe_PulseRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
subscribe_PulseRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseRequestKeyHolder *key, 
    const subscribe_PulseRequest *instance);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseRequest *instance, 
    const subscribe_PulseRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const subscribe_PulseRequest *instance);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
subscribe_PulseRequestPlugin_new();

NDDSUSERDllExport extern void
subscribe_PulseRequestPlugin_delete(struct PRESTypePlugin *);
 

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif


/* The type used to store keys for instances of type struct
 * subscribe_PulseReply.
 *
 * By default, this type is struct subscribe_PulseReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct subscribe_PulseReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct subscribe_PulseReply, the
 * following restriction applies: the key of struct
 * subscribe_PulseReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct subscribe_PulseReply.
*/
typedef  struct subscribe_PulseReply subscribe_PulseReplyKeyHolder;


#define subscribe_PulseReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define subscribe_PulseReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define subscribe_PulseReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define subscribe_PulseReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define subscribe_PulseReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define subscribe_PulseReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define subscribe_PulseReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define subscribe_PulseReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern subscribe_PulseReply*
subscribe_PulseReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern subscribe_PulseReply*
subscribe_PulseReplyPluginSupport_create_data();

NDDSUSERDllExport extern RTIBool 
subscribe_PulseReplyPluginSupport_copy_data(
    subscribe_PulseReply *out,
    const subscribe_PulseReply *in);

NDDSUSERDllExport extern void 
subscribe_PulseReplyPluginSupport_destroy_data_ex(
    subscribe_PulseReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
subscribe_PulseReplyPluginSupport_destroy_data(
    subscribe_PulseReply *sample);

NDDSUSERDllExport extern void 
subscribe_PulseReplyPluginSupport_print_data(
    const subscribe_PulseReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern subscribe_PulseReply*
subscribe_PulseReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern subscribe_PulseReply*
subscribe_PulseReplyPluginSupport_create_key();

NDDSUSERDllExport extern void 
subscribe_PulseReplyPluginSupport_destroy_key_ex(
    subscribe_PulseReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
subscribe_PulseReplyPluginSupport_destroy_key(
    subscribe_PulseReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
subscribe_PulseReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
subscribe_PulseReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
subscribe_PulseReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
subscribe_PulseReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseReply *out,
    const subscribe_PulseReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
subscribe_PulseReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const subscribe_PulseReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
subscribe_PulseReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
subscribe_PulseReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int 
subscribe_PulseReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int
subscribe_PulseReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
subscribe_PulseReplyPlugin_get_key_kind();

NDDSUSERDllExport extern unsigned int 
subscribe_PulseReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const subscribe_PulseReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
subscribe_PulseReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
subscribe_PulseReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseReplyKeyHolder *key, 
    const subscribe_PulseReply *instance);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    subscribe_PulseReply *instance, 
    const subscribe_PulseReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const subscribe_PulseReply *instance);

NDDSUSERDllExport extern RTIBool 
subscribe_PulseReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
subscribe_PulseReplyPlugin_new();

NDDSUSERDllExport extern void
subscribe_PulseReplyPlugin_delete(struct PRESTypePlugin *);
 

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif


/* The type used to store keys for instances of type struct
 * unsubscribe_PulseRequest.
 *
 * By default, this type is struct unsubscribe_PulseRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct unsubscribe_PulseRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct unsubscribe_PulseRequest, the
 * following restriction applies: the key of struct
 * unsubscribe_PulseRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct unsubscribe_PulseRequest.
*/
typedef  struct unsubscribe_PulseRequest unsubscribe_PulseRequestKeyHolder;


#define unsubscribe_PulseRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define unsubscribe_PulseRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define unsubscribe_PulseRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define unsubscribe_PulseRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define unsubscribe_PulseRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define unsubscribe_PulseRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define unsubscribe_PulseRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define unsubscribe_PulseRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsubscribe_PulseRequest*
unsubscribe_PulseRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern unsubscribe_PulseRequest*
unsubscribe_PulseRequestPluginSupport_create_data();

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseRequestPluginSupport_copy_data(
    unsubscribe_PulseRequest *out,
    const unsubscribe_PulseRequest *in);

NDDSUSERDllExport extern void 
unsubscribe_PulseRequestPluginSupport_destroy_data_ex(
    unsubscribe_PulseRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
unsubscribe_PulseRequestPluginSupport_destroy_data(
    unsubscribe_PulseRequest *sample);

NDDSUSERDllExport extern void 
unsubscribe_PulseRequestPluginSupport_print_data(
    const unsubscribe_PulseRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern unsubscribe_PulseRequest*
unsubscribe_PulseRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern unsubscribe_PulseRequest*
unsubscribe_PulseRequestPluginSupport_create_key();

NDDSUSERDllExport extern void 
unsubscribe_PulseRequestPluginSupport_destroy_key_ex(
    unsubscribe_PulseRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
unsubscribe_PulseRequestPluginSupport_destroy_key(
    unsubscribe_PulseRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
unsubscribe_PulseRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
unsubscribe_PulseRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
unsubscribe_PulseRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
unsubscribe_PulseRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseRequest *out,
    const unsubscribe_PulseRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const unsubscribe_PulseRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
unsubscribe_PulseRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
unsubscribe_PulseRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int 
unsubscribe_PulseRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int
unsubscribe_PulseRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
unsubscribe_PulseRequestPlugin_get_key_kind();

NDDSUSERDllExport extern unsigned int 
unsubscribe_PulseRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const unsubscribe_PulseRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
unsubscribe_PulseRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseRequestKeyHolder *key, 
    const unsubscribe_PulseRequest *instance);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseRequest *instance, 
    const unsubscribe_PulseRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const unsubscribe_PulseRequest *instance);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
unsubscribe_PulseRequestPlugin_new();

NDDSUSERDllExport extern void
unsubscribe_PulseRequestPlugin_delete(struct PRESTypePlugin *);
 

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif


/* The type used to store keys for instances of type struct
 * unsubscribe_PulseReply.
 *
 * By default, this type is struct unsubscribe_PulseReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct unsubscribe_PulseReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct unsubscribe_PulseReply, the
 * following restriction applies: the key of struct
 * unsubscribe_PulseReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct unsubscribe_PulseReply.
*/
typedef  struct unsubscribe_PulseReply unsubscribe_PulseReplyKeyHolder;


#define unsubscribe_PulseReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define unsubscribe_PulseReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define unsubscribe_PulseReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define unsubscribe_PulseReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define unsubscribe_PulseReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define unsubscribe_PulseReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define unsubscribe_PulseReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define unsubscribe_PulseReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsubscribe_PulseReply*
unsubscribe_PulseReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern unsubscribe_PulseReply*
unsubscribe_PulseReplyPluginSupport_create_data();

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseReplyPluginSupport_copy_data(
    unsubscribe_PulseReply *out,
    const unsubscribe_PulseReply *in);

NDDSUSERDllExport extern void 
unsubscribe_PulseReplyPluginSupport_destroy_data_ex(
    unsubscribe_PulseReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
unsubscribe_PulseReplyPluginSupport_destroy_data(
    unsubscribe_PulseReply *sample);

NDDSUSERDllExport extern void 
unsubscribe_PulseReplyPluginSupport_print_data(
    const unsubscribe_PulseReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern unsubscribe_PulseReply*
unsubscribe_PulseReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern unsubscribe_PulseReply*
unsubscribe_PulseReplyPluginSupport_create_key();

NDDSUSERDllExport extern void 
unsubscribe_PulseReplyPluginSupport_destroy_key_ex(
    unsubscribe_PulseReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
unsubscribe_PulseReplyPluginSupport_destroy_key(
    unsubscribe_PulseReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
unsubscribe_PulseReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
unsubscribe_PulseReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
unsubscribe_PulseReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
unsubscribe_PulseReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseReply *out,
    const unsubscribe_PulseReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const unsubscribe_PulseReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
unsubscribe_PulseReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
unsubscribe_PulseReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int 
unsubscribe_PulseReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int
unsubscribe_PulseReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
unsubscribe_PulseReplyPlugin_get_key_kind();

NDDSUSERDllExport extern unsigned int 
unsubscribe_PulseReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const unsubscribe_PulseReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
unsubscribe_PulseReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseReplyKeyHolder *key, 
    const unsubscribe_PulseReply *instance);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    unsubscribe_PulseReply *instance, 
    const unsubscribe_PulseReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const unsubscribe_PulseReply *instance);

NDDSUSERDllExport extern RTIBool 
unsubscribe_PulseReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
unsubscribe_PulseReplyPlugin_new();

NDDSUSERDllExport extern void
unsubscribe_PulseReplyPlugin_delete(struct PRESTypePlugin *);
 

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif


/* The type used to store keys for instances of type struct
 * noReturnFunctionRequest.
 *
 * By default, this type is struct noReturnFunctionRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct noReturnFunctionRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct noReturnFunctionRequest, the
 * following restriction applies: the key of struct
 * noReturnFunctionRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct noReturnFunctionRequest.
*/
typedef  struct noReturnFunctionRequest noReturnFunctionRequestKeyHolder;


#define noReturnFunctionRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define noReturnFunctionRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define noReturnFunctionRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define noReturnFunctionRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define noReturnFunctionRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define noReturnFunctionRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define noReturnFunctionRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define noReturnFunctionRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern noReturnFunctionRequest*
noReturnFunctionRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern noReturnFunctionRequest*
noReturnFunctionRequestPluginSupport_create_data();

NDDSUSERDllExport extern RTIBool 
noReturnFunctionRequestPluginSupport_copy_data(
    noReturnFunctionRequest *out,
    const noReturnFunctionRequest *in);

NDDSUSERDllExport extern void 
noReturnFunctionRequestPluginSupport_destroy_data_ex(
    noReturnFunctionRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
noReturnFunctionRequestPluginSupport_destroy_data(
    noReturnFunctionRequest *sample);

NDDSUSERDllExport extern void 
noReturnFunctionRequestPluginSupport_print_data(
    const noReturnFunctionRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern noReturnFunctionRequest*
noReturnFunctionRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern noReturnFunctionRequest*
noReturnFunctionRequestPluginSupport_create_key();

NDDSUSERDllExport extern void 
noReturnFunctionRequestPluginSupport_destroy_key_ex(
    noReturnFunctionRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
noReturnFunctionRequestPluginSupport_destroy_key(
    noReturnFunctionRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
noReturnFunctionRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
noReturnFunctionRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
noReturnFunctionRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
noReturnFunctionRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionRequest *out,
    const noReturnFunctionRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
noReturnFunctionRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const noReturnFunctionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
noReturnFunctionRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
noReturnFunctionRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int 
noReturnFunctionRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int
noReturnFunctionRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
noReturnFunctionRequestPlugin_get_key_kind();

NDDSUSERDllExport extern unsigned int 
noReturnFunctionRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const noReturnFunctionRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
noReturnFunctionRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
noReturnFunctionRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionRequestKeyHolder *key, 
    const noReturnFunctionRequest *instance);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionRequest *instance, 
    const noReturnFunctionRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const noReturnFunctionRequest *instance);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
noReturnFunctionRequestPlugin_new();

NDDSUSERDllExport extern void
noReturnFunctionRequestPlugin_delete(struct PRESTypePlugin *);
 

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif


/* The type used to store keys for instances of type struct
 * noReturnFunctionReply.
 *
 * By default, this type is struct noReturnFunctionReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct noReturnFunctionReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct noReturnFunctionReply, the
 * following restriction applies: the key of struct
 * noReturnFunctionReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct noReturnFunctionReply.
*/
typedef  struct noReturnFunctionReply noReturnFunctionReplyKeyHolder;


#define noReturnFunctionReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define noReturnFunctionReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define noReturnFunctionReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define noReturnFunctionReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define noReturnFunctionReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define noReturnFunctionReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define noReturnFunctionReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define noReturnFunctionReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern noReturnFunctionReply*
noReturnFunctionReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern noReturnFunctionReply*
noReturnFunctionReplyPluginSupport_create_data();

NDDSUSERDllExport extern RTIBool 
noReturnFunctionReplyPluginSupport_copy_data(
    noReturnFunctionReply *out,
    const noReturnFunctionReply *in);

NDDSUSERDllExport extern void 
noReturnFunctionReplyPluginSupport_destroy_data_ex(
    noReturnFunctionReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
noReturnFunctionReplyPluginSupport_destroy_data(
    noReturnFunctionReply *sample);

NDDSUSERDllExport extern void 
noReturnFunctionReplyPluginSupport_print_data(
    const noReturnFunctionReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern noReturnFunctionReply*
noReturnFunctionReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern noReturnFunctionReply*
noReturnFunctionReplyPluginSupport_create_key();

NDDSUSERDllExport extern void 
noReturnFunctionReplyPluginSupport_destroy_key_ex(
    noReturnFunctionReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
noReturnFunctionReplyPluginSupport_destroy_key(
    noReturnFunctionReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
noReturnFunctionReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
noReturnFunctionReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
noReturnFunctionReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
noReturnFunctionReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionReply *out,
    const noReturnFunctionReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
noReturnFunctionReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const noReturnFunctionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
noReturnFunctionReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
noReturnFunctionReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int 
noReturnFunctionReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int
noReturnFunctionReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
noReturnFunctionReplyPlugin_get_key_kind();

NDDSUSERDllExport extern unsigned int 
noReturnFunctionReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const noReturnFunctionReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
noReturnFunctionReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
noReturnFunctionReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionReplyKeyHolder *key, 
    const noReturnFunctionReply *instance);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    noReturnFunctionReply *instance, 
    const noReturnFunctionReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const noReturnFunctionReply *instance);

NDDSUSERDllExport extern RTIBool 
noReturnFunctionReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
noReturnFunctionReplyPlugin_new();

NDDSUSERDllExport extern void
noReturnFunctionReplyPlugin_delete(struct PRESTypePlugin *);
 

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif


#ifdef __cplusplus
}
#endif
        

#endif /* RateGenRequestReplyPlugin_h */
