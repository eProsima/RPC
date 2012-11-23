
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from UnionTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef UnionTestRequestReplyPlugin_1136051778_h
#define UnionTestRequestReplyPlugin_1136051778_h

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

#include "MessageHeaderPlugin.h"


#include "UnionTestPlugin.h"


/* The type used to store keys for instances of type struct
 * UnionTest_getEmpleadoRequest.
 *
 * By default, this type is struct UnionTest_getEmpleadoRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct UnionTest_getEmpleadoRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct UnionTest_getEmpleadoRequest, the
 * following restriction applies: the key of struct
 * UnionTest_getEmpleadoRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct UnionTest_getEmpleadoRequest.
*/
typedef  struct UnionTest_getEmpleadoRequest UnionTest_getEmpleadoRequestKeyHolder;


#define UnionTest_getEmpleadoRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define UnionTest_getEmpleadoRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define UnionTest_getEmpleadoRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define UnionTest_getEmpleadoRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define UnionTest_getEmpleadoRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define UnionTest_getEmpleadoRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define UnionTest_getEmpleadoRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define UnionTest_getEmpleadoRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern UnionTest_getEmpleadoRequest*
UnionTest_getEmpleadoRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern UnionTest_getEmpleadoRequest*
UnionTest_getEmpleadoRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoRequestPluginSupport_copy_data(
    UnionTest_getEmpleadoRequest *out,
    const UnionTest_getEmpleadoRequest *in);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoRequestPluginSupport_destroy_data_ex(
    UnionTest_getEmpleadoRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoRequestPluginSupport_destroy_data(
    UnionTest_getEmpleadoRequest *sample);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoRequestPluginSupport_print_data(
    const UnionTest_getEmpleadoRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern UnionTest_getEmpleadoRequest*
UnionTest_getEmpleadoRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern UnionTest_getEmpleadoRequest*
UnionTest_getEmpleadoRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoRequestPluginSupport_destroy_key_ex(
    UnionTest_getEmpleadoRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoRequestPluginSupport_destroy_key(
    UnionTest_getEmpleadoRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
UnionTest_getEmpleadoRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
UnionTest_getEmpleadoRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoRequest *out,
    const UnionTest_getEmpleadoRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const UnionTest_getEmpleadoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
UnionTest_getEmpleadoRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
UnionTest_getEmpleadoRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
UnionTest_getEmpleadoRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
UnionTest_getEmpleadoRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const UnionTest_getEmpleadoRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
UnionTest_getEmpleadoRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
UnionTest_getEmpleadoRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const UnionTest_getEmpleadoRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
UnionTest_getEmpleadoRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoRequestKeyHolder *key, 
    const UnionTest_getEmpleadoRequest *instance);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoRequest *instance, 
    const UnionTest_getEmpleadoRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const UnionTest_getEmpleadoRequest *instance);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
UnionTest_getEmpleadoRequestPlugin_new(void);

NDDSUSERDllExport extern void
UnionTest_getEmpleadoRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * UnionTest_getEmpleadoReply.
 *
 * By default, this type is struct UnionTest_getEmpleadoReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct UnionTest_getEmpleadoReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct UnionTest_getEmpleadoReply, the
 * following restriction applies: the key of struct
 * UnionTest_getEmpleadoReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct UnionTest_getEmpleadoReply.
*/
typedef  struct UnionTest_getEmpleadoReply UnionTest_getEmpleadoReplyKeyHolder;


#define UnionTest_getEmpleadoReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define UnionTest_getEmpleadoReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define UnionTest_getEmpleadoReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define UnionTest_getEmpleadoReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define UnionTest_getEmpleadoReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define UnionTest_getEmpleadoReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define UnionTest_getEmpleadoReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define UnionTest_getEmpleadoReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern UnionTest_getEmpleadoReply*
UnionTest_getEmpleadoReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern UnionTest_getEmpleadoReply*
UnionTest_getEmpleadoReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoReplyPluginSupport_copy_data(
    UnionTest_getEmpleadoReply *out,
    const UnionTest_getEmpleadoReply *in);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoReplyPluginSupport_destroy_data_ex(
    UnionTest_getEmpleadoReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoReplyPluginSupport_destroy_data(
    UnionTest_getEmpleadoReply *sample);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoReplyPluginSupport_print_data(
    const UnionTest_getEmpleadoReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern UnionTest_getEmpleadoReply*
UnionTest_getEmpleadoReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern UnionTest_getEmpleadoReply*
UnionTest_getEmpleadoReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoReplyPluginSupport_destroy_key_ex(
    UnionTest_getEmpleadoReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoReplyPluginSupport_destroy_key(
    UnionTest_getEmpleadoReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
UnionTest_getEmpleadoReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
UnionTest_getEmpleadoReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
UnionTest_getEmpleadoReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoReply *out,
    const UnionTest_getEmpleadoReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const UnionTest_getEmpleadoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
UnionTest_getEmpleadoReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
UnionTest_getEmpleadoReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
UnionTest_getEmpleadoReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
UnionTest_getEmpleadoReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const UnionTest_getEmpleadoReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
UnionTest_getEmpleadoReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
UnionTest_getEmpleadoReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const UnionTest_getEmpleadoReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
UnionTest_getEmpleadoReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoReplyKeyHolder *key, 
    const UnionTest_getEmpleadoReply *instance);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    UnionTest_getEmpleadoReply *instance, 
    const UnionTest_getEmpleadoReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const UnionTest_getEmpleadoReply *instance);

NDDSUSERDllExport extern RTIBool 
UnionTest_getEmpleadoReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
UnionTest_getEmpleadoReplyPlugin_new(void);

NDDSUSERDllExport extern void
UnionTest_getEmpleadoReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* UnionTestRequestReplyPlugin_1136051778_h */
