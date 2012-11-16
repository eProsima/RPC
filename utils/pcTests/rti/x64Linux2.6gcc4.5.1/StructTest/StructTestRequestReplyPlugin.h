
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StructTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef StructTestRequestReplyPlugin_1086133049_h
#define StructTestRequestReplyPlugin_1086133049_h

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

#include "MessageHeaderPlugin.h"


#include "StructTestPlugin.h"


/* The type used to store keys for instances of type struct
 * StructTest_duplicateRequest.
 *
 * By default, this type is struct StructTest_duplicateRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct StructTest_duplicateRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct StructTest_duplicateRequest, the
 * following restriction applies: the key of struct
 * StructTest_duplicateRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct StructTest_duplicateRequest.
*/
typedef  struct StructTest_duplicateRequest StructTest_duplicateRequestKeyHolder;


#define StructTest_duplicateRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define StructTest_duplicateRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define StructTest_duplicateRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define StructTest_duplicateRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define StructTest_duplicateRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define StructTest_duplicateRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define StructTest_duplicateRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define StructTest_duplicateRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern StructTest_duplicateRequest*
StructTest_duplicateRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern StructTest_duplicateRequest*
StructTest_duplicateRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateRequestPluginSupport_copy_data(
    StructTest_duplicateRequest *out,
    const StructTest_duplicateRequest *in);

NDDSUSERDllExport extern void 
StructTest_duplicateRequestPluginSupport_destroy_data_ex(
    StructTest_duplicateRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
StructTest_duplicateRequestPluginSupport_destroy_data(
    StructTest_duplicateRequest *sample);

NDDSUSERDllExport extern void 
StructTest_duplicateRequestPluginSupport_print_data(
    const StructTest_duplicateRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern StructTest_duplicateRequest*
StructTest_duplicateRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern StructTest_duplicateRequest*
StructTest_duplicateRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
StructTest_duplicateRequestPluginSupport_destroy_key_ex(
    StructTest_duplicateRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
StructTest_duplicateRequestPluginSupport_destroy_key(
    StructTest_duplicateRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
StructTest_duplicateRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
StructTest_duplicateRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
StructTest_duplicateRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
StructTest_duplicateRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateRequest *out,
    const StructTest_duplicateRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const StructTest_duplicateRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructTest_duplicateRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
StructTest_duplicateRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
StructTest_duplicateRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
StructTest_duplicateRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
StructTest_duplicateRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const StructTest_duplicateRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
StructTest_duplicateRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
StructTest_duplicateRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const StructTest_duplicateRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructTest_duplicateRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
StructTest_duplicateRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructTest_duplicateRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateRequestKeyHolder *key, 
    const StructTest_duplicateRequest *instance);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateRequest *instance, 
    const StructTest_duplicateRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const StructTest_duplicateRequest *instance);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
StructTest_duplicateRequestPlugin_new(void);

NDDSUSERDllExport extern void
StructTest_duplicateRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * StructTest_duplicateReply.
 *
 * By default, this type is struct StructTest_duplicateReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct StructTest_duplicateReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct StructTest_duplicateReply, the
 * following restriction applies: the key of struct
 * StructTest_duplicateReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct StructTest_duplicateReply.
*/
typedef  struct StructTest_duplicateReply StructTest_duplicateReplyKeyHolder;


#define StructTest_duplicateReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define StructTest_duplicateReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define StructTest_duplicateReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define StructTest_duplicateReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define StructTest_duplicateReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define StructTest_duplicateReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define StructTest_duplicateReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define StructTest_duplicateReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern StructTest_duplicateReply*
StructTest_duplicateReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern StructTest_duplicateReply*
StructTest_duplicateReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateReplyPluginSupport_copy_data(
    StructTest_duplicateReply *out,
    const StructTest_duplicateReply *in);

NDDSUSERDllExport extern void 
StructTest_duplicateReplyPluginSupport_destroy_data_ex(
    StructTest_duplicateReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
StructTest_duplicateReplyPluginSupport_destroy_data(
    StructTest_duplicateReply *sample);

NDDSUSERDllExport extern void 
StructTest_duplicateReplyPluginSupport_print_data(
    const StructTest_duplicateReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern StructTest_duplicateReply*
StructTest_duplicateReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern StructTest_duplicateReply*
StructTest_duplicateReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
StructTest_duplicateReplyPluginSupport_destroy_key_ex(
    StructTest_duplicateReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
StructTest_duplicateReplyPluginSupport_destroy_key(
    StructTest_duplicateReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
StructTest_duplicateReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
StructTest_duplicateReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
StructTest_duplicateReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
StructTest_duplicateReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateReply *out,
    const StructTest_duplicateReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const StructTest_duplicateReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructTest_duplicateReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
StructTest_duplicateReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
StructTest_duplicateReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
StructTest_duplicateReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
StructTest_duplicateReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const StructTest_duplicateReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
StructTest_duplicateReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
StructTest_duplicateReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const StructTest_duplicateReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructTest_duplicateReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
StructTest_duplicateReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructTest_duplicateReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateReplyKeyHolder *key, 
    const StructTest_duplicateReply *instance);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_duplicateReply *instance, 
    const StructTest_duplicateReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const StructTest_duplicateReply *instance);

NDDSUSERDllExport extern RTIBool 
StructTest_duplicateReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
StructTest_duplicateReplyPlugin_new(void);

NDDSUSERDllExport extern void
StructTest_duplicateReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * StructTest_sumaRequest.
 *
 * By default, this type is struct StructTest_sumaRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct StructTest_sumaRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct StructTest_sumaRequest, the
 * following restriction applies: the key of struct
 * StructTest_sumaRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct StructTest_sumaRequest.
*/
typedef  struct StructTest_sumaRequest StructTest_sumaRequestKeyHolder;


#define StructTest_sumaRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define StructTest_sumaRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define StructTest_sumaRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define StructTest_sumaRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define StructTest_sumaRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define StructTest_sumaRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define StructTest_sumaRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define StructTest_sumaRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern StructTest_sumaRequest*
StructTest_sumaRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern StructTest_sumaRequest*
StructTest_sumaRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaRequestPluginSupport_copy_data(
    StructTest_sumaRequest *out,
    const StructTest_sumaRequest *in);

NDDSUSERDllExport extern void 
StructTest_sumaRequestPluginSupport_destroy_data_ex(
    StructTest_sumaRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
StructTest_sumaRequestPluginSupport_destroy_data(
    StructTest_sumaRequest *sample);

NDDSUSERDllExport extern void 
StructTest_sumaRequestPluginSupport_print_data(
    const StructTest_sumaRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern StructTest_sumaRequest*
StructTest_sumaRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern StructTest_sumaRequest*
StructTest_sumaRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
StructTest_sumaRequestPluginSupport_destroy_key_ex(
    StructTest_sumaRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
StructTest_sumaRequestPluginSupport_destroy_key(
    StructTest_sumaRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
StructTest_sumaRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
StructTest_sumaRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
StructTest_sumaRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
StructTest_sumaRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaRequest *out,
    const StructTest_sumaRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
StructTest_sumaRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const StructTest_sumaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructTest_sumaRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
StructTest_sumaRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
StructTest_sumaRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
StructTest_sumaRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
StructTest_sumaRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const StructTest_sumaRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
StructTest_sumaRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
StructTest_sumaRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const StructTest_sumaRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructTest_sumaRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
StructTest_sumaRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructTest_sumaRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaRequestKeyHolder *key, 
    const StructTest_sumaRequest *instance);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaRequest *instance, 
    const StructTest_sumaRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const StructTest_sumaRequest *instance);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
StructTest_sumaRequestPlugin_new(void);

NDDSUSERDllExport extern void
StructTest_sumaRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * StructTest_sumaReply.
 *
 * By default, this type is struct StructTest_sumaReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct StructTest_sumaReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct StructTest_sumaReply, the
 * following restriction applies: the key of struct
 * StructTest_sumaReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct StructTest_sumaReply.
*/
typedef  struct StructTest_sumaReply StructTest_sumaReplyKeyHolder;


#define StructTest_sumaReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define StructTest_sumaReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define StructTest_sumaReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define StructTest_sumaReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define StructTest_sumaReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define StructTest_sumaReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define StructTest_sumaReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define StructTest_sumaReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern StructTest_sumaReply*
StructTest_sumaReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern StructTest_sumaReply*
StructTest_sumaReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaReplyPluginSupport_copy_data(
    StructTest_sumaReply *out,
    const StructTest_sumaReply *in);

NDDSUSERDllExport extern void 
StructTest_sumaReplyPluginSupport_destroy_data_ex(
    StructTest_sumaReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
StructTest_sumaReplyPluginSupport_destroy_data(
    StructTest_sumaReply *sample);

NDDSUSERDllExport extern void 
StructTest_sumaReplyPluginSupport_print_data(
    const StructTest_sumaReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern StructTest_sumaReply*
StructTest_sumaReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern StructTest_sumaReply*
StructTest_sumaReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
StructTest_sumaReplyPluginSupport_destroy_key_ex(
    StructTest_sumaReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
StructTest_sumaReplyPluginSupport_destroy_key(
    StructTest_sumaReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
StructTest_sumaReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
StructTest_sumaReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
StructTest_sumaReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
StructTest_sumaReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaReply *out,
    const StructTest_sumaReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
StructTest_sumaReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const StructTest_sumaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructTest_sumaReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
StructTest_sumaReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
StructTest_sumaReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
StructTest_sumaReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
StructTest_sumaReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const StructTest_sumaReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
StructTest_sumaReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
StructTest_sumaReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const StructTest_sumaReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructTest_sumaReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
StructTest_sumaReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructTest_sumaReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaReplyKeyHolder *key, 
    const StructTest_sumaReply *instance);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    StructTest_sumaReply *instance, 
    const StructTest_sumaReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const StructTest_sumaReply *instance);

NDDSUSERDllExport extern RTIBool 
StructTest_sumaReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
StructTest_sumaReplyPlugin_new(void);

NDDSUSERDllExport extern void
StructTest_sumaReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* StructTestRequestReplyPlugin_1086133049_h */
