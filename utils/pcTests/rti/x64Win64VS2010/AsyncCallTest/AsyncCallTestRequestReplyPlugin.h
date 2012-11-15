
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AsyncCallTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef AsyncCallTestRequestReplyPlugin_842828649_h
#define AsyncCallTestRequestReplyPlugin_842828649_h

#include "AsyncCallTestRequestReply.h"




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


#include "AsyncCallTestPlugin.h"


/* The type used to store keys for instances of type struct
 * AsyncCallTest_getLongRequest.
 *
 * By default, this type is struct AsyncCallTest_getLongRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct AsyncCallTest_getLongRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct AsyncCallTest_getLongRequest, the
 * following restriction applies: the key of struct
 * AsyncCallTest_getLongRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct AsyncCallTest_getLongRequest.
*/
typedef  struct AsyncCallTest_getLongRequest AsyncCallTest_getLongRequestKeyHolder;


#define AsyncCallTest_getLongRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define AsyncCallTest_getLongRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define AsyncCallTest_getLongRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define AsyncCallTest_getLongRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define AsyncCallTest_getLongRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define AsyncCallTest_getLongRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define AsyncCallTest_getLongRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define AsyncCallTest_getLongRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern AsyncCallTest_getLongRequest*
AsyncCallTest_getLongRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_getLongRequest*
AsyncCallTest_getLongRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongRequestPluginSupport_copy_data(
    AsyncCallTest_getLongRequest *out,
    const AsyncCallTest_getLongRequest *in);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongRequestPluginSupport_destroy_data_ex(
    AsyncCallTest_getLongRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongRequestPluginSupport_destroy_data(
    AsyncCallTest_getLongRequest *sample);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongRequestPluginSupport_print_data(
    const AsyncCallTest_getLongRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern AsyncCallTest_getLongRequest*
AsyncCallTest_getLongRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_getLongRequest*
AsyncCallTest_getLongRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongRequestPluginSupport_destroy_key_ex(
    AsyncCallTest_getLongRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongRequestPluginSupport_destroy_key(
    AsyncCallTest_getLongRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
AsyncCallTest_getLongRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
AsyncCallTest_getLongRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongRequest *out,
    const AsyncCallTest_getLongRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_getLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
AsyncCallTest_getLongRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getLongRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getLongRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AsyncCallTest_getLongRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AsyncCallTest_getLongRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
AsyncCallTest_getLongRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getLongRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_getLongRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
AsyncCallTest_getLongRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongRequestKeyHolder *key, 
    const AsyncCallTest_getLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongRequest *instance, 
    const AsyncCallTest_getLongRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const AsyncCallTest_getLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
AsyncCallTest_getLongRequestPlugin_new(void);

NDDSUSERDllExport extern void
AsyncCallTest_getLongRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * AsyncCallTest_getLongReply.
 *
 * By default, this type is struct AsyncCallTest_getLongReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct AsyncCallTest_getLongReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct AsyncCallTest_getLongReply, the
 * following restriction applies: the key of struct
 * AsyncCallTest_getLongReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct AsyncCallTest_getLongReply.
*/
typedef  struct AsyncCallTest_getLongReply AsyncCallTest_getLongReplyKeyHolder;


#define AsyncCallTest_getLongReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define AsyncCallTest_getLongReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define AsyncCallTest_getLongReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define AsyncCallTest_getLongReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define AsyncCallTest_getLongReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define AsyncCallTest_getLongReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define AsyncCallTest_getLongReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define AsyncCallTest_getLongReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern AsyncCallTest_getLongReply*
AsyncCallTest_getLongReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_getLongReply*
AsyncCallTest_getLongReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongReplyPluginSupport_copy_data(
    AsyncCallTest_getLongReply *out,
    const AsyncCallTest_getLongReply *in);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongReplyPluginSupport_destroy_data_ex(
    AsyncCallTest_getLongReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongReplyPluginSupport_destroy_data(
    AsyncCallTest_getLongReply *sample);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongReplyPluginSupport_print_data(
    const AsyncCallTest_getLongReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern AsyncCallTest_getLongReply*
AsyncCallTest_getLongReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_getLongReply*
AsyncCallTest_getLongReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongReplyPluginSupport_destroy_key_ex(
    AsyncCallTest_getLongReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongReplyPluginSupport_destroy_key(
    AsyncCallTest_getLongReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
AsyncCallTest_getLongReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
AsyncCallTest_getLongReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
AsyncCallTest_getLongReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongReply *out,
    const AsyncCallTest_getLongReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_getLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
AsyncCallTest_getLongReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getLongReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getLongReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AsyncCallTest_getLongReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AsyncCallTest_getLongReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
AsyncCallTest_getLongReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getLongReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_getLongReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
AsyncCallTest_getLongReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongReplyKeyHolder *key, 
    const AsyncCallTest_getLongReply *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getLongReply *instance, 
    const AsyncCallTest_getLongReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const AsyncCallTest_getLongReply *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getLongReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
AsyncCallTest_getLongReplyPlugin_new(void);

NDDSUSERDllExport extern void
AsyncCallTest_getLongReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * AsyncCallTest_getBooleanRequest.
 *
 * By default, this type is struct AsyncCallTest_getBooleanRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct AsyncCallTest_getBooleanRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct AsyncCallTest_getBooleanRequest, the
 * following restriction applies: the key of struct
 * AsyncCallTest_getBooleanRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct AsyncCallTest_getBooleanRequest.
*/
typedef  struct AsyncCallTest_getBooleanRequest AsyncCallTest_getBooleanRequestKeyHolder;


#define AsyncCallTest_getBooleanRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define AsyncCallTest_getBooleanRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define AsyncCallTest_getBooleanRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define AsyncCallTest_getBooleanRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define AsyncCallTest_getBooleanRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define AsyncCallTest_getBooleanRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define AsyncCallTest_getBooleanRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define AsyncCallTest_getBooleanRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern AsyncCallTest_getBooleanRequest*
AsyncCallTest_getBooleanRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_getBooleanRequest*
AsyncCallTest_getBooleanRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanRequestPluginSupport_copy_data(
    AsyncCallTest_getBooleanRequest *out,
    const AsyncCallTest_getBooleanRequest *in);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanRequestPluginSupport_destroy_data_ex(
    AsyncCallTest_getBooleanRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanRequestPluginSupport_destroy_data(
    AsyncCallTest_getBooleanRequest *sample);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanRequestPluginSupport_print_data(
    const AsyncCallTest_getBooleanRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern AsyncCallTest_getBooleanRequest*
AsyncCallTest_getBooleanRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_getBooleanRequest*
AsyncCallTest_getBooleanRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanRequestPluginSupport_destroy_key_ex(
    AsyncCallTest_getBooleanRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanRequestPluginSupport_destroy_key(
    AsyncCallTest_getBooleanRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
AsyncCallTest_getBooleanRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
AsyncCallTest_getBooleanRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanRequest *out,
    const AsyncCallTest_getBooleanRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_getBooleanRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
AsyncCallTest_getBooleanRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getBooleanRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getBooleanRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AsyncCallTest_getBooleanRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AsyncCallTest_getBooleanRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
AsyncCallTest_getBooleanRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getBooleanRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_getBooleanRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
AsyncCallTest_getBooleanRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanRequestKeyHolder *key, 
    const AsyncCallTest_getBooleanRequest *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanRequest *instance, 
    const AsyncCallTest_getBooleanRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const AsyncCallTest_getBooleanRequest *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
AsyncCallTest_getBooleanRequestPlugin_new(void);

NDDSUSERDllExport extern void
AsyncCallTest_getBooleanRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * AsyncCallTest_getBooleanReply.
 *
 * By default, this type is struct AsyncCallTest_getBooleanReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct AsyncCallTest_getBooleanReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct AsyncCallTest_getBooleanReply, the
 * following restriction applies: the key of struct
 * AsyncCallTest_getBooleanReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct AsyncCallTest_getBooleanReply.
*/
typedef  struct AsyncCallTest_getBooleanReply AsyncCallTest_getBooleanReplyKeyHolder;


#define AsyncCallTest_getBooleanReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define AsyncCallTest_getBooleanReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define AsyncCallTest_getBooleanReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define AsyncCallTest_getBooleanReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define AsyncCallTest_getBooleanReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define AsyncCallTest_getBooleanReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define AsyncCallTest_getBooleanReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define AsyncCallTest_getBooleanReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern AsyncCallTest_getBooleanReply*
AsyncCallTest_getBooleanReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_getBooleanReply*
AsyncCallTest_getBooleanReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanReplyPluginSupport_copy_data(
    AsyncCallTest_getBooleanReply *out,
    const AsyncCallTest_getBooleanReply *in);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanReplyPluginSupport_destroy_data_ex(
    AsyncCallTest_getBooleanReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanReplyPluginSupport_destroy_data(
    AsyncCallTest_getBooleanReply *sample);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanReplyPluginSupport_print_data(
    const AsyncCallTest_getBooleanReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern AsyncCallTest_getBooleanReply*
AsyncCallTest_getBooleanReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_getBooleanReply*
AsyncCallTest_getBooleanReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanReplyPluginSupport_destroy_key_ex(
    AsyncCallTest_getBooleanReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanReplyPluginSupport_destroy_key(
    AsyncCallTest_getBooleanReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
AsyncCallTest_getBooleanReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
AsyncCallTest_getBooleanReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
AsyncCallTest_getBooleanReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanReply *out,
    const AsyncCallTest_getBooleanReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_getBooleanReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
AsyncCallTest_getBooleanReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getBooleanReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getBooleanReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AsyncCallTest_getBooleanReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AsyncCallTest_getBooleanReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
AsyncCallTest_getBooleanReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getBooleanReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_getBooleanReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
AsyncCallTest_getBooleanReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanReplyKeyHolder *key, 
    const AsyncCallTest_getBooleanReply *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getBooleanReply *instance, 
    const AsyncCallTest_getBooleanReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const AsyncCallTest_getBooleanReply *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getBooleanReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
AsyncCallTest_getBooleanReplyPlugin_new(void);

NDDSUSERDllExport extern void
AsyncCallTest_getBooleanReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * AsyncCallTest_getStringRequest.
 *
 * By default, this type is struct AsyncCallTest_getStringRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct AsyncCallTest_getStringRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct AsyncCallTest_getStringRequest, the
 * following restriction applies: the key of struct
 * AsyncCallTest_getStringRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct AsyncCallTest_getStringRequest.
*/
typedef  struct AsyncCallTest_getStringRequest AsyncCallTest_getStringRequestKeyHolder;


#define AsyncCallTest_getStringRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define AsyncCallTest_getStringRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define AsyncCallTest_getStringRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define AsyncCallTest_getStringRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define AsyncCallTest_getStringRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define AsyncCallTest_getStringRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define AsyncCallTest_getStringRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define AsyncCallTest_getStringRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern AsyncCallTest_getStringRequest*
AsyncCallTest_getStringRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_getStringRequest*
AsyncCallTest_getStringRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringRequestPluginSupport_copy_data(
    AsyncCallTest_getStringRequest *out,
    const AsyncCallTest_getStringRequest *in);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringRequestPluginSupport_destroy_data_ex(
    AsyncCallTest_getStringRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringRequestPluginSupport_destroy_data(
    AsyncCallTest_getStringRequest *sample);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringRequestPluginSupport_print_data(
    const AsyncCallTest_getStringRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern AsyncCallTest_getStringRequest*
AsyncCallTest_getStringRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_getStringRequest*
AsyncCallTest_getStringRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringRequestPluginSupport_destroy_key_ex(
    AsyncCallTest_getStringRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringRequestPluginSupport_destroy_key(
    AsyncCallTest_getStringRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
AsyncCallTest_getStringRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
AsyncCallTest_getStringRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringRequest *out,
    const AsyncCallTest_getStringRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_getStringRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
AsyncCallTest_getStringRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getStringRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getStringRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AsyncCallTest_getStringRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AsyncCallTest_getStringRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
AsyncCallTest_getStringRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getStringRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_getStringRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
AsyncCallTest_getStringRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringRequestKeyHolder *key, 
    const AsyncCallTest_getStringRequest *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringRequest *instance, 
    const AsyncCallTest_getStringRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const AsyncCallTest_getStringRequest *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
AsyncCallTest_getStringRequestPlugin_new(void);

NDDSUSERDllExport extern void
AsyncCallTest_getStringRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * AsyncCallTest_getStringReply.
 *
 * By default, this type is struct AsyncCallTest_getStringReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct AsyncCallTest_getStringReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct AsyncCallTest_getStringReply, the
 * following restriction applies: the key of struct
 * AsyncCallTest_getStringReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct AsyncCallTest_getStringReply.
*/
typedef  struct AsyncCallTest_getStringReply AsyncCallTest_getStringReplyKeyHolder;


#define AsyncCallTest_getStringReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define AsyncCallTest_getStringReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define AsyncCallTest_getStringReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define AsyncCallTest_getStringReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define AsyncCallTest_getStringReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define AsyncCallTest_getStringReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define AsyncCallTest_getStringReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define AsyncCallTest_getStringReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern AsyncCallTest_getStringReply*
AsyncCallTest_getStringReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_getStringReply*
AsyncCallTest_getStringReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringReplyPluginSupport_copy_data(
    AsyncCallTest_getStringReply *out,
    const AsyncCallTest_getStringReply *in);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringReplyPluginSupport_destroy_data_ex(
    AsyncCallTest_getStringReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringReplyPluginSupport_destroy_data(
    AsyncCallTest_getStringReply *sample);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringReplyPluginSupport_print_data(
    const AsyncCallTest_getStringReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern AsyncCallTest_getStringReply*
AsyncCallTest_getStringReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_getStringReply*
AsyncCallTest_getStringReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringReplyPluginSupport_destroy_key_ex(
    AsyncCallTest_getStringReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringReplyPluginSupport_destroy_key(
    AsyncCallTest_getStringReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
AsyncCallTest_getStringReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
AsyncCallTest_getStringReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
AsyncCallTest_getStringReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringReply *out,
    const AsyncCallTest_getStringReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_getStringReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
AsyncCallTest_getStringReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getStringReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getStringReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AsyncCallTest_getStringReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AsyncCallTest_getStringReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
AsyncCallTest_getStringReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_getStringReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_getStringReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
AsyncCallTest_getStringReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringReplyKeyHolder *key, 
    const AsyncCallTest_getStringReply *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_getStringReply *instance, 
    const AsyncCallTest_getStringReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const AsyncCallTest_getStringReply *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_getStringReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
AsyncCallTest_getStringReplyPlugin_new(void);

NDDSUSERDllExport extern void
AsyncCallTest_getStringReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * AsyncCallTest_duplicateRequest.
 *
 * By default, this type is struct AsyncCallTest_duplicateRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct AsyncCallTest_duplicateRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct AsyncCallTest_duplicateRequest, the
 * following restriction applies: the key of struct
 * AsyncCallTest_duplicateRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct AsyncCallTest_duplicateRequest.
*/
typedef  struct AsyncCallTest_duplicateRequest AsyncCallTest_duplicateRequestKeyHolder;


#define AsyncCallTest_duplicateRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define AsyncCallTest_duplicateRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define AsyncCallTest_duplicateRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define AsyncCallTest_duplicateRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define AsyncCallTest_duplicateRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define AsyncCallTest_duplicateRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define AsyncCallTest_duplicateRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define AsyncCallTest_duplicateRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern AsyncCallTest_duplicateRequest*
AsyncCallTest_duplicateRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_duplicateRequest*
AsyncCallTest_duplicateRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateRequestPluginSupport_copy_data(
    AsyncCallTest_duplicateRequest *out,
    const AsyncCallTest_duplicateRequest *in);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateRequestPluginSupport_destroy_data_ex(
    AsyncCallTest_duplicateRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateRequestPluginSupport_destroy_data(
    AsyncCallTest_duplicateRequest *sample);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateRequestPluginSupport_print_data(
    const AsyncCallTest_duplicateRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern AsyncCallTest_duplicateRequest*
AsyncCallTest_duplicateRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_duplicateRequest*
AsyncCallTest_duplicateRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateRequestPluginSupport_destroy_key_ex(
    AsyncCallTest_duplicateRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateRequestPluginSupport_destroy_key(
    AsyncCallTest_duplicateRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
AsyncCallTest_duplicateRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
AsyncCallTest_duplicateRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateRequest *out,
    const AsyncCallTest_duplicateRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_duplicateRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
AsyncCallTest_duplicateRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_duplicateRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_duplicateRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AsyncCallTest_duplicateRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AsyncCallTest_duplicateRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
AsyncCallTest_duplicateRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_duplicateRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_duplicateRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
AsyncCallTest_duplicateRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateRequestKeyHolder *key, 
    const AsyncCallTest_duplicateRequest *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateRequest *instance, 
    const AsyncCallTest_duplicateRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const AsyncCallTest_duplicateRequest *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
AsyncCallTest_duplicateRequestPlugin_new(void);

NDDSUSERDllExport extern void
AsyncCallTest_duplicateRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * AsyncCallTest_duplicateReply.
 *
 * By default, this type is struct AsyncCallTest_duplicateReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct AsyncCallTest_duplicateReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct AsyncCallTest_duplicateReply, the
 * following restriction applies: the key of struct
 * AsyncCallTest_duplicateReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct AsyncCallTest_duplicateReply.
*/
typedef  struct AsyncCallTest_duplicateReply AsyncCallTest_duplicateReplyKeyHolder;


#define AsyncCallTest_duplicateReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define AsyncCallTest_duplicateReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define AsyncCallTest_duplicateReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define AsyncCallTest_duplicateReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define AsyncCallTest_duplicateReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define AsyncCallTest_duplicateReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define AsyncCallTest_duplicateReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define AsyncCallTest_duplicateReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern AsyncCallTest_duplicateReply*
AsyncCallTest_duplicateReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_duplicateReply*
AsyncCallTest_duplicateReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateReplyPluginSupport_copy_data(
    AsyncCallTest_duplicateReply *out,
    const AsyncCallTest_duplicateReply *in);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateReplyPluginSupport_destroy_data_ex(
    AsyncCallTest_duplicateReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateReplyPluginSupport_destroy_data(
    AsyncCallTest_duplicateReply *sample);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateReplyPluginSupport_print_data(
    const AsyncCallTest_duplicateReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern AsyncCallTest_duplicateReply*
AsyncCallTest_duplicateReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AsyncCallTest_duplicateReply*
AsyncCallTest_duplicateReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateReplyPluginSupport_destroy_key_ex(
    AsyncCallTest_duplicateReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateReplyPluginSupport_destroy_key(
    AsyncCallTest_duplicateReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
AsyncCallTest_duplicateReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
AsyncCallTest_duplicateReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
AsyncCallTest_duplicateReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateReply *out,
    const AsyncCallTest_duplicateReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_duplicateReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
AsyncCallTest_duplicateReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_duplicateReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_duplicateReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AsyncCallTest_duplicateReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AsyncCallTest_duplicateReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
AsyncCallTest_duplicateReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
AsyncCallTest_duplicateReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AsyncCallTest_duplicateReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
AsyncCallTest_duplicateReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateReplyKeyHolder *key, 
    const AsyncCallTest_duplicateReply *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    AsyncCallTest_duplicateReply *instance, 
    const AsyncCallTest_duplicateReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const AsyncCallTest_duplicateReply *instance);

NDDSUSERDllExport extern RTIBool 
AsyncCallTest_duplicateReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
AsyncCallTest_duplicateReplyPlugin_new(void);

NDDSUSERDllExport extern void
AsyncCallTest_duplicateReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* AsyncCallTestRequestReplyPlugin_842828649_h */
