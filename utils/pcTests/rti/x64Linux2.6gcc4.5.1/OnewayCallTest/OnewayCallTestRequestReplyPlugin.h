
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from OnewayCallTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef OnewayCallTestRequestReplyPlugin_1352503069_h
#define OnewayCallTestRequestReplyPlugin_1352503069_h

#include "OnewayCallTestRequestReply.h"




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


#include "OnewayCallTestPlugin.h"


#define OnewayCallTest_setLongRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * OnewayCallTest_setLongRequest.
 *
 * By default, this type is struct OnewayCallTest_setLongRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct OnewayCallTest_setLongRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct OnewayCallTest_setLongRequest, the
 * following restriction applies: the key of struct
 * OnewayCallTest_setLongRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct OnewayCallTest_setLongRequest.
*/
typedef  class OnewayCallTest_setLongRequest OnewayCallTest_setLongRequestKeyHolder;


#define OnewayCallTest_setLongRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define OnewayCallTest_setLongRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define OnewayCallTest_setLongRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OnewayCallTest_setLongRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define OnewayCallTest_setLongRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define OnewayCallTest_setLongRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define OnewayCallTest_setLongRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OnewayCallTest_setLongRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OnewayCallTest_setLongRequest*
OnewayCallTest_setLongRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_setLongRequest*
OnewayCallTest_setLongRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setLongRequestPluginSupport_copy_data(
    OnewayCallTest_setLongRequest *out,
    const OnewayCallTest_setLongRequest *in);

NDDSUSERDllExport extern void 
OnewayCallTest_setLongRequestPluginSupport_destroy_data_ex(
    OnewayCallTest_setLongRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_setLongRequestPluginSupport_destroy_data(
    OnewayCallTest_setLongRequest *sample);

NDDSUSERDllExport extern void 
OnewayCallTest_setLongRequestPluginSupport_print_data(
    const OnewayCallTest_setLongRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern OnewayCallTest_setLongRequest*
OnewayCallTest_setLongRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_setLongRequest*
OnewayCallTest_setLongRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
OnewayCallTest_setLongRequestPluginSupport_destroy_key_ex(
    OnewayCallTest_setLongRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_setLongRequestPluginSupport_destroy_key(
    OnewayCallTest_setLongRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OnewayCallTest_setLongRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OnewayCallTest_setLongRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OnewayCallTest_setLongRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OnewayCallTest_setLongRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setLongRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setLongRequest *out,
    const OnewayCallTest_setLongRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setLongRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_setLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setLongRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setLongRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setLongRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setLongRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OnewayCallTest_setLongRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_setLongRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_setLongRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OnewayCallTest_setLongRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OnewayCallTest_setLongRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OnewayCallTest_setLongRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_setLongRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setLongRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_setLongRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setLongRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setLongRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setLongRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setLongRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OnewayCallTest_setLongRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setLongRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setLongRequestKeyHolder *key, 
    const OnewayCallTest_setLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setLongRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setLongRequest *instance, 
    const OnewayCallTest_setLongRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setLongRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const OnewayCallTest_setLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setLongRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OnewayCallTest_setLongRequestPlugin_new(void);

NDDSUSERDllExport extern void
OnewayCallTest_setLongRequestPlugin_delete(struct PRESTypePlugin *);

#define OnewayCallTest_getLongRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * OnewayCallTest_getLongRequest.
 *
 * By default, this type is struct OnewayCallTest_getLongRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct OnewayCallTest_getLongRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct OnewayCallTest_getLongRequest, the
 * following restriction applies: the key of struct
 * OnewayCallTest_getLongRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct OnewayCallTest_getLongRequest.
*/
typedef  class OnewayCallTest_getLongRequest OnewayCallTest_getLongRequestKeyHolder;


#define OnewayCallTest_getLongRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define OnewayCallTest_getLongRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define OnewayCallTest_getLongRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OnewayCallTest_getLongRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define OnewayCallTest_getLongRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define OnewayCallTest_getLongRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define OnewayCallTest_getLongRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OnewayCallTest_getLongRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OnewayCallTest_getLongRequest*
OnewayCallTest_getLongRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getLongRequest*
OnewayCallTest_getLongRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongRequestPluginSupport_copy_data(
    OnewayCallTest_getLongRequest *out,
    const OnewayCallTest_getLongRequest *in);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongRequestPluginSupport_destroy_data_ex(
    OnewayCallTest_getLongRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongRequestPluginSupport_destroy_data(
    OnewayCallTest_getLongRequest *sample);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongRequestPluginSupport_print_data(
    const OnewayCallTest_getLongRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern OnewayCallTest_getLongRequest*
OnewayCallTest_getLongRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getLongRequest*
OnewayCallTest_getLongRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongRequestPluginSupport_destroy_key_ex(
    OnewayCallTest_getLongRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongRequestPluginSupport_destroy_key(
    OnewayCallTest_getLongRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OnewayCallTest_getLongRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OnewayCallTest_getLongRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongRequest *out,
    const OnewayCallTest_getLongRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OnewayCallTest_getLongRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getLongRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getLongRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OnewayCallTest_getLongRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OnewayCallTest_getLongRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OnewayCallTest_getLongRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getLongRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getLongRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OnewayCallTest_getLongRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongRequestKeyHolder *key, 
    const OnewayCallTest_getLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongRequest *instance, 
    const OnewayCallTest_getLongRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const OnewayCallTest_getLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OnewayCallTest_getLongRequestPlugin_new(void);

NDDSUSERDllExport extern void
OnewayCallTest_getLongRequestPlugin_delete(struct PRESTypePlugin *);

#define OnewayCallTest_getLongReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * OnewayCallTest_getLongReply.
 *
 * By default, this type is struct OnewayCallTest_getLongReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct OnewayCallTest_getLongReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct OnewayCallTest_getLongReply, the
 * following restriction applies: the key of struct
 * OnewayCallTest_getLongReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct OnewayCallTest_getLongReply.
*/
typedef  class OnewayCallTest_getLongReply OnewayCallTest_getLongReplyKeyHolder;


#define OnewayCallTest_getLongReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define OnewayCallTest_getLongReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define OnewayCallTest_getLongReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OnewayCallTest_getLongReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define OnewayCallTest_getLongReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define OnewayCallTest_getLongReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define OnewayCallTest_getLongReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OnewayCallTest_getLongReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OnewayCallTest_getLongReply*
OnewayCallTest_getLongReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getLongReply*
OnewayCallTest_getLongReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongReplyPluginSupport_copy_data(
    OnewayCallTest_getLongReply *out,
    const OnewayCallTest_getLongReply *in);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongReplyPluginSupport_destroy_data_ex(
    OnewayCallTest_getLongReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongReplyPluginSupport_destroy_data(
    OnewayCallTest_getLongReply *sample);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongReplyPluginSupport_print_data(
    const OnewayCallTest_getLongReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern OnewayCallTest_getLongReply*
OnewayCallTest_getLongReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getLongReply*
OnewayCallTest_getLongReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongReplyPluginSupport_destroy_key_ex(
    OnewayCallTest_getLongReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongReplyPluginSupport_destroy_key(
    OnewayCallTest_getLongReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OnewayCallTest_getLongReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OnewayCallTest_getLongReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OnewayCallTest_getLongReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongReply *out,
    const OnewayCallTest_getLongReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OnewayCallTest_getLongReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getLongReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getLongReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OnewayCallTest_getLongReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OnewayCallTest_getLongReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OnewayCallTest_getLongReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getLongReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getLongReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OnewayCallTest_getLongReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongReplyKeyHolder *key, 
    const OnewayCallTest_getLongReply *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getLongReply *instance, 
    const OnewayCallTest_getLongReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const OnewayCallTest_getLongReply *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getLongReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OnewayCallTest_getLongReplyPlugin_new(void);

NDDSUSERDllExport extern void
OnewayCallTest_getLongReplyPlugin_delete(struct PRESTypePlugin *);

#define OnewayCallTest_setBooleanRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * OnewayCallTest_setBooleanRequest.
 *
 * By default, this type is struct OnewayCallTest_setBooleanRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct OnewayCallTest_setBooleanRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct OnewayCallTest_setBooleanRequest, the
 * following restriction applies: the key of struct
 * OnewayCallTest_setBooleanRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct OnewayCallTest_setBooleanRequest.
*/
typedef  class OnewayCallTest_setBooleanRequest OnewayCallTest_setBooleanRequestKeyHolder;


#define OnewayCallTest_setBooleanRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define OnewayCallTest_setBooleanRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define OnewayCallTest_setBooleanRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OnewayCallTest_setBooleanRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define OnewayCallTest_setBooleanRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define OnewayCallTest_setBooleanRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define OnewayCallTest_setBooleanRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OnewayCallTest_setBooleanRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OnewayCallTest_setBooleanRequest*
OnewayCallTest_setBooleanRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_setBooleanRequest*
OnewayCallTest_setBooleanRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setBooleanRequestPluginSupport_copy_data(
    OnewayCallTest_setBooleanRequest *out,
    const OnewayCallTest_setBooleanRequest *in);

NDDSUSERDllExport extern void 
OnewayCallTest_setBooleanRequestPluginSupport_destroy_data_ex(
    OnewayCallTest_setBooleanRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_setBooleanRequestPluginSupport_destroy_data(
    OnewayCallTest_setBooleanRequest *sample);

NDDSUSERDllExport extern void 
OnewayCallTest_setBooleanRequestPluginSupport_print_data(
    const OnewayCallTest_setBooleanRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern OnewayCallTest_setBooleanRequest*
OnewayCallTest_setBooleanRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_setBooleanRequest*
OnewayCallTest_setBooleanRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
OnewayCallTest_setBooleanRequestPluginSupport_destroy_key_ex(
    OnewayCallTest_setBooleanRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_setBooleanRequestPluginSupport_destroy_key(
    OnewayCallTest_setBooleanRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OnewayCallTest_setBooleanRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OnewayCallTest_setBooleanRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OnewayCallTest_setBooleanRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OnewayCallTest_setBooleanRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setBooleanRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setBooleanRequest *out,
    const OnewayCallTest_setBooleanRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setBooleanRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_setBooleanRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setBooleanRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setBooleanRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setBooleanRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setBooleanRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OnewayCallTest_setBooleanRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_setBooleanRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_setBooleanRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OnewayCallTest_setBooleanRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OnewayCallTest_setBooleanRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OnewayCallTest_setBooleanRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_setBooleanRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setBooleanRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_setBooleanRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setBooleanRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setBooleanRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setBooleanRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setBooleanRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OnewayCallTest_setBooleanRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setBooleanRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setBooleanRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setBooleanRequestKeyHolder *key, 
    const OnewayCallTest_setBooleanRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setBooleanRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setBooleanRequest *instance, 
    const OnewayCallTest_setBooleanRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setBooleanRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const OnewayCallTest_setBooleanRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setBooleanRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OnewayCallTest_setBooleanRequestPlugin_new(void);

NDDSUSERDllExport extern void
OnewayCallTest_setBooleanRequestPlugin_delete(struct PRESTypePlugin *);

#define OnewayCallTest_getBooleanRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * OnewayCallTest_getBooleanRequest.
 *
 * By default, this type is struct OnewayCallTest_getBooleanRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct OnewayCallTest_getBooleanRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct OnewayCallTest_getBooleanRequest, the
 * following restriction applies: the key of struct
 * OnewayCallTest_getBooleanRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct OnewayCallTest_getBooleanRequest.
*/
typedef  class OnewayCallTest_getBooleanRequest OnewayCallTest_getBooleanRequestKeyHolder;


#define OnewayCallTest_getBooleanRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define OnewayCallTest_getBooleanRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define OnewayCallTest_getBooleanRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OnewayCallTest_getBooleanRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define OnewayCallTest_getBooleanRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define OnewayCallTest_getBooleanRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define OnewayCallTest_getBooleanRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OnewayCallTest_getBooleanRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OnewayCallTest_getBooleanRequest*
OnewayCallTest_getBooleanRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getBooleanRequest*
OnewayCallTest_getBooleanRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanRequestPluginSupport_copy_data(
    OnewayCallTest_getBooleanRequest *out,
    const OnewayCallTest_getBooleanRequest *in);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanRequestPluginSupport_destroy_data_ex(
    OnewayCallTest_getBooleanRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanRequestPluginSupport_destroy_data(
    OnewayCallTest_getBooleanRequest *sample);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanRequestPluginSupport_print_data(
    const OnewayCallTest_getBooleanRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern OnewayCallTest_getBooleanRequest*
OnewayCallTest_getBooleanRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getBooleanRequest*
OnewayCallTest_getBooleanRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanRequestPluginSupport_destroy_key_ex(
    OnewayCallTest_getBooleanRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanRequestPluginSupport_destroy_key(
    OnewayCallTest_getBooleanRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OnewayCallTest_getBooleanRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OnewayCallTest_getBooleanRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanRequest *out,
    const OnewayCallTest_getBooleanRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getBooleanRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OnewayCallTest_getBooleanRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getBooleanRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getBooleanRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OnewayCallTest_getBooleanRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OnewayCallTest_getBooleanRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OnewayCallTest_getBooleanRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getBooleanRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getBooleanRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OnewayCallTest_getBooleanRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanRequestKeyHolder *key, 
    const OnewayCallTest_getBooleanRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanRequest *instance, 
    const OnewayCallTest_getBooleanRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const OnewayCallTest_getBooleanRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OnewayCallTest_getBooleanRequestPlugin_new(void);

NDDSUSERDllExport extern void
OnewayCallTest_getBooleanRequestPlugin_delete(struct PRESTypePlugin *);

#define OnewayCallTest_getBooleanReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * OnewayCallTest_getBooleanReply.
 *
 * By default, this type is struct OnewayCallTest_getBooleanReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct OnewayCallTest_getBooleanReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct OnewayCallTest_getBooleanReply, the
 * following restriction applies: the key of struct
 * OnewayCallTest_getBooleanReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct OnewayCallTest_getBooleanReply.
*/
typedef  class OnewayCallTest_getBooleanReply OnewayCallTest_getBooleanReplyKeyHolder;


#define OnewayCallTest_getBooleanReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define OnewayCallTest_getBooleanReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define OnewayCallTest_getBooleanReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OnewayCallTest_getBooleanReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define OnewayCallTest_getBooleanReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define OnewayCallTest_getBooleanReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define OnewayCallTest_getBooleanReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OnewayCallTest_getBooleanReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OnewayCallTest_getBooleanReply*
OnewayCallTest_getBooleanReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getBooleanReply*
OnewayCallTest_getBooleanReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanReplyPluginSupport_copy_data(
    OnewayCallTest_getBooleanReply *out,
    const OnewayCallTest_getBooleanReply *in);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanReplyPluginSupport_destroy_data_ex(
    OnewayCallTest_getBooleanReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanReplyPluginSupport_destroy_data(
    OnewayCallTest_getBooleanReply *sample);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanReplyPluginSupport_print_data(
    const OnewayCallTest_getBooleanReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern OnewayCallTest_getBooleanReply*
OnewayCallTest_getBooleanReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getBooleanReply*
OnewayCallTest_getBooleanReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanReplyPluginSupport_destroy_key_ex(
    OnewayCallTest_getBooleanReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanReplyPluginSupport_destroy_key(
    OnewayCallTest_getBooleanReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OnewayCallTest_getBooleanReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OnewayCallTest_getBooleanReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OnewayCallTest_getBooleanReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanReply *out,
    const OnewayCallTest_getBooleanReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getBooleanReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OnewayCallTest_getBooleanReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getBooleanReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getBooleanReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OnewayCallTest_getBooleanReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OnewayCallTest_getBooleanReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OnewayCallTest_getBooleanReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getBooleanReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getBooleanReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OnewayCallTest_getBooleanReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanReplyKeyHolder *key, 
    const OnewayCallTest_getBooleanReply *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getBooleanReply *instance, 
    const OnewayCallTest_getBooleanReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const OnewayCallTest_getBooleanReply *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getBooleanReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OnewayCallTest_getBooleanReplyPlugin_new(void);

NDDSUSERDllExport extern void
OnewayCallTest_getBooleanReplyPlugin_delete(struct PRESTypePlugin *);

#define OnewayCallTest_setStringRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * OnewayCallTest_setStringRequest.
 *
 * By default, this type is struct OnewayCallTest_setStringRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct OnewayCallTest_setStringRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct OnewayCallTest_setStringRequest, the
 * following restriction applies: the key of struct
 * OnewayCallTest_setStringRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct OnewayCallTest_setStringRequest.
*/
typedef  class OnewayCallTest_setStringRequest OnewayCallTest_setStringRequestKeyHolder;


#define OnewayCallTest_setStringRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define OnewayCallTest_setStringRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define OnewayCallTest_setStringRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OnewayCallTest_setStringRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define OnewayCallTest_setStringRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define OnewayCallTest_setStringRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define OnewayCallTest_setStringRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OnewayCallTest_setStringRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OnewayCallTest_setStringRequest*
OnewayCallTest_setStringRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_setStringRequest*
OnewayCallTest_setStringRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStringRequestPluginSupport_copy_data(
    OnewayCallTest_setStringRequest *out,
    const OnewayCallTest_setStringRequest *in);

NDDSUSERDllExport extern void 
OnewayCallTest_setStringRequestPluginSupport_destroy_data_ex(
    OnewayCallTest_setStringRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_setStringRequestPluginSupport_destroy_data(
    OnewayCallTest_setStringRequest *sample);

NDDSUSERDllExport extern void 
OnewayCallTest_setStringRequestPluginSupport_print_data(
    const OnewayCallTest_setStringRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern OnewayCallTest_setStringRequest*
OnewayCallTest_setStringRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_setStringRequest*
OnewayCallTest_setStringRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
OnewayCallTest_setStringRequestPluginSupport_destroy_key_ex(
    OnewayCallTest_setStringRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_setStringRequestPluginSupport_destroy_key(
    OnewayCallTest_setStringRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OnewayCallTest_setStringRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OnewayCallTest_setStringRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OnewayCallTest_setStringRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OnewayCallTest_setStringRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStringRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStringRequest *out,
    const OnewayCallTest_setStringRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStringRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_setStringRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStringRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStringRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStringRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStringRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OnewayCallTest_setStringRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_setStringRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_setStringRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OnewayCallTest_setStringRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OnewayCallTest_setStringRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OnewayCallTest_setStringRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_setStringRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStringRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_setStringRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStringRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStringRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStringRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStringRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OnewayCallTest_setStringRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStringRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStringRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStringRequestKeyHolder *key, 
    const OnewayCallTest_setStringRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStringRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStringRequest *instance, 
    const OnewayCallTest_setStringRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStringRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const OnewayCallTest_setStringRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStringRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OnewayCallTest_setStringRequestPlugin_new(void);

NDDSUSERDllExport extern void
OnewayCallTest_setStringRequestPlugin_delete(struct PRESTypePlugin *);

#define OnewayCallTest_getStringRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * OnewayCallTest_getStringRequest.
 *
 * By default, this type is struct OnewayCallTest_getStringRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct OnewayCallTest_getStringRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct OnewayCallTest_getStringRequest, the
 * following restriction applies: the key of struct
 * OnewayCallTest_getStringRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct OnewayCallTest_getStringRequest.
*/
typedef  class OnewayCallTest_getStringRequest OnewayCallTest_getStringRequestKeyHolder;


#define OnewayCallTest_getStringRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define OnewayCallTest_getStringRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define OnewayCallTest_getStringRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OnewayCallTest_getStringRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define OnewayCallTest_getStringRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define OnewayCallTest_getStringRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define OnewayCallTest_getStringRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OnewayCallTest_getStringRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OnewayCallTest_getStringRequest*
OnewayCallTest_getStringRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getStringRequest*
OnewayCallTest_getStringRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringRequestPluginSupport_copy_data(
    OnewayCallTest_getStringRequest *out,
    const OnewayCallTest_getStringRequest *in);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringRequestPluginSupport_destroy_data_ex(
    OnewayCallTest_getStringRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringRequestPluginSupport_destroy_data(
    OnewayCallTest_getStringRequest *sample);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringRequestPluginSupport_print_data(
    const OnewayCallTest_getStringRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern OnewayCallTest_getStringRequest*
OnewayCallTest_getStringRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getStringRequest*
OnewayCallTest_getStringRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringRequestPluginSupport_destroy_key_ex(
    OnewayCallTest_getStringRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringRequestPluginSupport_destroy_key(
    OnewayCallTest_getStringRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OnewayCallTest_getStringRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OnewayCallTest_getStringRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringRequest *out,
    const OnewayCallTest_getStringRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getStringRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OnewayCallTest_getStringRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getStringRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getStringRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OnewayCallTest_getStringRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OnewayCallTest_getStringRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OnewayCallTest_getStringRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getStringRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getStringRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OnewayCallTest_getStringRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringRequestKeyHolder *key, 
    const OnewayCallTest_getStringRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringRequest *instance, 
    const OnewayCallTest_getStringRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const OnewayCallTest_getStringRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OnewayCallTest_getStringRequestPlugin_new(void);

NDDSUSERDllExport extern void
OnewayCallTest_getStringRequestPlugin_delete(struct PRESTypePlugin *);

#define OnewayCallTest_getStringReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * OnewayCallTest_getStringReply.
 *
 * By default, this type is struct OnewayCallTest_getStringReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct OnewayCallTest_getStringReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct OnewayCallTest_getStringReply, the
 * following restriction applies: the key of struct
 * OnewayCallTest_getStringReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct OnewayCallTest_getStringReply.
*/
typedef  class OnewayCallTest_getStringReply OnewayCallTest_getStringReplyKeyHolder;


#define OnewayCallTest_getStringReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define OnewayCallTest_getStringReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define OnewayCallTest_getStringReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OnewayCallTest_getStringReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define OnewayCallTest_getStringReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define OnewayCallTest_getStringReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define OnewayCallTest_getStringReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OnewayCallTest_getStringReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OnewayCallTest_getStringReply*
OnewayCallTest_getStringReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getStringReply*
OnewayCallTest_getStringReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringReplyPluginSupport_copy_data(
    OnewayCallTest_getStringReply *out,
    const OnewayCallTest_getStringReply *in);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringReplyPluginSupport_destroy_data_ex(
    OnewayCallTest_getStringReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringReplyPluginSupport_destroy_data(
    OnewayCallTest_getStringReply *sample);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringReplyPluginSupport_print_data(
    const OnewayCallTest_getStringReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern OnewayCallTest_getStringReply*
OnewayCallTest_getStringReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getStringReply*
OnewayCallTest_getStringReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringReplyPluginSupport_destroy_key_ex(
    OnewayCallTest_getStringReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringReplyPluginSupport_destroy_key(
    OnewayCallTest_getStringReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OnewayCallTest_getStringReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OnewayCallTest_getStringReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OnewayCallTest_getStringReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringReply *out,
    const OnewayCallTest_getStringReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getStringReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OnewayCallTest_getStringReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getStringReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getStringReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OnewayCallTest_getStringReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OnewayCallTest_getStringReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OnewayCallTest_getStringReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getStringReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getStringReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OnewayCallTest_getStringReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringReplyKeyHolder *key, 
    const OnewayCallTest_getStringReply *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStringReply *instance, 
    const OnewayCallTest_getStringReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const OnewayCallTest_getStringReply *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStringReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OnewayCallTest_getStringReplyPlugin_new(void);

NDDSUSERDllExport extern void
OnewayCallTest_getStringReplyPlugin_delete(struct PRESTypePlugin *);

#define OnewayCallTest_setStructRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * OnewayCallTest_setStructRequest.
 *
 * By default, this type is struct OnewayCallTest_setStructRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct OnewayCallTest_setStructRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct OnewayCallTest_setStructRequest, the
 * following restriction applies: the key of struct
 * OnewayCallTest_setStructRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct OnewayCallTest_setStructRequest.
*/
typedef  class OnewayCallTest_setStructRequest OnewayCallTest_setStructRequestKeyHolder;


#define OnewayCallTest_setStructRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define OnewayCallTest_setStructRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define OnewayCallTest_setStructRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OnewayCallTest_setStructRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define OnewayCallTest_setStructRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define OnewayCallTest_setStructRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define OnewayCallTest_setStructRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OnewayCallTest_setStructRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OnewayCallTest_setStructRequest*
OnewayCallTest_setStructRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_setStructRequest*
OnewayCallTest_setStructRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStructRequestPluginSupport_copy_data(
    OnewayCallTest_setStructRequest *out,
    const OnewayCallTest_setStructRequest *in);

NDDSUSERDllExport extern void 
OnewayCallTest_setStructRequestPluginSupport_destroy_data_ex(
    OnewayCallTest_setStructRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_setStructRequestPluginSupport_destroy_data(
    OnewayCallTest_setStructRequest *sample);

NDDSUSERDllExport extern void 
OnewayCallTest_setStructRequestPluginSupport_print_data(
    const OnewayCallTest_setStructRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern OnewayCallTest_setStructRequest*
OnewayCallTest_setStructRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_setStructRequest*
OnewayCallTest_setStructRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
OnewayCallTest_setStructRequestPluginSupport_destroy_key_ex(
    OnewayCallTest_setStructRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_setStructRequestPluginSupport_destroy_key(
    OnewayCallTest_setStructRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OnewayCallTest_setStructRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OnewayCallTest_setStructRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OnewayCallTest_setStructRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OnewayCallTest_setStructRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStructRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStructRequest *out,
    const OnewayCallTest_setStructRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStructRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_setStructRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStructRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStructRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStructRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStructRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OnewayCallTest_setStructRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_setStructRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_setStructRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OnewayCallTest_setStructRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OnewayCallTest_setStructRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OnewayCallTest_setStructRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_setStructRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStructRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_setStructRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStructRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStructRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStructRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStructRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OnewayCallTest_setStructRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStructRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStructRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStructRequestKeyHolder *key, 
    const OnewayCallTest_setStructRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStructRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_setStructRequest *instance, 
    const OnewayCallTest_setStructRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStructRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const OnewayCallTest_setStructRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_setStructRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OnewayCallTest_setStructRequestPlugin_new(void);

NDDSUSERDllExport extern void
OnewayCallTest_setStructRequestPlugin_delete(struct PRESTypePlugin *);

#define OnewayCallTest_getStructRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * OnewayCallTest_getStructRequest.
 *
 * By default, this type is struct OnewayCallTest_getStructRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct OnewayCallTest_getStructRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct OnewayCallTest_getStructRequest, the
 * following restriction applies: the key of struct
 * OnewayCallTest_getStructRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct OnewayCallTest_getStructRequest.
*/
typedef  class OnewayCallTest_getStructRequest OnewayCallTest_getStructRequestKeyHolder;


#define OnewayCallTest_getStructRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define OnewayCallTest_getStructRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define OnewayCallTest_getStructRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OnewayCallTest_getStructRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define OnewayCallTest_getStructRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define OnewayCallTest_getStructRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define OnewayCallTest_getStructRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OnewayCallTest_getStructRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OnewayCallTest_getStructRequest*
OnewayCallTest_getStructRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getStructRequest*
OnewayCallTest_getStructRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructRequestPluginSupport_copy_data(
    OnewayCallTest_getStructRequest *out,
    const OnewayCallTest_getStructRequest *in);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructRequestPluginSupport_destroy_data_ex(
    OnewayCallTest_getStructRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructRequestPluginSupport_destroy_data(
    OnewayCallTest_getStructRequest *sample);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructRequestPluginSupport_print_data(
    const OnewayCallTest_getStructRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern OnewayCallTest_getStructRequest*
OnewayCallTest_getStructRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getStructRequest*
OnewayCallTest_getStructRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructRequestPluginSupport_destroy_key_ex(
    OnewayCallTest_getStructRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructRequestPluginSupport_destroy_key(
    OnewayCallTest_getStructRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OnewayCallTest_getStructRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OnewayCallTest_getStructRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructRequest *out,
    const OnewayCallTest_getStructRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getStructRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OnewayCallTest_getStructRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getStructRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getStructRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OnewayCallTest_getStructRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OnewayCallTest_getStructRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OnewayCallTest_getStructRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getStructRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getStructRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OnewayCallTest_getStructRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructRequestKeyHolder *key, 
    const OnewayCallTest_getStructRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructRequest *instance, 
    const OnewayCallTest_getStructRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const OnewayCallTest_getStructRequest *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OnewayCallTest_getStructRequestPlugin_new(void);

NDDSUSERDllExport extern void
OnewayCallTest_getStructRequestPlugin_delete(struct PRESTypePlugin *);

#define OnewayCallTest_getStructReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * OnewayCallTest_getStructReply.
 *
 * By default, this type is struct OnewayCallTest_getStructReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct OnewayCallTest_getStructReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct OnewayCallTest_getStructReply, the
 * following restriction applies: the key of struct
 * OnewayCallTest_getStructReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct OnewayCallTest_getStructReply.
*/
typedef  class OnewayCallTest_getStructReply OnewayCallTest_getStructReplyKeyHolder;


#define OnewayCallTest_getStructReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define OnewayCallTest_getStructReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define OnewayCallTest_getStructReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define OnewayCallTest_getStructReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define OnewayCallTest_getStructReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define OnewayCallTest_getStructReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define OnewayCallTest_getStructReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define OnewayCallTest_getStructReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern OnewayCallTest_getStructReply*
OnewayCallTest_getStructReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getStructReply*
OnewayCallTest_getStructReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructReplyPluginSupport_copy_data(
    OnewayCallTest_getStructReply *out,
    const OnewayCallTest_getStructReply *in);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructReplyPluginSupport_destroy_data_ex(
    OnewayCallTest_getStructReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructReplyPluginSupport_destroy_data(
    OnewayCallTest_getStructReply *sample);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructReplyPluginSupport_print_data(
    const OnewayCallTest_getStructReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern OnewayCallTest_getStructReply*
OnewayCallTest_getStructReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern OnewayCallTest_getStructReply*
OnewayCallTest_getStructReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructReplyPluginSupport_destroy_key_ex(
    OnewayCallTest_getStructReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructReplyPluginSupport_destroy_key(
    OnewayCallTest_getStructReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
OnewayCallTest_getStructReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
OnewayCallTest_getStructReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
OnewayCallTest_getStructReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructReply *out,
    const OnewayCallTest_getStructReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getStructReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
OnewayCallTest_getStructReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getStructReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getStructReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
OnewayCallTest_getStructReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const OnewayCallTest_getStructReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
OnewayCallTest_getStructReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
OnewayCallTest_getStructReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const OnewayCallTest_getStructReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
OnewayCallTest_getStructReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructReplyKeyHolder *key, 
    const OnewayCallTest_getStructReply *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    OnewayCallTest_getStructReply *instance, 
    const OnewayCallTest_getStructReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const OnewayCallTest_getStructReply *instance);

NDDSUSERDllExport extern RTIBool 
OnewayCallTest_getStructReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
OnewayCallTest_getStructReplyPlugin_new(void);

NDDSUSERDllExport extern void
OnewayCallTest_getStructReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* OnewayCallTestRequestReplyPlugin_1352503069_h */
