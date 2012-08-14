
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StructTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef StructTestRequestReplyPlugin_1086133032_h
#define StructTestRequestReplyPlugin_1086133032_h

#include "StructTestRequestReply.h"




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

#include "StructTestPlugin.h"


/* The type used to store keys for instances of type struct
 * duplicateRequest.
 *
 * By default, this type is struct duplicateRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct duplicateRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct duplicateRequest, the
 * following restriction applies: the key of struct
 * duplicateRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct duplicateRequest.
*/
typedef  struct duplicateRequest duplicateRequestKeyHolder;


#define duplicateRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define duplicateRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define duplicateRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define duplicateRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define duplicateRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define duplicateRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define duplicateRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define duplicateRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern duplicateRequest*
duplicateRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern duplicateRequest*
duplicateRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
duplicateRequestPluginSupport_copy_data(
    duplicateRequest *out,
    const duplicateRequest *in);

NDDSUSERDllExport extern void 
duplicateRequestPluginSupport_destroy_data_ex(
    duplicateRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
duplicateRequestPluginSupport_destroy_data(
    duplicateRequest *sample);

NDDSUSERDllExport extern void 
duplicateRequestPluginSupport_print_data(
    const duplicateRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern duplicateRequest*
duplicateRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern duplicateRequest*
duplicateRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
duplicateRequestPluginSupport_destroy_key_ex(
    duplicateRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
duplicateRequestPluginSupport_destroy_key(
    duplicateRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
duplicateRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
duplicateRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
duplicateRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
duplicateRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
duplicateRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    duplicateRequest *out,
    const duplicateRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
duplicateRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const duplicateRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
duplicateRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    duplicateRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
duplicateRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    duplicateRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
duplicateRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
duplicateRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
duplicateRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
duplicateRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const duplicateRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
duplicateRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
duplicateRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
duplicateRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const duplicateRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
duplicateRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    duplicateRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
duplicateRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    duplicateRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
duplicateRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    duplicateRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
duplicateRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    duplicateRequestKeyHolder *key, 
    const duplicateRequest *instance);

NDDSUSERDllExport extern RTIBool 
duplicateRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    duplicateRequest *instance, 
    const duplicateRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
duplicateRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const duplicateRequest *instance);

NDDSUSERDllExport extern RTIBool 
duplicateRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
duplicateRequestPlugin_new(void);

NDDSUSERDllExport extern void
duplicateRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * duplicateReply.
 *
 * By default, this type is struct duplicateReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct duplicateReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct duplicateReply, the
 * following restriction applies: the key of struct
 * duplicateReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct duplicateReply.
*/
typedef  struct duplicateReply duplicateReplyKeyHolder;


#define duplicateReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define duplicateReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define duplicateReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define duplicateReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define duplicateReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define duplicateReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define duplicateReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define duplicateReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern duplicateReply*
duplicateReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern duplicateReply*
duplicateReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
duplicateReplyPluginSupport_copy_data(
    duplicateReply *out,
    const duplicateReply *in);

NDDSUSERDllExport extern void 
duplicateReplyPluginSupport_destroy_data_ex(
    duplicateReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
duplicateReplyPluginSupport_destroy_data(
    duplicateReply *sample);

NDDSUSERDllExport extern void 
duplicateReplyPluginSupport_print_data(
    const duplicateReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern duplicateReply*
duplicateReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern duplicateReply*
duplicateReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
duplicateReplyPluginSupport_destroy_key_ex(
    duplicateReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
duplicateReplyPluginSupport_destroy_key(
    duplicateReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
duplicateReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
duplicateReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
duplicateReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
duplicateReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
duplicateReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    duplicateReply *out,
    const duplicateReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
duplicateReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const duplicateReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
duplicateReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    duplicateReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
duplicateReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    duplicateReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
duplicateReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
duplicateReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
duplicateReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
duplicateReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const duplicateReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
duplicateReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
duplicateReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
duplicateReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const duplicateReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
duplicateReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    duplicateReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
duplicateReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    duplicateReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
duplicateReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    duplicateReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
duplicateReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    duplicateReplyKeyHolder *key, 
    const duplicateReply *instance);

NDDSUSERDllExport extern RTIBool 
duplicateReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    duplicateReply *instance, 
    const duplicateReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
duplicateReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const duplicateReply *instance);

NDDSUSERDllExport extern RTIBool 
duplicateReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
duplicateReplyPlugin_new(void);

NDDSUSERDllExport extern void
duplicateReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * sumaRequest.
 *
 * By default, this type is struct sumaRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct sumaRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct sumaRequest, the
 * following restriction applies: the key of struct
 * sumaRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct sumaRequest.
*/
typedef  struct sumaRequest sumaRequestKeyHolder;


#define sumaRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define sumaRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define sumaRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define sumaRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define sumaRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define sumaRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define sumaRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define sumaRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern sumaRequest*
sumaRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sumaRequest*
sumaRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
sumaRequestPluginSupport_copy_data(
    sumaRequest *out,
    const sumaRequest *in);

NDDSUSERDllExport extern void 
sumaRequestPluginSupport_destroy_data_ex(
    sumaRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sumaRequestPluginSupport_destroy_data(
    sumaRequest *sample);

NDDSUSERDllExport extern void 
sumaRequestPluginSupport_print_data(
    const sumaRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern sumaRequest*
sumaRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sumaRequest*
sumaRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
sumaRequestPluginSupport_destroy_key_ex(
    sumaRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sumaRequestPluginSupport_destroy_key(
    sumaRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
sumaRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
sumaRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
sumaRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
sumaRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
sumaRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    sumaRequest *out,
    const sumaRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
sumaRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const sumaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sumaRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    sumaRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sumaRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    sumaRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
sumaRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
sumaRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
sumaRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
sumaRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const sumaRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
sumaRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
sumaRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
sumaRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const sumaRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sumaRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    sumaRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sumaRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    sumaRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
sumaRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sumaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sumaRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sumaRequestKeyHolder *key, 
    const sumaRequest *instance);

NDDSUSERDllExport extern RTIBool 
sumaRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    sumaRequest *instance, 
    const sumaRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
sumaRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const sumaRequest *instance);

NDDSUSERDllExport extern RTIBool 
sumaRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
sumaRequestPlugin_new(void);

NDDSUSERDllExport extern void
sumaRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * sumaReply.
 *
 * By default, this type is struct sumaReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct sumaReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct sumaReply, the
 * following restriction applies: the key of struct
 * sumaReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct sumaReply.
*/
typedef  struct sumaReply sumaReplyKeyHolder;


#define sumaReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define sumaReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define sumaReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define sumaReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define sumaReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define sumaReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define sumaReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define sumaReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern sumaReply*
sumaReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sumaReply*
sumaReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
sumaReplyPluginSupport_copy_data(
    sumaReply *out,
    const sumaReply *in);

NDDSUSERDllExport extern void 
sumaReplyPluginSupport_destroy_data_ex(
    sumaReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sumaReplyPluginSupport_destroy_data(
    sumaReply *sample);

NDDSUSERDllExport extern void 
sumaReplyPluginSupport_print_data(
    const sumaReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern sumaReply*
sumaReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sumaReply*
sumaReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
sumaReplyPluginSupport_destroy_key_ex(
    sumaReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sumaReplyPluginSupport_destroy_key(
    sumaReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
sumaReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
sumaReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
sumaReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
sumaReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
sumaReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    sumaReply *out,
    const sumaReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
sumaReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const sumaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sumaReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    sumaReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sumaReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    sumaReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
sumaReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
sumaReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
sumaReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
sumaReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const sumaReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
sumaReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
sumaReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
sumaReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const sumaReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sumaReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    sumaReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sumaReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    sumaReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
sumaReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sumaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sumaReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sumaReplyKeyHolder *key, 
    const sumaReply *instance);

NDDSUSERDllExport extern RTIBool 
sumaReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    sumaReply *instance, 
    const sumaReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
sumaReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const sumaReply *instance);

NDDSUSERDllExport extern RTIBool 
sumaReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
sumaReplyPlugin_new(void);

NDDSUSERDllExport extern void
sumaReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* StructTestRequestReplyPlugin_1086133032_h */
