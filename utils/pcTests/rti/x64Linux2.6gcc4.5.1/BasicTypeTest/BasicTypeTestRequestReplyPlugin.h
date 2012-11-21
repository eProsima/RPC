
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BasicTypeTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BasicTypeTestRequestReplyPlugin_2120091638_h
#define BasicTypeTestRequestReplyPlugin_2120091638_h

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

#include "MessageHeaderPlugin.h"


#include "BasicTypeTestPlugin.h"


#define BasicTypeTest_getOctetRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getOctetRequest.
 *
 * By default, this type is struct BasicTypeTest_getOctetRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getOctetRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getOctetRequest, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getOctetRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getOctetRequest.
*/
typedef  class BasicTypeTest_getOctetRequest BasicTypeTest_getOctetRequestKeyHolder;


#define BasicTypeTest_getOctetRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getOctetRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getOctetRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getOctetRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getOctetRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getOctetRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getOctetRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getOctetRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getOctetRequest*
BasicTypeTest_getOctetRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getOctetRequest*
BasicTypeTest_getOctetRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetRequestPluginSupport_copy_data(
    BasicTypeTest_getOctetRequest *out,
    const BasicTypeTest_getOctetRequest *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetRequestPluginSupport_destroy_data_ex(
    BasicTypeTest_getOctetRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetRequestPluginSupport_destroy_data(
    BasicTypeTest_getOctetRequest *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetRequestPluginSupport_print_data(
    const BasicTypeTest_getOctetRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getOctetRequest*
BasicTypeTest_getOctetRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getOctetRequest*
BasicTypeTest_getOctetRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetRequestPluginSupport_destroy_key_ex(
    BasicTypeTest_getOctetRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetRequestPluginSupport_destroy_key(
    BasicTypeTest_getOctetRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getOctetRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getOctetRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetRequest *out,
    const BasicTypeTest_getOctetRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getOctetRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getOctetRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getOctetRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getOctetRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getOctetRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getOctetRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getOctetRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getOctetRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getOctetRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getOctetRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetRequestKeyHolder *key, 
    const BasicTypeTest_getOctetRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetRequest *instance, 
    const BasicTypeTest_getOctetRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getOctetRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getOctetRequestPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getOctetRequestPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getOctetReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getOctetReply.
 *
 * By default, this type is struct BasicTypeTest_getOctetReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getOctetReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getOctetReply, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getOctetReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getOctetReply.
*/
typedef  class BasicTypeTest_getOctetReply BasicTypeTest_getOctetReplyKeyHolder;


#define BasicTypeTest_getOctetReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getOctetReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getOctetReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getOctetReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getOctetReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getOctetReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getOctetReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getOctetReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getOctetReply*
BasicTypeTest_getOctetReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getOctetReply*
BasicTypeTest_getOctetReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetReplyPluginSupport_copy_data(
    BasicTypeTest_getOctetReply *out,
    const BasicTypeTest_getOctetReply *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetReplyPluginSupport_destroy_data_ex(
    BasicTypeTest_getOctetReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetReplyPluginSupport_destroy_data(
    BasicTypeTest_getOctetReply *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetReplyPluginSupport_print_data(
    const BasicTypeTest_getOctetReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getOctetReply*
BasicTypeTest_getOctetReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getOctetReply*
BasicTypeTest_getOctetReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetReplyPluginSupport_destroy_key_ex(
    BasicTypeTest_getOctetReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetReplyPluginSupport_destroy_key(
    BasicTypeTest_getOctetReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getOctetReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getOctetReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getOctetReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetReply *out,
    const BasicTypeTest_getOctetReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getOctetReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getOctetReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getOctetReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getOctetReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getOctetReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getOctetReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getOctetReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getOctetReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getOctetReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getOctetReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetReplyKeyHolder *key, 
    const BasicTypeTest_getOctetReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getOctetReply *instance, 
    const BasicTypeTest_getOctetReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getOctetReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getOctetReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getOctetReplyPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getOctetReplyPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getCharRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getCharRequest.
 *
 * By default, this type is struct BasicTypeTest_getCharRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getCharRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getCharRequest, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getCharRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getCharRequest.
*/
typedef  class BasicTypeTest_getCharRequest BasicTypeTest_getCharRequestKeyHolder;


#define BasicTypeTest_getCharRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getCharRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getCharRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getCharRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getCharRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getCharRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getCharRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getCharRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getCharRequest*
BasicTypeTest_getCharRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getCharRequest*
BasicTypeTest_getCharRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharRequestPluginSupport_copy_data(
    BasicTypeTest_getCharRequest *out,
    const BasicTypeTest_getCharRequest *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharRequestPluginSupport_destroy_data_ex(
    BasicTypeTest_getCharRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharRequestPluginSupport_destroy_data(
    BasicTypeTest_getCharRequest *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharRequestPluginSupport_print_data(
    const BasicTypeTest_getCharRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getCharRequest*
BasicTypeTest_getCharRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getCharRequest*
BasicTypeTest_getCharRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharRequestPluginSupport_destroy_key_ex(
    BasicTypeTest_getCharRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharRequestPluginSupport_destroy_key(
    BasicTypeTest_getCharRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getCharRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getCharRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharRequest *out,
    const BasicTypeTest_getCharRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getCharRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getCharRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getCharRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getCharRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getCharRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getCharRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getCharRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getCharRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getCharRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getCharRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharRequestKeyHolder *key, 
    const BasicTypeTest_getCharRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharRequest *instance, 
    const BasicTypeTest_getCharRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getCharRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getCharRequestPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getCharRequestPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getCharReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getCharReply.
 *
 * By default, this type is struct BasicTypeTest_getCharReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getCharReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getCharReply, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getCharReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getCharReply.
*/
typedef  class BasicTypeTest_getCharReply BasicTypeTest_getCharReplyKeyHolder;


#define BasicTypeTest_getCharReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getCharReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getCharReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getCharReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getCharReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getCharReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getCharReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getCharReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getCharReply*
BasicTypeTest_getCharReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getCharReply*
BasicTypeTest_getCharReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharReplyPluginSupport_copy_data(
    BasicTypeTest_getCharReply *out,
    const BasicTypeTest_getCharReply *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharReplyPluginSupport_destroy_data_ex(
    BasicTypeTest_getCharReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharReplyPluginSupport_destroy_data(
    BasicTypeTest_getCharReply *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharReplyPluginSupport_print_data(
    const BasicTypeTest_getCharReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getCharReply*
BasicTypeTest_getCharReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getCharReply*
BasicTypeTest_getCharReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharReplyPluginSupport_destroy_key_ex(
    BasicTypeTest_getCharReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharReplyPluginSupport_destroy_key(
    BasicTypeTest_getCharReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getCharReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getCharReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getCharReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharReply *out,
    const BasicTypeTest_getCharReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getCharReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getCharReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getCharReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getCharReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getCharReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getCharReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getCharReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getCharReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getCharReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getCharReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharReplyKeyHolder *key, 
    const BasicTypeTest_getCharReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getCharReply *instance, 
    const BasicTypeTest_getCharReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getCharReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getCharReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getCharReplyPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getCharReplyPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getWCharRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getWCharRequest.
 *
 * By default, this type is struct BasicTypeTest_getWCharRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getWCharRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getWCharRequest, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getWCharRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getWCharRequest.
*/
typedef  class BasicTypeTest_getWCharRequest BasicTypeTest_getWCharRequestKeyHolder;


#define BasicTypeTest_getWCharRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getWCharRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getWCharRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getWCharRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getWCharRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getWCharRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getWCharRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getWCharRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getWCharRequest*
BasicTypeTest_getWCharRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getWCharRequest*
BasicTypeTest_getWCharRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharRequestPluginSupport_copy_data(
    BasicTypeTest_getWCharRequest *out,
    const BasicTypeTest_getWCharRequest *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharRequestPluginSupport_destroy_data_ex(
    BasicTypeTest_getWCharRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharRequestPluginSupport_destroy_data(
    BasicTypeTest_getWCharRequest *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharRequestPluginSupport_print_data(
    const BasicTypeTest_getWCharRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getWCharRequest*
BasicTypeTest_getWCharRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getWCharRequest*
BasicTypeTest_getWCharRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharRequestPluginSupport_destroy_key_ex(
    BasicTypeTest_getWCharRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharRequestPluginSupport_destroy_key(
    BasicTypeTest_getWCharRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getWCharRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getWCharRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharRequest *out,
    const BasicTypeTest_getWCharRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getWCharRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getWCharRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getWCharRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getWCharRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getWCharRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getWCharRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getWCharRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getWCharRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getWCharRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getWCharRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharRequestKeyHolder *key, 
    const BasicTypeTest_getWCharRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharRequest *instance, 
    const BasicTypeTest_getWCharRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getWCharRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getWCharRequestPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getWCharRequestPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getWCharReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getWCharReply.
 *
 * By default, this type is struct BasicTypeTest_getWCharReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getWCharReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getWCharReply, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getWCharReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getWCharReply.
*/
typedef  class BasicTypeTest_getWCharReply BasicTypeTest_getWCharReplyKeyHolder;


#define BasicTypeTest_getWCharReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getWCharReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getWCharReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getWCharReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getWCharReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getWCharReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getWCharReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getWCharReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getWCharReply*
BasicTypeTest_getWCharReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getWCharReply*
BasicTypeTest_getWCharReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharReplyPluginSupport_copy_data(
    BasicTypeTest_getWCharReply *out,
    const BasicTypeTest_getWCharReply *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharReplyPluginSupport_destroy_data_ex(
    BasicTypeTest_getWCharReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharReplyPluginSupport_destroy_data(
    BasicTypeTest_getWCharReply *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharReplyPluginSupport_print_data(
    const BasicTypeTest_getWCharReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getWCharReply*
BasicTypeTest_getWCharReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getWCharReply*
BasicTypeTest_getWCharReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharReplyPluginSupport_destroy_key_ex(
    BasicTypeTest_getWCharReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharReplyPluginSupport_destroy_key(
    BasicTypeTest_getWCharReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getWCharReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getWCharReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getWCharReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharReply *out,
    const BasicTypeTest_getWCharReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getWCharReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getWCharReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getWCharReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getWCharReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getWCharReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getWCharReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getWCharReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getWCharReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getWCharReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getWCharReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharReplyKeyHolder *key, 
    const BasicTypeTest_getWCharReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getWCharReply *instance, 
    const BasicTypeTest_getWCharReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getWCharReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getWCharReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getWCharReplyPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getWCharReplyPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getShortRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getShortRequest.
 *
 * By default, this type is struct BasicTypeTest_getShortRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getShortRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getShortRequest, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getShortRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getShortRequest.
*/
typedef  class BasicTypeTest_getShortRequest BasicTypeTest_getShortRequestKeyHolder;


#define BasicTypeTest_getShortRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getShortRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getShortRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getShortRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getShortRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getShortRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getShortRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getShortRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getShortRequest*
BasicTypeTest_getShortRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getShortRequest*
BasicTypeTest_getShortRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortRequestPluginSupport_copy_data(
    BasicTypeTest_getShortRequest *out,
    const BasicTypeTest_getShortRequest *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortRequestPluginSupport_destroy_data_ex(
    BasicTypeTest_getShortRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortRequestPluginSupport_destroy_data(
    BasicTypeTest_getShortRequest *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortRequestPluginSupport_print_data(
    const BasicTypeTest_getShortRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getShortRequest*
BasicTypeTest_getShortRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getShortRequest*
BasicTypeTest_getShortRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortRequestPluginSupport_destroy_key_ex(
    BasicTypeTest_getShortRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortRequestPluginSupport_destroy_key(
    BasicTypeTest_getShortRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getShortRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getShortRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortRequest *out,
    const BasicTypeTest_getShortRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getShortRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getShortRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getShortRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getShortRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getShortRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getShortRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getShortRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getShortRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getShortRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getShortRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortRequestKeyHolder *key, 
    const BasicTypeTest_getShortRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortRequest *instance, 
    const BasicTypeTest_getShortRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getShortRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getShortRequestPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getShortRequestPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getShortReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getShortReply.
 *
 * By default, this type is struct BasicTypeTest_getShortReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getShortReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getShortReply, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getShortReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getShortReply.
*/
typedef  class BasicTypeTest_getShortReply BasicTypeTest_getShortReplyKeyHolder;


#define BasicTypeTest_getShortReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getShortReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getShortReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getShortReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getShortReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getShortReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getShortReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getShortReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getShortReply*
BasicTypeTest_getShortReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getShortReply*
BasicTypeTest_getShortReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortReplyPluginSupport_copy_data(
    BasicTypeTest_getShortReply *out,
    const BasicTypeTest_getShortReply *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortReplyPluginSupport_destroy_data_ex(
    BasicTypeTest_getShortReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortReplyPluginSupport_destroy_data(
    BasicTypeTest_getShortReply *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortReplyPluginSupport_print_data(
    const BasicTypeTest_getShortReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getShortReply*
BasicTypeTest_getShortReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getShortReply*
BasicTypeTest_getShortReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortReplyPluginSupport_destroy_key_ex(
    BasicTypeTest_getShortReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortReplyPluginSupport_destroy_key(
    BasicTypeTest_getShortReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getShortReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getShortReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getShortReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortReply *out,
    const BasicTypeTest_getShortReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getShortReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getShortReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getShortReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getShortReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getShortReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getShortReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getShortReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getShortReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getShortReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getShortReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortReplyKeyHolder *key, 
    const BasicTypeTest_getShortReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getShortReply *instance, 
    const BasicTypeTest_getShortReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getShortReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getShortReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getShortReplyPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getShortReplyPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getUShortRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getUShortRequest.
 *
 * By default, this type is struct BasicTypeTest_getUShortRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getUShortRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getUShortRequest, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getUShortRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getUShortRequest.
*/
typedef  class BasicTypeTest_getUShortRequest BasicTypeTest_getUShortRequestKeyHolder;


#define BasicTypeTest_getUShortRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getUShortRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getUShortRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getUShortRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getUShortRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getUShortRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getUShortRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getUShortRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getUShortRequest*
BasicTypeTest_getUShortRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getUShortRequest*
BasicTypeTest_getUShortRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortRequestPluginSupport_copy_data(
    BasicTypeTest_getUShortRequest *out,
    const BasicTypeTest_getUShortRequest *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortRequestPluginSupport_destroy_data_ex(
    BasicTypeTest_getUShortRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortRequestPluginSupport_destroy_data(
    BasicTypeTest_getUShortRequest *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortRequestPluginSupport_print_data(
    const BasicTypeTest_getUShortRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getUShortRequest*
BasicTypeTest_getUShortRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getUShortRequest*
BasicTypeTest_getUShortRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortRequestPluginSupport_destroy_key_ex(
    BasicTypeTest_getUShortRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortRequestPluginSupport_destroy_key(
    BasicTypeTest_getUShortRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getUShortRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getUShortRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortRequest *out,
    const BasicTypeTest_getUShortRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getUShortRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getUShortRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getUShortRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getUShortRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getUShortRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getUShortRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getUShortRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getUShortRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getUShortRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getUShortRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortRequestKeyHolder *key, 
    const BasicTypeTest_getUShortRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortRequest *instance, 
    const BasicTypeTest_getUShortRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getUShortRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getUShortRequestPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getUShortRequestPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getUShortReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getUShortReply.
 *
 * By default, this type is struct BasicTypeTest_getUShortReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getUShortReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getUShortReply, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getUShortReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getUShortReply.
*/
typedef  class BasicTypeTest_getUShortReply BasicTypeTest_getUShortReplyKeyHolder;


#define BasicTypeTest_getUShortReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getUShortReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getUShortReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getUShortReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getUShortReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getUShortReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getUShortReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getUShortReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getUShortReply*
BasicTypeTest_getUShortReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getUShortReply*
BasicTypeTest_getUShortReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortReplyPluginSupport_copy_data(
    BasicTypeTest_getUShortReply *out,
    const BasicTypeTest_getUShortReply *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortReplyPluginSupport_destroy_data_ex(
    BasicTypeTest_getUShortReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortReplyPluginSupport_destroy_data(
    BasicTypeTest_getUShortReply *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortReplyPluginSupport_print_data(
    const BasicTypeTest_getUShortReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getUShortReply*
BasicTypeTest_getUShortReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getUShortReply*
BasicTypeTest_getUShortReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortReplyPluginSupport_destroy_key_ex(
    BasicTypeTest_getUShortReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortReplyPluginSupport_destroy_key(
    BasicTypeTest_getUShortReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getUShortReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getUShortReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getUShortReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortReply *out,
    const BasicTypeTest_getUShortReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getUShortReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getUShortReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getUShortReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getUShortReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getUShortReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getUShortReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getUShortReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getUShortReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getUShortReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getUShortReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortReplyKeyHolder *key, 
    const BasicTypeTest_getUShortReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getUShortReply *instance, 
    const BasicTypeTest_getUShortReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getUShortReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getUShortReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getUShortReplyPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getUShortReplyPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getLongRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getLongRequest.
 *
 * By default, this type is struct BasicTypeTest_getLongRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getLongRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getLongRequest, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getLongRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getLongRequest.
*/
typedef  class BasicTypeTest_getLongRequest BasicTypeTest_getLongRequestKeyHolder;


#define BasicTypeTest_getLongRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getLongRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getLongRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getLongRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getLongRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getLongRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getLongRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getLongRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getLongRequest*
BasicTypeTest_getLongRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getLongRequest*
BasicTypeTest_getLongRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongRequestPluginSupport_copy_data(
    BasicTypeTest_getLongRequest *out,
    const BasicTypeTest_getLongRequest *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongRequestPluginSupport_destroy_data_ex(
    BasicTypeTest_getLongRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongRequestPluginSupport_destroy_data(
    BasicTypeTest_getLongRequest *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongRequestPluginSupport_print_data(
    const BasicTypeTest_getLongRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getLongRequest*
BasicTypeTest_getLongRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getLongRequest*
BasicTypeTest_getLongRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongRequestPluginSupport_destroy_key_ex(
    BasicTypeTest_getLongRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongRequestPluginSupport_destroy_key(
    BasicTypeTest_getLongRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getLongRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getLongRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongRequest *out,
    const BasicTypeTest_getLongRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getLongRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getLongRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getLongRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getLongRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getLongRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getLongRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getLongRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getLongRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getLongRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongRequestKeyHolder *key, 
    const BasicTypeTest_getLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongRequest *instance, 
    const BasicTypeTest_getLongRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getLongRequestPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getLongRequestPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getLongReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getLongReply.
 *
 * By default, this type is struct BasicTypeTest_getLongReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getLongReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getLongReply, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getLongReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getLongReply.
*/
typedef  class BasicTypeTest_getLongReply BasicTypeTest_getLongReplyKeyHolder;


#define BasicTypeTest_getLongReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getLongReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getLongReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getLongReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getLongReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getLongReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getLongReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getLongReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getLongReply*
BasicTypeTest_getLongReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getLongReply*
BasicTypeTest_getLongReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongReplyPluginSupport_copy_data(
    BasicTypeTest_getLongReply *out,
    const BasicTypeTest_getLongReply *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongReplyPluginSupport_destroy_data_ex(
    BasicTypeTest_getLongReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongReplyPluginSupport_destroy_data(
    BasicTypeTest_getLongReply *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongReplyPluginSupport_print_data(
    const BasicTypeTest_getLongReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getLongReply*
BasicTypeTest_getLongReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getLongReply*
BasicTypeTest_getLongReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongReplyPluginSupport_destroy_key_ex(
    BasicTypeTest_getLongReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongReplyPluginSupport_destroy_key(
    BasicTypeTest_getLongReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getLongReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getLongReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getLongReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongReply *out,
    const BasicTypeTest_getLongReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getLongReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getLongReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getLongReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getLongReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getLongReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getLongReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getLongReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getLongReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getLongReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongReplyKeyHolder *key, 
    const BasicTypeTest_getLongReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLongReply *instance, 
    const BasicTypeTest_getLongReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getLongReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLongReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getLongReplyPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getLongReplyPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getULongRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getULongRequest.
 *
 * By default, this type is struct BasicTypeTest_getULongRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getULongRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getULongRequest, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getULongRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getULongRequest.
*/
typedef  class BasicTypeTest_getULongRequest BasicTypeTest_getULongRequestKeyHolder;


#define BasicTypeTest_getULongRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getULongRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getULongRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getULongRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getULongRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getULongRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getULongRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getULongRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getULongRequest*
BasicTypeTest_getULongRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getULongRequest*
BasicTypeTest_getULongRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongRequestPluginSupport_copy_data(
    BasicTypeTest_getULongRequest *out,
    const BasicTypeTest_getULongRequest *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongRequestPluginSupport_destroy_data_ex(
    BasicTypeTest_getULongRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongRequestPluginSupport_destroy_data(
    BasicTypeTest_getULongRequest *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongRequestPluginSupport_print_data(
    const BasicTypeTest_getULongRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getULongRequest*
BasicTypeTest_getULongRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getULongRequest*
BasicTypeTest_getULongRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongRequestPluginSupport_destroy_key_ex(
    BasicTypeTest_getULongRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongRequestPluginSupport_destroy_key(
    BasicTypeTest_getULongRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getULongRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getULongRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongRequest *out,
    const BasicTypeTest_getULongRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getULongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getULongRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getULongRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getULongRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getULongRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getULongRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getULongRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getULongRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getULongRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getULongRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongRequestKeyHolder *key, 
    const BasicTypeTest_getULongRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongRequest *instance, 
    const BasicTypeTest_getULongRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getULongRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getULongRequestPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getULongRequestPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getULongReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getULongReply.
 *
 * By default, this type is struct BasicTypeTest_getULongReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getULongReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getULongReply, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getULongReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getULongReply.
*/
typedef  class BasicTypeTest_getULongReply BasicTypeTest_getULongReplyKeyHolder;


#define BasicTypeTest_getULongReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getULongReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getULongReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getULongReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getULongReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getULongReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getULongReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getULongReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getULongReply*
BasicTypeTest_getULongReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getULongReply*
BasicTypeTest_getULongReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongReplyPluginSupport_copy_data(
    BasicTypeTest_getULongReply *out,
    const BasicTypeTest_getULongReply *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongReplyPluginSupport_destroy_data_ex(
    BasicTypeTest_getULongReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongReplyPluginSupport_destroy_data(
    BasicTypeTest_getULongReply *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongReplyPluginSupport_print_data(
    const BasicTypeTest_getULongReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getULongReply*
BasicTypeTest_getULongReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getULongReply*
BasicTypeTest_getULongReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongReplyPluginSupport_destroy_key_ex(
    BasicTypeTest_getULongReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongReplyPluginSupport_destroy_key(
    BasicTypeTest_getULongReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getULongReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getULongReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getULongReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongReply *out,
    const BasicTypeTest_getULongReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getULongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getULongReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getULongReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getULongReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getULongReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getULongReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getULongReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getULongReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getULongReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getULongReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongReplyKeyHolder *key, 
    const BasicTypeTest_getULongReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULongReply *instance, 
    const BasicTypeTest_getULongReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getULongReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULongReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getULongReplyPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getULongReplyPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getLLongRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getLLongRequest.
 *
 * By default, this type is struct BasicTypeTest_getLLongRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getLLongRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getLLongRequest, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getLLongRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getLLongRequest.
*/
typedef  class BasicTypeTest_getLLongRequest BasicTypeTest_getLLongRequestKeyHolder;


#define BasicTypeTest_getLLongRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getLLongRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getLLongRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getLLongRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getLLongRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getLLongRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getLLongRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getLLongRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getLLongRequest*
BasicTypeTest_getLLongRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getLLongRequest*
BasicTypeTest_getLLongRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongRequestPluginSupport_copy_data(
    BasicTypeTest_getLLongRequest *out,
    const BasicTypeTest_getLLongRequest *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongRequestPluginSupport_destroy_data_ex(
    BasicTypeTest_getLLongRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongRequestPluginSupport_destroy_data(
    BasicTypeTest_getLLongRequest *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongRequestPluginSupport_print_data(
    const BasicTypeTest_getLLongRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getLLongRequest*
BasicTypeTest_getLLongRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getLLongRequest*
BasicTypeTest_getLLongRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongRequestPluginSupport_destroy_key_ex(
    BasicTypeTest_getLLongRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongRequestPluginSupport_destroy_key(
    BasicTypeTest_getLLongRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getLLongRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getLLongRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongRequest *out,
    const BasicTypeTest_getLLongRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getLLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getLLongRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getLLongRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getLLongRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getLLongRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getLLongRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getLLongRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getLLongRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getLLongRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getLLongRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongRequestKeyHolder *key, 
    const BasicTypeTest_getLLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongRequest *instance, 
    const BasicTypeTest_getLLongRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getLLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getLLongRequestPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getLLongRequestPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getLLongReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getLLongReply.
 *
 * By default, this type is struct BasicTypeTest_getLLongReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getLLongReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getLLongReply, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getLLongReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getLLongReply.
*/
typedef  class BasicTypeTest_getLLongReply BasicTypeTest_getLLongReplyKeyHolder;


#define BasicTypeTest_getLLongReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getLLongReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getLLongReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getLLongReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getLLongReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getLLongReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getLLongReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getLLongReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getLLongReply*
BasicTypeTest_getLLongReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getLLongReply*
BasicTypeTest_getLLongReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongReplyPluginSupport_copy_data(
    BasicTypeTest_getLLongReply *out,
    const BasicTypeTest_getLLongReply *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongReplyPluginSupport_destroy_data_ex(
    BasicTypeTest_getLLongReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongReplyPluginSupport_destroy_data(
    BasicTypeTest_getLLongReply *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongReplyPluginSupport_print_data(
    const BasicTypeTest_getLLongReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getLLongReply*
BasicTypeTest_getLLongReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getLLongReply*
BasicTypeTest_getLLongReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongReplyPluginSupport_destroy_key_ex(
    BasicTypeTest_getLLongReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongReplyPluginSupport_destroy_key(
    BasicTypeTest_getLLongReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getLLongReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getLLongReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getLLongReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongReply *out,
    const BasicTypeTest_getLLongReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getLLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getLLongReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getLLongReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getLLongReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getLLongReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getLLongReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getLLongReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getLLongReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getLLongReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getLLongReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongReplyKeyHolder *key, 
    const BasicTypeTest_getLLongReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getLLongReply *instance, 
    const BasicTypeTest_getLLongReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getLLongReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getLLongReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getLLongReplyPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getLLongReplyPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getULLongRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getULLongRequest.
 *
 * By default, this type is struct BasicTypeTest_getULLongRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getULLongRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getULLongRequest, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getULLongRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getULLongRequest.
*/
typedef  class BasicTypeTest_getULLongRequest BasicTypeTest_getULLongRequestKeyHolder;


#define BasicTypeTest_getULLongRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getULLongRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getULLongRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getULLongRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getULLongRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getULLongRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getULLongRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getULLongRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getULLongRequest*
BasicTypeTest_getULLongRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getULLongRequest*
BasicTypeTest_getULLongRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongRequestPluginSupport_copy_data(
    BasicTypeTest_getULLongRequest *out,
    const BasicTypeTest_getULLongRequest *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongRequestPluginSupport_destroy_data_ex(
    BasicTypeTest_getULLongRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongRequestPluginSupport_destroy_data(
    BasicTypeTest_getULLongRequest *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongRequestPluginSupport_print_data(
    const BasicTypeTest_getULLongRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getULLongRequest*
BasicTypeTest_getULLongRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getULLongRequest*
BasicTypeTest_getULLongRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongRequestPluginSupport_destroy_key_ex(
    BasicTypeTest_getULLongRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongRequestPluginSupport_destroy_key(
    BasicTypeTest_getULLongRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getULLongRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getULLongRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongRequest *out,
    const BasicTypeTest_getULLongRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getULLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getULLongRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getULLongRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getULLongRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getULLongRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getULLongRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getULLongRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getULLongRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getULLongRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getULLongRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongRequestKeyHolder *key, 
    const BasicTypeTest_getULLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongRequest *instance, 
    const BasicTypeTest_getULLongRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getULLongRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getULLongRequestPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getULLongRequestPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getULLongReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getULLongReply.
 *
 * By default, this type is struct BasicTypeTest_getULLongReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getULLongReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getULLongReply, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getULLongReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getULLongReply.
*/
typedef  class BasicTypeTest_getULLongReply BasicTypeTest_getULLongReplyKeyHolder;


#define BasicTypeTest_getULLongReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getULLongReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getULLongReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getULLongReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getULLongReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getULLongReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getULLongReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getULLongReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getULLongReply*
BasicTypeTest_getULLongReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getULLongReply*
BasicTypeTest_getULLongReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongReplyPluginSupport_copy_data(
    BasicTypeTest_getULLongReply *out,
    const BasicTypeTest_getULLongReply *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongReplyPluginSupport_destroy_data_ex(
    BasicTypeTest_getULLongReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongReplyPluginSupport_destroy_data(
    BasicTypeTest_getULLongReply *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongReplyPluginSupport_print_data(
    const BasicTypeTest_getULLongReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getULLongReply*
BasicTypeTest_getULLongReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getULLongReply*
BasicTypeTest_getULLongReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongReplyPluginSupport_destroy_key_ex(
    BasicTypeTest_getULLongReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongReplyPluginSupport_destroy_key(
    BasicTypeTest_getULLongReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getULLongReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getULLongReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getULLongReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongReply *out,
    const BasicTypeTest_getULLongReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getULLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getULLongReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getULLongReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getULLongReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getULLongReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getULLongReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getULLongReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getULLongReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getULLongReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getULLongReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongReplyKeyHolder *key, 
    const BasicTypeTest_getULLongReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getULLongReply *instance, 
    const BasicTypeTest_getULLongReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getULLongReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getULLongReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getULLongReplyPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getULLongReplyPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getFloatRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getFloatRequest.
 *
 * By default, this type is struct BasicTypeTest_getFloatRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getFloatRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getFloatRequest, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getFloatRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getFloatRequest.
*/
typedef  class BasicTypeTest_getFloatRequest BasicTypeTest_getFloatRequestKeyHolder;


#define BasicTypeTest_getFloatRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getFloatRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getFloatRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getFloatRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getFloatRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getFloatRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getFloatRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getFloatRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getFloatRequest*
BasicTypeTest_getFloatRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getFloatRequest*
BasicTypeTest_getFloatRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatRequestPluginSupport_copy_data(
    BasicTypeTest_getFloatRequest *out,
    const BasicTypeTest_getFloatRequest *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatRequestPluginSupport_destroy_data_ex(
    BasicTypeTest_getFloatRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatRequestPluginSupport_destroy_data(
    BasicTypeTest_getFloatRequest *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatRequestPluginSupport_print_data(
    const BasicTypeTest_getFloatRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getFloatRequest*
BasicTypeTest_getFloatRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getFloatRequest*
BasicTypeTest_getFloatRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatRequestPluginSupport_destroy_key_ex(
    BasicTypeTest_getFloatRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatRequestPluginSupport_destroy_key(
    BasicTypeTest_getFloatRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getFloatRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getFloatRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatRequest *out,
    const BasicTypeTest_getFloatRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getFloatRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getFloatRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getFloatRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getFloatRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getFloatRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getFloatRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getFloatRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getFloatRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getFloatRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getFloatRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatRequestKeyHolder *key, 
    const BasicTypeTest_getFloatRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatRequest *instance, 
    const BasicTypeTest_getFloatRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getFloatRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getFloatRequestPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getFloatRequestPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getFloatReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getFloatReply.
 *
 * By default, this type is struct BasicTypeTest_getFloatReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getFloatReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getFloatReply, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getFloatReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getFloatReply.
*/
typedef  class BasicTypeTest_getFloatReply BasicTypeTest_getFloatReplyKeyHolder;


#define BasicTypeTest_getFloatReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getFloatReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getFloatReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getFloatReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getFloatReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getFloatReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getFloatReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getFloatReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getFloatReply*
BasicTypeTest_getFloatReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getFloatReply*
BasicTypeTest_getFloatReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatReplyPluginSupport_copy_data(
    BasicTypeTest_getFloatReply *out,
    const BasicTypeTest_getFloatReply *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatReplyPluginSupport_destroy_data_ex(
    BasicTypeTest_getFloatReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatReplyPluginSupport_destroy_data(
    BasicTypeTest_getFloatReply *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatReplyPluginSupport_print_data(
    const BasicTypeTest_getFloatReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getFloatReply*
BasicTypeTest_getFloatReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getFloatReply*
BasicTypeTest_getFloatReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatReplyPluginSupport_destroy_key_ex(
    BasicTypeTest_getFloatReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatReplyPluginSupport_destroy_key(
    BasicTypeTest_getFloatReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getFloatReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getFloatReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getFloatReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatReply *out,
    const BasicTypeTest_getFloatReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getFloatReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getFloatReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getFloatReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getFloatReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getFloatReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getFloatReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getFloatReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getFloatReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getFloatReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getFloatReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatReplyKeyHolder *key, 
    const BasicTypeTest_getFloatReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getFloatReply *instance, 
    const BasicTypeTest_getFloatReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getFloatReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getFloatReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getFloatReplyPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getFloatReplyPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getDoubleRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getDoubleRequest.
 *
 * By default, this type is struct BasicTypeTest_getDoubleRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getDoubleRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getDoubleRequest, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getDoubleRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getDoubleRequest.
*/
typedef  class BasicTypeTest_getDoubleRequest BasicTypeTest_getDoubleRequestKeyHolder;


#define BasicTypeTest_getDoubleRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getDoubleRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getDoubleRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getDoubleRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getDoubleRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getDoubleRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getDoubleRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getDoubleRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getDoubleRequest*
BasicTypeTest_getDoubleRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getDoubleRequest*
BasicTypeTest_getDoubleRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleRequestPluginSupport_copy_data(
    BasicTypeTest_getDoubleRequest *out,
    const BasicTypeTest_getDoubleRequest *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleRequestPluginSupport_destroy_data_ex(
    BasicTypeTest_getDoubleRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleRequestPluginSupport_destroy_data(
    BasicTypeTest_getDoubleRequest *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleRequestPluginSupport_print_data(
    const BasicTypeTest_getDoubleRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getDoubleRequest*
BasicTypeTest_getDoubleRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getDoubleRequest*
BasicTypeTest_getDoubleRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleRequestPluginSupport_destroy_key_ex(
    BasicTypeTest_getDoubleRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleRequestPluginSupport_destroy_key(
    BasicTypeTest_getDoubleRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getDoubleRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getDoubleRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleRequest *out,
    const BasicTypeTest_getDoubleRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getDoubleRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getDoubleRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getDoubleRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getDoubleRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getDoubleRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getDoubleRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getDoubleRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getDoubleRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getDoubleRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getDoubleRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleRequestKeyHolder *key, 
    const BasicTypeTest_getDoubleRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleRequest *instance, 
    const BasicTypeTest_getDoubleRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getDoubleRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getDoubleRequestPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getDoubleRequestPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getDoubleReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getDoubleReply.
 *
 * By default, this type is struct BasicTypeTest_getDoubleReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getDoubleReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getDoubleReply, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getDoubleReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getDoubleReply.
*/
typedef  class BasicTypeTest_getDoubleReply BasicTypeTest_getDoubleReplyKeyHolder;


#define BasicTypeTest_getDoubleReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getDoubleReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getDoubleReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getDoubleReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getDoubleReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getDoubleReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getDoubleReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getDoubleReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getDoubleReply*
BasicTypeTest_getDoubleReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getDoubleReply*
BasicTypeTest_getDoubleReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleReplyPluginSupport_copy_data(
    BasicTypeTest_getDoubleReply *out,
    const BasicTypeTest_getDoubleReply *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleReplyPluginSupport_destroy_data_ex(
    BasicTypeTest_getDoubleReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleReplyPluginSupport_destroy_data(
    BasicTypeTest_getDoubleReply *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleReplyPluginSupport_print_data(
    const BasicTypeTest_getDoubleReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getDoubleReply*
BasicTypeTest_getDoubleReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getDoubleReply*
BasicTypeTest_getDoubleReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleReplyPluginSupport_destroy_key_ex(
    BasicTypeTest_getDoubleReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleReplyPluginSupport_destroy_key(
    BasicTypeTest_getDoubleReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getDoubleReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getDoubleReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getDoubleReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleReply *out,
    const BasicTypeTest_getDoubleReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getDoubleReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getDoubleReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getDoubleReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getDoubleReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getDoubleReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getDoubleReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getDoubleReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getDoubleReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getDoubleReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getDoubleReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleReplyKeyHolder *key, 
    const BasicTypeTest_getDoubleReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getDoubleReply *instance, 
    const BasicTypeTest_getDoubleReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getDoubleReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getDoubleReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getDoubleReplyPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getDoubleReplyPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getBooleanRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getBooleanRequest.
 *
 * By default, this type is struct BasicTypeTest_getBooleanRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getBooleanRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getBooleanRequest, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getBooleanRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getBooleanRequest.
*/
typedef  class BasicTypeTest_getBooleanRequest BasicTypeTest_getBooleanRequestKeyHolder;


#define BasicTypeTest_getBooleanRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getBooleanRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getBooleanRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getBooleanRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getBooleanRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getBooleanRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getBooleanRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getBooleanRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getBooleanRequest*
BasicTypeTest_getBooleanRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getBooleanRequest*
BasicTypeTest_getBooleanRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanRequestPluginSupport_copy_data(
    BasicTypeTest_getBooleanRequest *out,
    const BasicTypeTest_getBooleanRequest *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanRequestPluginSupport_destroy_data_ex(
    BasicTypeTest_getBooleanRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanRequestPluginSupport_destroy_data(
    BasicTypeTest_getBooleanRequest *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanRequestPluginSupport_print_data(
    const BasicTypeTest_getBooleanRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getBooleanRequest*
BasicTypeTest_getBooleanRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getBooleanRequest*
BasicTypeTest_getBooleanRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanRequestPluginSupport_destroy_key_ex(
    BasicTypeTest_getBooleanRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanRequestPluginSupport_destroy_key(
    BasicTypeTest_getBooleanRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getBooleanRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getBooleanRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanRequest *out,
    const BasicTypeTest_getBooleanRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getBooleanRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getBooleanRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getBooleanRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getBooleanRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getBooleanRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getBooleanRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getBooleanRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getBooleanRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getBooleanRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getBooleanRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanRequestKeyHolder *key, 
    const BasicTypeTest_getBooleanRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanRequest *instance, 
    const BasicTypeTest_getBooleanRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getBooleanRequest *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getBooleanRequestPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getBooleanRequestPlugin_delete(struct PRESTypePlugin *);

#define BasicTypeTest_getBooleanReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * BasicTypeTest_getBooleanReply.
 *
 * By default, this type is struct BasicTypeTest_getBooleanReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct BasicTypeTest_getBooleanReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct BasicTypeTest_getBooleanReply, the
 * following restriction applies: the key of struct
 * BasicTypeTest_getBooleanReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct BasicTypeTest_getBooleanReply.
*/
typedef  class BasicTypeTest_getBooleanReply BasicTypeTest_getBooleanReplyKeyHolder;


#define BasicTypeTest_getBooleanReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define BasicTypeTest_getBooleanReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define BasicTypeTest_getBooleanReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define BasicTypeTest_getBooleanReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define BasicTypeTest_getBooleanReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define BasicTypeTest_getBooleanReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define BasicTypeTest_getBooleanReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define BasicTypeTest_getBooleanReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern BasicTypeTest_getBooleanReply*
BasicTypeTest_getBooleanReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getBooleanReply*
BasicTypeTest_getBooleanReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanReplyPluginSupport_copy_data(
    BasicTypeTest_getBooleanReply *out,
    const BasicTypeTest_getBooleanReply *in);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanReplyPluginSupport_destroy_data_ex(
    BasicTypeTest_getBooleanReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanReplyPluginSupport_destroy_data(
    BasicTypeTest_getBooleanReply *sample);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanReplyPluginSupport_print_data(
    const BasicTypeTest_getBooleanReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern BasicTypeTest_getBooleanReply*
BasicTypeTest_getBooleanReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern BasicTypeTest_getBooleanReply*
BasicTypeTest_getBooleanReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanReplyPluginSupport_destroy_key_ex(
    BasicTypeTest_getBooleanReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanReplyPluginSupport_destroy_key(
    BasicTypeTest_getBooleanReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
BasicTypeTest_getBooleanReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
BasicTypeTest_getBooleanReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
BasicTypeTest_getBooleanReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanReply *out,
    const BasicTypeTest_getBooleanReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getBooleanReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
BasicTypeTest_getBooleanReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getBooleanReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getBooleanReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
BasicTypeTest_getBooleanReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const BasicTypeTest_getBooleanReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
BasicTypeTest_getBooleanReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
BasicTypeTest_getBooleanReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const BasicTypeTest_getBooleanReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
BasicTypeTest_getBooleanReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanReplyKeyHolder *key, 
    const BasicTypeTest_getBooleanReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    BasicTypeTest_getBooleanReply *instance, 
    const BasicTypeTest_getBooleanReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const BasicTypeTest_getBooleanReply *instance);

NDDSUSERDllExport extern RTIBool 
BasicTypeTest_getBooleanReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
BasicTypeTest_getBooleanReplyPlugin_new(void);

NDDSUSERDllExport extern void
BasicTypeTest_getBooleanReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* BasicTypeTestRequestReplyPlugin_2120091638_h */
