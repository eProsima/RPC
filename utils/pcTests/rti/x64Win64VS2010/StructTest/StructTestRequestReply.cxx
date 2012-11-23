
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StructTestRequestReply.idl using "rtiddsgen".
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



#include "StructTestRequestReply.h"

/* ========================================================================= */
const char *StructTest_duplicateRequestTYPENAME = "StructTest_duplicateRequest";

DDS_TypeCode* StructTest_duplicateRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member StructTest_duplicateRequest_g_tc_members[2]=
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

    static DDS_TypeCode StructTest_duplicateRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"StructTest_duplicateRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        StructTest_duplicateRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for StructTest_duplicateRequest*/

    if (is_initialized) {
        return &StructTest_duplicateRequest_g_tc;
    }


    StructTest_duplicateRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    StructTest_duplicateRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Envio_get_typecode();

    is_initialized = RTI_TRUE;

    return &StructTest_duplicateRequest_g_tc;
}


RTIBool StructTest_duplicateRequest_initialize(
    StructTest_duplicateRequest* sample) {
  return StructTest_duplicateRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool StructTest_duplicateRequest_initialize_ex(
    StructTest_duplicateRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Envio_initialize_ex(&sample->ev,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void StructTest_duplicateRequest_finalize(
    StructTest_duplicateRequest* sample)
{
    StructTest_duplicateRequest_finalize_ex(sample,RTI_TRUE);
}
        
void StructTest_duplicateRequest_finalize_ex(
    StructTest_duplicateRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
    Envio_finalize_ex(&sample->ev,deletePointers);
            
}

RTIBool StructTest_duplicateRequest_copy(
    StructTest_duplicateRequest* dst,
    const StructTest_duplicateRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!Envio_copy(
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
 * Configure and implement 'StructTest_duplicateRequest' sequence class.
 */
#define T StructTest_duplicateRequest
#define TSeq StructTest_duplicateRequestSeq
#define T_initialize_ex StructTest_duplicateRequest_initialize_ex
#define T_finalize_ex   StructTest_duplicateRequest_finalize_ex
#define T_copy       StructTest_duplicateRequest_copy

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
const char *StructTest_duplicateReplyTYPENAME = "StructTest_duplicateReply";

DDS_TypeCode* StructTest_duplicateReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member StructTest_duplicateReply_g_tc_members[2]=
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

    static DDS_TypeCode StructTest_duplicateReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"StructTest_duplicateReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        StructTest_duplicateReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for StructTest_duplicateReply*/

    if (is_initialized) {
        return &StructTest_duplicateReply_g_tc;
    }


    StructTest_duplicateReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    StructTest_duplicateReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Recepcion_get_typecode();

    is_initialized = RTI_TRUE;

    return &StructTest_duplicateReply_g_tc;
}


RTIBool StructTest_duplicateReply_initialize(
    StructTest_duplicateReply* sample) {
  return StructTest_duplicateReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool StructTest_duplicateReply_initialize_ex(
    StructTest_duplicateReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Recepcion_initialize_ex(&sample->duplicate_ret,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void StructTest_duplicateReply_finalize(
    StructTest_duplicateReply* sample)
{
    StructTest_duplicateReply_finalize_ex(sample,RTI_TRUE);
}
        
void StructTest_duplicateReply_finalize_ex(
    StructTest_duplicateReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
    Recepcion_finalize_ex(&sample->duplicate_ret,deletePointers);
            
}

RTIBool StructTest_duplicateReply_copy(
    StructTest_duplicateReply* dst,
    const StructTest_duplicateReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!Recepcion_copy(
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
 * Configure and implement 'StructTest_duplicateReply' sequence class.
 */
#define T StructTest_duplicateReply
#define TSeq StructTest_duplicateReplySeq
#define T_initialize_ex StructTest_duplicateReply_initialize_ex
#define T_finalize_ex   StructTest_duplicateReply_finalize_ex
#define T_copy       StructTest_duplicateReply_copy

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
const char *StructTest_sumaRequestTYPENAME = "StructTest_sumaRequest";

DDS_TypeCode* StructTest_sumaRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member StructTest_sumaRequest_g_tc_members[3]=
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
            (char *)"ev1",/* Member name */
            {
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
            (char *)"ev2",/* Member name */
            {
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

    static DDS_TypeCode StructTest_sumaRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"StructTest_sumaRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        StructTest_sumaRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for StructTest_sumaRequest*/

    if (is_initialized) {
        return &StructTest_sumaRequest_g_tc;
    }


    StructTest_sumaRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    StructTest_sumaRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Envio_get_typecode();
    StructTest_sumaRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Envio_get_typecode();

    is_initialized = RTI_TRUE;

    return &StructTest_sumaRequest_g_tc;
}


RTIBool StructTest_sumaRequest_initialize(
    StructTest_sumaRequest* sample) {
  return StructTest_sumaRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool StructTest_sumaRequest_initialize_ex(
    StructTest_sumaRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Envio_initialize_ex(&sample->ev1,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Envio_initialize_ex(&sample->ev2,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void StructTest_sumaRequest_finalize(
    StructTest_sumaRequest* sample)
{
    StructTest_sumaRequest_finalize_ex(sample,RTI_TRUE);
}
        
void StructTest_sumaRequest_finalize_ex(
    StructTest_sumaRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
    Envio_finalize_ex(&sample->ev1,deletePointers);
            
    Envio_finalize_ex(&sample->ev2,deletePointers);
            
}

RTIBool StructTest_sumaRequest_copy(
    StructTest_sumaRequest* dst,
    const StructTest_sumaRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!Envio_copy(
        &dst->ev1, &src->ev1)) {
        return RTI_FALSE;
    }
            
    if (!Envio_copy(
        &dst->ev2, &src->ev2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'StructTest_sumaRequest' sequence class.
 */
#define T StructTest_sumaRequest
#define TSeq StructTest_sumaRequestSeq
#define T_initialize_ex StructTest_sumaRequest_initialize_ex
#define T_finalize_ex   StructTest_sumaRequest_finalize_ex
#define T_copy       StructTest_sumaRequest_copy

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
const char *StructTest_sumaReplyTYPENAME = "StructTest_sumaReply";

DDS_TypeCode* StructTest_sumaReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member StructTest_sumaReply_g_tc_members[2]=
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
            (char *)"suma_ret",/* Member name */
            {
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

    static DDS_TypeCode StructTest_sumaReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"StructTest_sumaReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        StructTest_sumaReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for StructTest_sumaReply*/

    if (is_initialized) {
        return &StructTest_sumaReply_g_tc;
    }


    StructTest_sumaReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    StructTest_sumaReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Recepcion_get_typecode();

    is_initialized = RTI_TRUE;

    return &StructTest_sumaReply_g_tc;
}


RTIBool StructTest_sumaReply_initialize(
    StructTest_sumaReply* sample) {
  return StructTest_sumaReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool StructTest_sumaReply_initialize_ex(
    StructTest_sumaReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Recepcion_initialize_ex(&sample->suma_ret,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void StructTest_sumaReply_finalize(
    StructTest_sumaReply* sample)
{
    StructTest_sumaReply_finalize_ex(sample,RTI_TRUE);
}
        
void StructTest_sumaReply_finalize_ex(
    StructTest_sumaReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
    Recepcion_finalize_ex(&sample->suma_ret,deletePointers);
            
}

RTIBool StructTest_sumaReply_copy(
    StructTest_sumaReply* dst,
    const StructTest_sumaReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!Recepcion_copy(
        &dst->suma_ret, &src->suma_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'StructTest_sumaReply' sequence class.
 */
#define T StructTest_sumaReply
#define TSeq StructTest_sumaReplySeq
#define T_initialize_ex StructTest_sumaReply_initialize_ex
#define T_finalize_ex   StructTest_sumaReply_finalize_ex
#define T_copy       StructTest_sumaReply_copy

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

