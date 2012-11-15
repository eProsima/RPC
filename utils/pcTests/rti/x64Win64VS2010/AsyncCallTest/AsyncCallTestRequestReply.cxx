
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AsyncCallTestRequestReply.idl using "rtiddsgen".
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



#include "AsyncCallTestRequestReply.h"

/* ========================================================================= */
const char *AsyncCallTest_getLongRequestTYPENAME = "AsyncCallTest_getLongRequest";

DDS_TypeCode* AsyncCallTest_getLongRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member AsyncCallTest_getLongRequest_g_tc_members[3]=
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

    static DDS_TypeCode AsyncCallTest_getLongRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"AsyncCallTest_getLongRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        AsyncCallTest_getLongRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for AsyncCallTest_getLongRequest*/

    if (is_initialized) {
        return &AsyncCallTest_getLongRequest_g_tc;
    }


    AsyncCallTest_getLongRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    AsyncCallTest_getLongRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    AsyncCallTest_getLongRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &AsyncCallTest_getLongRequest_g_tc;
}


RTIBool AsyncCallTest_getLongRequest_initialize(
    AsyncCallTest_getLongRequest* sample) {
  return AsyncCallTest_getLongRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool AsyncCallTest_getLongRequest_initialize_ex(
    AsyncCallTest_getLongRequest* sample,RTIBool allocatePointers)
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

void AsyncCallTest_getLongRequest_finalize(
    AsyncCallTest_getLongRequest* sample)
{
    AsyncCallTest_getLongRequest_finalize_ex(sample,RTI_TRUE);
}
        
void AsyncCallTest_getLongRequest_finalize_ex(
    AsyncCallTest_getLongRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool AsyncCallTest_getLongRequest_copy(
    AsyncCallTest_getLongRequest* dst,
    const AsyncCallTest_getLongRequest* src)
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
 * Configure and implement 'AsyncCallTest_getLongRequest' sequence class.
 */
#define T AsyncCallTest_getLongRequest
#define TSeq AsyncCallTest_getLongRequestSeq
#define T_initialize_ex AsyncCallTest_getLongRequest_initialize_ex
#define T_finalize_ex   AsyncCallTest_getLongRequest_finalize_ex
#define T_copy       AsyncCallTest_getLongRequest_copy

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
const char *AsyncCallTest_getLongReplyTYPENAME = "AsyncCallTest_getLongReply";

DDS_TypeCode* AsyncCallTest_getLongReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member AsyncCallTest_getLongReply_g_tc_members[4]=
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

    static DDS_TypeCode AsyncCallTest_getLongReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"AsyncCallTest_getLongReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        AsyncCallTest_getLongReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for AsyncCallTest_getLongReply*/

    if (is_initialized) {
        return &AsyncCallTest_getLongReply_g_tc;
    }


    AsyncCallTest_getLongReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    AsyncCallTest_getLongReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    AsyncCallTest_getLongReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    AsyncCallTest_getLongReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &AsyncCallTest_getLongReply_g_tc;
}


RTIBool AsyncCallTest_getLongReply_initialize(
    AsyncCallTest_getLongReply* sample) {
  return AsyncCallTest_getLongReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool AsyncCallTest_getLongReply_initialize_ex(
    AsyncCallTest_getLongReply* sample,RTIBool allocatePointers)
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

void AsyncCallTest_getLongReply_finalize(
    AsyncCallTest_getLongReply* sample)
{
    AsyncCallTest_getLongReply_finalize_ex(sample,RTI_TRUE);
}
        
void AsyncCallTest_getLongReply_finalize_ex(
    AsyncCallTest_getLongReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool AsyncCallTest_getLongReply_copy(
    AsyncCallTest_getLongReply* dst,
    const AsyncCallTest_getLongReply* src)
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
 * Configure and implement 'AsyncCallTest_getLongReply' sequence class.
 */
#define T AsyncCallTest_getLongReply
#define TSeq AsyncCallTest_getLongReplySeq
#define T_initialize_ex AsyncCallTest_getLongReply_initialize_ex
#define T_finalize_ex   AsyncCallTest_getLongReply_finalize_ex
#define T_copy       AsyncCallTest_getLongReply_copy

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
const char *AsyncCallTest_getBooleanRequestTYPENAME = "AsyncCallTest_getBooleanRequest";

DDS_TypeCode* AsyncCallTest_getBooleanRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member AsyncCallTest_getBooleanRequest_g_tc_members[3]=
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

    static DDS_TypeCode AsyncCallTest_getBooleanRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"AsyncCallTest_getBooleanRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        AsyncCallTest_getBooleanRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for AsyncCallTest_getBooleanRequest*/

    if (is_initialized) {
        return &AsyncCallTest_getBooleanRequest_g_tc;
    }


    AsyncCallTest_getBooleanRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    AsyncCallTest_getBooleanRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    AsyncCallTest_getBooleanRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &AsyncCallTest_getBooleanRequest_g_tc;
}


RTIBool AsyncCallTest_getBooleanRequest_initialize(
    AsyncCallTest_getBooleanRequest* sample) {
  return AsyncCallTest_getBooleanRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool AsyncCallTest_getBooleanRequest_initialize_ex(
    AsyncCallTest_getBooleanRequest* sample,RTIBool allocatePointers)
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

void AsyncCallTest_getBooleanRequest_finalize(
    AsyncCallTest_getBooleanRequest* sample)
{
    AsyncCallTest_getBooleanRequest_finalize_ex(sample,RTI_TRUE);
}
        
void AsyncCallTest_getBooleanRequest_finalize_ex(
    AsyncCallTest_getBooleanRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool AsyncCallTest_getBooleanRequest_copy(
    AsyncCallTest_getBooleanRequest* dst,
    const AsyncCallTest_getBooleanRequest* src)
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
 * Configure and implement 'AsyncCallTest_getBooleanRequest' sequence class.
 */
#define T AsyncCallTest_getBooleanRequest
#define TSeq AsyncCallTest_getBooleanRequestSeq
#define T_initialize_ex AsyncCallTest_getBooleanRequest_initialize_ex
#define T_finalize_ex   AsyncCallTest_getBooleanRequest_finalize_ex
#define T_copy       AsyncCallTest_getBooleanRequest_copy

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
const char *AsyncCallTest_getBooleanReplyTYPENAME = "AsyncCallTest_getBooleanReply";

DDS_TypeCode* AsyncCallTest_getBooleanReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member AsyncCallTest_getBooleanReply_g_tc_members[4]=
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

    static DDS_TypeCode AsyncCallTest_getBooleanReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"AsyncCallTest_getBooleanReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        AsyncCallTest_getBooleanReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for AsyncCallTest_getBooleanReply*/

    if (is_initialized) {
        return &AsyncCallTest_getBooleanReply_g_tc;
    }


    AsyncCallTest_getBooleanReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    AsyncCallTest_getBooleanReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    AsyncCallTest_getBooleanReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    AsyncCallTest_getBooleanReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &AsyncCallTest_getBooleanReply_g_tc;
}


RTIBool AsyncCallTest_getBooleanReply_initialize(
    AsyncCallTest_getBooleanReply* sample) {
  return AsyncCallTest_getBooleanReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool AsyncCallTest_getBooleanReply_initialize_ex(
    AsyncCallTest_getBooleanReply* sample,RTIBool allocatePointers)
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

void AsyncCallTest_getBooleanReply_finalize(
    AsyncCallTest_getBooleanReply* sample)
{
    AsyncCallTest_getBooleanReply_finalize_ex(sample,RTI_TRUE);
}
        
void AsyncCallTest_getBooleanReply_finalize_ex(
    AsyncCallTest_getBooleanReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool AsyncCallTest_getBooleanReply_copy(
    AsyncCallTest_getBooleanReply* dst,
    const AsyncCallTest_getBooleanReply* src)
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
 * Configure and implement 'AsyncCallTest_getBooleanReply' sequence class.
 */
#define T AsyncCallTest_getBooleanReply
#define TSeq AsyncCallTest_getBooleanReplySeq
#define T_initialize_ex AsyncCallTest_getBooleanReply_initialize_ex
#define T_finalize_ex   AsyncCallTest_getBooleanReply_finalize_ex
#define T_copy       AsyncCallTest_getBooleanReply_copy

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
const char *AsyncCallTest_getStringRequestTYPENAME = "AsyncCallTest_getStringRequest";

DDS_TypeCode* AsyncCallTest_getStringRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode AsyncCallTest_getStringRequest_g_tc_s1_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode AsyncCallTest_getStringRequest_g_tc_s2_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member AsyncCallTest_getStringRequest_g_tc_members[3]=
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

    static DDS_TypeCode AsyncCallTest_getStringRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"AsyncCallTest_getStringRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        AsyncCallTest_getStringRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for AsyncCallTest_getStringRequest*/

    if (is_initialized) {
        return &AsyncCallTest_getStringRequest_g_tc;
    }


    AsyncCallTest_getStringRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    AsyncCallTest_getStringRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&AsyncCallTest_getStringRequest_g_tc_s1_string;
    AsyncCallTest_getStringRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&AsyncCallTest_getStringRequest_g_tc_s2_string;

    is_initialized = RTI_TRUE;

    return &AsyncCallTest_getStringRequest_g_tc;
}


RTIBool AsyncCallTest_getStringRequest_initialize(
    AsyncCallTest_getStringRequest* sample) {
  return AsyncCallTest_getStringRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool AsyncCallTest_getStringRequest_initialize_ex(
    AsyncCallTest_getStringRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    sample->s1 = DDS_String_alloc((255));
    if (sample->s1 == NULL) {
        return RTI_FALSE;
    }
            
    sample->s2 = DDS_String_alloc((255));
    if (sample->s2 == NULL) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void AsyncCallTest_getStringRequest_finalize(
    AsyncCallTest_getStringRequest* sample)
{
    AsyncCallTest_getStringRequest_finalize_ex(sample,RTI_TRUE);
}
        
void AsyncCallTest_getStringRequest_finalize_ex(
    AsyncCallTest_getStringRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
    DDS_String_free(sample->s1);                
            
    DDS_String_free(sample->s2);                
            
}

RTIBool AsyncCallTest_getStringRequest_copy(
    AsyncCallTest_getStringRequest* dst,
    const AsyncCallTest_getStringRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->s1, src->s1, (255) + 1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->s2, src->s2, (255) + 1)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'AsyncCallTest_getStringRequest' sequence class.
 */
#define T AsyncCallTest_getStringRequest
#define TSeq AsyncCallTest_getStringRequestSeq
#define T_initialize_ex AsyncCallTest_getStringRequest_initialize_ex
#define T_finalize_ex   AsyncCallTest_getStringRequest_finalize_ex
#define T_copy       AsyncCallTest_getStringRequest_copy

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
const char *AsyncCallTest_getStringReplyTYPENAME = "AsyncCallTest_getStringReply";

DDS_TypeCode* AsyncCallTest_getStringReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode AsyncCallTest_getStringReply_g_tc_s2_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode AsyncCallTest_getStringReply_g_tc_s3_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode AsyncCallTest_getStringReply_g_tc_getString_ret_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member AsyncCallTest_getStringReply_g_tc_members[4]=
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

    static DDS_TypeCode AsyncCallTest_getStringReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"AsyncCallTest_getStringReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        AsyncCallTest_getStringReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for AsyncCallTest_getStringReply*/

    if (is_initialized) {
        return &AsyncCallTest_getStringReply_g_tc;
    }


    AsyncCallTest_getStringReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    AsyncCallTest_getStringReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&AsyncCallTest_getStringReply_g_tc_s2_string;
    AsyncCallTest_getStringReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&AsyncCallTest_getStringReply_g_tc_s3_string;
    AsyncCallTest_getStringReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&AsyncCallTest_getStringReply_g_tc_getString_ret_string;

    is_initialized = RTI_TRUE;

    return &AsyncCallTest_getStringReply_g_tc;
}


RTIBool AsyncCallTest_getStringReply_initialize(
    AsyncCallTest_getStringReply* sample) {
  return AsyncCallTest_getStringReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool AsyncCallTest_getStringReply_initialize_ex(
    AsyncCallTest_getStringReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    sample->s2 = DDS_String_alloc((255));
    if (sample->s2 == NULL) {
        return RTI_FALSE;
    }
            
    sample->s3 = DDS_String_alloc((255));
    if (sample->s3 == NULL) {
        return RTI_FALSE;
    }
            
    sample->getString_ret = DDS_String_alloc((255));
    if (sample->getString_ret == NULL) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void AsyncCallTest_getStringReply_finalize(
    AsyncCallTest_getStringReply* sample)
{
    AsyncCallTest_getStringReply_finalize_ex(sample,RTI_TRUE);
}
        
void AsyncCallTest_getStringReply_finalize_ex(
    AsyncCallTest_getStringReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
    DDS_String_free(sample->s2);                
            
    DDS_String_free(sample->s3);                
            
    DDS_String_free(sample->getString_ret);                
            
}

RTIBool AsyncCallTest_getStringReply_copy(
    AsyncCallTest_getStringReply* dst,
    const AsyncCallTest_getStringReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->s2, src->s2, (255) + 1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->s3, src->s3, (255) + 1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->getString_ret, src->getString_ret, (255) + 1)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'AsyncCallTest_getStringReply' sequence class.
 */
#define T AsyncCallTest_getStringReply
#define TSeq AsyncCallTest_getStringReplySeq
#define T_initialize_ex AsyncCallTest_getStringReply_initialize_ex
#define T_finalize_ex   AsyncCallTest_getStringReply_finalize_ex
#define T_copy       AsyncCallTest_getStringReply_copy

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
const char *AsyncCallTest_duplicateRequestTYPENAME = "AsyncCallTest_duplicateRequest";

DDS_TypeCode* AsyncCallTest_duplicateRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member AsyncCallTest_duplicateRequest_g_tc_members[2]=
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
            (char *)"ev",/* Member name */
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

    static DDS_TypeCode AsyncCallTest_duplicateRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"AsyncCallTest_duplicateRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        AsyncCallTest_duplicateRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for AsyncCallTest_duplicateRequest*/

    if (is_initialized) {
        return &AsyncCallTest_duplicateRequest_g_tc;
    }


    AsyncCallTest_duplicateRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    AsyncCallTest_duplicateRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Structure_get_typecode();

    is_initialized = RTI_TRUE;

    return &AsyncCallTest_duplicateRequest_g_tc;
}


RTIBool AsyncCallTest_duplicateRequest_initialize(
    AsyncCallTest_duplicateRequest* sample) {
  return AsyncCallTest_duplicateRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool AsyncCallTest_duplicateRequest_initialize_ex(
    AsyncCallTest_duplicateRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Structure_initialize_ex(&sample->ev,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void AsyncCallTest_duplicateRequest_finalize(
    AsyncCallTest_duplicateRequest* sample)
{
    AsyncCallTest_duplicateRequest_finalize_ex(sample,RTI_TRUE);
}
        
void AsyncCallTest_duplicateRequest_finalize_ex(
    AsyncCallTest_duplicateRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
    Structure_finalize_ex(&sample->ev,deletePointers);
            
}

RTIBool AsyncCallTest_duplicateRequest_copy(
    AsyncCallTest_duplicateRequest* dst,
    const AsyncCallTest_duplicateRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!Structure_copy(
        &dst->ev, &src->ev)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'AsyncCallTest_duplicateRequest' sequence class.
 */
#define T AsyncCallTest_duplicateRequest
#define TSeq AsyncCallTest_duplicateRequestSeq
#define T_initialize_ex AsyncCallTest_duplicateRequest_initialize_ex
#define T_finalize_ex   AsyncCallTest_duplicateRequest_finalize_ex
#define T_copy       AsyncCallTest_duplicateRequest_copy

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
const char *AsyncCallTest_duplicateReplyTYPENAME = "AsyncCallTest_duplicateReply";

DDS_TypeCode* AsyncCallTest_duplicateReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member AsyncCallTest_duplicateReply_g_tc_members[2]=
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
            (char *)"duplicate_ret",/* Member name */
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

    static DDS_TypeCode AsyncCallTest_duplicateReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"AsyncCallTest_duplicateReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        AsyncCallTest_duplicateReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for AsyncCallTest_duplicateReply*/

    if (is_initialized) {
        return &AsyncCallTest_duplicateReply_g_tc;
    }


    AsyncCallTest_duplicateReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    AsyncCallTest_duplicateReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Structure_get_typecode();

    is_initialized = RTI_TRUE;

    return &AsyncCallTest_duplicateReply_g_tc;
}


RTIBool AsyncCallTest_duplicateReply_initialize(
    AsyncCallTest_duplicateReply* sample) {
  return AsyncCallTest_duplicateReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool AsyncCallTest_duplicateReply_initialize_ex(
    AsyncCallTest_duplicateReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Structure_initialize_ex(&sample->duplicate_ret,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void AsyncCallTest_duplicateReply_finalize(
    AsyncCallTest_duplicateReply* sample)
{
    AsyncCallTest_duplicateReply_finalize_ex(sample,RTI_TRUE);
}
        
void AsyncCallTest_duplicateReply_finalize_ex(
    AsyncCallTest_duplicateReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
    Structure_finalize_ex(&sample->duplicate_ret,deletePointers);
            
}

RTIBool AsyncCallTest_duplicateReply_copy(
    AsyncCallTest_duplicateReply* dst,
    const AsyncCallTest_duplicateReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!Structure_copy(
        &dst->duplicate_ret, &src->duplicate_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'AsyncCallTest_duplicateReply' sequence class.
 */
#define T AsyncCallTest_duplicateReply
#define TSeq AsyncCallTest_duplicateReplySeq
#define T_initialize_ex AsyncCallTest_duplicateReply_initialize_ex
#define T_finalize_ex   AsyncCallTest_duplicateReply_finalize_ex
#define T_copy       AsyncCallTest_duplicateReply_copy

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

