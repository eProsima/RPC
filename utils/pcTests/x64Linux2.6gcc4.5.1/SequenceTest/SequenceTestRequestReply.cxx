
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
const char *getSLongRequestTYPENAME = "getSLongRequest";

DDS_TypeCode* getSLongRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode getSLongRequest_g_tc_clientServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode_Member getSLongRequest_g_tc_members[4]=
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

    static DDS_TypeCode getSLongRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getSLongRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getSLongRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getSLongRequest*/

    if (is_initialized) {
        return &getSLongRequest_g_tc;
    }

    getSLongRequest_g_tc_clientServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    getSLongRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&getSLongRequest_g_tc_clientServiceId_array;
    getSLongRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getSLongRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)largo_get_typecode();
    getSLongRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)largo_get_typecode();

    is_initialized = RTI_TRUE;

    return &getSLongRequest_g_tc;
}


RTIBool getSLongRequest_initialize(
    getSLongRequest* sample) {
  return getSLongRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getSLongRequest_initialize_ex(
    getSLongRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */

    
    if (!RTICdrType_initArray(
        sample->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getSLongRequest_finalize(
    getSLongRequest* sample)
{
    getSLongRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getSLongRequest_finalize_ex(
    getSLongRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    largo_finalize_ex(&sample->l1,deletePointers);
            
    largo_finalize_ex(&sample->l2,deletePointers);
            
}

RTIBool getSLongRequest_copy(
    getSLongRequest* dst,
    const getSLongRequest* src)
{        

    if (!RTICdrType_copyArray(
        dst->clientServiceId, src->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getSLongRequest' sequence class.
 */
#define T getSLongRequest
#define TSeq getSLongRequestSeq
#define T_initialize_ex getSLongRequest_initialize_ex
#define T_finalize_ex   getSLongRequest_finalize_ex
#define T_copy       getSLongRequest_copy

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
const char *getSLongReplyTYPENAME = "getSLongReply";

DDS_TypeCode* getSLongReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode getSLongReply_g_tc_serverServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);
    static DDS_TypeCode getSLongReply_g_tc_clientServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode_Member getSLongReply_g_tc_members[7]=
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
            DDS_BOOLEAN_TRUE, /* Is a key? */
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

    static DDS_TypeCode getSLongReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getSLongReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getSLongReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getSLongReply*/

    if (is_initialized) {
        return &getSLongReply_g_tc;
    }

    getSLongReply_g_tc_serverServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getSLongReply_g_tc_clientServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    getSLongReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&getSLongReply_g_tc_serverServiceId_array;
    getSLongReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&getSLongReply_g_tc_clientServiceId_array;
    getSLongReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getSLongReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getSLongReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)largo_get_typecode();
    getSLongReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)largo_get_typecode();
    getSLongReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)largo_get_typecode();

    is_initialized = RTI_TRUE;

    return &getSLongReply_g_tc;
}


RTIBool getSLongReply_initialize(
    getSLongReply* sample) {
  return getSLongReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getSLongReply_initialize_ex(
    getSLongReply* sample,RTIBool allocatePointers)
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
            
    if (!largo_initialize_ex(&sample->l2,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!largo_initialize_ex(&sample->l3,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!largo_initialize_ex(&sample->returnedValue,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void getSLongReply_finalize(
    getSLongReply* sample)
{
    getSLongReply_finalize_ex(sample,RTI_TRUE);
}
        
void getSLongReply_finalize_ex(
    getSLongReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    largo_finalize_ex(&sample->l2,deletePointers);
            
    largo_finalize_ex(&sample->l3,deletePointers);
            
    largo_finalize_ex(&sample->returnedValue,deletePointers);
            
}

RTIBool getSLongReply_copy(
    getSLongReply* dst,
    const getSLongReply* src)
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
            
    if (!largo_copy(
        &dst->l2, &src->l2)) {
        return RTI_FALSE;
    }
            
    if (!largo_copy(
        &dst->l3, &src->l3)) {
        return RTI_FALSE;
    }
            
    if (!largo_copy(
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
 * Configure and implement 'getSLongReply' sequence class.
 */
#define T getSLongReply
#define TSeq getSLongReplySeq
#define T_initialize_ex getSLongReply_initialize_ex
#define T_finalize_ex   getSLongReply_finalize_ex
#define T_copy       getSLongReply_copy

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
const char *getStringRequestTYPENAME = "getStringRequest";

DDS_TypeCode* getStringRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode getStringRequest_g_tc_clientServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode_Member getStringRequest_g_tc_members[4]=
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

    static DDS_TypeCode getStringRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getStringRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getStringRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getStringRequest*/

    if (is_initialized) {
        return &getStringRequest_g_tc;
    }

    getStringRequest_g_tc_clientServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    getStringRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&getStringRequest_g_tc_clientServiceId_array;
    getStringRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getStringRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)cadena_get_typecode();
    getStringRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)cadena_get_typecode();

    is_initialized = RTI_TRUE;

    return &getStringRequest_g_tc;
}


RTIBool getStringRequest_initialize(
    getStringRequest* sample) {
  return getStringRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getStringRequest_initialize_ex(
    getStringRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */

    
    if (!RTICdrType_initArray(
        sample->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getStringRequest_finalize(
    getStringRequest* sample)
{
    getStringRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getStringRequest_finalize_ex(
    getStringRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    cadena_finalize_ex(&sample->s1,deletePointers);
            
    cadena_finalize_ex(&sample->s2,deletePointers);
            
}

RTIBool getStringRequest_copy(
    getStringRequest* dst,
    const getStringRequest* src)
{        

    if (!RTICdrType_copyArray(
        dst->clientServiceId, src->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getStringRequest' sequence class.
 */
#define T getStringRequest
#define TSeq getStringRequestSeq
#define T_initialize_ex getStringRequest_initialize_ex
#define T_finalize_ex   getStringRequest_finalize_ex
#define T_copy       getStringRequest_copy

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
const char *getStringReplyTYPENAME = "getStringReply";

DDS_TypeCode* getStringReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode getStringReply_g_tc_serverServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);
    static DDS_TypeCode getStringReply_g_tc_clientServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode_Member getStringReply_g_tc_members[7]=
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
            DDS_BOOLEAN_TRUE, /* Is a key? */
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

    static DDS_TypeCode getStringReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getStringReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getStringReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getStringReply*/

    if (is_initialized) {
        return &getStringReply_g_tc;
    }

    getStringReply_g_tc_serverServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getStringReply_g_tc_clientServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    getStringReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&getStringReply_g_tc_serverServiceId_array;
    getStringReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&getStringReply_g_tc_clientServiceId_array;
    getStringReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getStringReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getStringReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)cadena_get_typecode();
    getStringReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)cadena_get_typecode();
    getStringReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)cadena_get_typecode();

    is_initialized = RTI_TRUE;

    return &getStringReply_g_tc;
}


RTIBool getStringReply_initialize(
    getStringReply* sample) {
  return getStringReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getStringReply_initialize_ex(
    getStringReply* sample,RTIBool allocatePointers)
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
            
    if (!cadena_initialize_ex(&sample->s2,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!cadena_initialize_ex(&sample->s3,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!cadena_initialize_ex(&sample->returnedValue,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void getStringReply_finalize(
    getStringReply* sample)
{
    getStringReply_finalize_ex(sample,RTI_TRUE);
}
        
void getStringReply_finalize_ex(
    getStringReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    cadena_finalize_ex(&sample->s2,deletePointers);
            
    cadena_finalize_ex(&sample->s3,deletePointers);
            
    cadena_finalize_ex(&sample->returnedValue,deletePointers);
            
}

RTIBool getStringReply_copy(
    getStringReply* dst,
    const getStringReply* src)
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
            
    if (!cadena_copy(
        &dst->s2, &src->s2)) {
        return RTI_FALSE;
    }
            
    if (!cadena_copy(
        &dst->s3, &src->s3)) {
        return RTI_FALSE;
    }
            
    if (!cadena_copy(
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
 * Configure and implement 'getStringReply' sequence class.
 */
#define T getStringReply
#define TSeq getStringReplySeq
#define T_initialize_ex getStringReply_initialize_ex
#define T_finalize_ex   getStringReply_finalize_ex
#define T_copy       getStringReply_copy

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
const char *getStringBoundedRequestTYPENAME = "getStringBoundedRequest";

DDS_TypeCode* getStringBoundedRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode getStringBoundedRequest_g_tc_clientServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode_Member getStringBoundedRequest_g_tc_members[4]=
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

    static DDS_TypeCode getStringBoundedRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getStringBoundedRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getStringBoundedRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getStringBoundedRequest*/

    if (is_initialized) {
        return &getStringBoundedRequest_g_tc;
    }

    getStringBoundedRequest_g_tc_clientServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    getStringBoundedRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&getStringBoundedRequest_g_tc_clientServiceId_array;
    getStringBoundedRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getStringBoundedRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)dattos_get_typecode();
    getStringBoundedRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)dattos_get_typecode();

    is_initialized = RTI_TRUE;

    return &getStringBoundedRequest_g_tc;
}


RTIBool getStringBoundedRequest_initialize(
    getStringBoundedRequest* sample) {
  return getStringBoundedRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getStringBoundedRequest_initialize_ex(
    getStringBoundedRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */

    
    if (!RTICdrType_initArray(
        sample->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getStringBoundedRequest_finalize(
    getStringBoundedRequest* sample)
{
    getStringBoundedRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getStringBoundedRequest_finalize_ex(
    getStringBoundedRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    dattos_finalize_ex(&sample->sb1,deletePointers);
            
    dattos_finalize_ex(&sample->sb2,deletePointers);
            
}

RTIBool getStringBoundedRequest_copy(
    getStringBoundedRequest* dst,
    const getStringBoundedRequest* src)
{        

    if (!RTICdrType_copyArray(
        dst->clientServiceId, src->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getStringBoundedRequest' sequence class.
 */
#define T getStringBoundedRequest
#define TSeq getStringBoundedRequestSeq
#define T_initialize_ex getStringBoundedRequest_initialize_ex
#define T_finalize_ex   getStringBoundedRequest_finalize_ex
#define T_copy       getStringBoundedRequest_copy

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
const char *getStringBoundedReplyTYPENAME = "getStringBoundedReply";

DDS_TypeCode* getStringBoundedReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode getStringBoundedReply_g_tc_serverServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);
    static DDS_TypeCode getStringBoundedReply_g_tc_clientServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode_Member getStringBoundedReply_g_tc_members[7]=
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
            DDS_BOOLEAN_TRUE, /* Is a key? */
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

    static DDS_TypeCode getStringBoundedReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getStringBoundedReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getStringBoundedReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getStringBoundedReply*/

    if (is_initialized) {
        return &getStringBoundedReply_g_tc;
    }

    getStringBoundedReply_g_tc_serverServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getStringBoundedReply_g_tc_clientServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    getStringBoundedReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&getStringBoundedReply_g_tc_serverServiceId_array;
    getStringBoundedReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&getStringBoundedReply_g_tc_clientServiceId_array;
    getStringBoundedReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getStringBoundedReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getStringBoundedReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)dattos_get_typecode();
    getStringBoundedReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)dattos_get_typecode();
    getStringBoundedReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)dattos_get_typecode();

    is_initialized = RTI_TRUE;

    return &getStringBoundedReply_g_tc;
}


RTIBool getStringBoundedReply_initialize(
    getStringBoundedReply* sample) {
  return getStringBoundedReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getStringBoundedReply_initialize_ex(
    getStringBoundedReply* sample,RTIBool allocatePointers)
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
            
    if (!dattos_initialize_ex(&sample->sb2,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!dattos_initialize_ex(&sample->sb3,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!dattos_initialize_ex(&sample->returnedValue,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void getStringBoundedReply_finalize(
    getStringBoundedReply* sample)
{
    getStringBoundedReply_finalize_ex(sample,RTI_TRUE);
}
        
void getStringBoundedReply_finalize_ex(
    getStringBoundedReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    dattos_finalize_ex(&sample->sb2,deletePointers);
            
    dattos_finalize_ex(&sample->sb3,deletePointers);
            
    dattos_finalize_ex(&sample->returnedValue,deletePointers);
            
}

RTIBool getStringBoundedReply_copy(
    getStringBoundedReply* dst,
    const getStringBoundedReply* src)
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
            
    if (!dattos_copy(
        &dst->sb2, &src->sb2)) {
        return RTI_FALSE;
    }
            
    if (!dattos_copy(
        &dst->sb3, &src->sb3)) {
        return RTI_FALSE;
    }
            
    if (!dattos_copy(
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
 * Configure and implement 'getStringBoundedReply' sequence class.
 */
#define T getStringBoundedReply
#define TSeq getStringBoundedReplySeq
#define T_initialize_ex getStringBoundedReply_initialize_ex
#define T_finalize_ex   getStringBoundedReply_finalize_ex
#define T_copy       getStringBoundedReply_copy

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

