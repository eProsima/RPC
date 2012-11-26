
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MessageHeader.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MessageHeaderPlugin_953112540_h
#define MessageHeaderPlugin_953112540_h

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

 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IdentificationPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IdentificationPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
IdentificationPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IdentificationPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

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

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IdentificationPlugin_new(void);

NDDSUSERDllExport extern void
IdentificationPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * RequestHeader.
 *
 * By default, this type is struct RequestHeader
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct RequestHeader)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct RequestHeader, the
 * following restriction applies: the key of struct
 * RequestHeader must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct RequestHeader.
*/
typedef  struct RequestHeader RequestHeaderKeyHolder;


#define RequestHeaderPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define RequestHeaderPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define RequestHeaderPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RequestHeaderPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define RequestHeaderPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define RequestHeaderPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

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


NDDSUSERDllExport extern RequestHeader*
RequestHeaderPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RequestHeader*
RequestHeaderPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
RequestHeaderPluginSupport_destroy_key_ex(
    RequestHeaderKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RequestHeaderPluginSupport_destroy_key(
    RequestHeaderKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RequestHeaderPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RequestHeaderPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
RequestHeaderPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RequestHeaderPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

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

 
NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeaderKeyHolder *key, 
    const RequestHeader *instance);

NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RequestHeader *instance, 
    const RequestHeaderKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RequestHeader *instance);

NDDSUSERDllExport extern RTIBool 
RequestHeaderPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RequestHeaderPlugin_new(void);

NDDSUSERDllExport extern void
RequestHeaderPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * ReplyHeader.
 *
 * By default, this type is struct ReplyHeader
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct ReplyHeader)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct ReplyHeader, the
 * following restriction applies: the key of struct
 * ReplyHeader must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct ReplyHeader.
*/
typedef  struct ReplyHeader ReplyHeaderKeyHolder;


#define ReplyHeaderPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define ReplyHeaderPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define ReplyHeaderPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ReplyHeaderPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ReplyHeaderPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ReplyHeaderPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

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


NDDSUSERDllExport extern ReplyHeader*
ReplyHeaderPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ReplyHeader*
ReplyHeaderPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ReplyHeaderPluginSupport_destroy_key_ex(
    ReplyHeaderKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ReplyHeaderPluginSupport_destroy_key(
    ReplyHeaderKeyHolder *key);
 

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ReplyHeaderPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ReplyHeaderPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ReplyHeaderPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ReplyHeaderPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

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

 
NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeaderKeyHolder *key, 
    const ReplyHeader *instance);

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ReplyHeader *instance, 
    const ReplyHeaderKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ReplyHeader *instance);

NDDSUSERDllExport extern RTIBool 
ReplyHeaderPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ReplyHeaderPlugin_new(void);

NDDSUSERDllExport extern void
ReplyHeaderPlugin_delete(struct PRESTypePlugin *);

#ifdef __cplusplus
}
#endif

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* MessageHeaderPlugin_953112540_h */
