
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
const char *testRequestTYPENAME = "testRequest";

DDS_TypeCode* testRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode testRequest_g_tc_clientServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode_Member testRequest_g_tc_members[3]=
    {
        {
            (char *)"clientServiceId",/* Member name */
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
            (char *)"numSec",/* Member name */
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

    static DDS_TypeCode testRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"testRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        testRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for testRequest*/

    if (is_initialized) {
        return &testRequest_g_tc;
    }

    testRequest_g_tc_clientServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    testRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&testRequest_g_tc_clientServiceId_array;
    testRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    testRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Dato_get_typecode();

    is_initialized = RTI_TRUE;

    return &testRequest_g_tc;
}


RTIBool testRequest_initialize(
    testRequest* sample) {
  return testRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool testRequest_initialize_ex(
    testRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */

    
    if (!RTICdrType_initArray(
        sample->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!Dato_initialize_ex(&sample->dato1,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void testRequest_finalize(
    testRequest* sample)
{
    testRequest_finalize_ex(sample,RTI_TRUE);
}
        
void testRequest_finalize_ex(
    testRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Dato_finalize_ex(&sample->dato1,deletePointers);
            
}

RTIBool testRequest_copy(
    testRequest* dst,
    const testRequest* src)
{        

    if (!RTICdrType_copyArray(
        dst->clientServiceId, src->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'testRequest' sequence class.
 */
#define T testRequest
#define TSeq testRequestSeq
#define T_initialize_ex testRequest_initialize_ex
#define T_finalize_ex   testRequest_finalize_ex
#define T_copy       testRequest_copy

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
const char *testReplyTYPENAME = "testReply";

DDS_TypeCode* testReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode testReply_g_tc_serverServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);
    static DDS_TypeCode testReply_g_tc_clientServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode_Member testReply_g_tc_members[6]=
    {
        {
            (char *)"serverServiceId",/* Member name */
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
            (char *)"clientServiceId",/* Member name */
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
            (char *)"numSec",/* Member name */
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
            (char *)"ddscsRetCode",/* Member name */
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
            (char *)"returnedValue",/* Member name */
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

    static DDS_TypeCode testReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"testReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of members */
        testReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for testReply*/

    if (is_initialized) {
        return &testReply_g_tc;
    }

    testReply_g_tc_serverServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    testReply_g_tc_clientServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    testReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&testReply_g_tc_serverServiceId_array;
    testReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&testReply_g_tc_clientServiceId_array;
    testReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    testReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    testReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)Dato_get_typecode();
    testReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &testReply_g_tc;
}


RTIBool testReply_initialize(
    testReply* sample) {
  return testReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool testReply_initialize_ex(
    testReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */

    
    if (!RTICdrType_initArray(
        sample->serverServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
                
    if (!RTICdrType_initArray(
        sample->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddscsRetCode)) {
        return RTI_FALSE;
    }                
            
    if (!Dato_initialize_ex(&sample->dato2,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initLong(&sample->returnedValue)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void testReply_finalize(
    testReply* sample)
{
    testReply_finalize_ex(sample,RTI_TRUE);
}
        
void testReply_finalize_ex(
    testReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Dato_finalize_ex(&sample->dato2,deletePointers);
            
}

RTIBool testReply_copy(
    testReply* dst,
    const testReply* src)
{        

    if (!RTICdrType_copyArray(
        dst->serverServiceId, src->serverServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyArray(
        dst->clientServiceId, src->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddscsRetCode, &src->ddscsRetCode)) {
        return RTI_FALSE;
    }
            
    if (!Dato_copy(
        &dst->dato2, &src->dato2)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->returnedValue, &src->returnedValue)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'testReply' sequence class.
 */
#define T testReply
#define TSeq testReplySeq
#define T_initialize_ex testReply_initialize_ex
#define T_finalize_ex   testReply_finalize_ex
#define T_copy       testReply_copy

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

