
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BasicTypeTestRequestReply.idl using "rtiddsgen".
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



#include "BasicTypeTestRequestReply.h"

/* ========================================================================= */
const char *BasicTypeTest_getOctetRequestTYPENAME = "BasicTypeTest_getOctetRequest";

DDS_TypeCode* BasicTypeTest_getOctetRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getOctetRequest_g_tc_members[3]=
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
            (char *)"oc1",/* Member name */
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
            (char *)"oc2",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getOctetRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getOctetRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BasicTypeTest_getOctetRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getOctetRequest*/

    if (is_initialized) {
        return &BasicTypeTest_getOctetRequest_g_tc;
    }


    BasicTypeTest_getOctetRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    BasicTypeTest_getOctetRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    BasicTypeTest_getOctetRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getOctetRequest_g_tc;
}


RTIBool BasicTypeTest_getOctetRequest_initialize(
    BasicTypeTest_getOctetRequest* sample) {
  return BasicTypeTest_getOctetRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getOctetRequest_initialize_ex(
    BasicTypeTest_getOctetRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initOctet(&sample->oc1)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initOctet(&sample->oc2)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getOctetRequest_finalize(
    BasicTypeTest_getOctetRequest* sample)
{
    BasicTypeTest_getOctetRequest_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getOctetRequest_finalize_ex(
    BasicTypeTest_getOctetRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getOctetRequest_copy(
    BasicTypeTest_getOctetRequest* dst,
    const BasicTypeTest_getOctetRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyOctet(
        &dst->oc1, &src->oc1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyOctet(
        &dst->oc2, &src->oc2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getOctetRequest' sequence class.
 */
#define T BasicTypeTest_getOctetRequest
#define TSeq BasicTypeTest_getOctetRequestSeq
#define T_initialize_ex BasicTypeTest_getOctetRequest_initialize_ex
#define T_finalize_ex   BasicTypeTest_getOctetRequest_finalize_ex
#define T_copy       BasicTypeTest_getOctetRequest_copy

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
const char *BasicTypeTest_getOctetReplyTYPENAME = "BasicTypeTest_getOctetReply";

DDS_TypeCode* BasicTypeTest_getOctetReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getOctetReply_g_tc_members[4]=
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
            (char *)"oc2",/* Member name */
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
            (char *)"oc3",/* Member name */
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
            (char *)"getOctet_ret",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getOctetReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getOctetReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        BasicTypeTest_getOctetReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getOctetReply*/

    if (is_initialized) {
        return &BasicTypeTest_getOctetReply_g_tc;
    }


    BasicTypeTest_getOctetReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    BasicTypeTest_getOctetReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    BasicTypeTest_getOctetReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    BasicTypeTest_getOctetReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getOctetReply_g_tc;
}


RTIBool BasicTypeTest_getOctetReply_initialize(
    BasicTypeTest_getOctetReply* sample) {
  return BasicTypeTest_getOctetReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getOctetReply_initialize_ex(
    BasicTypeTest_getOctetReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initOctet(&sample->oc2)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initOctet(&sample->oc3)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initOctet(&sample->getOctet_ret)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getOctetReply_finalize(
    BasicTypeTest_getOctetReply* sample)
{
    BasicTypeTest_getOctetReply_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getOctetReply_finalize_ex(
    BasicTypeTest_getOctetReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getOctetReply_copy(
    BasicTypeTest_getOctetReply* dst,
    const BasicTypeTest_getOctetReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyOctet(
        &dst->oc2, &src->oc2)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyOctet(
        &dst->oc3, &src->oc3)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyOctet(
        &dst->getOctet_ret, &src->getOctet_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getOctetReply' sequence class.
 */
#define T BasicTypeTest_getOctetReply
#define TSeq BasicTypeTest_getOctetReplySeq
#define T_initialize_ex BasicTypeTest_getOctetReply_initialize_ex
#define T_finalize_ex   BasicTypeTest_getOctetReply_finalize_ex
#define T_copy       BasicTypeTest_getOctetReply_copy

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
const char *BasicTypeTest_getCharRequestTYPENAME = "BasicTypeTest_getCharRequest";

DDS_TypeCode* BasicTypeTest_getCharRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getCharRequest_g_tc_members[3]=
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
            (char *)"ch1",/* Member name */
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
            (char *)"ch2",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getCharRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getCharRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BasicTypeTest_getCharRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getCharRequest*/

    if (is_initialized) {
        return &BasicTypeTest_getCharRequest_g_tc;
    }


    BasicTypeTest_getCharRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    BasicTypeTest_getCharRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    BasicTypeTest_getCharRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getCharRequest_g_tc;
}


RTIBool BasicTypeTest_getCharRequest_initialize(
    BasicTypeTest_getCharRequest* sample) {
  return BasicTypeTest_getCharRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getCharRequest_initialize_ex(
    BasicTypeTest_getCharRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initChar(&sample->ch1)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initChar(&sample->ch2)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getCharRequest_finalize(
    BasicTypeTest_getCharRequest* sample)
{
    BasicTypeTest_getCharRequest_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getCharRequest_finalize_ex(
    BasicTypeTest_getCharRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getCharRequest_copy(
    BasicTypeTest_getCharRequest* dst,
    const BasicTypeTest_getCharRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyChar(
        &dst->ch1, &src->ch1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyChar(
        &dst->ch2, &src->ch2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getCharRequest' sequence class.
 */
#define T BasicTypeTest_getCharRequest
#define TSeq BasicTypeTest_getCharRequestSeq
#define T_initialize_ex BasicTypeTest_getCharRequest_initialize_ex
#define T_finalize_ex   BasicTypeTest_getCharRequest_finalize_ex
#define T_copy       BasicTypeTest_getCharRequest_copy

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
const char *BasicTypeTest_getCharReplyTYPENAME = "BasicTypeTest_getCharReply";

DDS_TypeCode* BasicTypeTest_getCharReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getCharReply_g_tc_members[4]=
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
            (char *)"ch2",/* Member name */
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
            (char *)"ch3",/* Member name */
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
            (char *)"getChar_ret",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getCharReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getCharReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        BasicTypeTest_getCharReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getCharReply*/

    if (is_initialized) {
        return &BasicTypeTest_getCharReply_g_tc;
    }


    BasicTypeTest_getCharReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    BasicTypeTest_getCharReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    BasicTypeTest_getCharReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    BasicTypeTest_getCharReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getCharReply_g_tc;
}


RTIBool BasicTypeTest_getCharReply_initialize(
    BasicTypeTest_getCharReply* sample) {
  return BasicTypeTest_getCharReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getCharReply_initialize_ex(
    BasicTypeTest_getCharReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initChar(&sample->ch2)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initChar(&sample->ch3)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initChar(&sample->getChar_ret)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getCharReply_finalize(
    BasicTypeTest_getCharReply* sample)
{
    BasicTypeTest_getCharReply_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getCharReply_finalize_ex(
    BasicTypeTest_getCharReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getCharReply_copy(
    BasicTypeTest_getCharReply* dst,
    const BasicTypeTest_getCharReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyChar(
        &dst->ch2, &src->ch2)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyChar(
        &dst->ch3, &src->ch3)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyChar(
        &dst->getChar_ret, &src->getChar_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getCharReply' sequence class.
 */
#define T BasicTypeTest_getCharReply
#define TSeq BasicTypeTest_getCharReplySeq
#define T_initialize_ex BasicTypeTest_getCharReply_initialize_ex
#define T_finalize_ex   BasicTypeTest_getCharReply_finalize_ex
#define T_copy       BasicTypeTest_getCharReply_copy

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
const char *BasicTypeTest_getWCharRequestTYPENAME = "BasicTypeTest_getWCharRequest";

DDS_TypeCode* BasicTypeTest_getWCharRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getWCharRequest_g_tc_members[3]=
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
            (char *)"wch1",/* Member name */
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
            (char *)"wch2",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getWCharRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getWCharRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BasicTypeTest_getWCharRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getWCharRequest*/

    if (is_initialized) {
        return &BasicTypeTest_getWCharRequest_g_tc;
    }


    BasicTypeTest_getWCharRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    BasicTypeTest_getWCharRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_wchar;
    BasicTypeTest_getWCharRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_wchar;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getWCharRequest_g_tc;
}


RTIBool BasicTypeTest_getWCharRequest_initialize(
    BasicTypeTest_getWCharRequest* sample) {
  return BasicTypeTest_getWCharRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getWCharRequest_initialize_ex(
    BasicTypeTest_getWCharRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initWchar(&sample->wch1)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initWchar(&sample->wch2)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getWCharRequest_finalize(
    BasicTypeTest_getWCharRequest* sample)
{
    BasicTypeTest_getWCharRequest_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getWCharRequest_finalize_ex(
    BasicTypeTest_getWCharRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getWCharRequest_copy(
    BasicTypeTest_getWCharRequest* dst,
    const BasicTypeTest_getWCharRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyWchar(
        &dst->wch1, &src->wch1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyWchar(
        &dst->wch2, &src->wch2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getWCharRequest' sequence class.
 */
#define T BasicTypeTest_getWCharRequest
#define TSeq BasicTypeTest_getWCharRequestSeq
#define T_initialize_ex BasicTypeTest_getWCharRequest_initialize_ex
#define T_finalize_ex   BasicTypeTest_getWCharRequest_finalize_ex
#define T_copy       BasicTypeTest_getWCharRequest_copy

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
const char *BasicTypeTest_getWCharReplyTYPENAME = "BasicTypeTest_getWCharReply";

DDS_TypeCode* BasicTypeTest_getWCharReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getWCharReply_g_tc_members[4]=
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
            (char *)"wch2",/* Member name */
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
            (char *)"wch3",/* Member name */
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
            (char *)"getWChar_ret",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getWCharReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getWCharReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        BasicTypeTest_getWCharReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getWCharReply*/

    if (is_initialized) {
        return &BasicTypeTest_getWCharReply_g_tc;
    }


    BasicTypeTest_getWCharReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    BasicTypeTest_getWCharReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_wchar;
    BasicTypeTest_getWCharReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_wchar;
    BasicTypeTest_getWCharReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_wchar;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getWCharReply_g_tc;
}


RTIBool BasicTypeTest_getWCharReply_initialize(
    BasicTypeTest_getWCharReply* sample) {
  return BasicTypeTest_getWCharReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getWCharReply_initialize_ex(
    BasicTypeTest_getWCharReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initWchar(&sample->wch2)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initWchar(&sample->wch3)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initWchar(&sample->getWChar_ret)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getWCharReply_finalize(
    BasicTypeTest_getWCharReply* sample)
{
    BasicTypeTest_getWCharReply_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getWCharReply_finalize_ex(
    BasicTypeTest_getWCharReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getWCharReply_copy(
    BasicTypeTest_getWCharReply* dst,
    const BasicTypeTest_getWCharReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyWchar(
        &dst->wch2, &src->wch2)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyWchar(
        &dst->wch3, &src->wch3)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyWchar(
        &dst->getWChar_ret, &src->getWChar_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getWCharReply' sequence class.
 */
#define T BasicTypeTest_getWCharReply
#define TSeq BasicTypeTest_getWCharReplySeq
#define T_initialize_ex BasicTypeTest_getWCharReply_initialize_ex
#define T_finalize_ex   BasicTypeTest_getWCharReply_finalize_ex
#define T_copy       BasicTypeTest_getWCharReply_copy

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
const char *BasicTypeTest_getShortRequestTYPENAME = "BasicTypeTest_getShortRequest";

DDS_TypeCode* BasicTypeTest_getShortRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getShortRequest_g_tc_members[3]=
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
            (char *)"sh1",/* Member name */
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
            (char *)"sh2",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getShortRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getShortRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BasicTypeTest_getShortRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getShortRequest*/

    if (is_initialized) {
        return &BasicTypeTest_getShortRequest_g_tc;
    }


    BasicTypeTest_getShortRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    BasicTypeTest_getShortRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    BasicTypeTest_getShortRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getShortRequest_g_tc;
}


RTIBool BasicTypeTest_getShortRequest_initialize(
    BasicTypeTest_getShortRequest* sample) {
  return BasicTypeTest_getShortRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getShortRequest_initialize_ex(
    BasicTypeTest_getShortRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initShort(&sample->sh1)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initShort(&sample->sh2)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getShortRequest_finalize(
    BasicTypeTest_getShortRequest* sample)
{
    BasicTypeTest_getShortRequest_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getShortRequest_finalize_ex(
    BasicTypeTest_getShortRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getShortRequest_copy(
    BasicTypeTest_getShortRequest* dst,
    const BasicTypeTest_getShortRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyShort(
        &dst->sh1, &src->sh1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyShort(
        &dst->sh2, &src->sh2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getShortRequest' sequence class.
 */
#define T BasicTypeTest_getShortRequest
#define TSeq BasicTypeTest_getShortRequestSeq
#define T_initialize_ex BasicTypeTest_getShortRequest_initialize_ex
#define T_finalize_ex   BasicTypeTest_getShortRequest_finalize_ex
#define T_copy       BasicTypeTest_getShortRequest_copy

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
const char *BasicTypeTest_getShortReplyTYPENAME = "BasicTypeTest_getShortReply";

DDS_TypeCode* BasicTypeTest_getShortReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getShortReply_g_tc_members[4]=
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
            (char *)"sh2",/* Member name */
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
            (char *)"sh3",/* Member name */
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
            (char *)"getShort_ret",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getShortReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getShortReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        BasicTypeTest_getShortReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getShortReply*/

    if (is_initialized) {
        return &BasicTypeTest_getShortReply_g_tc;
    }


    BasicTypeTest_getShortReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    BasicTypeTest_getShortReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    BasicTypeTest_getShortReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    BasicTypeTest_getShortReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getShortReply_g_tc;
}


RTIBool BasicTypeTest_getShortReply_initialize(
    BasicTypeTest_getShortReply* sample) {
  return BasicTypeTest_getShortReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getShortReply_initialize_ex(
    BasicTypeTest_getShortReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initShort(&sample->sh2)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initShort(&sample->sh3)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initShort(&sample->getShort_ret)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getShortReply_finalize(
    BasicTypeTest_getShortReply* sample)
{
    BasicTypeTest_getShortReply_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getShortReply_finalize_ex(
    BasicTypeTest_getShortReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getShortReply_copy(
    BasicTypeTest_getShortReply* dst,
    const BasicTypeTest_getShortReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyShort(
        &dst->sh2, &src->sh2)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyShort(
        &dst->sh3, &src->sh3)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyShort(
        &dst->getShort_ret, &src->getShort_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getShortReply' sequence class.
 */
#define T BasicTypeTest_getShortReply
#define TSeq BasicTypeTest_getShortReplySeq
#define T_initialize_ex BasicTypeTest_getShortReply_initialize_ex
#define T_finalize_ex   BasicTypeTest_getShortReply_finalize_ex
#define T_copy       BasicTypeTest_getShortReply_copy

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
const char *BasicTypeTest_getUShortRequestTYPENAME = "BasicTypeTest_getUShortRequest";

DDS_TypeCode* BasicTypeTest_getUShortRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getUShortRequest_g_tc_members[3]=
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
            (char *)"ush1",/* Member name */
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
            (char *)"ush2",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getUShortRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getUShortRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BasicTypeTest_getUShortRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getUShortRequest*/

    if (is_initialized) {
        return &BasicTypeTest_getUShortRequest_g_tc;
    }


    BasicTypeTest_getUShortRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    BasicTypeTest_getUShortRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    BasicTypeTest_getUShortRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getUShortRequest_g_tc;
}


RTIBool BasicTypeTest_getUShortRequest_initialize(
    BasicTypeTest_getUShortRequest* sample) {
  return BasicTypeTest_getUShortRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getUShortRequest_initialize_ex(
    BasicTypeTest_getUShortRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedShort(&sample->ush1)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initUnsignedShort(&sample->ush2)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getUShortRequest_finalize(
    BasicTypeTest_getUShortRequest* sample)
{
    BasicTypeTest_getUShortRequest_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getUShortRequest_finalize_ex(
    BasicTypeTest_getUShortRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getUShortRequest_copy(
    BasicTypeTest_getUShortRequest* dst,
    const BasicTypeTest_getUShortRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedShort(
        &dst->ush1, &src->ush1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedShort(
        &dst->ush2, &src->ush2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getUShortRequest' sequence class.
 */
#define T BasicTypeTest_getUShortRequest
#define TSeq BasicTypeTest_getUShortRequestSeq
#define T_initialize_ex BasicTypeTest_getUShortRequest_initialize_ex
#define T_finalize_ex   BasicTypeTest_getUShortRequest_finalize_ex
#define T_copy       BasicTypeTest_getUShortRequest_copy

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
const char *BasicTypeTest_getUShortReplyTYPENAME = "BasicTypeTest_getUShortReply";

DDS_TypeCode* BasicTypeTest_getUShortReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getUShortReply_g_tc_members[4]=
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
            (char *)"ush2",/* Member name */
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
            (char *)"ush3",/* Member name */
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
            (char *)"getUShort_ret",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getUShortReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getUShortReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        BasicTypeTest_getUShortReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getUShortReply*/

    if (is_initialized) {
        return &BasicTypeTest_getUShortReply_g_tc;
    }


    BasicTypeTest_getUShortReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    BasicTypeTest_getUShortReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    BasicTypeTest_getUShortReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    BasicTypeTest_getUShortReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getUShortReply_g_tc;
}


RTIBool BasicTypeTest_getUShortReply_initialize(
    BasicTypeTest_getUShortReply* sample) {
  return BasicTypeTest_getUShortReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getUShortReply_initialize_ex(
    BasicTypeTest_getUShortReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedShort(&sample->ush2)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initUnsignedShort(&sample->ush3)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initUnsignedShort(&sample->getUShort_ret)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getUShortReply_finalize(
    BasicTypeTest_getUShortReply* sample)
{
    BasicTypeTest_getUShortReply_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getUShortReply_finalize_ex(
    BasicTypeTest_getUShortReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getUShortReply_copy(
    BasicTypeTest_getUShortReply* dst,
    const BasicTypeTest_getUShortReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedShort(
        &dst->ush2, &src->ush2)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedShort(
        &dst->ush3, &src->ush3)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedShort(
        &dst->getUShort_ret, &src->getUShort_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getUShortReply' sequence class.
 */
#define T BasicTypeTest_getUShortReply
#define TSeq BasicTypeTest_getUShortReplySeq
#define T_initialize_ex BasicTypeTest_getUShortReply_initialize_ex
#define T_finalize_ex   BasicTypeTest_getUShortReply_finalize_ex
#define T_copy       BasicTypeTest_getUShortReply_copy

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
const char *BasicTypeTest_getLongRequestTYPENAME = "BasicTypeTest_getLongRequest";

DDS_TypeCode* BasicTypeTest_getLongRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getLongRequest_g_tc_members[3]=
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
            (char *)"lo1",/* Member name */
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
            (char *)"lo2",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getLongRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getLongRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BasicTypeTest_getLongRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getLongRequest*/

    if (is_initialized) {
        return &BasicTypeTest_getLongRequest_g_tc;
    }


    BasicTypeTest_getLongRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    BasicTypeTest_getLongRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    BasicTypeTest_getLongRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getLongRequest_g_tc;
}


RTIBool BasicTypeTest_getLongRequest_initialize(
    BasicTypeTest_getLongRequest* sample) {
  return BasicTypeTest_getLongRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getLongRequest_initialize_ex(
    BasicTypeTest_getLongRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initLong(&sample->lo1)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->lo2)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getLongRequest_finalize(
    BasicTypeTest_getLongRequest* sample)
{
    BasicTypeTest_getLongRequest_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getLongRequest_finalize_ex(
    BasicTypeTest_getLongRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getLongRequest_copy(
    BasicTypeTest_getLongRequest* dst,
    const BasicTypeTest_getLongRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->lo1, &src->lo1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->lo2, &src->lo2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getLongRequest' sequence class.
 */
#define T BasicTypeTest_getLongRequest
#define TSeq BasicTypeTest_getLongRequestSeq
#define T_initialize_ex BasicTypeTest_getLongRequest_initialize_ex
#define T_finalize_ex   BasicTypeTest_getLongRequest_finalize_ex
#define T_copy       BasicTypeTest_getLongRequest_copy

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
const char *BasicTypeTest_getLongReplyTYPENAME = "BasicTypeTest_getLongReply";

DDS_TypeCode* BasicTypeTest_getLongReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getLongReply_g_tc_members[4]=
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
            (char *)"lo2",/* Member name */
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
            (char *)"lo3",/* Member name */
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
            (char *)"getLong_ret",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getLongReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getLongReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        BasicTypeTest_getLongReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getLongReply*/

    if (is_initialized) {
        return &BasicTypeTest_getLongReply_g_tc;
    }


    BasicTypeTest_getLongReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    BasicTypeTest_getLongReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    BasicTypeTest_getLongReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    BasicTypeTest_getLongReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getLongReply_g_tc;
}


RTIBool BasicTypeTest_getLongReply_initialize(
    BasicTypeTest_getLongReply* sample) {
  return BasicTypeTest_getLongReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getLongReply_initialize_ex(
    BasicTypeTest_getLongReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initLong(&sample->lo2)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->lo3)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->getLong_ret)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getLongReply_finalize(
    BasicTypeTest_getLongReply* sample)
{
    BasicTypeTest_getLongReply_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getLongReply_finalize_ex(
    BasicTypeTest_getLongReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getLongReply_copy(
    BasicTypeTest_getLongReply* dst,
    const BasicTypeTest_getLongReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->lo2, &src->lo2)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->lo3, &src->lo3)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->getLong_ret, &src->getLong_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getLongReply' sequence class.
 */
#define T BasicTypeTest_getLongReply
#define TSeq BasicTypeTest_getLongReplySeq
#define T_initialize_ex BasicTypeTest_getLongReply_initialize_ex
#define T_finalize_ex   BasicTypeTest_getLongReply_finalize_ex
#define T_copy       BasicTypeTest_getLongReply_copy

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
const char *BasicTypeTest_getULongRequestTYPENAME = "BasicTypeTest_getULongRequest";

DDS_TypeCode* BasicTypeTest_getULongRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getULongRequest_g_tc_members[3]=
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
            (char *)"ulo1",/* Member name */
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
            (char *)"ulo2",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getULongRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getULongRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BasicTypeTest_getULongRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getULongRequest*/

    if (is_initialized) {
        return &BasicTypeTest_getULongRequest_g_tc;
    }


    BasicTypeTest_getULongRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    BasicTypeTest_getULongRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    BasicTypeTest_getULongRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getULongRequest_g_tc;
}


RTIBool BasicTypeTest_getULongRequest_initialize(
    BasicTypeTest_getULongRequest* sample) {
  return BasicTypeTest_getULongRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getULongRequest_initialize_ex(
    BasicTypeTest_getULongRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->ulo1)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initUnsignedLong(&sample->ulo2)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getULongRequest_finalize(
    BasicTypeTest_getULongRequest* sample)
{
    BasicTypeTest_getULongRequest_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getULongRequest_finalize_ex(
    BasicTypeTest_getULongRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getULongRequest_copy(
    BasicTypeTest_getULongRequest* dst,
    const BasicTypeTest_getULongRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->ulo1, &src->ulo1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->ulo2, &src->ulo2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getULongRequest' sequence class.
 */
#define T BasicTypeTest_getULongRequest
#define TSeq BasicTypeTest_getULongRequestSeq
#define T_initialize_ex BasicTypeTest_getULongRequest_initialize_ex
#define T_finalize_ex   BasicTypeTest_getULongRequest_finalize_ex
#define T_copy       BasicTypeTest_getULongRequest_copy

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
const char *BasicTypeTest_getULongReplyTYPENAME = "BasicTypeTest_getULongReply";

DDS_TypeCode* BasicTypeTest_getULongReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getULongReply_g_tc_members[4]=
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
            (char *)"ulo2",/* Member name */
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
            (char *)"ulo3",/* Member name */
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
            (char *)"getULong_ret",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getULongReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getULongReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        BasicTypeTest_getULongReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getULongReply*/

    if (is_initialized) {
        return &BasicTypeTest_getULongReply_g_tc;
    }


    BasicTypeTest_getULongReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    BasicTypeTest_getULongReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    BasicTypeTest_getULongReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    BasicTypeTest_getULongReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getULongReply_g_tc;
}


RTIBool BasicTypeTest_getULongReply_initialize(
    BasicTypeTest_getULongReply* sample) {
  return BasicTypeTest_getULongReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getULongReply_initialize_ex(
    BasicTypeTest_getULongReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->ulo2)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initUnsignedLong(&sample->ulo3)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initUnsignedLong(&sample->getULong_ret)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getULongReply_finalize(
    BasicTypeTest_getULongReply* sample)
{
    BasicTypeTest_getULongReply_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getULongReply_finalize_ex(
    BasicTypeTest_getULongReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getULongReply_copy(
    BasicTypeTest_getULongReply* dst,
    const BasicTypeTest_getULongReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->ulo2, &src->ulo2)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->ulo3, &src->ulo3)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->getULong_ret, &src->getULong_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getULongReply' sequence class.
 */
#define T BasicTypeTest_getULongReply
#define TSeq BasicTypeTest_getULongReplySeq
#define T_initialize_ex BasicTypeTest_getULongReply_initialize_ex
#define T_finalize_ex   BasicTypeTest_getULongReply_finalize_ex
#define T_copy       BasicTypeTest_getULongReply_copy

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
const char *BasicTypeTest_getLLongRequestTYPENAME = "BasicTypeTest_getLLongRequest";

DDS_TypeCode* BasicTypeTest_getLLongRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getLLongRequest_g_tc_members[3]=
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
            (char *)"llo1",/* Member name */
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
            (char *)"llo2",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getLLongRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getLLongRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BasicTypeTest_getLLongRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getLLongRequest*/

    if (is_initialized) {
        return &BasicTypeTest_getLLongRequest_g_tc;
    }


    BasicTypeTest_getLLongRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    BasicTypeTest_getLLongRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    BasicTypeTest_getLLongRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getLLongRequest_g_tc;
}


RTIBool BasicTypeTest_getLLongRequest_initialize(
    BasicTypeTest_getLLongRequest* sample) {
  return BasicTypeTest_getLLongRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getLLongRequest_initialize_ex(
    BasicTypeTest_getLLongRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initLongLong(&sample->llo1)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLongLong(&sample->llo2)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getLLongRequest_finalize(
    BasicTypeTest_getLLongRequest* sample)
{
    BasicTypeTest_getLLongRequest_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getLLongRequest_finalize_ex(
    BasicTypeTest_getLLongRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getLLongRequest_copy(
    BasicTypeTest_getLLongRequest* dst,
    const BasicTypeTest_getLLongRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLongLong(
        &dst->llo1, &src->llo1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLongLong(
        &dst->llo2, &src->llo2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getLLongRequest' sequence class.
 */
#define T BasicTypeTest_getLLongRequest
#define TSeq BasicTypeTest_getLLongRequestSeq
#define T_initialize_ex BasicTypeTest_getLLongRequest_initialize_ex
#define T_finalize_ex   BasicTypeTest_getLLongRequest_finalize_ex
#define T_copy       BasicTypeTest_getLLongRequest_copy

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
const char *BasicTypeTest_getLLongReplyTYPENAME = "BasicTypeTest_getLLongReply";

DDS_TypeCode* BasicTypeTest_getLLongReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getLLongReply_g_tc_members[4]=
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
            (char *)"llo2",/* Member name */
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
            (char *)"llo3",/* Member name */
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
            (char *)"getLLong_ret",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getLLongReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getLLongReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        BasicTypeTest_getLLongReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getLLongReply*/

    if (is_initialized) {
        return &BasicTypeTest_getLLongReply_g_tc;
    }


    BasicTypeTest_getLLongReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    BasicTypeTest_getLLongReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    BasicTypeTest_getLLongReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    BasicTypeTest_getLLongReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getLLongReply_g_tc;
}


RTIBool BasicTypeTest_getLLongReply_initialize(
    BasicTypeTest_getLLongReply* sample) {
  return BasicTypeTest_getLLongReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getLLongReply_initialize_ex(
    BasicTypeTest_getLLongReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initLongLong(&sample->llo2)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLongLong(&sample->llo3)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLongLong(&sample->getLLong_ret)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getLLongReply_finalize(
    BasicTypeTest_getLLongReply* sample)
{
    BasicTypeTest_getLLongReply_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getLLongReply_finalize_ex(
    BasicTypeTest_getLLongReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getLLongReply_copy(
    BasicTypeTest_getLLongReply* dst,
    const BasicTypeTest_getLLongReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLongLong(
        &dst->llo2, &src->llo2)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLongLong(
        &dst->llo3, &src->llo3)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLongLong(
        &dst->getLLong_ret, &src->getLLong_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getLLongReply' sequence class.
 */
#define T BasicTypeTest_getLLongReply
#define TSeq BasicTypeTest_getLLongReplySeq
#define T_initialize_ex BasicTypeTest_getLLongReply_initialize_ex
#define T_finalize_ex   BasicTypeTest_getLLongReply_finalize_ex
#define T_copy       BasicTypeTest_getLLongReply_copy

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
const char *BasicTypeTest_getULLongRequestTYPENAME = "BasicTypeTest_getULLongRequest";

DDS_TypeCode* BasicTypeTest_getULLongRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getULLongRequest_g_tc_members[3]=
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
            (char *)"ullo1",/* Member name */
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
            (char *)"ullo2",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getULLongRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getULLongRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BasicTypeTest_getULLongRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getULLongRequest*/

    if (is_initialized) {
        return &BasicTypeTest_getULLongRequest_g_tc;
    }


    BasicTypeTest_getULLongRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    BasicTypeTest_getULLongRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;
    BasicTypeTest_getULLongRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getULLongRequest_g_tc;
}


RTIBool BasicTypeTest_getULLongRequest_initialize(
    BasicTypeTest_getULLongRequest* sample) {
  return BasicTypeTest_getULLongRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getULLongRequest_initialize_ex(
    BasicTypeTest_getULLongRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLongLong(&sample->ullo1)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initUnsignedLongLong(&sample->ullo2)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getULLongRequest_finalize(
    BasicTypeTest_getULLongRequest* sample)
{
    BasicTypeTest_getULLongRequest_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getULLongRequest_finalize_ex(
    BasicTypeTest_getULLongRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getULLongRequest_copy(
    BasicTypeTest_getULLongRequest* dst,
    const BasicTypeTest_getULLongRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLongLong(
        &dst->ullo1, &src->ullo1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLongLong(
        &dst->ullo2, &src->ullo2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getULLongRequest' sequence class.
 */
#define T BasicTypeTest_getULLongRequest
#define TSeq BasicTypeTest_getULLongRequestSeq
#define T_initialize_ex BasicTypeTest_getULLongRequest_initialize_ex
#define T_finalize_ex   BasicTypeTest_getULLongRequest_finalize_ex
#define T_copy       BasicTypeTest_getULLongRequest_copy

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
const char *BasicTypeTest_getULLongReplyTYPENAME = "BasicTypeTest_getULLongReply";

DDS_TypeCode* BasicTypeTest_getULLongReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getULLongReply_g_tc_members[4]=
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
            (char *)"ullo2",/* Member name */
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
            (char *)"ullo3",/* Member name */
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
            (char *)"getULLong_ret",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getULLongReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getULLongReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        BasicTypeTest_getULLongReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getULLongReply*/

    if (is_initialized) {
        return &BasicTypeTest_getULLongReply_g_tc;
    }


    BasicTypeTest_getULLongReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    BasicTypeTest_getULLongReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;
    BasicTypeTest_getULLongReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;
    BasicTypeTest_getULLongReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getULLongReply_g_tc;
}


RTIBool BasicTypeTest_getULLongReply_initialize(
    BasicTypeTest_getULLongReply* sample) {
  return BasicTypeTest_getULLongReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getULLongReply_initialize_ex(
    BasicTypeTest_getULLongReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLongLong(&sample->ullo2)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initUnsignedLongLong(&sample->ullo3)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initUnsignedLongLong(&sample->getULLong_ret)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getULLongReply_finalize(
    BasicTypeTest_getULLongReply* sample)
{
    BasicTypeTest_getULLongReply_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getULLongReply_finalize_ex(
    BasicTypeTest_getULLongReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getULLongReply_copy(
    BasicTypeTest_getULLongReply* dst,
    const BasicTypeTest_getULLongReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLongLong(
        &dst->ullo2, &src->ullo2)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLongLong(
        &dst->ullo3, &src->ullo3)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLongLong(
        &dst->getULLong_ret, &src->getULLong_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getULLongReply' sequence class.
 */
#define T BasicTypeTest_getULLongReply
#define TSeq BasicTypeTest_getULLongReplySeq
#define T_initialize_ex BasicTypeTest_getULLongReply_initialize_ex
#define T_finalize_ex   BasicTypeTest_getULLongReply_finalize_ex
#define T_copy       BasicTypeTest_getULLongReply_copy

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
const char *BasicTypeTest_getFloatRequestTYPENAME = "BasicTypeTest_getFloatRequest";

DDS_TypeCode* BasicTypeTest_getFloatRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getFloatRequest_g_tc_members[3]=
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
            (char *)"fl1",/* Member name */
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
            (char *)"fl2",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getFloatRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getFloatRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BasicTypeTest_getFloatRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getFloatRequest*/

    if (is_initialized) {
        return &BasicTypeTest_getFloatRequest_g_tc;
    }


    BasicTypeTest_getFloatRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    BasicTypeTest_getFloatRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    BasicTypeTest_getFloatRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getFloatRequest_g_tc;
}


RTIBool BasicTypeTest_getFloatRequest_initialize(
    BasicTypeTest_getFloatRequest* sample) {
  return BasicTypeTest_getFloatRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getFloatRequest_initialize_ex(
    BasicTypeTest_getFloatRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initFloat(&sample->fl1)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initFloat(&sample->fl2)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getFloatRequest_finalize(
    BasicTypeTest_getFloatRequest* sample)
{
    BasicTypeTest_getFloatRequest_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getFloatRequest_finalize_ex(
    BasicTypeTest_getFloatRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getFloatRequest_copy(
    BasicTypeTest_getFloatRequest* dst,
    const BasicTypeTest_getFloatRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyFloat(
        &dst->fl1, &src->fl1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyFloat(
        &dst->fl2, &src->fl2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getFloatRequest' sequence class.
 */
#define T BasicTypeTest_getFloatRequest
#define TSeq BasicTypeTest_getFloatRequestSeq
#define T_initialize_ex BasicTypeTest_getFloatRequest_initialize_ex
#define T_finalize_ex   BasicTypeTest_getFloatRequest_finalize_ex
#define T_copy       BasicTypeTest_getFloatRequest_copy

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
const char *BasicTypeTest_getFloatReplyTYPENAME = "BasicTypeTest_getFloatReply";

DDS_TypeCode* BasicTypeTest_getFloatReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getFloatReply_g_tc_members[4]=
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
            (char *)"fl2",/* Member name */
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
            (char *)"fl3",/* Member name */
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
            (char *)"getFloat_ret",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getFloatReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getFloatReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        BasicTypeTest_getFloatReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getFloatReply*/

    if (is_initialized) {
        return &BasicTypeTest_getFloatReply_g_tc;
    }


    BasicTypeTest_getFloatReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    BasicTypeTest_getFloatReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    BasicTypeTest_getFloatReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    BasicTypeTest_getFloatReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getFloatReply_g_tc;
}


RTIBool BasicTypeTest_getFloatReply_initialize(
    BasicTypeTest_getFloatReply* sample) {
  return BasicTypeTest_getFloatReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getFloatReply_initialize_ex(
    BasicTypeTest_getFloatReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initFloat(&sample->fl2)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initFloat(&sample->fl3)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initFloat(&sample->getFloat_ret)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getFloatReply_finalize(
    BasicTypeTest_getFloatReply* sample)
{
    BasicTypeTest_getFloatReply_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getFloatReply_finalize_ex(
    BasicTypeTest_getFloatReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getFloatReply_copy(
    BasicTypeTest_getFloatReply* dst,
    const BasicTypeTest_getFloatReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyFloat(
        &dst->fl2, &src->fl2)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyFloat(
        &dst->fl3, &src->fl3)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyFloat(
        &dst->getFloat_ret, &src->getFloat_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getFloatReply' sequence class.
 */
#define T BasicTypeTest_getFloatReply
#define TSeq BasicTypeTest_getFloatReplySeq
#define T_initialize_ex BasicTypeTest_getFloatReply_initialize_ex
#define T_finalize_ex   BasicTypeTest_getFloatReply_finalize_ex
#define T_copy       BasicTypeTest_getFloatReply_copy

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
const char *BasicTypeTest_getDoubleRequestTYPENAME = "BasicTypeTest_getDoubleRequest";

DDS_TypeCode* BasicTypeTest_getDoubleRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getDoubleRequest_g_tc_members[3]=
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
            (char *)"do1",/* Member name */
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
            (char *)"do2",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getDoubleRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getDoubleRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BasicTypeTest_getDoubleRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getDoubleRequest*/

    if (is_initialized) {
        return &BasicTypeTest_getDoubleRequest_g_tc;
    }


    BasicTypeTest_getDoubleRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    BasicTypeTest_getDoubleRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    BasicTypeTest_getDoubleRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getDoubleRequest_g_tc;
}


RTIBool BasicTypeTest_getDoubleRequest_initialize(
    BasicTypeTest_getDoubleRequest* sample) {
  return BasicTypeTest_getDoubleRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getDoubleRequest_initialize_ex(
    BasicTypeTest_getDoubleRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initDouble(&sample->do1)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initDouble(&sample->do2)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getDoubleRequest_finalize(
    BasicTypeTest_getDoubleRequest* sample)
{
    BasicTypeTest_getDoubleRequest_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getDoubleRequest_finalize_ex(
    BasicTypeTest_getDoubleRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getDoubleRequest_copy(
    BasicTypeTest_getDoubleRequest* dst,
    const BasicTypeTest_getDoubleRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyDouble(
        &dst->do1, &src->do1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyDouble(
        &dst->do2, &src->do2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getDoubleRequest' sequence class.
 */
#define T BasicTypeTest_getDoubleRequest
#define TSeq BasicTypeTest_getDoubleRequestSeq
#define T_initialize_ex BasicTypeTest_getDoubleRequest_initialize_ex
#define T_finalize_ex   BasicTypeTest_getDoubleRequest_finalize_ex
#define T_copy       BasicTypeTest_getDoubleRequest_copy

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
const char *BasicTypeTest_getDoubleReplyTYPENAME = "BasicTypeTest_getDoubleReply";

DDS_TypeCode* BasicTypeTest_getDoubleReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getDoubleReply_g_tc_members[4]=
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
            (char *)"do2",/* Member name */
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
            (char *)"do3",/* Member name */
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
            (char *)"getDouble_ret",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getDoubleReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getDoubleReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        BasicTypeTest_getDoubleReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getDoubleReply*/

    if (is_initialized) {
        return &BasicTypeTest_getDoubleReply_g_tc;
    }


    BasicTypeTest_getDoubleReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    BasicTypeTest_getDoubleReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    BasicTypeTest_getDoubleReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    BasicTypeTest_getDoubleReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getDoubleReply_g_tc;
}


RTIBool BasicTypeTest_getDoubleReply_initialize(
    BasicTypeTest_getDoubleReply* sample) {
  return BasicTypeTest_getDoubleReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getDoubleReply_initialize_ex(
    BasicTypeTest_getDoubleReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initDouble(&sample->do2)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initDouble(&sample->do3)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initDouble(&sample->getDouble_ret)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getDoubleReply_finalize(
    BasicTypeTest_getDoubleReply* sample)
{
    BasicTypeTest_getDoubleReply_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getDoubleReply_finalize_ex(
    BasicTypeTest_getDoubleReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getDoubleReply_copy(
    BasicTypeTest_getDoubleReply* dst,
    const BasicTypeTest_getDoubleReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyDouble(
        &dst->do2, &src->do2)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyDouble(
        &dst->do3, &src->do3)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyDouble(
        &dst->getDouble_ret, &src->getDouble_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getDoubleReply' sequence class.
 */
#define T BasicTypeTest_getDoubleReply
#define TSeq BasicTypeTest_getDoubleReplySeq
#define T_initialize_ex BasicTypeTest_getDoubleReply_initialize_ex
#define T_finalize_ex   BasicTypeTest_getDoubleReply_finalize_ex
#define T_copy       BasicTypeTest_getDoubleReply_copy

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
const char *BasicTypeTest_getBooleanRequestTYPENAME = "BasicTypeTest_getBooleanRequest";

DDS_TypeCode* BasicTypeTest_getBooleanRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getBooleanRequest_g_tc_members[3]=
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
            (char *)"bo1",/* Member name */
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
            (char *)"bo2",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getBooleanRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getBooleanRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        BasicTypeTest_getBooleanRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getBooleanRequest*/

    if (is_initialized) {
        return &BasicTypeTest_getBooleanRequest_g_tc;
    }


    BasicTypeTest_getBooleanRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    BasicTypeTest_getBooleanRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    BasicTypeTest_getBooleanRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getBooleanRequest_g_tc;
}


RTIBool BasicTypeTest_getBooleanRequest_initialize(
    BasicTypeTest_getBooleanRequest* sample) {
  return BasicTypeTest_getBooleanRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getBooleanRequest_initialize_ex(
    BasicTypeTest_getBooleanRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initBoolean(&sample->bo1)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initBoolean(&sample->bo2)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getBooleanRequest_finalize(
    BasicTypeTest_getBooleanRequest* sample)
{
    BasicTypeTest_getBooleanRequest_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getBooleanRequest_finalize_ex(
    BasicTypeTest_getBooleanRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getBooleanRequest_copy(
    BasicTypeTest_getBooleanRequest* dst,
    const BasicTypeTest_getBooleanRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyBoolean(
        &dst->bo1, &src->bo1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyBoolean(
        &dst->bo2, &src->bo2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getBooleanRequest' sequence class.
 */
#define T BasicTypeTest_getBooleanRequest
#define TSeq BasicTypeTest_getBooleanRequestSeq
#define T_initialize_ex BasicTypeTest_getBooleanRequest_initialize_ex
#define T_finalize_ex   BasicTypeTest_getBooleanRequest_finalize_ex
#define T_copy       BasicTypeTest_getBooleanRequest_copy

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
const char *BasicTypeTest_getBooleanReplyTYPENAME = "BasicTypeTest_getBooleanReply";

DDS_TypeCode* BasicTypeTest_getBooleanReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member BasicTypeTest_getBooleanReply_g_tc_members[4]=
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
            (char *)"bo2",/* Member name */
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
            (char *)"bo3",/* Member name */
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
            (char *)"getBoolean_ret",/* Member name */
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

    static DDS_TypeCode BasicTypeTest_getBooleanReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"BasicTypeTest_getBooleanReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        BasicTypeTest_getBooleanReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for BasicTypeTest_getBooleanReply*/

    if (is_initialized) {
        return &BasicTypeTest_getBooleanReply_g_tc;
    }


    BasicTypeTest_getBooleanReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    BasicTypeTest_getBooleanReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    BasicTypeTest_getBooleanReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    BasicTypeTest_getBooleanReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &BasicTypeTest_getBooleanReply_g_tc;
}


RTIBool BasicTypeTest_getBooleanReply_initialize(
    BasicTypeTest_getBooleanReply* sample) {
  return BasicTypeTest_getBooleanReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool BasicTypeTest_getBooleanReply_initialize_ex(
    BasicTypeTest_getBooleanReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initBoolean(&sample->bo2)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initBoolean(&sample->bo3)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initBoolean(&sample->getBoolean_ret)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void BasicTypeTest_getBooleanReply_finalize(
    BasicTypeTest_getBooleanReply* sample)
{
    BasicTypeTest_getBooleanReply_finalize_ex(sample,RTI_TRUE);
}
        
void BasicTypeTest_getBooleanReply_finalize_ex(
    BasicTypeTest_getBooleanReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool BasicTypeTest_getBooleanReply_copy(
    BasicTypeTest_getBooleanReply* dst,
    const BasicTypeTest_getBooleanReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyBoolean(
        &dst->bo2, &src->bo2)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyBoolean(
        &dst->bo3, &src->bo3)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyBoolean(
        &dst->getBoolean_ret, &src->getBoolean_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'BasicTypeTest_getBooleanReply' sequence class.
 */
#define T BasicTypeTest_getBooleanReply
#define TSeq BasicTypeTest_getBooleanReplySeq
#define T_initialize_ex BasicTypeTest_getBooleanReply_initialize_ex
#define T_finalize_ex   BasicTypeTest_getBooleanReply_finalize_ex
#define T_copy       BasicTypeTest_getBooleanReply_copy

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

