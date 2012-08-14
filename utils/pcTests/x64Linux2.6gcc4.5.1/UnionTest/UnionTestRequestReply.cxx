
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
const char *getEmpleadoRequestTYPENAME = "getEmpleadoRequest";

DDS_TypeCode* getEmpleadoRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode getEmpleadoRequest_g_tc_clientServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode_Member getEmpleadoRequest_g_tc_members[4]=
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

    static DDS_TypeCode getEmpleadoRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getEmpleadoRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        getEmpleadoRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getEmpleadoRequest*/

    if (is_initialized) {
        return &getEmpleadoRequest_g_tc;
    }

    getEmpleadoRequest_g_tc_clientServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    getEmpleadoRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&getEmpleadoRequest_g_tc_clientServiceId_array;
    getEmpleadoRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getEmpleadoRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Empleado_get_typecode();
    getEmpleadoRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)Empleado_get_typecode();

    is_initialized = RTI_TRUE;

    return &getEmpleadoRequest_g_tc;
}


RTIBool getEmpleadoRequest_initialize(
    getEmpleadoRequest* sample) {
  return getEmpleadoRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getEmpleadoRequest_initialize_ex(
    getEmpleadoRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */

    
    if (!RTICdrType_initArray(
        sample->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void getEmpleadoRequest_finalize(
    getEmpleadoRequest* sample)
{
    getEmpleadoRequest_finalize_ex(sample,RTI_TRUE);
}
        
void getEmpleadoRequest_finalize_ex(
    getEmpleadoRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Empleado_finalize_ex(&sample->em1,deletePointers);
            
    Empleado_finalize_ex(&sample->em2,deletePointers);
            
}

RTIBool getEmpleadoRequest_copy(
    getEmpleadoRequest* dst,
    const getEmpleadoRequest* src)
{        

    if (!RTICdrType_copyArray(
        dst->clientServiceId, src->clientServiceId, (4), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'getEmpleadoRequest' sequence class.
 */
#define T getEmpleadoRequest
#define TSeq getEmpleadoRequestSeq
#define T_initialize_ex getEmpleadoRequest_initialize_ex
#define T_finalize_ex   getEmpleadoRequest_finalize_ex
#define T_copy       getEmpleadoRequest_copy

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
const char *getEmpleadoReplyTYPENAME = "getEmpleadoReply";

DDS_TypeCode* getEmpleadoReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode getEmpleadoReply_g_tc_serverServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);
    static DDS_TypeCode getEmpleadoReply_g_tc_clientServiceId_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode_Member getEmpleadoReply_g_tc_members[7]=
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

    static DDS_TypeCode getEmpleadoReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"getEmpleadoReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        getEmpleadoReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for getEmpleadoReply*/

    if (is_initialized) {
        return &getEmpleadoReply_g_tc;
    }

    getEmpleadoReply_g_tc_serverServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getEmpleadoReply_g_tc_clientServiceId_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    getEmpleadoReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&getEmpleadoReply_g_tc_serverServiceId_array;
    getEmpleadoReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&getEmpleadoReply_g_tc_clientServiceId_array;
    getEmpleadoReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    getEmpleadoReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    getEmpleadoReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)Empleado_get_typecode();
    getEmpleadoReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)Empleado_get_typecode();
    getEmpleadoReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)Empleado_get_typecode();

    is_initialized = RTI_TRUE;

    return &getEmpleadoReply_g_tc;
}


RTIBool getEmpleadoReply_initialize(
    getEmpleadoReply* sample) {
  return getEmpleadoReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool getEmpleadoReply_initialize_ex(
    getEmpleadoReply* sample,RTIBool allocatePointers)
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
            
    if (!Empleado_initialize_ex(&sample->em2,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_initialize_ex(&sample->em3,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_initialize_ex(&sample->returnedValue,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void getEmpleadoReply_finalize(
    getEmpleadoReply* sample)
{
    getEmpleadoReply_finalize_ex(sample,RTI_TRUE);
}
        
void getEmpleadoReply_finalize_ex(
    getEmpleadoReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Empleado_finalize_ex(&sample->em2,deletePointers);
            
    Empleado_finalize_ex(&sample->em3,deletePointers);
            
    Empleado_finalize_ex(&sample->returnedValue,deletePointers);
            
}

RTIBool getEmpleadoReply_copy(
    getEmpleadoReply* dst,
    const getEmpleadoReply* src)
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
            
    if (!Empleado_copy(
        &dst->em2, &src->em2)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_copy(
        &dst->em3, &src->em3)) {
        return RTI_FALSE;
    }
            
    if (!Empleado_copy(
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
 * Configure and implement 'getEmpleadoReply' sequence class.
 */
#define T getEmpleadoReply
#define TSeq getEmpleadoReplySeq
#define T_initialize_ex getEmpleadoReply_initialize_ex
#define T_finalize_ex   getEmpleadoReply_finalize_ex
#define T_copy       getEmpleadoReply_copy

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

