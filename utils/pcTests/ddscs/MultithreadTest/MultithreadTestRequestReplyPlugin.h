
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MultithreadTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MultithreadTestRequestReplyPlugin_135729209_h
#define MultithreadTestRequestReplyPlugin_135729209_h

#include "MultithreadTestRequestReply.h"




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

#include "MultithreadTestPlugin.h"


/* The type used to store keys for instances of type struct
 * testRequest.
 *
 * By default, this type is struct testRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct testRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct testRequest, the
 * following restriction applies: the key of struct
 * testRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct testRequest.
*/
typedef  struct testRequest testRequestKeyHolder;


#define testRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define testRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define testRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define testRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define testRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define testRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define testRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define testRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern testRequest*
testRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern testRequest*
testRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
testRequestPluginSupport_copy_data(
    testRequest *out,
    const testRequest *in);

NDDSUSERDllExport extern void 
testRequestPluginSupport_destroy_data_ex(
    testRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
testRequestPluginSupport_destroy_data(
    testRequest *sample);

NDDSUSERDllExport extern void 
testRequestPluginSupport_print_data(
    const testRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern testRequest*
testRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern testRequest*
testRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
testRequestPluginSupport_destroy_key_ex(
    testRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
testRequestPluginSupport_destroy_key(
    testRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
testRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
testRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
testRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
testRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
testRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    testRequest *out,
    const testRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
testRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const testRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
testRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    testRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
testRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    testRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
testRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
testRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
testRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
testRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const testRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
testRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
testRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
testRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const testRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
testRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    testRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
testRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    testRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
testRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    testRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
testRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    testRequestKeyHolder *key, 
    const testRequest *instance);

NDDSUSERDllExport extern RTIBool 
testRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    testRequest *instance, 
    const testRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
testRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const testRequest *instance);

NDDSUSERDllExport extern RTIBool 
testRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
testRequestPlugin_new(void);

NDDSUSERDllExport extern void
testRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * testReply.
 *
 * By default, this type is struct testReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct testReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct testReply, the
 * following restriction applies: the key of struct
 * testReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct testReply.
*/
typedef  struct testReply testReplyKeyHolder;


#define testReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define testReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define testReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define testReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define testReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define testReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define testReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define testReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern testReply*
testReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern testReply*
testReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
testReplyPluginSupport_copy_data(
    testReply *out,
    const testReply *in);

NDDSUSERDllExport extern void 
testReplyPluginSupport_destroy_data_ex(
    testReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
testReplyPluginSupport_destroy_data(
    testReply *sample);

NDDSUSERDllExport extern void 
testReplyPluginSupport_print_data(
    const testReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern testReply*
testReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern testReply*
testReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
testReplyPluginSupport_destroy_key_ex(
    testReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
testReplyPluginSupport_destroy_key(
    testReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
testReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
testReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
testReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
testReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
testReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    testReply *out,
    const testReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
testReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const testReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
testReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    testReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
testReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    testReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
testReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
testReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
testReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
testReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const testReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
testReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
testReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
testReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const testReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
testReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    testReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
testReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    testReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
testReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    testReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
testReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    testReplyKeyHolder *key, 
    const testReply *instance);

NDDSUSERDllExport extern RTIBool 
testReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    testReply *instance, 
    const testReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
testReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const testReply *instance);

NDDSUSERDllExport extern RTIBool 
testReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
testReplyPlugin_new(void);

NDDSUSERDllExport extern void
testReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* MultithreadTestRequestReplyPlugin_135729209_h */
