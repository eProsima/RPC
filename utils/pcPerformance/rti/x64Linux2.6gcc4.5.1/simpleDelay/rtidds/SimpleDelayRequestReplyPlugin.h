
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SimpleDelayRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SimpleDelayRequestReplyPlugin_1090934891_h
#define SimpleDelayRequestReplyPlugin_1090934891_h

#include "SimpleDelayRequestReply.h"




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


#include "SimpleDelayPlugin.h"


#define SimpleDelay_sumaRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * SimpleDelay_sumaRequest.
 *
 * By default, this type is struct SimpleDelay_sumaRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SimpleDelay_sumaRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SimpleDelay_sumaRequest, the
 * following restriction applies: the key of struct
 * SimpleDelay_sumaRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SimpleDelay_sumaRequest.
*/
typedef  class SimpleDelay_sumaRequest SimpleDelay_sumaRequestKeyHolder;


#define SimpleDelay_sumaRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define SimpleDelay_sumaRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define SimpleDelay_sumaRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SimpleDelay_sumaRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SimpleDelay_sumaRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SimpleDelay_sumaRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SimpleDelay_sumaRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SimpleDelay_sumaRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SimpleDelay_sumaRequest*
SimpleDelay_sumaRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SimpleDelay_sumaRequest*
SimpleDelay_sumaRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaRequestPluginSupport_copy_data(
    SimpleDelay_sumaRequest *out,
    const SimpleDelay_sumaRequest *in);

NDDSUSERDllExport extern void 
SimpleDelay_sumaRequestPluginSupport_destroy_data_ex(
    SimpleDelay_sumaRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SimpleDelay_sumaRequestPluginSupport_destroy_data(
    SimpleDelay_sumaRequest *sample);

NDDSUSERDllExport extern void 
SimpleDelay_sumaRequestPluginSupport_print_data(
    const SimpleDelay_sumaRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SimpleDelay_sumaRequest*
SimpleDelay_sumaRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SimpleDelay_sumaRequest*
SimpleDelay_sumaRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SimpleDelay_sumaRequestPluginSupport_destroy_key_ex(
    SimpleDelay_sumaRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SimpleDelay_sumaRequestPluginSupport_destroy_key(
    SimpleDelay_sumaRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SimpleDelay_sumaRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SimpleDelay_sumaRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SimpleDelay_sumaRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SimpleDelay_sumaRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaRequest *out,
    const SimpleDelay_sumaRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SimpleDelay_sumaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SimpleDelay_sumaRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SimpleDelay_sumaRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SimpleDelay_sumaRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SimpleDelay_sumaRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SimpleDelay_sumaRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SimpleDelay_sumaRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SimpleDelay_sumaRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SimpleDelay_sumaRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SimpleDelay_sumaRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaRequestKeyHolder *key, 
    const SimpleDelay_sumaRequest *instance);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaRequest *instance, 
    const SimpleDelay_sumaRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SimpleDelay_sumaRequest *instance);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SimpleDelay_sumaRequestPlugin_new(void);

NDDSUSERDllExport extern void
SimpleDelay_sumaRequestPlugin_delete(struct PRESTypePlugin *);

#define SimpleDelay_sumaReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * SimpleDelay_sumaReply.
 *
 * By default, this type is struct SimpleDelay_sumaReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SimpleDelay_sumaReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SimpleDelay_sumaReply, the
 * following restriction applies: the key of struct
 * SimpleDelay_sumaReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SimpleDelay_sumaReply.
*/
typedef  class SimpleDelay_sumaReply SimpleDelay_sumaReplyKeyHolder;


#define SimpleDelay_sumaReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define SimpleDelay_sumaReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define SimpleDelay_sumaReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SimpleDelay_sumaReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SimpleDelay_sumaReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SimpleDelay_sumaReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SimpleDelay_sumaReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SimpleDelay_sumaReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SimpleDelay_sumaReply*
SimpleDelay_sumaReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SimpleDelay_sumaReply*
SimpleDelay_sumaReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaReplyPluginSupport_copy_data(
    SimpleDelay_sumaReply *out,
    const SimpleDelay_sumaReply *in);

NDDSUSERDllExport extern void 
SimpleDelay_sumaReplyPluginSupport_destroy_data_ex(
    SimpleDelay_sumaReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SimpleDelay_sumaReplyPluginSupport_destroy_data(
    SimpleDelay_sumaReply *sample);

NDDSUSERDllExport extern void 
SimpleDelay_sumaReplyPluginSupport_print_data(
    const SimpleDelay_sumaReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SimpleDelay_sumaReply*
SimpleDelay_sumaReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SimpleDelay_sumaReply*
SimpleDelay_sumaReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SimpleDelay_sumaReplyPluginSupport_destroy_key_ex(
    SimpleDelay_sumaReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SimpleDelay_sumaReplyPluginSupport_destroy_key(
    SimpleDelay_sumaReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SimpleDelay_sumaReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SimpleDelay_sumaReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SimpleDelay_sumaReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SimpleDelay_sumaReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaReply *out,
    const SimpleDelay_sumaReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SimpleDelay_sumaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SimpleDelay_sumaReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SimpleDelay_sumaReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SimpleDelay_sumaReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SimpleDelay_sumaReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SimpleDelay_sumaReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SimpleDelay_sumaReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SimpleDelay_sumaReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SimpleDelay_sumaReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SimpleDelay_sumaReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaReplyKeyHolder *key, 
    const SimpleDelay_sumaReply *instance);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_sumaReply *instance, 
    const SimpleDelay_sumaReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SimpleDelay_sumaReply *instance);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_sumaReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SimpleDelay_sumaReplyPlugin_new(void);

NDDSUSERDllExport extern void
SimpleDelay_sumaReplyPlugin_delete(struct PRESTypePlugin *);

#define SimpleDelay_duplicateRequest_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * SimpleDelay_duplicateRequest.
 *
 * By default, this type is struct SimpleDelay_duplicateRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SimpleDelay_duplicateRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SimpleDelay_duplicateRequest, the
 * following restriction applies: the key of struct
 * SimpleDelay_duplicateRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SimpleDelay_duplicateRequest.
*/
typedef  class SimpleDelay_duplicateRequest SimpleDelay_duplicateRequestKeyHolder;


#define SimpleDelay_duplicateRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define SimpleDelay_duplicateRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define SimpleDelay_duplicateRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SimpleDelay_duplicateRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SimpleDelay_duplicateRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SimpleDelay_duplicateRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SimpleDelay_duplicateRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SimpleDelay_duplicateRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SimpleDelay_duplicateRequest*
SimpleDelay_duplicateRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SimpleDelay_duplicateRequest*
SimpleDelay_duplicateRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateRequestPluginSupport_copy_data(
    SimpleDelay_duplicateRequest *out,
    const SimpleDelay_duplicateRequest *in);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateRequestPluginSupport_destroy_data_ex(
    SimpleDelay_duplicateRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateRequestPluginSupport_destroy_data(
    SimpleDelay_duplicateRequest *sample);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateRequestPluginSupport_print_data(
    const SimpleDelay_duplicateRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SimpleDelay_duplicateRequest*
SimpleDelay_duplicateRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SimpleDelay_duplicateRequest*
SimpleDelay_duplicateRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateRequestPluginSupport_destroy_key_ex(
    SimpleDelay_duplicateRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateRequestPluginSupport_destroy_key(
    SimpleDelay_duplicateRequestKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SimpleDelay_duplicateRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SimpleDelay_duplicateRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateRequest *out,
    const SimpleDelay_duplicateRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SimpleDelay_duplicateRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SimpleDelay_duplicateRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SimpleDelay_duplicateRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SimpleDelay_duplicateRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SimpleDelay_duplicateRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SimpleDelay_duplicateRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SimpleDelay_duplicateRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SimpleDelay_duplicateRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SimpleDelay_duplicateRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SimpleDelay_duplicateRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateRequestKeyHolder *key, 
    const SimpleDelay_duplicateRequest *instance);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateRequest *instance, 
    const SimpleDelay_duplicateRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SimpleDelay_duplicateRequest *instance);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SimpleDelay_duplicateRequestPlugin_new(void);

NDDSUSERDllExport extern void
SimpleDelay_duplicateRequestPlugin_delete(struct PRESTypePlugin *);

#define SimpleDelay_duplicateReply_LAST_MEMBER_ID 0
/* The type used to store keys for instances of type struct
 * SimpleDelay_duplicateReply.
 *
 * By default, this type is struct SimpleDelay_duplicateReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SimpleDelay_duplicateReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SimpleDelay_duplicateReply, the
 * following restriction applies: the key of struct
 * SimpleDelay_duplicateReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SimpleDelay_duplicateReply.
*/
typedef  class SimpleDelay_duplicateReply SimpleDelay_duplicateReplyKeyHolder;


#define SimpleDelay_duplicateReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define SimpleDelay_duplicateReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define SimpleDelay_duplicateReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SimpleDelay_duplicateReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SimpleDelay_duplicateReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SimpleDelay_duplicateReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SimpleDelay_duplicateReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SimpleDelay_duplicateReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SimpleDelay_duplicateReply*
SimpleDelay_duplicateReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SimpleDelay_duplicateReply*
SimpleDelay_duplicateReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateReplyPluginSupport_copy_data(
    SimpleDelay_duplicateReply *out,
    const SimpleDelay_duplicateReply *in);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateReplyPluginSupport_destroy_data_ex(
    SimpleDelay_duplicateReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateReplyPluginSupport_destroy_data(
    SimpleDelay_duplicateReply *sample);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateReplyPluginSupport_print_data(
    const SimpleDelay_duplicateReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SimpleDelay_duplicateReply*
SimpleDelay_duplicateReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SimpleDelay_duplicateReply*
SimpleDelay_duplicateReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateReplyPluginSupport_destroy_key_ex(
    SimpleDelay_duplicateReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateReplyPluginSupport_destroy_key(
    SimpleDelay_duplicateReplyKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SimpleDelay_duplicateReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SimpleDelay_duplicateReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SimpleDelay_duplicateReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateReply *out,
    const SimpleDelay_duplicateReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SimpleDelay_duplicateReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SimpleDelay_duplicateReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SimpleDelay_duplicateReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SimpleDelay_duplicateReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SimpleDelay_duplicateReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SimpleDelay_duplicateReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SimpleDelay_duplicateReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SimpleDelay_duplicateReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SimpleDelay_duplicateReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SimpleDelay_duplicateReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateReplyKeyHolder *key, 
    const SimpleDelay_duplicateReply *instance);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SimpleDelay_duplicateReply *instance, 
    const SimpleDelay_duplicateReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SimpleDelay_duplicateReply *instance);

NDDSUSERDllExport extern RTIBool 
SimpleDelay_duplicateReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SimpleDelay_duplicateReplyPlugin_new(void);

NDDSUSERDllExport extern void
SimpleDelay_duplicateReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* SimpleDelayRequestReplyPlugin_1090934891_h */
