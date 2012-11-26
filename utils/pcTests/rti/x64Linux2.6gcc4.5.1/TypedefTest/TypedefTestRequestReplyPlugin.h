
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TypedefTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TypedefTestRequestReplyPlugin_1722562421_h
#define TypedefTestRequestReplyPlugin_1722562421_h

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

#include "MessageHeaderPlugin.h"


#include "TypedefTestPlugin.h"


/* The type used to store keys for instances of type struct
 * TypedefTest_getLargoRequest.
 *
 * By default, this type is struct TypedefTest_getLargoRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TypedefTest_getLargoRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TypedefTest_getLargoRequest, the
 * following restriction applies: the key of struct
 * TypedefTest_getLargoRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TypedefTest_getLargoRequest.
*/
typedef  struct TypedefTest_getLargoRequest TypedefTest_getLargoRequestKeyHolder;


#define TypedefTest_getLargoRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypedefTest_getLargoRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define TypedefTest_getLargoRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypedefTest_getLargoRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypedefTest_getLargoRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TypedefTest_getLargoRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TypedefTest_getLargoRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypedefTest_getLargoRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypedefTest_getLargoRequest*
TypedefTest_getLargoRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getLargoRequest*
TypedefTest_getLargoRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoRequestPluginSupport_copy_data(
    TypedefTest_getLargoRequest *out,
    const TypedefTest_getLargoRequest *in);

NDDSUSERDllExport extern void 
TypedefTest_getLargoRequestPluginSupport_destroy_data_ex(
    TypedefTest_getLargoRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getLargoRequestPluginSupport_destroy_data(
    TypedefTest_getLargoRequest *sample);

NDDSUSERDllExport extern void 
TypedefTest_getLargoRequestPluginSupport_print_data(
    const TypedefTest_getLargoRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TypedefTest_getLargoRequest*
TypedefTest_getLargoRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getLargoRequest*
TypedefTest_getLargoRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TypedefTest_getLargoRequestPluginSupport_destroy_key_ex(
    TypedefTest_getLargoRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getLargoRequestPluginSupport_destroy_key(
    TypedefTest_getLargoRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypedefTest_getLargoRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypedefTest_getLargoRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypedefTest_getLargoRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypedefTest_getLargoRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoRequest *out,
    const TypedefTest_getLargoRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getLargoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TypedefTest_getLargoRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getLargoRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getLargoRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypedefTest_getLargoRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypedefTest_getLargoRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypedefTest_getLargoRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getLargoRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getLargoRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TypedefTest_getLargoRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoRequestKeyHolder *key, 
    const TypedefTest_getLargoRequest *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoRequest *instance, 
    const TypedefTest_getLargoRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TypedefTest_getLargoRequest *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypedefTest_getLargoRequestPlugin_new(void);

NDDSUSERDllExport extern void
TypedefTest_getLargoRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TypedefTest_getLargoReply.
 *
 * By default, this type is struct TypedefTest_getLargoReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TypedefTest_getLargoReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TypedefTest_getLargoReply, the
 * following restriction applies: the key of struct
 * TypedefTest_getLargoReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TypedefTest_getLargoReply.
*/
typedef  struct TypedefTest_getLargoReply TypedefTest_getLargoReplyKeyHolder;


#define TypedefTest_getLargoReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypedefTest_getLargoReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define TypedefTest_getLargoReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypedefTest_getLargoReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypedefTest_getLargoReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TypedefTest_getLargoReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TypedefTest_getLargoReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypedefTest_getLargoReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypedefTest_getLargoReply*
TypedefTest_getLargoReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getLargoReply*
TypedefTest_getLargoReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoReplyPluginSupport_copy_data(
    TypedefTest_getLargoReply *out,
    const TypedefTest_getLargoReply *in);

NDDSUSERDllExport extern void 
TypedefTest_getLargoReplyPluginSupport_destroy_data_ex(
    TypedefTest_getLargoReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getLargoReplyPluginSupport_destroy_data(
    TypedefTest_getLargoReply *sample);

NDDSUSERDllExport extern void 
TypedefTest_getLargoReplyPluginSupport_print_data(
    const TypedefTest_getLargoReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TypedefTest_getLargoReply*
TypedefTest_getLargoReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getLargoReply*
TypedefTest_getLargoReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TypedefTest_getLargoReplyPluginSupport_destroy_key_ex(
    TypedefTest_getLargoReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getLargoReplyPluginSupport_destroy_key(
    TypedefTest_getLargoReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypedefTest_getLargoReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypedefTest_getLargoReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypedefTest_getLargoReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypedefTest_getLargoReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoReply *out,
    const TypedefTest_getLargoReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getLargoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TypedefTest_getLargoReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getLargoReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getLargoReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypedefTest_getLargoReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypedefTest_getLargoReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypedefTest_getLargoReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getLargoReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getLargoReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TypedefTest_getLargoReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoReplyKeyHolder *key, 
    const TypedefTest_getLargoReply *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLargoReply *instance, 
    const TypedefTest_getLargoReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TypedefTest_getLargoReply *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLargoReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypedefTest_getLargoReplyPlugin_new(void);

NDDSUSERDllExport extern void
TypedefTest_getLargoReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TypedefTest_getLarguisimoRequest.
 *
 * By default, this type is struct TypedefTest_getLarguisimoRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TypedefTest_getLarguisimoRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TypedefTest_getLarguisimoRequest, the
 * following restriction applies: the key of struct
 * TypedefTest_getLarguisimoRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TypedefTest_getLarguisimoRequest.
*/
typedef  struct TypedefTest_getLarguisimoRequest TypedefTest_getLarguisimoRequestKeyHolder;


#define TypedefTest_getLarguisimoRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypedefTest_getLarguisimoRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define TypedefTest_getLarguisimoRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypedefTest_getLarguisimoRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypedefTest_getLarguisimoRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TypedefTest_getLarguisimoRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TypedefTest_getLarguisimoRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypedefTest_getLarguisimoRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypedefTest_getLarguisimoRequest*
TypedefTest_getLarguisimoRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getLarguisimoRequest*
TypedefTest_getLarguisimoRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoRequestPluginSupport_copy_data(
    TypedefTest_getLarguisimoRequest *out,
    const TypedefTest_getLarguisimoRequest *in);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoRequestPluginSupport_destroy_data_ex(
    TypedefTest_getLarguisimoRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoRequestPluginSupport_destroy_data(
    TypedefTest_getLarguisimoRequest *sample);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoRequestPluginSupport_print_data(
    const TypedefTest_getLarguisimoRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TypedefTest_getLarguisimoRequest*
TypedefTest_getLarguisimoRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getLarguisimoRequest*
TypedefTest_getLarguisimoRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoRequestPluginSupport_destroy_key_ex(
    TypedefTest_getLarguisimoRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoRequestPluginSupport_destroy_key(
    TypedefTest_getLarguisimoRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypedefTest_getLarguisimoRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypedefTest_getLarguisimoRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoRequest *out,
    const TypedefTest_getLarguisimoRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getLarguisimoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TypedefTest_getLarguisimoRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getLarguisimoRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getLarguisimoRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypedefTest_getLarguisimoRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypedefTest_getLarguisimoRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypedefTest_getLarguisimoRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getLarguisimoRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getLarguisimoRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TypedefTest_getLarguisimoRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoRequestKeyHolder *key, 
    const TypedefTest_getLarguisimoRequest *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoRequest *instance, 
    const TypedefTest_getLarguisimoRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TypedefTest_getLarguisimoRequest *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypedefTest_getLarguisimoRequestPlugin_new(void);

NDDSUSERDllExport extern void
TypedefTest_getLarguisimoRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TypedefTest_getLarguisimoReply.
 *
 * By default, this type is struct TypedefTest_getLarguisimoReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TypedefTest_getLarguisimoReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TypedefTest_getLarguisimoReply, the
 * following restriction applies: the key of struct
 * TypedefTest_getLarguisimoReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TypedefTest_getLarguisimoReply.
*/
typedef  struct TypedefTest_getLarguisimoReply TypedefTest_getLarguisimoReplyKeyHolder;


#define TypedefTest_getLarguisimoReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypedefTest_getLarguisimoReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define TypedefTest_getLarguisimoReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypedefTest_getLarguisimoReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypedefTest_getLarguisimoReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TypedefTest_getLarguisimoReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TypedefTest_getLarguisimoReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypedefTest_getLarguisimoReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypedefTest_getLarguisimoReply*
TypedefTest_getLarguisimoReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getLarguisimoReply*
TypedefTest_getLarguisimoReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoReplyPluginSupport_copy_data(
    TypedefTest_getLarguisimoReply *out,
    const TypedefTest_getLarguisimoReply *in);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoReplyPluginSupport_destroy_data_ex(
    TypedefTest_getLarguisimoReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoReplyPluginSupport_destroy_data(
    TypedefTest_getLarguisimoReply *sample);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoReplyPluginSupport_print_data(
    const TypedefTest_getLarguisimoReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TypedefTest_getLarguisimoReply*
TypedefTest_getLarguisimoReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getLarguisimoReply*
TypedefTest_getLarguisimoReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoReplyPluginSupport_destroy_key_ex(
    TypedefTest_getLarguisimoReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoReplyPluginSupport_destroy_key(
    TypedefTest_getLarguisimoReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypedefTest_getLarguisimoReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypedefTest_getLarguisimoReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypedefTest_getLarguisimoReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoReply *out,
    const TypedefTest_getLarguisimoReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getLarguisimoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TypedefTest_getLarguisimoReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getLarguisimoReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getLarguisimoReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypedefTest_getLarguisimoReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypedefTest_getLarguisimoReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypedefTest_getLarguisimoReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getLarguisimoReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getLarguisimoReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TypedefTest_getLarguisimoReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoReplyKeyHolder *key, 
    const TypedefTest_getLarguisimoReply *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getLarguisimoReply *instance, 
    const TypedefTest_getLarguisimoReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TypedefTest_getLarguisimoReply *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getLarguisimoReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypedefTest_getLarguisimoReplyPlugin_new(void);

NDDSUSERDllExport extern void
TypedefTest_getLarguisimoReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TypedefTest_getDatosDefRequest.
 *
 * By default, this type is struct TypedefTest_getDatosDefRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TypedefTest_getDatosDefRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TypedefTest_getDatosDefRequest, the
 * following restriction applies: the key of struct
 * TypedefTest_getDatosDefRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TypedefTest_getDatosDefRequest.
*/
typedef  struct TypedefTest_getDatosDefRequest TypedefTest_getDatosDefRequestKeyHolder;


#define TypedefTest_getDatosDefRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypedefTest_getDatosDefRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define TypedefTest_getDatosDefRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypedefTest_getDatosDefRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypedefTest_getDatosDefRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TypedefTest_getDatosDefRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TypedefTest_getDatosDefRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypedefTest_getDatosDefRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypedefTest_getDatosDefRequest*
TypedefTest_getDatosDefRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getDatosDefRequest*
TypedefTest_getDatosDefRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefRequestPluginSupport_copy_data(
    TypedefTest_getDatosDefRequest *out,
    const TypedefTest_getDatosDefRequest *in);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefRequestPluginSupport_destroy_data_ex(
    TypedefTest_getDatosDefRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefRequestPluginSupport_destroy_data(
    TypedefTest_getDatosDefRequest *sample);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefRequestPluginSupport_print_data(
    const TypedefTest_getDatosDefRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TypedefTest_getDatosDefRequest*
TypedefTest_getDatosDefRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getDatosDefRequest*
TypedefTest_getDatosDefRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefRequestPluginSupport_destroy_key_ex(
    TypedefTest_getDatosDefRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefRequestPluginSupport_destroy_key(
    TypedefTest_getDatosDefRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypedefTest_getDatosDefRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypedefTest_getDatosDefRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefRequest *out,
    const TypedefTest_getDatosDefRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getDatosDefRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TypedefTest_getDatosDefRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getDatosDefRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getDatosDefRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypedefTest_getDatosDefRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypedefTest_getDatosDefRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypedefTest_getDatosDefRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getDatosDefRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getDatosDefRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TypedefTest_getDatosDefRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefRequestKeyHolder *key, 
    const TypedefTest_getDatosDefRequest *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefRequest *instance, 
    const TypedefTest_getDatosDefRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TypedefTest_getDatosDefRequest *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypedefTest_getDatosDefRequestPlugin_new(void);

NDDSUSERDllExport extern void
TypedefTest_getDatosDefRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TypedefTest_getDatosDefReply.
 *
 * By default, this type is struct TypedefTest_getDatosDefReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TypedefTest_getDatosDefReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TypedefTest_getDatosDefReply, the
 * following restriction applies: the key of struct
 * TypedefTest_getDatosDefReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TypedefTest_getDatosDefReply.
*/
typedef  struct TypedefTest_getDatosDefReply TypedefTest_getDatosDefReplyKeyHolder;


#define TypedefTest_getDatosDefReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypedefTest_getDatosDefReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define TypedefTest_getDatosDefReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypedefTest_getDatosDefReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypedefTest_getDatosDefReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TypedefTest_getDatosDefReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TypedefTest_getDatosDefReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypedefTest_getDatosDefReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypedefTest_getDatosDefReply*
TypedefTest_getDatosDefReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getDatosDefReply*
TypedefTest_getDatosDefReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefReplyPluginSupport_copy_data(
    TypedefTest_getDatosDefReply *out,
    const TypedefTest_getDatosDefReply *in);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefReplyPluginSupport_destroy_data_ex(
    TypedefTest_getDatosDefReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefReplyPluginSupport_destroy_data(
    TypedefTest_getDatosDefReply *sample);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefReplyPluginSupport_print_data(
    const TypedefTest_getDatosDefReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TypedefTest_getDatosDefReply*
TypedefTest_getDatosDefReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getDatosDefReply*
TypedefTest_getDatosDefReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefReplyPluginSupport_destroy_key_ex(
    TypedefTest_getDatosDefReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefReplyPluginSupport_destroy_key(
    TypedefTest_getDatosDefReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypedefTest_getDatosDefReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypedefTest_getDatosDefReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefReply *out,
    const TypedefTest_getDatosDefReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getDatosDefReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TypedefTest_getDatosDefReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getDatosDefReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getDatosDefReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypedefTest_getDatosDefReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypedefTest_getDatosDefReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypedefTest_getDatosDefReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getDatosDefReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getDatosDefReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TypedefTest_getDatosDefReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefReplyKeyHolder *key, 
    const TypedefTest_getDatosDefReply *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefReply *instance, 
    const TypedefTest_getDatosDefReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TypedefTest_getDatosDefReply *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypedefTest_getDatosDefReplyPlugin_new(void);

NDDSUSERDllExport extern void
TypedefTest_getDatosDefReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TypedefTest_getDatosDefondoRequest.
 *
 * By default, this type is struct TypedefTest_getDatosDefondoRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TypedefTest_getDatosDefondoRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TypedefTest_getDatosDefondoRequest, the
 * following restriction applies: the key of struct
 * TypedefTest_getDatosDefondoRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TypedefTest_getDatosDefondoRequest.
*/
typedef  struct TypedefTest_getDatosDefondoRequest TypedefTest_getDatosDefondoRequestKeyHolder;


#define TypedefTest_getDatosDefondoRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypedefTest_getDatosDefondoRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define TypedefTest_getDatosDefondoRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypedefTest_getDatosDefondoRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypedefTest_getDatosDefondoRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TypedefTest_getDatosDefondoRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TypedefTest_getDatosDefondoRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypedefTest_getDatosDefondoRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypedefTest_getDatosDefondoRequest*
TypedefTest_getDatosDefondoRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getDatosDefondoRequest*
TypedefTest_getDatosDefondoRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoRequestPluginSupport_copy_data(
    TypedefTest_getDatosDefondoRequest *out,
    const TypedefTest_getDatosDefondoRequest *in);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoRequestPluginSupport_destroy_data_ex(
    TypedefTest_getDatosDefondoRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoRequestPluginSupport_destroy_data(
    TypedefTest_getDatosDefondoRequest *sample);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoRequestPluginSupport_print_data(
    const TypedefTest_getDatosDefondoRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TypedefTest_getDatosDefondoRequest*
TypedefTest_getDatosDefondoRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getDatosDefondoRequest*
TypedefTest_getDatosDefondoRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoRequestPluginSupport_destroy_key_ex(
    TypedefTest_getDatosDefondoRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoRequestPluginSupport_destroy_key(
    TypedefTest_getDatosDefondoRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypedefTest_getDatosDefondoRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypedefTest_getDatosDefondoRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoRequest *out,
    const TypedefTest_getDatosDefondoRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getDatosDefondoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TypedefTest_getDatosDefondoRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getDatosDefondoRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getDatosDefondoRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypedefTest_getDatosDefondoRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypedefTest_getDatosDefondoRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypedefTest_getDatosDefondoRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getDatosDefondoRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getDatosDefondoRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TypedefTest_getDatosDefondoRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoRequestKeyHolder *key, 
    const TypedefTest_getDatosDefondoRequest *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoRequest *instance, 
    const TypedefTest_getDatosDefondoRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TypedefTest_getDatosDefondoRequest *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypedefTest_getDatosDefondoRequestPlugin_new(void);

NDDSUSERDllExport extern void
TypedefTest_getDatosDefondoRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TypedefTest_getDatosDefondoReply.
 *
 * By default, this type is struct TypedefTest_getDatosDefondoReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TypedefTest_getDatosDefondoReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TypedefTest_getDatosDefondoReply, the
 * following restriction applies: the key of struct
 * TypedefTest_getDatosDefondoReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TypedefTest_getDatosDefondoReply.
*/
typedef  struct TypedefTest_getDatosDefondoReply TypedefTest_getDatosDefondoReplyKeyHolder;


#define TypedefTest_getDatosDefondoReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypedefTest_getDatosDefondoReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define TypedefTest_getDatosDefondoReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypedefTest_getDatosDefondoReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypedefTest_getDatosDefondoReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TypedefTest_getDatosDefondoReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TypedefTest_getDatosDefondoReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypedefTest_getDatosDefondoReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypedefTest_getDatosDefondoReply*
TypedefTest_getDatosDefondoReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getDatosDefondoReply*
TypedefTest_getDatosDefondoReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoReplyPluginSupport_copy_data(
    TypedefTest_getDatosDefondoReply *out,
    const TypedefTest_getDatosDefondoReply *in);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoReplyPluginSupport_destroy_data_ex(
    TypedefTest_getDatosDefondoReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoReplyPluginSupport_destroy_data(
    TypedefTest_getDatosDefondoReply *sample);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoReplyPluginSupport_print_data(
    const TypedefTest_getDatosDefondoReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TypedefTest_getDatosDefondoReply*
TypedefTest_getDatosDefondoReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getDatosDefondoReply*
TypedefTest_getDatosDefondoReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoReplyPluginSupport_destroy_key_ex(
    TypedefTest_getDatosDefondoReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoReplyPluginSupport_destroy_key(
    TypedefTest_getDatosDefondoReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypedefTest_getDatosDefondoReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypedefTest_getDatosDefondoReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypedefTest_getDatosDefondoReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoReply *out,
    const TypedefTest_getDatosDefondoReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getDatosDefondoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TypedefTest_getDatosDefondoReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getDatosDefondoReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getDatosDefondoReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypedefTest_getDatosDefondoReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypedefTest_getDatosDefondoReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypedefTest_getDatosDefondoReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getDatosDefondoReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getDatosDefondoReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TypedefTest_getDatosDefondoReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoReplyKeyHolder *key, 
    const TypedefTest_getDatosDefondoReply *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getDatosDefondoReply *instance, 
    const TypedefTest_getDatosDefondoReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TypedefTest_getDatosDefondoReply *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getDatosDefondoReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypedefTest_getDatosDefondoReplyPlugin_new(void);

NDDSUSERDllExport extern void
TypedefTest_getDatosDefondoReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TypedefTest_getCadenaRequest.
 *
 * By default, this type is struct TypedefTest_getCadenaRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TypedefTest_getCadenaRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TypedefTest_getCadenaRequest, the
 * following restriction applies: the key of struct
 * TypedefTest_getCadenaRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TypedefTest_getCadenaRequest.
*/
typedef  struct TypedefTest_getCadenaRequest TypedefTest_getCadenaRequestKeyHolder;


#define TypedefTest_getCadenaRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypedefTest_getCadenaRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define TypedefTest_getCadenaRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypedefTest_getCadenaRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypedefTest_getCadenaRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TypedefTest_getCadenaRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TypedefTest_getCadenaRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypedefTest_getCadenaRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypedefTest_getCadenaRequest*
TypedefTest_getCadenaRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getCadenaRequest*
TypedefTest_getCadenaRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaRequestPluginSupport_copy_data(
    TypedefTest_getCadenaRequest *out,
    const TypedefTest_getCadenaRequest *in);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaRequestPluginSupport_destroy_data_ex(
    TypedefTest_getCadenaRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaRequestPluginSupport_destroy_data(
    TypedefTest_getCadenaRequest *sample);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaRequestPluginSupport_print_data(
    const TypedefTest_getCadenaRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TypedefTest_getCadenaRequest*
TypedefTest_getCadenaRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getCadenaRequest*
TypedefTest_getCadenaRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaRequestPluginSupport_destroy_key_ex(
    TypedefTest_getCadenaRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaRequestPluginSupport_destroy_key(
    TypedefTest_getCadenaRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypedefTest_getCadenaRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypedefTest_getCadenaRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaRequest *out,
    const TypedefTest_getCadenaRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getCadenaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TypedefTest_getCadenaRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getCadenaRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getCadenaRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypedefTest_getCadenaRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypedefTest_getCadenaRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypedefTest_getCadenaRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getCadenaRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getCadenaRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TypedefTest_getCadenaRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaRequestKeyHolder *key, 
    const TypedefTest_getCadenaRequest *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaRequest *instance, 
    const TypedefTest_getCadenaRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TypedefTest_getCadenaRequest *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypedefTest_getCadenaRequestPlugin_new(void);

NDDSUSERDllExport extern void
TypedefTest_getCadenaRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TypedefTest_getCadenaReply.
 *
 * By default, this type is struct TypedefTest_getCadenaReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TypedefTest_getCadenaReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TypedefTest_getCadenaReply, the
 * following restriction applies: the key of struct
 * TypedefTest_getCadenaReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TypedefTest_getCadenaReply.
*/
typedef  struct TypedefTest_getCadenaReply TypedefTest_getCadenaReplyKeyHolder;


#define TypedefTest_getCadenaReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypedefTest_getCadenaReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define TypedefTest_getCadenaReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypedefTest_getCadenaReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypedefTest_getCadenaReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TypedefTest_getCadenaReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TypedefTest_getCadenaReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypedefTest_getCadenaReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypedefTest_getCadenaReply*
TypedefTest_getCadenaReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getCadenaReply*
TypedefTest_getCadenaReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaReplyPluginSupport_copy_data(
    TypedefTest_getCadenaReply *out,
    const TypedefTest_getCadenaReply *in);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaReplyPluginSupport_destroy_data_ex(
    TypedefTest_getCadenaReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaReplyPluginSupport_destroy_data(
    TypedefTest_getCadenaReply *sample);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaReplyPluginSupport_print_data(
    const TypedefTest_getCadenaReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TypedefTest_getCadenaReply*
TypedefTest_getCadenaReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getCadenaReply*
TypedefTest_getCadenaReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaReplyPluginSupport_destroy_key_ex(
    TypedefTest_getCadenaReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaReplyPluginSupport_destroy_key(
    TypedefTest_getCadenaReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypedefTest_getCadenaReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypedefTest_getCadenaReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypedefTest_getCadenaReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaReply *out,
    const TypedefTest_getCadenaReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getCadenaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TypedefTest_getCadenaReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getCadenaReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getCadenaReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypedefTest_getCadenaReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypedefTest_getCadenaReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypedefTest_getCadenaReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getCadenaReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getCadenaReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TypedefTest_getCadenaReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaReplyKeyHolder *key, 
    const TypedefTest_getCadenaReply *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCadenaReply *instance, 
    const TypedefTest_getCadenaReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TypedefTest_getCadenaReply *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCadenaReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypedefTest_getCadenaReplyPlugin_new(void);

NDDSUSERDllExport extern void
TypedefTest_getCadenaReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TypedefTest_getCorreaRequest.
 *
 * By default, this type is struct TypedefTest_getCorreaRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TypedefTest_getCorreaRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TypedefTest_getCorreaRequest, the
 * following restriction applies: the key of struct
 * TypedefTest_getCorreaRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TypedefTest_getCorreaRequest.
*/
typedef  struct TypedefTest_getCorreaRequest TypedefTest_getCorreaRequestKeyHolder;


#define TypedefTest_getCorreaRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypedefTest_getCorreaRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define TypedefTest_getCorreaRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypedefTest_getCorreaRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypedefTest_getCorreaRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TypedefTest_getCorreaRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TypedefTest_getCorreaRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypedefTest_getCorreaRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypedefTest_getCorreaRequest*
TypedefTest_getCorreaRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getCorreaRequest*
TypedefTest_getCorreaRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaRequestPluginSupport_copy_data(
    TypedefTest_getCorreaRequest *out,
    const TypedefTest_getCorreaRequest *in);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaRequestPluginSupport_destroy_data_ex(
    TypedefTest_getCorreaRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaRequestPluginSupport_destroy_data(
    TypedefTest_getCorreaRequest *sample);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaRequestPluginSupport_print_data(
    const TypedefTest_getCorreaRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TypedefTest_getCorreaRequest*
TypedefTest_getCorreaRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getCorreaRequest*
TypedefTest_getCorreaRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaRequestPluginSupport_destroy_key_ex(
    TypedefTest_getCorreaRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaRequestPluginSupport_destroy_key(
    TypedefTest_getCorreaRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypedefTest_getCorreaRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypedefTest_getCorreaRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaRequest *out,
    const TypedefTest_getCorreaRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getCorreaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TypedefTest_getCorreaRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getCorreaRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getCorreaRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypedefTest_getCorreaRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypedefTest_getCorreaRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypedefTest_getCorreaRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getCorreaRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getCorreaRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TypedefTest_getCorreaRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaRequestKeyHolder *key, 
    const TypedefTest_getCorreaRequest *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaRequest *instance, 
    const TypedefTest_getCorreaRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TypedefTest_getCorreaRequest *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypedefTest_getCorreaRequestPlugin_new(void);

NDDSUSERDllExport extern void
TypedefTest_getCorreaRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TypedefTest_getCorreaReply.
 *
 * By default, this type is struct TypedefTest_getCorreaReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TypedefTest_getCorreaReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TypedefTest_getCorreaReply, the
 * following restriction applies: the key of struct
 * TypedefTest_getCorreaReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TypedefTest_getCorreaReply.
*/
typedef  struct TypedefTest_getCorreaReply TypedefTest_getCorreaReplyKeyHolder;


#define TypedefTest_getCorreaReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define TypedefTest_getCorreaReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define TypedefTest_getCorreaReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TypedefTest_getCorreaReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TypedefTest_getCorreaReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TypedefTest_getCorreaReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TypedefTest_getCorreaReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TypedefTest_getCorreaReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TypedefTest_getCorreaReply*
TypedefTest_getCorreaReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getCorreaReply*
TypedefTest_getCorreaReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaReplyPluginSupport_copy_data(
    TypedefTest_getCorreaReply *out,
    const TypedefTest_getCorreaReply *in);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaReplyPluginSupport_destroy_data_ex(
    TypedefTest_getCorreaReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaReplyPluginSupport_destroy_data(
    TypedefTest_getCorreaReply *sample);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaReplyPluginSupport_print_data(
    const TypedefTest_getCorreaReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TypedefTest_getCorreaReply*
TypedefTest_getCorreaReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TypedefTest_getCorreaReply*
TypedefTest_getCorreaReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaReplyPluginSupport_destroy_key_ex(
    TypedefTest_getCorreaReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaReplyPluginSupport_destroy_key(
    TypedefTest_getCorreaReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TypedefTest_getCorreaReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TypedefTest_getCorreaReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TypedefTest_getCorreaReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaReply *out,
    const TypedefTest_getCorreaReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getCorreaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
TypedefTest_getCorreaReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getCorreaReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getCorreaReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TypedefTest_getCorreaReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TypedefTest_getCorreaReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TypedefTest_getCorreaReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TypedefTest_getCorreaReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TypedefTest_getCorreaReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TypedefTest_getCorreaReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaReplyKeyHolder *key, 
    const TypedefTest_getCorreaReply *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TypedefTest_getCorreaReply *instance, 
    const TypedefTest_getCorreaReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TypedefTest_getCorreaReply *instance);

NDDSUSERDllExport extern RTIBool 
TypedefTest_getCorreaReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TypedefTest_getCorreaReplyPlugin_new(void);

NDDSUSERDllExport extern void
TypedefTest_getCorreaReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* TypedefTestRequestReplyPlugin_1722562421_h */
