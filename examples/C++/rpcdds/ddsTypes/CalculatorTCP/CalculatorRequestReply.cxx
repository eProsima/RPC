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

  This file was generated from CalculatorRequestReply.idl using "rtiddsgen".
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



#include "CalculatorRequestReply.h"

/* ========================================================================= */
const char *Calculator_addition_InTYPENAME = "Calculator_addition_In";

DDS_TypeCode* Calculator_addition_In_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_addition_In_g_tc_members[2]=
    {
        {
            (char *)"value1",/* Member name */
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
            (char *)"value2",/* Member name */
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

    static DDS_TypeCode Calculator_addition_In_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator_addition_In", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Calculator_addition_In_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_addition_In*/

    if (is_initialized) {
        return &Calculator_addition_In_g_tc;
    }


    Calculator_addition_In_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Calculator_addition_In_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &Calculator_addition_In_g_tc;
}


RTIBool Calculator_addition_In_initialize(
    Calculator_addition_In* sample) {
  return ::Calculator_addition_In_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_addition_In_initialize_ex(
    Calculator_addition_In* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Calculator_addition_In_initialize_w_params(
        sample,&allocParams);
}

RTIBool Calculator_addition_In_initialize_w_params(
        Calculator_addition_In* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->value1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->value2)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void Calculator_addition_In_finalize(
    Calculator_addition_In* sample)
{
    ::Calculator_addition_In_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_addition_In_finalize_ex(
    Calculator_addition_In* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Calculator_addition_In_finalize_w_params(
        sample,&deallocParams);
}

void Calculator_addition_In_finalize_w_params(
        Calculator_addition_In* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




}

void Calculator_addition_In_finalize_optional_members(
    Calculator_addition_In* sample, RTIBool deletePointers)
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

RTIBool Calculator_addition_In_copy(
    Calculator_addition_In* dst,
    const Calculator_addition_In* src)
{

    if (!RTICdrType_copyLong(
        &dst->value1, &src->value1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->value2, &src->value2)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Calculator_addition_In' sequence class.
 */
#define T Calculator_addition_In
#define TSeq Calculator_addition_InSeq
#define T_initialize_w_params ::Calculator_addition_In_initialize_w_params
#define T_finalize_w_params   ::Calculator_addition_In_finalize_w_params
#define T_copy       ::Calculator_addition_In_copy

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
const char *Calculator_addition_OutTYPENAME = "Calculator_addition_Out";

DDS_TypeCode* Calculator_addition_Out_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_addition_Out_g_tc_members[1]=
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

    static DDS_TypeCode Calculator_addition_Out_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator_addition_Out", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        Calculator_addition_Out_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_addition_Out*/

    if (is_initialized) {
        return &Calculator_addition_Out_g_tc;
    }


    Calculator_addition_Out_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &Calculator_addition_Out_g_tc;
}


RTIBool Calculator_addition_Out_initialize(
    Calculator_addition_Out* sample) {
  return ::Calculator_addition_Out_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_addition_Out_initialize_ex(
    Calculator_addition_Out* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Calculator_addition_Out_initialize_w_params(
        sample,&allocParams);
}

RTIBool Calculator_addition_Out_initialize_w_params(
        Calculator_addition_Out* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->return_)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void Calculator_addition_Out_finalize(
    Calculator_addition_Out* sample)
{
    ::Calculator_addition_Out_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_addition_Out_finalize_ex(
    Calculator_addition_Out* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Calculator_addition_Out_finalize_w_params(
        sample,&deallocParams);
}

void Calculator_addition_Out_finalize_w_params(
        Calculator_addition_Out* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



}

void Calculator_addition_Out_finalize_optional_members(
    Calculator_addition_Out* sample, RTIBool deletePointers)
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

RTIBool Calculator_addition_Out_copy(
    Calculator_addition_Out* dst,
    const Calculator_addition_Out* src)
{

    if (!RTICdrType_copyLong(
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
 * Configure and implement 'Calculator_addition_Out' sequence class.
 */
#define T Calculator_addition_Out
#define TSeq Calculator_addition_OutSeq
#define T_initialize_w_params ::Calculator_addition_Out_initialize_w_params
#define T_finalize_w_params   ::Calculator_addition_Out_finalize_w_params
#define T_copy       ::Calculator_addition_Out_copy

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
const char *Calculator_addition_ResultTYPENAME = "Calculator_addition_Result";

DDS_TypeCode* Calculator_addition_Result_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_addition_Result_g_tc_members[2]=
    {
        {
            (char *)"result",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (dds::rpc::REMOTE_EX_OK), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"unknownEx",/* Member name */
            {
                2,/* Representation ID */
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
        }
    };

    static DDS_TypeCode Calculator_addition_Result_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        1,/* Default index */
        (char *)"Calculator_addition_Result", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Calculator_addition_Result_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_addition_Result*/

    if (is_initialized) {
        return &Calculator_addition_Result_g_tc;
    }


    Calculator_addition_Result_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Calculator_addition_Out_get_typecode();
    Calculator_addition_Result_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)dds::rpc::UnknownException_get_typecode();

    Calculator_addition_Result_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &Calculator_addition_Result_g_tc;
}
DDS_Long Calculator_addition_Result_getDefaultDiscriminator()
{

    DDS_UnsignedLong maxValue = 0xFFFFFFFF;
    DDS_UnsignedLong i = 0;
    for (i = 0; i < maxValue; ++i) {
    
        if (i == (dds::rpc::REMOTE_EX_OK)) continue;
     
        break;
    }
    return (DDS_Long)i;

}
        

RTIBool Calculator_addition_Result_initialize(
    Calculator_addition_Result* sample) {
  return ::Calculator_addition_Result_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_addition_Result_initialize_ex(
    Calculator_addition_Result* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Calculator_addition_Result_initialize_w_params(
        sample,&allocParams);
}

RTIBool Calculator_addition_Result_initialize_w_params(
        Calculator_addition_Result* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    sample->_d = Calculator_addition_Result_getDefaultDiscriminator();

    if (!Calculator_addition_Out_initialize_w_params(&sample->_u.result,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!dds::rpc::UnknownException_initialize_w_params(&sample->_u.unknownEx,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Calculator_addition_Result_finalize(
    Calculator_addition_Result* sample)
{
    ::Calculator_addition_Result_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_addition_Result_finalize_ex(
    Calculator_addition_Result* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Calculator_addition_Result_finalize_w_params(
        sample,&deallocParams);
}

void Calculator_addition_Result_finalize_w_params(
        Calculator_addition_Result* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    Calculator_addition_Out_finalize_w_params(&sample->_u.result, deallocParams);
            

    dds::rpc::UnknownException_finalize_w_params(&sample->_u.unknownEx, deallocParams);
            

}

void Calculator_addition_Result_finalize_optional_members(
    Calculator_addition_Result* sample, RTIBool deletePointers)
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
          case (dds::rpc::REMOTE_EX_OK):
        {                                    
        
    Calculator_addition_Out_finalize_optional_members(&sample->_u.result, deallocParams->delete_pointers);
            

        } break;
      default:
        {                                    
        
    dds::rpc::UnknownException_finalize_optional_members(&sample->_u.unknownEx, deallocParams->delete_pointers);
            

        };
              
    }
      
}

RTIBool Calculator_addition_Result_copy(
    Calculator_addition_Result* dst,
    const Calculator_addition_Result* src)
{

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          case (dds::rpc::REMOTE_EX_OK):
        {                                    
        
    if (!Calculator_addition_Out_copy(
        &dst->_u.result, &src->_u.result)) {
        return RTI_FALSE;
    }
            

        } break;
      default:
        {                                    
        
    if (!dds::rpc::UnknownException_copy(
        &dst->_u.unknownEx, &src->_u.unknownEx)) {
        return RTI_FALSE;
    }
            

        };
              
    }
      

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Calculator_addition_Result' sequence class.
 */
#define T Calculator_addition_Result
#define TSeq Calculator_addition_ResultSeq
#define T_initialize_w_params ::Calculator_addition_Result_initialize_w_params
#define T_finalize_w_params   ::Calculator_addition_Result_finalize_w_params
#define T_copy       ::Calculator_addition_Result_copy

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
const char *Calculator_subtraction_InTYPENAME = "Calculator_subtraction_In";

DDS_TypeCode* Calculator_subtraction_In_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_subtraction_In_g_tc_members[2]=
    {
        {
            (char *)"value1",/* Member name */
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
            (char *)"value2",/* Member name */
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

    static DDS_TypeCode Calculator_subtraction_In_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator_subtraction_In", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Calculator_subtraction_In_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_subtraction_In*/

    if (is_initialized) {
        return &Calculator_subtraction_In_g_tc;
    }


    Calculator_subtraction_In_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Calculator_subtraction_In_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &Calculator_subtraction_In_g_tc;
}


RTIBool Calculator_subtraction_In_initialize(
    Calculator_subtraction_In* sample) {
  return ::Calculator_subtraction_In_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_subtraction_In_initialize_ex(
    Calculator_subtraction_In* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Calculator_subtraction_In_initialize_w_params(
        sample,&allocParams);
}

RTIBool Calculator_subtraction_In_initialize_w_params(
        Calculator_subtraction_In* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->value1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->value2)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void Calculator_subtraction_In_finalize(
    Calculator_subtraction_In* sample)
{
    ::Calculator_subtraction_In_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_subtraction_In_finalize_ex(
    Calculator_subtraction_In* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Calculator_subtraction_In_finalize_w_params(
        sample,&deallocParams);
}

void Calculator_subtraction_In_finalize_w_params(
        Calculator_subtraction_In* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




}

void Calculator_subtraction_In_finalize_optional_members(
    Calculator_subtraction_In* sample, RTIBool deletePointers)
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

RTIBool Calculator_subtraction_In_copy(
    Calculator_subtraction_In* dst,
    const Calculator_subtraction_In* src)
{

    if (!RTICdrType_copyLong(
        &dst->value1, &src->value1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->value2, &src->value2)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Calculator_subtraction_In' sequence class.
 */
#define T Calculator_subtraction_In
#define TSeq Calculator_subtraction_InSeq
#define T_initialize_w_params ::Calculator_subtraction_In_initialize_w_params
#define T_finalize_w_params   ::Calculator_subtraction_In_finalize_w_params
#define T_copy       ::Calculator_subtraction_In_copy

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
const char *Calculator_subtraction_OutTYPENAME = "Calculator_subtraction_Out";

DDS_TypeCode* Calculator_subtraction_Out_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_subtraction_Out_g_tc_members[1]=
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

    static DDS_TypeCode Calculator_subtraction_Out_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator_subtraction_Out", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        Calculator_subtraction_Out_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_subtraction_Out*/

    if (is_initialized) {
        return &Calculator_subtraction_Out_g_tc;
    }


    Calculator_subtraction_Out_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &Calculator_subtraction_Out_g_tc;
}


RTIBool Calculator_subtraction_Out_initialize(
    Calculator_subtraction_Out* sample) {
  return ::Calculator_subtraction_Out_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_subtraction_Out_initialize_ex(
    Calculator_subtraction_Out* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Calculator_subtraction_Out_initialize_w_params(
        sample,&allocParams);
}

RTIBool Calculator_subtraction_Out_initialize_w_params(
        Calculator_subtraction_Out* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->return_)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void Calculator_subtraction_Out_finalize(
    Calculator_subtraction_Out* sample)
{
    ::Calculator_subtraction_Out_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_subtraction_Out_finalize_ex(
    Calculator_subtraction_Out* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Calculator_subtraction_Out_finalize_w_params(
        sample,&deallocParams);
}

void Calculator_subtraction_Out_finalize_w_params(
        Calculator_subtraction_Out* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



}

void Calculator_subtraction_Out_finalize_optional_members(
    Calculator_subtraction_Out* sample, RTIBool deletePointers)
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

RTIBool Calculator_subtraction_Out_copy(
    Calculator_subtraction_Out* dst,
    const Calculator_subtraction_Out* src)
{

    if (!RTICdrType_copyLong(
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
 * Configure and implement 'Calculator_subtraction_Out' sequence class.
 */
#define T Calculator_subtraction_Out
#define TSeq Calculator_subtraction_OutSeq
#define T_initialize_w_params ::Calculator_subtraction_Out_initialize_w_params
#define T_finalize_w_params   ::Calculator_subtraction_Out_finalize_w_params
#define T_copy       ::Calculator_subtraction_Out_copy

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
const char *Calculator_subtraction_ResultTYPENAME = "Calculator_subtraction_Result";

DDS_TypeCode* Calculator_subtraction_Result_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_subtraction_Result_g_tc_members[2]=
    {
        {
            (char *)"result",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            (dds::rpc::REMOTE_EX_OK), /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"unknownEx",/* Member name */
            {
                2,/* Representation ID */
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
        }
    };

    static DDS_TypeCode Calculator_subtraction_Result_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        1,/* Default index */
        (char *)"Calculator_subtraction_Result", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Calculator_subtraction_Result_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_subtraction_Result*/

    if (is_initialized) {
        return &Calculator_subtraction_Result_g_tc;
    }


    Calculator_subtraction_Result_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Calculator_subtraction_Out_get_typecode();
    Calculator_subtraction_Result_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)dds::rpc::UnknownException_get_typecode();

    Calculator_subtraction_Result_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &Calculator_subtraction_Result_g_tc;
}
DDS_Long Calculator_subtraction_Result_getDefaultDiscriminator()
{

    DDS_UnsignedLong maxValue = 0xFFFFFFFF;
    DDS_UnsignedLong i = 0;
    for (i = 0; i < maxValue; ++i) {
    
        if (i == (dds::rpc::REMOTE_EX_OK)) continue;
     
        break;
    }
    return (DDS_Long)i;

}
        

RTIBool Calculator_subtraction_Result_initialize(
    Calculator_subtraction_Result* sample) {
  return ::Calculator_subtraction_Result_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_subtraction_Result_initialize_ex(
    Calculator_subtraction_Result* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Calculator_subtraction_Result_initialize_w_params(
        sample,&allocParams);
}

RTIBool Calculator_subtraction_Result_initialize_w_params(
        Calculator_subtraction_Result* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    sample->_d = Calculator_subtraction_Result_getDefaultDiscriminator();

    if (!Calculator_subtraction_Out_initialize_w_params(&sample->_u.result,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!dds::rpc::UnknownException_initialize_w_params(&sample->_u.unknownEx,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Calculator_subtraction_Result_finalize(
    Calculator_subtraction_Result* sample)
{
    ::Calculator_subtraction_Result_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_subtraction_Result_finalize_ex(
    Calculator_subtraction_Result* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Calculator_subtraction_Result_finalize_w_params(
        sample,&deallocParams);
}

void Calculator_subtraction_Result_finalize_w_params(
        Calculator_subtraction_Result* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    Calculator_subtraction_Out_finalize_w_params(&sample->_u.result, deallocParams);
            

    dds::rpc::UnknownException_finalize_w_params(&sample->_u.unknownEx, deallocParams);
            

}

void Calculator_subtraction_Result_finalize_optional_members(
    Calculator_subtraction_Result* sample, RTIBool deletePointers)
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
          case (dds::rpc::REMOTE_EX_OK):
        {                                    
        
    Calculator_subtraction_Out_finalize_optional_members(&sample->_u.result, deallocParams->delete_pointers);
            

        } break;
      default:
        {                                    
        
    dds::rpc::UnknownException_finalize_optional_members(&sample->_u.unknownEx, deallocParams->delete_pointers);
            

        };
              
    }
      
}

RTIBool Calculator_subtraction_Result_copy(
    Calculator_subtraction_Result* dst,
    const Calculator_subtraction_Result* src)
{

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          case (dds::rpc::REMOTE_EX_OK):
        {                                    
        
    if (!Calculator_subtraction_Out_copy(
        &dst->_u.result, &src->_u.result)) {
        return RTI_FALSE;
    }
            

        } break;
      default:
        {                                    
        
    if (!dds::rpc::UnknownException_copy(
        &dst->_u.unknownEx, &src->_u.unknownEx)) {
        return RTI_FALSE;
    }
            

        };
              
    }
      

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Calculator_subtraction_Result' sequence class.
 */
#define T Calculator_subtraction_Result
#define TSeq Calculator_subtraction_ResultSeq
#define T_initialize_w_params ::Calculator_subtraction_Result_initialize_w_params
#define T_finalize_w_params   ::Calculator_subtraction_Result_finalize_w_params
#define T_copy       ::Calculator_subtraction_Result_copy

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
const char *Calculator_CallTYPENAME = "Calculator_Call";

DDS_TypeCode* Calculator_Call_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_Call_g_tc_members[3]=
    {
        {
            (char *)"addition",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            0xCBC6CEAA, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"subtraction",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            0xCA019A14, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"unknownOp",/* Member name */
            {
                3,/* Representation ID */
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
        }
    };

    static DDS_TypeCode Calculator_Call_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        2,/* Default index */
        (char *)"Calculator_Call", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        Calculator_Call_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_Call*/

    if (is_initialized) {
        return &Calculator_Call_g_tc;
    }


    Calculator_Call_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Calculator_addition_In_get_typecode();
    Calculator_Call_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Calculator_subtraction_In_get_typecode();
    Calculator_Call_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)dds::rpc::UnknownOperation_get_typecode();

    Calculator_Call_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &Calculator_Call_g_tc;
}
DDS_Long Calculator_Call_getDefaultDiscriminator()
{

    DDS_UnsignedLong maxValue = 0xFFFFFFFF;
    DDS_UnsignedLong i = 0;
    for (i = 0; i < maxValue; ++i) {
    
        if (i == 0xCBC6CEAA) continue;
     
        if (i == 0xCA019A14) continue;
     
        break;
    }
    return (DDS_Long)i;

}
        

RTIBool Calculator_Call_initialize(
    Calculator_Call* sample) {
  return ::Calculator_Call_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_Call_initialize_ex(
    Calculator_Call* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Calculator_Call_initialize_w_params(
        sample,&allocParams);
}

RTIBool Calculator_Call_initialize_w_params(
        Calculator_Call* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    sample->_d = Calculator_Call_getDefaultDiscriminator();

    if (!Calculator_addition_In_initialize_w_params(&sample->_u.addition,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!Calculator_subtraction_In_initialize_w_params(&sample->_u.subtraction,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!dds::rpc::UnknownOperation_initialize_w_params(&sample->_u.unknownOp,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Calculator_Call_finalize(
    Calculator_Call* sample)
{
    ::Calculator_Call_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_Call_finalize_ex(
    Calculator_Call* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Calculator_Call_finalize_w_params(
        sample,&deallocParams);
}

void Calculator_Call_finalize_w_params(
        Calculator_Call* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    Calculator_addition_In_finalize_w_params(&sample->_u.addition, deallocParams);
            

    Calculator_subtraction_In_finalize_w_params(&sample->_u.subtraction, deallocParams);
            

    dds::rpc::UnknownOperation_finalize_w_params(&sample->_u.unknownOp, deallocParams);
            

}

void Calculator_Call_finalize_optional_members(
    Calculator_Call* sample, RTIBool deletePointers)
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
          case 0xCBC6CEAA:
        {                                    
        
    Calculator_addition_In_finalize_optional_members(&sample->_u.addition, deallocParams->delete_pointers);
            

        } break;
      case 0xCA019A14:
        {                                    
        
    Calculator_subtraction_In_finalize_optional_members(&sample->_u.subtraction, deallocParams->delete_pointers);
            

        } break;
      default:
        {                                    
        
    dds::rpc::UnknownOperation_finalize_optional_members(&sample->_u.unknownOp, deallocParams->delete_pointers);
            

        };
              
    }
      
}

RTIBool Calculator_Call_copy(
    Calculator_Call* dst,
    const Calculator_Call* src)
{

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          case 0xCBC6CEAA:
        {                                    
        
    if (!Calculator_addition_In_copy(
        &dst->_u.addition, &src->_u.addition)) {
        return RTI_FALSE;
    }
            

        } break;
      case 0xCA019A14:
        {                                    
        
    if (!Calculator_subtraction_In_copy(
        &dst->_u.subtraction, &src->_u.subtraction)) {
        return RTI_FALSE;
    }
            

        } break;
      default:
        {                                    
        
    if (!dds::rpc::UnknownOperation_copy(
        &dst->_u.unknownOp, &src->_u.unknownOp)) {
        return RTI_FALSE;
    }
            

        };
              
    }
      

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Calculator_Call' sequence class.
 */
#define T Calculator_Call
#define TSeq Calculator_CallSeq
#define T_initialize_w_params ::Calculator_Call_initialize_w_params
#define T_finalize_w_params   ::Calculator_Call_finalize_w_params
#define T_copy       ::Calculator_Call_copy

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
const char *Calculator_RequestTYPENAME = "Calculator_Request";

DDS_TypeCode* Calculator_Request_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_Request_g_tc_members[2]=
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
            (char *)"data",/* Member name */
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

    static DDS_TypeCode Calculator_Request_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator_Request", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Calculator_Request_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_Request*/

    if (is_initialized) {
        return &Calculator_Request_g_tc;
    }


    Calculator_Request_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)dds::rpc::RequestHeader_get_typecode();
    Calculator_Request_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Calculator_Call_get_typecode();

    is_initialized = RTI_TRUE;

    return &Calculator_Request_g_tc;
}


RTIBool Calculator_Request_initialize(
    Calculator_Request* sample) {
  return ::Calculator_Request_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_Request_initialize_ex(
    Calculator_Request* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Calculator_Request_initialize_w_params(
        sample,&allocParams);
}

RTIBool Calculator_Request_initialize_w_params(
        Calculator_Request* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!dds::rpc::RequestHeader_initialize_w_params(&sample->header,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!Calculator_Call_initialize_w_params(&sample->data,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Calculator_Request_finalize(
    Calculator_Request* sample)
{
    ::Calculator_Request_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_Request_finalize_ex(
    Calculator_Request* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Calculator_Request_finalize_w_params(
        sample,&deallocParams);
}

void Calculator_Request_finalize_w_params(
        Calculator_Request* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    dds::rpc::RequestHeader_finalize_w_params(&sample->header, deallocParams);
            

    Calculator_Call_finalize_w_params(&sample->data, deallocParams);
            

}

void Calculator_Request_finalize_optional_members(
    Calculator_Request* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    dds::rpc::RequestHeader_finalize_optional_members(&sample->header, deallocParams->delete_pointers);
            

    Calculator_Call_finalize_optional_members(&sample->data, deallocParams->delete_pointers);
            

}

RTIBool Calculator_Request_copy(
    Calculator_Request* dst,
    const Calculator_Request* src)
{

    if (!dds::rpc::RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!Calculator_Call_copy(
        &dst->data, &src->data)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Calculator_Request' sequence class.
 */
#define T Calculator_Request
#define TSeq Calculator_RequestSeq
#define T_initialize_w_params ::Calculator_Request_initialize_w_params
#define T_finalize_w_params   ::Calculator_Request_finalize_w_params
#define T_copy       ::Calculator_Request_copy

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
const char *Calculator_ReturnTYPENAME = "Calculator_Return";

DDS_TypeCode* Calculator_Return_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_Return_g_tc_members[3]=
    {
        {
            (char *)"addition",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            0xCBC6CEAA, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"subtraction",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            0xCA019A14, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            RTI_CDR_NONKEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"unknownOp",/* Member name */
            {
                3,/* Representation ID */
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
        }
    };

    static DDS_TypeCode Calculator_Return_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        2,/* Default index */
        (char *)"Calculator_Return", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        Calculator_Return_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_Return*/

    if (is_initialized) {
        return &Calculator_Return_g_tc;
    }


    Calculator_Return_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Calculator_addition_Result_get_typecode();
    Calculator_Return_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Calculator_subtraction_Result_get_typecode();
    Calculator_Return_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)dds::rpc::UnknownOperation_get_typecode();

    Calculator_Return_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &Calculator_Return_g_tc;
}
DDS_Long Calculator_Return_getDefaultDiscriminator()
{

    DDS_UnsignedLong maxValue = 0xFFFFFFFF;
    DDS_UnsignedLong i = 0;
    for (i = 0; i < maxValue; ++i) {
    
        if (i == 0xCBC6CEAA) continue;
     
        if (i == 0xCA019A14) continue;
     
        break;
    }
    return (DDS_Long)i;

}
        

RTIBool Calculator_Return_initialize(
    Calculator_Return* sample) {
  return ::Calculator_Return_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_Return_initialize_ex(
    Calculator_Return* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Calculator_Return_initialize_w_params(
        sample,&allocParams);
}

RTIBool Calculator_Return_initialize_w_params(
        Calculator_Return* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    sample->_d = Calculator_Return_getDefaultDiscriminator();

    if (!Calculator_addition_Result_initialize_w_params(&sample->_u.addition,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!Calculator_subtraction_Result_initialize_w_params(&sample->_u.subtraction,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!dds::rpc::UnknownOperation_initialize_w_params(&sample->_u.unknownOp,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Calculator_Return_finalize(
    Calculator_Return* sample)
{
    ::Calculator_Return_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_Return_finalize_ex(
    Calculator_Return* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Calculator_Return_finalize_w_params(
        sample,&deallocParams);
}

void Calculator_Return_finalize_w_params(
        Calculator_Return* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    Calculator_addition_Result_finalize_w_params(&sample->_u.addition, deallocParams);
            

    Calculator_subtraction_Result_finalize_w_params(&sample->_u.subtraction, deallocParams);
            

    dds::rpc::UnknownOperation_finalize_w_params(&sample->_u.unknownOp, deallocParams);
            

}

void Calculator_Return_finalize_optional_members(
    Calculator_Return* sample, RTIBool deletePointers)
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
          case 0xCBC6CEAA:
        {                                    
        
    Calculator_addition_Result_finalize_optional_members(&sample->_u.addition, deallocParams->delete_pointers);
            

        } break;
      case 0xCA019A14:
        {                                    
        
    Calculator_subtraction_Result_finalize_optional_members(&sample->_u.subtraction, deallocParams->delete_pointers);
            

        } break;
      default:
        {                                    
        
    dds::rpc::UnknownOperation_finalize_optional_members(&sample->_u.unknownOp, deallocParams->delete_pointers);
            

        };
              
    }
      
}

RTIBool Calculator_Return_copy(
    Calculator_Return* dst,
    const Calculator_Return* src)
{

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          case 0xCBC6CEAA:
        {                                    
        
    if (!Calculator_addition_Result_copy(
        &dst->_u.addition, &src->_u.addition)) {
        return RTI_FALSE;
    }
            

        } break;
      case 0xCA019A14:
        {                                    
        
    if (!Calculator_subtraction_Result_copy(
        &dst->_u.subtraction, &src->_u.subtraction)) {
        return RTI_FALSE;
    }
            

        } break;
      default:
        {                                    
        
    if (!dds::rpc::UnknownOperation_copy(
        &dst->_u.unknownOp, &src->_u.unknownOp)) {
        return RTI_FALSE;
    }
            

        };
              
    }
      

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Calculator_Return' sequence class.
 */
#define T Calculator_Return
#define TSeq Calculator_ReturnSeq
#define T_initialize_w_params ::Calculator_Return_initialize_w_params
#define T_finalize_w_params   ::Calculator_Return_finalize_w_params
#define T_copy       ::Calculator_Return_copy

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
const char *Calculator_ReplyTYPENAME = "Calculator_Reply";

DDS_TypeCode* Calculator_Reply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_Reply_g_tc_members[2]=
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
            (char *)"data",/* Member name */
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

    static DDS_TypeCode Calculator_Reply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator_Reply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Calculator_Reply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_Reply*/

    if (is_initialized) {
        return &Calculator_Reply_g_tc;
    }


    Calculator_Reply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)dds::rpc::ReplyHeader_get_typecode();
    Calculator_Reply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Calculator_Return_get_typecode();

    is_initialized = RTI_TRUE;

    return &Calculator_Reply_g_tc;
}


RTIBool Calculator_Reply_initialize(
    Calculator_Reply* sample) {
  return ::Calculator_Reply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_Reply_initialize_ex(
    Calculator_Reply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::Calculator_Reply_initialize_w_params(
        sample,&allocParams);
}

RTIBool Calculator_Reply_initialize_w_params(
        Calculator_Reply* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!dds::rpc::ReplyHeader_initialize_w_params(&sample->header,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!Calculator_Return_initialize_w_params(&sample->data,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Calculator_Reply_finalize(
    Calculator_Reply* sample)
{
    ::Calculator_Reply_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_Reply_finalize_ex(
    Calculator_Reply* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::Calculator_Reply_finalize_w_params(
        sample,&deallocParams);
}

void Calculator_Reply_finalize_w_params(
        Calculator_Reply* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    dds::rpc::ReplyHeader_finalize_w_params(&sample->header, deallocParams);
            

    Calculator_Return_finalize_w_params(&sample->data, deallocParams);
            

}

void Calculator_Reply_finalize_optional_members(
    Calculator_Reply* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    dds::rpc::ReplyHeader_finalize_optional_members(&sample->header, deallocParams->delete_pointers);
            

    Calculator_Return_finalize_optional_members(&sample->data, deallocParams->delete_pointers);
            

}

RTIBool Calculator_Reply_copy(
    Calculator_Reply* dst,
    const Calculator_Reply* src)
{

    if (!dds::rpc::ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!Calculator_Return_copy(
        &dst->data, &src->data)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Calculator_Reply' sequence class.
 */
#define T Calculator_Reply
#define TSeq Calculator_ReplySeq
#define T_initialize_w_params ::Calculator_Reply_initialize_w_params
#define T_finalize_w_params   ::Calculator_Reply_finalize_w_params
#define T_copy       ::Calculator_Reply_copy

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
