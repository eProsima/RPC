
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CalculatorRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CalculatorRequestReplyPlugin_540431605_h
#define CalculatorRequestReplyPlugin_540431605_h

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


#define CalculatorRequest_union_LAST_MEMBER_ID 0

#define CalculatorRequest_unionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define CalculatorRequest_unionPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define CalculatorRequest_unionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CalculatorRequest_unionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define CalculatorRequest_unionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CalculatorRequest_unionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CalculatorRequest_union*
CalculatorRequest_unionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CalculatorRequest_union*
CalculatorRequest_unionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CalculatorRequest_unionPluginSupport_copy_data(
    CalculatorRequest_union *out,
    const CalculatorRequest_union *in);

NDDSUSERDllExport extern void 
CalculatorRequest_unionPluginSupport_destroy_data_ex(
    CalculatorRequest_union *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CalculatorRequest_unionPluginSupport_destroy_data(
    CalculatorRequest_union *sample);

NDDSUSERDllExport extern void 
CalculatorRequest_unionPluginSupport_print_data(
    const CalculatorRequest_union *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
CalculatorRequest_unionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest_union *out,
    const CalculatorRequest_union *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CalculatorRequest_unionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CalculatorRequest_union *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CalculatorRequest_unionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest_union *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CalculatorRequest_unionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest_union **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CalculatorRequest_unionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CalculatorRequest_unionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CalculatorRequest_unionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CalculatorRequest_unionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CalculatorRequest_union * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CalculatorRequest_unionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CalculatorRequest_unionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CalculatorRequest_unionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CalculatorRequest_union *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CalculatorRequest_unionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest_union * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CalculatorRequest_unionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest_union ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
CalculatorRequest_unionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest_union *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define CalculatorRequest_LAST_MEMBER_ID 0

#define CalculatorRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define CalculatorRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define CalculatorRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CalculatorRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define CalculatorRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CalculatorRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CalculatorRequest*
CalculatorRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CalculatorRequest*
CalculatorRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CalculatorRequestPluginSupport_copy_data(
    CalculatorRequest *out,
    const CalculatorRequest *in);

NDDSUSERDllExport extern void 
CalculatorRequestPluginSupport_destroy_data_ex(
    CalculatorRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CalculatorRequestPluginSupport_destroy_data(
    CalculatorRequest *sample);

NDDSUSERDllExport extern void 
CalculatorRequestPluginSupport_print_data(
    const CalculatorRequest *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CalculatorRequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CalculatorRequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
CalculatorRequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CalculatorRequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
CalculatorRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest *out,
    const CalculatorRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CalculatorRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CalculatorRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CalculatorRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CalculatorRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CalculatorRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CalculatorRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CalculatorRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CalculatorRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CalculatorRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CalculatorRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CalculatorRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CalculatorRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CalculatorRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CalculatorRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CalculatorRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
CalculatorRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CalculatorRequestPlugin_new(void);

NDDSUSERDllExport extern void
CalculatorRequestPlugin_delete(struct PRESTypePlugin *);

#define CalculatorReply_union_LAST_MEMBER_ID 0

#define CalculatorReply_unionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define CalculatorReply_unionPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define CalculatorReply_unionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CalculatorReply_unionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define CalculatorReply_unionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CalculatorReply_unionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CalculatorReply_union*
CalculatorReply_unionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CalculatorReply_union*
CalculatorReply_unionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CalculatorReply_unionPluginSupport_copy_data(
    CalculatorReply_union *out,
    const CalculatorReply_union *in);

NDDSUSERDllExport extern void 
CalculatorReply_unionPluginSupport_destroy_data_ex(
    CalculatorReply_union *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CalculatorReply_unionPluginSupport_destroy_data(
    CalculatorReply_union *sample);

NDDSUSERDllExport extern void 
CalculatorReply_unionPluginSupport_print_data(
    const CalculatorReply_union *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
CalculatorReply_unionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorReply_union *out,
    const CalculatorReply_union *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CalculatorReply_unionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CalculatorReply_union *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CalculatorReply_unionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorReply_union *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CalculatorReply_unionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorReply_union **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CalculatorReply_unionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CalculatorReply_unionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CalculatorReply_unionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CalculatorReply_unionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CalculatorReply_union * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CalculatorReply_unionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CalculatorReply_unionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CalculatorReply_unionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CalculatorReply_union *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CalculatorReply_unionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorReply_union * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CalculatorReply_unionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorReply_union ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
CalculatorReply_unionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorReply_union *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define CalculatorReply_LAST_MEMBER_ID 0

#define CalculatorReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define CalculatorReplyPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define CalculatorReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CalculatorReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define CalculatorReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CalculatorReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CalculatorReply*
CalculatorReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CalculatorReply*
CalculatorReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CalculatorReplyPluginSupport_copy_data(
    CalculatorReply *out,
    const CalculatorReply *in);

NDDSUSERDllExport extern void 
CalculatorReplyPluginSupport_destroy_data_ex(
    CalculatorReply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CalculatorReplyPluginSupport_destroy_data(
    CalculatorReply *sample);

NDDSUSERDllExport extern void 
CalculatorReplyPluginSupport_print_data(
    const CalculatorReply *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CalculatorReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CalculatorReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
CalculatorReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CalculatorReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);


NDDSUSERDllExport extern RTIBool 
CalculatorReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorReply *out,
    const CalculatorReply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CalculatorReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CalculatorReply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CalculatorReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorReply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CalculatorReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorReply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CalculatorReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CalculatorReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CalculatorReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CalculatorReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CalculatorReply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CalculatorReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CalculatorReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CalculatorReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CalculatorReply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CalculatorReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorReply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CalculatorReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorReply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
CalculatorReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CalculatorReply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CalculatorReplyPlugin_new(void);

NDDSUSERDllExport extern void
CalculatorReplyPlugin_delete(struct PRESTypePlugin *);

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* CalculatorRequestReplyPlugin_540431605_h */
