
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TypedefTestRequestReply.idl using "rtiddsgen".
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



#include "TypedefTestRequestReply.h"

/* ========================================================================= */
const char *TypedefTest_getLargoRequestTYPENAME = "TypedefTest_getLargoRequest";

DDS_TypeCode* TypedefTest_getLargoRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TypedefTest_getLargoRequest_g_tc_members[2]=
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
        }
    };

    static DDS_TypeCode TypedefTest_getLargoRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TypedefTest_getLargoRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TypedefTest_getLargoRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TypedefTest_getLargoRequest*/

    if (is_initialized) {
        return &TypedefTest_getLargoRequest_g_tc;
    }


    TypedefTest_getLargoRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    TypedefTest_getLargoRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)largo_get_typecode();

    is_initialized = RTI_TRUE;

    return &TypedefTest_getLargoRequest_g_tc;
}


RTIBool TypedefTest_getLargoRequest_initialize(
    TypedefTest_getLargoRequest* sample) {
  return TypedefTest_getLargoRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TypedefTest_getLargoRequest_initialize_ex(
    TypedefTest_getLargoRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!largo_initialize_ex(&sample->l1,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TypedefTest_getLargoRequest_finalize(
    TypedefTest_getLargoRequest* sample)
{
    TypedefTest_getLargoRequest_finalize_ex(sample,RTI_TRUE);
}
        
void TypedefTest_getLargoRequest_finalize_ex(
    TypedefTest_getLargoRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

    largo_finalize_ex(&sample->l1,deletePointers);
            

}

RTIBool TypedefTest_getLargoRequest_copy(
    TypedefTest_getLargoRequest* dst,
    const TypedefTest_getLargoRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!largo_copy(
        &dst->l1, &src->l1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TypedefTest_getLargoRequest' sequence class.
 */
#define T TypedefTest_getLargoRequest
#define TSeq TypedefTest_getLargoRequestSeq
#define T_initialize_ex TypedefTest_getLargoRequest_initialize_ex
#define T_finalize_ex   TypedefTest_getLargoRequest_finalize_ex
#define T_copy       TypedefTest_getLargoRequest_copy

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
const char *TypedefTest_getLargoReplyTYPENAME = "TypedefTest_getLargoReply";

DDS_TypeCode* TypedefTest_getLargoReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TypedefTest_getLargoReply_g_tc_members[3]=
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
            (char *)"getLargo_ret",/* Member name */
            {
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

    static DDS_TypeCode TypedefTest_getLargoReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TypedefTest_getLargoReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        TypedefTest_getLargoReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TypedefTest_getLargoReply*/

    if (is_initialized) {
        return &TypedefTest_getLargoReply_g_tc;
    }


    TypedefTest_getLargoReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    TypedefTest_getLargoReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)largo_get_typecode();
    TypedefTest_getLargoReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)largo_get_typecode();

    is_initialized = RTI_TRUE;

    return &TypedefTest_getLargoReply_g_tc;
}


RTIBool TypedefTest_getLargoReply_initialize(
    TypedefTest_getLargoReply* sample) {
  return TypedefTest_getLargoReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TypedefTest_getLargoReply_initialize_ex(
    TypedefTest_getLargoReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!largo_initialize_ex(&sample->l2,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!largo_initialize_ex(&sample->getLargo_ret,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TypedefTest_getLargoReply_finalize(
    TypedefTest_getLargoReply* sample)
{
    TypedefTest_getLargoReply_finalize_ex(sample,RTI_TRUE);
}
        
void TypedefTest_getLargoReply_finalize_ex(
    TypedefTest_getLargoReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            

    largo_finalize_ex(&sample->l2,deletePointers);
            

    largo_finalize_ex(&sample->getLargo_ret,deletePointers);
            

}

RTIBool TypedefTest_getLargoReply_copy(
    TypedefTest_getLargoReply* dst,
    const TypedefTest_getLargoReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!largo_copy(
        &dst->l2, &src->l2)) {
        return RTI_FALSE;
    }
            

    if (!largo_copy(
        &dst->getLargo_ret, &src->getLargo_ret)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TypedefTest_getLargoReply' sequence class.
 */
#define T TypedefTest_getLargoReply
#define TSeq TypedefTest_getLargoReplySeq
#define T_initialize_ex TypedefTest_getLargoReply_initialize_ex
#define T_finalize_ex   TypedefTest_getLargoReply_finalize_ex
#define T_copy       TypedefTest_getLargoReply_copy

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
const char *TypedefTest_getLarguisimoRequestTYPENAME = "TypedefTest_getLarguisimoRequest";

DDS_TypeCode* TypedefTest_getLarguisimoRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TypedefTest_getLarguisimoRequest_g_tc_members[2]=
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
            (char *)"ll1",/* Member name */
            {
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

    static DDS_TypeCode TypedefTest_getLarguisimoRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TypedefTest_getLarguisimoRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TypedefTest_getLarguisimoRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TypedefTest_getLarguisimoRequest*/

    if (is_initialized) {
        return &TypedefTest_getLarguisimoRequest_g_tc;
    }


    TypedefTest_getLarguisimoRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    TypedefTest_getLarguisimoRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)larguisimo_get_typecode();

    is_initialized = RTI_TRUE;

    return &TypedefTest_getLarguisimoRequest_g_tc;
}


RTIBool TypedefTest_getLarguisimoRequest_initialize(
    TypedefTest_getLarguisimoRequest* sample) {
  return TypedefTest_getLarguisimoRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TypedefTest_getLarguisimoRequest_initialize_ex(
    TypedefTest_getLarguisimoRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!larguisimo_initialize_ex(&sample->ll1,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TypedefTest_getLarguisimoRequest_finalize(
    TypedefTest_getLarguisimoRequest* sample)
{
    TypedefTest_getLarguisimoRequest_finalize_ex(sample,RTI_TRUE);
}
        
void TypedefTest_getLarguisimoRequest_finalize_ex(
    TypedefTest_getLarguisimoRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

    larguisimo_finalize_ex(&sample->ll1,deletePointers);
            

}

RTIBool TypedefTest_getLarguisimoRequest_copy(
    TypedefTest_getLarguisimoRequest* dst,
    const TypedefTest_getLarguisimoRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!larguisimo_copy(
        &dst->ll1, &src->ll1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TypedefTest_getLarguisimoRequest' sequence class.
 */
#define T TypedefTest_getLarguisimoRequest
#define TSeq TypedefTest_getLarguisimoRequestSeq
#define T_initialize_ex TypedefTest_getLarguisimoRequest_initialize_ex
#define T_finalize_ex   TypedefTest_getLarguisimoRequest_finalize_ex
#define T_copy       TypedefTest_getLarguisimoRequest_copy

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
const char *TypedefTest_getLarguisimoReplyTYPENAME = "TypedefTest_getLarguisimoReply";

DDS_TypeCode* TypedefTest_getLarguisimoReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TypedefTest_getLarguisimoReply_g_tc_members[3]=
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
            (char *)"ll2",/* Member name */
            {
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
            (char *)"getLarguisimo_ret",/* Member name */
            {
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

    static DDS_TypeCode TypedefTest_getLarguisimoReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TypedefTest_getLarguisimoReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        TypedefTest_getLarguisimoReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TypedefTest_getLarguisimoReply*/

    if (is_initialized) {
        return &TypedefTest_getLarguisimoReply_g_tc;
    }


    TypedefTest_getLarguisimoReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    TypedefTest_getLarguisimoReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)larguisimo_get_typecode();
    TypedefTest_getLarguisimoReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)larguisimo_get_typecode();

    is_initialized = RTI_TRUE;

    return &TypedefTest_getLarguisimoReply_g_tc;
}


RTIBool TypedefTest_getLarguisimoReply_initialize(
    TypedefTest_getLarguisimoReply* sample) {
  return TypedefTest_getLarguisimoReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TypedefTest_getLarguisimoReply_initialize_ex(
    TypedefTest_getLarguisimoReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!larguisimo_initialize_ex(&sample->ll2,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!larguisimo_initialize_ex(&sample->getLarguisimo_ret,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TypedefTest_getLarguisimoReply_finalize(
    TypedefTest_getLarguisimoReply* sample)
{
    TypedefTest_getLarguisimoReply_finalize_ex(sample,RTI_TRUE);
}
        
void TypedefTest_getLarguisimoReply_finalize_ex(
    TypedefTest_getLarguisimoReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            

    larguisimo_finalize_ex(&sample->ll2,deletePointers);
            

    larguisimo_finalize_ex(&sample->getLarguisimo_ret,deletePointers);
            

}

RTIBool TypedefTest_getLarguisimoReply_copy(
    TypedefTest_getLarguisimoReply* dst,
    const TypedefTest_getLarguisimoReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!larguisimo_copy(
        &dst->ll2, &src->ll2)) {
        return RTI_FALSE;
    }
            

    if (!larguisimo_copy(
        &dst->getLarguisimo_ret, &src->getLarguisimo_ret)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TypedefTest_getLarguisimoReply' sequence class.
 */
#define T TypedefTest_getLarguisimoReply
#define TSeq TypedefTest_getLarguisimoReplySeq
#define T_initialize_ex TypedefTest_getLarguisimoReply_initialize_ex
#define T_finalize_ex   TypedefTest_getLarguisimoReply_finalize_ex
#define T_copy       TypedefTest_getLarguisimoReply_copy

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
const char *TypedefTest_getDatosDefRequestTYPENAME = "TypedefTest_getDatosDefRequest";

DDS_TypeCode* TypedefTest_getDatosDefRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TypedefTest_getDatosDefRequest_g_tc_members[2]=
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
            (char *)"d1",/* Member name */
            {
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

    static DDS_TypeCode TypedefTest_getDatosDefRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TypedefTest_getDatosDefRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TypedefTest_getDatosDefRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TypedefTest_getDatosDefRequest*/

    if (is_initialized) {
        return &TypedefTest_getDatosDefRequest_g_tc;
    }


    TypedefTest_getDatosDefRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    TypedefTest_getDatosDefRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DatosDef_get_typecode();

    is_initialized = RTI_TRUE;

    return &TypedefTest_getDatosDefRequest_g_tc;
}


RTIBool TypedefTest_getDatosDefRequest_initialize(
    TypedefTest_getDatosDefRequest* sample) {
  return TypedefTest_getDatosDefRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TypedefTest_getDatosDefRequest_initialize_ex(
    TypedefTest_getDatosDefRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!DatosDef_initialize_ex(&sample->d1,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TypedefTest_getDatosDefRequest_finalize(
    TypedefTest_getDatosDefRequest* sample)
{
    TypedefTest_getDatosDefRequest_finalize_ex(sample,RTI_TRUE);
}
        
void TypedefTest_getDatosDefRequest_finalize_ex(
    TypedefTest_getDatosDefRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

    DatosDef_finalize_ex(&sample->d1,deletePointers);
            

}

RTIBool TypedefTest_getDatosDefRequest_copy(
    TypedefTest_getDatosDefRequest* dst,
    const TypedefTest_getDatosDefRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!DatosDef_copy(
        &dst->d1, &src->d1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TypedefTest_getDatosDefRequest' sequence class.
 */
#define T TypedefTest_getDatosDefRequest
#define TSeq TypedefTest_getDatosDefRequestSeq
#define T_initialize_ex TypedefTest_getDatosDefRequest_initialize_ex
#define T_finalize_ex   TypedefTest_getDatosDefRequest_finalize_ex
#define T_copy       TypedefTest_getDatosDefRequest_copy

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
const char *TypedefTest_getDatosDefReplyTYPENAME = "TypedefTest_getDatosDefReply";

DDS_TypeCode* TypedefTest_getDatosDefReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TypedefTest_getDatosDefReply_g_tc_members[3]=
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
            (char *)"d2",/* Member name */
            {
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
            (char *)"getDatosDef_ret",/* Member name */
            {
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

    static DDS_TypeCode TypedefTest_getDatosDefReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TypedefTest_getDatosDefReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        TypedefTest_getDatosDefReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TypedefTest_getDatosDefReply*/

    if (is_initialized) {
        return &TypedefTest_getDatosDefReply_g_tc;
    }


    TypedefTest_getDatosDefReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    TypedefTest_getDatosDefReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DatosDef_get_typecode();
    TypedefTest_getDatosDefReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DatosDef_get_typecode();

    is_initialized = RTI_TRUE;

    return &TypedefTest_getDatosDefReply_g_tc;
}


RTIBool TypedefTest_getDatosDefReply_initialize(
    TypedefTest_getDatosDefReply* sample) {
  return TypedefTest_getDatosDefReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TypedefTest_getDatosDefReply_initialize_ex(
    TypedefTest_getDatosDefReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!DatosDef_initialize_ex(&sample->d2,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!DatosDef_initialize_ex(&sample->getDatosDef_ret,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TypedefTest_getDatosDefReply_finalize(
    TypedefTest_getDatosDefReply* sample)
{
    TypedefTest_getDatosDefReply_finalize_ex(sample,RTI_TRUE);
}
        
void TypedefTest_getDatosDefReply_finalize_ex(
    TypedefTest_getDatosDefReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            

    DatosDef_finalize_ex(&sample->d2,deletePointers);
            

    DatosDef_finalize_ex(&sample->getDatosDef_ret,deletePointers);
            

}

RTIBool TypedefTest_getDatosDefReply_copy(
    TypedefTest_getDatosDefReply* dst,
    const TypedefTest_getDatosDefReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!DatosDef_copy(
        &dst->d2, &src->d2)) {
        return RTI_FALSE;
    }
            

    if (!DatosDef_copy(
        &dst->getDatosDef_ret, &src->getDatosDef_ret)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TypedefTest_getDatosDefReply' sequence class.
 */
#define T TypedefTest_getDatosDefReply
#define TSeq TypedefTest_getDatosDefReplySeq
#define T_initialize_ex TypedefTest_getDatosDefReply_initialize_ex
#define T_finalize_ex   TypedefTest_getDatosDefReply_finalize_ex
#define T_copy       TypedefTest_getDatosDefReply_copy

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
const char *TypedefTest_getDatosDefondoRequestTYPENAME = "TypedefTest_getDatosDefondoRequest";

DDS_TypeCode* TypedefTest_getDatosDefondoRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TypedefTest_getDatosDefondoRequest_g_tc_members[2]=
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
            (char *)"dd1",/* Member name */
            {
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

    static DDS_TypeCode TypedefTest_getDatosDefondoRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TypedefTest_getDatosDefondoRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TypedefTest_getDatosDefondoRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TypedefTest_getDatosDefondoRequest*/

    if (is_initialized) {
        return &TypedefTest_getDatosDefondoRequest_g_tc;
    }


    TypedefTest_getDatosDefondoRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    TypedefTest_getDatosDefondoRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DatosDefondo_get_typecode();

    is_initialized = RTI_TRUE;

    return &TypedefTest_getDatosDefondoRequest_g_tc;
}


RTIBool TypedefTest_getDatosDefondoRequest_initialize(
    TypedefTest_getDatosDefondoRequest* sample) {
  return TypedefTest_getDatosDefondoRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TypedefTest_getDatosDefondoRequest_initialize_ex(
    TypedefTest_getDatosDefondoRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!DatosDefondo_initialize_ex(&sample->dd1,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TypedefTest_getDatosDefondoRequest_finalize(
    TypedefTest_getDatosDefondoRequest* sample)
{
    TypedefTest_getDatosDefondoRequest_finalize_ex(sample,RTI_TRUE);
}
        
void TypedefTest_getDatosDefondoRequest_finalize_ex(
    TypedefTest_getDatosDefondoRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

    DatosDefondo_finalize_ex(&sample->dd1,deletePointers);
            

}

RTIBool TypedefTest_getDatosDefondoRequest_copy(
    TypedefTest_getDatosDefondoRequest* dst,
    const TypedefTest_getDatosDefondoRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!DatosDefondo_copy(
        &dst->dd1, &src->dd1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TypedefTest_getDatosDefondoRequest' sequence class.
 */
#define T TypedefTest_getDatosDefondoRequest
#define TSeq TypedefTest_getDatosDefondoRequestSeq
#define T_initialize_ex TypedefTest_getDatosDefondoRequest_initialize_ex
#define T_finalize_ex   TypedefTest_getDatosDefondoRequest_finalize_ex
#define T_copy       TypedefTest_getDatosDefondoRequest_copy

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
const char *TypedefTest_getDatosDefondoReplyTYPENAME = "TypedefTest_getDatosDefondoReply";

DDS_TypeCode* TypedefTest_getDatosDefondoReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TypedefTest_getDatosDefondoReply_g_tc_members[3]=
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
            (char *)"dd2",/* Member name */
            {
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
            (char *)"getDatosDefondo_ret",/* Member name */
            {
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

    static DDS_TypeCode TypedefTest_getDatosDefondoReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TypedefTest_getDatosDefondoReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        TypedefTest_getDatosDefondoReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TypedefTest_getDatosDefondoReply*/

    if (is_initialized) {
        return &TypedefTest_getDatosDefondoReply_g_tc;
    }


    TypedefTest_getDatosDefondoReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    TypedefTest_getDatosDefondoReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)DatosDefondo_get_typecode();
    TypedefTest_getDatosDefondoReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)DatosDefondo_get_typecode();

    is_initialized = RTI_TRUE;

    return &TypedefTest_getDatosDefondoReply_g_tc;
}


RTIBool TypedefTest_getDatosDefondoReply_initialize(
    TypedefTest_getDatosDefondoReply* sample) {
  return TypedefTest_getDatosDefondoReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TypedefTest_getDatosDefondoReply_initialize_ex(
    TypedefTest_getDatosDefondoReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!DatosDefondo_initialize_ex(&sample->dd2,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!DatosDefondo_initialize_ex(&sample->getDatosDefondo_ret,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TypedefTest_getDatosDefondoReply_finalize(
    TypedefTest_getDatosDefondoReply* sample)
{
    TypedefTest_getDatosDefondoReply_finalize_ex(sample,RTI_TRUE);
}
        
void TypedefTest_getDatosDefondoReply_finalize_ex(
    TypedefTest_getDatosDefondoReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            

    DatosDefondo_finalize_ex(&sample->dd2,deletePointers);
            

    DatosDefondo_finalize_ex(&sample->getDatosDefondo_ret,deletePointers);
            

}

RTIBool TypedefTest_getDatosDefondoReply_copy(
    TypedefTest_getDatosDefondoReply* dst,
    const TypedefTest_getDatosDefondoReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!DatosDefondo_copy(
        &dst->dd2, &src->dd2)) {
        return RTI_FALSE;
    }
            

    if (!DatosDefondo_copy(
        &dst->getDatosDefondo_ret, &src->getDatosDefondo_ret)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TypedefTest_getDatosDefondoReply' sequence class.
 */
#define T TypedefTest_getDatosDefondoReply
#define TSeq TypedefTest_getDatosDefondoReplySeq
#define T_initialize_ex TypedefTest_getDatosDefondoReply_initialize_ex
#define T_finalize_ex   TypedefTest_getDatosDefondoReply_finalize_ex
#define T_copy       TypedefTest_getDatosDefondoReply_copy

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
const char *TypedefTest_getCadenaRequestTYPENAME = "TypedefTest_getCadenaRequest";

DDS_TypeCode* TypedefTest_getCadenaRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TypedefTest_getCadenaRequest_g_tc_members[2]=
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
            (char *)"c1",/* Member name */
            {
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

    static DDS_TypeCode TypedefTest_getCadenaRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TypedefTest_getCadenaRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TypedefTest_getCadenaRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TypedefTest_getCadenaRequest*/

    if (is_initialized) {
        return &TypedefTest_getCadenaRequest_g_tc;
    }


    TypedefTest_getCadenaRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    TypedefTest_getCadenaRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)cadena_get_typecode();

    is_initialized = RTI_TRUE;

    return &TypedefTest_getCadenaRequest_g_tc;
}


RTIBool TypedefTest_getCadenaRequest_initialize(
    TypedefTest_getCadenaRequest* sample) {
  return TypedefTest_getCadenaRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TypedefTest_getCadenaRequest_initialize_ex(
    TypedefTest_getCadenaRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!cadena_initialize_ex(&sample->c1,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TypedefTest_getCadenaRequest_finalize(
    TypedefTest_getCadenaRequest* sample)
{
    TypedefTest_getCadenaRequest_finalize_ex(sample,RTI_TRUE);
}
        
void TypedefTest_getCadenaRequest_finalize_ex(
    TypedefTest_getCadenaRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

    cadena_finalize_ex(&sample->c1,deletePointers);
            

}

RTIBool TypedefTest_getCadenaRequest_copy(
    TypedefTest_getCadenaRequest* dst,
    const TypedefTest_getCadenaRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!cadena_copy(
        &dst->c1, &src->c1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TypedefTest_getCadenaRequest' sequence class.
 */
#define T TypedefTest_getCadenaRequest
#define TSeq TypedefTest_getCadenaRequestSeq
#define T_initialize_ex TypedefTest_getCadenaRequest_initialize_ex
#define T_finalize_ex   TypedefTest_getCadenaRequest_finalize_ex
#define T_copy       TypedefTest_getCadenaRequest_copy

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
const char *TypedefTest_getCadenaReplyTYPENAME = "TypedefTest_getCadenaReply";

DDS_TypeCode* TypedefTest_getCadenaReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TypedefTest_getCadenaReply_g_tc_members[3]=
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
            (char *)"c2",/* Member name */
            {
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
            (char *)"getCadena_ret",/* Member name */
            {
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

    static DDS_TypeCode TypedefTest_getCadenaReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TypedefTest_getCadenaReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        TypedefTest_getCadenaReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TypedefTest_getCadenaReply*/

    if (is_initialized) {
        return &TypedefTest_getCadenaReply_g_tc;
    }


    TypedefTest_getCadenaReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    TypedefTest_getCadenaReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)cadena_get_typecode();
    TypedefTest_getCadenaReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)cadena_get_typecode();

    is_initialized = RTI_TRUE;

    return &TypedefTest_getCadenaReply_g_tc;
}


RTIBool TypedefTest_getCadenaReply_initialize(
    TypedefTest_getCadenaReply* sample) {
  return TypedefTest_getCadenaReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TypedefTest_getCadenaReply_initialize_ex(
    TypedefTest_getCadenaReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!cadena_initialize_ex(&sample->c2,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!cadena_initialize_ex(&sample->getCadena_ret,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TypedefTest_getCadenaReply_finalize(
    TypedefTest_getCadenaReply* sample)
{
    TypedefTest_getCadenaReply_finalize_ex(sample,RTI_TRUE);
}
        
void TypedefTest_getCadenaReply_finalize_ex(
    TypedefTest_getCadenaReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            

    cadena_finalize_ex(&sample->c2,deletePointers);
            

    cadena_finalize_ex(&sample->getCadena_ret,deletePointers);
            

}

RTIBool TypedefTest_getCadenaReply_copy(
    TypedefTest_getCadenaReply* dst,
    const TypedefTest_getCadenaReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!cadena_copy(
        &dst->c2, &src->c2)) {
        return RTI_FALSE;
    }
            

    if (!cadena_copy(
        &dst->getCadena_ret, &src->getCadena_ret)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TypedefTest_getCadenaReply' sequence class.
 */
#define T TypedefTest_getCadenaReply
#define TSeq TypedefTest_getCadenaReplySeq
#define T_initialize_ex TypedefTest_getCadenaReply_initialize_ex
#define T_finalize_ex   TypedefTest_getCadenaReply_finalize_ex
#define T_copy       TypedefTest_getCadenaReply_copy

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
const char *TypedefTest_getCorreaRequestTYPENAME = "TypedefTest_getCorreaRequest";

DDS_TypeCode* TypedefTest_getCorreaRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TypedefTest_getCorreaRequest_g_tc_members[2]=
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
            (char *)"cc1",/* Member name */
            {
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

    static DDS_TypeCode TypedefTest_getCorreaRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TypedefTest_getCorreaRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        TypedefTest_getCorreaRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TypedefTest_getCorreaRequest*/

    if (is_initialized) {
        return &TypedefTest_getCorreaRequest_g_tc;
    }


    TypedefTest_getCorreaRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    TypedefTest_getCorreaRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)correa_get_typecode();

    is_initialized = RTI_TRUE;

    return &TypedefTest_getCorreaRequest_g_tc;
}


RTIBool TypedefTest_getCorreaRequest_initialize(
    TypedefTest_getCorreaRequest* sample) {
  return TypedefTest_getCorreaRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TypedefTest_getCorreaRequest_initialize_ex(
    TypedefTest_getCorreaRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!correa_initialize_ex(&sample->cc1,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TypedefTest_getCorreaRequest_finalize(
    TypedefTest_getCorreaRequest* sample)
{
    TypedefTest_getCorreaRequest_finalize_ex(sample,RTI_TRUE);
}
        
void TypedefTest_getCorreaRequest_finalize_ex(
    TypedefTest_getCorreaRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

    correa_finalize_ex(&sample->cc1,deletePointers);
            

}

RTIBool TypedefTest_getCorreaRequest_copy(
    TypedefTest_getCorreaRequest* dst,
    const TypedefTest_getCorreaRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!correa_copy(
        &dst->cc1, &src->cc1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TypedefTest_getCorreaRequest' sequence class.
 */
#define T TypedefTest_getCorreaRequest
#define TSeq TypedefTest_getCorreaRequestSeq
#define T_initialize_ex TypedefTest_getCorreaRequest_initialize_ex
#define T_finalize_ex   TypedefTest_getCorreaRequest_finalize_ex
#define T_copy       TypedefTest_getCorreaRequest_copy

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
const char *TypedefTest_getCorreaReplyTYPENAME = "TypedefTest_getCorreaReply";

DDS_TypeCode* TypedefTest_getCorreaReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member TypedefTest_getCorreaReply_g_tc_members[3]=
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
            (char *)"cc2",/* Member name */
            {
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
            (char *)"getCorrea_ret",/* Member name */
            {
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

    static DDS_TypeCode TypedefTest_getCorreaReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"TypedefTest_getCorreaReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        TypedefTest_getCorreaReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TypedefTest_getCorreaReply*/

    if (is_initialized) {
        return &TypedefTest_getCorreaReply_g_tc;
    }


    TypedefTest_getCorreaReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    TypedefTest_getCorreaReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)correa_get_typecode();
    TypedefTest_getCorreaReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)correa_get_typecode();

    is_initialized = RTI_TRUE;

    return &TypedefTest_getCorreaReply_g_tc;
}


RTIBool TypedefTest_getCorreaReply_initialize(
    TypedefTest_getCorreaReply* sample) {
  return TypedefTest_getCorreaReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TypedefTest_getCorreaReply_initialize_ex(
    TypedefTest_getCorreaReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!correa_initialize_ex(&sample->cc2,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!correa_initialize_ex(&sample->getCorrea_ret,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void TypedefTest_getCorreaReply_finalize(
    TypedefTest_getCorreaReply* sample)
{
    TypedefTest_getCorreaReply_finalize_ex(sample,RTI_TRUE);
}
        
void TypedefTest_getCorreaReply_finalize_ex(
    TypedefTest_getCorreaReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            

    correa_finalize_ex(&sample->cc2,deletePointers);
            

    correa_finalize_ex(&sample->getCorrea_ret,deletePointers);
            

}

RTIBool TypedefTest_getCorreaReply_copy(
    TypedefTest_getCorreaReply* dst,
    const TypedefTest_getCorreaReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!correa_copy(
        &dst->cc2, &src->cc2)) {
        return RTI_FALSE;
    }
            

    if (!correa_copy(
        &dst->getCorrea_ret, &src->getCorrea_ret)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TypedefTest_getCorreaReply' sequence class.
 */
#define T TypedefTest_getCorreaReply
#define TSeq TypedefTest_getCorreaReplySeq
#define T_initialize_ex TypedefTest_getCorreaReply_initialize_ex
#define T_finalize_ex   TypedefTest_getCorreaReply_finalize_ex
#define T_copy       TypedefTest_getCorreaReply_copy

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

