
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SequenceTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SequenceTestRequestReplyPlugin_1689903520_h
#define SequenceTestRequestReplyPlugin_1689903520_h

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

#include "MessageHeaderPlugin.h"


#include "SequenceTestPlugin.h"


#define SequenceTest_getSLongRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * SequenceTest_getSLongRequest.
 *
 * By default, this type is struct SequenceTest_getSLongRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SequenceTest_getSLongRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SequenceTest_getSLongRequest, the
 * following restriction applies: the key of struct
 * SequenceTest_getSLongRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SequenceTest_getSLongRequest.
*/
typedef  class SequenceTest_getSLongRequest SequenceTest_getSLongRequestKeyHolder;


#define SequenceTest_getSLongRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define SequenceTest_getSLongRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define SequenceTest_getSLongRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SequenceTest_getSLongRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SequenceTest_getSLongRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SequenceTest_getSLongRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SequenceTest_getSLongRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SequenceTest_getSLongRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SequenceTest_getSLongRequest*
SequenceTest_getSLongRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SequenceTest_getSLongRequest*
SequenceTest_getSLongRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongRequestPluginSupport_copy_data(
    SequenceTest_getSLongRequest *out,
    const SequenceTest_getSLongRequest *in);

NDDSUSERDllExport extern void 
SequenceTest_getSLongRequestPluginSupport_destroy_data_ex(
    SequenceTest_getSLongRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SequenceTest_getSLongRequestPluginSupport_destroy_data(
    SequenceTest_getSLongRequest *sample);

NDDSUSERDllExport extern void 
SequenceTest_getSLongRequestPluginSupport_print_data(
    const SequenceTest_getSLongRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SequenceTest_getSLongRequest*
SequenceTest_getSLongRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SequenceTest_getSLongRequest*
SequenceTest_getSLongRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SequenceTest_getSLongRequestPluginSupport_destroy_key_ex(
    SequenceTest_getSLongRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SequenceTest_getSLongRequestPluginSupport_destroy_key(
    SequenceTest_getSLongRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SequenceTest_getSLongRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SequenceTest_getSLongRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SequenceTest_getSLongRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SequenceTest_getSLongRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongRequest *out,
    const SequenceTest_getSLongRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SequenceTest_getSLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SequenceTest_getSLongRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getSLongRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getSLongRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SequenceTest_getSLongRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SequenceTest_getSLongRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SequenceTest_getSLongRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getSLongRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SequenceTest_getSLongRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SequenceTest_getSLongRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongRequestKeyHolder *key, 
    const SequenceTest_getSLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongRequest *instance, 
    const SequenceTest_getSLongRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SequenceTest_getSLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SequenceTest_getSLongRequestPlugin_new(void);

NDDSUSERDllExport extern void
SequenceTest_getSLongRequestPlugin_delete(struct PRESTypePlugin *);

#define SequenceTest_getSLongReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * SequenceTest_getSLongReply.
 *
 * By default, this type is struct SequenceTest_getSLongReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SequenceTest_getSLongReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SequenceTest_getSLongReply, the
 * following restriction applies: the key of struct
 * SequenceTest_getSLongReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SequenceTest_getSLongReply.
*/
typedef  class SequenceTest_getSLongReply SequenceTest_getSLongReplyKeyHolder;


#define SequenceTest_getSLongReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define SequenceTest_getSLongReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define SequenceTest_getSLongReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SequenceTest_getSLongReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SequenceTest_getSLongReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SequenceTest_getSLongReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SequenceTest_getSLongReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SequenceTest_getSLongReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SequenceTest_getSLongReply*
SequenceTest_getSLongReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SequenceTest_getSLongReply*
SequenceTest_getSLongReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongReplyPluginSupport_copy_data(
    SequenceTest_getSLongReply *out,
    const SequenceTest_getSLongReply *in);

NDDSUSERDllExport extern void 
SequenceTest_getSLongReplyPluginSupport_destroy_data_ex(
    SequenceTest_getSLongReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SequenceTest_getSLongReplyPluginSupport_destroy_data(
    SequenceTest_getSLongReply *sample);

NDDSUSERDllExport extern void 
SequenceTest_getSLongReplyPluginSupport_print_data(
    const SequenceTest_getSLongReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SequenceTest_getSLongReply*
SequenceTest_getSLongReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SequenceTest_getSLongReply*
SequenceTest_getSLongReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SequenceTest_getSLongReplyPluginSupport_destroy_key_ex(
    SequenceTest_getSLongReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SequenceTest_getSLongReplyPluginSupport_destroy_key(
    SequenceTest_getSLongReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SequenceTest_getSLongReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SequenceTest_getSLongReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SequenceTest_getSLongReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SequenceTest_getSLongReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongReply *out,
    const SequenceTest_getSLongReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SequenceTest_getSLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SequenceTest_getSLongReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getSLongReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getSLongReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SequenceTest_getSLongReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SequenceTest_getSLongReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SequenceTest_getSLongReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getSLongReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SequenceTest_getSLongReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SequenceTest_getSLongReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongReplyKeyHolder *key, 
    const SequenceTest_getSLongReply *instance);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getSLongReply *instance, 
    const SequenceTest_getSLongReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SequenceTest_getSLongReply *instance);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getSLongReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SequenceTest_getSLongReplyPlugin_new(void);

NDDSUSERDllExport extern void
SequenceTest_getSLongReplyPlugin_delete(struct PRESTypePlugin *);

#define SequenceTest_getStringRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * SequenceTest_getStringRequest.
 *
 * By default, this type is struct SequenceTest_getStringRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SequenceTest_getStringRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SequenceTest_getStringRequest, the
 * following restriction applies: the key of struct
 * SequenceTest_getStringRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SequenceTest_getStringRequest.
*/
typedef  class SequenceTest_getStringRequest SequenceTest_getStringRequestKeyHolder;


#define SequenceTest_getStringRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define SequenceTest_getStringRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define SequenceTest_getStringRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SequenceTest_getStringRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SequenceTest_getStringRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SequenceTest_getStringRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SequenceTest_getStringRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SequenceTest_getStringRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SequenceTest_getStringRequest*
SequenceTest_getStringRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SequenceTest_getStringRequest*
SequenceTest_getStringRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringRequestPluginSupport_copy_data(
    SequenceTest_getStringRequest *out,
    const SequenceTest_getStringRequest *in);

NDDSUSERDllExport extern void 
SequenceTest_getStringRequestPluginSupport_destroy_data_ex(
    SequenceTest_getStringRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SequenceTest_getStringRequestPluginSupport_destroy_data(
    SequenceTest_getStringRequest *sample);

NDDSUSERDllExport extern void 
SequenceTest_getStringRequestPluginSupport_print_data(
    const SequenceTest_getStringRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SequenceTest_getStringRequest*
SequenceTest_getStringRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SequenceTest_getStringRequest*
SequenceTest_getStringRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SequenceTest_getStringRequestPluginSupport_destroy_key_ex(
    SequenceTest_getStringRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SequenceTest_getStringRequestPluginSupport_destroy_key(
    SequenceTest_getStringRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SequenceTest_getStringRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SequenceTest_getStringRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SequenceTest_getStringRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SequenceTest_getStringRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringRequest *out,
    const SequenceTest_getStringRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SequenceTest_getStringRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SequenceTest_getStringRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getStringRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getStringRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SequenceTest_getStringRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SequenceTest_getStringRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SequenceTest_getStringRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getStringRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SequenceTest_getStringRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SequenceTest_getStringRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringRequestKeyHolder *key, 
    const SequenceTest_getStringRequest *instance);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringRequest *instance, 
    const SequenceTest_getStringRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SequenceTest_getStringRequest *instance);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SequenceTest_getStringRequestPlugin_new(void);

NDDSUSERDllExport extern void
SequenceTest_getStringRequestPlugin_delete(struct PRESTypePlugin *);

#define SequenceTest_getStringReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * SequenceTest_getStringReply.
 *
 * By default, this type is struct SequenceTest_getStringReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SequenceTest_getStringReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SequenceTest_getStringReply, the
 * following restriction applies: the key of struct
 * SequenceTest_getStringReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SequenceTest_getStringReply.
*/
typedef  class SequenceTest_getStringReply SequenceTest_getStringReplyKeyHolder;


#define SequenceTest_getStringReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define SequenceTest_getStringReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define SequenceTest_getStringReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SequenceTest_getStringReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SequenceTest_getStringReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SequenceTest_getStringReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SequenceTest_getStringReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SequenceTest_getStringReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SequenceTest_getStringReply*
SequenceTest_getStringReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SequenceTest_getStringReply*
SequenceTest_getStringReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringReplyPluginSupport_copy_data(
    SequenceTest_getStringReply *out,
    const SequenceTest_getStringReply *in);

NDDSUSERDllExport extern void 
SequenceTest_getStringReplyPluginSupport_destroy_data_ex(
    SequenceTest_getStringReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SequenceTest_getStringReplyPluginSupport_destroy_data(
    SequenceTest_getStringReply *sample);

NDDSUSERDllExport extern void 
SequenceTest_getStringReplyPluginSupport_print_data(
    const SequenceTest_getStringReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SequenceTest_getStringReply*
SequenceTest_getStringReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SequenceTest_getStringReply*
SequenceTest_getStringReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SequenceTest_getStringReplyPluginSupport_destroy_key_ex(
    SequenceTest_getStringReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SequenceTest_getStringReplyPluginSupport_destroy_key(
    SequenceTest_getStringReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SequenceTest_getStringReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SequenceTest_getStringReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SequenceTest_getStringReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SequenceTest_getStringReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringReply *out,
    const SequenceTest_getStringReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SequenceTest_getStringReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SequenceTest_getStringReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getStringReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getStringReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SequenceTest_getStringReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SequenceTest_getStringReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SequenceTest_getStringReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getStringReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SequenceTest_getStringReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SequenceTest_getStringReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringReplyKeyHolder *key, 
    const SequenceTest_getStringReply *instance);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringReply *instance, 
    const SequenceTest_getStringReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SequenceTest_getStringReply *instance);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SequenceTest_getStringReplyPlugin_new(void);

NDDSUSERDllExport extern void
SequenceTest_getStringReplyPlugin_delete(struct PRESTypePlugin *);

#define SequenceTest_getStringBoundedRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * SequenceTest_getStringBoundedRequest.
 *
 * By default, this type is struct SequenceTest_getStringBoundedRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SequenceTest_getStringBoundedRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SequenceTest_getStringBoundedRequest, the
 * following restriction applies: the key of struct
 * SequenceTest_getStringBoundedRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SequenceTest_getStringBoundedRequest.
*/
typedef  class SequenceTest_getStringBoundedRequest SequenceTest_getStringBoundedRequestKeyHolder;


#define SequenceTest_getStringBoundedRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define SequenceTest_getStringBoundedRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define SequenceTest_getStringBoundedRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SequenceTest_getStringBoundedRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SequenceTest_getStringBoundedRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SequenceTest_getStringBoundedRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SequenceTest_getStringBoundedRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SequenceTest_getStringBoundedRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SequenceTest_getStringBoundedRequest*
SequenceTest_getStringBoundedRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SequenceTest_getStringBoundedRequest*
SequenceTest_getStringBoundedRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedRequestPluginSupport_copy_data(
    SequenceTest_getStringBoundedRequest *out,
    const SequenceTest_getStringBoundedRequest *in);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedRequestPluginSupport_destroy_data_ex(
    SequenceTest_getStringBoundedRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedRequestPluginSupport_destroy_data(
    SequenceTest_getStringBoundedRequest *sample);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedRequestPluginSupport_print_data(
    const SequenceTest_getStringBoundedRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SequenceTest_getStringBoundedRequest*
SequenceTest_getStringBoundedRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SequenceTest_getStringBoundedRequest*
SequenceTest_getStringBoundedRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedRequestPluginSupport_destroy_key_ex(
    SequenceTest_getStringBoundedRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedRequestPluginSupport_destroy_key(
    SequenceTest_getStringBoundedRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SequenceTest_getStringBoundedRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SequenceTest_getStringBoundedRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedRequest *out,
    const SequenceTest_getStringBoundedRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SequenceTest_getStringBoundedRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SequenceTest_getStringBoundedRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getStringBoundedRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getStringBoundedRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SequenceTest_getStringBoundedRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SequenceTest_getStringBoundedRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SequenceTest_getStringBoundedRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getStringBoundedRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SequenceTest_getStringBoundedRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SequenceTest_getStringBoundedRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedRequestKeyHolder *key, 
    const SequenceTest_getStringBoundedRequest *instance);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedRequest *instance, 
    const SequenceTest_getStringBoundedRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SequenceTest_getStringBoundedRequest *instance);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SequenceTest_getStringBoundedRequestPlugin_new(void);

NDDSUSERDllExport extern void
SequenceTest_getStringBoundedRequestPlugin_delete(struct PRESTypePlugin *);

#define SequenceTest_getStringBoundedReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * SequenceTest_getStringBoundedReply.
 *
 * By default, this type is struct SequenceTest_getStringBoundedReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SequenceTest_getStringBoundedReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SequenceTest_getStringBoundedReply, the
 * following restriction applies: the key of struct
 * SequenceTest_getStringBoundedReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SequenceTest_getStringBoundedReply.
*/
typedef  class SequenceTest_getStringBoundedReply SequenceTest_getStringBoundedReplyKeyHolder;


#define SequenceTest_getStringBoundedReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define SequenceTest_getStringBoundedReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define SequenceTest_getStringBoundedReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SequenceTest_getStringBoundedReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SequenceTest_getStringBoundedReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SequenceTest_getStringBoundedReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SequenceTest_getStringBoundedReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SequenceTest_getStringBoundedReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SequenceTest_getStringBoundedReply*
SequenceTest_getStringBoundedReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SequenceTest_getStringBoundedReply*
SequenceTest_getStringBoundedReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedReplyPluginSupport_copy_data(
    SequenceTest_getStringBoundedReply *out,
    const SequenceTest_getStringBoundedReply *in);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedReplyPluginSupport_destroy_data_ex(
    SequenceTest_getStringBoundedReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedReplyPluginSupport_destroy_data(
    SequenceTest_getStringBoundedReply *sample);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedReplyPluginSupport_print_data(
    const SequenceTest_getStringBoundedReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SequenceTest_getStringBoundedReply*
SequenceTest_getStringBoundedReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SequenceTest_getStringBoundedReply*
SequenceTest_getStringBoundedReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedReplyPluginSupport_destroy_key_ex(
    SequenceTest_getStringBoundedReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedReplyPluginSupport_destroy_key(
    SequenceTest_getStringBoundedReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SequenceTest_getStringBoundedReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SequenceTest_getStringBoundedReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SequenceTest_getStringBoundedReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedReply *out,
    const SequenceTest_getStringBoundedReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SequenceTest_getStringBoundedReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SequenceTest_getStringBoundedReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getStringBoundedReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getStringBoundedReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SequenceTest_getStringBoundedReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SequenceTest_getStringBoundedReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SequenceTest_getStringBoundedReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SequenceTest_getStringBoundedReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SequenceTest_getStringBoundedReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SequenceTest_getStringBoundedReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedReplyKeyHolder *key, 
    const SequenceTest_getStringBoundedReply *instance);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SequenceTest_getStringBoundedReply *instance, 
    const SequenceTest_getStringBoundedReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SequenceTest_getStringBoundedReply *instance);

NDDSUSERDllExport extern RTIBool 
SequenceTest_getStringBoundedReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SequenceTest_getStringBoundedReplyPlugin_new(void);

NDDSUSERDllExport extern void
SequenceTest_getStringBoundedReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* SequenceTestRequestReplyPlugin_1689903520_h */
