
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EnumYStringTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef EnumYStringTestRequestReplyPlugin_1383307737_h
#define EnumYStringTestRequestReplyPlugin_1383307737_h

#include "EnumYStringTestRequestReply.h"




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


#include "EnumYStringTestPlugin.h"


/* The type used to store keys for instances of type struct
 * getEnumRequest.
 *
 * By default, this type is struct getEnumRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getEnumRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getEnumRequest, the
 * following restriction applies: the key of struct
 * getEnumRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getEnumRequest.
*/
typedef  struct getEnumRequest getEnumRequestKeyHolder;


#define getEnumRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getEnumRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getEnumRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getEnumRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getEnumRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getEnumRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getEnumRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getEnumRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getEnumRequest*
getEnumRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getEnumRequest*
getEnumRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getEnumRequestPluginSupport_copy_data(
    getEnumRequest *out,
    const getEnumRequest *in);

NDDSUSERDllExport extern void 
getEnumRequestPluginSupport_destroy_data_ex(
    getEnumRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getEnumRequestPluginSupport_destroy_data(
    getEnumRequest *sample);

NDDSUSERDllExport extern void 
getEnumRequestPluginSupport_print_data(
    const getEnumRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getEnumRequest*
getEnumRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getEnumRequest*
getEnumRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getEnumRequestPluginSupport_destroy_key_ex(
    getEnumRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getEnumRequestPluginSupport_destroy_key(
    getEnumRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getEnumRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getEnumRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getEnumRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getEnumRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getEnumRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getEnumRequest *out,
    const getEnumRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getEnumRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getEnumRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getEnumRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getEnumRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getEnumRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getEnumRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getEnumRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getEnumRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getEnumRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getEnumRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getEnumRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getEnumRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getEnumRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getEnumRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getEnumRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getEnumRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getEnumRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getEnumRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getEnumRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getEnumRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getEnumRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getEnumRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getEnumRequestKeyHolder *key, 
    const getEnumRequest *instance);

NDDSUSERDllExport extern RTIBool 
getEnumRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getEnumRequest *instance, 
    const getEnumRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getEnumRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getEnumRequest *instance);

NDDSUSERDllExport extern RTIBool 
getEnumRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getEnumRequestPlugin_new(void);

NDDSUSERDllExport extern void
getEnumRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getEnumReply.
 *
 * By default, this type is struct getEnumReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getEnumReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getEnumReply, the
 * following restriction applies: the key of struct
 * getEnumReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getEnumReply.
*/
typedef  struct getEnumReply getEnumReplyKeyHolder;


#define getEnumReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getEnumReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getEnumReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getEnumReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getEnumReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getEnumReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getEnumReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getEnumReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getEnumReply*
getEnumReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getEnumReply*
getEnumReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getEnumReplyPluginSupport_copy_data(
    getEnumReply *out,
    const getEnumReply *in);

NDDSUSERDllExport extern void 
getEnumReplyPluginSupport_destroy_data_ex(
    getEnumReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getEnumReplyPluginSupport_destroy_data(
    getEnumReply *sample);

NDDSUSERDllExport extern void 
getEnumReplyPluginSupport_print_data(
    const getEnumReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getEnumReply*
getEnumReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getEnumReply*
getEnumReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getEnumReplyPluginSupport_destroy_key_ex(
    getEnumReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getEnumReplyPluginSupport_destroy_key(
    getEnumReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getEnumReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getEnumReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getEnumReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getEnumReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getEnumReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getEnumReply *out,
    const getEnumReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getEnumReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getEnumReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getEnumReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getEnumReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getEnumReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getEnumReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getEnumReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getEnumReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getEnumReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getEnumReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getEnumReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getEnumReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getEnumReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getEnumReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getEnumReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getEnumReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getEnumReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getEnumReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getEnumReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getEnumReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getEnumReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getEnumReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getEnumReplyKeyHolder *key, 
    const getEnumReply *instance);

NDDSUSERDllExport extern RTIBool 
getEnumReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getEnumReply *instance, 
    const getEnumReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getEnumReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getEnumReply *instance);

NDDSUSERDllExport extern RTIBool 
getEnumReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getEnumReplyPlugin_new(void);

NDDSUSERDllExport extern void
getEnumReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getStringRequest.
 *
 * By default, this type is struct getStringRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getStringRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getStringRequest, the
 * following restriction applies: the key of struct
 * getStringRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getStringRequest.
*/
typedef  struct getStringRequest getStringRequestKeyHolder;


#define getStringRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getStringRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getStringRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getStringRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getStringRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getStringRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getStringRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getStringRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getStringRequest*
getStringRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getStringRequest*
getStringRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getStringRequestPluginSupport_copy_data(
    getStringRequest *out,
    const getStringRequest *in);

NDDSUSERDllExport extern void 
getStringRequestPluginSupport_destroy_data_ex(
    getStringRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getStringRequestPluginSupport_destroy_data(
    getStringRequest *sample);

NDDSUSERDllExport extern void 
getStringRequestPluginSupport_print_data(
    const getStringRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getStringRequest*
getStringRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getStringRequest*
getStringRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getStringRequestPluginSupport_destroy_key_ex(
    getStringRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getStringRequestPluginSupport_destroy_key(
    getStringRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getStringRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getStringRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getStringRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getStringRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getStringRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getStringRequest *out,
    const getStringRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getStringRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getStringRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getStringRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getStringRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getStringRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getStringRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getStringRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getStringRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getStringRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getStringRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getStringRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getStringRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getStringRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getStringRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getStringRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getStringRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getStringRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getStringRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getStringRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getStringRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getStringRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getStringRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getStringRequestKeyHolder *key, 
    const getStringRequest *instance);

NDDSUSERDllExport extern RTIBool 
getStringRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getStringRequest *instance, 
    const getStringRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getStringRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getStringRequest *instance);

NDDSUSERDllExport extern RTIBool 
getStringRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getStringRequestPlugin_new(void);

NDDSUSERDllExport extern void
getStringRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getStringReply.
 *
 * By default, this type is struct getStringReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getStringReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getStringReply, the
 * following restriction applies: the key of struct
 * getStringReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getStringReply.
*/
typedef  struct getStringReply getStringReplyKeyHolder;


#define getStringReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getStringReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getStringReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getStringReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getStringReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getStringReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getStringReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getStringReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getStringReply*
getStringReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getStringReply*
getStringReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getStringReplyPluginSupport_copy_data(
    getStringReply *out,
    const getStringReply *in);

NDDSUSERDllExport extern void 
getStringReplyPluginSupport_destroy_data_ex(
    getStringReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getStringReplyPluginSupport_destroy_data(
    getStringReply *sample);

NDDSUSERDllExport extern void 
getStringReplyPluginSupport_print_data(
    const getStringReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getStringReply*
getStringReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getStringReply*
getStringReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getStringReplyPluginSupport_destroy_key_ex(
    getStringReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getStringReplyPluginSupport_destroy_key(
    getStringReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getStringReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getStringReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getStringReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getStringReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getStringReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getStringReply *out,
    const getStringReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getStringReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getStringReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getStringReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getStringReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getStringReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getStringReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getStringReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getStringReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getStringReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getStringReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getStringReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getStringReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getStringReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getStringReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getStringReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getStringReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getStringReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getStringReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getStringReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getStringReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getStringReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getStringReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getStringReplyKeyHolder *key, 
    const getStringReply *instance);

NDDSUSERDllExport extern RTIBool 
getStringReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getStringReply *instance, 
    const getStringReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getStringReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getStringReply *instance);

NDDSUSERDllExport extern RTIBool 
getStringReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getStringReplyPlugin_new(void);

NDDSUSERDllExport extern void
getStringReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getStringBoundedRequest.
 *
 * By default, this type is struct getStringBoundedRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getStringBoundedRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getStringBoundedRequest, the
 * following restriction applies: the key of struct
 * getStringBoundedRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getStringBoundedRequest.
*/
typedef  struct getStringBoundedRequest getStringBoundedRequestKeyHolder;


#define getStringBoundedRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getStringBoundedRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getStringBoundedRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getStringBoundedRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getStringBoundedRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getStringBoundedRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getStringBoundedRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getStringBoundedRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getStringBoundedRequest*
getStringBoundedRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getStringBoundedRequest*
getStringBoundedRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getStringBoundedRequestPluginSupport_copy_data(
    getStringBoundedRequest *out,
    const getStringBoundedRequest *in);

NDDSUSERDllExport extern void 
getStringBoundedRequestPluginSupport_destroy_data_ex(
    getStringBoundedRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getStringBoundedRequestPluginSupport_destroy_data(
    getStringBoundedRequest *sample);

NDDSUSERDllExport extern void 
getStringBoundedRequestPluginSupport_print_data(
    const getStringBoundedRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getStringBoundedRequest*
getStringBoundedRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getStringBoundedRequest*
getStringBoundedRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getStringBoundedRequestPluginSupport_destroy_key_ex(
    getStringBoundedRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getStringBoundedRequestPluginSupport_destroy_key(
    getStringBoundedRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getStringBoundedRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getStringBoundedRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getStringBoundedRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getStringBoundedRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getStringBoundedRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedRequest *out,
    const getStringBoundedRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getStringBoundedRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getStringBoundedRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getStringBoundedRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getStringBoundedRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getStringBoundedRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getStringBoundedRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getStringBoundedRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getStringBoundedRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getStringBoundedRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getStringBoundedRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getStringBoundedRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getStringBoundedRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getStringBoundedRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getStringBoundedRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getStringBoundedRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getStringBoundedRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getStringBoundedRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedRequestKeyHolder *key, 
    const getStringBoundedRequest *instance);

NDDSUSERDllExport extern RTIBool 
getStringBoundedRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedRequest *instance, 
    const getStringBoundedRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getStringBoundedRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getStringBoundedRequest *instance);

NDDSUSERDllExport extern RTIBool 
getStringBoundedRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getStringBoundedRequestPlugin_new(void);

NDDSUSERDllExport extern void
getStringBoundedRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getStringBoundedReply.
 *
 * By default, this type is struct getStringBoundedReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getStringBoundedReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getStringBoundedReply, the
 * following restriction applies: the key of struct
 * getStringBoundedReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getStringBoundedReply.
*/
typedef  struct getStringBoundedReply getStringBoundedReplyKeyHolder;


#define getStringBoundedReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getStringBoundedReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getStringBoundedReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getStringBoundedReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getStringBoundedReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getStringBoundedReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getStringBoundedReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getStringBoundedReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getStringBoundedReply*
getStringBoundedReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getStringBoundedReply*
getStringBoundedReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getStringBoundedReplyPluginSupport_copy_data(
    getStringBoundedReply *out,
    const getStringBoundedReply *in);

NDDSUSERDllExport extern void 
getStringBoundedReplyPluginSupport_destroy_data_ex(
    getStringBoundedReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getStringBoundedReplyPluginSupport_destroy_data(
    getStringBoundedReply *sample);

NDDSUSERDllExport extern void 
getStringBoundedReplyPluginSupport_print_data(
    const getStringBoundedReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getStringBoundedReply*
getStringBoundedReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getStringBoundedReply*
getStringBoundedReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getStringBoundedReplyPluginSupport_destroy_key_ex(
    getStringBoundedReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getStringBoundedReplyPluginSupport_destroy_key(
    getStringBoundedReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getStringBoundedReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getStringBoundedReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getStringBoundedReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getStringBoundedReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getStringBoundedReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedReply *out,
    const getStringBoundedReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getStringBoundedReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getStringBoundedReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getStringBoundedReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getStringBoundedReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getStringBoundedReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getStringBoundedReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getStringBoundedReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getStringBoundedReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getStringBoundedReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getStringBoundedReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getStringBoundedReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getStringBoundedReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getStringBoundedReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getStringBoundedReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getStringBoundedReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getStringBoundedReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getStringBoundedReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedReplyKeyHolder *key, 
    const getStringBoundedReply *instance);

NDDSUSERDllExport extern RTIBool 
getStringBoundedReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getStringBoundedReply *instance, 
    const getStringBoundedReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getStringBoundedReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getStringBoundedReply *instance);

NDDSUSERDllExport extern RTIBool 
getStringBoundedReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getStringBoundedReplyPlugin_new(void);

NDDSUSERDllExport extern void
getStringBoundedReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* EnumYStringTestRequestReplyPlugin_1383307737_h */
