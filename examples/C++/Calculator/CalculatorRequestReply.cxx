
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
const char *Calculator_additionRequestTYPENAME = "Calculator_additionRequest";

DDS_TypeCode* Calculator_additionRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_additionRequest_g_tc_members[3]=
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
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
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
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"value2",/* Member name */
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

    static DDS_TypeCode Calculator_additionRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator_additionRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        Calculator_additionRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_additionRequest*/

    if (is_initialized) {
        return &Calculator_additionRequest_g_tc;
    }


    Calculator_additionRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    Calculator_additionRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Calculator_additionRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &Calculator_additionRequest_g_tc;
}


RTIBool Calculator_additionRequest_initialize(
    Calculator_additionRequest* sample) {
  return Calculator_additionRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_additionRequest_initialize_ex(
    Calculator_additionRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->value1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->value2)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void Calculator_additionRequest_finalize(
    Calculator_additionRequest* sample)
{
    Calculator_additionRequest_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_additionRequest_finalize_ex(
    Calculator_additionRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            



}

RTIBool Calculator_additionRequest_copy(
    Calculator_additionRequest* dst,
    const Calculator_additionRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

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
 * Configure and implement 'Calculator_additionRequest' sequence class.
 */
#define T Calculator_additionRequest
#define TSeq Calculator_additionRequestSeq
#define T_initialize_ex Calculator_additionRequest_initialize_ex
#define T_finalize_ex   Calculator_additionRequest_finalize_ex
#define T_copy       Calculator_additionRequest_copy

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
const char *Calculator_additionReplyTYPENAME = "Calculator_additionReply";

DDS_TypeCode* Calculator_additionReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_additionReply_g_tc_members[2]=
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
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"addition_ret",/* Member name */
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

    static DDS_TypeCode Calculator_additionReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator_additionReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Calculator_additionReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_additionReply*/

    if (is_initialized) {
        return &Calculator_additionReply_g_tc;
    }


    Calculator_additionReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    Calculator_additionReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &Calculator_additionReply_g_tc;
}


RTIBool Calculator_additionReply_initialize(
    Calculator_additionReply* sample) {
  return Calculator_additionReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_additionReply_initialize_ex(
    Calculator_additionReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->addition_ret)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void Calculator_additionReply_finalize(
    Calculator_additionReply* sample)
{
    Calculator_additionReply_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_additionReply_finalize_ex(
    Calculator_additionReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            


}

RTIBool Calculator_additionReply_copy(
    Calculator_additionReply* dst,
    const Calculator_additionReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->addition_ret, &src->addition_ret)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Calculator_additionReply' sequence class.
 */
#define T Calculator_additionReply
#define TSeq Calculator_additionReplySeq
#define T_initialize_ex Calculator_additionReply_initialize_ex
#define T_finalize_ex   Calculator_additionReply_finalize_ex
#define T_copy       Calculator_additionReply_copy

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
const char *Calculator_subtractionRequestTYPENAME = "Calculator_subtractionRequest";

DDS_TypeCode* Calculator_subtractionRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_subtractionRequest_g_tc_members[3]=
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
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
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
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"value2",/* Member name */
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

    static DDS_TypeCode Calculator_subtractionRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator_subtractionRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        Calculator_subtractionRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_subtractionRequest*/

    if (is_initialized) {
        return &Calculator_subtractionRequest_g_tc;
    }


    Calculator_subtractionRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    Calculator_subtractionRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Calculator_subtractionRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &Calculator_subtractionRequest_g_tc;
}


RTIBool Calculator_subtractionRequest_initialize(
    Calculator_subtractionRequest* sample) {
  return Calculator_subtractionRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_subtractionRequest_initialize_ex(
    Calculator_subtractionRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->value1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->value2)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void Calculator_subtractionRequest_finalize(
    Calculator_subtractionRequest* sample)
{
    Calculator_subtractionRequest_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_subtractionRequest_finalize_ex(
    Calculator_subtractionRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            



}

RTIBool Calculator_subtractionRequest_copy(
    Calculator_subtractionRequest* dst,
    const Calculator_subtractionRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

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
 * Configure and implement 'Calculator_subtractionRequest' sequence class.
 */
#define T Calculator_subtractionRequest
#define TSeq Calculator_subtractionRequestSeq
#define T_initialize_ex Calculator_subtractionRequest_initialize_ex
#define T_finalize_ex   Calculator_subtractionRequest_finalize_ex
#define T_copy       Calculator_subtractionRequest_copy

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
const char *Calculator_subtractionReplyTYPENAME = "Calculator_subtractionReply";

DDS_TypeCode* Calculator_subtractionReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Calculator_subtractionReply_g_tc_members[2]=
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
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"subtraction_ret",/* Member name */
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

    static DDS_TypeCode Calculator_subtractionReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator_subtractionReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Calculator_subtractionReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Calculator_subtractionReply*/

    if (is_initialized) {
        return &Calculator_subtractionReply_g_tc;
    }


    Calculator_subtractionReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    Calculator_subtractionReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &Calculator_subtractionReply_g_tc;
}


RTIBool Calculator_subtractionReply_initialize(
    Calculator_subtractionReply* sample) {
  return Calculator_subtractionReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Calculator_subtractionReply_initialize_ex(
    Calculator_subtractionReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->subtraction_ret)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void Calculator_subtractionReply_finalize(
    Calculator_subtractionReply* sample)
{
    Calculator_subtractionReply_finalize_ex(sample,RTI_TRUE);
}
        
void Calculator_subtractionReply_finalize_ex(
    Calculator_subtractionReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            


}

RTIBool Calculator_subtractionReply_copy(
    Calculator_subtractionReply* dst,
    const Calculator_subtractionReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->subtraction_ret, &src->subtraction_ret)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Calculator_subtractionReply' sequence class.
 */
#define T Calculator_subtractionReply
#define TSeq Calculator_subtractionReplySeq
#define T_initialize_ex Calculator_subtractionReply_initialize_ex
#define T_finalize_ex   Calculator_subtractionReply_finalize_ex
#define T_copy       Calculator_subtractionReply_copy

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

