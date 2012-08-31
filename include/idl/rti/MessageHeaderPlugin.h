
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MessageHeader.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MessageHeaderPlugin_953111474_h
#define MessageHeaderPlugin_953111474_h

#include "MessageHeader.h"




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


#define IdentificationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IdentificationPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define IdentificationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IdentificationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define IdentificationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IdentificationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Identification*
IdentificationPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Identification*
IdentificationPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IdentificationPluginSupport_copy_data(
    Identification *out,
    const Identification *in);

NDDSUSERDllExport extern void 
IdentificationPluginSupport_destroy_data_ex(
    Identification *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IdentificationPluginSupport_destroy_data(
    Identification *sample);

NDDSUSERDllExport extern void 
IdentificationPluginSupport_print_data(
    const Identification *sample,
    const char *desc,
    unsigned int indent);

 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IdentificationPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IdentificationPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
IdentificationPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IdentificationPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Identification *out,
    const Identification *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Identification *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Identification *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Identification **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
IdentificationPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IdentificationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IdentificationPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IdentificationPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Identification * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
IdentificationPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IdentificationPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Identification *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Identification * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Identification ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
IdentificationPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Identification *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IdentificationPlugin_new(void);

NDDSUSERDllExport extern void
IdentificationPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* MessageHeaderPlugin_953111474_h */
