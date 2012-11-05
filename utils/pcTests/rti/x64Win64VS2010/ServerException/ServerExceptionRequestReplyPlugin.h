
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ServerExceptionRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ServerExceptionRequestReplyPlugin_2113075547_h
#define ServerExceptionRequestReplyPlugin_2113075547_h

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


/* The type used to store keys for instances of type struct
 * sendExceptionRequest.
 *
 * By default, this type is struct sendExceptionRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct sendExceptionRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct sendExceptionRequest, the
 * following restriction applies: the key of struct
 * sendExceptionRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct sendExceptionRequest.
*/
typedef  struct sendExceptionRequest sendExceptionRequestKeyHolder;


#define sendExceptionRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define sendExceptionRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define sendExceptionRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define sendExceptionRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define sendExceptionRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define sendExceptionRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define sendExceptionRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define sendExceptionRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern sendExceptionRequest*
sendExceptionRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sendExceptionRequest*
sendExceptionRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
sendExceptionRequestPluginSupport_copy_data(
    sendExceptionRequest *out,
    const sendExceptionRequest *in);

NDDSUSERDllExport extern void 
sendExceptionRequestPluginSupport_destroy_data_ex(
    sendExceptionRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sendExceptionRequestPluginSupport_destroy_data(
    sendExceptionRequest *sample);

NDDSUSERDllExport extern void 
sendExceptionRequestPluginSupport_print_data(
    const sendExceptionRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern sendExceptionRequest*
sendExceptionRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sendExceptionRequest*
sendExceptionRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
sendExceptionRequestPluginSupport_destroy_key_ex(
    sendExceptionRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sendExceptionRequestPluginSupport_destroy_key(
    sendExceptionRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
sendExceptionRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
sendExceptionRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
sendExceptionRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
sendExceptionRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
sendExceptionRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionRequest *out,
    const sendExceptionRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
sendExceptionRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const sendExceptionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sendExceptionRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
sendExceptionRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
sendExceptionRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
sendExceptionRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
sendExceptionRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const sendExceptionRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
sendExceptionRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
sendExceptionRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
sendExceptionRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const sendExceptionRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sendExceptionRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
sendExceptionRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionRequestKeyHolder *key, 
    const sendExceptionRequest *instance);

NDDSUSERDllExport extern RTIBool 
sendExceptionRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionRequest *instance, 
    const sendExceptionRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
sendExceptionRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const sendExceptionRequest *instance);

NDDSUSERDllExport extern RTIBool 
sendExceptionRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
sendExceptionRequestPlugin_new(void);

NDDSUSERDllExport extern void
sendExceptionRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * sendExceptionReply.
 *
 * By default, this type is struct sendExceptionReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct sendExceptionReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct sendExceptionReply, the
 * following restriction applies: the key of struct
 * sendExceptionReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct sendExceptionReply.
*/
typedef  struct sendExceptionReply sendExceptionReplyKeyHolder;


#define sendExceptionReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define sendExceptionReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define sendExceptionReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define sendExceptionReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define sendExceptionReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define sendExceptionReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define sendExceptionReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define sendExceptionReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern sendExceptionReply*
sendExceptionReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sendExceptionReply*
sendExceptionReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
sendExceptionReplyPluginSupport_copy_data(
    sendExceptionReply *out,
    const sendExceptionReply *in);

NDDSUSERDllExport extern void 
sendExceptionReplyPluginSupport_destroy_data_ex(
    sendExceptionReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sendExceptionReplyPluginSupport_destroy_data(
    sendExceptionReply *sample);

NDDSUSERDllExport extern void 
sendExceptionReplyPluginSupport_print_data(
    const sendExceptionReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern sendExceptionReply*
sendExceptionReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sendExceptionReply*
sendExceptionReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
sendExceptionReplyPluginSupport_destroy_key_ex(
    sendExceptionReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sendExceptionReplyPluginSupport_destroy_key(
    sendExceptionReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
sendExceptionReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
sendExceptionReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
sendExceptionReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
sendExceptionReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
sendExceptionReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionReply *out,
    const sendExceptionReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
sendExceptionReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const sendExceptionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sendExceptionReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
sendExceptionReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
sendExceptionReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
sendExceptionReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
sendExceptionReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const sendExceptionReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
sendExceptionReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
sendExceptionReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
sendExceptionReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const sendExceptionReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sendExceptionReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
sendExceptionReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionReplyKeyHolder *key, 
    const sendExceptionReply *instance);

NDDSUSERDllExport extern RTIBool 
sendExceptionReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionReply *instance, 
    const sendExceptionReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
sendExceptionReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const sendExceptionReply *instance);

NDDSUSERDllExport extern RTIBool 
sendExceptionReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
sendExceptionReplyPlugin_new(void);

NDDSUSERDllExport extern void
sendExceptionReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * sendExceptionTwoRequest.
 *
 * By default, this type is struct sendExceptionTwoRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct sendExceptionTwoRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct sendExceptionTwoRequest, the
 * following restriction applies: the key of struct
 * sendExceptionTwoRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct sendExceptionTwoRequest.
*/
typedef  struct sendExceptionTwoRequest sendExceptionTwoRequestKeyHolder;


#define sendExceptionTwoRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define sendExceptionTwoRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define sendExceptionTwoRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define sendExceptionTwoRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define sendExceptionTwoRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define sendExceptionTwoRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define sendExceptionTwoRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define sendExceptionTwoRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern sendExceptionTwoRequest*
sendExceptionTwoRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sendExceptionTwoRequest*
sendExceptionTwoRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoRequestPluginSupport_copy_data(
    sendExceptionTwoRequest *out,
    const sendExceptionTwoRequest *in);

NDDSUSERDllExport extern void 
sendExceptionTwoRequestPluginSupport_destroy_data_ex(
    sendExceptionTwoRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sendExceptionTwoRequestPluginSupport_destroy_data(
    sendExceptionTwoRequest *sample);

NDDSUSERDllExport extern void 
sendExceptionTwoRequestPluginSupport_print_data(
    const sendExceptionTwoRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern sendExceptionTwoRequest*
sendExceptionTwoRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sendExceptionTwoRequest*
sendExceptionTwoRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
sendExceptionTwoRequestPluginSupport_destroy_key_ex(
    sendExceptionTwoRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sendExceptionTwoRequestPluginSupport_destroy_key(
    sendExceptionTwoRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
sendExceptionTwoRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
sendExceptionTwoRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
sendExceptionTwoRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
sendExceptionTwoRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoRequest *out,
    const sendExceptionTwoRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const sendExceptionTwoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionTwoRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
sendExceptionTwoRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
sendExceptionTwoRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
sendExceptionTwoRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
sendExceptionTwoRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const sendExceptionTwoRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
sendExceptionTwoRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
sendExceptionTwoRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const sendExceptionTwoRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionTwoRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
sendExceptionTwoRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionTwoRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoRequestKeyHolder *key, 
    const sendExceptionTwoRequest *instance);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoRequest *instance, 
    const sendExceptionTwoRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const sendExceptionTwoRequest *instance);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
sendExceptionTwoRequestPlugin_new(void);

NDDSUSERDllExport extern void
sendExceptionTwoRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * sendExceptionTwoReply.
 *
 * By default, this type is struct sendExceptionTwoReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct sendExceptionTwoReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct sendExceptionTwoReply, the
 * following restriction applies: the key of struct
 * sendExceptionTwoReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct sendExceptionTwoReply.
*/
typedef  struct sendExceptionTwoReply sendExceptionTwoReplyKeyHolder;


#define sendExceptionTwoReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define sendExceptionTwoReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define sendExceptionTwoReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define sendExceptionTwoReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define sendExceptionTwoReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define sendExceptionTwoReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define sendExceptionTwoReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define sendExceptionTwoReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern sendExceptionTwoReply*
sendExceptionTwoReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sendExceptionTwoReply*
sendExceptionTwoReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoReplyPluginSupport_copy_data(
    sendExceptionTwoReply *out,
    const sendExceptionTwoReply *in);

NDDSUSERDllExport extern void 
sendExceptionTwoReplyPluginSupport_destroy_data_ex(
    sendExceptionTwoReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sendExceptionTwoReplyPluginSupport_destroy_data(
    sendExceptionTwoReply *sample);

NDDSUSERDllExport extern void 
sendExceptionTwoReplyPluginSupport_print_data(
    const sendExceptionTwoReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern sendExceptionTwoReply*
sendExceptionTwoReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sendExceptionTwoReply*
sendExceptionTwoReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
sendExceptionTwoReplyPluginSupport_destroy_key_ex(
    sendExceptionTwoReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sendExceptionTwoReplyPluginSupport_destroy_key(
    sendExceptionTwoReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
sendExceptionTwoReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
sendExceptionTwoReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
sendExceptionTwoReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
sendExceptionTwoReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoReply *out,
    const sendExceptionTwoReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const sendExceptionTwoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionTwoReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
sendExceptionTwoReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
sendExceptionTwoReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
sendExceptionTwoReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
sendExceptionTwoReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const sendExceptionTwoReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
sendExceptionTwoReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
sendExceptionTwoReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const sendExceptionTwoReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionTwoReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
sendExceptionTwoReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionTwoReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoReplyKeyHolder *key, 
    const sendExceptionTwoReply *instance);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionTwoReply *instance, 
    const sendExceptionTwoReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const sendExceptionTwoReply *instance);

NDDSUSERDllExport extern RTIBool 
sendExceptionTwoReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
sendExceptionTwoReplyPlugin_new(void);

NDDSUSERDllExport extern void
sendExceptionTwoReplyPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * sendExceptionThreeRequest.
 *
 * By default, this type is struct sendExceptionThreeRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct sendExceptionThreeRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct sendExceptionThreeRequest, the
 * following restriction applies: the key of struct
 * sendExceptionThreeRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct sendExceptionThreeRequest.
*/
typedef  struct sendExceptionThreeRequest sendExceptionThreeRequestKeyHolder;


#define sendExceptionThreeRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define sendExceptionThreeRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define sendExceptionThreeRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define sendExceptionThreeRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define sendExceptionThreeRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define sendExceptionThreeRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define sendExceptionThreeRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define sendExceptionThreeRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern sendExceptionThreeRequest*
sendExceptionThreeRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sendExceptionThreeRequest*
sendExceptionThreeRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeRequestPluginSupport_copy_data(
    sendExceptionThreeRequest *out,
    const sendExceptionThreeRequest *in);

NDDSUSERDllExport extern void 
sendExceptionThreeRequestPluginSupport_destroy_data_ex(
    sendExceptionThreeRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sendExceptionThreeRequestPluginSupport_destroy_data(
    sendExceptionThreeRequest *sample);

NDDSUSERDllExport extern void 
sendExceptionThreeRequestPluginSupport_print_data(
    const sendExceptionThreeRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern sendExceptionThreeRequest*
sendExceptionThreeRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sendExceptionThreeRequest*
sendExceptionThreeRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
sendExceptionThreeRequestPluginSupport_destroy_key_ex(
    sendExceptionThreeRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sendExceptionThreeRequestPluginSupport_destroy_key(
    sendExceptionThreeRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
sendExceptionThreeRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
sendExceptionThreeRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
sendExceptionThreeRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
sendExceptionThreeRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeRequest *out,
    const sendExceptionThreeRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const sendExceptionThreeRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionThreeRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
sendExceptionThreeRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
sendExceptionThreeRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
sendExceptionThreeRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
sendExceptionThreeRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const sendExceptionThreeRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
sendExceptionThreeRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
sendExceptionThreeRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const sendExceptionThreeRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionThreeRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
sendExceptionThreeRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionThreeRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeRequestKeyHolder *key, 
    const sendExceptionThreeRequest *instance);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeRequest *instance, 
    const sendExceptionThreeRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const sendExceptionThreeRequest *instance);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
sendExceptionThreeRequestPlugin_new(void);

NDDSUSERDllExport extern void
sendExceptionThreeRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * sendExceptionThreeReply.
 *
 * By default, this type is struct sendExceptionThreeReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct sendExceptionThreeReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct sendExceptionThreeReply, the
 * following restriction applies: the key of struct
 * sendExceptionThreeReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct sendExceptionThreeReply.
*/
typedef  struct sendExceptionThreeReply sendExceptionThreeReplyKeyHolder;


#define sendExceptionThreeReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define sendExceptionThreeReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define sendExceptionThreeReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define sendExceptionThreeReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define sendExceptionThreeReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define sendExceptionThreeReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define sendExceptionThreeReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define sendExceptionThreeReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern sendExceptionThreeReply*
sendExceptionThreeReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sendExceptionThreeReply*
sendExceptionThreeReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeReplyPluginSupport_copy_data(
    sendExceptionThreeReply *out,
    const sendExceptionThreeReply *in);

NDDSUSERDllExport extern void 
sendExceptionThreeReplyPluginSupport_destroy_data_ex(
    sendExceptionThreeReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sendExceptionThreeReplyPluginSupport_destroy_data(
    sendExceptionThreeReply *sample);

NDDSUSERDllExport extern void 
sendExceptionThreeReplyPluginSupport_print_data(
    const sendExceptionThreeReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern sendExceptionThreeReply*
sendExceptionThreeReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern sendExceptionThreeReply*
sendExceptionThreeReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
sendExceptionThreeReplyPluginSupport_destroy_key_ex(
    sendExceptionThreeReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
sendExceptionThreeReplyPluginSupport_destroy_key(
    sendExceptionThreeReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
sendExceptionThreeReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
sendExceptionThreeReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
sendExceptionThreeReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
sendExceptionThreeReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeReply *out,
    const sendExceptionThreeReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const sendExceptionThreeReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionThreeReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
sendExceptionThreeReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
sendExceptionThreeReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
sendExceptionThreeReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
sendExceptionThreeReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const sendExceptionThreeReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
sendExceptionThreeReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
sendExceptionThreeReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const sendExceptionThreeReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionThreeReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
sendExceptionThreeReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
sendExceptionThreeReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeReplyKeyHolder *key, 
    const sendExceptionThreeReply *instance);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    sendExceptionThreeReply *instance, 
    const sendExceptionThreeReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const sendExceptionThreeReply *instance);

NDDSUSERDllExport extern RTIBool 
sendExceptionThreeReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
sendExceptionThreeReplyPlugin_new(void);

NDDSUSERDllExport extern void
sendExceptionThreeReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* ServerExceptionRequestReplyPlugin_2113075547_h */
