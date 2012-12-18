
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CalculatorRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CalculatorRequestReplyPlugin_540430929_h
#define CalculatorRequestReplyPlugin_540430929_h

#include "CalculatorRequestReply.h"




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


#include "CalculatorPlugin.h"


#define Calculator_additionRequest_LAST_MEMBER_ID 0

#define Calculator_additionRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define Calculator_additionRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define Calculator_additionRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_additionRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_additionRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_additionRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_additionRequest*
Calculator_additionRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_additionRequest*
Calculator_additionRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_additionRequestPluginSupport_copy_data(
    Calculator_additionRequest *out,
    const Calculator_additionRequest *in);

NDDSUSERDllExport extern void 
Calculator_additionRequestPluginSupport_destroy_data_ex(
    Calculator_additionRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_additionRequestPluginSupport_destroy_data(
    Calculator_additionRequest *sample);

NDDSUSERDllExport extern void 
Calculator_additionRequestPluginSupport_print_data(
    const Calculator_additionRequest *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Calculator_additionRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Calculator_additionRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Calculator_additionRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Calculator_additionRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
Calculator_additionRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_additionRequest *out,
    const Calculator_additionRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_additionRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_additionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_additionRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_additionRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_additionRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_additionRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_additionRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_additionRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_additionRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_additionRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_additionRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_additionRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_additionRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_additionRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_additionRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_additionRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_additionRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_additionRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_additionRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_additionRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_additionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Calculator_additionRequestPlugin_new(void);

NDDSUSERDllExport extern void
Calculator_additionRequestPlugin_delete(struct PRESTypePlugin *);

#define Calculator_additionReply_LAST_MEMBER_ID 0

#define Calculator_additionReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define Calculator_additionReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define Calculator_additionReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_additionReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_additionReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_additionReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_additionReply*
Calculator_additionReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_additionReply*
Calculator_additionReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_additionReplyPluginSupport_copy_data(
    Calculator_additionReply *out,
    const Calculator_additionReply *in);

NDDSUSERDllExport extern void 
Calculator_additionReplyPluginSupport_destroy_data_ex(
    Calculator_additionReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_additionReplyPluginSupport_destroy_data(
    Calculator_additionReply *sample);

NDDSUSERDllExport extern void 
Calculator_additionReplyPluginSupport_print_data(
    const Calculator_additionReply *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Calculator_additionReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Calculator_additionReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Calculator_additionReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Calculator_additionReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
Calculator_additionReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_additionReply *out,
    const Calculator_additionReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_additionReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_additionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_additionReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_additionReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_additionReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_additionReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_additionReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_additionReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_additionReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_additionReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_additionReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_additionReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_additionReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_additionReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_additionReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_additionReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_additionReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_additionReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_additionReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_additionReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_additionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Calculator_additionReplyPlugin_new(void);

NDDSUSERDllExport extern void
Calculator_additionReplyPlugin_delete(struct PRESTypePlugin *);

#define Calculator_subtractionRequest_LAST_MEMBER_ID 0

#define Calculator_subtractionRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define Calculator_subtractionRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define Calculator_subtractionRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_subtractionRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_subtractionRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_subtractionRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_subtractionRequest*
Calculator_subtractionRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_subtractionRequest*
Calculator_subtractionRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_subtractionRequestPluginSupport_copy_data(
    Calculator_subtractionRequest *out,
    const Calculator_subtractionRequest *in);

NDDSUSERDllExport extern void 
Calculator_subtractionRequestPluginSupport_destroy_data_ex(
    Calculator_subtractionRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_subtractionRequestPluginSupport_destroy_data(
    Calculator_subtractionRequest *sample);

NDDSUSERDllExport extern void 
Calculator_subtractionRequestPluginSupport_print_data(
    const Calculator_subtractionRequest *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Calculator_subtractionRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Calculator_subtractionRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Calculator_subtractionRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Calculator_subtractionRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
Calculator_subtractionRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtractionRequest *out,
    const Calculator_subtractionRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_subtractionRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_subtractionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_subtractionRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtractionRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_subtractionRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtractionRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_subtractionRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_subtractionRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_subtractionRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_subtractionRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_subtractionRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_subtractionRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_subtractionRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_subtractionRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_subtractionRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_subtractionRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtractionRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_subtractionRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtractionRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_subtractionRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtractionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Calculator_subtractionRequestPlugin_new(void);

NDDSUSERDllExport extern void
Calculator_subtractionRequestPlugin_delete(struct PRESTypePlugin *);

#define Calculator_subtractionReply_LAST_MEMBER_ID 0

#define Calculator_subtractionReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define Calculator_subtractionReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define Calculator_subtractionReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_subtractionReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_subtractionReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_subtractionReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_subtractionReply*
Calculator_subtractionReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_subtractionReply*
Calculator_subtractionReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_subtractionReplyPluginSupport_copy_data(
    Calculator_subtractionReply *out,
    const Calculator_subtractionReply *in);

NDDSUSERDllExport extern void 
Calculator_subtractionReplyPluginSupport_destroy_data_ex(
    Calculator_subtractionReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_subtractionReplyPluginSupport_destroy_data(
    Calculator_subtractionReply *sample);

NDDSUSERDllExport extern void 
Calculator_subtractionReplyPluginSupport_print_data(
    const Calculator_subtractionReply *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Calculator_subtractionReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Calculator_subtractionReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Calculator_subtractionReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Calculator_subtractionReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
Calculator_subtractionReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtractionReply *out,
    const Calculator_subtractionReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_subtractionReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_subtractionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_subtractionReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtractionReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_subtractionReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtractionReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_subtractionReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_subtractionReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_subtractionReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_subtractionReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_subtractionReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_subtractionReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_subtractionReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_subtractionReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_subtractionReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_subtractionReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtractionReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_subtractionReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtractionReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_subtractionReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtractionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Calculator_subtractionReplyPlugin_new(void);

NDDSUSERDllExport extern void
Calculator_subtractionReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* CalculatorRequestReplyPlugin_540430929_h */
