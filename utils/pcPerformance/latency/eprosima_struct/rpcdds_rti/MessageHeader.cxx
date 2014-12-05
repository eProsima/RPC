#if defined(_WIN32) && defined(NDDS_USER_DLL_EXPORT)
class __declspec(dllimport) DDSDomainEntity;
class __declspec(dllimport) DDSEntity;
#endif

/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MessageHeader.idl using "rtiddsgen".
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



#include "MessageHeader.h"

/* ========================================================================= */

DDS_TypeCode* UnknownOperation_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode UnknownOperation_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"UnknownOperation", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for UnknownOperation */

    if (is_initialized) {
        return &UnknownOperation_g_tc;
    }

    UnknownOperation_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet; /* Content type code */

    is_initialized = RTI_TRUE;

    return &UnknownOperation_g_tc;
}


RTIBool UnknownOperation_initialize(
    UnknownOperation* sample)
{
    return ::UnknownOperation_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool UnknownOperation_initialize_ex(
    UnknownOperation* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::UnknownOperation_initialize_w_params(
        sample,&allocParams);
}

RTIBool UnknownOperation_initialize_w_params(
        UnknownOperation* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (!RTICdrType_initOctet(sample)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void UnknownOperation_finalize(
    UnknownOperation* sample)
{
    ::UnknownOperation_finalize_ex(sample,RTI_TRUE);
}
 
void UnknownOperation_finalize_ex(
    UnknownOperation* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::UnknownOperation_finalize_w_params(
        sample,&deallocParams);
}
           
void UnknownOperation_finalize_w_params(
    UnknownOperation* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */



}

void UnknownOperation_finalize_optional_members(
    UnknownOperation* sample, RTIBool deletePointers)
{   
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
     
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    
    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    



}

RTIBool UnknownOperation_copy(
    UnknownOperation* dst,
    const UnknownOperation* src)
{

    if (!RTICdrType_copyOctet(
        dst, src)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'UnknownOperation' sequence class.
 */
#define T            UnknownOperation
#define TSeq         UnknownOperationSeq
#define T_initialize_w_params ::UnknownOperation_initialize_w_params
#define T_finalize_w_params   ::UnknownOperation_finalize_w_params
#define T_copy       ::UnknownOperation_copy


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
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* UnknownException_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode UnknownException_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"UnknownException", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for UnknownException */

    if (is_initialized) {
        return &UnknownException_g_tc;
    }

    UnknownException_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet; /* Content type code */

    is_initialized = RTI_TRUE;

    return &UnknownException_g_tc;
}


RTIBool UnknownException_initialize(
    UnknownException* sample)
{
    return ::UnknownException_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool UnknownException_initialize_ex(
    UnknownException* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::UnknownException_initialize_w_params(
        sample,&allocParams);
}

RTIBool UnknownException_initialize_w_params(
        UnknownException* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (!RTICdrType_initOctet(sample)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void UnknownException_finalize(
    UnknownException* sample)
{
    ::UnknownException_finalize_ex(sample,RTI_TRUE);
}
 
void UnknownException_finalize_ex(
    UnknownException* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::UnknownException_finalize_w_params(
        sample,&deallocParams);
}
           
void UnknownException_finalize_w_params(
    UnknownException* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */



}

void UnknownException_finalize_optional_members(
    UnknownException* sample, RTIBool deletePointers)
{   
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
     
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    
    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    



}

RTIBool UnknownException_copy(
    UnknownException* dst,
    const UnknownException* src)
{

    if (!RTICdrType_copyOctet(
        dst, src)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'UnknownException' sequence class.
 */
#define T            UnknownException
#define TSeq         UnknownExceptionSeq
#define T_initialize_w_params ::UnknownException_initialize_w_params
#define T_finalize_w_params   ::UnknownException_finalize_w_params
#define T_copy       ::UnknownException_copy


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
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *SystemExceptionCodeTYPENAME = "SystemExceptionCode";

DDS_TypeCode* SystemExceptionCode_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member SystemExceptionCode_g_tc_members[14] =
    {
        {
            (char *)"OK",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            OK, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"UNIMPLEMENTED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            UNIMPLEMENTED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"BAD_PARAMETER",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            BAD_PARAMETER, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"PRECONDITION_NOT_MET",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            PRECONDITION_NOT_MET, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"OUT_OF_RESOURCES",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            OUT_OF_RESOURCES, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"NOT_ENABLED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            NOT_ENABLED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ALREADY_DELETED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ALREADY_DELETED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ILLEGAL_OPERATION",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            ILLEGAL_OPERATION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"TIMEOUT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            TIMEOUT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"INITIALIZE_ERROR",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            INITIALIZE_ERROR, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"CLIENT_INTERNAL_ERROR",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            CLIENT_INTERNAL_ERROR, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"SERVER_INTERNAL_ERROR",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SERVER_INTERNAL_ERROR, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"SERVER_NOT_FOUND",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            SERVER_NOT_FOUND, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"UNKNOWN",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            UNKNOWN, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode SystemExceptionCode_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"SystemExceptionCode", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        14, /* Number of enumerators */
        SystemExceptionCode_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &SystemExceptionCode_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &SystemExceptionCode_g_tc;
}
 

RTIBool SystemExceptionCode_initialize(
    SystemExceptionCode* sample)
{
    *sample = OK;
    return RTI_TRUE;
}
        
RTIBool SystemExceptionCode_initialize_ex(
    SystemExceptionCode* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = OK;
    return RTI_TRUE;
}

RTIBool SystemExceptionCode_initialize_w_params(
        SystemExceptionCode* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = OK;
    return RTI_TRUE;
}

void SystemExceptionCode_finalize(
    SystemExceptionCode* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void SystemExceptionCode_finalize_ex(
    SystemExceptionCode* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void SystemExceptionCode_finalize_w_params(
        SystemExceptionCode* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool SystemExceptionCode_copy(
    SystemExceptionCode* dst,
    const SystemExceptionCode* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool SystemExceptionCode_getValues(SystemExceptionCodeSeq * values) 
    
{
    int i = 0;
    SystemExceptionCode * buffer;


    if (!values->maximum(14)) {
        return RTI_FALSE;
    }

    if (!values->length(14)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = OK;
    i++;
    
    buffer[i] = UNIMPLEMENTED;
    i++;
    
    buffer[i] = BAD_PARAMETER;
    i++;
    
    buffer[i] = PRECONDITION_NOT_MET;
    i++;
    
    buffer[i] = OUT_OF_RESOURCES;
    i++;
    
    buffer[i] = NOT_ENABLED;
    i++;
    
    buffer[i] = ALREADY_DELETED;
    i++;
    
    buffer[i] = ILLEGAL_OPERATION;
    i++;
    
    buffer[i] = TIMEOUT;
    i++;
    
    buffer[i] = INITIALIZE_ERROR;
    i++;
    
    buffer[i] = CLIENT_INTERNAL_ERROR;
    i++;
    
    buffer[i] = SERVER_INTERNAL_ERROR;
    i++;
    
    buffer[i] = SERVER_NOT_FOUND;
    i++;
    
    buffer[i] = UNKNOWN;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SystemExceptionCode' sequence class.
 */
#define T SystemExceptionCode
#define TSeq SystemExceptionCodeSeq
#define T_initialize_w_params SystemExceptionCode_initialize_w_params
#define T_finalize_w_params   SystemExceptionCode_finalize_w_params
#define T_copy       SystemExceptionCode_copy

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
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T
/* ========================================================================= */
const char *GUID_tTYPENAME = "GUID_t";

DDS_TypeCode* GUID_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode GUID_t_g_tc_value_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,16,NULL,NULL);

    static DDS_TypeCode_Member GUID_t_g_tc_members[1]=
    {
        {
            (char *)"value",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode GUID_t_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"GUID_t", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        GUID_t_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for GUID_t*/

    if (is_initialized) {
        return &GUID_t_g_tc;
    }

    GUID_t_g_tc_value_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    GUID_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&GUID_t_g_tc_value_array;

    is_initialized = RTI_TRUE;

    return &GUID_t_g_tc;
}


RTIBool GUID_t_initialize(
    GUID_t* sample) {
  return ::GUID_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool GUID_t_initialize_ex(
    GUID_t* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::GUID_t_initialize_w_params(
        sample,&allocParams);
}

RTIBool GUID_t_initialize_w_params(
        GUID_t* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    
    if (!RTICdrType_initArray(
        sample->value, (16), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void GUID_t_finalize(
    GUID_t* sample)
{
    ::GUID_t_finalize_ex(sample,RTI_TRUE);
}
        
void GUID_t_finalize_ex(
    GUID_t* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::GUID_t_finalize_w_params(
        sample,&deallocParams);
}

void GUID_t_finalize_w_params(
        GUID_t* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



}

void GUID_t_finalize_optional_members(
    GUID_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


}

RTIBool GUID_t_copy(
    GUID_t* dst,
    const GUID_t* src)
{

    if (!RTICdrType_copyArray(
        dst->value, src->value, (16), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'GUID_t' sequence class.
 */
#define T GUID_t
#define TSeq GUID_tSeq
#define T_initialize_w_params ::GUID_t_initialize_w_params
#define T_finalize_w_params   ::GUID_t_finalize_w_params
#define T_copy       ::GUID_t_copy

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
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *SampleIdentity_tTYPENAME = "SampleIdentity_t";

DDS_TypeCode* SampleIdentity_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SampleIdentity_t_g_tc_members[2]=
    {
        {
            (char *)"guid",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"sequence_number",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode SampleIdentity_t_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"SampleIdentity_t", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SampleIdentity_t_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SampleIdentity_t*/

    if (is_initialized) {
        return &SampleIdentity_t_g_tc;
    }


    SampleIdentity_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)GUID_t_get_typecode();
    SampleIdentity_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    is_initialized = RTI_TRUE;

    return &SampleIdentity_t_g_tc;
}


RTIBool SampleIdentity_t_initialize(
    SampleIdentity_t* sample) {
  return ::SampleIdentity_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SampleIdentity_t_initialize_ex(
    SampleIdentity_t* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::SampleIdentity_t_initialize_w_params(
        sample,&allocParams);
}

RTIBool SampleIdentity_t_initialize_w_params(
        SampleIdentity_t* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!GUID_t_initialize_w_params(&sample->guid,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLongLong(&sample->sequence_number)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void SampleIdentity_t_finalize(
    SampleIdentity_t* sample)
{
    ::SampleIdentity_t_finalize_ex(sample,RTI_TRUE);
}
        
void SampleIdentity_t_finalize_ex(
    SampleIdentity_t* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::SampleIdentity_t_finalize_w_params(
        sample,&deallocParams);
}

void SampleIdentity_t_finalize_w_params(
        SampleIdentity_t* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    GUID_t_finalize_w_params(&sample->guid, deallocParams);
            


}

void SampleIdentity_t_finalize_optional_members(
    SampleIdentity_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    GUID_t_finalize_optional_members(&sample->guid, deallocParams->delete_pointers);
            


}

RTIBool SampleIdentity_t_copy(
    SampleIdentity_t* dst,
    const SampleIdentity_t* src)
{

    if (!GUID_t_copy(
        &dst->guid, &src->guid)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->sequence_number, &src->sequence_number)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SampleIdentity_t' sequence class.
 */
#define T SampleIdentity_t
#define TSeq SampleIdentity_tSeq
#define T_initialize_w_params ::SampleIdentity_t_initialize_w_params
#define T_finalize_w_params   ::SampleIdentity_t_finalize_w_params
#define T_copy       ::SampleIdentity_t_copy

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
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *RequestHeaderTYPENAME = "RequestHeader";

DDS_TypeCode* RequestHeader_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RequestHeader_g_tc_remote_service_name_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode RequestHeader_g_tc_instance_name_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member RequestHeader_g_tc_members[3]=
    {
        {
            (char *)"request_id",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"remote_service_name",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"instance_name",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode RequestHeader_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"RequestHeader", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        RequestHeader_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for RequestHeader*/

    if (is_initialized) {
        return &RequestHeader_g_tc;
    }


    RequestHeader_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)SampleIdentity_t_get_typecode();
    RequestHeader_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&RequestHeader_g_tc_remote_service_name_string;
    RequestHeader_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&RequestHeader_g_tc_instance_name_string;

    is_initialized = RTI_TRUE;

    return &RequestHeader_g_tc;
}


RTIBool RequestHeader_initialize(
    RequestHeader* sample) {
  return ::RequestHeader_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool RequestHeader_initialize_ex(
    RequestHeader* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::RequestHeader_initialize_w_params(
        sample,&allocParams);
}

RTIBool RequestHeader_initialize_w_params(
        RequestHeader* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!SampleIdentity_t_initialize_w_params(&sample->request_id,allocParams)) {
        return RTI_FALSE;
    }
            

    if (allocParams->allocate_memory) {
        sample->remote_service_name = DDS_String_alloc((255));
        if (sample->remote_service_name == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->remote_service_name != NULL) { 
            sample->remote_service_name[0] = '\0';
        }
    }
            

    if (allocParams->allocate_memory) {
        sample->instance_name = DDS_String_alloc((255));
        if (sample->instance_name == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->instance_name != NULL) { 
            sample->instance_name[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void RequestHeader_finalize(
    RequestHeader* sample)
{
    ::RequestHeader_finalize_ex(sample,RTI_TRUE);
}
        
void RequestHeader_finalize_ex(
    RequestHeader* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::RequestHeader_finalize_w_params(
        sample,&deallocParams);
}

void RequestHeader_finalize_w_params(
        RequestHeader* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    SampleIdentity_t_finalize_w_params(&sample->request_id, deallocParams);
            

    if (sample->remote_service_name != NULL) {    
        DDS_String_free(sample->remote_service_name);
        sample->remote_service_name = NULL;
    }
            

    if (sample->instance_name != NULL) {    
        DDS_String_free(sample->instance_name);
        sample->instance_name = NULL;
    }
            

}

void RequestHeader_finalize_optional_members(
    RequestHeader* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    SampleIdentity_t_finalize_optional_members(&sample->request_id, deallocParams->delete_pointers);
            



}

RTIBool RequestHeader_copy(
    RequestHeader* dst,
    const RequestHeader* src)
{

    if (!SampleIdentity_t_copy(
        &dst->request_id, &src->request_id)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->remote_service_name, src->remote_service_name, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->instance_name, src->instance_name, (255) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'RequestHeader' sequence class.
 */
#define T RequestHeader
#define TSeq RequestHeaderSeq
#define T_initialize_w_params ::RequestHeader_initialize_w_params
#define T_finalize_w_params   ::RequestHeader_finalize_w_params
#define T_copy       ::RequestHeader_copy

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
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *ReplyHeaderTYPENAME = "ReplyHeader";

DDS_TypeCode* ReplyHeader_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ReplyHeader_g_tc_members[1]=
    {
        {
            (char *)"request_id",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode ReplyHeader_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"ReplyHeader", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        ReplyHeader_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ReplyHeader*/

    if (is_initialized) {
        return &ReplyHeader_g_tc;
    }


    ReplyHeader_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)SampleIdentity_t_get_typecode();

    is_initialized = RTI_TRUE;

    return &ReplyHeader_g_tc;
}


RTIBool ReplyHeader_initialize(
    ReplyHeader* sample) {
  return ::ReplyHeader_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ReplyHeader_initialize_ex(
    ReplyHeader* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::ReplyHeader_initialize_w_params(
        sample,&allocParams);
}

RTIBool ReplyHeader_initialize_w_params(
        ReplyHeader* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!SampleIdentity_t_initialize_w_params(&sample->request_id,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void ReplyHeader_finalize(
    ReplyHeader* sample)
{
    ::ReplyHeader_finalize_ex(sample,RTI_TRUE);
}
        
void ReplyHeader_finalize_ex(
    ReplyHeader* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::ReplyHeader_finalize_w_params(
        sample,&deallocParams);
}

void ReplyHeader_finalize_w_params(
        ReplyHeader* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    SampleIdentity_t_finalize_w_params(&sample->request_id, deallocParams);
            

}

void ReplyHeader_finalize_optional_members(
    ReplyHeader* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    SampleIdentity_t_finalize_optional_members(&sample->request_id, deallocParams->delete_pointers);
            

}

RTIBool ReplyHeader_copy(
    ReplyHeader* dst,
    const ReplyHeader* src)
{

    if (!SampleIdentity_t_copy(
        &dst->request_id, &src->request_id)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ReplyHeader' sequence class.
 */
#define T ReplyHeader
#define TSeq ReplyHeaderSeq
#define T_initialize_w_params ::ReplyHeader_initialize_w_params
#define T_finalize_w_params   ::ReplyHeader_finalize_w_params
#define T_copy       ::ReplyHeader_copy

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
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

