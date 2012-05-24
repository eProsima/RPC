
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TypedefTest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TypedefTestPlugin_46236543_h
#define TypedefTestPlugin_46236543_h

#include "TypedefTest.h"




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

 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
largoPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
largoPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
largoPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
largoPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

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



#define DatosDefPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define DatosDefPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define DatosDefPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DatosDefPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DatosDefPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DatosDefPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DatosDef*
DatosDefPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DatosDef*
DatosDefPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DatosDefPluginSupport_copy_data(
    DatosDef *out,
    const DatosDef *in);

NDDSUSERDllExport extern void 
DatosDefPluginSupport_destroy_data_ex(
    DatosDef *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DatosDefPluginSupport_destroy_data(
    DatosDef *sample);

NDDSUSERDllExport extern void 
DatosDefPluginSupport_print_data(
    const DatosDef *sample,
    const char *desc,
    unsigned int indent);

 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DatosDefPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DatosDefPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
DatosDefPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DatosDefPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
DatosDefPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DatosDef *out,
    const DatosDef *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DatosDefPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DatosDef *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DatosDefPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DatosDef *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DatosDefPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DatosDefPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DatosDefPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DatosDefPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DatosDef * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DatosDefPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DatosDefPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DatosDefPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DatosDef *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DatosDefPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DatosDef * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
DatosDefPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DatosDef *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



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

 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
cadenaPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
cadenaPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
cadenaPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
cadenaPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

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



#define larguisimoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define larguisimoPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define larguisimoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define larguisimoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define larguisimoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define larguisimoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern larguisimo*
larguisimoPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern larguisimo*
larguisimoPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
larguisimoPluginSupport_copy_data(
    larguisimo *out,
    const larguisimo *in);

NDDSUSERDllExport extern void 
larguisimoPluginSupport_destroy_data_ex(
    larguisimo *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
larguisimoPluginSupport_destroy_data(
    larguisimo *sample);

NDDSUSERDllExport extern void 
larguisimoPluginSupport_print_data(
    const larguisimo *sample,
    const char *desc,
    unsigned int indent);

 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
larguisimoPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
larguisimoPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
larguisimoPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
larguisimoPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
larguisimoPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    larguisimo *out,
    const larguisimo *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
larguisimoPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const larguisimo *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
larguisimoPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    larguisimo *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
larguisimoPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
larguisimoPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
larguisimoPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
larguisimoPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const larguisimo * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
larguisimoPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
larguisimoPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
larguisimoPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const larguisimo *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
larguisimoPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    larguisimo * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
larguisimoPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    larguisimo *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define DatosDefondoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define DatosDefondoPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define DatosDefondoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DatosDefondoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DatosDefondoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DatosDefondoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DatosDefondo*
DatosDefondoPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DatosDefondo*
DatosDefondoPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DatosDefondoPluginSupport_copy_data(
    DatosDefondo *out,
    const DatosDefondo *in);

NDDSUSERDllExport extern void 
DatosDefondoPluginSupport_destroy_data_ex(
    DatosDefondo *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DatosDefondoPluginSupport_destroy_data(
    DatosDefondo *sample);

NDDSUSERDllExport extern void 
DatosDefondoPluginSupport_print_data(
    const DatosDefondo *sample,
    const char *desc,
    unsigned int indent);

 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DatosDefondoPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DatosDefondoPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
DatosDefondoPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DatosDefondoPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
DatosDefondoPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DatosDefondo *out,
    const DatosDefondo *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DatosDefondoPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DatosDefondo *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DatosDefondoPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DatosDefondo *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DatosDefondoPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DatosDefondoPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DatosDefondoPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DatosDefondoPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DatosDefondo * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DatosDefondoPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DatosDefondoPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DatosDefondoPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DatosDefondo *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DatosDefondoPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DatosDefondo * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
DatosDefondoPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DatosDefondo *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define correaPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define correaPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define correaPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define correaPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define correaPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define correaPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern correa*
correaPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern correa*
correaPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
correaPluginSupport_copy_data(
    correa *out,
    const correa *in);

NDDSUSERDllExport extern void 
correaPluginSupport_destroy_data_ex(
    correa *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
correaPluginSupport_destroy_data(
    correa *sample);

NDDSUSERDllExport extern void 
correaPluginSupport_print_data(
    const correa *sample,
    const char *desc,
    unsigned int indent);

 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
correaPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
correaPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
correaPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
correaPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern RTIBool 
correaPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    correa *out,
    const correa *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
correaPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const correa *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
correaPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    correa *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
correaPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
correaPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
correaPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
correaPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const correa * sample);


/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
correaPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
correaPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
correaPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const correa *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
correaPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    correa * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);



NDDSUSERDllExport extern RTIBool
correaPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    correa *sample,
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

#endif /* TypedefTestPlugin_46236543_h */
