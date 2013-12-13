
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Bank.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
        #ifndef dds_c_log_impl_h              
            #include "dds_c/dds_c_log_impl.h"                                
        #endif        
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
    
    #ifndef cdr_type_h
        #include "cdr/cdr_type.h"
    #endif    

    #ifndef osapi_heap_h
        #include "osapi/osapi_heap.h" 
    #endif
#else
    #include "ndds_standalone_type.h"
#endif



#include "Bank.h"

/* ========================================================================= */
const char *account_accountNumberTYPENAME = "account_accountNumber";

DDS_TypeCode* account_accountNumber_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member account_accountNumber_g_tc_members[1]=
    {
        {
            (char *)"accountNumber_",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode account_accountNumber_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"account_accountNumber", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        account_accountNumber_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for account_accountNumber*/

    if (is_initialized) {
        return &account_accountNumber_g_tc;
    }


    account_accountNumber_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &account_accountNumber_g_tc;
}


RTIBool account_accountNumber_initialize(
    account_accountNumber* sample) {
  return ::account_accountNumber_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool account_accountNumber_initialize_ex(
    account_accountNumber* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->accountNumber_)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void account_accountNumber_finalize(
    account_accountNumber* sample)
{
    ::account_accountNumber_finalize_ex(sample,RTI_TRUE);
}
        
void account_accountNumber_finalize_ex(
    account_accountNumber* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



}

RTIBool account_accountNumber_copy(
    account_accountNumber* dst,
    const account_accountNumber* src)
{        

    if (!RTICdrType_copyLong(
        &dst->accountNumber_, &src->accountNumber_)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'account_accountNumber' sequence class.
 */
#define T account_accountNumber
#define TSeq account_accountNumberSeq
#define T_initialize_ex ::account_accountNumber_initialize_ex
#define T_finalize_ex   ::account_accountNumber_finalize_ex
#define T_copy       ::account_accountNumber_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_ex
#undef T_initialize_ex
#undef TSeq
#undef T

/* ========================================================================= */
const char *XMLGetAccountDetailsResponseTYPENAME = "XMLGetAccountDetailsResponse";

DDS_TypeCode* XMLGetAccountDetailsResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode XMLGetAccountDetailsResponse_g_tc_xmlRepresentation_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member XMLGetAccountDetailsResponse_g_tc_members[2]=
    {
        {
            (char *)"status",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"xmlRepresentation",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode XMLGetAccountDetailsResponse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"XMLGetAccountDetailsResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        XMLGetAccountDetailsResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for XMLGetAccountDetailsResponse*/

    if (is_initialized) {
        return &XMLGetAccountDetailsResponse_g_tc;
    }


    XMLGetAccountDetailsResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    XMLGetAccountDetailsResponse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&XMLGetAccountDetailsResponse_g_tc_xmlRepresentation_string;

    is_initialized = RTI_TRUE;

    return &XMLGetAccountDetailsResponse_g_tc;
}


RTIBool XMLGetAccountDetailsResponse_initialize(
    XMLGetAccountDetailsResponse* sample) {
  return ::XMLGetAccountDetailsResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool XMLGetAccountDetailsResponse_initialize_ex(
    XMLGetAccountDetailsResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->status)) {
        return RTI_FALSE;
    }                
            

    if (allocateMemory) {
        sample->xmlRepresentation = DDS_String_alloc((255));
        if (sample->xmlRepresentation == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->xmlRepresentation != NULL) { 
            sample->xmlRepresentation[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void XMLGetAccountDetailsResponse_finalize(
    XMLGetAccountDetailsResponse* sample)
{
    ::XMLGetAccountDetailsResponse_finalize_ex(sample,RTI_TRUE);
}
        
void XMLGetAccountDetailsResponse_finalize_ex(
    XMLGetAccountDetailsResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



    DDS_String_free(sample->xmlRepresentation);                
            

}

RTIBool XMLGetAccountDetailsResponse_copy(
    XMLGetAccountDetailsResponse* dst,
    const XMLGetAccountDetailsResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->xmlRepresentation, src->xmlRepresentation, (255) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'XMLGetAccountDetailsResponse' sequence class.
 */
#define T XMLGetAccountDetailsResponse
#define TSeq XMLGetAccountDetailsResponseSeq
#define T_initialize_ex ::XMLGetAccountDetailsResponse_initialize_ex
#define T_finalize_ex   ::XMLGetAccountDetailsResponse_finalize_ex
#define T_copy       ::XMLGetAccountDetailsResponse_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_ex
#undef T_initialize_ex
#undef TSeq
#undef T

/* ========================================================================= */
const char *GetAccountDetailsResponseTYPENAME = "GetAccountDetailsResponse";

DDS_TypeCode* GetAccountDetailsResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member GetAccountDetailsResponse_g_tc_members[1]=
    {
        {
            (char *)"xmlGetAccountDetailsResponse",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            1, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode GetAccountDetailsResponse_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Default index */
        (char *)"GetAccountDetailsResponse", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        GetAccountDetailsResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for GetAccountDetailsResponse*/

    if (is_initialized) {
        return &GetAccountDetailsResponse_g_tc;
    }


    GetAccountDetailsResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)XMLGetAccountDetailsResponse_get_typecode();

    GetAccountDetailsResponse_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &GetAccountDetailsResponse_g_tc;
}

DDS_UnsignedLong GetAccountDetailsResponse_getDefaultDiscriminator()
{

    DDS_UnsignedLong tmp = 1;
    
    if (tmp > 1) tmp = 1;
    
    return tmp;

}
        

RTIBool GetAccountDetailsResponse_initialize(
    GetAccountDetailsResponse* sample) {
  return ::GetAccountDetailsResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool GetAccountDetailsResponse_initialize_ex(
    GetAccountDetailsResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    sample->_d = GetAccountDetailsResponse_getDefaultDiscriminator();

    if (!XMLGetAccountDetailsResponse_initialize_ex(&sample->_u.xmlGetAccountDetailsResponse,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void GetAccountDetailsResponse_finalize(
    GetAccountDetailsResponse* sample)
{
    ::GetAccountDetailsResponse_finalize_ex(sample,RTI_TRUE);
}
        
void GetAccountDetailsResponse_finalize_ex(
    GetAccountDetailsResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    XMLGetAccountDetailsResponse_finalize_ex(&sample->_u.xmlGetAccountDetailsResponse,deletePointers);
            

}

RTIBool GetAccountDetailsResponse_copy(
    GetAccountDetailsResponse* dst,
    const GetAccountDetailsResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          case 1:
        {                                    
        
    if (!XMLGetAccountDetailsResponse_copy(
        &dst->_u.xmlGetAccountDetailsResponse, &src->_u.xmlGetAccountDetailsResponse)) {
        return RTI_FALSE;
    }
            

        } break;
              
    }
      

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'GetAccountDetailsResponse' sequence class.
 */
#define T GetAccountDetailsResponse
#define TSeq GetAccountDetailsResponseSeq
#define T_initialize_ex ::GetAccountDetailsResponse_initialize_ex
#define T_finalize_ex   ::GetAccountDetailsResponse_finalize_ex
#define T_copy       ::GetAccountDetailsResponse_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_ex
#undef T_initialize_ex
#undef TSeq
#undef T

/* ========================================================================= */
const char *GetAccountDetailsRequestTYPENAME = "GetAccountDetailsRequest";

DDS_TypeCode* GetAccountDetailsRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode GetAccountDetailsRequest_g_tc_xmlRepresentation_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member GetAccountDetailsRequest_g_tc_members[1]=
    {
        {
            (char *)"xmlRepresentation",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            1, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode GetAccountDetailsRequest_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Default index */
        (char *)"GetAccountDetailsRequest", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        GetAccountDetailsRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for GetAccountDetailsRequest*/

    if (is_initialized) {
        return &GetAccountDetailsRequest_g_tc;
    }


    GetAccountDetailsRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&GetAccountDetailsRequest_g_tc_xmlRepresentation_string;

    GetAccountDetailsRequest_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &GetAccountDetailsRequest_g_tc;
}

DDS_UnsignedLong GetAccountDetailsRequest_getDefaultDiscriminator()
{

    DDS_UnsignedLong tmp = 1;
    
    if (tmp > 1) tmp = 1;
    
    return tmp;

}
        

RTIBool GetAccountDetailsRequest_initialize(
    GetAccountDetailsRequest* sample) {
  return ::GetAccountDetailsRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool GetAccountDetailsRequest_initialize_ex(
    GetAccountDetailsRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    sample->_d = GetAccountDetailsRequest_getDefaultDiscriminator();

    if (allocateMemory) {
        sample->_u.xmlRepresentation = DDS_String_alloc((255));
        if (sample->_u.xmlRepresentation == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->_u.xmlRepresentation != NULL) { 
            sample->_u.xmlRepresentation[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void GetAccountDetailsRequest_finalize(
    GetAccountDetailsRequest* sample)
{
    ::GetAccountDetailsRequest_finalize_ex(sample,RTI_TRUE);
}
        
void GetAccountDetailsRequest_finalize_ex(
    GetAccountDetailsRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    DDS_String_free(sample->_u.xmlRepresentation);                
            

}

RTIBool GetAccountDetailsRequest_copy(
    GetAccountDetailsRequest* dst,
    const GetAccountDetailsRequest* src)
{        

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          case 1:
        {                                    
        
    if (!RTICdrType_copyString(
        dst->_u.xmlRepresentation, src->_u.xmlRepresentation, (255) + 1)) {
        return RTI_FALSE;
    }
            

        } break;
              
    }
      

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'GetAccountDetailsRequest' sequence class.
 */
#define T GetAccountDetailsRequest
#define TSeq GetAccountDetailsRequestSeq
#define T_initialize_ex ::GetAccountDetailsRequest_initialize_ex
#define T_finalize_ex   ::GetAccountDetailsRequest_finalize_ex
#define T_copy       ::GetAccountDetailsRequest_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_ex
#undef T_initialize_ex
#undef TSeq
#undef T

