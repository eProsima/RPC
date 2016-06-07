
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CalculatorRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CalculatorRequestReplyPlugin_540432743_h
#define CalculatorRequestReplyPlugin_540432743_h

#include "CalculatorRequestReply.h"

#include "MessageHeaderPlugin.h"


#include "CalculatorPlugin.h"




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



#define Calculator_addition_InPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Calculator_addition_InPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_addition_InPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_addition_InPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_addition_InPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_addition_In*
Calculator_addition_InPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Calculator_addition_In*
Calculator_addition_InPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_addition_In*
Calculator_addition_InPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_addition_InPluginSupport_copy_data(
    Calculator_addition_In *out,
    const Calculator_addition_In *in);

NDDSUSERDllExport extern void 
Calculator_addition_InPluginSupport_destroy_data_w_params(
    Calculator_addition_In *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Calculator_addition_InPluginSupport_destroy_data_ex(
    Calculator_addition_In *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_addition_InPluginSupport_destroy_data(
    Calculator_addition_In *sample);

NDDSUSERDllExport extern void 
Calculator_addition_InPluginSupport_print_data(
    const Calculator_addition_In *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Calculator_addition_InPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_In *out,
    const Calculator_addition_In *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_addition_InPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_addition_In *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_addition_InPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_In *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_addition_InPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_In **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_addition_InPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_addition_InPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_addition_InPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_addition_InPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_addition_In * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_addition_InPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_addition_InPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_addition_InPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_addition_In *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_addition_InPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_In * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_addition_InPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_In ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_addition_InPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_In *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Calculator_addition_OutPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Calculator_addition_OutPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_addition_OutPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_addition_OutPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_addition_OutPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_addition_Out*
Calculator_addition_OutPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Calculator_addition_Out*
Calculator_addition_OutPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_addition_Out*
Calculator_addition_OutPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_addition_OutPluginSupport_copy_data(
    Calculator_addition_Out *out,
    const Calculator_addition_Out *in);

NDDSUSERDllExport extern void 
Calculator_addition_OutPluginSupport_destroy_data_w_params(
    Calculator_addition_Out *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Calculator_addition_OutPluginSupport_destroy_data_ex(
    Calculator_addition_Out *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_addition_OutPluginSupport_destroy_data(
    Calculator_addition_Out *sample);

NDDSUSERDllExport extern void 
Calculator_addition_OutPluginSupport_print_data(
    const Calculator_addition_Out *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Calculator_addition_OutPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_Out *out,
    const Calculator_addition_Out *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_addition_OutPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_addition_Out *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_addition_OutPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_Out *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_addition_OutPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_Out **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_addition_OutPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_addition_OutPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_addition_OutPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_addition_OutPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_addition_Out * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_addition_OutPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_addition_OutPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_addition_OutPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_addition_Out *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_addition_OutPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_Out * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_addition_OutPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_Out ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_addition_OutPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_Out *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Calculator_addition_ResultPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Calculator_addition_ResultPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_addition_ResultPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_addition_ResultPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_addition_ResultPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_addition_Result*
Calculator_addition_ResultPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Calculator_addition_Result*
Calculator_addition_ResultPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_addition_Result*
Calculator_addition_ResultPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_addition_ResultPluginSupport_copy_data(
    Calculator_addition_Result *out,
    const Calculator_addition_Result *in);

NDDSUSERDllExport extern void 
Calculator_addition_ResultPluginSupport_destroy_data_w_params(
    Calculator_addition_Result *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Calculator_addition_ResultPluginSupport_destroy_data_ex(
    Calculator_addition_Result *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_addition_ResultPluginSupport_destroy_data(
    Calculator_addition_Result *sample);

NDDSUSERDllExport extern void 
Calculator_addition_ResultPluginSupport_print_data(
    const Calculator_addition_Result *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Calculator_addition_ResultPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_Result *out,
    const Calculator_addition_Result *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_addition_ResultPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_addition_Result *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_addition_ResultPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_Result *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_addition_ResultPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_Result **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_addition_ResultPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_addition_ResultPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_addition_ResultPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_addition_ResultPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_addition_Result * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_addition_ResultPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_addition_ResultPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_addition_ResultPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_addition_Result *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_addition_ResultPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_Result * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_addition_ResultPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_Result ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_addition_ResultPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_addition_Result *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Calculator_subtraction_InPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Calculator_subtraction_InPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_subtraction_InPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_subtraction_InPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_subtraction_InPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_subtraction_In*
Calculator_subtraction_InPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Calculator_subtraction_In*
Calculator_subtraction_InPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_subtraction_In*
Calculator_subtraction_InPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_InPluginSupport_copy_data(
    Calculator_subtraction_In *out,
    const Calculator_subtraction_In *in);

NDDSUSERDllExport extern void 
Calculator_subtraction_InPluginSupport_destroy_data_w_params(
    Calculator_subtraction_In *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Calculator_subtraction_InPluginSupport_destroy_data_ex(
    Calculator_subtraction_In *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_subtraction_InPluginSupport_destroy_data(
    Calculator_subtraction_In *sample);

NDDSUSERDllExport extern void 
Calculator_subtraction_InPluginSupport_print_data(
    const Calculator_subtraction_In *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_InPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_In *out,
    const Calculator_subtraction_In *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_InPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_subtraction_In *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_InPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_In *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_InPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_In **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_subtraction_InPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_subtraction_InPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_subtraction_InPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_subtraction_InPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_subtraction_In * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_subtraction_InPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_subtraction_InPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_InPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_subtraction_In *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_InPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_In * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_InPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_In ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_subtraction_InPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_In *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Calculator_subtraction_OutPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Calculator_subtraction_OutPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_subtraction_OutPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_subtraction_OutPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_subtraction_OutPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_subtraction_Out*
Calculator_subtraction_OutPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Calculator_subtraction_Out*
Calculator_subtraction_OutPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_subtraction_Out*
Calculator_subtraction_OutPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_OutPluginSupport_copy_data(
    Calculator_subtraction_Out *out,
    const Calculator_subtraction_Out *in);

NDDSUSERDllExport extern void 
Calculator_subtraction_OutPluginSupport_destroy_data_w_params(
    Calculator_subtraction_Out *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Calculator_subtraction_OutPluginSupport_destroy_data_ex(
    Calculator_subtraction_Out *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_subtraction_OutPluginSupport_destroy_data(
    Calculator_subtraction_Out *sample);

NDDSUSERDllExport extern void 
Calculator_subtraction_OutPluginSupport_print_data(
    const Calculator_subtraction_Out *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_OutPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_Out *out,
    const Calculator_subtraction_Out *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_OutPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_subtraction_Out *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_OutPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_Out *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_OutPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_Out **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_subtraction_OutPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_subtraction_OutPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_subtraction_OutPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_subtraction_OutPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_subtraction_Out * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_subtraction_OutPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_subtraction_OutPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_OutPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_subtraction_Out *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_OutPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_Out * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_OutPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_Out ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_subtraction_OutPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_Out *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Calculator_subtraction_ResultPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Calculator_subtraction_ResultPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_subtraction_ResultPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_subtraction_ResultPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_subtraction_ResultPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_subtraction_Result*
Calculator_subtraction_ResultPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Calculator_subtraction_Result*
Calculator_subtraction_ResultPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_subtraction_Result*
Calculator_subtraction_ResultPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_ResultPluginSupport_copy_data(
    Calculator_subtraction_Result *out,
    const Calculator_subtraction_Result *in);

NDDSUSERDllExport extern void 
Calculator_subtraction_ResultPluginSupport_destroy_data_w_params(
    Calculator_subtraction_Result *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Calculator_subtraction_ResultPluginSupport_destroy_data_ex(
    Calculator_subtraction_Result *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_subtraction_ResultPluginSupport_destroy_data(
    Calculator_subtraction_Result *sample);

NDDSUSERDllExport extern void 
Calculator_subtraction_ResultPluginSupport_print_data(
    const Calculator_subtraction_Result *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_ResultPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_Result *out,
    const Calculator_subtraction_Result *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_ResultPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_subtraction_Result *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_ResultPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_Result *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_ResultPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_Result **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_subtraction_ResultPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_subtraction_ResultPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_subtraction_ResultPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_subtraction_ResultPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_subtraction_Result * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_subtraction_ResultPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_subtraction_ResultPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_ResultPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_subtraction_Result *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_ResultPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_Result * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_subtraction_ResultPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_Result ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_subtraction_ResultPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_subtraction_Result *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Calculator_CallPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Calculator_CallPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_CallPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_CallPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_CallPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_Call*
Calculator_CallPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Calculator_Call*
Calculator_CallPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_Call*
Calculator_CallPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_CallPluginSupport_copy_data(
    Calculator_Call *out,
    const Calculator_Call *in);

NDDSUSERDllExport extern void 
Calculator_CallPluginSupport_destroy_data_w_params(
    Calculator_Call *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Calculator_CallPluginSupport_destroy_data_ex(
    Calculator_Call *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_CallPluginSupport_destroy_data(
    Calculator_Call *sample);

NDDSUSERDllExport extern void 
Calculator_CallPluginSupport_print_data(
    const Calculator_Call *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Calculator_CallPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Call *out,
    const Calculator_Call *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_CallPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_Call *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_CallPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Call *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_CallPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Call **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_CallPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_CallPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_CallPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_CallPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_Call * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_CallPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_CallPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_CallPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_Call *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_CallPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Call * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_CallPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Call ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_CallPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Call *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Calculator_RequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Calculator_RequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_RequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_RequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_RequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_Request*
Calculator_RequestPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Calculator_Request*
Calculator_RequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_Request*
Calculator_RequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_RequestPluginSupport_copy_data(
    Calculator_Request *out,
    const Calculator_Request *in);

NDDSUSERDllExport extern void 
Calculator_RequestPluginSupport_destroy_data_w_params(
    Calculator_Request *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Calculator_RequestPluginSupport_destroy_data_ex(
    Calculator_Request *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_RequestPluginSupport_destroy_data(
    Calculator_Request *sample);

NDDSUSERDllExport extern void 
Calculator_RequestPluginSupport_print_data(
    const Calculator_Request *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Calculator_RequestPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Calculator_RequestPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Calculator_RequestPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Calculator_RequestPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
Calculator_RequestPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Request *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
Calculator_RequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Request *out,
    const Calculator_Request *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_RequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_Request *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_RequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Request *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_RequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Request **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_RequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_RequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_RequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_RequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_Request * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_RequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_RequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_RequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_Request *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_RequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Request * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_RequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Request ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_RequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Request *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Calculator_RequestPlugin_new(void);

NDDSUSERDllExport extern void
Calculator_RequestPlugin_delete(struct PRESTypePlugin *);


#define Calculator_ReturnPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Calculator_ReturnPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_ReturnPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_ReturnPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_ReturnPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_Return*
Calculator_ReturnPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Calculator_Return*
Calculator_ReturnPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_Return*
Calculator_ReturnPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_ReturnPluginSupport_copy_data(
    Calculator_Return *out,
    const Calculator_Return *in);

NDDSUSERDllExport extern void 
Calculator_ReturnPluginSupport_destroy_data_w_params(
    Calculator_Return *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Calculator_ReturnPluginSupport_destroy_data_ex(
    Calculator_Return *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_ReturnPluginSupport_destroy_data(
    Calculator_Return *sample);

NDDSUSERDllExport extern void 
Calculator_ReturnPluginSupport_print_data(
    const Calculator_Return *sample,
    const char *desc,
    unsigned int indent);

 

NDDSUSERDllExport extern RTIBool 
Calculator_ReturnPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Return *out,
    const Calculator_Return *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_ReturnPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_Return *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_ReturnPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Return *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_ReturnPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Return **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_ReturnPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_ReturnPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_ReturnPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_ReturnPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_Return * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_ReturnPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_ReturnPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_ReturnPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_Return *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_ReturnPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Return * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_ReturnPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Return ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_ReturnPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Return *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);



#define Calculator_ReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define Calculator_ReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define Calculator_ReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define Calculator_ReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define Calculator_ReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Calculator_Reply*
Calculator_ReplyPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern Calculator_Reply*
Calculator_ReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Calculator_Reply*
Calculator_ReplyPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
Calculator_ReplyPluginSupport_copy_data(
    Calculator_Reply *out,
    const Calculator_Reply *in);

NDDSUSERDllExport extern void 
Calculator_ReplyPluginSupport_destroy_data_w_params(
    Calculator_Reply *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
Calculator_ReplyPluginSupport_destroy_data_ex(
    Calculator_Reply *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
Calculator_ReplyPluginSupport_destroy_data(
    Calculator_Reply *sample);

NDDSUSERDllExport extern void 
Calculator_ReplyPluginSupport_print_data(
    const Calculator_Reply *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
Calculator_ReplyPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
Calculator_ReplyPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
Calculator_ReplyPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
Calculator_ReplyPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
Calculator_ReplyPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Reply *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
Calculator_ReplyPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Reply *out,
    const Calculator_Reply *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
Calculator_ReplyPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_Reply *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_ReplyPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Reply *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_ReplyPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Reply **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
Calculator_ReplyPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
Calculator_ReplyPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
Calculator_ReplyPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
Calculator_ReplyPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Calculator_Reply * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
Calculator_ReplyPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
Calculator_ReplyPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
Calculator_ReplyPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Calculator_Reply *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
Calculator_ReplyPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Reply * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
Calculator_ReplyPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Reply ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
Calculator_ReplyPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Calculator_Reply *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
Calculator_ReplyPlugin_new(void);

NDDSUSERDllExport extern void
Calculator_ReplyPlugin_delete(struct PRESTypePlugin *);

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* CalculatorRequestReplyPlugin_540432743_h */
