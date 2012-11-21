
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ServerExceptionRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ServerExceptionRequestReplyPlugin_2113076152_h
#define ServerExceptionRequestReplyPlugin_2113076152_h

#include "ServerExceptionRequestReply.h"




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


#include "ServerExceptionPlugin.h"


#define ServerException_sendExceptionRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * ServerException_sendExceptionRequest.
 *
 * By default, this type is struct ServerException_sendExceptionRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct ServerException_sendExceptionRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct ServerException_sendExceptionRequest, the
 * following restriction applies: the key of struct
 * ServerException_sendExceptionRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct ServerException_sendExceptionRequest.
*/
typedef  class ServerException_sendExceptionRequest ServerException_sendExceptionRequestKeyHolder;


#define ServerException_sendExceptionRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define ServerException_sendExceptionRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define ServerException_sendExceptionRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ServerException_sendExceptionRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ServerException_sendExceptionRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ServerException_sendExceptionRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define ServerException_sendExceptionRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ServerException_sendExceptionRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ServerException_sendExceptionRequest*
ServerException_sendExceptionRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ServerException_sendExceptionRequest*
ServerException_sendExceptionRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionRequestPluginSupport_copy_data(
    ServerException_sendExceptionRequest *out,
    const ServerException_sendExceptionRequest *in);

NDDSUSERDllExport extern void 
ServerException_sendExceptionRequestPluginSupport_destroy_data_ex(
    ServerException_sendExceptionRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ServerException_sendExceptionRequestPluginSupport_destroy_data(
    ServerException_sendExceptionRequest *sample);

NDDSUSERDllExport extern void 
ServerException_sendExceptionRequestPluginSupport_print_data(
    const ServerException_sendExceptionRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern ServerException_sendExceptionRequest*
ServerException_sendExceptionRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ServerException_sendExceptionRequest*
ServerException_sendExceptionRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ServerException_sendExceptionRequestPluginSupport_destroy_key_ex(
    ServerException_sendExceptionRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ServerException_sendExceptionRequestPluginSupport_destroy_key(
    ServerException_sendExceptionRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ServerException_sendExceptionRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ServerException_sendExceptionRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ServerException_sendExceptionRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ServerException_sendExceptionRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionRequest *out,
    const ServerException_sendExceptionRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ServerException_sendExceptionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ServerException_sendExceptionRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ServerException_sendExceptionRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ServerException_sendExceptionRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ServerException_sendExceptionRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ServerException_sendExceptionRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ServerException_sendExceptionRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionRequestKeyHolder *key, 
    const ServerException_sendExceptionRequest *instance);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionRequest *instance, 
    const ServerException_sendExceptionRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ServerException_sendExceptionRequest *instance);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ServerException_sendExceptionRequestPlugin_new(void);

NDDSUSERDllExport extern void
ServerException_sendExceptionRequestPlugin_delete(struct PRESTypePlugin *);

#define ServerException_sendExceptionReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * ServerException_sendExceptionReply.
 *
 * By default, this type is struct ServerException_sendExceptionReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct ServerException_sendExceptionReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct ServerException_sendExceptionReply, the
 * following restriction applies: the key of struct
 * ServerException_sendExceptionReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct ServerException_sendExceptionReply.
*/
typedef  class ServerException_sendExceptionReply ServerException_sendExceptionReplyKeyHolder;


#define ServerException_sendExceptionReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define ServerException_sendExceptionReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define ServerException_sendExceptionReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ServerException_sendExceptionReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ServerException_sendExceptionReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ServerException_sendExceptionReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define ServerException_sendExceptionReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ServerException_sendExceptionReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ServerException_sendExceptionReply*
ServerException_sendExceptionReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ServerException_sendExceptionReply*
ServerException_sendExceptionReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionReplyPluginSupport_copy_data(
    ServerException_sendExceptionReply *out,
    const ServerException_sendExceptionReply *in);

NDDSUSERDllExport extern void 
ServerException_sendExceptionReplyPluginSupport_destroy_data_ex(
    ServerException_sendExceptionReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ServerException_sendExceptionReplyPluginSupport_destroy_data(
    ServerException_sendExceptionReply *sample);

NDDSUSERDllExport extern void 
ServerException_sendExceptionReplyPluginSupport_print_data(
    const ServerException_sendExceptionReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern ServerException_sendExceptionReply*
ServerException_sendExceptionReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ServerException_sendExceptionReply*
ServerException_sendExceptionReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ServerException_sendExceptionReplyPluginSupport_destroy_key_ex(
    ServerException_sendExceptionReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ServerException_sendExceptionReplyPluginSupport_destroy_key(
    ServerException_sendExceptionReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ServerException_sendExceptionReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ServerException_sendExceptionReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ServerException_sendExceptionReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ServerException_sendExceptionReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionReply *out,
    const ServerException_sendExceptionReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ServerException_sendExceptionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ServerException_sendExceptionReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ServerException_sendExceptionReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ServerException_sendExceptionReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ServerException_sendExceptionReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ServerException_sendExceptionReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ServerException_sendExceptionReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionReplyKeyHolder *key, 
    const ServerException_sendExceptionReply *instance);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionReply *instance, 
    const ServerException_sendExceptionReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ServerException_sendExceptionReply *instance);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ServerException_sendExceptionReplyPlugin_new(void);

NDDSUSERDllExport extern void
ServerException_sendExceptionReplyPlugin_delete(struct PRESTypePlugin *);

#define ServerException_sendExceptionTwoRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * ServerException_sendExceptionTwoRequest.
 *
 * By default, this type is struct ServerException_sendExceptionTwoRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct ServerException_sendExceptionTwoRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct ServerException_sendExceptionTwoRequest, the
 * following restriction applies: the key of struct
 * ServerException_sendExceptionTwoRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct ServerException_sendExceptionTwoRequest.
*/
typedef  class ServerException_sendExceptionTwoRequest ServerException_sendExceptionTwoRequestKeyHolder;


#define ServerException_sendExceptionTwoRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define ServerException_sendExceptionTwoRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define ServerException_sendExceptionTwoRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ServerException_sendExceptionTwoRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ServerException_sendExceptionTwoRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ServerException_sendExceptionTwoRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define ServerException_sendExceptionTwoRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ServerException_sendExceptionTwoRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ServerException_sendExceptionTwoRequest*
ServerException_sendExceptionTwoRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ServerException_sendExceptionTwoRequest*
ServerException_sendExceptionTwoRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoRequestPluginSupport_copy_data(
    ServerException_sendExceptionTwoRequest *out,
    const ServerException_sendExceptionTwoRequest *in);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoRequestPluginSupport_destroy_data_ex(
    ServerException_sendExceptionTwoRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoRequestPluginSupport_destroy_data(
    ServerException_sendExceptionTwoRequest *sample);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoRequestPluginSupport_print_data(
    const ServerException_sendExceptionTwoRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern ServerException_sendExceptionTwoRequest*
ServerException_sendExceptionTwoRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ServerException_sendExceptionTwoRequest*
ServerException_sendExceptionTwoRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoRequestPluginSupport_destroy_key_ex(
    ServerException_sendExceptionTwoRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoRequestPluginSupport_destroy_key(
    ServerException_sendExceptionTwoRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ServerException_sendExceptionTwoRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ServerException_sendExceptionTwoRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoRequest *out,
    const ServerException_sendExceptionTwoRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ServerException_sendExceptionTwoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ServerException_sendExceptionTwoRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionTwoRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionTwoRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ServerException_sendExceptionTwoRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ServerException_sendExceptionTwoRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ServerException_sendExceptionTwoRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionTwoRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ServerException_sendExceptionTwoRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ServerException_sendExceptionTwoRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoRequestKeyHolder *key, 
    const ServerException_sendExceptionTwoRequest *instance);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoRequest *instance, 
    const ServerException_sendExceptionTwoRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ServerException_sendExceptionTwoRequest *instance);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ServerException_sendExceptionTwoRequestPlugin_new(void);

NDDSUSERDllExport extern void
ServerException_sendExceptionTwoRequestPlugin_delete(struct PRESTypePlugin *);

#define ServerException_sendExceptionTwoReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * ServerException_sendExceptionTwoReply.
 *
 * By default, this type is struct ServerException_sendExceptionTwoReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct ServerException_sendExceptionTwoReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct ServerException_sendExceptionTwoReply, the
 * following restriction applies: the key of struct
 * ServerException_sendExceptionTwoReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct ServerException_sendExceptionTwoReply.
*/
typedef  class ServerException_sendExceptionTwoReply ServerException_sendExceptionTwoReplyKeyHolder;


#define ServerException_sendExceptionTwoReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define ServerException_sendExceptionTwoReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define ServerException_sendExceptionTwoReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ServerException_sendExceptionTwoReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ServerException_sendExceptionTwoReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ServerException_sendExceptionTwoReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define ServerException_sendExceptionTwoReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ServerException_sendExceptionTwoReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ServerException_sendExceptionTwoReply*
ServerException_sendExceptionTwoReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ServerException_sendExceptionTwoReply*
ServerException_sendExceptionTwoReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoReplyPluginSupport_copy_data(
    ServerException_sendExceptionTwoReply *out,
    const ServerException_sendExceptionTwoReply *in);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoReplyPluginSupport_destroy_data_ex(
    ServerException_sendExceptionTwoReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoReplyPluginSupport_destroy_data(
    ServerException_sendExceptionTwoReply *sample);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoReplyPluginSupport_print_data(
    const ServerException_sendExceptionTwoReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern ServerException_sendExceptionTwoReply*
ServerException_sendExceptionTwoReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ServerException_sendExceptionTwoReply*
ServerException_sendExceptionTwoReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoReplyPluginSupport_destroy_key_ex(
    ServerException_sendExceptionTwoReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoReplyPluginSupport_destroy_key(
    ServerException_sendExceptionTwoReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ServerException_sendExceptionTwoReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ServerException_sendExceptionTwoReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ServerException_sendExceptionTwoReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoReply *out,
    const ServerException_sendExceptionTwoReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ServerException_sendExceptionTwoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ServerException_sendExceptionTwoReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionTwoReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionTwoReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ServerException_sendExceptionTwoReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ServerException_sendExceptionTwoReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ServerException_sendExceptionTwoReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionTwoReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ServerException_sendExceptionTwoReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ServerException_sendExceptionTwoReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoReplyKeyHolder *key, 
    const ServerException_sendExceptionTwoReply *instance);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionTwoReply *instance, 
    const ServerException_sendExceptionTwoReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ServerException_sendExceptionTwoReply *instance);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionTwoReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ServerException_sendExceptionTwoReplyPlugin_new(void);

NDDSUSERDllExport extern void
ServerException_sendExceptionTwoReplyPlugin_delete(struct PRESTypePlugin *);

#define ServerException_sendExceptionThreeRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * ServerException_sendExceptionThreeRequest.
 *
 * By default, this type is struct ServerException_sendExceptionThreeRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct ServerException_sendExceptionThreeRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct ServerException_sendExceptionThreeRequest, the
 * following restriction applies: the key of struct
 * ServerException_sendExceptionThreeRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct ServerException_sendExceptionThreeRequest.
*/
typedef  class ServerException_sendExceptionThreeRequest ServerException_sendExceptionThreeRequestKeyHolder;


#define ServerException_sendExceptionThreeRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define ServerException_sendExceptionThreeRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define ServerException_sendExceptionThreeRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ServerException_sendExceptionThreeRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ServerException_sendExceptionThreeRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ServerException_sendExceptionThreeRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define ServerException_sendExceptionThreeRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ServerException_sendExceptionThreeRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ServerException_sendExceptionThreeRequest*
ServerException_sendExceptionThreeRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ServerException_sendExceptionThreeRequest*
ServerException_sendExceptionThreeRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeRequestPluginSupport_copy_data(
    ServerException_sendExceptionThreeRequest *out,
    const ServerException_sendExceptionThreeRequest *in);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeRequestPluginSupport_destroy_data_ex(
    ServerException_sendExceptionThreeRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeRequestPluginSupport_destroy_data(
    ServerException_sendExceptionThreeRequest *sample);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeRequestPluginSupport_print_data(
    const ServerException_sendExceptionThreeRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern ServerException_sendExceptionThreeRequest*
ServerException_sendExceptionThreeRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ServerException_sendExceptionThreeRequest*
ServerException_sendExceptionThreeRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeRequestPluginSupport_destroy_key_ex(
    ServerException_sendExceptionThreeRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeRequestPluginSupport_destroy_key(
    ServerException_sendExceptionThreeRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ServerException_sendExceptionThreeRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ServerException_sendExceptionThreeRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeRequest *out,
    const ServerException_sendExceptionThreeRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ServerException_sendExceptionThreeRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ServerException_sendExceptionThreeRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionThreeRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionThreeRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ServerException_sendExceptionThreeRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ServerException_sendExceptionThreeRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ServerException_sendExceptionThreeRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionThreeRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ServerException_sendExceptionThreeRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ServerException_sendExceptionThreeRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeRequestKeyHolder *key, 
    const ServerException_sendExceptionThreeRequest *instance);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeRequest *instance, 
    const ServerException_sendExceptionThreeRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ServerException_sendExceptionThreeRequest *instance);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ServerException_sendExceptionThreeRequestPlugin_new(void);

NDDSUSERDllExport extern void
ServerException_sendExceptionThreeRequestPlugin_delete(struct PRESTypePlugin *);

#define ServerException_sendExceptionThreeReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * ServerException_sendExceptionThreeReply.
 *
 * By default, this type is struct ServerException_sendExceptionThreeReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct ServerException_sendExceptionThreeReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct ServerException_sendExceptionThreeReply, the
 * following restriction applies: the key of struct
 * ServerException_sendExceptionThreeReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct ServerException_sendExceptionThreeReply.
*/
typedef  class ServerException_sendExceptionThreeReply ServerException_sendExceptionThreeReplyKeyHolder;


#define ServerException_sendExceptionThreeReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define ServerException_sendExceptionThreeReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define ServerException_sendExceptionThreeReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ServerException_sendExceptionThreeReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ServerException_sendExceptionThreeReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ServerException_sendExceptionThreeReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define ServerException_sendExceptionThreeReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ServerException_sendExceptionThreeReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ServerException_sendExceptionThreeReply*
ServerException_sendExceptionThreeReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ServerException_sendExceptionThreeReply*
ServerException_sendExceptionThreeReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeReplyPluginSupport_copy_data(
    ServerException_sendExceptionThreeReply *out,
    const ServerException_sendExceptionThreeReply *in);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeReplyPluginSupport_destroy_data_ex(
    ServerException_sendExceptionThreeReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeReplyPluginSupport_destroy_data(
    ServerException_sendExceptionThreeReply *sample);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeReplyPluginSupport_print_data(
    const ServerException_sendExceptionThreeReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern ServerException_sendExceptionThreeReply*
ServerException_sendExceptionThreeReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ServerException_sendExceptionThreeReply*
ServerException_sendExceptionThreeReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeReplyPluginSupport_destroy_key_ex(
    ServerException_sendExceptionThreeReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeReplyPluginSupport_destroy_key(
    ServerException_sendExceptionThreeReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ServerException_sendExceptionThreeReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ServerException_sendExceptionThreeReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ServerException_sendExceptionThreeReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeReply *out,
    const ServerException_sendExceptionThreeReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ServerException_sendExceptionThreeReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ServerException_sendExceptionThreeReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionThreeReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionThreeReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ServerException_sendExceptionThreeReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ServerException_sendExceptionThreeReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ServerException_sendExceptionThreeReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ServerException_sendExceptionThreeReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ServerException_sendExceptionThreeReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ServerException_sendExceptionThreeReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeReplyKeyHolder *key, 
    const ServerException_sendExceptionThreeReply *instance);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ServerException_sendExceptionThreeReply *instance, 
    const ServerException_sendExceptionThreeReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ServerException_sendExceptionThreeReply *instance);

NDDSUSERDllExport extern RTIBool 
ServerException_sendExceptionThreeReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ServerException_sendExceptionThreeReplyPlugin_new(void);

NDDSUSERDllExport extern void
ServerException_sendExceptionThreeReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* ServerExceptionRequestReplyPlugin_2113076152_h */
