
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SimpleDelayRequestReply.idl using "rtiddsgen".
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



#include "SimpleDelayRequestReply.h"

/* ========================================================================= */
const char *SimpleDelay_sumaRequestTYPENAME = "SimpleDelay_sumaRequest";

DDS_TypeCode* SimpleDelay_sumaRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SimpleDelay_sumaRequest_g_tc_members[3]=
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
            (char *)"value1",/* Member name */
            {
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
            (char *)"value2",/* Member name */
            {
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

    static DDS_TypeCode SimpleDelay_sumaRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"SimpleDelay_sumaRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        SimpleDelay_sumaRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SimpleDelay_sumaRequest*/

    if (is_initialized) {
        return &SimpleDelay_sumaRequest_g_tc;
    }


    SimpleDelay_sumaRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    SimpleDelay_sumaRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    SimpleDelay_sumaRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &SimpleDelay_sumaRequest_g_tc;
}


RTIBool SimpleDelay_sumaRequest_initialize(
    SimpleDelay_sumaRequest* sample) {
  return SimpleDelay_sumaRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SimpleDelay_sumaRequest_initialize_ex(
    SimpleDelay_sumaRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->value1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->value2)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void SimpleDelay_sumaRequest_finalize(
    SimpleDelay_sumaRequest* sample)
{
    SimpleDelay_sumaRequest_finalize_ex(sample,RTI_TRUE);
}
        
void SimpleDelay_sumaRequest_finalize_ex(
    SimpleDelay_sumaRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            



}

RTIBool SimpleDelay_sumaRequest_copy(
    SimpleDelay_sumaRequest* dst,
    const SimpleDelay_sumaRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->value1, &src->value1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->value2, &src->value2)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SimpleDelay_sumaRequest' sequence class.
 */
#define T SimpleDelay_sumaRequest
#define TSeq SimpleDelay_sumaRequestSeq
#define T_initialize_ex SimpleDelay_sumaRequest_initialize_ex
#define T_finalize_ex   SimpleDelay_sumaRequest_finalize_ex
#define T_copy       SimpleDelay_sumaRequest_copy

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
const char *SimpleDelay_sumaReplyTYPENAME = "SimpleDelay_sumaReply";

DDS_TypeCode* SimpleDelay_sumaReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SimpleDelay_sumaReply_g_tc_members[2]=
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

    static DDS_TypeCode SimpleDelay_sumaReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"SimpleDelay_sumaReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SimpleDelay_sumaReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SimpleDelay_sumaReply*/

    if (is_initialized) {
        return &SimpleDelay_sumaReply_g_tc;
    }


    SimpleDelay_sumaReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    SimpleDelay_sumaReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &SimpleDelay_sumaReply_g_tc;
}


RTIBool SimpleDelay_sumaReply_initialize(
    SimpleDelay_sumaReply* sample) {
  return SimpleDelay_sumaReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SimpleDelay_sumaReply_initialize_ex(
    SimpleDelay_sumaReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->suma_ret)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void SimpleDelay_sumaReply_finalize(
    SimpleDelay_sumaReply* sample)
{
    SimpleDelay_sumaReply_finalize_ex(sample,RTI_TRUE);
}
        
void SimpleDelay_sumaReply_finalize_ex(
    SimpleDelay_sumaReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            


}

RTIBool SimpleDelay_sumaReply_copy(
    SimpleDelay_sumaReply* dst,
    const SimpleDelay_sumaReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
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
 * Configure and implement 'SimpleDelay_sumaReply' sequence class.
 */
#define T SimpleDelay_sumaReply
#define TSeq SimpleDelay_sumaReplySeq
#define T_initialize_ex SimpleDelay_sumaReply_initialize_ex
#define T_finalize_ex   SimpleDelay_sumaReply_finalize_ex
#define T_copy       SimpleDelay_sumaReply_copy

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
const char *SimpleDelay_duplicateRequestTYPENAME = "SimpleDelay_duplicateRequest";

DDS_TypeCode* SimpleDelay_duplicateRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SimpleDelay_duplicateRequest_g_tc_members[2]=
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
            (char *)"es",/* Member name */
            {
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

    static DDS_TypeCode SimpleDelay_duplicateRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"SimpleDelay_duplicateRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SimpleDelay_duplicateRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SimpleDelay_duplicateRequest*/

    if (is_initialized) {
        return &SimpleDelay_duplicateRequest_g_tc;
    }


    SimpleDelay_duplicateRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    SimpleDelay_duplicateRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Estructura_get_typecode();

    is_initialized = RTI_TRUE;

    return &SimpleDelay_duplicateRequest_g_tc;
}


RTIBool SimpleDelay_duplicateRequest_initialize(
    SimpleDelay_duplicateRequest* sample) {
  return SimpleDelay_duplicateRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SimpleDelay_duplicateRequest_initialize_ex(
    SimpleDelay_duplicateRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!Estructura_initialize_ex(&sample->es,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void SimpleDelay_duplicateRequest_finalize(
    SimpleDelay_duplicateRequest* sample)
{
    SimpleDelay_duplicateRequest_finalize_ex(sample,RTI_TRUE);
}
        
void SimpleDelay_duplicateRequest_finalize_ex(
    SimpleDelay_duplicateRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

    Estructura_finalize_ex(&sample->es,deletePointers);
            

}

RTIBool SimpleDelay_duplicateRequest_copy(
    SimpleDelay_duplicateRequest* dst,
    const SimpleDelay_duplicateRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!Estructura_copy(
        &dst->es, &src->es)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SimpleDelay_duplicateRequest' sequence class.
 */
#define T SimpleDelay_duplicateRequest
#define TSeq SimpleDelay_duplicateRequestSeq
#define T_initialize_ex SimpleDelay_duplicateRequest_initialize_ex
#define T_finalize_ex   SimpleDelay_duplicateRequest_finalize_ex
#define T_copy       SimpleDelay_duplicateRequest_copy

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
const char *SimpleDelay_duplicateReplyTYPENAME = "SimpleDelay_duplicateReply";

DDS_TypeCode* SimpleDelay_duplicateReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SimpleDelay_duplicateReply_g_tc_members[2]=
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

    static DDS_TypeCode SimpleDelay_duplicateReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"SimpleDelay_duplicateReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SimpleDelay_duplicateReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SimpleDelay_duplicateReply*/

    if (is_initialized) {
        return &SimpleDelay_duplicateReply_g_tc;
    }


    SimpleDelay_duplicateReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    SimpleDelay_duplicateReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Estructura_get_typecode();

    is_initialized = RTI_TRUE;

    return &SimpleDelay_duplicateReply_g_tc;
}


RTIBool SimpleDelay_duplicateReply_initialize(
    SimpleDelay_duplicateReply* sample) {
  return SimpleDelay_duplicateReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SimpleDelay_duplicateReply_initialize_ex(
    SimpleDelay_duplicateReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!Estructura_initialize_ex(&sample->duplicate_ret,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void SimpleDelay_duplicateReply_finalize(
    SimpleDelay_duplicateReply* sample)
{
    SimpleDelay_duplicateReply_finalize_ex(sample,RTI_TRUE);
}
        
void SimpleDelay_duplicateReply_finalize_ex(
    SimpleDelay_duplicateReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            

    Estructura_finalize_ex(&sample->duplicate_ret,deletePointers);
            

}

RTIBool SimpleDelay_duplicateReply_copy(
    SimpleDelay_duplicateReply* dst,
    const SimpleDelay_duplicateReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!Estructura_copy(
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
 * Configure and implement 'SimpleDelay_duplicateReply' sequence class.
 */
#define T SimpleDelay_duplicateReply
#define TSeq SimpleDelay_duplicateReplySeq
#define T_initialize_ex SimpleDelay_duplicateReply_initialize_ex
#define T_finalize_ex   SimpleDelay_duplicateReply_finalize_ex
#define T_copy       SimpleDelay_duplicateReply_copy

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

