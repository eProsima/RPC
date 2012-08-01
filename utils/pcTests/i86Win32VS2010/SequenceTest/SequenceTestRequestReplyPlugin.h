
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SequenceTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SequenceTestRequestReplyPlugin_1689902871_h
#define SequenceTestRequestReplyPlugin_1689902871_h

#include "SequenceTestRequestReply.h"




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

#include "SequenceTestPlugin.h"


/* The type used to store keys for instances of type struct
 * getSLongRequest.
 *
 * By default, this type is struct getSLongRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getSLongRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getSLongRequest, the
 * following restriction applies: the key of struct
 * getSLongRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getSLongRequest.
*/
typedef  struct getSLongRequest getSLongRequestKeyHolder;


#define getSLongRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getSLongRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getSLongRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getSLongRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getSLongRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getSLongRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getSLongRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getSLongRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getSLongRequest*
getSLongRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getSLongRequest*
getSLongRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getSLongRequestPluginSupport_copy_data(
    getSLongRequest *out,
    const getSLongRequest *in);

NDDSUSERDllExport extern void 
getSLongRequestPluginSupport_destroy_data_ex(
    getSLongRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getSLongRequestPluginSupport_destroy_data(
    getSLongRequest *sample);

NDDSUSERDllExport extern void 
getSLongRequestPluginSupport_print_data(
    const getSLongRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getSLongRequest*
getSLongRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getSLongRequest*
getSLongRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getSLongRequestPluginSupport_destroy_key_ex(
    getSLongRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getSLongRequestPluginSupport_destroy_key(
    getSLongRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getSLongRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getSLongRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getSLongRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getSLongRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getSLongRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getSLongRequest *out,
    const getSLongRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getSLongRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getSLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getSLongRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getSLongRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getSLongRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getSLongRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getSLongRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getSLongRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getSLongRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getSLongRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getSLongRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getSLongRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getSLongRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getSLongRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getSLongRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getSLongRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getSLongRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getSLongRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getSLongRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getSLongRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getSLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getSLongRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getSLongRequestKeyHolder *key, 
    const getSLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
getSLongRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getSLongRequest *instance, 
    const getSLongRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getSLongRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getSLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
getSLongRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getSLongRequestPlugin_new(void);

NDDSUSERDllExport extern void
getSLongRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getSLongReply.
 *
 * By default, this type is struct getSLongReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getSLongReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getSLongReply, the
 * following restriction applies: the key of struct
 * getSLongReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getSLongReply.
*/
typedef  struct getSLongReply getSLongReplyKeyHolder;


#define getSLongReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getSLongReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getSLongReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getSLongReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getSLongReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getSLongReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getSLongReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getSLongReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getSLongReply*
getSLongReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getSLongReply*
getSLongReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getSLongReplyPluginSupport_copy_data(
    getSLongReply *out,
    const getSLongReply *in);

NDDSUSERDllExport extern void 
getSLongReplyPluginSupport_destroy_data_ex(
    getSLongReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getSLongReplyPluginSupport_destroy_data(
    getSLongReply *sample);

NDDSUSERDllExport extern void 
getSLongReplyPluginSupport_print_data(
    const getSLongReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getSLongReply*
getSLongReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getSLongReply*
getSLongReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getSLongReplyPluginSupport_destroy_key_ex(
    getSLongReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getSLongReplyPluginSupport_destroy_key(
    getSLongReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getSLongReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getSLongReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getSLongReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getSLongReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getSLongReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getSLongReply *out,
    const getSLongReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getSLongReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getSLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getSLongReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getSLongReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getSLongReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getSLongReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getSLongReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getSLongReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getSLongReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getSLongReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getSLongReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getSLongReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getSLongReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getSLongReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getSLongReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getSLongReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getSLongReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getSLongReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getSLongReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getSLongReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getSLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getSLongReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getSLongReplyKeyHolder *key, 
    const getSLongReply *instance);

NDDSUSERDllExport extern RTIBool 
getSLongReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getSLongReply *instance, 
    const getSLongReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getSLongReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getSLongReply *instance);

NDDSUSERDllExport extern RTIBool 
getSLongReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getSLongReplyPlugin_new(void);

NDDSUSERDllExport extern void
getSLongReplyPlugin_delete(struct PRESTypePlugin *);

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

#endif /* SequenceTestRequestReplyPlugin_1689902871_h */
