
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EnumYStringTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef EnumYStringTestRequestReplyPlugin_1383308312_h
#define EnumYStringTestRequestReplyPlugin_1383308312_h

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


#define EnumYStringTest_getEnumRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * EnumYStringTest_getEnumRequest.
 *
 * By default, this type is struct EnumYStringTest_getEnumRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct EnumYStringTest_getEnumRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct EnumYStringTest_getEnumRequest, the
 * following restriction applies: the key of struct
 * EnumYStringTest_getEnumRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct EnumYStringTest_getEnumRequest.
*/
typedef  class EnumYStringTest_getEnumRequest EnumYStringTest_getEnumRequestKeyHolder;


#define EnumYStringTest_getEnumRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EnumYStringTest_getEnumRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EnumYStringTest_getEnumRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EnumYStringTest_getEnumRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define EnumYStringTest_getEnumRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define EnumYStringTest_getEnumRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define EnumYStringTest_getEnumRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EnumYStringTest_getEnumRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EnumYStringTest_getEnumRequest*
EnumYStringTest_getEnumRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EnumYStringTest_getEnumRequest*
EnumYStringTest_getEnumRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumRequestPluginSupport_copy_data(
    EnumYStringTest_getEnumRequest *out,
    const EnumYStringTest_getEnumRequest *in);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumRequestPluginSupport_destroy_data_ex(
    EnumYStringTest_getEnumRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumRequestPluginSupport_destroy_data(
    EnumYStringTest_getEnumRequest *sample);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumRequestPluginSupport_print_data(
    const EnumYStringTest_getEnumRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern EnumYStringTest_getEnumRequest*
EnumYStringTest_getEnumRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EnumYStringTest_getEnumRequest*
EnumYStringTest_getEnumRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumRequestPluginSupport_destroy_key_ex(
    EnumYStringTest_getEnumRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumRequestPluginSupport_destroy_key(
    EnumYStringTest_getEnumRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
EnumYStringTest_getEnumRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
EnumYStringTest_getEnumRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumRequest *out,
    const EnumYStringTest_getEnumRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EnumYStringTest_getEnumRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EnumYStringTest_getEnumRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getEnumRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getEnumRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EnumYStringTest_getEnumRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EnumYStringTest_getEnumRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EnumYStringTest_getEnumRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getEnumRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EnumYStringTest_getEnumRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EnumYStringTest_getEnumRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumRequestKeyHolder *key, 
    const EnumYStringTest_getEnumRequest *instance);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumRequest *instance, 
    const EnumYStringTest_getEnumRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const EnumYStringTest_getEnumRequest *instance);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
EnumYStringTest_getEnumRequestPlugin_new(void);

NDDSUSERDllExport extern void
EnumYStringTest_getEnumRequestPlugin_delete(struct PRESTypePlugin *);

#define EnumYStringTest_getEnumReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * EnumYStringTest_getEnumReply.
 *
 * By default, this type is struct EnumYStringTest_getEnumReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct EnumYStringTest_getEnumReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct EnumYStringTest_getEnumReply, the
 * following restriction applies: the key of struct
 * EnumYStringTest_getEnumReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct EnumYStringTest_getEnumReply.
*/
typedef  class EnumYStringTest_getEnumReply EnumYStringTest_getEnumReplyKeyHolder;


#define EnumYStringTest_getEnumReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EnumYStringTest_getEnumReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EnumYStringTest_getEnumReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EnumYStringTest_getEnumReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define EnumYStringTest_getEnumReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define EnumYStringTest_getEnumReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define EnumYStringTest_getEnumReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EnumYStringTest_getEnumReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EnumYStringTest_getEnumReply*
EnumYStringTest_getEnumReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EnumYStringTest_getEnumReply*
EnumYStringTest_getEnumReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumReplyPluginSupport_copy_data(
    EnumYStringTest_getEnumReply *out,
    const EnumYStringTest_getEnumReply *in);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumReplyPluginSupport_destroy_data_ex(
    EnumYStringTest_getEnumReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumReplyPluginSupport_destroy_data(
    EnumYStringTest_getEnumReply *sample);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumReplyPluginSupport_print_data(
    const EnumYStringTest_getEnumReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern EnumYStringTest_getEnumReply*
EnumYStringTest_getEnumReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EnumYStringTest_getEnumReply*
EnumYStringTest_getEnumReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumReplyPluginSupport_destroy_key_ex(
    EnumYStringTest_getEnumReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumReplyPluginSupport_destroy_key(
    EnumYStringTest_getEnumReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
EnumYStringTest_getEnumReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
EnumYStringTest_getEnumReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
EnumYStringTest_getEnumReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumReply *out,
    const EnumYStringTest_getEnumReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EnumYStringTest_getEnumReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EnumYStringTest_getEnumReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getEnumReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getEnumReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EnumYStringTest_getEnumReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EnumYStringTest_getEnumReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EnumYStringTest_getEnumReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getEnumReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EnumYStringTest_getEnumReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EnumYStringTest_getEnumReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumReplyKeyHolder *key, 
    const EnumYStringTest_getEnumReply *instance);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getEnumReply *instance, 
    const EnumYStringTest_getEnumReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const EnumYStringTest_getEnumReply *instance);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getEnumReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
EnumYStringTest_getEnumReplyPlugin_new(void);

NDDSUSERDllExport extern void
EnumYStringTest_getEnumReplyPlugin_delete(struct PRESTypePlugin *);

#define EnumYStringTest_getStringRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * EnumYStringTest_getStringRequest.
 *
 * By default, this type is struct EnumYStringTest_getStringRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct EnumYStringTest_getStringRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct EnumYStringTest_getStringRequest, the
 * following restriction applies: the key of struct
 * EnumYStringTest_getStringRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct EnumYStringTest_getStringRequest.
*/
typedef  class EnumYStringTest_getStringRequest EnumYStringTest_getStringRequestKeyHolder;


#define EnumYStringTest_getStringRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EnumYStringTest_getStringRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EnumYStringTest_getStringRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EnumYStringTest_getStringRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define EnumYStringTest_getStringRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define EnumYStringTest_getStringRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define EnumYStringTest_getStringRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EnumYStringTest_getStringRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EnumYStringTest_getStringRequest*
EnumYStringTest_getStringRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EnumYStringTest_getStringRequest*
EnumYStringTest_getStringRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringRequestPluginSupport_copy_data(
    EnumYStringTest_getStringRequest *out,
    const EnumYStringTest_getStringRequest *in);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringRequestPluginSupport_destroy_data_ex(
    EnumYStringTest_getStringRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringRequestPluginSupport_destroy_data(
    EnumYStringTest_getStringRequest *sample);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringRequestPluginSupport_print_data(
    const EnumYStringTest_getStringRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern EnumYStringTest_getStringRequest*
EnumYStringTest_getStringRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EnumYStringTest_getStringRequest*
EnumYStringTest_getStringRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringRequestPluginSupport_destroy_key_ex(
    EnumYStringTest_getStringRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringRequestPluginSupport_destroy_key(
    EnumYStringTest_getStringRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
EnumYStringTest_getStringRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
EnumYStringTest_getStringRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringRequest *out,
    const EnumYStringTest_getStringRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EnumYStringTest_getStringRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EnumYStringTest_getStringRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getStringRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getStringRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EnumYStringTest_getStringRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EnumYStringTest_getStringRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EnumYStringTest_getStringRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getStringRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EnumYStringTest_getStringRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EnumYStringTest_getStringRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringRequestKeyHolder *key, 
    const EnumYStringTest_getStringRequest *instance);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringRequest *instance, 
    const EnumYStringTest_getStringRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const EnumYStringTest_getStringRequest *instance);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
EnumYStringTest_getStringRequestPlugin_new(void);

NDDSUSERDllExport extern void
EnumYStringTest_getStringRequestPlugin_delete(struct PRESTypePlugin *);

#define EnumYStringTest_getStringReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * EnumYStringTest_getStringReply.
 *
 * By default, this type is struct EnumYStringTest_getStringReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct EnumYStringTest_getStringReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct EnumYStringTest_getStringReply, the
 * following restriction applies: the key of struct
 * EnumYStringTest_getStringReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct EnumYStringTest_getStringReply.
*/
typedef  class EnumYStringTest_getStringReply EnumYStringTest_getStringReplyKeyHolder;


#define EnumYStringTest_getStringReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EnumYStringTest_getStringReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EnumYStringTest_getStringReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EnumYStringTest_getStringReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define EnumYStringTest_getStringReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define EnumYStringTest_getStringReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define EnumYStringTest_getStringReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EnumYStringTest_getStringReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EnumYStringTest_getStringReply*
EnumYStringTest_getStringReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EnumYStringTest_getStringReply*
EnumYStringTest_getStringReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringReplyPluginSupport_copy_data(
    EnumYStringTest_getStringReply *out,
    const EnumYStringTest_getStringReply *in);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringReplyPluginSupport_destroy_data_ex(
    EnumYStringTest_getStringReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringReplyPluginSupport_destroy_data(
    EnumYStringTest_getStringReply *sample);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringReplyPluginSupport_print_data(
    const EnumYStringTest_getStringReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern EnumYStringTest_getStringReply*
EnumYStringTest_getStringReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EnumYStringTest_getStringReply*
EnumYStringTest_getStringReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringReplyPluginSupport_destroy_key_ex(
    EnumYStringTest_getStringReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringReplyPluginSupport_destroy_key(
    EnumYStringTest_getStringReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
EnumYStringTest_getStringReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
EnumYStringTest_getStringReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringReply *out,
    const EnumYStringTest_getStringReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EnumYStringTest_getStringReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EnumYStringTest_getStringReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getStringReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getStringReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EnumYStringTest_getStringReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EnumYStringTest_getStringReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EnumYStringTest_getStringReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getStringReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EnumYStringTest_getStringReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EnumYStringTest_getStringReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringReplyKeyHolder *key, 
    const EnumYStringTest_getStringReply *instance);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringReply *instance, 
    const EnumYStringTest_getStringReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const EnumYStringTest_getStringReply *instance);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
EnumYStringTest_getStringReplyPlugin_new(void);

NDDSUSERDllExport extern void
EnumYStringTest_getStringReplyPlugin_delete(struct PRESTypePlugin *);

#define EnumYStringTest_getStringBoundedRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * EnumYStringTest_getStringBoundedRequest.
 *
 * By default, this type is struct EnumYStringTest_getStringBoundedRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct EnumYStringTest_getStringBoundedRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct EnumYStringTest_getStringBoundedRequest, the
 * following restriction applies: the key of struct
 * EnumYStringTest_getStringBoundedRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct EnumYStringTest_getStringBoundedRequest.
*/
typedef  class EnumYStringTest_getStringBoundedRequest EnumYStringTest_getStringBoundedRequestKeyHolder;


#define EnumYStringTest_getStringBoundedRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EnumYStringTest_getStringBoundedRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EnumYStringTest_getStringBoundedRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EnumYStringTest_getStringBoundedRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define EnumYStringTest_getStringBoundedRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define EnumYStringTest_getStringBoundedRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define EnumYStringTest_getStringBoundedRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EnumYStringTest_getStringBoundedRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EnumYStringTest_getStringBoundedRequest*
EnumYStringTest_getStringBoundedRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EnumYStringTest_getStringBoundedRequest*
EnumYStringTest_getStringBoundedRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedRequestPluginSupport_copy_data(
    EnumYStringTest_getStringBoundedRequest *out,
    const EnumYStringTest_getStringBoundedRequest *in);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedRequestPluginSupport_destroy_data_ex(
    EnumYStringTest_getStringBoundedRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedRequestPluginSupport_destroy_data(
    EnumYStringTest_getStringBoundedRequest *sample);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedRequestPluginSupport_print_data(
    const EnumYStringTest_getStringBoundedRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern EnumYStringTest_getStringBoundedRequest*
EnumYStringTest_getStringBoundedRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EnumYStringTest_getStringBoundedRequest*
EnumYStringTest_getStringBoundedRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedRequestPluginSupport_destroy_key_ex(
    EnumYStringTest_getStringBoundedRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedRequestPluginSupport_destroy_key(
    EnumYStringTest_getStringBoundedRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
EnumYStringTest_getStringBoundedRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
EnumYStringTest_getStringBoundedRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedRequest *out,
    const EnumYStringTest_getStringBoundedRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EnumYStringTest_getStringBoundedRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EnumYStringTest_getStringBoundedRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getStringBoundedRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getStringBoundedRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EnumYStringTest_getStringBoundedRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EnumYStringTest_getStringBoundedRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EnumYStringTest_getStringBoundedRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getStringBoundedRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EnumYStringTest_getStringBoundedRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EnumYStringTest_getStringBoundedRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedRequestKeyHolder *key, 
    const EnumYStringTest_getStringBoundedRequest *instance);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedRequest *instance, 
    const EnumYStringTest_getStringBoundedRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const EnumYStringTest_getStringBoundedRequest *instance);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
EnumYStringTest_getStringBoundedRequestPlugin_new(void);

NDDSUSERDllExport extern void
EnumYStringTest_getStringBoundedRequestPlugin_delete(struct PRESTypePlugin *);

#define EnumYStringTest_getStringBoundedReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * EnumYStringTest_getStringBoundedReply.
 *
 * By default, this type is struct EnumYStringTest_getStringBoundedReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct EnumYStringTest_getStringBoundedReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct EnumYStringTest_getStringBoundedReply, the
 * following restriction applies: the key of struct
 * EnumYStringTest_getStringBoundedReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct EnumYStringTest_getStringBoundedReply.
*/
typedef  class EnumYStringTest_getStringBoundedReply EnumYStringTest_getStringBoundedReplyKeyHolder;


#define EnumYStringTest_getStringBoundedReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EnumYStringTest_getStringBoundedReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EnumYStringTest_getStringBoundedReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EnumYStringTest_getStringBoundedReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define EnumYStringTest_getStringBoundedReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define EnumYStringTest_getStringBoundedReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define EnumYStringTest_getStringBoundedReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EnumYStringTest_getStringBoundedReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EnumYStringTest_getStringBoundedReply*
EnumYStringTest_getStringBoundedReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EnumYStringTest_getStringBoundedReply*
EnumYStringTest_getStringBoundedReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedReplyPluginSupport_copy_data(
    EnumYStringTest_getStringBoundedReply *out,
    const EnumYStringTest_getStringBoundedReply *in);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedReplyPluginSupport_destroy_data_ex(
    EnumYStringTest_getStringBoundedReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedReplyPluginSupport_destroy_data(
    EnumYStringTest_getStringBoundedReply *sample);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedReplyPluginSupport_print_data(
    const EnumYStringTest_getStringBoundedReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern EnumYStringTest_getStringBoundedReply*
EnumYStringTest_getStringBoundedReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EnumYStringTest_getStringBoundedReply*
EnumYStringTest_getStringBoundedReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedReplyPluginSupport_destroy_key_ex(
    EnumYStringTest_getStringBoundedReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedReplyPluginSupport_destroy_key(
    EnumYStringTest_getStringBoundedReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
EnumYStringTest_getStringBoundedReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
EnumYStringTest_getStringBoundedReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
EnumYStringTest_getStringBoundedReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedReply *out,
    const EnumYStringTest_getStringBoundedReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EnumYStringTest_getStringBoundedReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EnumYStringTest_getStringBoundedReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getStringBoundedReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getStringBoundedReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EnumYStringTest_getStringBoundedReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EnumYStringTest_getStringBoundedReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EnumYStringTest_getStringBoundedReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EnumYStringTest_getStringBoundedReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EnumYStringTest_getStringBoundedReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EnumYStringTest_getStringBoundedReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedReplyKeyHolder *key, 
    const EnumYStringTest_getStringBoundedReply *instance);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    EnumYStringTest_getStringBoundedReply *instance, 
    const EnumYStringTest_getStringBoundedReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const EnumYStringTest_getStringBoundedReply *instance);

NDDSUSERDllExport extern RTIBool 
EnumYStringTest_getStringBoundedReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
EnumYStringTest_getStringBoundedReplyPlugin_new(void);

NDDSUSERDllExport extern void
EnumYStringTest_getStringBoundedReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* EnumYStringTestRequestReplyPlugin_1383308312_h */
