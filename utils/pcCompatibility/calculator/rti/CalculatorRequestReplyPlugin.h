
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CalculatorRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CalculatorRequestReplyPlugin_540431706_h
#define CalculatorRequestReplyPlugin_540431706_h

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

#define Calculator_substractionRequest_LAST_MEMBER_ID 0

#define Calculator_substractionRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define Calculator_substractionRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define Calculator_substractionRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_substractionRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_substractionRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_substractionRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_substractionRequest*
Calculator_substractionRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_substractionRequest*
Calculator_substractionRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_substractionRequestPluginSupport_copy_data(
    Calculator_substractionRequest *out,
    const Calculator_substractionRequest *in);

NDDSUSERDllExport extern void 
Calculator_substractionRequestPluginSupport_destroy_data_ex(
    Calculator_substractionRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_substractionRequestPluginSupport_destroy_data(
    Calculator_substractionRequest *sample);

NDDSUSERDllExport extern void 
Calculator_substractionRequestPluginSupport_print_data(
    const Calculator_substractionRequest *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Calculator_substractionRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Calculator_substractionRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Calculator_substractionRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Calculator_substractionRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
Calculator_substractionRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_substractionRequest *out,
    const Calculator_substractionRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_substractionRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_substractionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_substractionRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_substractionRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_substractionRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_substractionRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_substractionRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_substractionRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_substractionRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_substractionRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_substractionRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_substractionRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_substractionRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_substractionRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_substractionRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_substractionRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_substractionRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_substractionRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_substractionRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_substractionRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_substractionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Calculator_substractionRequestPlugin_new(void);

NDDSUSERDllExport extern void
Calculator_substractionRequestPlugin_delete(struct PRESTypePlugin *);

#define Calculator_substractionReply_LAST_MEMBER_ID 0

#define Calculator_substractionReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define Calculator_substractionReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define Calculator_substractionReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_substractionReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_substractionReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_substractionReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_substractionReply*
Calculator_substractionReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_substractionReply*
Calculator_substractionReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_substractionReplyPluginSupport_copy_data(
    Calculator_substractionReply *out,
    const Calculator_substractionReply *in);

NDDSUSERDllExport extern void 
Calculator_substractionReplyPluginSupport_destroy_data_ex(
    Calculator_substractionReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_substractionReplyPluginSupport_destroy_data(
    Calculator_substractionReply *sample);

NDDSUSERDllExport extern void 
Calculator_substractionReplyPluginSupport_print_data(
    const Calculator_substractionReply *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Calculator_substractionReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Calculator_substractionReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Calculator_substractionReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Calculator_substractionReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
Calculator_substractionReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_substractionReply *out,
    const Calculator_substractionReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_substractionReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_substractionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_substractionReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_substractionReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_substractionReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_substractionReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_substractionReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_substractionReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_substractionReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_substractionReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_substractionReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_substractionReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_substractionReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_substractionReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_substractionReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_substractionReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_substractionReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_substractionReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_substractionReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_substractionReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_substractionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Calculator_substractionReplyPlugin_new(void);

NDDSUSERDllExport extern void
Calculator_substractionReplyPlugin_delete(struct PRESTypePlugin *);

#define Calculator_multiplicationRequest_LAST_MEMBER_ID 0

#define Calculator_multiplicationRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define Calculator_multiplicationRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define Calculator_multiplicationRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_multiplicationRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_multiplicationRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_multiplicationRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_multiplicationRequest*
Calculator_multiplicationRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_multiplicationRequest*
Calculator_multiplicationRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationRequestPluginSupport_copy_data(
    Calculator_multiplicationRequest *out,
    const Calculator_multiplicationRequest *in);

NDDSUSERDllExport extern void 
Calculator_multiplicationRequestPluginSupport_destroy_data_ex(
    Calculator_multiplicationRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_multiplicationRequestPluginSupport_destroy_data(
    Calculator_multiplicationRequest *sample);

NDDSUSERDllExport extern void 
Calculator_multiplicationRequestPluginSupport_print_data(
    const Calculator_multiplicationRequest *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Calculator_multiplicationRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Calculator_multiplicationRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Calculator_multiplicationRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Calculator_multiplicationRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_multiplicationRequest *out,
    const Calculator_multiplicationRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_multiplicationRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_multiplicationRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_multiplicationRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_multiplicationRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_multiplicationRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_multiplicationRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_multiplicationRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_multiplicationRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_multiplicationRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_multiplicationRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_multiplicationRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_multiplicationRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_multiplicationRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_multiplicationRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_multiplicationRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Calculator_multiplicationRequestPlugin_new(void);

NDDSUSERDllExport extern void
Calculator_multiplicationRequestPlugin_delete(struct PRESTypePlugin *);

#define Calculator_multiplicationReply_LAST_MEMBER_ID 0

#define Calculator_multiplicationReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define Calculator_multiplicationReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define Calculator_multiplicationReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_multiplicationReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_multiplicationReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_multiplicationReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_multiplicationReply*
Calculator_multiplicationReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_multiplicationReply*
Calculator_multiplicationReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationReplyPluginSupport_copy_data(
    Calculator_multiplicationReply *out,
    const Calculator_multiplicationReply *in);

NDDSUSERDllExport extern void 
Calculator_multiplicationReplyPluginSupport_destroy_data_ex(
    Calculator_multiplicationReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_multiplicationReplyPluginSupport_destroy_data(
    Calculator_multiplicationReply *sample);

NDDSUSERDllExport extern void 
Calculator_multiplicationReplyPluginSupport_print_data(
    const Calculator_multiplicationReply *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Calculator_multiplicationReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Calculator_multiplicationReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Calculator_multiplicationReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Calculator_multiplicationReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_multiplicationReply *out,
    const Calculator_multiplicationReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_multiplicationReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_multiplicationReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_multiplicationReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_multiplicationReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_multiplicationReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_multiplicationReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_multiplicationReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_multiplicationReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_multiplicationReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_multiplicationReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_multiplicationReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_multiplicationReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_multiplicationReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_multiplicationReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_multiplicationReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_multiplicationReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Calculator_multiplicationReplyPlugin_new(void);

NDDSUSERDllExport extern void
Calculator_multiplicationReplyPlugin_delete(struct PRESTypePlugin *);

#define Calculator_divisionRequest_LAST_MEMBER_ID 0

#define Calculator_divisionRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define Calculator_divisionRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define Calculator_divisionRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_divisionRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_divisionRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_divisionRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_divisionRequest*
Calculator_divisionRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_divisionRequest*
Calculator_divisionRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_divisionRequestPluginSupport_copy_data(
    Calculator_divisionRequest *out,
    const Calculator_divisionRequest *in);

NDDSUSERDllExport extern void 
Calculator_divisionRequestPluginSupport_destroy_data_ex(
    Calculator_divisionRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_divisionRequestPluginSupport_destroy_data(
    Calculator_divisionRequest *sample);

NDDSUSERDllExport extern void 
Calculator_divisionRequestPluginSupport_print_data(
    const Calculator_divisionRequest *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Calculator_divisionRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Calculator_divisionRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Calculator_divisionRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Calculator_divisionRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
Calculator_divisionRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_divisionRequest *out,
    const Calculator_divisionRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_divisionRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_divisionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_divisionRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_divisionRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_divisionRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_divisionRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_divisionRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_divisionRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_divisionRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_divisionRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_divisionRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_divisionRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_divisionRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_divisionRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_divisionRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_divisionRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_divisionRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_divisionRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_divisionRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_divisionRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_divisionRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Calculator_divisionRequestPlugin_new(void);

NDDSUSERDllExport extern void
Calculator_divisionRequestPlugin_delete(struct PRESTypePlugin *);

#define Calculator_divisionReply_LAST_MEMBER_ID 0

#define Calculator_divisionReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define Calculator_divisionReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define Calculator_divisionReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_divisionReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_divisionReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_divisionReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_divisionReply*
Calculator_divisionReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_divisionReply*
Calculator_divisionReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_divisionReplyPluginSupport_copy_data(
    Calculator_divisionReply *out,
    const Calculator_divisionReply *in);

NDDSUSERDllExport extern void 
Calculator_divisionReplyPluginSupport_destroy_data_ex(
    Calculator_divisionReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_divisionReplyPluginSupport_destroy_data(
    Calculator_divisionReply *sample);

NDDSUSERDllExport extern void 
Calculator_divisionReplyPluginSupport_print_data(
    const Calculator_divisionReply *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Calculator_divisionReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Calculator_divisionReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Calculator_divisionReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Calculator_divisionReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
Calculator_divisionReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_divisionReply *out,
    const Calculator_divisionReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_divisionReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_divisionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_divisionReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_divisionReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_divisionReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_divisionReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_divisionReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_divisionReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_divisionReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_divisionReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_divisionReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_divisionReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_divisionReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_divisionReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_divisionReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_divisionReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_divisionReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_divisionReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_divisionReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_divisionReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_divisionReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Calculator_divisionReplyPlugin_new(void);

NDDSUSERDllExport extern void
Calculator_divisionReplyPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* CalculatorRequestReplyPlugin_540431706_h */
