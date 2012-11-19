
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HelloWorldAsyncRequestReply.idl using "rtiddsgen".
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



#include "HelloWorldAsyncRequestReply.h"

/* ========================================================================= */
const char *HelloWorldAsync_sayHelloRequestTYPENAME = "HelloWorldAsync_sayHelloRequest";

DDS_TypeCode* HelloWorldAsync_sayHelloRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode HelloWorldAsync_sayHelloRequest_g_tc_name_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member HelloWorldAsync_sayHelloRequest_g_tc_members[2]=
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
            (char *)"name",/* Member name */
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

    static DDS_TypeCode HelloWorldAsync_sayHelloRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"HelloWorldAsync_sayHelloRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        HelloWorldAsync_sayHelloRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for HelloWorldAsync_sayHelloRequest*/

    if (is_initialized) {
        return &HelloWorldAsync_sayHelloRequest_g_tc;
    }


    HelloWorldAsync_sayHelloRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    HelloWorldAsync_sayHelloRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&HelloWorldAsync_sayHelloRequest_g_tc_name_string;

    is_initialized = RTI_TRUE;

    return &HelloWorldAsync_sayHelloRequest_g_tc;
}


RTIBool HelloWorldAsync_sayHelloRequest_initialize(
    HelloWorldAsync_sayHelloRequest* sample) {
  return HelloWorldAsync_sayHelloRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool HelloWorldAsync_sayHelloRequest_initialize_ex(
    HelloWorldAsync_sayHelloRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (allocateMemory) {
        sample->name = DDS_String_alloc((255));
        if (sample->name == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->name != NULL) { 
            sample->name[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void HelloWorldAsync_sayHelloRequest_finalize(
    HelloWorldAsync_sayHelloRequest* sample)
{
    HelloWorldAsync_sayHelloRequest_finalize_ex(sample,RTI_TRUE);
}
        
void HelloWorldAsync_sayHelloRequest_finalize_ex(
    HelloWorldAsync_sayHelloRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

    DDS_String_free(sample->name);                
            

}

RTIBool HelloWorldAsync_sayHelloRequest_copy(
    HelloWorldAsync_sayHelloRequest* dst,
    const HelloWorldAsync_sayHelloRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->name, src->name, (255) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'HelloWorldAsync_sayHelloRequest' sequence class.
 */
#define T HelloWorldAsync_sayHelloRequest
#define TSeq HelloWorldAsync_sayHelloRequestSeq
#define T_initialize_ex HelloWorldAsync_sayHelloRequest_initialize_ex
#define T_finalize_ex   HelloWorldAsync_sayHelloRequest_finalize_ex
#define T_copy       HelloWorldAsync_sayHelloRequest_copy

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
const char *HelloWorldAsync_sayHelloReplyTYPENAME = "HelloWorldAsync_sayHelloReply";

DDS_TypeCode* HelloWorldAsync_sayHelloReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode HelloWorldAsync_sayHelloReply_g_tc_sayHello_ret_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member HelloWorldAsync_sayHelloReply_g_tc_members[2]=
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
            (char *)"sayHello_ret",/* Member name */
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

    static DDS_TypeCode HelloWorldAsync_sayHelloReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"HelloWorldAsync_sayHelloReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        HelloWorldAsync_sayHelloReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for HelloWorldAsync_sayHelloReply*/

    if (is_initialized) {
        return &HelloWorldAsync_sayHelloReply_g_tc;
    }


    HelloWorldAsync_sayHelloReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    HelloWorldAsync_sayHelloReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&HelloWorldAsync_sayHelloReply_g_tc_sayHello_ret_string;

    is_initialized = RTI_TRUE;

    return &HelloWorldAsync_sayHelloReply_g_tc;
}


RTIBool HelloWorldAsync_sayHelloReply_initialize(
    HelloWorldAsync_sayHelloReply* sample) {
  return HelloWorldAsync_sayHelloReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool HelloWorldAsync_sayHelloReply_initialize_ex(
    HelloWorldAsync_sayHelloReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (allocateMemory) {
        sample->sayHello_ret = DDS_String_alloc((255));
        if (sample->sayHello_ret == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->sayHello_ret != NULL) { 
            sample->sayHello_ret[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void HelloWorldAsync_sayHelloReply_finalize(
    HelloWorldAsync_sayHelloReply* sample)
{
    HelloWorldAsync_sayHelloReply_finalize_ex(sample,RTI_TRUE);
}
        
void HelloWorldAsync_sayHelloReply_finalize_ex(
    HelloWorldAsync_sayHelloReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            

    DDS_String_free(sample->sayHello_ret);                
            

}

RTIBool HelloWorldAsync_sayHelloReply_copy(
    HelloWorldAsync_sayHelloReply* dst,
    const HelloWorldAsync_sayHelloReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->sayHello_ret, src->sayHello_ret, (255) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'HelloWorldAsync_sayHelloReply' sequence class.
 */
#define T HelloWorldAsync_sayHelloReply
#define TSeq HelloWorldAsync_sayHelloReplySeq
#define T_initialize_ex HelloWorldAsync_sayHelloReply_initialize_ex
#define T_finalize_ex   HelloWorldAsync_sayHelloReply_finalize_ex
#define T_copy       HelloWorldAsync_sayHelloReply_copy

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

