
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MultithreadTestRequestReply.idl using "rtiddsgen".
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



#include "MultithreadTestRequestReply.h"

/* ========================================================================= */
const char *MultithreadTest_testRequestTYPENAME = "MultithreadTest_testRequest";

DDS_TypeCode* MultithreadTest_testRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member MultithreadTest_testRequest_g_tc_members[2]=
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
            (char *)"dato1",/* Member name */
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

    static DDS_TypeCode MultithreadTest_testRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"MultithreadTest_testRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        MultithreadTest_testRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MultithreadTest_testRequest*/

    if (is_initialized) {
        return &MultithreadTest_testRequest_g_tc;
    }


    MultithreadTest_testRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    MultithreadTest_testRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Dato_get_typecode();

    is_initialized = RTI_TRUE;

    return &MultithreadTest_testRequest_g_tc;
}


RTIBool MultithreadTest_testRequest_initialize(
    MultithreadTest_testRequest* sample) {
  return MultithreadTest_testRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool MultithreadTest_testRequest_initialize_ex(
    MultithreadTest_testRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!Dato_initialize_ex(&sample->dato1,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void MultithreadTest_testRequest_finalize(
    MultithreadTest_testRequest* sample)
{
    MultithreadTest_testRequest_finalize_ex(sample,RTI_TRUE);
}
        
void MultithreadTest_testRequest_finalize_ex(
    MultithreadTest_testRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

    Dato_finalize_ex(&sample->dato1,deletePointers);
            

}

RTIBool MultithreadTest_testRequest_copy(
    MultithreadTest_testRequest* dst,
    const MultithreadTest_testRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!Dato_copy(
        &dst->dato1, &src->dato1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'MultithreadTest_testRequest' sequence class.
 */
#define T MultithreadTest_testRequest
#define TSeq MultithreadTest_testRequestSeq
#define T_initialize_ex MultithreadTest_testRequest_initialize_ex
#define T_finalize_ex   MultithreadTest_testRequest_finalize_ex
#define T_copy       MultithreadTest_testRequest_copy

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
const char *MultithreadTest_testReplyTYPENAME = "MultithreadTest_testReply";

DDS_TypeCode* MultithreadTest_testReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member MultithreadTest_testReply_g_tc_members[3]=
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
            (char *)"dato2",/* Member name */
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
            (char *)"test_ret",/* Member name */
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

    static DDS_TypeCode MultithreadTest_testReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"MultithreadTest_testReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        MultithreadTest_testReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MultithreadTest_testReply*/

    if (is_initialized) {
        return &MultithreadTest_testReply_g_tc;
    }


    MultithreadTest_testReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    MultithreadTest_testReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Dato_get_typecode();
    MultithreadTest_testReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &MultithreadTest_testReply_g_tc;
}


RTIBool MultithreadTest_testReply_initialize(
    MultithreadTest_testReply* sample) {
  return MultithreadTest_testReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool MultithreadTest_testReply_initialize_ex(
    MultithreadTest_testReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!Dato_initialize_ex(&sample->dato2,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->test_ret)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void MultithreadTest_testReply_finalize(
    MultithreadTest_testReply* sample)
{
    MultithreadTest_testReply_finalize_ex(sample,RTI_TRUE);
}
        
void MultithreadTest_testReply_finalize_ex(
    MultithreadTest_testReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            

    Dato_finalize_ex(&sample->dato2,deletePointers);
            


}

RTIBool MultithreadTest_testReply_copy(
    MultithreadTest_testReply* dst,
    const MultithreadTest_testReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!Dato_copy(
        &dst->dato2, &src->dato2)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->test_ret, &src->test_ret)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'MultithreadTest_testReply' sequence class.
 */
#define T MultithreadTest_testReply
#define TSeq MultithreadTest_testReplySeq
#define T_initialize_ex MultithreadTest_testReply_initialize_ex
#define T_finalize_ex   MultithreadTest_testReply_finalize_ex
#define T_copy       MultithreadTest_testReply_copy

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

