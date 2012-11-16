
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AsyncCallTest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef AsyncCallTestPlugin_1539606957_h
#define AsyncCallTestPlugin_1539606957_h

#include "AsyncCallTest.h"




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

#define Structure_LAST_MEMBER_ID 0

#define StructurePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define StructurePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define StructurePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define StructurePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define StructurePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define StructurePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Structure*
StructurePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Structure*
StructurePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
StructurePluginSupport_copy_data(
    Structure *out,
    const Structure *in);

NDDSUSERDllExport extern void 
StructurePluginSupport_destroy_data_ex(
    Structure *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
StructurePluginSupport_destroy_data(
    Structure *sample);

NDDSUSERDllExport extern void 
StructurePluginSupport_print_data(
    const Structure *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
StructurePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Structure *out,
    const Structure *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
StructurePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Structure *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StructurePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Structure *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructurePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Structure **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
StructurePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
StructurePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
StructurePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
StructurePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Structure * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
StructurePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
StructurePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
StructurePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Structure *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
StructurePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Structure * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
StructurePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Structure ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
StructurePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Structure *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* AsyncCallTestPlugin_1539606957_h */
