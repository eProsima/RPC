
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RateGenRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
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



#ifndef RateGenRequestReply_h
#include "RateGenRequestReply.h"
#endif

/* ========================================================================= */
const char *subscribe_PulseRequestTYPENAME = "subscribe_PulseRequest";

DDS_TypeCode* subscribe_PulseRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode subscribe_PulseRequest_g_tc_clientId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode_Member subscribe_PulseRequest_g_tc_members[6]=
    {
        {
            (char *)"clientId",/* Member name */
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
            (char *)"localId",/* Member name */
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
            (char *)"c",/* Member name */
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
            (char *)"i",/* Member name */
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
            (char *)"kk",/* Member name */
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

    static DDS_TypeCode subscribe_PulseRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"subscribe_PulseRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of members */
        subscribe_PulseRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for subscribe_PulseRequest*/

    if (is_initialized) {
        return &subscribe_PulseRequest_g_tc;
    }

    subscribe_PulseRequest_g_tc_clientId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    subscribe_PulseRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&subscribe_PulseRequest_g_tc_clientId_array;
    subscribe_PulseRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    subscribe_PulseRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    subscribe_PulseRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)tickConsumer_get_typecode();
    subscribe_PulseRequest_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    subscribe_PulseRequest_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &subscribe_PulseRequest_g_tc;
}


RTIBool subscribe_PulseRequest_initialize(
    subscribe_PulseRequest* sample) {
    return subscribe_PulseRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool subscribe_PulseRequest_initialize_ex(
    subscribe_PulseRequest* sample,RTIBool allocatePointers)
{
    
    if (!RTICdrType_initArray(
        sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->localId)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!tickConsumer_initialize_ex(&sample->c,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initLong(&sample->i)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->kk)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void subscribe_PulseRequest_finalize(
    subscribe_PulseRequest* sample)
{
    subscribe_PulseRequest_finalize_ex(sample,RTI_TRUE);
}
        
void subscribe_PulseRequest_finalize_ex(
    subscribe_PulseRequest* sample,RTIBool deletePointers)
{        

    tickConsumer_finalize_ex(&sample->c,deletePointers);
            
}

RTIBool subscribe_PulseRequest_copy(
    subscribe_PulseRequest* dst,
    const subscribe_PulseRequest* src)
{        

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!tickConsumer_copy(
        &dst->c, &src->c)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->i, &src->i)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->kk, &src->kk)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'subscribe_PulseRequest' sequence class.
 */
#define T subscribe_PulseRequest
#define TSeq subscribe_PulseRequestSeq
#define T_initialize_ex subscribe_PulseRequest_initialize_ex
#define T_finalize_ex   subscribe_PulseRequest_finalize_ex
#define T_copy       subscribe_PulseRequest_copy

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
const char *subscribe_PulseReplyTYPENAME = "subscribe_PulseReply";

DDS_TypeCode* subscribe_PulseReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode subscribe_PulseReply_g_tc_clientId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode_Member subscribe_PulseReply_g_tc_members[7]=
    {
        {
            (char *)"clientId",/* Member name */
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
            (char *)"localId",/* Member name */
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
            (char *)"kk",/* Member name */
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
            (char *)"ret1",/* Member name */
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

    static DDS_TypeCode subscribe_PulseReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"subscribe_PulseReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        subscribe_PulseReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for subscribe_PulseReply*/

    if (is_initialized) {
        return &subscribe_PulseReply_g_tc;
    }

    subscribe_PulseReply_g_tc_clientId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    subscribe_PulseReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&subscribe_PulseReply_g_tc_clientId_array;
    subscribe_PulseReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    subscribe_PulseReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    subscribe_PulseReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    subscribe_PulseReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    subscribe_PulseReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    subscribe_PulseReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)Cookie_get_typecode();

    is_initialized = RTI_TRUE;

    return &subscribe_PulseReply_g_tc;
}


RTIBool subscribe_PulseReply_initialize(
    subscribe_PulseReply* sample) {
    return subscribe_PulseReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool subscribe_PulseReply_initialize_ex(
    subscribe_PulseReply* sample,RTIBool allocatePointers)
{
    
    if (!RTICdrType_initArray(
        sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->localId)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddscsRetCode)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->kk)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initOctet(&sample->ret1)) {
        return RTI_FALSE;
    }                
            
    if (!Cookie_initialize_ex(&sample->returnedValue,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void subscribe_PulseReply_finalize(
    subscribe_PulseReply* sample)
{
    subscribe_PulseReply_finalize_ex(sample,RTI_TRUE);
}
        
void subscribe_PulseReply_finalize_ex(
    subscribe_PulseReply* sample,RTIBool deletePointers)
{        

    Cookie_finalize_ex(&sample->returnedValue,deletePointers);
            
}

RTIBool subscribe_PulseReply_copy(
    subscribe_PulseReply* dst,
    const subscribe_PulseReply* src)
{        

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddscsRetCode, &src->ddscsRetCode)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->kk, &src->kk)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyOctet(
        &dst->ret1, &src->ret1)) {
        return RTI_FALSE;
    }
            
    if (!Cookie_copy(
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
 * Configure and implement 'subscribe_PulseReply' sequence class.
 */
#define T subscribe_PulseReply
#define TSeq subscribe_PulseReplySeq
#define T_initialize_ex subscribe_PulseReply_initialize_ex
#define T_finalize_ex   subscribe_PulseReply_finalize_ex
#define T_copy       subscribe_PulseReply_copy

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
const char *unsubscribe_PulseRequestTYPENAME = "unsubscribe_PulseRequest";

DDS_TypeCode* unsubscribe_PulseRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode unsubscribe_PulseRequest_g_tc_clientId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode_Member unsubscribe_PulseRequest_g_tc_members[4]=
    {
        {
            (char *)"clientId",/* Member name */
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
            (char *)"localId",/* Member name */
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
            (char *)"ck",/* Member name */
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

    static DDS_TypeCode unsubscribe_PulseRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"unsubscribe_PulseRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        unsubscribe_PulseRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for unsubscribe_PulseRequest*/

    if (is_initialized) {
        return &unsubscribe_PulseRequest_g_tc;
    }

    unsubscribe_PulseRequest_g_tc_clientId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    unsubscribe_PulseRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&unsubscribe_PulseRequest_g_tc_clientId_array;
    unsubscribe_PulseRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    unsubscribe_PulseRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    unsubscribe_PulseRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)Cookie_get_typecode();

    is_initialized = RTI_TRUE;

    return &unsubscribe_PulseRequest_g_tc;
}


RTIBool unsubscribe_PulseRequest_initialize(
    unsubscribe_PulseRequest* sample) {
    return unsubscribe_PulseRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool unsubscribe_PulseRequest_initialize_ex(
    unsubscribe_PulseRequest* sample,RTIBool allocatePointers)
{
    
    if (!RTICdrType_initArray(
        sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->localId)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!Cookie_initialize_ex(&sample->ck,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void unsubscribe_PulseRequest_finalize(
    unsubscribe_PulseRequest* sample)
{
    unsubscribe_PulseRequest_finalize_ex(sample,RTI_TRUE);
}
        
void unsubscribe_PulseRequest_finalize_ex(
    unsubscribe_PulseRequest* sample,RTIBool deletePointers)
{        

    Cookie_finalize_ex(&sample->ck,deletePointers);
            
}

RTIBool unsubscribe_PulseRequest_copy(
    unsubscribe_PulseRequest* dst,
    const unsubscribe_PulseRequest* src)
{        

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!Cookie_copy(
        &dst->ck, &src->ck)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'unsubscribe_PulseRequest' sequence class.
 */
#define T unsubscribe_PulseRequest
#define TSeq unsubscribe_PulseRequestSeq
#define T_initialize_ex unsubscribe_PulseRequest_initialize_ex
#define T_finalize_ex   unsubscribe_PulseRequest_finalize_ex
#define T_copy       unsubscribe_PulseRequest_copy

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
const char *unsubscribe_PulseReplyTYPENAME = "unsubscribe_PulseReply";

DDS_TypeCode* unsubscribe_PulseReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode unsubscribe_PulseReply_g_tc_clientId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode_Member unsubscribe_PulseReply_g_tc_members[5]=
    {
        {
            (char *)"clientId",/* Member name */
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
            (char *)"localId",/* Member name */
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

    static DDS_TypeCode unsubscribe_PulseReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"unsubscribe_PulseReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        unsubscribe_PulseReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for unsubscribe_PulseReply*/

    if (is_initialized) {
        return &unsubscribe_PulseReply_g_tc;
    }

    unsubscribe_PulseReply_g_tc_clientId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    unsubscribe_PulseReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&unsubscribe_PulseReply_g_tc_clientId_array;
    unsubscribe_PulseReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    unsubscribe_PulseReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    unsubscribe_PulseReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    unsubscribe_PulseReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)tickConsumer_get_typecode();

    is_initialized = RTI_TRUE;

    return &unsubscribe_PulseReply_g_tc;
}


RTIBool unsubscribe_PulseReply_initialize(
    unsubscribe_PulseReply* sample) {
    return unsubscribe_PulseReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool unsubscribe_PulseReply_initialize_ex(
    unsubscribe_PulseReply* sample,RTIBool allocatePointers)
{
    
    if (!RTICdrType_initArray(
        sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->localId)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddscsRetCode)) {
        return RTI_FALSE;
    }                
            
    if (!tickConsumer_initialize_ex(&sample->returnedValue,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void unsubscribe_PulseReply_finalize(
    unsubscribe_PulseReply* sample)
{
    unsubscribe_PulseReply_finalize_ex(sample,RTI_TRUE);
}
        
void unsubscribe_PulseReply_finalize_ex(
    unsubscribe_PulseReply* sample,RTIBool deletePointers)
{        

    tickConsumer_finalize_ex(&sample->returnedValue,deletePointers);
            
}

RTIBool unsubscribe_PulseReply_copy(
    unsubscribe_PulseReply* dst,
    const unsubscribe_PulseReply* src)
{        

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddscsRetCode, &src->ddscsRetCode)) {
        return RTI_FALSE;
    }
            
    if (!tickConsumer_copy(
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
 * Configure and implement 'unsubscribe_PulseReply' sequence class.
 */
#define T unsubscribe_PulseReply
#define TSeq unsubscribe_PulseReplySeq
#define T_initialize_ex unsubscribe_PulseReply_initialize_ex
#define T_finalize_ex   unsubscribe_PulseReply_finalize_ex
#define T_copy       unsubscribe_PulseReply_copy

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
const char *noReturnFunctionRequestTYPENAME = "noReturnFunctionRequest";

DDS_TypeCode* noReturnFunctionRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode noReturnFunctionRequest_g_tc_clientId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode_Member noReturnFunctionRequest_g_tc_members[4]=
    {
        {
            (char *)"clientId",/* Member name */
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
            (char *)"localId",/* Member name */
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
            (char *)"id",/* Member name */
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

    static DDS_TypeCode noReturnFunctionRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"noReturnFunctionRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        noReturnFunctionRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for noReturnFunctionRequest*/

    if (is_initialized) {
        return &noReturnFunctionRequest_g_tc;
    }

    noReturnFunctionRequest_g_tc_clientId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    noReturnFunctionRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&noReturnFunctionRequest_g_tc_clientId_array;
    noReturnFunctionRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    noReturnFunctionRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    noReturnFunctionRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &noReturnFunctionRequest_g_tc;
}


RTIBool noReturnFunctionRequest_initialize(
    noReturnFunctionRequest* sample) {
    return noReturnFunctionRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool noReturnFunctionRequest_initialize_ex(
    noReturnFunctionRequest* sample,RTIBool allocatePointers)
{
    
    if (!RTICdrType_initArray(
        sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->localId)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->id)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void noReturnFunctionRequest_finalize(
    noReturnFunctionRequest* sample)
{
    noReturnFunctionRequest_finalize_ex(sample,RTI_TRUE);
}
        
void noReturnFunctionRequest_finalize_ex(
    noReturnFunctionRequest* sample,RTIBool deletePointers)
{        

}

RTIBool noReturnFunctionRequest_copy(
    noReturnFunctionRequest* dst,
    const noReturnFunctionRequest* src)
{        

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->id, &src->id)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'noReturnFunctionRequest' sequence class.
 */
#define T noReturnFunctionRequest
#define TSeq noReturnFunctionRequestSeq
#define T_initialize_ex noReturnFunctionRequest_initialize_ex
#define T_finalize_ex   noReturnFunctionRequest_finalize_ex
#define T_copy       noReturnFunctionRequest_copy

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
const char *noReturnFunctionReplyTYPENAME = "noReturnFunctionReply";

DDS_TypeCode* noReturnFunctionReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode noReturnFunctionReply_g_tc_clientId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode_Member noReturnFunctionReply_g_tc_members[5]=
    {
        {
            (char *)"clientId",/* Member name */
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
            (char *)"localId",/* Member name */
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
            (char *)"ret2",/* Member name */
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

    static DDS_TypeCode noReturnFunctionReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"noReturnFunctionReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        noReturnFunctionReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for noReturnFunctionReply*/

    if (is_initialized) {
        return &noReturnFunctionReply_g_tc;
    }

    noReturnFunctionReply_g_tc_clientId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    noReturnFunctionReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&noReturnFunctionReply_g_tc_clientId_array;
    noReturnFunctionReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    noReturnFunctionReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    noReturnFunctionReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    noReturnFunctionReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    is_initialized = RTI_TRUE;

    return &noReturnFunctionReply_g_tc;
}


RTIBool noReturnFunctionReply_initialize(
    noReturnFunctionReply* sample) {
    return noReturnFunctionReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool noReturnFunctionReply_initialize_ex(
    noReturnFunctionReply* sample,RTIBool allocatePointers)
{
    
    if (!RTICdrType_initArray(
        sample->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->localId)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddscsRetCode)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initOctet(&sample->ret2)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void noReturnFunctionReply_finalize(
    noReturnFunctionReply* sample)
{
    noReturnFunctionReply_finalize_ex(sample,RTI_TRUE);
}
        
void noReturnFunctionReply_finalize_ex(
    noReturnFunctionReply* sample,RTIBool deletePointers)
{        

}

RTIBool noReturnFunctionReply_copy(
    noReturnFunctionReply* dst,
    const noReturnFunctionReply* src)
{        

    if (!RTICdrType_copyArray(
        dst->clientId, src->clientId, (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->localId, &src->localId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddscsRetCode, &src->ddscsRetCode)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyOctet(
        &dst->ret2, &src->ret2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'noReturnFunctionReply' sequence class.
 */
#define T noReturnFunctionReply
#define TSeq noReturnFunctionReplySeq
#define T_initialize_ex noReturnFunctionReply_initialize_ex
#define T_finalize_ex   noReturnFunctionReply_finalize_ex
#define T_copy       noReturnFunctionReply_copy

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

