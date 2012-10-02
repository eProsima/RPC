
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
const char *getOctetRequestTYPENAME = "getOctetRequest";

DDS_TypeCode* getOctetRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getOctetRequest_g_tc_members[4]=
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

    static DDS_TypeCode getOctetRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getOctetRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getOctetRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getOctetRequest*/

    if (is_initialized) {
        return &getOctetRequest_g_tc;
    }


    getOctetRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getOctetRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getOctetRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    getOctetRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    is_initialized = RTI_TRUE;

    return &getOctetRequest_g_tc;
}


RTIBool getOctetRequest_initialize(
    getOctetRequest* sample) {
  return getOctetRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getOctetRequest_initialize_ex(
    getOctetRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getOctetRequest_finalize(
    getOctetRequest* sample)
{
    getOctetRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getOctetRequest_finalize_ex(
    getOctetRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getOctetRequest_copy(
    getOctetRequest* dst,
    const getOctetRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getOctetRequest' sequence class.
 */
#define T getOctetRequest
#define TSeq getOctetRequestSeq
#define T_initialize_ex getOctetRequest_initialize_ex
#define T_finalize_ex   getOctetRequest_finalize_ex
#define T_copy       getOctetRequest_copy

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
const char *getOctetReplyTYPENAME = "getOctetReply";

DDS_TypeCode* getOctetReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getOctetReply_g_tc_members[7]=
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
            (char *)"ddsrpcRetCode",/* Member name */
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

    static DDS_TypeCode getOctetReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getOctetReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getOctetReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getOctetReply*/

    if (is_initialized) {
        return &getOctetReply_g_tc;
    }


    getOctetReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getOctetReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getOctetReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getOctetReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getOctetReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    getOctetReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    getOctetReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    is_initialized = RTI_TRUE;

    return &getOctetReply_g_tc;
}


RTIBool getOctetReply_initialize(
    getOctetReply* sample) {
  return getOctetReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getOctetReply_initialize_ex(
    getOctetReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->serverServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddsrpcRetCode)) {
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

void getOctetReply_finalize(
    getOctetReply* sample)
{
    getOctetReply_finalize_ex(sample,RTI_TRUE);
}
        
void getOctetReply_finalize_ex(
    getOctetReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getOctetReply_copy(
    getOctetReply* dst,
    const getOctetReply* src)
{        

    if (!Identification_copy(
        &dst->serverServiceId, &src->serverServiceId)) {
        return RTI_FALSE;
    }
            
    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddsrpcRetCode, &src->ddsrpcRetCode)) {
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
 * Configure and implement 'getOctetReply' sequence class.
 */
#define T getOctetReply
#define TSeq getOctetReplySeq
#define T_initialize_ex getOctetReply_initialize_ex
#define T_finalize_ex   getOctetReply_finalize_ex
#define T_copy       getOctetReply_copy

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
const char *getCharRequestTYPENAME = "getCharRequest";

DDS_TypeCode* getCharRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getCharRequest_g_tc_members[4]=
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

    static DDS_TypeCode getCharRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getCharRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getCharRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getCharRequest*/

    if (is_initialized) {
        return &getCharRequest_g_tc;
    }


    getCharRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getCharRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getCharRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    getCharRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

    is_initialized = RTI_TRUE;

    return &getCharRequest_g_tc;
}


RTIBool getCharRequest_initialize(
    getCharRequest* sample) {
  return getCharRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getCharRequest_initialize_ex(
    getCharRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getCharRequest_finalize(
    getCharRequest* sample)
{
    getCharRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getCharRequest_finalize_ex(
    getCharRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getCharRequest_copy(
    getCharRequest* dst,
    const getCharRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getCharRequest' sequence class.
 */
#define T getCharRequest
#define TSeq getCharRequestSeq
#define T_initialize_ex getCharRequest_initialize_ex
#define T_finalize_ex   getCharRequest_finalize_ex
#define T_copy       getCharRequest_copy

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
const char *getCharReplyTYPENAME = "getCharReply";

DDS_TypeCode* getCharReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getCharReply_g_tc_members[7]=
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
            (char *)"ddsrpcRetCode",/* Member name */
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

    static DDS_TypeCode getCharReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getCharReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getCharReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getCharReply*/

    if (is_initialized) {
        return &getCharReply_g_tc;
    }


    getCharReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getCharReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getCharReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getCharReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getCharReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    getCharReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    getCharReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

    is_initialized = RTI_TRUE;

    return &getCharReply_g_tc;
}


RTIBool getCharReply_initialize(
    getCharReply* sample) {
  return getCharReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getCharReply_initialize_ex(
    getCharReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->serverServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddsrpcRetCode)) {
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

void getCharReply_finalize(
    getCharReply* sample)
{
    getCharReply_finalize_ex(sample,RTI_TRUE);
}
        
void getCharReply_finalize_ex(
    getCharReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getCharReply_copy(
    getCharReply* dst,
    const getCharReply* src)
{        

    if (!Identification_copy(
        &dst->serverServiceId, &src->serverServiceId)) {
        return RTI_FALSE;
    }
            
    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddsrpcRetCode, &src->ddsrpcRetCode)) {
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
 * Configure and implement 'getCharReply' sequence class.
 */
#define T getCharReply
#define TSeq getCharReplySeq
#define T_initialize_ex getCharReply_initialize_ex
#define T_finalize_ex   getCharReply_finalize_ex
#define T_copy       getCharReply_copy

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
const char *getWCharRequestTYPENAME = "getWCharRequest";

DDS_TypeCode* getWCharRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getWCharRequest_g_tc_members[4]=
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

    static DDS_TypeCode getWCharRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getWCharRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getWCharRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getWCharRequest*/

    if (is_initialized) {
        return &getWCharRequest_g_tc;
    }


    getWCharRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getWCharRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getWCharRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_wchar;
    getWCharRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_wchar;

    is_initialized = RTI_TRUE;

    return &getWCharRequest_g_tc;
}


RTIBool getWCharRequest_initialize(
    getWCharRequest* sample) {
  return getWCharRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getWCharRequest_initialize_ex(
    getWCharRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getWCharRequest_finalize(
    getWCharRequest* sample)
{
    getWCharRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getWCharRequest_finalize_ex(
    getWCharRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getWCharRequest_copy(
    getWCharRequest* dst,
    const getWCharRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getWCharRequest' sequence class.
 */
#define T getWCharRequest
#define TSeq getWCharRequestSeq
#define T_initialize_ex getWCharRequest_initialize_ex
#define T_finalize_ex   getWCharRequest_finalize_ex
#define T_copy       getWCharRequest_copy

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
const char *getWCharReplyTYPENAME = "getWCharReply";

DDS_TypeCode* getWCharReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getWCharReply_g_tc_members[7]=
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
            (char *)"ddsrpcRetCode",/* Member name */
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

    static DDS_TypeCode getWCharReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getWCharReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getWCharReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getWCharReply*/

    if (is_initialized) {
        return &getWCharReply_g_tc;
    }


    getWCharReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getWCharReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getWCharReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getWCharReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getWCharReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_wchar;
    getWCharReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_wchar;
    getWCharReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_wchar;

    is_initialized = RTI_TRUE;

    return &getWCharReply_g_tc;
}


RTIBool getWCharReply_initialize(
    getWCharReply* sample) {
  return getWCharReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getWCharReply_initialize_ex(
    getWCharReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->serverServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddsrpcRetCode)) {
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

void getWCharReply_finalize(
    getWCharReply* sample)
{
    getWCharReply_finalize_ex(sample,RTI_TRUE);
}
        
void getWCharReply_finalize_ex(
    getWCharReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getWCharReply_copy(
    getWCharReply* dst,
    const getWCharReply* src)
{        

    if (!Identification_copy(
        &dst->serverServiceId, &src->serverServiceId)) {
        return RTI_FALSE;
    }
            
    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddsrpcRetCode, &src->ddsrpcRetCode)) {
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
 * Configure and implement 'getWCharReply' sequence class.
 */
#define T getWCharReply
#define TSeq getWCharReplySeq
#define T_initialize_ex getWCharReply_initialize_ex
#define T_finalize_ex   getWCharReply_finalize_ex
#define T_copy       getWCharReply_copy

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
const char *getShortRequestTYPENAME = "getShortRequest";

DDS_TypeCode* getShortRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getShortRequest_g_tc_members[4]=
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

    static DDS_TypeCode getShortRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getShortRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getShortRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getShortRequest*/

    if (is_initialized) {
        return &getShortRequest_g_tc;
    }


    getShortRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getShortRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getShortRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    getShortRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    is_initialized = RTI_TRUE;

    return &getShortRequest_g_tc;
}


RTIBool getShortRequest_initialize(
    getShortRequest* sample) {
  return getShortRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getShortRequest_initialize_ex(
    getShortRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getShortRequest_finalize(
    getShortRequest* sample)
{
    getShortRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getShortRequest_finalize_ex(
    getShortRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getShortRequest_copy(
    getShortRequest* dst,
    const getShortRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getShortRequest' sequence class.
 */
#define T getShortRequest
#define TSeq getShortRequestSeq
#define T_initialize_ex getShortRequest_initialize_ex
#define T_finalize_ex   getShortRequest_finalize_ex
#define T_copy       getShortRequest_copy

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
const char *getShortReplyTYPENAME = "getShortReply";

DDS_TypeCode* getShortReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getShortReply_g_tc_members[7]=
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
            (char *)"ddsrpcRetCode",/* Member name */
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

    static DDS_TypeCode getShortReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getShortReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getShortReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getShortReply*/

    if (is_initialized) {
        return &getShortReply_g_tc;
    }


    getShortReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getShortReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getShortReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getShortReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getShortReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    getShortReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    getShortReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

    is_initialized = RTI_TRUE;

    return &getShortReply_g_tc;
}


RTIBool getShortReply_initialize(
    getShortReply* sample) {
  return getShortReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getShortReply_initialize_ex(
    getShortReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->serverServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddsrpcRetCode)) {
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

void getShortReply_finalize(
    getShortReply* sample)
{
    getShortReply_finalize_ex(sample,RTI_TRUE);
}
        
void getShortReply_finalize_ex(
    getShortReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getShortReply_copy(
    getShortReply* dst,
    const getShortReply* src)
{        

    if (!Identification_copy(
        &dst->serverServiceId, &src->serverServiceId)) {
        return RTI_FALSE;
    }
            
    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddsrpcRetCode, &src->ddsrpcRetCode)) {
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
 * Configure and implement 'getShortReply' sequence class.
 */
#define T getShortReply
#define TSeq getShortReplySeq
#define T_initialize_ex getShortReply_initialize_ex
#define T_finalize_ex   getShortReply_finalize_ex
#define T_copy       getShortReply_copy

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
const char *getUShortRequestTYPENAME = "getUShortRequest";

DDS_TypeCode* getUShortRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getUShortRequest_g_tc_members[4]=
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

    static DDS_TypeCode getUShortRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getUShortRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getUShortRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getUShortRequest*/

    if (is_initialized) {
        return &getUShortRequest_g_tc;
    }


    getUShortRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getUShortRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getUShortRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    getUShortRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

    is_initialized = RTI_TRUE;

    return &getUShortRequest_g_tc;
}


RTIBool getUShortRequest_initialize(
    getUShortRequest* sample) {
  return getUShortRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getUShortRequest_initialize_ex(
    getUShortRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getUShortRequest_finalize(
    getUShortRequest* sample)
{
    getUShortRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getUShortRequest_finalize_ex(
    getUShortRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getUShortRequest_copy(
    getUShortRequest* dst,
    const getUShortRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getUShortRequest' sequence class.
 */
#define T getUShortRequest
#define TSeq getUShortRequestSeq
#define T_initialize_ex getUShortRequest_initialize_ex
#define T_finalize_ex   getUShortRequest_finalize_ex
#define T_copy       getUShortRequest_copy

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
const char *getUShortReplyTYPENAME = "getUShortReply";

DDS_TypeCode* getUShortReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getUShortReply_g_tc_members[7]=
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
            (char *)"ddsrpcRetCode",/* Member name */
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

    static DDS_TypeCode getUShortReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getUShortReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getUShortReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getUShortReply*/

    if (is_initialized) {
        return &getUShortReply_g_tc;
    }


    getUShortReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getUShortReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getUShortReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getUShortReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getUShortReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    getUShortReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    getUShortReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

    is_initialized = RTI_TRUE;

    return &getUShortReply_g_tc;
}


RTIBool getUShortReply_initialize(
    getUShortReply* sample) {
  return getUShortReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getUShortReply_initialize_ex(
    getUShortReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->serverServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddsrpcRetCode)) {
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

void getUShortReply_finalize(
    getUShortReply* sample)
{
    getUShortReply_finalize_ex(sample,RTI_TRUE);
}
        
void getUShortReply_finalize_ex(
    getUShortReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getUShortReply_copy(
    getUShortReply* dst,
    const getUShortReply* src)
{        

    if (!Identification_copy(
        &dst->serverServiceId, &src->serverServiceId)) {
        return RTI_FALSE;
    }
            
    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddsrpcRetCode, &src->ddsrpcRetCode)) {
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
 * Configure and implement 'getUShortReply' sequence class.
 */
#define T getUShortReply
#define TSeq getUShortReplySeq
#define T_initialize_ex getUShortReply_initialize_ex
#define T_finalize_ex   getUShortReply_finalize_ex
#define T_copy       getUShortReply_copy

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
const char *getLongRequestTYPENAME = "getLongRequest";

DDS_TypeCode* getLongRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getLongRequest_g_tc_members[4]=
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

    static DDS_TypeCode getLongRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getLongRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getLongRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getLongRequest*/

    if (is_initialized) {
        return &getLongRequest_g_tc;
    }


    getLongRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getLongRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getLongRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getLongRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &getLongRequest_g_tc;
}


RTIBool getLongRequest_initialize(
    getLongRequest* sample) {
  return getLongRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getLongRequest_initialize_ex(
    getLongRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getLongRequest_finalize(
    getLongRequest* sample)
{
    getLongRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getLongRequest_finalize_ex(
    getLongRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getLongRequest_copy(
    getLongRequest* dst,
    const getLongRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getLongRequest' sequence class.
 */
#define T getLongRequest
#define TSeq getLongRequestSeq
#define T_initialize_ex getLongRequest_initialize_ex
#define T_finalize_ex   getLongRequest_finalize_ex
#define T_copy       getLongRequest_copy

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
const char *getLongReplyTYPENAME = "getLongReply";

DDS_TypeCode* getLongReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getLongReply_g_tc_members[7]=
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
            (char *)"ddsrpcRetCode",/* Member name */
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

    static DDS_TypeCode getLongReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getLongReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getLongReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getLongReply*/

    if (is_initialized) {
        return &getLongReply_g_tc;
    }


    getLongReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getLongReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getLongReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getLongReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getLongReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getLongReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getLongReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &getLongReply_g_tc;
}


RTIBool getLongReply_initialize(
    getLongReply* sample) {
  return getLongReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getLongReply_initialize_ex(
    getLongReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->serverServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddsrpcRetCode)) {
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

void getLongReply_finalize(
    getLongReply* sample)
{
    getLongReply_finalize_ex(sample,RTI_TRUE);
}
        
void getLongReply_finalize_ex(
    getLongReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getLongReply_copy(
    getLongReply* dst,
    const getLongReply* src)
{        

    if (!Identification_copy(
        &dst->serverServiceId, &src->serverServiceId)) {
        return RTI_FALSE;
    }
            
    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddsrpcRetCode, &src->ddsrpcRetCode)) {
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
 * Configure and implement 'getLongReply' sequence class.
 */
#define T getLongReply
#define TSeq getLongReplySeq
#define T_initialize_ex getLongReply_initialize_ex
#define T_finalize_ex   getLongReply_finalize_ex
#define T_copy       getLongReply_copy

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
const char *getULongRequestTYPENAME = "getULongRequest";

DDS_TypeCode* getULongRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getULongRequest_g_tc_members[4]=
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

    static DDS_TypeCode getULongRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getULongRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getULongRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getULongRequest*/

    if (is_initialized) {
        return &getULongRequest_g_tc;
    }


    getULongRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getULongRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getULongRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getULongRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    is_initialized = RTI_TRUE;

    return &getULongRequest_g_tc;
}


RTIBool getULongRequest_initialize(
    getULongRequest* sample) {
  return getULongRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getULongRequest_initialize_ex(
    getULongRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getULongRequest_finalize(
    getULongRequest* sample)
{
    getULongRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getULongRequest_finalize_ex(
    getULongRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getULongRequest_copy(
    getULongRequest* dst,
    const getULongRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getULongRequest' sequence class.
 */
#define T getULongRequest
#define TSeq getULongRequestSeq
#define T_initialize_ex getULongRequest_initialize_ex
#define T_finalize_ex   getULongRequest_finalize_ex
#define T_copy       getULongRequest_copy

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
const char *getULongReplyTYPENAME = "getULongReply";

DDS_TypeCode* getULongReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getULongReply_g_tc_members[7]=
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
            (char *)"ddsrpcRetCode",/* Member name */
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

    static DDS_TypeCode getULongReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getULongReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getULongReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getULongReply*/

    if (is_initialized) {
        return &getULongReply_g_tc;
    }


    getULongReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getULongReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getULongReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getULongReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getULongReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getULongReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getULongReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    is_initialized = RTI_TRUE;

    return &getULongReply_g_tc;
}


RTIBool getULongReply_initialize(
    getULongReply* sample) {
  return getULongReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getULongReply_initialize_ex(
    getULongReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->serverServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddsrpcRetCode)) {
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

void getULongReply_finalize(
    getULongReply* sample)
{
    getULongReply_finalize_ex(sample,RTI_TRUE);
}
        
void getULongReply_finalize_ex(
    getULongReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getULongReply_copy(
    getULongReply* dst,
    const getULongReply* src)
{        

    if (!Identification_copy(
        &dst->serverServiceId, &src->serverServiceId)) {
        return RTI_FALSE;
    }
            
    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddsrpcRetCode, &src->ddsrpcRetCode)) {
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
 * Configure and implement 'getULongReply' sequence class.
 */
#define T getULongReply
#define TSeq getULongReplySeq
#define T_initialize_ex getULongReply_initialize_ex
#define T_finalize_ex   getULongReply_finalize_ex
#define T_copy       getULongReply_copy

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
const char *getLLongRequestTYPENAME = "getLLongRequest";

DDS_TypeCode* getLLongRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getLLongRequest_g_tc_members[4]=
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

    static DDS_TypeCode getLLongRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getLLongRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getLLongRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getLLongRequest*/

    if (is_initialized) {
        return &getLLongRequest_g_tc;
    }


    getLLongRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getLLongRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getLLongRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    getLLongRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    is_initialized = RTI_TRUE;

    return &getLLongRequest_g_tc;
}


RTIBool getLLongRequest_initialize(
    getLLongRequest* sample) {
  return getLLongRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getLLongRequest_initialize_ex(
    getLLongRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getLLongRequest_finalize(
    getLLongRequest* sample)
{
    getLLongRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getLLongRequest_finalize_ex(
    getLLongRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getLLongRequest_copy(
    getLLongRequest* dst,
    const getLLongRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getLLongRequest' sequence class.
 */
#define T getLLongRequest
#define TSeq getLLongRequestSeq
#define T_initialize_ex getLLongRequest_initialize_ex
#define T_finalize_ex   getLLongRequest_finalize_ex
#define T_copy       getLLongRequest_copy

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
const char *getLLongReplyTYPENAME = "getLLongReply";

DDS_TypeCode* getLLongReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getLLongReply_g_tc_members[7]=
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
            (char *)"ddsrpcRetCode",/* Member name */
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

    static DDS_TypeCode getLLongReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getLLongReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getLLongReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getLLongReply*/

    if (is_initialized) {
        return &getLLongReply_g_tc;
    }


    getLLongReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getLLongReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getLLongReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getLLongReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getLLongReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    getLLongReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    getLLongReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

    is_initialized = RTI_TRUE;

    return &getLLongReply_g_tc;
}


RTIBool getLLongReply_initialize(
    getLLongReply* sample) {
  return getLLongReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getLLongReply_initialize_ex(
    getLLongReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->serverServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddsrpcRetCode)) {
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

void getLLongReply_finalize(
    getLLongReply* sample)
{
    getLLongReply_finalize_ex(sample,RTI_TRUE);
}
        
void getLLongReply_finalize_ex(
    getLLongReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getLLongReply_copy(
    getLLongReply* dst,
    const getLLongReply* src)
{        

    if (!Identification_copy(
        &dst->serverServiceId, &src->serverServiceId)) {
        return RTI_FALSE;
    }
            
    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddsrpcRetCode, &src->ddsrpcRetCode)) {
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
 * Configure and implement 'getLLongReply' sequence class.
 */
#define T getLLongReply
#define TSeq getLLongReplySeq
#define T_initialize_ex getLLongReply_initialize_ex
#define T_finalize_ex   getLLongReply_finalize_ex
#define T_copy       getLLongReply_copy

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
const char *getULLongRequestTYPENAME = "getULLongRequest";

DDS_TypeCode* getULLongRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getULLongRequest_g_tc_members[4]=
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

    static DDS_TypeCode getULLongRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getULLongRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getULLongRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getULLongRequest*/

    if (is_initialized) {
        return &getULLongRequest_g_tc;
    }


    getULLongRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getULLongRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getULLongRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;
    getULLongRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

    is_initialized = RTI_TRUE;

    return &getULLongRequest_g_tc;
}


RTIBool getULLongRequest_initialize(
    getULLongRequest* sample) {
  return getULLongRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getULLongRequest_initialize_ex(
    getULLongRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getULLongRequest_finalize(
    getULLongRequest* sample)
{
    getULLongRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getULLongRequest_finalize_ex(
    getULLongRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getULLongRequest_copy(
    getULLongRequest* dst,
    const getULLongRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getULLongRequest' sequence class.
 */
#define T getULLongRequest
#define TSeq getULLongRequestSeq
#define T_initialize_ex getULLongRequest_initialize_ex
#define T_finalize_ex   getULLongRequest_finalize_ex
#define T_copy       getULLongRequest_copy

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
const char *getULLongReplyTYPENAME = "getULLongReply";

DDS_TypeCode* getULLongReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getULLongReply_g_tc_members[7]=
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
            (char *)"ddsrpcRetCode",/* Member name */
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

    static DDS_TypeCode getULLongReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getULLongReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getULLongReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getULLongReply*/

    if (is_initialized) {
        return &getULLongReply_g_tc;
    }


    getULLongReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getULLongReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getULLongReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getULLongReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getULLongReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;
    getULLongReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;
    getULLongReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

    is_initialized = RTI_TRUE;

    return &getULLongReply_g_tc;
}


RTIBool getULLongReply_initialize(
    getULLongReply* sample) {
  return getULLongReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getULLongReply_initialize_ex(
    getULLongReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->serverServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddsrpcRetCode)) {
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

void getULLongReply_finalize(
    getULLongReply* sample)
{
    getULLongReply_finalize_ex(sample,RTI_TRUE);
}
        
void getULLongReply_finalize_ex(
    getULLongReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getULLongReply_copy(
    getULLongReply* dst,
    const getULLongReply* src)
{        

    if (!Identification_copy(
        &dst->serverServiceId, &src->serverServiceId)) {
        return RTI_FALSE;
    }
            
    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddsrpcRetCode, &src->ddsrpcRetCode)) {
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
 * Configure and implement 'getULLongReply' sequence class.
 */
#define T getULLongReply
#define TSeq getULLongReplySeq
#define T_initialize_ex getULLongReply_initialize_ex
#define T_finalize_ex   getULLongReply_finalize_ex
#define T_copy       getULLongReply_copy

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
const char *getFloatRequestTYPENAME = "getFloatRequest";

DDS_TypeCode* getFloatRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getFloatRequest_g_tc_members[4]=
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

    static DDS_TypeCode getFloatRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getFloatRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getFloatRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getFloatRequest*/

    if (is_initialized) {
        return &getFloatRequest_g_tc;
    }


    getFloatRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getFloatRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getFloatRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    getFloatRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &getFloatRequest_g_tc;
}


RTIBool getFloatRequest_initialize(
    getFloatRequest* sample) {
  return getFloatRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getFloatRequest_initialize_ex(
    getFloatRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getFloatRequest_finalize(
    getFloatRequest* sample)
{
    getFloatRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getFloatRequest_finalize_ex(
    getFloatRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getFloatRequest_copy(
    getFloatRequest* dst,
    const getFloatRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getFloatRequest' sequence class.
 */
#define T getFloatRequest
#define TSeq getFloatRequestSeq
#define T_initialize_ex getFloatRequest_initialize_ex
#define T_finalize_ex   getFloatRequest_finalize_ex
#define T_copy       getFloatRequest_copy

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
const char *getFloatReplyTYPENAME = "getFloatReply";

DDS_TypeCode* getFloatReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getFloatReply_g_tc_members[7]=
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
            (char *)"ddsrpcRetCode",/* Member name */
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

    static DDS_TypeCode getFloatReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getFloatReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getFloatReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getFloatReply*/

    if (is_initialized) {
        return &getFloatReply_g_tc;
    }


    getFloatReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getFloatReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getFloatReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getFloatReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getFloatReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    getFloatReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
    getFloatReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

    is_initialized = RTI_TRUE;

    return &getFloatReply_g_tc;
}


RTIBool getFloatReply_initialize(
    getFloatReply* sample) {
  return getFloatReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getFloatReply_initialize_ex(
    getFloatReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->serverServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddsrpcRetCode)) {
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

void getFloatReply_finalize(
    getFloatReply* sample)
{
    getFloatReply_finalize_ex(sample,RTI_TRUE);
}
        
void getFloatReply_finalize_ex(
    getFloatReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getFloatReply_copy(
    getFloatReply* dst,
    const getFloatReply* src)
{        

    if (!Identification_copy(
        &dst->serverServiceId, &src->serverServiceId)) {
        return RTI_FALSE;
    }
            
    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddsrpcRetCode, &src->ddsrpcRetCode)) {
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
 * Configure and implement 'getFloatReply' sequence class.
 */
#define T getFloatReply
#define TSeq getFloatReplySeq
#define T_initialize_ex getFloatReply_initialize_ex
#define T_finalize_ex   getFloatReply_finalize_ex
#define T_copy       getFloatReply_copy

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
const char *getDoubleRequestTYPENAME = "getDoubleRequest";

DDS_TypeCode* getDoubleRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getDoubleRequest_g_tc_members[4]=
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

    static DDS_TypeCode getDoubleRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getDoubleRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getDoubleRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getDoubleRequest*/

    if (is_initialized) {
        return &getDoubleRequest_g_tc;
    }


    getDoubleRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getDoubleRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getDoubleRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    getDoubleRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &getDoubleRequest_g_tc;
}


RTIBool getDoubleRequest_initialize(
    getDoubleRequest* sample) {
  return getDoubleRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getDoubleRequest_initialize_ex(
    getDoubleRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getDoubleRequest_finalize(
    getDoubleRequest* sample)
{
    getDoubleRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getDoubleRequest_finalize_ex(
    getDoubleRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getDoubleRequest_copy(
    getDoubleRequest* dst,
    const getDoubleRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getDoubleRequest' sequence class.
 */
#define T getDoubleRequest
#define TSeq getDoubleRequestSeq
#define T_initialize_ex getDoubleRequest_initialize_ex
#define T_finalize_ex   getDoubleRequest_finalize_ex
#define T_copy       getDoubleRequest_copy

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
const char *getDoubleReplyTYPENAME = "getDoubleReply";

DDS_TypeCode* getDoubleReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getDoubleReply_g_tc_members[7]=
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
            (char *)"ddsrpcRetCode",/* Member name */
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

    static DDS_TypeCode getDoubleReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getDoubleReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getDoubleReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getDoubleReply*/

    if (is_initialized) {
        return &getDoubleReply_g_tc;
    }


    getDoubleReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getDoubleReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getDoubleReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getDoubleReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getDoubleReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    getDoubleReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    getDoubleReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &getDoubleReply_g_tc;
}


RTIBool getDoubleReply_initialize(
    getDoubleReply* sample) {
  return getDoubleReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getDoubleReply_initialize_ex(
    getDoubleReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->serverServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddsrpcRetCode)) {
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

void getDoubleReply_finalize(
    getDoubleReply* sample)
{
    getDoubleReply_finalize_ex(sample,RTI_TRUE);
}
        
void getDoubleReply_finalize_ex(
    getDoubleReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getDoubleReply_copy(
    getDoubleReply* dst,
    const getDoubleReply* src)
{        

    if (!Identification_copy(
        &dst->serverServiceId, &src->serverServiceId)) {
        return RTI_FALSE;
    }
            
    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddsrpcRetCode, &src->ddsrpcRetCode)) {
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
 * Configure and implement 'getDoubleReply' sequence class.
 */
#define T getDoubleReply
#define TSeq getDoubleReplySeq
#define T_initialize_ex getDoubleReply_initialize_ex
#define T_finalize_ex   getDoubleReply_finalize_ex
#define T_copy       getDoubleReply_copy

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
const char *getBooleanRequestTYPENAME = "getBooleanRequest";

DDS_TypeCode* getBooleanRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getBooleanRequest_g_tc_members[4]=
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

    static DDS_TypeCode getBooleanRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getBooleanRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getBooleanRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getBooleanRequest*/

    if (is_initialized) {
        return &getBooleanRequest_g_tc;
    }


    getBooleanRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getBooleanRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getBooleanRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    getBooleanRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &getBooleanRequest_g_tc;
}


RTIBool getBooleanRequest_initialize(
    getBooleanRequest* sample) {
  return getBooleanRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getBooleanRequest_initialize_ex(
    getBooleanRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getBooleanRequest_finalize(
    getBooleanRequest* sample)
{
    getBooleanRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getBooleanRequest_finalize_ex(
    getBooleanRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getBooleanRequest_copy(
    getBooleanRequest* dst,
    const getBooleanRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getBooleanRequest' sequence class.
 */
#define T getBooleanRequest
#define TSeq getBooleanRequestSeq
#define T_initialize_ex getBooleanRequest_initialize_ex
#define T_finalize_ex   getBooleanRequest_finalize_ex
#define T_copy       getBooleanRequest_copy

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
const char *getBooleanReplyTYPENAME = "getBooleanReply";

DDS_TypeCode* getBooleanReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member getBooleanReply_g_tc_members[7]=
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
            (char *)"ddsrpcRetCode",/* Member name */
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

    static DDS_TypeCode getBooleanReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getBooleanReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getBooleanReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getBooleanReply*/

    if (is_initialized) {
        return &getBooleanReply_g_tc;
    }


    getBooleanReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getBooleanReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    getBooleanReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getBooleanReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getBooleanReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    getBooleanReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    getBooleanReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &getBooleanReply_g_tc;
}


RTIBool getBooleanReply_initialize(
    getBooleanReply* sample) {
  return getBooleanReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getBooleanReply_initialize_ex(
    getBooleanReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->serverServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            
    if (!RTICdrType_initLong(&sample->ddsrpcRetCode)) {
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

void getBooleanReply_finalize(
    getBooleanReply* sample)
{
    getBooleanReply_finalize_ex(sample,RTI_TRUE);
}
        
void getBooleanReply_finalize_ex(
    getBooleanReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool getBooleanReply_copy(
    getBooleanReply* dst,
    const getBooleanReply* src)
{        

    if (!Identification_copy(
        &dst->serverServiceId, &src->serverServiceId)) {
        return RTI_FALSE;
    }
            
    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyLong(
        &dst->ddsrpcRetCode, &src->ddsrpcRetCode)) {
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
 * Configure and implement 'getBooleanReply' sequence class.
 */
#define T getBooleanReply
#define TSeq getBooleanReplySeq
#define T_initialize_ex getBooleanReply_initialize_ex
#define T_finalize_ex   getBooleanReply_finalize_ex
#define T_copy       getBooleanReply_copy

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

