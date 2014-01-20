
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MessageHeader.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MessageHeaderPlugin_953112507_h
#define MessageHeaderPlugin_953112507_h

#include "MessageHeader.h"




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

#define Identification_LAST_MEMBER_ID 0

#define IdentificationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define IdentificationPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define IdentificationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IdentificationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define IdentificationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IdentificationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern Identification*
IdentificationPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern Identification*
IdentificationPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IdentificationPluginSupport_copy_data(
    Identification *out,
    const Identification *in);

NDDSUSERDllExport extern void 
IdentificationPluginSupport_destroy_data_ex(
    Identification *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IdentificationPluginSupport_destroy_data(
    Identification *sample);

NDDSUSERDllExport extern void 
IdentificationPluginSupport_print_data(
    const Identification *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    Identification *out,
    const Identification *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Identification *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Identification *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    Identification **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
IdentificationPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
IdentificationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IdentificationPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
IdentificationPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Identification * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
IdentificationPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IdentificationPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Identification *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Identification * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
IdentificationPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    Identification ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
IdentificationPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Identification *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define RequestHeader_LAST_MEMBER_ID 0

#define RequestHeaderPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define RequestHeaderPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define RequestHeaderPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RequestHeaderPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define RequestHeaderPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RequestHeaderPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RequestHeader*
RequestHeaderPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RequestHeader*
RequestHeaderPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RequestHeaderPluginSupport_copy_data(
    RequestHeader *out,
    const RequestHeader *in);

NDDSUSERDllExport extern void 
RequestHeaderPluginSupport_destroy_data_ex(
    RequestHeader *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RequestHeaderPluginSupport_destroy_data(
    RequestHeader *sample);

NDDSUSERDllExport extern void 
RequestHeaderPluginSupport_print_data(
    const RequestHeader *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeader *out,
    const RequestHeader *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RequestHeader *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeader *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeader **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
RequestHeaderPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RequestHeaderPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RequestHeaderPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RequestHeaderPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RequestHeader * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
RequestHeaderPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RequestHeaderPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RequestHeader *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeader * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeader ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
RequestHeaderPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeader *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define ReplyHeader_LAST_MEMBER_ID 0

#define ReplyHeaderPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define ReplyHeaderPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define ReplyHeaderPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ReplyHeaderPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ReplyHeaderPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ReplyHeaderPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ReplyHeader*
ReplyHeaderPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ReplyHeader*
ReplyHeaderPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPluginSupport_copy_data(
    ReplyHeader *out,
    const ReplyHeader *in);

NDDSUSERDllExport extern void 
ReplyHeaderPluginSupport_destroy_data_ex(
    ReplyHeader *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ReplyHeaderPluginSupport_destroy_data(
    ReplyHeader *sample);

NDDSUSERDllExport extern void 
ReplyHeaderPluginSupport_print_data(
    const ReplyHeader *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeader *out,
    const ReplyHeader *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ReplyHeader *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeader *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeader **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ReplyHeaderPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ReplyHeaderPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ReplyHeaderPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ReplyHeaderPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ReplyHeader * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ReplyHeaderPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ReplyHeaderPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ReplyHeader *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeader * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeader ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ReplyHeaderPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeader *sample,
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

#endif /* MessageHeaderPlugin_953112507_h */
