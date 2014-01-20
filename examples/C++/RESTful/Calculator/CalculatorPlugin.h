
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Calculator.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CalculatorPlugin_1695588693_h
#define CalculatorPlugin_1695588693_h

#include "Calculator.h"




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


namespace Calculator{

#define Calculator_EmptyAddResponse_LAST_MEMBER_ID 0

#define EmptyAddResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EmptyAddResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EmptyAddResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EmptyAddResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define EmptyAddResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EmptyAddResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EmptyAddResponse*
EmptyAddResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EmptyAddResponse*
EmptyAddResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EmptyAddResponsePluginSupport_copy_data(
    EmptyAddResponse *out,
    const EmptyAddResponse *in);

NDDSUSERDllExport extern void 
EmptyAddResponsePluginSupport_destroy_data_ex(
    EmptyAddResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EmptyAddResponsePluginSupport_destroy_data(
    EmptyAddResponse *sample);

NDDSUSERDllExport extern void 
EmptyAddResponsePluginSupport_print_data(
    const EmptyAddResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
EmptyAddResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyAddResponse *out,
    const EmptyAddResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EmptyAddResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EmptyAddResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptyAddResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyAddResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptyAddResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EmptyAddResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EmptyAddResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EmptyAddResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EmptyAddResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EmptyAddResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EmptyAddResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EmptyAddResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EmptyAddResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EmptyAddResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EmptyAddResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptyAddResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyAddResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptyAddResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EmptyAddResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EmptyAddResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EmptyAddResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Calculator_XMLAddResponse_LAST_MEMBER_ID 0

#define XMLAddResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define XMLAddResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define XMLAddResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define XMLAddResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define XMLAddResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define XMLAddResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern XMLAddResponse*
XMLAddResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern XMLAddResponse*
XMLAddResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
XMLAddResponsePluginSupport_copy_data(
    XMLAddResponse *out,
    const XMLAddResponse *in);

NDDSUSERDllExport extern void 
XMLAddResponsePluginSupport_destroy_data_ex(
    XMLAddResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
XMLAddResponsePluginSupport_destroy_data(
    XMLAddResponse *sample);

NDDSUSERDllExport extern void 
XMLAddResponsePluginSupport_print_data(
    const XMLAddResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
XMLAddResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLAddResponse *out,
    const XMLAddResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
XMLAddResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const XMLAddResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
XMLAddResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLAddResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
XMLAddResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    XMLAddResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
XMLAddResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
XMLAddResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
XMLAddResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
XMLAddResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const XMLAddResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
XMLAddResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
XMLAddResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
XMLAddResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const XMLAddResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
XMLAddResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLAddResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
XMLAddResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    XMLAddResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
XMLAddResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    XMLAddResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Calculator_AddResponse_LAST_MEMBER_ID 0

#define AddResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define AddResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define AddResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define AddResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define AddResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define AddResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern AddResponse*
AddResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern AddResponse*
AddResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
AddResponsePluginSupport_copy_data(
    AddResponse *out,
    const AddResponse *in);

NDDSUSERDllExport extern void 
AddResponsePluginSupport_destroy_data_ex(
    AddResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
AddResponsePluginSupport_destroy_data(
    AddResponse *sample);

NDDSUSERDllExport extern void 
AddResponsePluginSupport_print_data(
    const AddResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
AddResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    AddResponse *out,
    const AddResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
AddResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const AddResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AddResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    AddResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AddResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    AddResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
AddResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
AddResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
AddResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
AddResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const AddResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
AddResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
AddResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
AddResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const AddResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
AddResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    AddResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
AddResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    AddResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
AddResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    AddResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Calculator_EmptySubstractResponse_LAST_MEMBER_ID 0

#define EmptySubstractResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EmptySubstractResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EmptySubstractResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EmptySubstractResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define EmptySubstractResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EmptySubstractResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EmptySubstractResponse*
EmptySubstractResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EmptySubstractResponse*
EmptySubstractResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EmptySubstractResponsePluginSupport_copy_data(
    EmptySubstractResponse *out,
    const EmptySubstractResponse *in);

NDDSUSERDllExport extern void 
EmptySubstractResponsePluginSupport_destroy_data_ex(
    EmptySubstractResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EmptySubstractResponsePluginSupport_destroy_data(
    EmptySubstractResponse *sample);

NDDSUSERDllExport extern void 
EmptySubstractResponsePluginSupport_print_data(
    const EmptySubstractResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
EmptySubstractResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptySubstractResponse *out,
    const EmptySubstractResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EmptySubstractResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EmptySubstractResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptySubstractResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptySubstractResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptySubstractResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EmptySubstractResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EmptySubstractResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EmptySubstractResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EmptySubstractResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EmptySubstractResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EmptySubstractResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EmptySubstractResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EmptySubstractResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EmptySubstractResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EmptySubstractResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptySubstractResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptySubstractResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptySubstractResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EmptySubstractResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EmptySubstractResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EmptySubstractResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Calculator_XMLSubstractResponse_LAST_MEMBER_ID 0

#define XMLSubstractResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define XMLSubstractResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define XMLSubstractResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define XMLSubstractResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define XMLSubstractResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define XMLSubstractResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern XMLSubstractResponse*
XMLSubstractResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern XMLSubstractResponse*
XMLSubstractResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
XMLSubstractResponsePluginSupport_copy_data(
    XMLSubstractResponse *out,
    const XMLSubstractResponse *in);

NDDSUSERDllExport extern void 
XMLSubstractResponsePluginSupport_destroy_data_ex(
    XMLSubstractResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
XMLSubstractResponsePluginSupport_destroy_data(
    XMLSubstractResponse *sample);

NDDSUSERDllExport extern void 
XMLSubstractResponsePluginSupport_print_data(
    const XMLSubstractResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
XMLSubstractResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLSubstractResponse *out,
    const XMLSubstractResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
XMLSubstractResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const XMLSubstractResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
XMLSubstractResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLSubstractResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
XMLSubstractResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    XMLSubstractResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
XMLSubstractResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
XMLSubstractResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
XMLSubstractResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
XMLSubstractResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const XMLSubstractResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
XMLSubstractResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
XMLSubstractResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
XMLSubstractResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const XMLSubstractResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
XMLSubstractResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLSubstractResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
XMLSubstractResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    XMLSubstractResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
XMLSubstractResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    XMLSubstractResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Calculator_SubstractResponse_LAST_MEMBER_ID 0

#define SubstractResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define SubstractResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define SubstractResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SubstractResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SubstractResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SubstractResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SubstractResponse*
SubstractResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SubstractResponse*
SubstractResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SubstractResponsePluginSupport_copy_data(
    SubstractResponse *out,
    const SubstractResponse *in);

NDDSUSERDllExport extern void 
SubstractResponsePluginSupport_destroy_data_ex(
    SubstractResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SubstractResponsePluginSupport_destroy_data(
    SubstractResponse *sample);

NDDSUSERDllExport extern void 
SubstractResponsePluginSupport_print_data(
    const SubstractResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
SubstractResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SubstractResponse *out,
    const SubstractResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SubstractResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SubstractResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SubstractResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SubstractResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SubstractResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SubstractResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SubstractResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SubstractResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SubstractResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SubstractResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SubstractResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SubstractResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SubstractResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SubstractResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SubstractResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SubstractResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SubstractResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SubstractResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SubstractResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SubstractResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SubstractResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Calculator_EmptyMultiplyResponse_LAST_MEMBER_ID 0

#define EmptyMultiplyResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EmptyMultiplyResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EmptyMultiplyResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EmptyMultiplyResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define EmptyMultiplyResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EmptyMultiplyResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EmptyMultiplyResponse*
EmptyMultiplyResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EmptyMultiplyResponse*
EmptyMultiplyResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EmptyMultiplyResponsePluginSupport_copy_data(
    EmptyMultiplyResponse *out,
    const EmptyMultiplyResponse *in);

NDDSUSERDllExport extern void 
EmptyMultiplyResponsePluginSupport_destroy_data_ex(
    EmptyMultiplyResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EmptyMultiplyResponsePluginSupport_destroy_data(
    EmptyMultiplyResponse *sample);

NDDSUSERDllExport extern void 
EmptyMultiplyResponsePluginSupport_print_data(
    const EmptyMultiplyResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
EmptyMultiplyResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyMultiplyResponse *out,
    const EmptyMultiplyResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EmptyMultiplyResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EmptyMultiplyResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptyMultiplyResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyMultiplyResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptyMultiplyResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EmptyMultiplyResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EmptyMultiplyResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EmptyMultiplyResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EmptyMultiplyResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EmptyMultiplyResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EmptyMultiplyResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EmptyMultiplyResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EmptyMultiplyResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EmptyMultiplyResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EmptyMultiplyResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptyMultiplyResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyMultiplyResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptyMultiplyResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EmptyMultiplyResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EmptyMultiplyResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EmptyMultiplyResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Calculator_XMLMultiplyResponse_LAST_MEMBER_ID 0

#define XMLMultiplyResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define XMLMultiplyResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define XMLMultiplyResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define XMLMultiplyResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define XMLMultiplyResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define XMLMultiplyResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern XMLMultiplyResponse*
XMLMultiplyResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern XMLMultiplyResponse*
XMLMultiplyResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
XMLMultiplyResponsePluginSupport_copy_data(
    XMLMultiplyResponse *out,
    const XMLMultiplyResponse *in);

NDDSUSERDllExport extern void 
XMLMultiplyResponsePluginSupport_destroy_data_ex(
    XMLMultiplyResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
XMLMultiplyResponsePluginSupport_destroy_data(
    XMLMultiplyResponse *sample);

NDDSUSERDllExport extern void 
XMLMultiplyResponsePluginSupport_print_data(
    const XMLMultiplyResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
XMLMultiplyResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLMultiplyResponse *out,
    const XMLMultiplyResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
XMLMultiplyResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const XMLMultiplyResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
XMLMultiplyResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLMultiplyResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
XMLMultiplyResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    XMLMultiplyResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
XMLMultiplyResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
XMLMultiplyResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
XMLMultiplyResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
XMLMultiplyResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const XMLMultiplyResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
XMLMultiplyResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
XMLMultiplyResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
XMLMultiplyResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const XMLMultiplyResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
XMLMultiplyResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLMultiplyResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
XMLMultiplyResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    XMLMultiplyResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
XMLMultiplyResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    XMLMultiplyResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Calculator_MultiplyResponse_LAST_MEMBER_ID 0

#define MultiplyResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define MultiplyResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define MultiplyResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MultiplyResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define MultiplyResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MultiplyResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MultiplyResponse*
MultiplyResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MultiplyResponse*
MultiplyResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MultiplyResponsePluginSupport_copy_data(
    MultiplyResponse *out,
    const MultiplyResponse *in);

NDDSUSERDllExport extern void 
MultiplyResponsePluginSupport_destroy_data_ex(
    MultiplyResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MultiplyResponsePluginSupport_destroy_data(
    MultiplyResponse *sample);

NDDSUSERDllExport extern void 
MultiplyResponsePluginSupport_print_data(
    const MultiplyResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
MultiplyResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MultiplyResponse *out,
    const MultiplyResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MultiplyResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MultiplyResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MultiplyResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MultiplyResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MultiplyResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MultiplyResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MultiplyResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MultiplyResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MultiplyResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MultiplyResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MultiplyResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MultiplyResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MultiplyResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MultiplyResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MultiplyResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MultiplyResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MultiplyResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MultiplyResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MultiplyResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MultiplyResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MultiplyResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Calculator_EmptyDivideResponse_LAST_MEMBER_ID 0

#define EmptyDivideResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EmptyDivideResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EmptyDivideResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EmptyDivideResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define EmptyDivideResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EmptyDivideResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EmptyDivideResponse*
EmptyDivideResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EmptyDivideResponse*
EmptyDivideResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EmptyDivideResponsePluginSupport_copy_data(
    EmptyDivideResponse *out,
    const EmptyDivideResponse *in);

NDDSUSERDllExport extern void 
EmptyDivideResponsePluginSupport_destroy_data_ex(
    EmptyDivideResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EmptyDivideResponsePluginSupport_destroy_data(
    EmptyDivideResponse *sample);

NDDSUSERDllExport extern void 
EmptyDivideResponsePluginSupport_print_data(
    const EmptyDivideResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
EmptyDivideResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyDivideResponse *out,
    const EmptyDivideResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EmptyDivideResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EmptyDivideResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptyDivideResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyDivideResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptyDivideResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EmptyDivideResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EmptyDivideResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EmptyDivideResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EmptyDivideResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EmptyDivideResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EmptyDivideResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EmptyDivideResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EmptyDivideResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EmptyDivideResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EmptyDivideResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptyDivideResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyDivideResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptyDivideResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EmptyDivideResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EmptyDivideResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EmptyDivideResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Calculator_XMLDivideResponse_LAST_MEMBER_ID 0

#define XMLDivideResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define XMLDivideResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define XMLDivideResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define XMLDivideResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define XMLDivideResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define XMLDivideResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern XMLDivideResponse*
XMLDivideResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern XMLDivideResponse*
XMLDivideResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
XMLDivideResponsePluginSupport_copy_data(
    XMLDivideResponse *out,
    const XMLDivideResponse *in);

NDDSUSERDllExport extern void 
XMLDivideResponsePluginSupport_destroy_data_ex(
    XMLDivideResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
XMLDivideResponsePluginSupport_destroy_data(
    XMLDivideResponse *sample);

NDDSUSERDllExport extern void 
XMLDivideResponsePluginSupport_print_data(
    const XMLDivideResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
XMLDivideResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLDivideResponse *out,
    const XMLDivideResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
XMLDivideResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const XMLDivideResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
XMLDivideResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLDivideResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
XMLDivideResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    XMLDivideResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
XMLDivideResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
XMLDivideResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
XMLDivideResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
XMLDivideResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const XMLDivideResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
XMLDivideResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
XMLDivideResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
XMLDivideResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const XMLDivideResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
XMLDivideResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLDivideResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
XMLDivideResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    XMLDivideResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
XMLDivideResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    XMLDivideResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Calculator_DivideResponse_LAST_MEMBER_ID 0

#define DivideResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define DivideResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define DivideResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DivideResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DivideResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DivideResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DivideResponse*
DivideResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DivideResponse*
DivideResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DivideResponsePluginSupport_copy_data(
    DivideResponse *out,
    const DivideResponse *in);

NDDSUSERDllExport extern void 
DivideResponsePluginSupport_destroy_data_ex(
    DivideResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DivideResponsePluginSupport_destroy_data(
    DivideResponse *sample);

NDDSUSERDllExport extern void 
DivideResponsePluginSupport_print_data(
    const DivideResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
DivideResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DivideResponse *out,
    const DivideResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DivideResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DivideResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DivideResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DivideResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DivideResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DivideResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DivideResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DivideResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DivideResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DivideResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DivideResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DivideResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DivideResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DivideResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DivideResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DivideResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DivideResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DivideResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DivideResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
DivideResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DivideResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


} /* namespace Calculator */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* CalculatorPlugin_1695588693_h */
