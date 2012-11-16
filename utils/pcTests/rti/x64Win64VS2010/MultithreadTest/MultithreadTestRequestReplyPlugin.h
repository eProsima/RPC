
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MultithreadTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MultithreadTestRequestReplyPlugin_135729271_h
#define MultithreadTestRequestReplyPlugin_135729271_h

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

#include "MessageHeaderPlugin.h"


#include "MultithreadTestPlugin.h"


/* The type used to store keys for instances of type struct
 * MultithreadTest_testRequest.
 *
 * By default, this type is struct MultithreadTest_testRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct MultithreadTest_testRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct MultithreadTest_testRequest, the
 * following restriction applies: the key of struct
 * MultithreadTest_testRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct MultithreadTest_testRequest.
*/
typedef  struct MultithreadTest_testRequest MultithreadTest_testRequestKeyHolder;


#define MultithreadTest_testRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define MultithreadTest_testRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define MultithreadTest_testRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MultithreadTest_testRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define MultithreadTest_testRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define MultithreadTest_testRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define MultithreadTest_testRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MultithreadTest_testRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MultithreadTest_testRequest*
MultithreadTest_testRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MultithreadTest_testRequest*
MultithreadTest_testRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testRequestPluginSupport_copy_data(
    MultithreadTest_testRequest *out,
    const MultithreadTest_testRequest *in);

NDDSUSERDllExport extern void 
MultithreadTest_testRequestPluginSupport_destroy_data_ex(
    MultithreadTest_testRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MultithreadTest_testRequestPluginSupport_destroy_data(
    MultithreadTest_testRequest *sample);

NDDSUSERDllExport extern void 
MultithreadTest_testRequestPluginSupport_print_data(
    const MultithreadTest_testRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern MultithreadTest_testRequest*
MultithreadTest_testRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MultithreadTest_testRequest*
MultithreadTest_testRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
MultithreadTest_testRequestPluginSupport_destroy_key_ex(
    MultithreadTest_testRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MultithreadTest_testRequestPluginSupport_destroy_key(
    MultithreadTest_testRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MultithreadTest_testRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MultithreadTest_testRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MultithreadTest_testRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MultithreadTest_testRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testRequest *out,
    const MultithreadTest_testRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MultithreadTest_testRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MultithreadTest_testRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
MultithreadTest_testRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MultithreadTest_testRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MultithreadTest_testRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MultithreadTest_testRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MultithreadTest_testRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MultithreadTest_testRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MultithreadTest_testRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MultithreadTest_testRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MultithreadTest_testRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MultithreadTest_testRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MultithreadTest_testRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testRequestKeyHolder *key, 
    const MultithreadTest_testRequest *instance);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testRequest *instance, 
    const MultithreadTest_testRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const MultithreadTest_testRequest *instance);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MultithreadTest_testRequestPlugin_new(void);

NDDSUSERDllExport extern void
MultithreadTest_testRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * MultithreadTest_testReply.
 *
 * By default, this type is struct MultithreadTest_testReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct MultithreadTest_testReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct MultithreadTest_testReply, the
 * following restriction applies: the key of struct
 * MultithreadTest_testReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct MultithreadTest_testReply.
*/
typedef  struct MultithreadTest_testReply MultithreadTest_testReplyKeyHolder;


#define MultithreadTest_testReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define MultithreadTest_testReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define MultithreadTest_testReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MultithreadTest_testReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define MultithreadTest_testReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define MultithreadTest_testReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define MultithreadTest_testReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MultithreadTest_testReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MultithreadTest_testReply*
MultithreadTest_testReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MultithreadTest_testReply*
MultithreadTest_testReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testReplyPluginSupport_copy_data(
    MultithreadTest_testReply *out,
    const MultithreadTest_testReply *in);

NDDSUSERDllExport extern void 
MultithreadTest_testReplyPluginSupport_destroy_data_ex(
    MultithreadTest_testReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MultithreadTest_testReplyPluginSupport_destroy_data(
    MultithreadTest_testReply *sample);

NDDSUSERDllExport extern void 
MultithreadTest_testReplyPluginSupport_print_data(
    const MultithreadTest_testReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern MultithreadTest_testReply*
MultithreadTest_testReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MultithreadTest_testReply*
MultithreadTest_testReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
MultithreadTest_testReplyPluginSupport_destroy_key_ex(
    MultithreadTest_testReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MultithreadTest_testReplyPluginSupport_destroy_key(
    MultithreadTest_testReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MultithreadTest_testReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MultithreadTest_testReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MultithreadTest_testReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MultithreadTest_testReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testReply *out,
    const MultithreadTest_testReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MultithreadTest_testReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MultithreadTest_testReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
MultithreadTest_testReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MultithreadTest_testReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MultithreadTest_testReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MultithreadTest_testReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MultithreadTest_testReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MultithreadTest_testReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MultithreadTest_testReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MultithreadTest_testReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MultithreadTest_testReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MultithreadTest_testReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MultithreadTest_testReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testReplyKeyHolder *key, 
    const MultithreadTest_testReply *instance);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    MultithreadTest_testReply *instance, 
    const MultithreadTest_testReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const MultithreadTest_testReply *instance);

NDDSUSERDllExport extern RTIBool 
MultithreadTest_testReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MultithreadTest_testReplyPlugin_new(void);

NDDSUSERDllExport extern void
MultithreadTest_testReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* MultithreadTestRequestReplyPlugin_135729271_h */
