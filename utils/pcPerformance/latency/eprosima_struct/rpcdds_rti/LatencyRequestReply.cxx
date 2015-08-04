#ifdef _WIN32
#pragma warning( push )
#pragma warning( disable : 4018 )
#elif defined(__linux)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wnarrowing"
#endif
#if defined(_WIN32) && defined(NDDS_USER_DLL_EXPORT)
class __declspec(dllimport) DDSDomainEntity;
class __declspec(dllimport) DDSEntity;
#endif

/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from LatencyRequestReply.idl using "rtiddsgen".
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



#include "LatencyRequestReply.h"

/* ========================================================================= */
const char *Latency_latency_InTYPENAME = "Latency_latency_In";

DDS_TypeCode* Latency_latency_In_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Latency_latency_In_g_tc_members[1]=
    {
        {
            (char *)"param",/* Member name */
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

    static DDS_TypeCode Latency_latency_In_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Latency_latency_In", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        Latency_latency_In_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Latency_latency_In*/

    if (is_initialized) {
        return &Latency_latency_In_g_tc;
    }


    Latency_latency_In_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)st_get_typecode();

    is_initialized = RTI_TRUE;

    return &Latency_latency_In_g_tc;
}


RTIBool Latency_latency_In_initialize(
    Latency_latency_In* sample) {
  return ::Latency_latency_In_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Latency_latency_In_initialize_ex(
    Latency_latency_In* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Latency_latency_In_initialize_w_params(
        sample,&allocParams);
}

RTIBool Latency_latency_In_initialize_w_params(
        Latency_latency_In* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!st_initialize_w_params(&sample->param,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Latency_latency_In_finalize(
    Latency_latency_In* sample)
{
    ::Latency_latency_In_finalize_ex(sample,RTI_TRUE);
}
        
void Latency_latency_In_finalize_ex(
    Latency_latency_In* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Latency_latency_In_finalize_w_params(
        sample,&deallocParams);
}

void Latency_latency_In_finalize_w_params(
        Latency_latency_In* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    st_finalize_w_params(&sample->param, deallocParams);
            

}

void Latency_latency_In_finalize_optional_members(
    Latency_latency_In* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    st_finalize_optional_members(&sample->param, deallocParams->delete_pointers);
            

}

RTIBool Latency_latency_In_copy(
    Latency_latency_In* dst,
    const Latency_latency_In* src)
{

    if (!st_copy(
        &dst->param, &src->param)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Latency_latency_In' sequence class.
 */
#define T Latency_latency_In
#define TSeq Latency_latency_InSeq
#define T_initialize_w_params ::Latency_latency_In_initialize_w_params
#define T_finalize_w_params   ::Latency_latency_In_finalize_w_params
#define T_copy       ::Latency_latency_In_copy

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
const char *Latency_latency_OutTYPENAME = "Latency_latency_Out";

DDS_TypeCode* Latency_latency_Out_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Latency_latency_Out_g_tc_members[1]=
    {
        {
            (char *)"return_",/* Member name */
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

    static DDS_TypeCode Latency_latency_Out_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Latency_latency_Out", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        Latency_latency_Out_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Latency_latency_Out*/

    if (is_initialized) {
        return &Latency_latency_Out_g_tc;
    }


    Latency_latency_Out_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)st_get_typecode();

    is_initialized = RTI_TRUE;

    return &Latency_latency_Out_g_tc;
}


RTIBool Latency_latency_Out_initialize(
    Latency_latency_Out* sample) {
  return ::Latency_latency_Out_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Latency_latency_Out_initialize_ex(
    Latency_latency_Out* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Latency_latency_Out_initialize_w_params(
        sample,&allocParams);
}

RTIBool Latency_latency_Out_initialize_w_params(
        Latency_latency_Out* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!st_initialize_w_params(&sample->return_,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Latency_latency_Out_finalize(
    Latency_latency_Out* sample)
{
    ::Latency_latency_Out_finalize_ex(sample,RTI_TRUE);
}
        
void Latency_latency_Out_finalize_ex(
    Latency_latency_Out* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Latency_latency_Out_finalize_w_params(
        sample,&deallocParams);
}

void Latency_latency_Out_finalize_w_params(
        Latency_latency_Out* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    st_finalize_w_params(&sample->return_, deallocParams);
            

}

void Latency_latency_Out_finalize_optional_members(
    Latency_latency_Out* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    st_finalize_optional_members(&sample->return_, deallocParams->delete_pointers);
            

}

RTIBool Latency_latency_Out_copy(
    Latency_latency_Out* dst,
    const Latency_latency_Out* src)
{

    if (!st_copy(
        &dst->return_, &src->return_)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Latency_latency_Out' sequence class.
 */
#define T Latency_latency_Out
#define TSeq Latency_latency_OutSeq
#define T_initialize_w_params ::Latency_latency_Out_initialize_w_params
#define T_finalize_w_params   ::Latency_latency_Out_finalize_w_params
#define T_copy       ::Latency_latency_Out_copy

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
const char *Latency_latency_ResultTYPENAME = "Latency_latency_Result";

DDS_TypeCode* Latency_latency_Result_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Latency_latency_Result_g_tc_members[3]=
    {
        {
            (char *)"unknown_exception",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            RTI_CDR_TYPE_CODE_UNION_DEFAULT_LABEL, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"out_",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            0, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"sysx_",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            1, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode Latency_latency_Result_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        0,/* Default index */
        (char *)"Latency_latency_Result", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        Latency_latency_Result_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Latency_latency_Result*/

    if (is_initialized) {
        return &Latency_latency_Result_g_tc;
    }


    Latency_latency_Result_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UnknownException_get_typecode();
    Latency_latency_Result_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Latency_latency_Out_get_typecode();
    Latency_latency_Result_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)SystemExceptionCode_get_typecode();

    Latency_latency_Result_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &Latency_latency_Result_g_tc;
}
DDS_Long Latency_latency_Result_getDefaultDiscriminator()
{

    DDS_UnsignedLong maxValue = 0xFFFFFFFF;
    DDS_UnsignedLong i = 0;
    for (i = 0; i < maxValue; ++i) {
    
        if (i == 0) continue;
     
        if (i == 1) continue;
     
        break;
    }
    return (DDS_Long)i;

}
        

RTIBool Latency_latency_Result_initialize(
    Latency_latency_Result* sample) {
  return ::Latency_latency_Result_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Latency_latency_Result_initialize_ex(
    Latency_latency_Result* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Latency_latency_Result_initialize_w_params(
        sample,&allocParams);
}

RTIBool Latency_latency_Result_initialize_w_params(
        Latency_latency_Result* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    sample->_d = Latency_latency_Result_getDefaultDiscriminator();

    if (!UnknownException_initialize_w_params(&sample->_u.unknown_exception,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!Latency_latency_Out_initialize_w_params(&sample->_u.out_,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!SystemExceptionCode_initialize_w_params(&sample->_u.sysx_,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Latency_latency_Result_finalize(
    Latency_latency_Result* sample)
{
    ::Latency_latency_Result_finalize_ex(sample,RTI_TRUE);
}
        
void Latency_latency_Result_finalize_ex(
    Latency_latency_Result* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Latency_latency_Result_finalize_w_params(
        sample,&deallocParams);
}

void Latency_latency_Result_finalize_w_params(
        Latency_latency_Result* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    UnknownException_finalize_w_params(&sample->_u.unknown_exception, deallocParams);
            

    Latency_latency_Out_finalize_w_params(&sample->_u.out_, deallocParams);
            

    SystemExceptionCode_finalize_w_params(&sample->_u.sysx_, deallocParams);
            

}

void Latency_latency_Result_finalize_optional_members(
    Latency_latency_Result* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    switch(sample->_d) {
          default:
        {                                    
        
    UnknownException_finalize_optional_members(&sample->_u.unknown_exception, deallocParams->delete_pointers);
            

        };
      case 0:
        {                                    
        
    Latency_latency_Out_finalize_optional_members(&sample->_u.out_, deallocParams->delete_pointers);
            

        } break;
      case 1:
        {                                    
        
    SystemExceptionCode_finalize_w_params(&sample->_u.sysx_, deallocParams);
            

        } break;
              
    }
      
}

RTIBool Latency_latency_Result_copy(
    Latency_latency_Result* dst,
    const Latency_latency_Result* src)
{

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          default:
        {                                    
        
    if (!UnknownException_copy(
        &dst->_u.unknown_exception, &src->_u.unknown_exception)) {
        return RTI_FALSE;
    }
            

        };
      case 0:
        {                                    
        
    if (!Latency_latency_Out_copy(
        &dst->_u.out_, &src->_u.out_)) {
        return RTI_FALSE;
    }
            

        } break;
      case 1:
        {                                    
        
    if (!SystemExceptionCode_copy(
        &dst->_u.sysx_, &src->_u.sysx_)) {
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
 * Configure and implement 'Latency_latency_Result' sequence class.
 */
#define T Latency_latency_Result
#define TSeq Latency_latency_ResultSeq
#define T_initialize_w_params ::Latency_latency_Result_initialize_w_params
#define T_finalize_w_params   ::Latency_latency_Result_finalize_w_params
#define T_copy       ::Latency_latency_Result_copy

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
const char *Latency_CallTYPENAME = "Latency_Call";

DDS_TypeCode* Latency_Call_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Latency_Call_g_tc_members[2]=
    {
        {
            (char *)"unknown_operation",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            RTI_CDR_TYPE_CODE_UNION_DEFAULT_LABEL, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"latency",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            0x9E800F53, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode Latency_Call_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        0,/* Default index */
        (char *)"Latency_Call", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Latency_Call_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Latency_Call*/

    if (is_initialized) {
        return &Latency_Call_g_tc;
    }


    Latency_Call_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UnknownOperation_get_typecode();
    Latency_Call_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Latency_latency_In_get_typecode();

    Latency_Call_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &Latency_Call_g_tc;
}
DDS_Long Latency_Call_getDefaultDiscriminator()
{

    DDS_UnsignedLong maxValue = 0xFFFFFFFF;
    DDS_UnsignedLong i = 0;
    for (i = 0; i < maxValue; ++i) {
    
        if (i == 0x9E800F53) continue;
     
        break;
    }
    return (DDS_Long)i;

}
        

RTIBool Latency_Call_initialize(
    Latency_Call* sample) {
  return ::Latency_Call_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Latency_Call_initialize_ex(
    Latency_Call* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Latency_Call_initialize_w_params(
        sample,&allocParams);
}

RTIBool Latency_Call_initialize_w_params(
        Latency_Call* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    sample->_d = Latency_Call_getDefaultDiscriminator();

    if (!UnknownOperation_initialize_w_params(&sample->_u.unknown_operation,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!Latency_latency_In_initialize_w_params(&sample->_u.latency,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Latency_Call_finalize(
    Latency_Call* sample)
{
    ::Latency_Call_finalize_ex(sample,RTI_TRUE);
}
        
void Latency_Call_finalize_ex(
    Latency_Call* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Latency_Call_finalize_w_params(
        sample,&deallocParams);
}

void Latency_Call_finalize_w_params(
        Latency_Call* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    UnknownOperation_finalize_w_params(&sample->_u.unknown_operation, deallocParams);
            

    Latency_latency_In_finalize_w_params(&sample->_u.latency, deallocParams);
            

}

void Latency_Call_finalize_optional_members(
    Latency_Call* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    switch(sample->_d) {
          default:
        {                                    
        
    UnknownOperation_finalize_optional_members(&sample->_u.unknown_operation, deallocParams->delete_pointers);
            

        };
      case 0x9E800F53:
        {                                    
        
    Latency_latency_In_finalize_optional_members(&sample->_u.latency, deallocParams->delete_pointers);
            

        } break;
              
    }
      
}

RTIBool Latency_Call_copy(
    Latency_Call* dst,
    const Latency_Call* src)
{

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          default:
        {                                    
        
    if (!UnknownOperation_copy(
        &dst->_u.unknown_operation, &src->_u.unknown_operation)) {
        return RTI_FALSE;
    }
            

        };
      case 0x9E800F53:
        {                                    
        
    if (!Latency_latency_In_copy(
        &dst->_u.latency, &src->_u.latency)) {
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
 * Configure and implement 'Latency_Call' sequence class.
 */
#define T Latency_Call
#define TSeq Latency_CallSeq
#define T_initialize_w_params ::Latency_Call_initialize_w_params
#define T_finalize_w_params   ::Latency_Call_finalize_w_params
#define T_copy       ::Latency_Call_copy

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
const char *Latency_RequestTYPENAME = "Latency_Request";

DDS_TypeCode* Latency_Request_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Latency_Request_g_tc_members[2]=
    {
        {
            (char *)"header",/* Member name */
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
            (char *)"request",/* Member name */
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

    static DDS_TypeCode Latency_Request_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Latency_Request", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Latency_Request_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Latency_Request*/

    if (is_initialized) {
        return &Latency_Request_g_tc;
    }


    Latency_Request_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    Latency_Request_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Latency_Call_get_typecode();

    is_initialized = RTI_TRUE;

    return &Latency_Request_g_tc;
}


RTIBool Latency_Request_initialize(
    Latency_Request* sample) {
  return ::Latency_Request_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Latency_Request_initialize_ex(
    Latency_Request* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Latency_Request_initialize_w_params(
        sample,&allocParams);
}

RTIBool Latency_Request_initialize_w_params(
        Latency_Request* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RequestHeader_initialize_w_params(&sample->header,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!Latency_Call_initialize_w_params(&sample->request,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Latency_Request_finalize(
    Latency_Request* sample)
{
    ::Latency_Request_finalize_ex(sample,RTI_TRUE);
}
        
void Latency_Request_finalize_ex(
    Latency_Request* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Latency_Request_finalize_w_params(
        sample,&deallocParams);
}

void Latency_Request_finalize_w_params(
        Latency_Request* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    RequestHeader_finalize_w_params(&sample->header, deallocParams);
            

    Latency_Call_finalize_w_params(&sample->request, deallocParams);
            

}

void Latency_Request_finalize_optional_members(
    Latency_Request* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    RequestHeader_finalize_optional_members(&sample->header, deallocParams->delete_pointers);
            

    Latency_Call_finalize_optional_members(&sample->request, deallocParams->delete_pointers);
            

}

RTIBool Latency_Request_copy(
    Latency_Request* dst,
    const Latency_Request* src)
{

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!Latency_Call_copy(
        &dst->request, &src->request)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Latency_Request' sequence class.
 */
#define T Latency_Request
#define TSeq Latency_RequestSeq
#define T_initialize_w_params ::Latency_Request_initialize_w_params
#define T_finalize_w_params   ::Latency_Request_finalize_w_params
#define T_copy       ::Latency_Request_copy

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
const char *Latency_ReturnTYPENAME = "Latency_Return";

DDS_TypeCode* Latency_Return_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Latency_Return_g_tc_members[2]=
    {
        {
            (char *)"unknown_operation",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            RTI_CDR_TYPE_CODE_UNION_DEFAULT_LABEL, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"latency",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            0x9E800F53, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode Latency_Return_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        0,/* Default index */
        (char *)"Latency_Return", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Latency_Return_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Latency_Return*/

    if (is_initialized) {
        return &Latency_Return_g_tc;
    }


    Latency_Return_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)UnknownOperation_get_typecode();
    Latency_Return_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Latency_latency_Result_get_typecode();

    Latency_Return_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &Latency_Return_g_tc;
}
DDS_Long Latency_Return_getDefaultDiscriminator()
{

    DDS_UnsignedLong maxValue = 0xFFFFFFFF;
    DDS_UnsignedLong i = 0;
    for (i = 0; i < maxValue; ++i) {
    
        if (i == 0x9E800F53) continue;
     
        break;
    }
    return (DDS_Long)i;

}
        

RTIBool Latency_Return_initialize(
    Latency_Return* sample) {
  return ::Latency_Return_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Latency_Return_initialize_ex(
    Latency_Return* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Latency_Return_initialize_w_params(
        sample,&allocParams);
}

RTIBool Latency_Return_initialize_w_params(
        Latency_Return* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    sample->_d = Latency_Return_getDefaultDiscriminator();

    if (!UnknownOperation_initialize_w_params(&sample->_u.unknown_operation,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!Latency_latency_Result_initialize_w_params(&sample->_u.latency,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Latency_Return_finalize(
    Latency_Return* sample)
{
    ::Latency_Return_finalize_ex(sample,RTI_TRUE);
}
        
void Latency_Return_finalize_ex(
    Latency_Return* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Latency_Return_finalize_w_params(
        sample,&deallocParams);
}

void Latency_Return_finalize_w_params(
        Latency_Return* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    UnknownOperation_finalize_w_params(&sample->_u.unknown_operation, deallocParams);
            

    Latency_latency_Result_finalize_w_params(&sample->_u.latency, deallocParams);
            

}

void Latency_Return_finalize_optional_members(
    Latency_Return* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    switch(sample->_d) {
          default:
        {                                    
        
    UnknownOperation_finalize_optional_members(&sample->_u.unknown_operation, deallocParams->delete_pointers);
            

        };
      case 0x9E800F53:
        {                                    
        
    Latency_latency_Result_finalize_optional_members(&sample->_u.latency, deallocParams->delete_pointers);
            

        } break;
              
    }
      
}

RTIBool Latency_Return_copy(
    Latency_Return* dst,
    const Latency_Return* src)
{

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          default:
        {                                    
        
    if (!UnknownOperation_copy(
        &dst->_u.unknown_operation, &src->_u.unknown_operation)) {
        return RTI_FALSE;
    }
            

        };
      case 0x9E800F53:
        {                                    
        
    if (!Latency_latency_Result_copy(
        &dst->_u.latency, &src->_u.latency)) {
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
 * Configure and implement 'Latency_Return' sequence class.
 */
#define T Latency_Return
#define TSeq Latency_ReturnSeq
#define T_initialize_w_params ::Latency_Return_initialize_w_params
#define T_finalize_w_params   ::Latency_Return_finalize_w_params
#define T_copy       ::Latency_Return_copy

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
const char *Latency_ReplyTYPENAME = "Latency_Reply";

DDS_TypeCode* Latency_Reply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Latency_Reply_g_tc_members[2]=
    {
        {
            (char *)"header",/* Member name */
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
            (char *)"reply",/* Member name */
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

    static DDS_TypeCode Latency_Reply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Latency_Reply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Latency_Reply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Latency_Reply*/

    if (is_initialized) {
        return &Latency_Reply_g_tc;
    }


    Latency_Reply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    Latency_Reply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Latency_Return_get_typecode();

    is_initialized = RTI_TRUE;

    return &Latency_Reply_g_tc;
}


RTIBool Latency_Reply_initialize(
    Latency_Reply* sample) {
  return ::Latency_Reply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Latency_Reply_initialize_ex(
    Latency_Reply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Latency_Reply_initialize_w_params(
        sample,&allocParams);
}

RTIBool Latency_Reply_initialize_w_params(
        Latency_Reply* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!ReplyHeader_initialize_w_params(&sample->header,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!Latency_Return_initialize_w_params(&sample->reply,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Latency_Reply_finalize(
    Latency_Reply* sample)
{
    ::Latency_Reply_finalize_ex(sample,RTI_TRUE);
}
        
void Latency_Reply_finalize_ex(
    Latency_Reply* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Latency_Reply_finalize_w_params(
        sample,&deallocParams);
}

void Latency_Reply_finalize_w_params(
        Latency_Reply* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    ReplyHeader_finalize_w_params(&sample->header, deallocParams);
            

    Latency_Return_finalize_w_params(&sample->reply, deallocParams);
            

}

void Latency_Reply_finalize_optional_members(
    Latency_Reply* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    ReplyHeader_finalize_optional_members(&sample->header, deallocParams->delete_pointers);
            

    Latency_Return_finalize_optional_members(&sample->reply, deallocParams->delete_pointers);
            

}

RTIBool Latency_Reply_copy(
    Latency_Reply* dst,
    const Latency_Reply* src)
{

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!Latency_Return_copy(
        &dst->reply, &src->reply)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Latency_Reply' sequence class.
 */
#define T Latency_Reply
#define TSeq Latency_ReplySeq
#define T_initialize_w_params ::Latency_Reply_initialize_w_params
#define T_finalize_w_params   ::Latency_Reply_finalize_w_params
#define T_copy       ::Latency_Reply_copy

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

#ifdef _WIN32
#pragma warning( pop )
#elif defined(__linux)
#pragma GCC diagnostic pop
#endif
