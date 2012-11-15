
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from UnionTestRequestReply.idl using "rtiddsgen".
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



#include "UnionTestRequestReply.h"

/* ========================================================================= */
const char *UnionTest_getEmpleadoRequestTYPENAME = "UnionTest_getEmpleadoRequest";

DDS_TypeCode* UnionTest_getEmpleadoRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member UnionTest_getEmpleadoRequest_g_tc_members[3]=
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
            (char *)"em1",/* Member name */
            {
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
            (char *)"em2",/* Member name */
            {
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

    static DDS_TypeCode UnionTest_getEmpleadoRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"UnionTest_getEmpleadoRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        UnionTest_getEmpleadoRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for UnionTest_getEmpleadoRequest*/

    if (is_initialized) {
        return &UnionTest_getEmpleadoRequest_g_tc;
    }


    UnionTest_getEmpleadoRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    UnionTest_getEmpleadoRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Empleado_get_typecode();
    UnionTest_getEmpleadoRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Empleado_get_typecode();

    is_initialized = RTI_TRUE;

    return &UnionTest_getEmpleadoRequest_g_tc;
}


RTIBool UnionTest_getEmpleadoRequest_initialize(
    UnionTest_getEmpleadoRequest* sample) {
  return UnionTest_getEmpleadoRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool UnionTest_getEmpleadoRequest_initialize_ex(
    UnionTest_getEmpleadoRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_initialize_ex(&sample->em1,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_initialize_ex(&sample->em2,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void UnionTest_getEmpleadoRequest_finalize(
    UnionTest_getEmpleadoRequest* sample)
{
    UnionTest_getEmpleadoRequest_finalize_ex(sample,RTI_TRUE);
}
        
void UnionTest_getEmpleadoRequest_finalize_ex(
    UnionTest_getEmpleadoRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
    Empleado_finalize_ex(&sample->em1,deletePointers);
            
    Empleado_finalize_ex(&sample->em2,deletePointers);
            
}

RTIBool UnionTest_getEmpleadoRequest_copy(
    UnionTest_getEmpleadoRequest* dst,
    const UnionTest_getEmpleadoRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_copy(
        &dst->em1, &src->em1)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_copy(
        &dst->em2, &src->em2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'UnionTest_getEmpleadoRequest' sequence class.
 */
#define T UnionTest_getEmpleadoRequest
#define TSeq UnionTest_getEmpleadoRequestSeq
#define T_initialize_ex UnionTest_getEmpleadoRequest_initialize_ex
#define T_finalize_ex   UnionTest_getEmpleadoRequest_finalize_ex
#define T_copy       UnionTest_getEmpleadoRequest_copy

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
const char *UnionTest_getEmpleadoReplyTYPENAME = "UnionTest_getEmpleadoReply";

DDS_TypeCode* UnionTest_getEmpleadoReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member UnionTest_getEmpleadoReply_g_tc_members[4]=
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
            (char *)"em2",/* Member name */
            {
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
            (char *)"em3",/* Member name */
            {
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
            (char *)"getEmpleado_ret",/* Member name */
            {
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

    static DDS_TypeCode UnionTest_getEmpleadoReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"UnionTest_getEmpleadoReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        UnionTest_getEmpleadoReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for UnionTest_getEmpleadoReply*/

    if (is_initialized) {
        return &UnionTest_getEmpleadoReply_g_tc;
    }


    UnionTest_getEmpleadoReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    UnionTest_getEmpleadoReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Empleado_get_typecode();
    UnionTest_getEmpleadoReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Empleado_get_typecode();
    UnionTest_getEmpleadoReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)Empleado_get_typecode();

    is_initialized = RTI_TRUE;

    return &UnionTest_getEmpleadoReply_g_tc;
}


RTIBool UnionTest_getEmpleadoReply_initialize(
    UnionTest_getEmpleadoReply* sample) {
  return UnionTest_getEmpleadoReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool UnionTest_getEmpleadoReply_initialize_ex(
    UnionTest_getEmpleadoReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_initialize_ex(&sample->em2,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_initialize_ex(&sample->em3,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_initialize_ex(&sample->getEmpleado_ret,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void UnionTest_getEmpleadoReply_finalize(
    UnionTest_getEmpleadoReply* sample)
{
    UnionTest_getEmpleadoReply_finalize_ex(sample,RTI_TRUE);
}
        
void UnionTest_getEmpleadoReply_finalize_ex(
    UnionTest_getEmpleadoReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
    Empleado_finalize_ex(&sample->em2,deletePointers);
            
    Empleado_finalize_ex(&sample->em3,deletePointers);
            
    Empleado_finalize_ex(&sample->getEmpleado_ret,deletePointers);
            
}

RTIBool UnionTest_getEmpleadoReply_copy(
    UnionTest_getEmpleadoReply* dst,
    const UnionTest_getEmpleadoReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_copy(
        &dst->em2, &src->em2)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_copy(
        &dst->em3, &src->em3)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_copy(
        &dst->getEmpleado_ret, &src->getEmpleado_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'UnionTest_getEmpleadoReply' sequence class.
 */
#define T UnionTest_getEmpleadoReply
#define TSeq UnionTest_getEmpleadoReplySeq
#define T_initialize_ex UnionTest_getEmpleadoReply_initialize_ex
#define T_finalize_ex   UnionTest_getEmpleadoReply_finalize_ex
#define T_copy       UnionTest_getEmpleadoReply_copy

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

