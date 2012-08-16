
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BasicTypeTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BasicTypeTestRequestReplyPlugin_2120090866_h
#define BasicTypeTestRequestReplyPlugin_2120090866_h

#include "BasicTypeTestRequestReply.h"




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

#include "BasicTypeTestPlugin.h"


/* The type used to store keys for instances of type struct
 * getOctetRequest.
 *
 * By default, this type is struct getOctetRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getOctetRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getOctetRequest, the
 * following restriction applies: the key of struct
 * getOctetRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getOctetRequest.
*/
typedef  struct getOctetRequest getOctetRequestKeyHolder;


#define getOctetRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getOctetRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getOctetRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getOctetRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getOctetRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getOctetRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getOctetRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getOctetRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getOctetRequest*
getOctetRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getOctetRequest*
getOctetRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getOctetRequestPluginSupport_copy_data(
    getOctetRequest *out,
    const getOctetRequest *in);

NDDSUSERDllExport extern void 
getOctetRequestPluginSupport_destroy_data_ex(
    getOctetRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getOctetRequestPluginSupport_destroy_data(
    getOctetRequest *sample);

NDDSUSERDllExport extern void 
getOctetRequestPluginSupport_print_data(
    const getOctetRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getOctetRequest*
getOctetRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getOctetRequest*
getOctetRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getOctetRequestPluginSupport_destroy_key_ex(
    getOctetRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getOctetRequestPluginSupport_destroy_key(
    getOctetRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getOctetRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getOctetRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getOctetRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getOctetRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getOctetRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getOctetRequest *out,
    const getOctetRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getOctetRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getOctetRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getOctetRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getOctetRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getOctetRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getOctetRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getOctetRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getOctetRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getOctetRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getOctetRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getOctetRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getOctetRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getOctetRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getOctetRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getOctetRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getOctetRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getOctetRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getOctetRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getOctetRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getOctetRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getOctetRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getOctetRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getOctetRequestKeyHolder *key, 
    const getOctetRequest *instance);

NDDSUSERDllExport extern RTIBool 
getOctetRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getOctetRequest *instance, 
    const getOctetRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getOctetRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getOctetRequest *instance);

NDDSUSERDllExport extern RTIBool 
getOctetRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getOctetRequestPlugin_new(void);

NDDSUSERDllExport extern void
getOctetRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getOctetReply.
 *
 * By default, this type is struct getOctetReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getOctetReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getOctetReply, the
 * following restriction applies: the key of struct
 * getOctetReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getOctetReply.
*/
typedef  struct getOctetReply getOctetReplyKeyHolder;


#define getOctetReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getOctetReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getOctetReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getOctetReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getOctetReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getOctetReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getOctetReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getOctetReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getOctetReply*
getOctetReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getOctetReply*
getOctetReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getOctetReplyPluginSupport_copy_data(
    getOctetReply *out,
    const getOctetReply *in);

NDDSUSERDllExport extern void 
getOctetReplyPluginSupport_destroy_data_ex(
    getOctetReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getOctetReplyPluginSupport_destroy_data(
    getOctetReply *sample);

NDDSUSERDllExport extern void 
getOctetReplyPluginSupport_print_data(
    const getOctetReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getOctetReply*
getOctetReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getOctetReply*
getOctetReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getOctetReplyPluginSupport_destroy_key_ex(
    getOctetReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getOctetReplyPluginSupport_destroy_key(
    getOctetReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getOctetReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getOctetReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getOctetReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getOctetReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getOctetReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getOctetReply *out,
    const getOctetReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getOctetReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getOctetReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getOctetReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getOctetReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getOctetReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getOctetReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getOctetReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getOctetReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getOctetReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getOctetReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getOctetReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getOctetReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getOctetReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getOctetReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getOctetReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getOctetReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getOctetReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getOctetReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getOctetReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getOctetReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getOctetReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getOctetReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getOctetReplyKeyHolder *key, 
    const getOctetReply *instance);

NDDSUSERDllExport extern RTIBool 
getOctetReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getOctetReply *instance, 
    const getOctetReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getOctetReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getOctetReply *instance);

NDDSUSERDllExport extern RTIBool 
getOctetReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getOctetReplyPlugin_new(void);

NDDSUSERDllExport extern void
getOctetReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getCharRequest.
 *
 * By default, this type is struct getCharRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getCharRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getCharRequest, the
 * following restriction applies: the key of struct
 * getCharRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getCharRequest.
*/
typedef  struct getCharRequest getCharRequestKeyHolder;


#define getCharRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getCharRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getCharRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getCharRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getCharRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getCharRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getCharRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getCharRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getCharRequest*
getCharRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getCharRequest*
getCharRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getCharRequestPluginSupport_copy_data(
    getCharRequest *out,
    const getCharRequest *in);

NDDSUSERDllExport extern void 
getCharRequestPluginSupport_destroy_data_ex(
    getCharRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getCharRequestPluginSupport_destroy_data(
    getCharRequest *sample);

NDDSUSERDllExport extern void 
getCharRequestPluginSupport_print_data(
    const getCharRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getCharRequest*
getCharRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getCharRequest*
getCharRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getCharRequestPluginSupport_destroy_key_ex(
    getCharRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getCharRequestPluginSupport_destroy_key(
    getCharRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getCharRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getCharRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getCharRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getCharRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getCharRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCharRequest *out,
    const getCharRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getCharRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getCharRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getCharRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCharRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCharRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getCharRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getCharRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getCharRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getCharRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getCharRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getCharRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getCharRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getCharRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getCharRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getCharRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getCharRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCharRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCharRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getCharRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getCharRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getCharRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCharRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getCharRequestKeyHolder *key, 
    const getCharRequest *instance);

NDDSUSERDllExport extern RTIBool 
getCharRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getCharRequest *instance, 
    const getCharRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getCharRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getCharRequest *instance);

NDDSUSERDllExport extern RTIBool 
getCharRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getCharRequestPlugin_new(void);

NDDSUSERDllExport extern void
getCharRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getCharReply.
 *
 * By default, this type is struct getCharReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getCharReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getCharReply, the
 * following restriction applies: the key of struct
 * getCharReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getCharReply.
*/
typedef  struct getCharReply getCharReplyKeyHolder;


#define getCharReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getCharReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getCharReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getCharReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getCharReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getCharReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getCharReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getCharReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getCharReply*
getCharReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getCharReply*
getCharReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getCharReplyPluginSupport_copy_data(
    getCharReply *out,
    const getCharReply *in);

NDDSUSERDllExport extern void 
getCharReplyPluginSupport_destroy_data_ex(
    getCharReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getCharReplyPluginSupport_destroy_data(
    getCharReply *sample);

NDDSUSERDllExport extern void 
getCharReplyPluginSupport_print_data(
    const getCharReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getCharReply*
getCharReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getCharReply*
getCharReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getCharReplyPluginSupport_destroy_key_ex(
    getCharReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getCharReplyPluginSupport_destroy_key(
    getCharReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getCharReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getCharReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getCharReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getCharReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getCharReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCharReply *out,
    const getCharReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getCharReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getCharReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getCharReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCharReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCharReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getCharReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getCharReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getCharReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getCharReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getCharReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getCharReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getCharReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getCharReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getCharReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getCharReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getCharReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getCharReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCharReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getCharReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getCharReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getCharReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getCharReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getCharReplyKeyHolder *key, 
    const getCharReply *instance);

NDDSUSERDllExport extern RTIBool 
getCharReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getCharReply *instance, 
    const getCharReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getCharReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getCharReply *instance);

NDDSUSERDllExport extern RTIBool 
getCharReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getCharReplyPlugin_new(void);

NDDSUSERDllExport extern void
getCharReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getWCharRequest.
 *
 * By default, this type is struct getWCharRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getWCharRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getWCharRequest, the
 * following restriction applies: the key of struct
 * getWCharRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getWCharRequest.
*/
typedef  struct getWCharRequest getWCharRequestKeyHolder;


#define getWCharRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getWCharRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getWCharRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getWCharRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getWCharRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getWCharRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getWCharRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getWCharRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getWCharRequest*
getWCharRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getWCharRequest*
getWCharRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getWCharRequestPluginSupport_copy_data(
    getWCharRequest *out,
    const getWCharRequest *in);

NDDSUSERDllExport extern void 
getWCharRequestPluginSupport_destroy_data_ex(
    getWCharRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getWCharRequestPluginSupport_destroy_data(
    getWCharRequest *sample);

NDDSUSERDllExport extern void 
getWCharRequestPluginSupport_print_data(
    const getWCharRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getWCharRequest*
getWCharRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getWCharRequest*
getWCharRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getWCharRequestPluginSupport_destroy_key_ex(
    getWCharRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getWCharRequestPluginSupport_destroy_key(
    getWCharRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getWCharRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getWCharRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getWCharRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getWCharRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getWCharRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getWCharRequest *out,
    const getWCharRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getWCharRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getWCharRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getWCharRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getWCharRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getWCharRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getWCharRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getWCharRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getWCharRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getWCharRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getWCharRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getWCharRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getWCharRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getWCharRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getWCharRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getWCharRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getWCharRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getWCharRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getWCharRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getWCharRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getWCharRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getWCharRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getWCharRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getWCharRequestKeyHolder *key, 
    const getWCharRequest *instance);

NDDSUSERDllExport extern RTIBool 
getWCharRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getWCharRequest *instance, 
    const getWCharRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getWCharRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getWCharRequest *instance);

NDDSUSERDllExport extern RTIBool 
getWCharRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getWCharRequestPlugin_new(void);

NDDSUSERDllExport extern void
getWCharRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getWCharReply.
 *
 * By default, this type is struct getWCharReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getWCharReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getWCharReply, the
 * following restriction applies: the key of struct
 * getWCharReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getWCharReply.
*/
typedef  struct getWCharReply getWCharReplyKeyHolder;


#define getWCharReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getWCharReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getWCharReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getWCharReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getWCharReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getWCharReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getWCharReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getWCharReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getWCharReply*
getWCharReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getWCharReply*
getWCharReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getWCharReplyPluginSupport_copy_data(
    getWCharReply *out,
    const getWCharReply *in);

NDDSUSERDllExport extern void 
getWCharReplyPluginSupport_destroy_data_ex(
    getWCharReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getWCharReplyPluginSupport_destroy_data(
    getWCharReply *sample);

NDDSUSERDllExport extern void 
getWCharReplyPluginSupport_print_data(
    const getWCharReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getWCharReply*
getWCharReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getWCharReply*
getWCharReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getWCharReplyPluginSupport_destroy_key_ex(
    getWCharReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getWCharReplyPluginSupport_destroy_key(
    getWCharReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getWCharReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getWCharReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getWCharReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getWCharReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getWCharReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getWCharReply *out,
    const getWCharReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getWCharReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getWCharReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getWCharReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getWCharReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getWCharReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getWCharReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getWCharReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getWCharReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getWCharReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getWCharReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getWCharReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getWCharReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getWCharReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getWCharReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getWCharReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getWCharReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getWCharReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getWCharReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getWCharReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getWCharReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getWCharReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getWCharReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getWCharReplyKeyHolder *key, 
    const getWCharReply *instance);

NDDSUSERDllExport extern RTIBool 
getWCharReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getWCharReply *instance, 
    const getWCharReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getWCharReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getWCharReply *instance);

NDDSUSERDllExport extern RTIBool 
getWCharReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getWCharReplyPlugin_new(void);

NDDSUSERDllExport extern void
getWCharReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getShortRequest.
 *
 * By default, this type is struct getShortRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getShortRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getShortRequest, the
 * following restriction applies: the key of struct
 * getShortRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getShortRequest.
*/
typedef  struct getShortRequest getShortRequestKeyHolder;


#define getShortRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getShortRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getShortRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getShortRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getShortRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getShortRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getShortRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getShortRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getShortRequest*
getShortRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getShortRequest*
getShortRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getShortRequestPluginSupport_copy_data(
    getShortRequest *out,
    const getShortRequest *in);

NDDSUSERDllExport extern void 
getShortRequestPluginSupport_destroy_data_ex(
    getShortRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getShortRequestPluginSupport_destroy_data(
    getShortRequest *sample);

NDDSUSERDllExport extern void 
getShortRequestPluginSupport_print_data(
    const getShortRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getShortRequest*
getShortRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getShortRequest*
getShortRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getShortRequestPluginSupport_destroy_key_ex(
    getShortRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getShortRequestPluginSupport_destroy_key(
    getShortRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getShortRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getShortRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getShortRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getShortRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getShortRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getShortRequest *out,
    const getShortRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getShortRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getShortRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getShortRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getShortRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getShortRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getShortRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getShortRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getShortRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getShortRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getShortRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getShortRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getShortRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getShortRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getShortRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getShortRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getShortRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getShortRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getShortRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getShortRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getShortRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getShortRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getShortRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getShortRequestKeyHolder *key, 
    const getShortRequest *instance);

NDDSUSERDllExport extern RTIBool 
getShortRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getShortRequest *instance, 
    const getShortRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getShortRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getShortRequest *instance);

NDDSUSERDllExport extern RTIBool 
getShortRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getShortRequestPlugin_new(void);

NDDSUSERDllExport extern void
getShortRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getShortReply.
 *
 * By default, this type is struct getShortReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getShortReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getShortReply, the
 * following restriction applies: the key of struct
 * getShortReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getShortReply.
*/
typedef  struct getShortReply getShortReplyKeyHolder;


#define getShortReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getShortReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getShortReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getShortReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getShortReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getShortReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getShortReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getShortReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getShortReply*
getShortReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getShortReply*
getShortReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getShortReplyPluginSupport_copy_data(
    getShortReply *out,
    const getShortReply *in);

NDDSUSERDllExport extern void 
getShortReplyPluginSupport_destroy_data_ex(
    getShortReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getShortReplyPluginSupport_destroy_data(
    getShortReply *sample);

NDDSUSERDllExport extern void 
getShortReplyPluginSupport_print_data(
    const getShortReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getShortReply*
getShortReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getShortReply*
getShortReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getShortReplyPluginSupport_destroy_key_ex(
    getShortReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getShortReplyPluginSupport_destroy_key(
    getShortReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getShortReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getShortReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getShortReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getShortReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getShortReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getShortReply *out,
    const getShortReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getShortReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getShortReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getShortReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getShortReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getShortReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getShortReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getShortReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getShortReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getShortReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getShortReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getShortReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getShortReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getShortReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getShortReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getShortReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getShortReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getShortReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getShortReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getShortReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getShortReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getShortReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getShortReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getShortReplyKeyHolder *key, 
    const getShortReply *instance);

NDDSUSERDllExport extern RTIBool 
getShortReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getShortReply *instance, 
    const getShortReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getShortReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getShortReply *instance);

NDDSUSERDllExport extern RTIBool 
getShortReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getShortReplyPlugin_new(void);

NDDSUSERDllExport extern void
getShortReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getUShortRequest.
 *
 * By default, this type is struct getUShortRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getUShortRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getUShortRequest, the
 * following restriction applies: the key of struct
 * getUShortRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getUShortRequest.
*/
typedef  struct getUShortRequest getUShortRequestKeyHolder;


#define getUShortRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getUShortRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getUShortRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getUShortRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getUShortRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getUShortRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getUShortRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getUShortRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getUShortRequest*
getUShortRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getUShortRequest*
getUShortRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getUShortRequestPluginSupport_copy_data(
    getUShortRequest *out,
    const getUShortRequest *in);

NDDSUSERDllExport extern void 
getUShortRequestPluginSupport_destroy_data_ex(
    getUShortRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getUShortRequestPluginSupport_destroy_data(
    getUShortRequest *sample);

NDDSUSERDllExport extern void 
getUShortRequestPluginSupport_print_data(
    const getUShortRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getUShortRequest*
getUShortRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getUShortRequest*
getUShortRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getUShortRequestPluginSupport_destroy_key_ex(
    getUShortRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getUShortRequestPluginSupport_destroy_key(
    getUShortRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getUShortRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getUShortRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getUShortRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getUShortRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getUShortRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getUShortRequest *out,
    const getUShortRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getUShortRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getUShortRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getUShortRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getUShortRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getUShortRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getUShortRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getUShortRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getUShortRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getUShortRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getUShortRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getUShortRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getUShortRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getUShortRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getUShortRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getUShortRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getUShortRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getUShortRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getUShortRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getUShortRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getUShortRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getUShortRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getUShortRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getUShortRequestKeyHolder *key, 
    const getUShortRequest *instance);

NDDSUSERDllExport extern RTIBool 
getUShortRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getUShortRequest *instance, 
    const getUShortRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getUShortRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getUShortRequest *instance);

NDDSUSERDllExport extern RTIBool 
getUShortRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getUShortRequestPlugin_new(void);

NDDSUSERDllExport extern void
getUShortRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getUShortReply.
 *
 * By default, this type is struct getUShortReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getUShortReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getUShortReply, the
 * following restriction applies: the key of struct
 * getUShortReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getUShortReply.
*/
typedef  struct getUShortReply getUShortReplyKeyHolder;


#define getUShortReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getUShortReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getUShortReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getUShortReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getUShortReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getUShortReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getUShortReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getUShortReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getUShortReply*
getUShortReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getUShortReply*
getUShortReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getUShortReplyPluginSupport_copy_data(
    getUShortReply *out,
    const getUShortReply *in);

NDDSUSERDllExport extern void 
getUShortReplyPluginSupport_destroy_data_ex(
    getUShortReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getUShortReplyPluginSupport_destroy_data(
    getUShortReply *sample);

NDDSUSERDllExport extern void 
getUShortReplyPluginSupport_print_data(
    const getUShortReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getUShortReply*
getUShortReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getUShortReply*
getUShortReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getUShortReplyPluginSupport_destroy_key_ex(
    getUShortReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getUShortReplyPluginSupport_destroy_key(
    getUShortReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getUShortReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getUShortReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getUShortReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getUShortReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getUShortReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getUShortReply *out,
    const getUShortReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getUShortReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getUShortReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getUShortReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getUShortReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getUShortReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getUShortReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getUShortReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getUShortReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getUShortReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getUShortReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getUShortReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getUShortReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getUShortReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getUShortReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getUShortReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getUShortReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getUShortReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getUShortReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getUShortReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getUShortReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getUShortReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getUShortReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getUShortReplyKeyHolder *key, 
    const getUShortReply *instance);

NDDSUSERDllExport extern RTIBool 
getUShortReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getUShortReply *instance, 
    const getUShortReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getUShortReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getUShortReply *instance);

NDDSUSERDllExport extern RTIBool 
getUShortReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getUShortReplyPlugin_new(void);

NDDSUSERDllExport extern void
getUShortReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getLongRequest.
 *
 * By default, this type is struct getLongRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getLongRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getLongRequest, the
 * following restriction applies: the key of struct
 * getLongRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getLongRequest.
*/
typedef  struct getLongRequest getLongRequestKeyHolder;


#define getLongRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getLongRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getLongRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getLongRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getLongRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getLongRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getLongRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getLongRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getLongRequest*
getLongRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLongRequest*
getLongRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getLongRequestPluginSupport_copy_data(
    getLongRequest *out,
    const getLongRequest *in);

NDDSUSERDllExport extern void 
getLongRequestPluginSupport_destroy_data_ex(
    getLongRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLongRequestPluginSupport_destroy_data(
    getLongRequest *sample);

NDDSUSERDllExport extern void 
getLongRequestPluginSupport_print_data(
    const getLongRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getLongRequest*
getLongRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLongRequest*
getLongRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getLongRequestPluginSupport_destroy_key_ex(
    getLongRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLongRequestPluginSupport_destroy_key(
    getLongRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getLongRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getLongRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getLongRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getLongRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getLongRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLongRequest *out,
    const getLongRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getLongRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLongRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLongRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLongRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getLongRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getLongRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getLongRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getLongRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getLongRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getLongRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getLongRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getLongRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getLongRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getLongRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLongRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLongRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLongRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getLongRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getLongRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLongRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLongRequestKeyHolder *key, 
    const getLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
getLongRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getLongRequest *instance, 
    const getLongRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getLongRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
getLongRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getLongRequestPlugin_new(void);

NDDSUSERDllExport extern void
getLongRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getLongReply.
 *
 * By default, this type is struct getLongReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getLongReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getLongReply, the
 * following restriction applies: the key of struct
 * getLongReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getLongReply.
*/
typedef  struct getLongReply getLongReplyKeyHolder;


#define getLongReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getLongReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getLongReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getLongReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getLongReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getLongReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getLongReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getLongReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getLongReply*
getLongReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLongReply*
getLongReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getLongReplyPluginSupport_copy_data(
    getLongReply *out,
    const getLongReply *in);

NDDSUSERDllExport extern void 
getLongReplyPluginSupport_destroy_data_ex(
    getLongReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLongReplyPluginSupport_destroy_data(
    getLongReply *sample);

NDDSUSERDllExport extern void 
getLongReplyPluginSupport_print_data(
    const getLongReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getLongReply*
getLongReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLongReply*
getLongReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getLongReplyPluginSupport_destroy_key_ex(
    getLongReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLongReplyPluginSupport_destroy_key(
    getLongReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getLongReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getLongReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getLongReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getLongReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getLongReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLongReply *out,
    const getLongReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getLongReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLongReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLongReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLongReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getLongReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getLongReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getLongReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getLongReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getLongReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getLongReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getLongReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getLongReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getLongReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getLongReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLongReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLongReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLongReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getLongReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getLongReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLongReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLongReplyKeyHolder *key, 
    const getLongReply *instance);

NDDSUSERDllExport extern RTIBool 
getLongReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getLongReply *instance, 
    const getLongReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getLongReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getLongReply *instance);

NDDSUSERDllExport extern RTIBool 
getLongReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getLongReplyPlugin_new(void);

NDDSUSERDllExport extern void
getLongReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getULongRequest.
 *
 * By default, this type is struct getULongRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getULongRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getULongRequest, the
 * following restriction applies: the key of struct
 * getULongRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getULongRequest.
*/
typedef  struct getULongRequest getULongRequestKeyHolder;


#define getULongRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getULongRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getULongRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getULongRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getULongRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getULongRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getULongRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getULongRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getULongRequest*
getULongRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getULongRequest*
getULongRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getULongRequestPluginSupport_copy_data(
    getULongRequest *out,
    const getULongRequest *in);

NDDSUSERDllExport extern void 
getULongRequestPluginSupport_destroy_data_ex(
    getULongRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getULongRequestPluginSupport_destroy_data(
    getULongRequest *sample);

NDDSUSERDllExport extern void 
getULongRequestPluginSupport_print_data(
    const getULongRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getULongRequest*
getULongRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getULongRequest*
getULongRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getULongRequestPluginSupport_destroy_key_ex(
    getULongRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getULongRequestPluginSupport_destroy_key(
    getULongRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getULongRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getULongRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getULongRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getULongRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getULongRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getULongRequest *out,
    const getULongRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getULongRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getULongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getULongRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getULongRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getULongRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getULongRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getULongRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getULongRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getULongRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getULongRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getULongRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getULongRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getULongRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getULongRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getULongRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getULongRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getULongRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getULongRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getULongRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getULongRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getULongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getULongRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getULongRequestKeyHolder *key, 
    const getULongRequest *instance);

NDDSUSERDllExport extern RTIBool 
getULongRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getULongRequest *instance, 
    const getULongRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getULongRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getULongRequest *instance);

NDDSUSERDllExport extern RTIBool 
getULongRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getULongRequestPlugin_new(void);

NDDSUSERDllExport extern void
getULongRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getULongReply.
 *
 * By default, this type is struct getULongReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getULongReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getULongReply, the
 * following restriction applies: the key of struct
 * getULongReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getULongReply.
*/
typedef  struct getULongReply getULongReplyKeyHolder;


#define getULongReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getULongReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getULongReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getULongReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getULongReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getULongReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getULongReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getULongReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getULongReply*
getULongReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getULongReply*
getULongReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getULongReplyPluginSupport_copy_data(
    getULongReply *out,
    const getULongReply *in);

NDDSUSERDllExport extern void 
getULongReplyPluginSupport_destroy_data_ex(
    getULongReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getULongReplyPluginSupport_destroy_data(
    getULongReply *sample);

NDDSUSERDllExport extern void 
getULongReplyPluginSupport_print_data(
    const getULongReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getULongReply*
getULongReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getULongReply*
getULongReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getULongReplyPluginSupport_destroy_key_ex(
    getULongReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getULongReplyPluginSupport_destroy_key(
    getULongReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getULongReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getULongReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getULongReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getULongReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getULongReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getULongReply *out,
    const getULongReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getULongReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getULongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getULongReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getULongReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getULongReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getULongReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getULongReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getULongReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getULongReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getULongReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getULongReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getULongReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getULongReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getULongReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getULongReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getULongReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getULongReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getULongReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getULongReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getULongReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getULongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getULongReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getULongReplyKeyHolder *key, 
    const getULongReply *instance);

NDDSUSERDllExport extern RTIBool 
getULongReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getULongReply *instance, 
    const getULongReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getULongReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getULongReply *instance);

NDDSUSERDllExport extern RTIBool 
getULongReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getULongReplyPlugin_new(void);

NDDSUSERDllExport extern void
getULongReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getLLongRequest.
 *
 * By default, this type is struct getLLongRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getLLongRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getLLongRequest, the
 * following restriction applies: the key of struct
 * getLLongRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getLLongRequest.
*/
typedef  struct getLLongRequest getLLongRequestKeyHolder;


#define getLLongRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getLLongRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getLLongRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getLLongRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getLLongRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getLLongRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getLLongRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getLLongRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getLLongRequest*
getLLongRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLLongRequest*
getLLongRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getLLongRequestPluginSupport_copy_data(
    getLLongRequest *out,
    const getLLongRequest *in);

NDDSUSERDllExport extern void 
getLLongRequestPluginSupport_destroy_data_ex(
    getLLongRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLLongRequestPluginSupport_destroy_data(
    getLLongRequest *sample);

NDDSUSERDllExport extern void 
getLLongRequestPluginSupport_print_data(
    const getLLongRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getLLongRequest*
getLLongRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLLongRequest*
getLLongRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getLLongRequestPluginSupport_destroy_key_ex(
    getLLongRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLLongRequestPluginSupport_destroy_key(
    getLLongRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getLLongRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getLLongRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getLLongRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getLLongRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getLLongRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLLongRequest *out,
    const getLLongRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getLLongRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getLLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLLongRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLLongRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLLongRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getLLongRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getLLongRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getLLongRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getLLongRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getLLongRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getLLongRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getLLongRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getLLongRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getLLongRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getLLongRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLLongRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLLongRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLLongRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getLLongRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getLLongRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLLongRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLLongRequestKeyHolder *key, 
    const getLLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
getLLongRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getLLongRequest *instance, 
    const getLLongRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getLLongRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getLLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
getLLongRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getLLongRequestPlugin_new(void);

NDDSUSERDllExport extern void
getLLongRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getLLongReply.
 *
 * By default, this type is struct getLLongReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getLLongReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getLLongReply, the
 * following restriction applies: the key of struct
 * getLLongReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getLLongReply.
*/
typedef  struct getLLongReply getLLongReplyKeyHolder;


#define getLLongReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getLLongReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getLLongReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getLLongReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getLLongReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getLLongReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getLLongReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getLLongReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getLLongReply*
getLLongReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLLongReply*
getLLongReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getLLongReplyPluginSupport_copy_data(
    getLLongReply *out,
    const getLLongReply *in);

NDDSUSERDllExport extern void 
getLLongReplyPluginSupport_destroy_data_ex(
    getLLongReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLLongReplyPluginSupport_destroy_data(
    getLLongReply *sample);

NDDSUSERDllExport extern void 
getLLongReplyPluginSupport_print_data(
    const getLLongReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getLLongReply*
getLLongReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getLLongReply*
getLLongReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getLLongReplyPluginSupport_destroy_key_ex(
    getLLongReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getLLongReplyPluginSupport_destroy_key(
    getLLongReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getLLongReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getLLongReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getLLongReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getLLongReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getLLongReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLLongReply *out,
    const getLLongReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getLLongReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getLLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLLongReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLLongReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLLongReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getLLongReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getLLongReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getLLongReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getLLongReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getLLongReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getLLongReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getLLongReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getLLongReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getLLongReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getLLongReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getLLongReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getLLongReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLLongReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getLLongReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getLLongReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getLLongReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getLLongReplyKeyHolder *key, 
    const getLLongReply *instance);

NDDSUSERDllExport extern RTIBool 
getLLongReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getLLongReply *instance, 
    const getLLongReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getLLongReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getLLongReply *instance);

NDDSUSERDllExport extern RTIBool 
getLLongReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getLLongReplyPlugin_new(void);

NDDSUSERDllExport extern void
getLLongReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getULLongRequest.
 *
 * By default, this type is struct getULLongRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getULLongRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getULLongRequest, the
 * following restriction applies: the key of struct
 * getULLongRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getULLongRequest.
*/
typedef  struct getULLongRequest getULLongRequestKeyHolder;


#define getULLongRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getULLongRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getULLongRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getULLongRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getULLongRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getULLongRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getULLongRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getULLongRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getULLongRequest*
getULLongRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getULLongRequest*
getULLongRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getULLongRequestPluginSupport_copy_data(
    getULLongRequest *out,
    const getULLongRequest *in);

NDDSUSERDllExport extern void 
getULLongRequestPluginSupport_destroy_data_ex(
    getULLongRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getULLongRequestPluginSupport_destroy_data(
    getULLongRequest *sample);

NDDSUSERDllExport extern void 
getULLongRequestPluginSupport_print_data(
    const getULLongRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getULLongRequest*
getULLongRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getULLongRequest*
getULLongRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getULLongRequestPluginSupport_destroy_key_ex(
    getULLongRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getULLongRequestPluginSupport_destroy_key(
    getULLongRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getULLongRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getULLongRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getULLongRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getULLongRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getULLongRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getULLongRequest *out,
    const getULLongRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getULLongRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getULLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getULLongRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getULLongRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getULLongRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getULLongRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getULLongRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getULLongRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getULLongRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getULLongRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getULLongRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getULLongRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getULLongRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getULLongRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getULLongRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getULLongRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getULLongRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getULLongRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getULLongRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getULLongRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getULLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getULLongRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getULLongRequestKeyHolder *key, 
    const getULLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
getULLongRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getULLongRequest *instance, 
    const getULLongRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getULLongRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getULLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
getULLongRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getULLongRequestPlugin_new(void);

NDDSUSERDllExport extern void
getULLongRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getULLongReply.
 *
 * By default, this type is struct getULLongReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getULLongReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getULLongReply, the
 * following restriction applies: the key of struct
 * getULLongReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getULLongReply.
*/
typedef  struct getULLongReply getULLongReplyKeyHolder;


#define getULLongReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getULLongReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getULLongReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getULLongReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getULLongReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getULLongReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getULLongReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getULLongReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getULLongReply*
getULLongReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getULLongReply*
getULLongReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getULLongReplyPluginSupport_copy_data(
    getULLongReply *out,
    const getULLongReply *in);

NDDSUSERDllExport extern void 
getULLongReplyPluginSupport_destroy_data_ex(
    getULLongReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getULLongReplyPluginSupport_destroy_data(
    getULLongReply *sample);

NDDSUSERDllExport extern void 
getULLongReplyPluginSupport_print_data(
    const getULLongReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getULLongReply*
getULLongReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getULLongReply*
getULLongReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getULLongReplyPluginSupport_destroy_key_ex(
    getULLongReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getULLongReplyPluginSupport_destroy_key(
    getULLongReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getULLongReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getULLongReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getULLongReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getULLongReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getULLongReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getULLongReply *out,
    const getULLongReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getULLongReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getULLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getULLongReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getULLongReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getULLongReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getULLongReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getULLongReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getULLongReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getULLongReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getULLongReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getULLongReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getULLongReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getULLongReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getULLongReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getULLongReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getULLongReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getULLongReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getULLongReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getULLongReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getULLongReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getULLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getULLongReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getULLongReplyKeyHolder *key, 
    const getULLongReply *instance);

NDDSUSERDllExport extern RTIBool 
getULLongReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getULLongReply *instance, 
    const getULLongReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getULLongReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getULLongReply *instance);

NDDSUSERDllExport extern RTIBool 
getULLongReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getULLongReplyPlugin_new(void);

NDDSUSERDllExport extern void
getULLongReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getFloatRequest.
 *
 * By default, this type is struct getFloatRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getFloatRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getFloatRequest, the
 * following restriction applies: the key of struct
 * getFloatRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getFloatRequest.
*/
typedef  struct getFloatRequest getFloatRequestKeyHolder;


#define getFloatRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getFloatRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getFloatRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getFloatRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getFloatRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getFloatRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getFloatRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getFloatRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getFloatRequest*
getFloatRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getFloatRequest*
getFloatRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getFloatRequestPluginSupport_copy_data(
    getFloatRequest *out,
    const getFloatRequest *in);

NDDSUSERDllExport extern void 
getFloatRequestPluginSupport_destroy_data_ex(
    getFloatRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getFloatRequestPluginSupport_destroy_data(
    getFloatRequest *sample);

NDDSUSERDllExport extern void 
getFloatRequestPluginSupport_print_data(
    const getFloatRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getFloatRequest*
getFloatRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getFloatRequest*
getFloatRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getFloatRequestPluginSupport_destroy_key_ex(
    getFloatRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getFloatRequestPluginSupport_destroy_key(
    getFloatRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getFloatRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getFloatRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getFloatRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getFloatRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getFloatRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getFloatRequest *out,
    const getFloatRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getFloatRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getFloatRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getFloatRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getFloatRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getFloatRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getFloatRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getFloatRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getFloatRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getFloatRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getFloatRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getFloatRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getFloatRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getFloatRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getFloatRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getFloatRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getFloatRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getFloatRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getFloatRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getFloatRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getFloatRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getFloatRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getFloatRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getFloatRequestKeyHolder *key, 
    const getFloatRequest *instance);

NDDSUSERDllExport extern RTIBool 
getFloatRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getFloatRequest *instance, 
    const getFloatRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getFloatRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getFloatRequest *instance);

NDDSUSERDllExport extern RTIBool 
getFloatRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getFloatRequestPlugin_new(void);

NDDSUSERDllExport extern void
getFloatRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getFloatReply.
 *
 * By default, this type is struct getFloatReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getFloatReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getFloatReply, the
 * following restriction applies: the key of struct
 * getFloatReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getFloatReply.
*/
typedef  struct getFloatReply getFloatReplyKeyHolder;


#define getFloatReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getFloatReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getFloatReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getFloatReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getFloatReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getFloatReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getFloatReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getFloatReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getFloatReply*
getFloatReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getFloatReply*
getFloatReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getFloatReplyPluginSupport_copy_data(
    getFloatReply *out,
    const getFloatReply *in);

NDDSUSERDllExport extern void 
getFloatReplyPluginSupport_destroy_data_ex(
    getFloatReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getFloatReplyPluginSupport_destroy_data(
    getFloatReply *sample);

NDDSUSERDllExport extern void 
getFloatReplyPluginSupport_print_data(
    const getFloatReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getFloatReply*
getFloatReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getFloatReply*
getFloatReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getFloatReplyPluginSupport_destroy_key_ex(
    getFloatReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getFloatReplyPluginSupport_destroy_key(
    getFloatReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getFloatReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getFloatReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getFloatReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getFloatReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getFloatReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getFloatReply *out,
    const getFloatReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getFloatReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getFloatReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getFloatReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getFloatReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getFloatReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getFloatReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getFloatReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getFloatReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getFloatReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getFloatReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getFloatReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getFloatReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getFloatReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getFloatReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getFloatReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getFloatReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getFloatReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getFloatReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getFloatReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getFloatReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getFloatReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getFloatReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getFloatReplyKeyHolder *key, 
    const getFloatReply *instance);

NDDSUSERDllExport extern RTIBool 
getFloatReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getFloatReply *instance, 
    const getFloatReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getFloatReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getFloatReply *instance);

NDDSUSERDllExport extern RTIBool 
getFloatReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getFloatReplyPlugin_new(void);

NDDSUSERDllExport extern void
getFloatReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getDoubleRequest.
 *
 * By default, this type is struct getDoubleRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getDoubleRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getDoubleRequest, the
 * following restriction applies: the key of struct
 * getDoubleRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getDoubleRequest.
*/
typedef  struct getDoubleRequest getDoubleRequestKeyHolder;


#define getDoubleRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getDoubleRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getDoubleRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getDoubleRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getDoubleRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getDoubleRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getDoubleRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getDoubleRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getDoubleRequest*
getDoubleRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getDoubleRequest*
getDoubleRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getDoubleRequestPluginSupport_copy_data(
    getDoubleRequest *out,
    const getDoubleRequest *in);

NDDSUSERDllExport extern void 
getDoubleRequestPluginSupport_destroy_data_ex(
    getDoubleRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getDoubleRequestPluginSupport_destroy_data(
    getDoubleRequest *sample);

NDDSUSERDllExport extern void 
getDoubleRequestPluginSupport_print_data(
    const getDoubleRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getDoubleRequest*
getDoubleRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getDoubleRequest*
getDoubleRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getDoubleRequestPluginSupport_destroy_key_ex(
    getDoubleRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getDoubleRequestPluginSupport_destroy_key(
    getDoubleRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getDoubleRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getDoubleRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getDoubleRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getDoubleRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getDoubleRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleRequest *out,
    const getDoubleRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getDoubleRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getDoubleRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getDoubleRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDoubleRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getDoubleRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getDoubleRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getDoubleRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getDoubleRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getDoubleRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getDoubleRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getDoubleRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getDoubleRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getDoubleRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getDoubleRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDoubleRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getDoubleRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDoubleRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleRequestKeyHolder *key, 
    const getDoubleRequest *instance);

NDDSUSERDllExport extern RTIBool 
getDoubleRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleRequest *instance, 
    const getDoubleRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getDoubleRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getDoubleRequest *instance);

NDDSUSERDllExport extern RTIBool 
getDoubleRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getDoubleRequestPlugin_new(void);

NDDSUSERDllExport extern void
getDoubleRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getDoubleReply.
 *
 * By default, this type is struct getDoubleReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getDoubleReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getDoubleReply, the
 * following restriction applies: the key of struct
 * getDoubleReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getDoubleReply.
*/
typedef  struct getDoubleReply getDoubleReplyKeyHolder;


#define getDoubleReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getDoubleReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getDoubleReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getDoubleReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getDoubleReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getDoubleReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getDoubleReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getDoubleReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getDoubleReply*
getDoubleReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getDoubleReply*
getDoubleReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getDoubleReplyPluginSupport_copy_data(
    getDoubleReply *out,
    const getDoubleReply *in);

NDDSUSERDllExport extern void 
getDoubleReplyPluginSupport_destroy_data_ex(
    getDoubleReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getDoubleReplyPluginSupport_destroy_data(
    getDoubleReply *sample);

NDDSUSERDllExport extern void 
getDoubleReplyPluginSupport_print_data(
    const getDoubleReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getDoubleReply*
getDoubleReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getDoubleReply*
getDoubleReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getDoubleReplyPluginSupport_destroy_key_ex(
    getDoubleReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getDoubleReplyPluginSupport_destroy_key(
    getDoubleReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getDoubleReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getDoubleReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getDoubleReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getDoubleReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getDoubleReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleReply *out,
    const getDoubleReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getDoubleReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getDoubleReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getDoubleReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDoubleReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getDoubleReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getDoubleReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getDoubleReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getDoubleReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getDoubleReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getDoubleReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getDoubleReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getDoubleReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getDoubleReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getDoubleReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDoubleReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getDoubleReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getDoubleReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleReplyKeyHolder *key, 
    const getDoubleReply *instance);

NDDSUSERDllExport extern RTIBool 
getDoubleReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getDoubleReply *instance, 
    const getDoubleReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getDoubleReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getDoubleReply *instance);

NDDSUSERDllExport extern RTIBool 
getDoubleReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getDoubleReplyPlugin_new(void);

NDDSUSERDllExport extern void
getDoubleReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getBooleanRequest.
 *
 * By default, this type is struct getBooleanRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getBooleanRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getBooleanRequest, the
 * following restriction applies: the key of struct
 * getBooleanRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getBooleanRequest.
*/
typedef  struct getBooleanRequest getBooleanRequestKeyHolder;


#define getBooleanRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getBooleanRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getBooleanRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getBooleanRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getBooleanRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getBooleanRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getBooleanRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getBooleanRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getBooleanRequest*
getBooleanRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getBooleanRequest*
getBooleanRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getBooleanRequestPluginSupport_copy_data(
    getBooleanRequest *out,
    const getBooleanRequest *in);

NDDSUSERDllExport extern void 
getBooleanRequestPluginSupport_destroy_data_ex(
    getBooleanRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getBooleanRequestPluginSupport_destroy_data(
    getBooleanRequest *sample);

NDDSUSERDllExport extern void 
getBooleanRequestPluginSupport_print_data(
    const getBooleanRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getBooleanRequest*
getBooleanRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getBooleanRequest*
getBooleanRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getBooleanRequestPluginSupport_destroy_key_ex(
    getBooleanRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getBooleanRequestPluginSupport_destroy_key(
    getBooleanRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getBooleanRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getBooleanRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getBooleanRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getBooleanRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getBooleanRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanRequest *out,
    const getBooleanRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getBooleanRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getBooleanRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getBooleanRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getBooleanRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getBooleanRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getBooleanRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getBooleanRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getBooleanRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getBooleanRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getBooleanRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getBooleanRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getBooleanRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getBooleanRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getBooleanRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getBooleanRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getBooleanRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getBooleanRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanRequestKeyHolder *key, 
    const getBooleanRequest *instance);

NDDSUSERDllExport extern RTIBool 
getBooleanRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanRequest *instance, 
    const getBooleanRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getBooleanRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getBooleanRequest *instance);

NDDSUSERDllExport extern RTIBool 
getBooleanRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getBooleanRequestPlugin_new(void);

NDDSUSERDllExport extern void
getBooleanRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getBooleanReply.
 *
 * By default, this type is struct getBooleanReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getBooleanReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getBooleanReply, the
 * following restriction applies: the key of struct
 * getBooleanReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getBooleanReply.
*/
typedef  struct getBooleanReply getBooleanReplyKeyHolder;


#define getBooleanReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getBooleanReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getBooleanReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getBooleanReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getBooleanReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getBooleanReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getBooleanReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getBooleanReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getBooleanReply*
getBooleanReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getBooleanReply*
getBooleanReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getBooleanReplyPluginSupport_copy_data(
    getBooleanReply *out,
    const getBooleanReply *in);

NDDSUSERDllExport extern void 
getBooleanReplyPluginSupport_destroy_data_ex(
    getBooleanReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getBooleanReplyPluginSupport_destroy_data(
    getBooleanReply *sample);

NDDSUSERDllExport extern void 
getBooleanReplyPluginSupport_print_data(
    const getBooleanReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getBooleanReply*
getBooleanReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getBooleanReply*
getBooleanReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getBooleanReplyPluginSupport_destroy_key_ex(
    getBooleanReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getBooleanReplyPluginSupport_destroy_key(
    getBooleanReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getBooleanReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getBooleanReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getBooleanReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getBooleanReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getBooleanReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanReply *out,
    const getBooleanReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getBooleanReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getBooleanReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getBooleanReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getBooleanReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getBooleanReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getBooleanReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getBooleanReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getBooleanReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getBooleanReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getBooleanReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getBooleanReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getBooleanReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getBooleanReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getBooleanReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getBooleanReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getBooleanReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getBooleanReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanReplyKeyHolder *key, 
    const getBooleanReply *instance);

NDDSUSERDllExport extern RTIBool 
getBooleanReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getBooleanReply *instance, 
    const getBooleanReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getBooleanReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getBooleanReply *instance);

NDDSUSERDllExport extern RTIBool 
getBooleanReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getBooleanReplyPlugin_new(void);

NDDSUSERDllExport extern void
getBooleanReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* BasicTypeTestRequestReplyPlugin_2120090866_h */
