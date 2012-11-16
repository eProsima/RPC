
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FooInterfaceRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FooInterfaceRequestReplyPlugin_998276712_h
#define FooInterfaceRequestReplyPlugin_998276712_h

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
 * FooInterface_FooProcedureRequest.
 *
 * By default, this type is struct FooInterface_FooProcedureRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct FooInterface_FooProcedureRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct FooInterface_FooProcedureRequest, the
 * following restriction applies: the key of struct
 * FooInterface_FooProcedureRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct FooInterface_FooProcedureRequest.
*/
typedef  struct FooInterface_FooProcedureRequest FooInterface_FooProcedureRequestKeyHolder;


#define FooInterface_FooProcedureRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define FooInterface_FooProcedureRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define FooInterface_FooProcedureRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FooInterface_FooProcedureRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define FooInterface_FooProcedureRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define FooInterface_FooProcedureRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define FooInterface_FooProcedureRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FooInterface_FooProcedureRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FooInterface_FooProcedureRequest*
FooInterface_FooProcedureRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FooInterface_FooProcedureRequest*
FooInterface_FooProcedureRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureRequestPluginSupport_copy_data(
    FooInterface_FooProcedureRequest *out,
    const FooInterface_FooProcedureRequest *in);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureRequestPluginSupport_destroy_data_ex(
    FooInterface_FooProcedureRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureRequestPluginSupport_destroy_data(
    FooInterface_FooProcedureRequest *sample);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureRequestPluginSupport_print_data(
    const FooInterface_FooProcedureRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern FooInterface_FooProcedureRequest*
FooInterface_FooProcedureRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FooInterface_FooProcedureRequest*
FooInterface_FooProcedureRequestPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureRequestPluginSupport_destroy_key_ex(
    FooInterface_FooProcedureRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureRequestPluginSupport_destroy_key(
    FooInterface_FooProcedureRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FooInterface_FooProcedureRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FooInterface_FooProcedureRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureRequest *out,
    const FooInterface_FooProcedureRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FooInterface_FooProcedureRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
FooInterface_FooProcedureRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FooInterface_FooProcedureRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FooInterface_FooProcedureRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FooInterface_FooProcedureRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FooInterface_FooProcedureRequest * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FooInterface_FooProcedureRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FooInterface_FooProcedureRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FooInterface_FooProcedureRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FooInterface_FooProcedureRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureRequestKeyHolder *key, 
    const FooInterface_FooProcedureRequest *instance);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureRequest *instance, 
    const FooInterface_FooProcedureRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const FooInterface_FooProcedureRequest *instance);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FooInterface_FooProcedureRequestPlugin_new(void);

NDDSUSERDllExport extern void
FooInterface_FooProcedureRequestPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * FooInterface_FooProcedureReply.
 *
 * By default, this type is struct FooInterface_FooProcedureReply
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct FooInterface_FooProcedureReply)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct FooInterface_FooProcedureReply, the
 * following restriction applies: the key of struct
 * FooInterface_FooProcedureReply must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct FooInterface_FooProcedureReply.
*/
typedef  struct FooInterface_FooProcedureReply FooInterface_FooProcedureReplyKeyHolder;


#define FooInterface_FooProcedureReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define FooInterface_FooProcedureReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define FooInterface_FooProcedureReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define FooInterface_FooProcedureReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define FooInterface_FooProcedureReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define FooInterface_FooProcedureReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define FooInterface_FooProcedureReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define FooInterface_FooProcedureReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern FooInterface_FooProcedureReply*
FooInterface_FooProcedureReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FooInterface_FooProcedureReply*
FooInterface_FooProcedureReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureReplyPluginSupport_copy_data(
    FooInterface_FooProcedureReply *out,
    const FooInterface_FooProcedureReply *in);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureReplyPluginSupport_destroy_data_ex(
    FooInterface_FooProcedureReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureReplyPluginSupport_destroy_data(
    FooInterface_FooProcedureReply *sample);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureReplyPluginSupport_print_data(
    const FooInterface_FooProcedureReply *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern FooInterface_FooProcedureReply*
FooInterface_FooProcedureReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern FooInterface_FooProcedureReply*
FooInterface_FooProcedureReplyPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureReplyPluginSupport_destroy_key_ex(
    FooInterface_FooProcedureReplyKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureReplyPluginSupport_destroy_key(
    FooInterface_FooProcedureReplyKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
FooInterface_FooProcedureReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
FooInterface_FooProcedureReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
FooInterface_FooProcedureReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureReply *out,
    const FooInterface_FooProcedureReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FooInterface_FooProcedureReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
FooInterface_FooProcedureReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
FooInterface_FooProcedureReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
FooInterface_FooProcedureReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
FooInterface_FooProcedureReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FooInterface_FooProcedureReply * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
FooInterface_FooProcedureReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
FooInterface_FooProcedureReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FooInterface_FooProcedureReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
FooInterface_FooProcedureReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureReplyPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureReplyKeyHolder *key, 
    const FooInterface_FooProcedureReply *instance);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureReplyPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    FooInterface_FooProcedureReply *instance, 
    const FooInterface_FooProcedureReplyKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureReplyPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const FooInterface_FooProcedureReply *instance);

NDDSUSERDllExport extern RTIBool 
FooInterface_FooProcedureReplyPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
FooInterface_FooProcedureReplyPlugin_new(void);

NDDSUSERDllExport extern void
FooInterface_FooProcedureReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* FooInterfaceRequestReplyPlugin_998276712_h */
