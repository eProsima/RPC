
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from function1TemplateRequest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
*/

#ifndef function1TemplateRequestPlugin_h
#define function1TemplateRequestPlugin_h

#ifndef function1TemplateRequest_h
#include "function1TemplateRequest.h"
#endif




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

/* The type used to store keys for instances of type struct
 * function1TemplateRequest.
 *
 * By default, this type is struct function1TemplateRequest
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct function1TemplateRequest)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct function1TemplateRequest, the
 * following restriction applies: the key of struct
 * function1TemplateRequest must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct function1TemplateRequest.
*/
typedef  struct function1TemplateRequest function1TemplateRequestKeyHolder;


#define function1TemplateRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define function1TemplateRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define function1TemplateRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define function1TemplateRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define function1TemplateRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define function1TemplateRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define function1TemplateRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define function1TemplateRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern function1TemplateRequest*
function1TemplateRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern function1TemplateRequest*
function1TemplateRequestPluginSupport_create_data();

NDDSUSERDllExport extern RTIBool 
function1TemplateRequestPluginSupport_copy_data(
    function1TemplateRequest *out,
    const function1TemplateRequest *in);

NDDSUSERDllExport extern void 
function1TemplateRequestPluginSupport_destroy_data_ex(
    function1TemplateRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
function1TemplateRequestPluginSupport_destroy_data(
    function1TemplateRequest *sample);

NDDSUSERDllExport extern void 
function1TemplateRequestPluginSupport_print_data(
    const function1TemplateRequest *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern function1TemplateRequest*
function1TemplateRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern function1TemplateRequest*
function1TemplateRequestPluginSupport_create_key();

NDDSUSERDllExport extern void 
function1TemplateRequestPluginSupport_destroy_key_ex(
    function1TemplateRequestKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
function1TemplateRequestPluginSupport_destroy_key(
    function1TemplateRequestKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
function1TemplateRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
function1TemplateRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
function1TemplateRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
function1TemplateRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
function1TemplateRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    function1TemplateRequest *out,
    const function1TemplateRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
function1TemplateRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const function1TemplateRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
function1TemplateRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    function1TemplateRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
function1TemplateRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
function1TemplateRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int 
function1TemplateRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size);

NDDSUSERDllExport extern unsigned int
function1TemplateRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int size,
    const void * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
function1TemplateRequestPlugin_get_key_kind();

NDDSUSERDllExport extern unsigned int 
function1TemplateRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
function1TemplateRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const function1TemplateRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
function1TemplateRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    function1TemplateRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
function1TemplateRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    function1TemplateRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
function1TemplateRequestPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    function1TemplateRequestKeyHolder *key, 
    const function1TemplateRequest *instance);

NDDSUSERDllExport extern RTIBool 
function1TemplateRequestPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    function1TemplateRequest *instance, 
    const function1TemplateRequestKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
function1TemplateRequestPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const function1TemplateRequest *instance);

NDDSUSERDllExport extern RTIBool 
function1TemplateRequestPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
function1TemplateRequestPlugin_new();

NDDSUSERDllExport extern void
function1TemplateRequestPlugin_delete(struct PRESTypePlugin *);
 

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif


#ifdef __cplusplus
}
#endif
        

#endif /* function1TemplateRequestPlugin_h */
