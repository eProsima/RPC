
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Bank.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BankPlugin_1795593968_h
#define BankPlugin_1795593968_h

#include "Bank.h"




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


namespace Bank{

#define Bank_account_accountNumber_LAST_MEMBER_ID 0

#define account_accountNumberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define account_accountNumberPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define account_accountNumberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define account_accountNumberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define account_accountNumberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define account_accountNumberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern account_accountNumber*
account_accountNumberPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern account_accountNumber*
account_accountNumberPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
account_accountNumberPluginSupport_copy_data(
    account_accountNumber *out,
    const account_accountNumber *in);

NDDSUSERDllExport extern void 
account_accountNumberPluginSupport_destroy_data_ex(
    account_accountNumber *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
account_accountNumberPluginSupport_destroy_data(
    account_accountNumber *sample);

NDDSUSERDllExport extern void 
account_accountNumberPluginSupport_print_data(
    const account_accountNumber *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
account_accountNumberPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    account_accountNumber *out,
    const account_accountNumber *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
account_accountNumberPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const account_accountNumber *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
account_accountNumberPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    account_accountNumber *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
account_accountNumberPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    account_accountNumber **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
account_accountNumberPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
account_accountNumberPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
account_accountNumberPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
account_accountNumberPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const account_accountNumber * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
account_accountNumberPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
account_accountNumberPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
account_accountNumberPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const account_accountNumber *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
account_accountNumberPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    account_accountNumber * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
account_accountNumberPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    account_accountNumber ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
account_accountNumberPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    account_accountNumber *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Bank_EmptyGetAccountDetailsResponse_LAST_MEMBER_ID 0

#define EmptyGetAccountDetailsResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define EmptyGetAccountDetailsResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define EmptyGetAccountDetailsResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define EmptyGetAccountDetailsResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define EmptyGetAccountDetailsResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define EmptyGetAccountDetailsResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern EmptyGetAccountDetailsResponse*
EmptyGetAccountDetailsResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern EmptyGetAccountDetailsResponse*
EmptyGetAccountDetailsResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
EmptyGetAccountDetailsResponsePluginSupport_copy_data(
    EmptyGetAccountDetailsResponse *out,
    const EmptyGetAccountDetailsResponse *in);

NDDSUSERDllExport extern void 
EmptyGetAccountDetailsResponsePluginSupport_destroy_data_ex(
    EmptyGetAccountDetailsResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
EmptyGetAccountDetailsResponsePluginSupport_destroy_data(
    EmptyGetAccountDetailsResponse *sample);

NDDSUSERDllExport extern void 
EmptyGetAccountDetailsResponsePluginSupport_print_data(
    const EmptyGetAccountDetailsResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
EmptyGetAccountDetailsResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyGetAccountDetailsResponse *out,
    const EmptyGetAccountDetailsResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
EmptyGetAccountDetailsResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const EmptyGetAccountDetailsResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptyGetAccountDetailsResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyGetAccountDetailsResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptyGetAccountDetailsResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    EmptyGetAccountDetailsResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
EmptyGetAccountDetailsResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
EmptyGetAccountDetailsResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
EmptyGetAccountDetailsResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
EmptyGetAccountDetailsResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const EmptyGetAccountDetailsResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
EmptyGetAccountDetailsResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
EmptyGetAccountDetailsResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
EmptyGetAccountDetailsResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const EmptyGetAccountDetailsResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
EmptyGetAccountDetailsResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    EmptyGetAccountDetailsResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
EmptyGetAccountDetailsResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    EmptyGetAccountDetailsResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
EmptyGetAccountDetailsResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    EmptyGetAccountDetailsResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Bank_XMLGetAccountDetailsResponse_LAST_MEMBER_ID 0

#define XMLGetAccountDetailsResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define XMLGetAccountDetailsResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define XMLGetAccountDetailsResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define XMLGetAccountDetailsResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define XMLGetAccountDetailsResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define XMLGetAccountDetailsResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern XMLGetAccountDetailsResponse*
XMLGetAccountDetailsResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern XMLGetAccountDetailsResponse*
XMLGetAccountDetailsResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
XMLGetAccountDetailsResponsePluginSupport_copy_data(
    XMLGetAccountDetailsResponse *out,
    const XMLGetAccountDetailsResponse *in);

NDDSUSERDllExport extern void 
XMLGetAccountDetailsResponsePluginSupport_destroy_data_ex(
    XMLGetAccountDetailsResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
XMLGetAccountDetailsResponsePluginSupport_destroy_data(
    XMLGetAccountDetailsResponse *sample);

NDDSUSERDllExport extern void 
XMLGetAccountDetailsResponsePluginSupport_print_data(
    const XMLGetAccountDetailsResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
XMLGetAccountDetailsResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLGetAccountDetailsResponse *out,
    const XMLGetAccountDetailsResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
XMLGetAccountDetailsResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const XMLGetAccountDetailsResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
XMLGetAccountDetailsResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLGetAccountDetailsResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
XMLGetAccountDetailsResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    XMLGetAccountDetailsResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
XMLGetAccountDetailsResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
XMLGetAccountDetailsResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
XMLGetAccountDetailsResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
XMLGetAccountDetailsResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const XMLGetAccountDetailsResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
XMLGetAccountDetailsResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
XMLGetAccountDetailsResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
XMLGetAccountDetailsResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const XMLGetAccountDetailsResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
XMLGetAccountDetailsResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    XMLGetAccountDetailsResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
XMLGetAccountDetailsResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    XMLGetAccountDetailsResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
XMLGetAccountDetailsResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    XMLGetAccountDetailsResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Bank_GetAccountDetailsResponse_LAST_MEMBER_ID 0

#define GetAccountDetailsResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define GetAccountDetailsResponsePlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define GetAccountDetailsResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define GetAccountDetailsResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define GetAccountDetailsResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define GetAccountDetailsResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern GetAccountDetailsResponse*
GetAccountDetailsResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GetAccountDetailsResponse*
GetAccountDetailsResponsePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
GetAccountDetailsResponsePluginSupport_copy_data(
    GetAccountDetailsResponse *out,
    const GetAccountDetailsResponse *in);

NDDSUSERDllExport extern void 
GetAccountDetailsResponsePluginSupport_destroy_data_ex(
    GetAccountDetailsResponse *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GetAccountDetailsResponsePluginSupport_destroy_data(
    GetAccountDetailsResponse *sample);

NDDSUSERDllExport extern void 
GetAccountDetailsResponsePluginSupport_print_data(
    const GetAccountDetailsResponse *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
GetAccountDetailsResponsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GetAccountDetailsResponse *out,
    const GetAccountDetailsResponse *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
GetAccountDetailsResponsePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GetAccountDetailsResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GetAccountDetailsResponsePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GetAccountDetailsResponse *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GetAccountDetailsResponsePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    GetAccountDetailsResponse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
GetAccountDetailsResponsePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
GetAccountDetailsResponsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
GetAccountDetailsResponsePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
GetAccountDetailsResponsePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GetAccountDetailsResponse * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
GetAccountDetailsResponsePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
GetAccountDetailsResponsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
GetAccountDetailsResponsePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GetAccountDetailsResponse *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GetAccountDetailsResponsePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GetAccountDetailsResponse * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GetAccountDetailsResponsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    GetAccountDetailsResponse ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
GetAccountDetailsResponsePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GetAccountDetailsResponse *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


#define Bank_GetAccountDetailsRequest_LAST_MEMBER_ID 0

#define GetAccountDetailsRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define GetAccountDetailsRequestPlugin_return_sample PRESTypePluginDefaultEndpointData_returnSample 
#define GetAccountDetailsRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define GetAccountDetailsRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define GetAccountDetailsRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define GetAccountDetailsRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern GetAccountDetailsRequest*
GetAccountDetailsRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GetAccountDetailsRequest*
GetAccountDetailsRequestPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
GetAccountDetailsRequestPluginSupport_copy_data(
    GetAccountDetailsRequest *out,
    const GetAccountDetailsRequest *in);

NDDSUSERDllExport extern void 
GetAccountDetailsRequestPluginSupport_destroy_data_ex(
    GetAccountDetailsRequest *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GetAccountDetailsRequestPluginSupport_destroy_data(
    GetAccountDetailsRequest *sample);

NDDSUSERDllExport extern void 
GetAccountDetailsRequestPluginSupport_print_data(
    const GetAccountDetailsRequest *sample,
    const char *desc,
    unsigned int indent);



NDDSUSERDllExport extern RTIBool 
GetAccountDetailsRequestPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GetAccountDetailsRequest *out,
    const GetAccountDetailsRequest *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
GetAccountDetailsRequestPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GetAccountDetailsRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GetAccountDetailsRequestPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GetAccountDetailsRequest *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GetAccountDetailsRequestPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    GetAccountDetailsRequest **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
GetAccountDetailsRequestPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
GetAccountDetailsRequestPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
GetAccountDetailsRequestPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
GetAccountDetailsRequestPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GetAccountDetailsRequest * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
GetAccountDetailsRequestPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
GetAccountDetailsRequestPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
GetAccountDetailsRequestPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GetAccountDetailsRequest *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GetAccountDetailsRequestPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GetAccountDetailsRequest * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GetAccountDetailsRequestPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    GetAccountDetailsRequest ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
GetAccountDetailsRequestPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GetAccountDetailsRequest *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);


} /* namespace Bank */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* BankPlugin_1795593968_h */
