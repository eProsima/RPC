
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from UnionTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef UnionTestRequestReplyPlugin_1136051226_h
#define UnionTestRequestReplyPlugin_1136051226_h

#include "UnionTestRequestReply.h"




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

#include "UnionTestPlugin.h"


/* The type used to store keys for instances of type struct
 * getEmpleadoRequest.
 *
 * By default, this type is struct getEmpleadoRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getEmpleadoRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getEmpleadoRequest, the
 * following restriction applies: the key of struct
 * getEmpleadoRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getEmpleadoRequest.
*/
typedef  struct getEmpleadoRequest getEmpleadoRequestKeyHolder;


#define getEmpleadoRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getEmpleadoRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getEmpleadoRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getEmpleadoRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getEmpleadoRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getEmpleadoRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getEmpleadoRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getEmpleadoRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getEmpleadoRequest*
getEmpleadoRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getEmpleadoRequest*
getEmpleadoRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getEmpleadoRequestPluginSupport_copy_data(
    getEmpleadoRequest *out,
    const getEmpleadoRequest *in);

NDDSUSERDllExport extern void 
getEmpleadoRequestPluginSupport_destroy_data_ex(
    getEmpleadoRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getEmpleadoRequestPluginSupport_destroy_data(
    getEmpleadoRequest *sample);

NDDSUSERDllExport extern void 
getEmpleadoRequestPluginSupport_print_data(
    const getEmpleadoRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getEmpleadoRequest*
getEmpleadoRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getEmpleadoRequest*
getEmpleadoRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getEmpleadoRequestPluginSupport_destroy_key_ex(
    getEmpleadoRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getEmpleadoRequestPluginSupport_destroy_key(
    getEmpleadoRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getEmpleadoRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getEmpleadoRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getEmpleadoRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getEmpleadoRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getEmpleadoRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoRequest *out,
    const getEmpleadoRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getEmpleadoRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getEmpleadoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getEmpleadoRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getEmpleadoRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getEmpleadoRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getEmpleadoRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getEmpleadoRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getEmpleadoRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getEmpleadoRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getEmpleadoRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getEmpleadoRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getEmpleadoRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getEmpleadoRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getEmpleadoRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getEmpleadoRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getEmpleadoRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getEmpleadoRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoRequestKeyHolder *key, 
    const getEmpleadoRequest *instance);

NDDSUSERDllExport extern RTIBool 
getEmpleadoRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoRequest *instance, 
    const getEmpleadoRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getEmpleadoRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getEmpleadoRequest *instance);

NDDSUSERDllExport extern RTIBool 
getEmpleadoRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getEmpleadoRequestPlugin_new(void);

NDDSUSERDllExport extern void
getEmpleadoRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * getEmpleadoReply.
 *
 * By default, this type is struct getEmpleadoReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct getEmpleadoReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct getEmpleadoReply, the
 * following restriction applies: the key of struct
 * getEmpleadoReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct getEmpleadoReply.
*/
typedef  struct getEmpleadoReply getEmpleadoReplyKeyHolder;


#define getEmpleadoReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define getEmpleadoReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define getEmpleadoReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define getEmpleadoReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define getEmpleadoReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define getEmpleadoReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define getEmpleadoReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define getEmpleadoReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern getEmpleadoReply*
getEmpleadoReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getEmpleadoReply*
getEmpleadoReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
getEmpleadoReplyPluginSupport_copy_data(
    getEmpleadoReply *out,
    const getEmpleadoReply *in);

NDDSUSERDllExport extern void 
getEmpleadoReplyPluginSupport_destroy_data_ex(
    getEmpleadoReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getEmpleadoReplyPluginSupport_destroy_data(
    getEmpleadoReply *sample);

NDDSUSERDllExport extern void 
getEmpleadoReplyPluginSupport_print_data(
    const getEmpleadoReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern getEmpleadoReply*
getEmpleadoReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern getEmpleadoReply*
getEmpleadoReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
getEmpleadoReplyPluginSupport_destroy_key_ex(
    getEmpleadoReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
getEmpleadoReplyPluginSupport_destroy_key(
    getEmpleadoReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
getEmpleadoReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
getEmpleadoReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
getEmpleadoReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
getEmpleadoReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
getEmpleadoReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoReply *out,
    const getEmpleadoReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
getEmpleadoReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const getEmpleadoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getEmpleadoReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getEmpleadoReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
getEmpleadoReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
getEmpleadoReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
getEmpleadoReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
getEmpleadoReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const getEmpleadoReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
getEmpleadoReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
getEmpleadoReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
getEmpleadoReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const getEmpleadoReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
getEmpleadoReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getEmpleadoReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
getEmpleadoReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
getEmpleadoReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoReplyKeyHolder *key, 
    const getEmpleadoReply *instance);

NDDSUSERDllExport extern RTIBool 
getEmpleadoReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    getEmpleadoReply *instance, 
    const getEmpleadoReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
getEmpleadoReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const getEmpleadoReply *instance);

NDDSUSERDllExport extern RTIBool 
getEmpleadoReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
getEmpleadoReplyPlugin_new(void);

NDDSUSERDllExport extern void
getEmpleadoReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* UnionTestRequestReplyPlugin_1136051226_h */
