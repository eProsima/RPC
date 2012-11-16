
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SequenceTest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SequenceTestPlugin_81001435_h
#define SequenceTestPlugin_81001435_h

#include "SequenceTest.h"




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

#define Datos_LAST_MEMBER_ID 0

#define DatosPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define DatosPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define DatosPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DatosPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DatosPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DatosPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Datos*
DatosPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Datos*
DatosPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DatosPluginSupport_copy_data(
    Datos *out,
    const Datos *in);

NDDSUSERDllExport extern void 
DatosPluginSupport_destroy_data_ex(
    Datos *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DatosPluginSupport_destroy_data(
    Datos *sample);

NDDSUSERDllExport extern void 
DatosPluginSupport_print_data(
    const Datos *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DatosPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DatosPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
DatosPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DatosPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
DatosPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Datos *out,
    const Datos *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DatosPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Datos *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DatosPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Datos *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DatosPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Datos **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DatosPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DatosPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DatosPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DatosPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Datos * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DatosPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DatosPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DatosPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Datos *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DatosPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Datos * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DatosPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Datos ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
DatosPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Datos *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DatosPlugin_new(void);

NDDSUSERDllExport extern void
DatosPlugin_delete(struct PRESTypePlugin *);


#define largo_LAST_MEMBER_ID long_LAST_MEMBER_ID

#define largoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define largoPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define largoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define largoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define largoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define largoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern largo*
largoPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern largo*
largoPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
largoPluginSupport_copy_data(
    largo *out,
    const largo *in);

NDDSUSERDllExport extern void 
largoPluginSupport_destroy_data_ex(
    largo *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
largoPluginSupport_destroy_data(
    largo *sample);

NDDSUSERDllExport extern void 
largoPluginSupport_print_data(
    const largo *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
largoPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    largo *out,
    const largo *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
largoPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const largo *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
largoPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    largo *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
largoPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
largoPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
largoPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
largoPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const largo * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
largoPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
largoPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
largoPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const largo *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
largoPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    largo * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
largoPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    largo *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define cadena_LAST_MEMBER_ID string_LAST_MEMBER_ID

#define cadenaPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define cadenaPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define cadenaPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define cadenaPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define cadenaPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define cadenaPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern cadena*
cadenaPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern cadena*
cadenaPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
cadenaPluginSupport_copy_data(
    cadena *out,
    const cadena *in);

NDDSUSERDllExport extern void 
cadenaPluginSupport_destroy_data_ex(
    cadena *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
cadenaPluginSupport_destroy_data(
    cadena *sample);

NDDSUSERDllExport extern void 
cadenaPluginSupport_print_data(
    const cadena *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
cadenaPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    cadena *out,
    const cadena *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
cadenaPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const cadena *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
cadenaPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    cadena *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
cadenaPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
cadenaPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
cadenaPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
cadenaPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const cadena * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
cadenaPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
cadenaPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
cadenaPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const cadena *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
cadenaPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    cadena * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
cadenaPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    cadena *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define dattos_LAST_MEMBER_ID Datos_LAST_MEMBER_ID

#define dattosPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define dattosPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define dattosPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define dattosPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define dattosPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define dattosPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern dattos*
dattosPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern dattos*
dattosPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
dattosPluginSupport_copy_data(
    dattos *out,
    const dattos *in);

NDDSUSERDllExport extern void 
dattosPluginSupport_destroy_data_ex(
    dattos *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
dattosPluginSupport_destroy_data(
    dattos *sample);

NDDSUSERDllExport extern void 
dattosPluginSupport_print_data(
    const dattos *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
dattosPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    dattos *out,
    const dattos *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
dattosPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const dattos *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
dattosPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    dattos *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
dattosPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
dattosPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
dattosPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
dattosPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const dattos * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
dattosPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
dattosPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
dattosPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const dattos *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
dattosPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    dattos * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
dattosPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    dattos *sample,
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

#endif /* SequenceTestPlugin_81001435_h */
