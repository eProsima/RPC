
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StructTest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef StructTestPlugin_784352119_h
#define StructTestPlugin_784352119_h

#include "StructTest.h"




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

#define Envio_LAST_MEMBER_ID 0

#define EnvioPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EnvioPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EnvioPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EnvioPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define EnvioPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EnvioPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Envio*
EnvioPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Envio*
EnvioPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EnvioPluginSupport_copy_data(
    Envio *out,
    const Envio *in);

NDDSUSERDllExport extern void 
EnvioPluginSupport_destroy_data_ex(
    Envio *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EnvioPluginSupport_destroy_data(
    Envio *sample);

NDDSUSERDllExport extern void 
EnvioPluginSupport_print_data(
    const Envio *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
EnvioPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Envio *out,
    const Envio *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EnvioPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Envio *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnvioPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Envio *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnvioPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Envio **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EnvioPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EnvioPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EnvioPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EnvioPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Envio * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EnvioPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EnvioPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EnvioPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Envio *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EnvioPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Envio * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EnvioPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Envio ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EnvioPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Envio *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Recepcion_LAST_MEMBER_ID 0

#define RecepcionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define RecepcionPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define RecepcionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RecepcionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define RecepcionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RecepcionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Recepcion*
RecepcionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Recepcion*
RecepcionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RecepcionPluginSupport_copy_data(
    Recepcion *out,
    const Recepcion *in);

NDDSUSERDllExport extern void 
RecepcionPluginSupport_destroy_data_ex(
    Recepcion *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RecepcionPluginSupport_destroy_data(
    Recepcion *sample);

NDDSUSERDllExport extern void 
RecepcionPluginSupport_print_data(
    const Recepcion *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
RecepcionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Recepcion *out,
    const Recepcion *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RecepcionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Recepcion *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RecepcionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Recepcion *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RecepcionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Recepcion **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
RecepcionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RecepcionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RecepcionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RecepcionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Recepcion * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
RecepcionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RecepcionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RecepcionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Recepcion *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RecepcionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Recepcion * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RecepcionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Recepcion ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
RecepcionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Recepcion *sample,
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

#endif /* StructTestPlugin_784352119_h */
