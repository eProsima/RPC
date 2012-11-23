
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SequenceTestRequestReply.idl using "rtiddsgen".
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



#include "SequenceTestRequestReply.h"

/* ========================================================================= */
const char *SequenceTest_getSLongRequestTYPENAME = "SequenceTest_getSLongRequest";

DDS_TypeCode* SequenceTest_getSLongRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SequenceTest_getSLongRequest_g_tc_members[3]=
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
            DDS_BOOLEAN_TRUE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"l1",/* Member name */
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
            (char *)"l2",/* Member name */
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

    static DDS_TypeCode SequenceTest_getSLongRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"SequenceTest_getSLongRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        SequenceTest_getSLongRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SequenceTest_getSLongRequest*/

    if (is_initialized) {
        return &SequenceTest_getSLongRequest_g_tc;
    }


    SequenceTest_getSLongRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    SequenceTest_getSLongRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)largo_get_typecode();
    SequenceTest_getSLongRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)largo_get_typecode();

    is_initialized = RTI_TRUE;

    return &SequenceTest_getSLongRequest_g_tc;
}


RTIBool SequenceTest_getSLongRequest_initialize(
    SequenceTest_getSLongRequest* sample) {
  return SequenceTest_getSLongRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool SequenceTest_getSLongRequest_initialize_ex(
    SequenceTest_getSLongRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!largo_initialize_ex(&sample->l1,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!largo_initialize_ex(&sample->l2,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void SequenceTest_getSLongRequest_finalize(
    SequenceTest_getSLongRequest* sample)
{
    SequenceTest_getSLongRequest_finalize_ex(sample,RTI_TRUE);
}
        
void SequenceTest_getSLongRequest_finalize_ex(
    SequenceTest_getSLongRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
    largo_finalize_ex(&sample->l1,deletePointers);
            
    largo_finalize_ex(&sample->l2,deletePointers);
            
}

RTIBool SequenceTest_getSLongRequest_copy(
    SequenceTest_getSLongRequest* dst,
    const SequenceTest_getSLongRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!largo_copy(
        &dst->l1, &src->l1)) {
        return RTI_FALSE;
    }
            
    if (!largo_copy(
        &dst->l2, &src->l2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SequenceTest_getSLongRequest' sequence class.
 */
#define T SequenceTest_getSLongRequest
#define TSeq SequenceTest_getSLongRequestSeq
#define T_initialize_ex SequenceTest_getSLongRequest_initialize_ex
#define T_finalize_ex   SequenceTest_getSLongRequest_finalize_ex
#define T_copy       SequenceTest_getSLongRequest_copy

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
const char *SequenceTest_getSLongReplyTYPENAME = "SequenceTest_getSLongReply";

DDS_TypeCode* SequenceTest_getSLongReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SequenceTest_getSLongReply_g_tc_members[4]=
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
            DDS_BOOLEAN_TRUE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"l2",/* Member name */
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
            (char *)"l3",/* Member name */
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
            (char *)"getSLong_ret",/* Member name */
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

    static DDS_TypeCode SequenceTest_getSLongReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"SequenceTest_getSLongReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        SequenceTest_getSLongReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SequenceTest_getSLongReply*/

    if (is_initialized) {
        return &SequenceTest_getSLongReply_g_tc;
    }


    SequenceTest_getSLongReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    SequenceTest_getSLongReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)largo_get_typecode();
    SequenceTest_getSLongReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)largo_get_typecode();
    SequenceTest_getSLongReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)largo_get_typecode();

    is_initialized = RTI_TRUE;

    return &SequenceTest_getSLongReply_g_tc;
}


RTIBool SequenceTest_getSLongReply_initialize(
    SequenceTest_getSLongReply* sample) {
  return SequenceTest_getSLongReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool SequenceTest_getSLongReply_initialize_ex(
    SequenceTest_getSLongReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!largo_initialize_ex(&sample->l2,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!largo_initialize_ex(&sample->l3,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!largo_initialize_ex(&sample->getSLong_ret,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void SequenceTest_getSLongReply_finalize(
    SequenceTest_getSLongReply* sample)
{
    SequenceTest_getSLongReply_finalize_ex(sample,RTI_TRUE);
}
        
void SequenceTest_getSLongReply_finalize_ex(
    SequenceTest_getSLongReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
    largo_finalize_ex(&sample->l2,deletePointers);
            
    largo_finalize_ex(&sample->l3,deletePointers);
            
    largo_finalize_ex(&sample->getSLong_ret,deletePointers);
            
}

RTIBool SequenceTest_getSLongReply_copy(
    SequenceTest_getSLongReply* dst,
    const SequenceTest_getSLongReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!largo_copy(
        &dst->l2, &src->l2)) {
        return RTI_FALSE;
    }
            
    if (!largo_copy(
        &dst->l3, &src->l3)) {
        return RTI_FALSE;
    }
            
    if (!largo_copy(
        &dst->getSLong_ret, &src->getSLong_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SequenceTest_getSLongReply' sequence class.
 */
#define T SequenceTest_getSLongReply
#define TSeq SequenceTest_getSLongReplySeq
#define T_initialize_ex SequenceTest_getSLongReply_initialize_ex
#define T_finalize_ex   SequenceTest_getSLongReply_finalize_ex
#define T_copy       SequenceTest_getSLongReply_copy

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
const char *SequenceTest_getStringRequestTYPENAME = "SequenceTest_getStringRequest";

DDS_TypeCode* SequenceTest_getStringRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SequenceTest_getStringRequest_g_tc_members[3]=
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
            DDS_BOOLEAN_TRUE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"s1",/* Member name */
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
            (char *)"s2",/* Member name */
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

    static DDS_TypeCode SequenceTest_getStringRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"SequenceTest_getStringRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        SequenceTest_getStringRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SequenceTest_getStringRequest*/

    if (is_initialized) {
        return &SequenceTest_getStringRequest_g_tc;
    }


    SequenceTest_getStringRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    SequenceTest_getStringRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)cadena_get_typecode();
    SequenceTest_getStringRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)cadena_get_typecode();

    is_initialized = RTI_TRUE;

    return &SequenceTest_getStringRequest_g_tc;
}


RTIBool SequenceTest_getStringRequest_initialize(
    SequenceTest_getStringRequest* sample) {
  return SequenceTest_getStringRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool SequenceTest_getStringRequest_initialize_ex(
    SequenceTest_getStringRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!cadena_initialize_ex(&sample->s1,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!cadena_initialize_ex(&sample->s2,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void SequenceTest_getStringRequest_finalize(
    SequenceTest_getStringRequest* sample)
{
    SequenceTest_getStringRequest_finalize_ex(sample,RTI_TRUE);
}
        
void SequenceTest_getStringRequest_finalize_ex(
    SequenceTest_getStringRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
    cadena_finalize_ex(&sample->s1,deletePointers);
            
    cadena_finalize_ex(&sample->s2,deletePointers);
            
}

RTIBool SequenceTest_getStringRequest_copy(
    SequenceTest_getStringRequest* dst,
    const SequenceTest_getStringRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!cadena_copy(
        &dst->s1, &src->s1)) {
        return RTI_FALSE;
    }
            
    if (!cadena_copy(
        &dst->s2, &src->s2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SequenceTest_getStringRequest' sequence class.
 */
#define T SequenceTest_getStringRequest
#define TSeq SequenceTest_getStringRequestSeq
#define T_initialize_ex SequenceTest_getStringRequest_initialize_ex
#define T_finalize_ex   SequenceTest_getStringRequest_finalize_ex
#define T_copy       SequenceTest_getStringRequest_copy

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
const char *SequenceTest_getStringReplyTYPENAME = "SequenceTest_getStringReply";

DDS_TypeCode* SequenceTest_getStringReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SequenceTest_getStringReply_g_tc_members[4]=
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
            DDS_BOOLEAN_TRUE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"s2",/* Member name */
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
            (char *)"s3",/* Member name */
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
            (char *)"getString_ret",/* Member name */
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

    static DDS_TypeCode SequenceTest_getStringReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"SequenceTest_getStringReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        SequenceTest_getStringReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SequenceTest_getStringReply*/

    if (is_initialized) {
        return &SequenceTest_getStringReply_g_tc;
    }


    SequenceTest_getStringReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    SequenceTest_getStringReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)cadena_get_typecode();
    SequenceTest_getStringReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)cadena_get_typecode();
    SequenceTest_getStringReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)cadena_get_typecode();

    is_initialized = RTI_TRUE;

    return &SequenceTest_getStringReply_g_tc;
}


RTIBool SequenceTest_getStringReply_initialize(
    SequenceTest_getStringReply* sample) {
  return SequenceTest_getStringReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool SequenceTest_getStringReply_initialize_ex(
    SequenceTest_getStringReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!cadena_initialize_ex(&sample->s2,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!cadena_initialize_ex(&sample->s3,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!cadena_initialize_ex(&sample->getString_ret,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void SequenceTest_getStringReply_finalize(
    SequenceTest_getStringReply* sample)
{
    SequenceTest_getStringReply_finalize_ex(sample,RTI_TRUE);
}
        
void SequenceTest_getStringReply_finalize_ex(
    SequenceTest_getStringReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
    cadena_finalize_ex(&sample->s2,deletePointers);
            
    cadena_finalize_ex(&sample->s3,deletePointers);
            
    cadena_finalize_ex(&sample->getString_ret,deletePointers);
            
}

RTIBool SequenceTest_getStringReply_copy(
    SequenceTest_getStringReply* dst,
    const SequenceTest_getStringReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!cadena_copy(
        &dst->s2, &src->s2)) {
        return RTI_FALSE;
    }
            
    if (!cadena_copy(
        &dst->s3, &src->s3)) {
        return RTI_FALSE;
    }
            
    if (!cadena_copy(
        &dst->getString_ret, &src->getString_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SequenceTest_getStringReply' sequence class.
 */
#define T SequenceTest_getStringReply
#define TSeq SequenceTest_getStringReplySeq
#define T_initialize_ex SequenceTest_getStringReply_initialize_ex
#define T_finalize_ex   SequenceTest_getStringReply_finalize_ex
#define T_copy       SequenceTest_getStringReply_copy

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
const char *SequenceTest_getStringBoundedRequestTYPENAME = "SequenceTest_getStringBoundedRequest";

DDS_TypeCode* SequenceTest_getStringBoundedRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SequenceTest_getStringBoundedRequest_g_tc_members[3]=
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
            DDS_BOOLEAN_TRUE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"sb1",/* Member name */
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
            (char *)"sb2",/* Member name */
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

    static DDS_TypeCode SequenceTest_getStringBoundedRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"SequenceTest_getStringBoundedRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        SequenceTest_getStringBoundedRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SequenceTest_getStringBoundedRequest*/

    if (is_initialized) {
        return &SequenceTest_getStringBoundedRequest_g_tc;
    }


    SequenceTest_getStringBoundedRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    SequenceTest_getStringBoundedRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)dattos_get_typecode();
    SequenceTest_getStringBoundedRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)dattos_get_typecode();

    is_initialized = RTI_TRUE;

    return &SequenceTest_getStringBoundedRequest_g_tc;
}


RTIBool SequenceTest_getStringBoundedRequest_initialize(
    SequenceTest_getStringBoundedRequest* sample) {
  return SequenceTest_getStringBoundedRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool SequenceTest_getStringBoundedRequest_initialize_ex(
    SequenceTest_getStringBoundedRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!dattos_initialize_ex(&sample->sb1,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!dattos_initialize_ex(&sample->sb2,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void SequenceTest_getStringBoundedRequest_finalize(
    SequenceTest_getStringBoundedRequest* sample)
{
    SequenceTest_getStringBoundedRequest_finalize_ex(sample,RTI_TRUE);
}
        
void SequenceTest_getStringBoundedRequest_finalize_ex(
    SequenceTest_getStringBoundedRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
    dattos_finalize_ex(&sample->sb1,deletePointers);
            
    dattos_finalize_ex(&sample->sb2,deletePointers);
            
}

RTIBool SequenceTest_getStringBoundedRequest_copy(
    SequenceTest_getStringBoundedRequest* dst,
    const SequenceTest_getStringBoundedRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!dattos_copy(
        &dst->sb1, &src->sb1)) {
        return RTI_FALSE;
    }
            
    if (!dattos_copy(
        &dst->sb2, &src->sb2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SequenceTest_getStringBoundedRequest' sequence class.
 */
#define T SequenceTest_getStringBoundedRequest
#define TSeq SequenceTest_getStringBoundedRequestSeq
#define T_initialize_ex SequenceTest_getStringBoundedRequest_initialize_ex
#define T_finalize_ex   SequenceTest_getStringBoundedRequest_finalize_ex
#define T_copy       SequenceTest_getStringBoundedRequest_copy

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
const char *SequenceTest_getStringBoundedReplyTYPENAME = "SequenceTest_getStringBoundedReply";

DDS_TypeCode* SequenceTest_getStringBoundedReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SequenceTest_getStringBoundedReply_g_tc_members[4]=
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
            DDS_BOOLEAN_TRUE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"sb2",/* Member name */
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
            (char *)"sb3",/* Member name */
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
            (char *)"getStringBounded_ret",/* Member name */
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

    static DDS_TypeCode SequenceTest_getStringBoundedReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"SequenceTest_getStringBoundedReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        SequenceTest_getStringBoundedReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SequenceTest_getStringBoundedReply*/

    if (is_initialized) {
        return &SequenceTest_getStringBoundedReply_g_tc;
    }


    SequenceTest_getStringBoundedReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    SequenceTest_getStringBoundedReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)dattos_get_typecode();
    SequenceTest_getStringBoundedReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)dattos_get_typecode();
    SequenceTest_getStringBoundedReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)dattos_get_typecode();

    is_initialized = RTI_TRUE;

    return &SequenceTest_getStringBoundedReply_g_tc;
}


RTIBool SequenceTest_getStringBoundedReply_initialize(
    SequenceTest_getStringBoundedReply* sample) {
  return SequenceTest_getStringBoundedReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool SequenceTest_getStringBoundedReply_initialize_ex(
    SequenceTest_getStringBoundedReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!dattos_initialize_ex(&sample->sb2,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!dattos_initialize_ex(&sample->sb3,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!dattos_initialize_ex(&sample->getStringBounded_ret,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void SequenceTest_getStringBoundedReply_finalize(
    SequenceTest_getStringBoundedReply* sample)
{
    SequenceTest_getStringBoundedReply_finalize_ex(sample,RTI_TRUE);
}
        
void SequenceTest_getStringBoundedReply_finalize_ex(
    SequenceTest_getStringBoundedReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
    dattos_finalize_ex(&sample->sb2,deletePointers);
            
    dattos_finalize_ex(&sample->sb3,deletePointers);
            
    dattos_finalize_ex(&sample->getStringBounded_ret,deletePointers);
            
}

RTIBool SequenceTest_getStringBoundedReply_copy(
    SequenceTest_getStringBoundedReply* dst,
    const SequenceTest_getStringBoundedReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!dattos_copy(
        &dst->sb2, &src->sb2)) {
        return RTI_FALSE;
    }
            
    if (!dattos_copy(
        &dst->sb3, &src->sb3)) {
        return RTI_FALSE;
    }
            
    if (!dattos_copy(
        &dst->getStringBounded_ret, &src->getStringBounded_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SequenceTest_getStringBoundedReply' sequence class.
 */
#define T SequenceTest_getStringBoundedReply
#define TSeq SequenceTest_getStringBoundedReplySeq
#define T_initialize_ex SequenceTest_getStringBoundedReply_initialize_ex
#define T_finalize_ex   SequenceTest_getStringBoundedReply_finalize_ex
#define T_copy       SequenceTest_getStringBoundedReply_copy

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

