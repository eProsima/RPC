
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
const char *EnumYStringTest_getEnumRequestTYPENAME = "EnumYStringTest_getEnumRequest";

DDS_TypeCode* EnumYStringTest_getEnumRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member EnumYStringTest_getEnumRequest_g_tc_members[3]=
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

    static DDS_TypeCode EnumYStringTest_getEnumRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"EnumYStringTest_getEnumRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        EnumYStringTest_getEnumRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EnumYStringTest_getEnumRequest*/

    if (is_initialized) {
        return &EnumYStringTest_getEnumRequest_g_tc;
    }


    EnumYStringTest_getEnumRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    EnumYStringTest_getEnumRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Valores_get_typecode();
    EnumYStringTest_getEnumRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Valores_get_typecode();

    is_initialized = RTI_TRUE;

    return &EnumYStringTest_getEnumRequest_g_tc;
}


RTIBool EnumYStringTest_getEnumRequest_initialize(
    EnumYStringTest_getEnumRequest* sample) {
  return EnumYStringTest_getEnumRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool EnumYStringTest_getEnumRequest_initialize_ex(
    EnumYStringTest_getEnumRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
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

void EnumYStringTest_getEnumRequest_finalize(
    EnumYStringTest_getEnumRequest* sample)
{
    EnumYStringTest_getEnumRequest_finalize_ex(sample,RTI_TRUE);
}
        
void EnumYStringTest_getEnumRequest_finalize_ex(
    EnumYStringTest_getEnumRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
    Valores_finalize_ex(&sample->v1,deletePointers);
            
    Valores_finalize_ex(&sample->v2,deletePointers);
            
}

RTIBool EnumYStringTest_getEnumRequest_copy(
    EnumYStringTest_getEnumRequest* dst,
    const EnumYStringTest_getEnumRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
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
 * Configure and implement 'EnumYStringTest_getEnumRequest' sequence class.
 */
#define T EnumYStringTest_getEnumRequest
#define TSeq EnumYStringTest_getEnumRequestSeq
#define T_initialize_ex EnumYStringTest_getEnumRequest_initialize_ex
#define T_finalize_ex   EnumYStringTest_getEnumRequest_finalize_ex
#define T_copy       EnumYStringTest_getEnumRequest_copy

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
const char *EnumYStringTest_getEnumReplyTYPENAME = "EnumYStringTest_getEnumReply";

DDS_TypeCode* EnumYStringTest_getEnumReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member EnumYStringTest_getEnumReply_g_tc_members[4]=
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
            (char *)"getEnum_ret",/* Member name */
            {
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

    static DDS_TypeCode EnumYStringTest_getEnumReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"EnumYStringTest_getEnumReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        EnumYStringTest_getEnumReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EnumYStringTest_getEnumReply*/

    if (is_initialized) {
        return &EnumYStringTest_getEnumReply_g_tc;
    }


    EnumYStringTest_getEnumReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    EnumYStringTest_getEnumReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Valores_get_typecode();
    EnumYStringTest_getEnumReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Valores_get_typecode();
    EnumYStringTest_getEnumReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)Valores_get_typecode();

    is_initialized = RTI_TRUE;

    return &EnumYStringTest_getEnumReply_g_tc;
}


RTIBool EnumYStringTest_getEnumReply_initialize(
    EnumYStringTest_getEnumReply* sample) {
  return EnumYStringTest_getEnumReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool EnumYStringTest_getEnumReply_initialize_ex(
    EnumYStringTest_getEnumReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Valores_initialize_ex(&sample->v2,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Valores_initialize_ex(&sample->v3,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Valores_initialize_ex(&sample->getEnum_ret,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void EnumYStringTest_getEnumReply_finalize(
    EnumYStringTest_getEnumReply* sample)
{
    EnumYStringTest_getEnumReply_finalize_ex(sample,RTI_TRUE);
}
        
void EnumYStringTest_getEnumReply_finalize_ex(
    EnumYStringTest_getEnumReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
    Valores_finalize_ex(&sample->v2,deletePointers);
            
    Valores_finalize_ex(&sample->v3,deletePointers);
            
    Valores_finalize_ex(&sample->getEnum_ret,deletePointers);
            
}

RTIBool EnumYStringTest_getEnumReply_copy(
    EnumYStringTest_getEnumReply* dst,
    const EnumYStringTest_getEnumReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
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
        &dst->getEnum_ret, &src->getEnum_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EnumYStringTest_getEnumReply' sequence class.
 */
#define T EnumYStringTest_getEnumReply
#define TSeq EnumYStringTest_getEnumReplySeq
#define T_initialize_ex EnumYStringTest_getEnumReply_initialize_ex
#define T_finalize_ex   EnumYStringTest_getEnumReply_finalize_ex
#define T_copy       EnumYStringTest_getEnumReply_copy

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
const char *EnumYStringTest_getStringRequestTYPENAME = "EnumYStringTest_getStringRequest";

DDS_TypeCode* EnumYStringTest_getStringRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode EnumYStringTest_getStringRequest_g_tc_s1_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode EnumYStringTest_getStringRequest_g_tc_s2_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member EnumYStringTest_getStringRequest_g_tc_members[3]=
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

    static DDS_TypeCode EnumYStringTest_getStringRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"EnumYStringTest_getStringRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        EnumYStringTest_getStringRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EnumYStringTest_getStringRequest*/

    if (is_initialized) {
        return &EnumYStringTest_getStringRequest_g_tc;
    }


    EnumYStringTest_getStringRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    EnumYStringTest_getStringRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&EnumYStringTest_getStringRequest_g_tc_s1_string;
    EnumYStringTest_getStringRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&EnumYStringTest_getStringRequest_g_tc_s2_string;

    is_initialized = RTI_TRUE;

    return &EnumYStringTest_getStringRequest_g_tc;
}


RTIBool EnumYStringTest_getStringRequest_initialize(
    EnumYStringTest_getStringRequest* sample) {
  return EnumYStringTest_getStringRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool EnumYStringTest_getStringRequest_initialize_ex(
    EnumYStringTest_getStringRequest* sample,RTIBool allocatePointers)
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

void EnumYStringTest_getStringRequest_finalize(
    EnumYStringTest_getStringRequest* sample)
{
    EnumYStringTest_getStringRequest_finalize_ex(sample,RTI_TRUE);
}
        
void EnumYStringTest_getStringRequest_finalize_ex(
    EnumYStringTest_getStringRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
    DDS_String_free(sample->s1);                
            
    DDS_String_free(sample->s2);                
            
}

RTIBool EnumYStringTest_getStringRequest_copy(
    EnumYStringTest_getStringRequest* dst,
    const EnumYStringTest_getStringRequest* src)
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
 * Configure and implement 'EnumYStringTest_getStringRequest' sequence class.
 */
#define T EnumYStringTest_getStringRequest
#define TSeq EnumYStringTest_getStringRequestSeq
#define T_initialize_ex EnumYStringTest_getStringRequest_initialize_ex
#define T_finalize_ex   EnumYStringTest_getStringRequest_finalize_ex
#define T_copy       EnumYStringTest_getStringRequest_copy

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
const char *EnumYStringTest_getStringReplyTYPENAME = "EnumYStringTest_getStringReply";

DDS_TypeCode* EnumYStringTest_getStringReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode EnumYStringTest_getStringReply_g_tc_s2_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode EnumYStringTest_getStringReply_g_tc_s3_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode EnumYStringTest_getStringReply_g_tc_getString_ret_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member EnumYStringTest_getStringReply_g_tc_members[4]=
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

    static DDS_TypeCode EnumYStringTest_getStringReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"EnumYStringTest_getStringReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        EnumYStringTest_getStringReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EnumYStringTest_getStringReply*/

    if (is_initialized) {
        return &EnumYStringTest_getStringReply_g_tc;
    }


    EnumYStringTest_getStringReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    EnumYStringTest_getStringReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&EnumYStringTest_getStringReply_g_tc_s2_string;
    EnumYStringTest_getStringReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&EnumYStringTest_getStringReply_g_tc_s3_string;
    EnumYStringTest_getStringReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&EnumYStringTest_getStringReply_g_tc_getString_ret_string;

    is_initialized = RTI_TRUE;

    return &EnumYStringTest_getStringReply_g_tc;
}


RTIBool EnumYStringTest_getStringReply_initialize(
    EnumYStringTest_getStringReply* sample) {
  return EnumYStringTest_getStringReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool EnumYStringTest_getStringReply_initialize_ex(
    EnumYStringTest_getStringReply* sample,RTIBool allocatePointers)
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

void EnumYStringTest_getStringReply_finalize(
    EnumYStringTest_getStringReply* sample)
{
    EnumYStringTest_getStringReply_finalize_ex(sample,RTI_TRUE);
}
        
void EnumYStringTest_getStringReply_finalize_ex(
    EnumYStringTest_getStringReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
    DDS_String_free(sample->s2);                
            
    DDS_String_free(sample->s3);                
            
    DDS_String_free(sample->getString_ret);                
            
}

RTIBool EnumYStringTest_getStringReply_copy(
    EnumYStringTest_getStringReply* dst,
    const EnumYStringTest_getStringReply* src)
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
 * Configure and implement 'EnumYStringTest_getStringReply' sequence class.
 */
#define T EnumYStringTest_getStringReply
#define TSeq EnumYStringTest_getStringReplySeq
#define T_initialize_ex EnumYStringTest_getStringReply_initialize_ex
#define T_finalize_ex   EnumYStringTest_getStringReply_finalize_ex
#define T_copy       EnumYStringTest_getStringReply_copy

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
const char *EnumYStringTest_getStringBoundedRequestTYPENAME = "EnumYStringTest_getStringBoundedRequest";

DDS_TypeCode* EnumYStringTest_getStringBoundedRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode EnumYStringTest_getStringBoundedRequest_g_tc_sb1_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode EnumYStringTest_getStringBoundedRequest_g_tc_sb2_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member EnumYStringTest_getStringBoundedRequest_g_tc_members[3]=
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

    static DDS_TypeCode EnumYStringTest_getStringBoundedRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"EnumYStringTest_getStringBoundedRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        EnumYStringTest_getStringBoundedRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EnumYStringTest_getStringBoundedRequest*/

    if (is_initialized) {
        return &EnumYStringTest_getStringBoundedRequest_g_tc;
    }


    EnumYStringTest_getStringBoundedRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    EnumYStringTest_getStringBoundedRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&EnumYStringTest_getStringBoundedRequest_g_tc_sb1_string;
    EnumYStringTest_getStringBoundedRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&EnumYStringTest_getStringBoundedRequest_g_tc_sb2_string;

    is_initialized = RTI_TRUE;

    return &EnumYStringTest_getStringBoundedRequest_g_tc;
}


RTIBool EnumYStringTest_getStringBoundedRequest_initialize(
    EnumYStringTest_getStringBoundedRequest* sample) {
  return EnumYStringTest_getStringBoundedRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool EnumYStringTest_getStringBoundedRequest_initialize_ex(
    EnumYStringTest_getStringBoundedRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
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

void EnumYStringTest_getStringBoundedRequest_finalize(
    EnumYStringTest_getStringBoundedRequest* sample)
{
    EnumYStringTest_getStringBoundedRequest_finalize_ex(sample,RTI_TRUE);
}
        
void EnumYStringTest_getStringBoundedRequest_finalize_ex(
    EnumYStringTest_getStringBoundedRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
    DDS_String_free(sample->sb1);                
            
    DDS_String_free(sample->sb2);                
            
}

RTIBool EnumYStringTest_getStringBoundedRequest_copy(
    EnumYStringTest_getStringBoundedRequest* dst,
    const EnumYStringTest_getStringBoundedRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
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
 * Configure and implement 'EnumYStringTest_getStringBoundedRequest' sequence class.
 */
#define T EnumYStringTest_getStringBoundedRequest
#define TSeq EnumYStringTest_getStringBoundedRequestSeq
#define T_initialize_ex EnumYStringTest_getStringBoundedRequest_initialize_ex
#define T_finalize_ex   EnumYStringTest_getStringBoundedRequest_finalize_ex
#define T_copy       EnumYStringTest_getStringBoundedRequest_copy

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
const char *EnumYStringTest_getStringBoundedReplyTYPENAME = "EnumYStringTest_getStringBoundedReply";

DDS_TypeCode* EnumYStringTest_getStringBoundedReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode EnumYStringTest_getStringBoundedReply_g_tc_sb2_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode EnumYStringTest_getStringBoundedReply_g_tc_sb3_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode EnumYStringTest_getStringBoundedReply_g_tc_getStringBounded_ret_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member EnumYStringTest_getStringBoundedReply_g_tc_members[4]=
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

    static DDS_TypeCode EnumYStringTest_getStringBoundedReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"EnumYStringTest_getStringBoundedReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        EnumYStringTest_getStringBoundedReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EnumYStringTest_getStringBoundedReply*/

    if (is_initialized) {
        return &EnumYStringTest_getStringBoundedReply_g_tc;
    }


    EnumYStringTest_getStringBoundedReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    EnumYStringTest_getStringBoundedReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&EnumYStringTest_getStringBoundedReply_g_tc_sb2_string;
    EnumYStringTest_getStringBoundedReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&EnumYStringTest_getStringBoundedReply_g_tc_sb3_string;
    EnumYStringTest_getStringBoundedReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&EnumYStringTest_getStringBoundedReply_g_tc_getStringBounded_ret_string;

    is_initialized = RTI_TRUE;

    return &EnumYStringTest_getStringBoundedReply_g_tc;
}


RTIBool EnumYStringTest_getStringBoundedReply_initialize(
    EnumYStringTest_getStringBoundedReply* sample) {
  return EnumYStringTest_getStringBoundedReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool EnumYStringTest_getStringBoundedReply_initialize_ex(
    EnumYStringTest_getStringBoundedReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
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
            
    sample->getStringBounded_ret = DDS_String_alloc((255));
    if (sample->getStringBounded_ret == NULL) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void EnumYStringTest_getStringBoundedReply_finalize(
    EnumYStringTest_getStringBoundedReply* sample)
{
    EnumYStringTest_getStringBoundedReply_finalize_ex(sample,RTI_TRUE);
}
        
void EnumYStringTest_getStringBoundedReply_finalize_ex(
    EnumYStringTest_getStringBoundedReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
    DDS_String_free(sample->sb2);                
            
    DDS_String_free(sample->sb3);                
            
    DDS_String_free(sample->getStringBounded_ret);                
            
}

RTIBool EnumYStringTest_getStringBoundedReply_copy(
    EnumYStringTest_getStringBoundedReply* dst,
    const EnumYStringTest_getStringBoundedReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
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
        dst->getStringBounded_ret, src->getStringBounded_ret, (255) + 1)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EnumYStringTest_getStringBoundedReply' sequence class.
 */
#define T EnumYStringTest_getStringBoundedReply
#define TSeq EnumYStringTest_getStringBoundedReplySeq
#define T_initialize_ex EnumYStringTest_getStringBoundedReply_initialize_ex
#define T_finalize_ex   EnumYStringTest_getStringBoundedReply_finalize_ex
#define T_copy       EnumYStringTest_getStringBoundedReply_copy

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

