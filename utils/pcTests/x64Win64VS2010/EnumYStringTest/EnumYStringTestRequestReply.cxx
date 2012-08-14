
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EnumYStringTestRequestReply.idl using "rtiddsgen".
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



#include "EnumYStringTestRequestReply.h"

/* ========================================================================= */
const char *getEnumRequestTYPENAME = "getEnumRequest";

DDS_TypeCode* getEnumRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode getEnumRequest_g_tc_clientServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode_Member getEnumRequest_g_tc_members[4]=
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
            (char *)"v1",/* Member name */
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
            (char *)"v2",/* Member name */
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

    static DDS_TypeCode getEnumRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getEnumRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getEnumRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getEnumRequest*/

    if (is_initialized) {
        return &getEnumRequest_g_tc;
    }

    getEnumRequest_g_tc_clientServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    getEnumRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&getEnumRequest_g_tc_clientServiceId_array;
    getEnumRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getEnumRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Valores_get_typecode();
    getEnumRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)Valores_get_typecode();

    is_initialized = RTI_TRUE;

    return &getEnumRequest_g_tc;
}


RTIBool getEnumRequest_initialize(
    getEnumRequest* sample) {
  return getEnumRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getEnumRequest_initialize_ex(
    getEnumRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */

    
    if (!RTICdrType_initArray(
        sample->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!Valores_initialize_ex(&sample->v1,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Valores_initialize_ex(&sample->v2,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void getEnumRequest_finalize(
    getEnumRequest* sample)
{
    getEnumRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getEnumRequest_finalize_ex(
    getEnumRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Valores_finalize_ex(&sample->v1,deletePointers);
            
    Valores_finalize_ex(&sample->v2,deletePointers);
            
}

RTIBool getEnumRequest_copy(
    getEnumRequest* dst,
    const getEnumRequest* src)
{        

    if (!RTICdrType_copyArray(
        dst->clientServiceId, src->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!Valores_copy(
        &dst->v1, &src->v1)) {
        return RTI_FALSE;
    }
            
    if (!Valores_copy(
        &dst->v2, &src->v2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'getEnumRequest' sequence class.
 */
#define T getEnumRequest
#define TSeq getEnumRequestSeq
#define T_initialize_ex getEnumRequest_initialize_ex
#define T_finalize_ex   getEnumRequest_finalize_ex
#define T_copy       getEnumRequest_copy

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
const char *getEnumReplyTYPENAME = "getEnumReply";

DDS_TypeCode* getEnumReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode getEnumReply_g_tc_serverServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);
    static DDS_TypeCode getEnumReply_g_tc_clientServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode_Member getEnumReply_g_tc_members[7]=
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
            (char *)"v2",/* Member name */
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
            (char *)"v3",/* Member name */
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

    static DDS_TypeCode getEnumReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getEnumReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getEnumReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getEnumReply*/

    if (is_initialized) {
        return &getEnumReply_g_tc;
    }

    getEnumReply_g_tc_serverServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getEnumReply_g_tc_clientServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    getEnumReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&getEnumReply_g_tc_serverServiceId_array;
    getEnumReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&getEnumReply_g_tc_clientServiceId_array;
    getEnumReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getEnumReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getEnumReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)Valores_get_typecode();
    getEnumReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)Valores_get_typecode();
    getEnumReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)Valores_get_typecode();

    is_initialized = RTI_TRUE;

    return &getEnumReply_g_tc;
}


RTIBool getEnumReply_initialize(
    getEnumReply* sample) {
  return getEnumReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getEnumReply_initialize_ex(
    getEnumReply* sample,RTIBool allocatePointers)
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
            
    if (!Valores_initialize_ex(&sample->v2,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Valores_initialize_ex(&sample->v3,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Valores_initialize_ex(&sample->returnedValue,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void getEnumReply_finalize(
    getEnumReply* sample)
{
    getEnumReply_finalize_ex(sample,RTI_TRUE);
}
        
void getEnumReply_finalize_ex(
    getEnumReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Valores_finalize_ex(&sample->v2,deletePointers);
            
    Valores_finalize_ex(&sample->v3,deletePointers);
            
    Valores_finalize_ex(&sample->returnedValue,deletePointers);
            
}

RTIBool getEnumReply_copy(
    getEnumReply* dst,
    const getEnumReply* src)
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
            
    if (!Valores_copy(
        &dst->v2, &src->v2)) {
        return RTI_FALSE;
    }
            
    if (!Valores_copy(
        &dst->v3, &src->v3)) {
        return RTI_FALSE;
    }
            
    if (!Valores_copy(
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
 * Configure and implement 'getEnumReply' sequence class.
 */
#define T getEnumReply
#define TSeq getEnumReplySeq
#define T_initialize_ex getEnumReply_initialize_ex
#define T_finalize_ex   getEnumReply_finalize_ex
#define T_copy       getEnumReply_copy

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
    static DDS_TypeCode getStringRequest_g_tc_s1_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode getStringRequest_g_tc_s2_string = DDS_INITIALIZE_STRING_TYPECODE(255);

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
    getStringRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&getStringRequest_g_tc_s1_string;
    getStringRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&getStringRequest_g_tc_s2_string;

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


    DDS_String_free(sample->s1);                
            
    DDS_String_free(sample->s2);                
            
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
    static DDS_TypeCode getStringReply_g_tc_s2_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode getStringReply_g_tc_s3_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode getStringReply_g_tc_returnedValue_string = DDS_INITIALIZE_STRING_TYPECODE(255);

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
    getStringReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&getStringReply_g_tc_s2_string;
    getStringReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&getStringReply_g_tc_s3_string;
    getStringReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&getStringReply_g_tc_returnedValue_string;

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
            
    sample->s2 = DDS_String_alloc((255));
    if (sample->s2 == NULL) {
        return RTI_FALSE;
    }
            
    sample->s3 = DDS_String_alloc((255));
    if (sample->s3 == NULL) {
        return RTI_FALSE;
    }
            
    sample->returnedValue = DDS_String_alloc((255));
    if (sample->returnedValue == NULL) {
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


    DDS_String_free(sample->s2);                
            
    DDS_String_free(sample->s3);                
            
    DDS_String_free(sample->returnedValue);                
            
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
            
    if (!RTICdrType_copyString(
        dst->s2, src->s2, (255) + 1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->s3, src->s3, (255) + 1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->returnedValue, src->returnedValue, (255) + 1)) {
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
    static DDS_TypeCode getStringBoundedRequest_g_tc_sb1_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode getStringBoundedRequest_g_tc_sb2_string = DDS_INITIALIZE_STRING_TYPECODE(255);

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
    getStringBoundedRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&getStringBoundedRequest_g_tc_sb1_string;
    getStringBoundedRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&getStringBoundedRequest_g_tc_sb2_string;

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
            
    sample->sb1 = DDS_String_alloc((255));
    if (sample->sb1 == NULL) {
        return RTI_FALSE;
    }
            
    sample->sb2 = DDS_String_alloc((255));
    if (sample->sb2 == NULL) {
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


    DDS_String_free(sample->sb1);                
            
    DDS_String_free(sample->sb2);                
            
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
            
    if (!RTICdrType_copyString(
        dst->sb1, src->sb1, (255) + 1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->sb2, src->sb2, (255) + 1)) {
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
    static DDS_TypeCode getStringBoundedReply_g_tc_sb2_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode getStringBoundedReply_g_tc_sb3_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode getStringBoundedReply_g_tc_returnedValue_string = DDS_INITIALIZE_STRING_TYPECODE(255);

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
    getStringBoundedReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&getStringBoundedReply_g_tc_sb2_string;
    getStringBoundedReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&getStringBoundedReply_g_tc_sb3_string;
    getStringBoundedReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&getStringBoundedReply_g_tc_returnedValue_string;

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
            
    sample->sb2 = DDS_String_alloc((255));
    if (sample->sb2 == NULL) {
        return RTI_FALSE;
    }
            
    sample->sb3 = DDS_String_alloc((255));
    if (sample->sb3 == NULL) {
        return RTI_FALSE;
    }
            
    sample->returnedValue = DDS_String_alloc((255));
    if (sample->returnedValue == NULL) {
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


    DDS_String_free(sample->sb2);                
            
    DDS_String_free(sample->sb3);                
            
    DDS_String_free(sample->returnedValue);                
            
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
            
    if (!RTICdrType_copyString(
        dst->sb2, src->sb2, (255) + 1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->sb3, src->sb3, (255) + 1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->returnedValue, src->returnedValue, (255) + 1)) {
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

