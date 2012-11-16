
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from UnionTest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef UnionTestPlugin_229517745_h
#define UnionTestPlugin_229517745_h

#include "UnionTest.h"




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


#define EmpleadoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EmpleadoPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EmpleadoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EmpleadoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define EmpleadoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EmpleadoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Empleado*
EmpleadoPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Empleado*
EmpleadoPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EmpleadoPluginSupport_copy_data(
    Empleado *out,
    const Empleado *in);

NDDSUSERDllExport extern void 
EmpleadoPluginSupport_destroy_data_ex(
    Empleado *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EmpleadoPluginSupport_destroy_data(
    Empleado *sample);

NDDSUSERDllExport extern void 
EmpleadoPluginSupport_print_data(
    const Empleado *sample,
    const char *desc,
    unsigned int indent);

 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
EmpleadoPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
EmpleadoPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
EmpleadoPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
EmpleadoPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
EmpleadoPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Empleado *out,
    const Empleado *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EmpleadoPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Empleado *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmpleadoPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Empleado *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmpleadoPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Empleado **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
EmpleadoPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EmpleadoPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EmpleadoPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EmpleadoPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Empleado * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EmpleadoPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EmpleadoPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EmpleadoPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Empleado *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmpleadoPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Empleado * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmpleadoPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Empleado ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EmpleadoPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Empleado *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
EmpleadoPlugin_new(void);

NDDSUSERDllExport extern void
EmpleadoPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* UnionTestPlugin_229517745_h */
