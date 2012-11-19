
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from OnewayCallTestRequestReply.idl using "rtiddsgen".
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



#include "OnewayCallTestRequestReply.h"

/* ========================================================================= */
const char *OnewayCallTest_setLongRequestTYPENAME = "OnewayCallTest_setLongRequest";

DDS_TypeCode* OnewayCallTest_setLongRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member OnewayCallTest_setLongRequest_g_tc_members[2]=
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
        }
    };

    static DDS_TypeCode OnewayCallTest_setLongRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"OnewayCallTest_setLongRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        OnewayCallTest_setLongRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OnewayCallTest_setLongRequest*/

    if (is_initialized) {
        return &OnewayCallTest_setLongRequest_g_tc;
    }


    OnewayCallTest_setLongRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    OnewayCallTest_setLongRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &OnewayCallTest_setLongRequest_g_tc;
}


RTIBool OnewayCallTest_setLongRequest_initialize(
    OnewayCallTest_setLongRequest* sample) {
  return OnewayCallTest_setLongRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OnewayCallTest_setLongRequest_initialize_ex(
    OnewayCallTest_setLongRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->lo1)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void OnewayCallTest_setLongRequest_finalize(
    OnewayCallTest_setLongRequest* sample)
{
    OnewayCallTest_setLongRequest_finalize_ex(sample,RTI_TRUE);
}
        
void OnewayCallTest_setLongRequest_finalize_ex(
    OnewayCallTest_setLongRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            


}

RTIBool OnewayCallTest_setLongRequest_copy(
    OnewayCallTest_setLongRequest* dst,
    const OnewayCallTest_setLongRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->lo1, &src->lo1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'OnewayCallTest_setLongRequest' sequence class.
 */
#define T OnewayCallTest_setLongRequest
#define TSeq OnewayCallTest_setLongRequestSeq
#define T_initialize_ex OnewayCallTest_setLongRequest_initialize_ex
#define T_finalize_ex   OnewayCallTest_setLongRequest_finalize_ex
#define T_copy       OnewayCallTest_setLongRequest_copy

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
const char *OnewayCallTest_getLongRequestTYPENAME = "OnewayCallTest_getLongRequest";

DDS_TypeCode* OnewayCallTest_getLongRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member OnewayCallTest_getLongRequest_g_tc_members[1]=
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
        }
    };

    static DDS_TypeCode OnewayCallTest_getLongRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"OnewayCallTest_getLongRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        OnewayCallTest_getLongRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OnewayCallTest_getLongRequest*/

    if (is_initialized) {
        return &OnewayCallTest_getLongRequest_g_tc;
    }


    OnewayCallTest_getLongRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();

    is_initialized = RTI_TRUE;

    return &OnewayCallTest_getLongRequest_g_tc;
}


RTIBool OnewayCallTest_getLongRequest_initialize(
    OnewayCallTest_getLongRequest* sample) {
  return OnewayCallTest_getLongRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OnewayCallTest_getLongRequest_initialize_ex(
    OnewayCallTest_getLongRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void OnewayCallTest_getLongRequest_finalize(
    OnewayCallTest_getLongRequest* sample)
{
    OnewayCallTest_getLongRequest_finalize_ex(sample,RTI_TRUE);
}
        
void OnewayCallTest_getLongRequest_finalize_ex(
    OnewayCallTest_getLongRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

}

RTIBool OnewayCallTest_getLongRequest_copy(
    OnewayCallTest_getLongRequest* dst,
    const OnewayCallTest_getLongRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'OnewayCallTest_getLongRequest' sequence class.
 */
#define T OnewayCallTest_getLongRequest
#define TSeq OnewayCallTest_getLongRequestSeq
#define T_initialize_ex OnewayCallTest_getLongRequest_initialize_ex
#define T_finalize_ex   OnewayCallTest_getLongRequest_finalize_ex
#define T_copy       OnewayCallTest_getLongRequest_copy

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
const char *OnewayCallTest_getLongReplyTYPENAME = "OnewayCallTest_getLongReply";

DDS_TypeCode* OnewayCallTest_getLongReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member OnewayCallTest_getLongReply_g_tc_members[2]=
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

    static DDS_TypeCode OnewayCallTest_getLongReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"OnewayCallTest_getLongReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        OnewayCallTest_getLongReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OnewayCallTest_getLongReply*/

    if (is_initialized) {
        return &OnewayCallTest_getLongReply_g_tc;
    }


    OnewayCallTest_getLongReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    OnewayCallTest_getLongReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &OnewayCallTest_getLongReply_g_tc;
}


RTIBool OnewayCallTest_getLongReply_initialize(
    OnewayCallTest_getLongReply* sample) {
  return OnewayCallTest_getLongReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OnewayCallTest_getLongReply_initialize_ex(
    OnewayCallTest_getLongReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->getLong_ret)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void OnewayCallTest_getLongReply_finalize(
    OnewayCallTest_getLongReply* sample)
{
    OnewayCallTest_getLongReply_finalize_ex(sample,RTI_TRUE);
}
        
void OnewayCallTest_getLongReply_finalize_ex(
    OnewayCallTest_getLongReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            


}

RTIBool OnewayCallTest_getLongReply_copy(
    OnewayCallTest_getLongReply* dst,
    const OnewayCallTest_getLongReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
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
 * Configure and implement 'OnewayCallTest_getLongReply' sequence class.
 */
#define T OnewayCallTest_getLongReply
#define TSeq OnewayCallTest_getLongReplySeq
#define T_initialize_ex OnewayCallTest_getLongReply_initialize_ex
#define T_finalize_ex   OnewayCallTest_getLongReply_finalize_ex
#define T_copy       OnewayCallTest_getLongReply_copy

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
const char *OnewayCallTest_setBooleanRequestTYPENAME = "OnewayCallTest_setBooleanRequest";

DDS_TypeCode* OnewayCallTest_setBooleanRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member OnewayCallTest_setBooleanRequest_g_tc_members[2]=
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
        }
    };

    static DDS_TypeCode OnewayCallTest_setBooleanRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"OnewayCallTest_setBooleanRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        OnewayCallTest_setBooleanRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OnewayCallTest_setBooleanRequest*/

    if (is_initialized) {
        return &OnewayCallTest_setBooleanRequest_g_tc;
    }


    OnewayCallTest_setBooleanRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    OnewayCallTest_setBooleanRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &OnewayCallTest_setBooleanRequest_g_tc;
}


RTIBool OnewayCallTest_setBooleanRequest_initialize(
    OnewayCallTest_setBooleanRequest* sample) {
  return OnewayCallTest_setBooleanRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OnewayCallTest_setBooleanRequest_initialize_ex(
    OnewayCallTest_setBooleanRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initBoolean(&sample->bo1)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void OnewayCallTest_setBooleanRequest_finalize(
    OnewayCallTest_setBooleanRequest* sample)
{
    OnewayCallTest_setBooleanRequest_finalize_ex(sample,RTI_TRUE);
}
        
void OnewayCallTest_setBooleanRequest_finalize_ex(
    OnewayCallTest_setBooleanRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            


}

RTIBool OnewayCallTest_setBooleanRequest_copy(
    OnewayCallTest_setBooleanRequest* dst,
    const OnewayCallTest_setBooleanRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->bo1, &src->bo1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'OnewayCallTest_setBooleanRequest' sequence class.
 */
#define T OnewayCallTest_setBooleanRequest
#define TSeq OnewayCallTest_setBooleanRequestSeq
#define T_initialize_ex OnewayCallTest_setBooleanRequest_initialize_ex
#define T_finalize_ex   OnewayCallTest_setBooleanRequest_finalize_ex
#define T_copy       OnewayCallTest_setBooleanRequest_copy

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
const char *OnewayCallTest_getBooleanRequestTYPENAME = "OnewayCallTest_getBooleanRequest";

DDS_TypeCode* OnewayCallTest_getBooleanRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member OnewayCallTest_getBooleanRequest_g_tc_members[1]=
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
        }
    };

    static DDS_TypeCode OnewayCallTest_getBooleanRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"OnewayCallTest_getBooleanRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        OnewayCallTest_getBooleanRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OnewayCallTest_getBooleanRequest*/

    if (is_initialized) {
        return &OnewayCallTest_getBooleanRequest_g_tc;
    }


    OnewayCallTest_getBooleanRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();

    is_initialized = RTI_TRUE;

    return &OnewayCallTest_getBooleanRequest_g_tc;
}


RTIBool OnewayCallTest_getBooleanRequest_initialize(
    OnewayCallTest_getBooleanRequest* sample) {
  return OnewayCallTest_getBooleanRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OnewayCallTest_getBooleanRequest_initialize_ex(
    OnewayCallTest_getBooleanRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void OnewayCallTest_getBooleanRequest_finalize(
    OnewayCallTest_getBooleanRequest* sample)
{
    OnewayCallTest_getBooleanRequest_finalize_ex(sample,RTI_TRUE);
}
        
void OnewayCallTest_getBooleanRequest_finalize_ex(
    OnewayCallTest_getBooleanRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

}

RTIBool OnewayCallTest_getBooleanRequest_copy(
    OnewayCallTest_getBooleanRequest* dst,
    const OnewayCallTest_getBooleanRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'OnewayCallTest_getBooleanRequest' sequence class.
 */
#define T OnewayCallTest_getBooleanRequest
#define TSeq OnewayCallTest_getBooleanRequestSeq
#define T_initialize_ex OnewayCallTest_getBooleanRequest_initialize_ex
#define T_finalize_ex   OnewayCallTest_getBooleanRequest_finalize_ex
#define T_copy       OnewayCallTest_getBooleanRequest_copy

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
const char *OnewayCallTest_getBooleanReplyTYPENAME = "OnewayCallTest_getBooleanReply";

DDS_TypeCode* OnewayCallTest_getBooleanReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member OnewayCallTest_getBooleanReply_g_tc_members[2]=
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

    static DDS_TypeCode OnewayCallTest_getBooleanReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"OnewayCallTest_getBooleanReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        OnewayCallTest_getBooleanReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OnewayCallTest_getBooleanReply*/

    if (is_initialized) {
        return &OnewayCallTest_getBooleanReply_g_tc;
    }


    OnewayCallTest_getBooleanReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    OnewayCallTest_getBooleanReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &OnewayCallTest_getBooleanReply_g_tc;
}


RTIBool OnewayCallTest_getBooleanReply_initialize(
    OnewayCallTest_getBooleanReply* sample) {
  return OnewayCallTest_getBooleanReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OnewayCallTest_getBooleanReply_initialize_ex(
    OnewayCallTest_getBooleanReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initBoolean(&sample->getBoolean_ret)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void OnewayCallTest_getBooleanReply_finalize(
    OnewayCallTest_getBooleanReply* sample)
{
    OnewayCallTest_getBooleanReply_finalize_ex(sample,RTI_TRUE);
}
        
void OnewayCallTest_getBooleanReply_finalize_ex(
    OnewayCallTest_getBooleanReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            


}

RTIBool OnewayCallTest_getBooleanReply_copy(
    OnewayCallTest_getBooleanReply* dst,
    const OnewayCallTest_getBooleanReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
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
 * Configure and implement 'OnewayCallTest_getBooleanReply' sequence class.
 */
#define T OnewayCallTest_getBooleanReply
#define TSeq OnewayCallTest_getBooleanReplySeq
#define T_initialize_ex OnewayCallTest_getBooleanReply_initialize_ex
#define T_finalize_ex   OnewayCallTest_getBooleanReply_finalize_ex
#define T_copy       OnewayCallTest_getBooleanReply_copy

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
const char *OnewayCallTest_setStringRequestTYPENAME = "OnewayCallTest_setStringRequest";

DDS_TypeCode* OnewayCallTest_setStringRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode OnewayCallTest_setStringRequest_g_tc_s1_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member OnewayCallTest_setStringRequest_g_tc_members[2]=
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
        }
    };

    static DDS_TypeCode OnewayCallTest_setStringRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"OnewayCallTest_setStringRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        OnewayCallTest_setStringRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OnewayCallTest_setStringRequest*/

    if (is_initialized) {
        return &OnewayCallTest_setStringRequest_g_tc;
    }


    OnewayCallTest_setStringRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    OnewayCallTest_setStringRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&OnewayCallTest_setStringRequest_g_tc_s1_string;

    is_initialized = RTI_TRUE;

    return &OnewayCallTest_setStringRequest_g_tc;
}


RTIBool OnewayCallTest_setStringRequest_initialize(
    OnewayCallTest_setStringRequest* sample) {
  return OnewayCallTest_setStringRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OnewayCallTest_setStringRequest_initialize_ex(
    OnewayCallTest_setStringRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (allocateMemory) {
        sample->s1 = DDS_String_alloc((255));
        if (sample->s1 == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->s1 != NULL) { 
            sample->s1[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void OnewayCallTest_setStringRequest_finalize(
    OnewayCallTest_setStringRequest* sample)
{
    OnewayCallTest_setStringRequest_finalize_ex(sample,RTI_TRUE);
}
        
void OnewayCallTest_setStringRequest_finalize_ex(
    OnewayCallTest_setStringRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

    DDS_String_free(sample->s1);                
            

}

RTIBool OnewayCallTest_setStringRequest_copy(
    OnewayCallTest_setStringRequest* dst,
    const OnewayCallTest_setStringRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->s1, src->s1, (255) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'OnewayCallTest_setStringRequest' sequence class.
 */
#define T OnewayCallTest_setStringRequest
#define TSeq OnewayCallTest_setStringRequestSeq
#define T_initialize_ex OnewayCallTest_setStringRequest_initialize_ex
#define T_finalize_ex   OnewayCallTest_setStringRequest_finalize_ex
#define T_copy       OnewayCallTest_setStringRequest_copy

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
const char *OnewayCallTest_getStringRequestTYPENAME = "OnewayCallTest_getStringRequest";

DDS_TypeCode* OnewayCallTest_getStringRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member OnewayCallTest_getStringRequest_g_tc_members[1]=
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
        }
    };

    static DDS_TypeCode OnewayCallTest_getStringRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"OnewayCallTest_getStringRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        OnewayCallTest_getStringRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OnewayCallTest_getStringRequest*/

    if (is_initialized) {
        return &OnewayCallTest_getStringRequest_g_tc;
    }


    OnewayCallTest_getStringRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();

    is_initialized = RTI_TRUE;

    return &OnewayCallTest_getStringRequest_g_tc;
}


RTIBool OnewayCallTest_getStringRequest_initialize(
    OnewayCallTest_getStringRequest* sample) {
  return OnewayCallTest_getStringRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OnewayCallTest_getStringRequest_initialize_ex(
    OnewayCallTest_getStringRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void OnewayCallTest_getStringRequest_finalize(
    OnewayCallTest_getStringRequest* sample)
{
    OnewayCallTest_getStringRequest_finalize_ex(sample,RTI_TRUE);
}
        
void OnewayCallTest_getStringRequest_finalize_ex(
    OnewayCallTest_getStringRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

}

RTIBool OnewayCallTest_getStringRequest_copy(
    OnewayCallTest_getStringRequest* dst,
    const OnewayCallTest_getStringRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'OnewayCallTest_getStringRequest' sequence class.
 */
#define T OnewayCallTest_getStringRequest
#define TSeq OnewayCallTest_getStringRequestSeq
#define T_initialize_ex OnewayCallTest_getStringRequest_initialize_ex
#define T_finalize_ex   OnewayCallTest_getStringRequest_finalize_ex
#define T_copy       OnewayCallTest_getStringRequest_copy

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
const char *OnewayCallTest_getStringReplyTYPENAME = "OnewayCallTest_getStringReply";

DDS_TypeCode* OnewayCallTest_getStringReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode OnewayCallTest_getStringReply_g_tc_getString_ret_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member OnewayCallTest_getStringReply_g_tc_members[2]=
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

    static DDS_TypeCode OnewayCallTest_getStringReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"OnewayCallTest_getStringReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        OnewayCallTest_getStringReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OnewayCallTest_getStringReply*/

    if (is_initialized) {
        return &OnewayCallTest_getStringReply_g_tc;
    }


    OnewayCallTest_getStringReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    OnewayCallTest_getStringReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&OnewayCallTest_getStringReply_g_tc_getString_ret_string;

    is_initialized = RTI_TRUE;

    return &OnewayCallTest_getStringReply_g_tc;
}


RTIBool OnewayCallTest_getStringReply_initialize(
    OnewayCallTest_getStringReply* sample) {
  return OnewayCallTest_getStringReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OnewayCallTest_getStringReply_initialize_ex(
    OnewayCallTest_getStringReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (allocateMemory) {
        sample->getString_ret = DDS_String_alloc((255));
        if (sample->getString_ret == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->getString_ret != NULL) { 
            sample->getString_ret[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void OnewayCallTest_getStringReply_finalize(
    OnewayCallTest_getStringReply* sample)
{
    OnewayCallTest_getStringReply_finalize_ex(sample,RTI_TRUE);
}
        
void OnewayCallTest_getStringReply_finalize_ex(
    OnewayCallTest_getStringReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            

    DDS_String_free(sample->getString_ret);                
            

}

RTIBool OnewayCallTest_getStringReply_copy(
    OnewayCallTest_getStringReply* dst,
    const OnewayCallTest_getStringReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
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
 * Configure and implement 'OnewayCallTest_getStringReply' sequence class.
 */
#define T OnewayCallTest_getStringReply
#define TSeq OnewayCallTest_getStringReplySeq
#define T_initialize_ex OnewayCallTest_getStringReply_initialize_ex
#define T_finalize_ex   OnewayCallTest_getStringReply_finalize_ex
#define T_copy       OnewayCallTest_getStringReply_copy

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
const char *OnewayCallTest_setStructRequestTYPENAME = "OnewayCallTest_setStructRequest";

DDS_TypeCode* OnewayCallTest_setStructRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member OnewayCallTest_setStructRequest_g_tc_members[2]=
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

    static DDS_TypeCode OnewayCallTest_setStructRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"OnewayCallTest_setStructRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        OnewayCallTest_setStructRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OnewayCallTest_setStructRequest*/

    if (is_initialized) {
        return &OnewayCallTest_setStructRequest_g_tc;
    }


    OnewayCallTest_setStructRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    OnewayCallTest_setStructRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Structure_get_typecode();

    is_initialized = RTI_TRUE;

    return &OnewayCallTest_setStructRequest_g_tc;
}


RTIBool OnewayCallTest_setStructRequest_initialize(
    OnewayCallTest_setStructRequest* sample) {
  return OnewayCallTest_setStructRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OnewayCallTest_setStructRequest_initialize_ex(
    OnewayCallTest_setStructRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!Structure_initialize_ex(&sample->ev,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void OnewayCallTest_setStructRequest_finalize(
    OnewayCallTest_setStructRequest* sample)
{
    OnewayCallTest_setStructRequest_finalize_ex(sample,RTI_TRUE);
}
        
void OnewayCallTest_setStructRequest_finalize_ex(
    OnewayCallTest_setStructRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

    Structure_finalize_ex(&sample->ev,deletePointers);
            

}

RTIBool OnewayCallTest_setStructRequest_copy(
    OnewayCallTest_setStructRequest* dst,
    const OnewayCallTest_setStructRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!Structure_copy(
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
 * Configure and implement 'OnewayCallTest_setStructRequest' sequence class.
 */
#define T OnewayCallTest_setStructRequest
#define TSeq OnewayCallTest_setStructRequestSeq
#define T_initialize_ex OnewayCallTest_setStructRequest_initialize_ex
#define T_finalize_ex   OnewayCallTest_setStructRequest_finalize_ex
#define T_copy       OnewayCallTest_setStructRequest_copy

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
const char *OnewayCallTest_getStructRequestTYPENAME = "OnewayCallTest_getStructRequest";

DDS_TypeCode* OnewayCallTest_getStructRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member OnewayCallTest_getStructRequest_g_tc_members[1]=
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
        }
    };

    static DDS_TypeCode OnewayCallTest_getStructRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"OnewayCallTest_getStructRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        OnewayCallTest_getStructRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OnewayCallTest_getStructRequest*/

    if (is_initialized) {
        return &OnewayCallTest_getStructRequest_g_tc;
    }


    OnewayCallTest_getStructRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();

    is_initialized = RTI_TRUE;

    return &OnewayCallTest_getStructRequest_g_tc;
}


RTIBool OnewayCallTest_getStructRequest_initialize(
    OnewayCallTest_getStructRequest* sample) {
  return OnewayCallTest_getStructRequest_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OnewayCallTest_getStructRequest_initialize_ex(
    OnewayCallTest_getStructRequest* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void OnewayCallTest_getStructRequest_finalize(
    OnewayCallTest_getStructRequest* sample)
{
    OnewayCallTest_getStructRequest_finalize_ex(sample,RTI_TRUE);
}
        
void OnewayCallTest_getStructRequest_finalize_ex(
    OnewayCallTest_getStructRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            

}

RTIBool OnewayCallTest_getStructRequest_copy(
    OnewayCallTest_getStructRequest* dst,
    const OnewayCallTest_getStructRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'OnewayCallTest_getStructRequest' sequence class.
 */
#define T OnewayCallTest_getStructRequest
#define TSeq OnewayCallTest_getStructRequestSeq
#define T_initialize_ex OnewayCallTest_getStructRequest_initialize_ex
#define T_finalize_ex   OnewayCallTest_getStructRequest_finalize_ex
#define T_copy       OnewayCallTest_getStructRequest_copy

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
const char *OnewayCallTest_getStructReplyTYPENAME = "OnewayCallTest_getStructReply";

DDS_TypeCode* OnewayCallTest_getStructReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member OnewayCallTest_getStructReply_g_tc_members[2]=
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
            (char *)"getStruct_ret",/* Member name */
            {
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

    static DDS_TypeCode OnewayCallTest_getStructReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"OnewayCallTest_getStructReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        OnewayCallTest_getStructReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for OnewayCallTest_getStructReply*/

    if (is_initialized) {
        return &OnewayCallTest_getStructReply_g_tc;
    }


    OnewayCallTest_getStructReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    OnewayCallTest_getStructReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Structure_get_typecode();

    is_initialized = RTI_TRUE;

    return &OnewayCallTest_getStructReply_g_tc;
}


RTIBool OnewayCallTest_getStructReply_initialize(
    OnewayCallTest_getStructReply* sample) {
  return OnewayCallTest_getStructReply_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool OnewayCallTest_getStructReply_initialize_ex(
    OnewayCallTest_getStructReply* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!Structure_initialize_ex(&sample->getStruct_ret,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void OnewayCallTest_getStructReply_finalize(
    OnewayCallTest_getStructReply* sample)
{
    OnewayCallTest_getStructReply_finalize_ex(sample,RTI_TRUE);
}
        
void OnewayCallTest_getStructReply_finalize_ex(
    OnewayCallTest_getStructReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            

    Structure_finalize_ex(&sample->getStruct_ret,deletePointers);
            

}

RTIBool OnewayCallTest_getStructReply_copy(
    OnewayCallTest_getStructReply* dst,
    const OnewayCallTest_getStructReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            

    if (!Structure_copy(
        &dst->getStruct_ret, &src->getStruct_ret)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'OnewayCallTest_getStructReply' sequence class.
 */
#define T OnewayCallTest_getStructReply
#define TSeq OnewayCallTest_getStructReplySeq
#define T_initialize_ex OnewayCallTest_getStructReply_initialize_ex
#define T_finalize_ex   OnewayCallTest_getStructReply_finalize_ex
#define T_copy       OnewayCallTest_getStructReply_copy

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

