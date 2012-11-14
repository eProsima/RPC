
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FooInterfaceRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FooInterfaceRequestReplyPlugin_998276846_h
#define FooInterfaceRequestReplyPlugin_998276846_h

#include "FooInterfaceRequestReply.h"




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


#include "FooInterfacePlugin.h"


/* The type used to store keys for instances of type struct
 * foo_procedureRequest.
 *
 * By default, this type is struct foo_procedureRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct foo_procedureRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct foo_procedureRequest, the
 * following restriction applies: the key of struct
 * foo_procedureRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct foo_procedureRequest.
*/
typedef  struct foo_procedureRequest foo_procedureRequestKeyHolder;


#define foo_procedureRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define foo_procedureRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define foo_procedureRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define foo_procedureRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define foo_procedureRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define foo_procedureRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define foo_procedureRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define foo_procedureRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern foo_procedureRequest*
foo_procedureRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern foo_procedureRequest*
foo_procedureRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
foo_procedureRequestPluginSupport_copy_data(
    foo_procedureRequest *out,
    const foo_procedureRequest *in);

NDDSUSERDllExport extern void 
foo_procedureRequestPluginSupport_destroy_data_ex(
    foo_procedureRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
foo_procedureRequestPluginSupport_destroy_data(
    foo_procedureRequest *sample);

NDDSUSERDllExport extern void 
foo_procedureRequestPluginSupport_print_data(
    const foo_procedureRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern foo_procedureRequest*
foo_procedureRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern foo_procedureRequest*
foo_procedureRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
foo_procedureRequestPluginSupport_destroy_key_ex(
    foo_procedureRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
foo_procedureRequestPluginSupport_destroy_key(
    foo_procedureRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
foo_procedureRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
foo_procedureRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
foo_procedureRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
foo_procedureRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
foo_procedureRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureRequest *out,
    const foo_procedureRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
foo_procedureRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const foo_procedureRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
foo_procedureRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
foo_procedureRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
foo_procedureRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
foo_procedureRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
foo_procedureRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
foo_procedureRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const foo_procedureRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
foo_procedureRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
foo_procedureRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
foo_procedureRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const foo_procedureRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
foo_procedureRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
foo_procedureRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
foo_procedureRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
foo_procedureRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureRequestKeyHolder *key, 
    const foo_procedureRequest *instance);

NDDSUSERDllExport extern RTIBool 
foo_procedureRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureRequest *instance, 
    const foo_procedureRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
foo_procedureRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const foo_procedureRequest *instance);

NDDSUSERDllExport extern RTIBool 
foo_procedureRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
foo_procedureRequestPlugin_new(void);

NDDSUSERDllExport extern void
foo_procedureRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * foo_procedureReply.
 *
 * By default, this type is struct foo_procedureReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct foo_procedureReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct foo_procedureReply, the
 * following restriction applies: the key of struct
 * foo_procedureReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct foo_procedureReply.
*/
typedef  struct foo_procedureReply foo_procedureReplyKeyHolder;


#define foo_procedureReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define foo_procedureReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define foo_procedureReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define foo_procedureReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define foo_procedureReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define foo_procedureReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define foo_procedureReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define foo_procedureReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern foo_procedureReply*
foo_procedureReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern foo_procedureReply*
foo_procedureReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
foo_procedureReplyPluginSupport_copy_data(
    foo_procedureReply *out,
    const foo_procedureReply *in);

NDDSUSERDllExport extern void 
foo_procedureReplyPluginSupport_destroy_data_ex(
    foo_procedureReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
foo_procedureReplyPluginSupport_destroy_data(
    foo_procedureReply *sample);

NDDSUSERDllExport extern void 
foo_procedureReplyPluginSupport_print_data(
    const foo_procedureReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern foo_procedureReply*
foo_procedureReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern foo_procedureReply*
foo_procedureReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
foo_procedureReplyPluginSupport_destroy_key_ex(
    foo_procedureReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
foo_procedureReplyPluginSupport_destroy_key(
    foo_procedureReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
foo_procedureReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
foo_procedureReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
foo_procedureReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
foo_procedureReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
foo_procedureReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureReply *out,
    const foo_procedureReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
foo_procedureReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const foo_procedureReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
foo_procedureReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
foo_procedureReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
foo_procedureReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
foo_procedureReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
foo_procedureReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
foo_procedureReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const foo_procedureReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
foo_procedureReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
foo_procedureReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
foo_procedureReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const foo_procedureReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
foo_procedureReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
foo_procedureReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
foo_procedureReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
foo_procedureReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureReplyKeyHolder *key, 
    const foo_procedureReply *instance);

NDDSUSERDllExport extern RTIBool 
foo_procedureReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    foo_procedureReply *instance, 
    const foo_procedureReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
foo_procedureReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const foo_procedureReply *instance);

NDDSUSERDllExport extern RTIBool 
foo_procedureReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
foo_procedureReplyPlugin_new(void);

NDDSUSERDllExport extern void
foo_procedureReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* FooInterfaceRequestReplyPlugin_998276846_h */
