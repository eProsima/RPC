
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TypedefTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TypedefTestRequestReplyPlugin_1722561767_h
#define TypedefTestRequestReplyPlugin_1722561767_h

#include "TypedefTestRequestReply.h"




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

#include "TypedefTestPlugin.h"


/* The type used to store keys for instances of type struct
 * getLargoRequest.
 *
 * By default, this type is struct getLargoRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getLargoRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getLargoRequest, the
 * following restriction applies: the key of struct
 * getLargoRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getLargoRequest.
*/
typedef  struct getLargoRequest getLargoRequestKeyHolder;


#define getLargoRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getLargoRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getLargoRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getLargoRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getLargoRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getLargoRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getLargoRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getLargoRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getLargoRequest*
getLargoRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLargoRequest*
getLargoRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getLargoRequestPluginSupport_copy_data(
    getLargoRequest *out,
    const getLargoRequest *in);

NDDSUSERDllExport extern void 
getLargoRequestPluginSupport_destroy_data_ex(
    getLargoRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLargoRequestPluginSupport_destroy_data(
    getLargoRequest *sample);

NDDSUSERDllExport extern void 
getLargoRequestPluginSupport_print_data(
    const getLargoRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getLargoRequest*
getLargoRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLargoRequest*
getLargoRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getLargoRequestPluginSupport_destroy_key_ex(
    getLargoRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLargoRequestPluginSupport_destroy_key(
    getLargoRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getLargoRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getLargoRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getLargoRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getLargoRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getLargoRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLargoRequest *out,
    const getLargoRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getLargoRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getLargoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLargoRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLargoRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLargoRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getLargoRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getLargoRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getLargoRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getLargoRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getLargoRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getLargoRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getLargoRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getLargoRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getLargoRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getLargoRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLargoRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLargoRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLargoRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getLargoRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getLargoRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLargoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLargoRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLargoRequestKeyHolder *key, 
    const getLargoRequest *instance);

NDDSUSERDllExport extern RTIBool 
getLargoRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getLargoRequest *instance, 
    const getLargoRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getLargoRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getLargoRequest *instance);

NDDSUSERDllExport extern RTIBool 
getLargoRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getLargoRequestPlugin_new(void);

NDDSUSERDllExport extern void
getLargoRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getLargoReply.
 *
 * By default, this type is struct getLargoReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getLargoReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getLargoReply, the
 * following restriction applies: the key of struct
 * getLargoReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getLargoReply.
*/
typedef  struct getLargoReply getLargoReplyKeyHolder;


#define getLargoReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getLargoReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getLargoReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getLargoReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getLargoReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getLargoReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getLargoReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getLargoReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getLargoReply*
getLargoReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLargoReply*
getLargoReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getLargoReplyPluginSupport_copy_data(
    getLargoReply *out,
    const getLargoReply *in);

NDDSUSERDllExport extern void 
getLargoReplyPluginSupport_destroy_data_ex(
    getLargoReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLargoReplyPluginSupport_destroy_data(
    getLargoReply *sample);

NDDSUSERDllExport extern void 
getLargoReplyPluginSupport_print_data(
    const getLargoReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getLargoReply*
getLargoReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLargoReply*
getLargoReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getLargoReplyPluginSupport_destroy_key_ex(
    getLargoReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLargoReplyPluginSupport_destroy_key(
    getLargoReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getLargoReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getLargoReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getLargoReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getLargoReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getLargoReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLargoReply *out,
    const getLargoReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getLargoReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getLargoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLargoReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLargoReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLargoReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getLargoReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getLargoReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getLargoReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getLargoReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getLargoReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getLargoReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getLargoReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getLargoReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getLargoReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getLargoReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLargoReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLargoReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLargoReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getLargoReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getLargoReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLargoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLargoReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLargoReplyKeyHolder *key, 
    const getLargoReply *instance);

NDDSUSERDllExport extern RTIBool 
getLargoReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getLargoReply *instance, 
    const getLargoReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getLargoReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getLargoReply *instance);

NDDSUSERDllExport extern RTIBool 
getLargoReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getLargoReplyPlugin_new(void);

NDDSUSERDllExport extern void
getLargoReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getLarguisimoRequest.
 *
 * By default, this type is struct getLarguisimoRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getLarguisimoRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getLarguisimoRequest, the
 * following restriction applies: the key of struct
 * getLarguisimoRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getLarguisimoRequest.
*/
typedef  struct getLarguisimoRequest getLarguisimoRequestKeyHolder;


#define getLarguisimoRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getLarguisimoRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getLarguisimoRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getLarguisimoRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getLarguisimoRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getLarguisimoRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getLarguisimoRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getLarguisimoRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getLarguisimoRequest*
getLarguisimoRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLarguisimoRequest*
getLarguisimoRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getLarguisimoRequestPluginSupport_copy_data(
    getLarguisimoRequest *out,
    const getLarguisimoRequest *in);

NDDSUSERDllExport extern void 
getLarguisimoRequestPluginSupport_destroy_data_ex(
    getLarguisimoRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLarguisimoRequestPluginSupport_destroy_data(
    getLarguisimoRequest *sample);

NDDSUSERDllExport extern void 
getLarguisimoRequestPluginSupport_print_data(
    const getLarguisimoRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getLarguisimoRequest*
getLarguisimoRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLarguisimoRequest*
getLarguisimoRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getLarguisimoRequestPluginSupport_destroy_key_ex(
    getLarguisimoRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLarguisimoRequestPluginSupport_destroy_key(
    getLarguisimoRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getLarguisimoRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getLarguisimoRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getLarguisimoRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getLarguisimoRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getLarguisimoRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoRequest *out,
    const getLarguisimoRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getLarguisimoRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getLarguisimoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLarguisimoRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLarguisimoRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getLarguisimoRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getLarguisimoRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getLarguisimoRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getLarguisimoRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getLarguisimoRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getLarguisimoRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getLarguisimoRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getLarguisimoRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getLarguisimoRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLarguisimoRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLarguisimoRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getLarguisimoRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLarguisimoRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoRequestKeyHolder *key, 
    const getLarguisimoRequest *instance);

NDDSUSERDllExport extern RTIBool 
getLarguisimoRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoRequest *instance, 
    const getLarguisimoRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getLarguisimoRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getLarguisimoRequest *instance);

NDDSUSERDllExport extern RTIBool 
getLarguisimoRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getLarguisimoRequestPlugin_new(void);

NDDSUSERDllExport extern void
getLarguisimoRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getLarguisimoReply.
 *
 * By default, this type is struct getLarguisimoReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getLarguisimoReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getLarguisimoReply, the
 * following restriction applies: the key of struct
 * getLarguisimoReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getLarguisimoReply.
*/
typedef  struct getLarguisimoReply getLarguisimoReplyKeyHolder;


#define getLarguisimoReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getLarguisimoReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getLarguisimoReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getLarguisimoReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getLarguisimoReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getLarguisimoReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getLarguisimoReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getLarguisimoReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getLarguisimoReply*
getLarguisimoReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLarguisimoReply*
getLarguisimoReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getLarguisimoReplyPluginSupport_copy_data(
    getLarguisimoReply *out,
    const getLarguisimoReply *in);

NDDSUSERDllExport extern void 
getLarguisimoReplyPluginSupport_destroy_data_ex(
    getLarguisimoReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLarguisimoReplyPluginSupport_destroy_data(
    getLarguisimoReply *sample);

NDDSUSERDllExport extern void 
getLarguisimoReplyPluginSupport_print_data(
    const getLarguisimoReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getLarguisimoReply*
getLarguisimoReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLarguisimoReply*
getLarguisimoReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getLarguisimoReplyPluginSupport_destroy_key_ex(
    getLarguisimoReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLarguisimoReplyPluginSupport_destroy_key(
    getLarguisimoReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getLarguisimoReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getLarguisimoReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getLarguisimoReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getLarguisimoReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getLarguisimoReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoReply *out,
    const getLarguisimoReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getLarguisimoReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getLarguisimoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLarguisimoReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLarguisimoReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getLarguisimoReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getLarguisimoReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getLarguisimoReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getLarguisimoReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getLarguisimoReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getLarguisimoReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getLarguisimoReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getLarguisimoReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getLarguisimoReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLarguisimoReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLarguisimoReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getLarguisimoReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLarguisimoReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoReplyKeyHolder *key, 
    const getLarguisimoReply *instance);

NDDSUSERDllExport extern RTIBool 
getLarguisimoReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getLarguisimoReply *instance, 
    const getLarguisimoReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getLarguisimoReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getLarguisimoReply *instance);

NDDSUSERDllExport extern RTIBool 
getLarguisimoReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getLarguisimoReplyPlugin_new(void);

NDDSUSERDllExport extern void
getLarguisimoReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getDatosDefRequest.
 *
 * By default, this type is struct getDatosDefRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getDatosDefRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getDatosDefRequest, the
 * following restriction applies: the key of struct
 * getDatosDefRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getDatosDefRequest.
*/
typedef  struct getDatosDefRequest getDatosDefRequestKeyHolder;


#define getDatosDefRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getDatosDefRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getDatosDefRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getDatosDefRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getDatosDefRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getDatosDefRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getDatosDefRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getDatosDefRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getDatosDefRequest*
getDatosDefRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getDatosDefRequest*
getDatosDefRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getDatosDefRequestPluginSupport_copy_data(
    getDatosDefRequest *out,
    const getDatosDefRequest *in);

NDDSUSERDllExport extern void 
getDatosDefRequestPluginSupport_destroy_data_ex(
    getDatosDefRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getDatosDefRequestPluginSupport_destroy_data(
    getDatosDefRequest *sample);

NDDSUSERDllExport extern void 
getDatosDefRequestPluginSupport_print_data(
    const getDatosDefRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getDatosDefRequest*
getDatosDefRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getDatosDefRequest*
getDatosDefRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getDatosDefRequestPluginSupport_destroy_key_ex(
    getDatosDefRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getDatosDefRequestPluginSupport_destroy_key(
    getDatosDefRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getDatosDefRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getDatosDefRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getDatosDefRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getDatosDefRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getDatosDefRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefRequest *out,
    const getDatosDefRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getDatosDefRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getDatosDefRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getDatosDefRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDatosDefRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getDatosDefRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getDatosDefRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getDatosDefRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getDatosDefRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getDatosDefRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getDatosDefRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getDatosDefRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getDatosDefRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getDatosDefRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getDatosDefRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDatosDefRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getDatosDefRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDatosDefRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefRequestKeyHolder *key, 
    const getDatosDefRequest *instance);

NDDSUSERDllExport extern RTIBool 
getDatosDefRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefRequest *instance, 
    const getDatosDefRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getDatosDefRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getDatosDefRequest *instance);

NDDSUSERDllExport extern RTIBool 
getDatosDefRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getDatosDefRequestPlugin_new(void);

NDDSUSERDllExport extern void
getDatosDefRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getDatosDefReply.
 *
 * By default, this type is struct getDatosDefReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getDatosDefReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getDatosDefReply, the
 * following restriction applies: the key of struct
 * getDatosDefReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getDatosDefReply.
*/
typedef  struct getDatosDefReply getDatosDefReplyKeyHolder;


#define getDatosDefReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getDatosDefReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getDatosDefReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getDatosDefReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getDatosDefReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getDatosDefReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getDatosDefReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getDatosDefReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getDatosDefReply*
getDatosDefReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getDatosDefReply*
getDatosDefReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getDatosDefReplyPluginSupport_copy_data(
    getDatosDefReply *out,
    const getDatosDefReply *in);

NDDSUSERDllExport extern void 
getDatosDefReplyPluginSupport_destroy_data_ex(
    getDatosDefReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getDatosDefReplyPluginSupport_destroy_data(
    getDatosDefReply *sample);

NDDSUSERDllExport extern void 
getDatosDefReplyPluginSupport_print_data(
    const getDatosDefReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getDatosDefReply*
getDatosDefReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getDatosDefReply*
getDatosDefReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getDatosDefReplyPluginSupport_destroy_key_ex(
    getDatosDefReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getDatosDefReplyPluginSupport_destroy_key(
    getDatosDefReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getDatosDefReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getDatosDefReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getDatosDefReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getDatosDefReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getDatosDefReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefReply *out,
    const getDatosDefReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getDatosDefReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getDatosDefReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getDatosDefReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDatosDefReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getDatosDefReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getDatosDefReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getDatosDefReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getDatosDefReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getDatosDefReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getDatosDefReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getDatosDefReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getDatosDefReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getDatosDefReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getDatosDefReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDatosDefReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getDatosDefReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDatosDefReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefReplyKeyHolder *key, 
    const getDatosDefReply *instance);

NDDSUSERDllExport extern RTIBool 
getDatosDefReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefReply *instance, 
    const getDatosDefReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getDatosDefReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getDatosDefReply *instance);

NDDSUSERDllExport extern RTIBool 
getDatosDefReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getDatosDefReplyPlugin_new(void);

NDDSUSERDllExport extern void
getDatosDefReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getDatosDefondoRequest.
 *
 * By default, this type is struct getDatosDefondoRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getDatosDefondoRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getDatosDefondoRequest, the
 * following restriction applies: the key of struct
 * getDatosDefondoRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getDatosDefondoRequest.
*/
typedef  struct getDatosDefondoRequest getDatosDefondoRequestKeyHolder;


#define getDatosDefondoRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getDatosDefondoRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getDatosDefondoRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getDatosDefondoRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getDatosDefondoRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getDatosDefondoRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getDatosDefondoRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getDatosDefondoRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getDatosDefondoRequest*
getDatosDefondoRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getDatosDefondoRequest*
getDatosDefondoRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoRequestPluginSupport_copy_data(
    getDatosDefondoRequest *out,
    const getDatosDefondoRequest *in);

NDDSUSERDllExport extern void 
getDatosDefondoRequestPluginSupport_destroy_data_ex(
    getDatosDefondoRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getDatosDefondoRequestPluginSupport_destroy_data(
    getDatosDefondoRequest *sample);

NDDSUSERDllExport extern void 
getDatosDefondoRequestPluginSupport_print_data(
    const getDatosDefondoRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getDatosDefondoRequest*
getDatosDefondoRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getDatosDefondoRequest*
getDatosDefondoRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getDatosDefondoRequestPluginSupport_destroy_key_ex(
    getDatosDefondoRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getDatosDefondoRequestPluginSupport_destroy_key(
    getDatosDefondoRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getDatosDefondoRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getDatosDefondoRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getDatosDefondoRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getDatosDefondoRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoRequest *out,
    const getDatosDefondoRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getDatosDefondoRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getDatosDefondoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDatosDefondoRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getDatosDefondoRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getDatosDefondoRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getDatosDefondoRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getDatosDefondoRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getDatosDefondoRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getDatosDefondoRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getDatosDefondoRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getDatosDefondoRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDatosDefondoRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getDatosDefondoRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDatosDefondoRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoRequestKeyHolder *key, 
    const getDatosDefondoRequest *instance);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoRequest *instance, 
    const getDatosDefondoRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getDatosDefondoRequest *instance);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getDatosDefondoRequestPlugin_new(void);

NDDSUSERDllExport extern void
getDatosDefondoRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getDatosDefondoReply.
 *
 * By default, this type is struct getDatosDefondoReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getDatosDefondoReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getDatosDefondoReply, the
 * following restriction applies: the key of struct
 * getDatosDefondoReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getDatosDefondoReply.
*/
typedef  struct getDatosDefondoReply getDatosDefondoReplyKeyHolder;


#define getDatosDefondoReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getDatosDefondoReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getDatosDefondoReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getDatosDefondoReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getDatosDefondoReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getDatosDefondoReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getDatosDefondoReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getDatosDefondoReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getDatosDefondoReply*
getDatosDefondoReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getDatosDefondoReply*
getDatosDefondoReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoReplyPluginSupport_copy_data(
    getDatosDefondoReply *out,
    const getDatosDefondoReply *in);

NDDSUSERDllExport extern void 
getDatosDefondoReplyPluginSupport_destroy_data_ex(
    getDatosDefondoReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getDatosDefondoReplyPluginSupport_destroy_data(
    getDatosDefondoReply *sample);

NDDSUSERDllExport extern void 
getDatosDefondoReplyPluginSupport_print_data(
    const getDatosDefondoReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getDatosDefondoReply*
getDatosDefondoReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getDatosDefondoReply*
getDatosDefondoReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getDatosDefondoReplyPluginSupport_destroy_key_ex(
    getDatosDefondoReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getDatosDefondoReplyPluginSupport_destroy_key(
    getDatosDefondoReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getDatosDefondoReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getDatosDefondoReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getDatosDefondoReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getDatosDefondoReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoReply *out,
    const getDatosDefondoReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getDatosDefondoReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getDatosDefondoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDatosDefondoReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getDatosDefondoReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getDatosDefondoReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getDatosDefondoReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getDatosDefondoReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getDatosDefondoReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getDatosDefondoReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getDatosDefondoReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getDatosDefondoReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDatosDefondoReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getDatosDefondoReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDatosDefondoReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoReplyKeyHolder *key, 
    const getDatosDefondoReply *instance);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getDatosDefondoReply *instance, 
    const getDatosDefondoReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getDatosDefondoReply *instance);

NDDSUSERDllExport extern RTIBool 
getDatosDefondoReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getDatosDefondoReplyPlugin_new(void);

NDDSUSERDllExport extern void
getDatosDefondoReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getCadenaRequest.
 *
 * By default, this type is struct getCadenaRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getCadenaRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getCadenaRequest, the
 * following restriction applies: the key of struct
 * getCadenaRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getCadenaRequest.
*/
typedef  struct getCadenaRequest getCadenaRequestKeyHolder;


#define getCadenaRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getCadenaRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getCadenaRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getCadenaRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getCadenaRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getCadenaRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getCadenaRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getCadenaRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getCadenaRequest*
getCadenaRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getCadenaRequest*
getCadenaRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getCadenaRequestPluginSupport_copy_data(
    getCadenaRequest *out,
    const getCadenaRequest *in);

NDDSUSERDllExport extern void 
getCadenaRequestPluginSupport_destroy_data_ex(
    getCadenaRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getCadenaRequestPluginSupport_destroy_data(
    getCadenaRequest *sample);

NDDSUSERDllExport extern void 
getCadenaRequestPluginSupport_print_data(
    const getCadenaRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getCadenaRequest*
getCadenaRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getCadenaRequest*
getCadenaRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getCadenaRequestPluginSupport_destroy_key_ex(
    getCadenaRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getCadenaRequestPluginSupport_destroy_key(
    getCadenaRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getCadenaRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getCadenaRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getCadenaRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getCadenaRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getCadenaRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaRequest *out,
    const getCadenaRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getCadenaRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getCadenaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getCadenaRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCadenaRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getCadenaRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getCadenaRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getCadenaRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getCadenaRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getCadenaRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getCadenaRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getCadenaRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getCadenaRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getCadenaRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getCadenaRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCadenaRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getCadenaRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCadenaRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaRequestKeyHolder *key, 
    const getCadenaRequest *instance);

NDDSUSERDllExport extern RTIBool 
getCadenaRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaRequest *instance, 
    const getCadenaRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getCadenaRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getCadenaRequest *instance);

NDDSUSERDllExport extern RTIBool 
getCadenaRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getCadenaRequestPlugin_new(void);

NDDSUSERDllExport extern void
getCadenaRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getCadenaReply.
 *
 * By default, this type is struct getCadenaReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getCadenaReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getCadenaReply, the
 * following restriction applies: the key of struct
 * getCadenaReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getCadenaReply.
*/
typedef  struct getCadenaReply getCadenaReplyKeyHolder;


#define getCadenaReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getCadenaReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getCadenaReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getCadenaReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getCadenaReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getCadenaReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getCadenaReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getCadenaReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getCadenaReply*
getCadenaReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getCadenaReply*
getCadenaReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getCadenaReplyPluginSupport_copy_data(
    getCadenaReply *out,
    const getCadenaReply *in);

NDDSUSERDllExport extern void 
getCadenaReplyPluginSupport_destroy_data_ex(
    getCadenaReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getCadenaReplyPluginSupport_destroy_data(
    getCadenaReply *sample);

NDDSUSERDllExport extern void 
getCadenaReplyPluginSupport_print_data(
    const getCadenaReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getCadenaReply*
getCadenaReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getCadenaReply*
getCadenaReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getCadenaReplyPluginSupport_destroy_key_ex(
    getCadenaReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getCadenaReplyPluginSupport_destroy_key(
    getCadenaReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getCadenaReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getCadenaReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getCadenaReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getCadenaReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getCadenaReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaReply *out,
    const getCadenaReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getCadenaReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getCadenaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getCadenaReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCadenaReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getCadenaReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getCadenaReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getCadenaReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getCadenaReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getCadenaReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getCadenaReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getCadenaReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getCadenaReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getCadenaReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getCadenaReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCadenaReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getCadenaReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCadenaReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaReplyKeyHolder *key, 
    const getCadenaReply *instance);

NDDSUSERDllExport extern RTIBool 
getCadenaReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getCadenaReply *instance, 
    const getCadenaReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getCadenaReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getCadenaReply *instance);

NDDSUSERDllExport extern RTIBool 
getCadenaReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getCadenaReplyPlugin_new(void);

NDDSUSERDllExport extern void
getCadenaReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getCorreaRequest.
 *
 * By default, this type is struct getCorreaRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getCorreaRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getCorreaRequest, the
 * following restriction applies: the key of struct
 * getCorreaRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getCorreaRequest.
*/
typedef  struct getCorreaRequest getCorreaRequestKeyHolder;


#define getCorreaRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getCorreaRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getCorreaRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getCorreaRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getCorreaRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getCorreaRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getCorreaRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getCorreaRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getCorreaRequest*
getCorreaRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getCorreaRequest*
getCorreaRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getCorreaRequestPluginSupport_copy_data(
    getCorreaRequest *out,
    const getCorreaRequest *in);

NDDSUSERDllExport extern void 
getCorreaRequestPluginSupport_destroy_data_ex(
    getCorreaRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getCorreaRequestPluginSupport_destroy_data(
    getCorreaRequest *sample);

NDDSUSERDllExport extern void 
getCorreaRequestPluginSupport_print_data(
    const getCorreaRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getCorreaRequest*
getCorreaRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getCorreaRequest*
getCorreaRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getCorreaRequestPluginSupport_destroy_key_ex(
    getCorreaRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getCorreaRequestPluginSupport_destroy_key(
    getCorreaRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getCorreaRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getCorreaRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getCorreaRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getCorreaRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getCorreaRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaRequest *out,
    const getCorreaRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getCorreaRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getCorreaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getCorreaRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCorreaRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getCorreaRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getCorreaRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getCorreaRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getCorreaRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getCorreaRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getCorreaRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getCorreaRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getCorreaRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getCorreaRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getCorreaRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCorreaRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getCorreaRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCorreaRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaRequestKeyHolder *key, 
    const getCorreaRequest *instance);

NDDSUSERDllExport extern RTIBool 
getCorreaRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaRequest *instance, 
    const getCorreaRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getCorreaRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getCorreaRequest *instance);

NDDSUSERDllExport extern RTIBool 
getCorreaRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getCorreaRequestPlugin_new(void);

NDDSUSERDllExport extern void
getCorreaRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getCorreaReply.
 *
 * By default, this type is struct getCorreaReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getCorreaReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getCorreaReply, the
 * following restriction applies: the key of struct
 * getCorreaReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getCorreaReply.
*/
typedef  struct getCorreaReply getCorreaReplyKeyHolder;


#define getCorreaReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getCorreaReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getCorreaReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getCorreaReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getCorreaReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getCorreaReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getCorreaReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getCorreaReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getCorreaReply*
getCorreaReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getCorreaReply*
getCorreaReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getCorreaReplyPluginSupport_copy_data(
    getCorreaReply *out,
    const getCorreaReply *in);

NDDSUSERDllExport extern void 
getCorreaReplyPluginSupport_destroy_data_ex(
    getCorreaReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getCorreaReplyPluginSupport_destroy_data(
    getCorreaReply *sample);

NDDSUSERDllExport extern void 
getCorreaReplyPluginSupport_print_data(
    const getCorreaReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getCorreaReply*
getCorreaReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getCorreaReply*
getCorreaReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getCorreaReplyPluginSupport_destroy_key_ex(
    getCorreaReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getCorreaReplyPluginSupport_destroy_key(
    getCorreaReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getCorreaReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getCorreaReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getCorreaReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getCorreaReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getCorreaReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaReply *out,
    const getCorreaReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getCorreaReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getCorreaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getCorreaReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCorreaReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getCorreaReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getCorreaReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getCorreaReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getCorreaReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getCorreaReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getCorreaReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getCorreaReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getCorreaReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getCorreaReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getCorreaReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCorreaReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getCorreaReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCorreaReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaReplyKeyHolder *key, 
    const getCorreaReply *instance);

NDDSUSERDllExport extern RTIBool 
getCorreaReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getCorreaReply *instance, 
    const getCorreaReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getCorreaReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getCorreaReply *instance);

NDDSUSERDllExport extern RTIBool 
getCorreaReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getCorreaReplyPlugin_new(void);

NDDSUSERDllExport extern void
getCorreaReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* TypedefTestRequestReplyPlugin_1722561767_h */
