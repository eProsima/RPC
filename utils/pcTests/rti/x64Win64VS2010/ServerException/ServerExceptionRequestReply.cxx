
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ServerExceptionRequestReply.idl using "rtiddsgen".
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



#include "ServerExceptionRequestReply.h"

/* ========================================================================= */
const char *ServerException_sendExceptionRequestTYPENAME = "ServerException_sendExceptionRequest";

DDS_TypeCode* ServerException_sendExceptionRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ServerException_sendExceptionRequest_g_tc_members[1]=
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

    static DDS_TypeCode ServerException_sendExceptionRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"ServerException_sendExceptionRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        ServerException_sendExceptionRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ServerException_sendExceptionRequest*/

    if (is_initialized) {
        return &ServerException_sendExceptionRequest_g_tc;
    }


    ServerException_sendExceptionRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();

    is_initialized = RTI_TRUE;

    return &ServerException_sendExceptionRequest_g_tc;
}


RTIBool ServerException_sendExceptionRequest_initialize(
    ServerException_sendExceptionRequest* sample) {
  return ServerException_sendExceptionRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool ServerException_sendExceptionRequest_initialize_ex(
    ServerException_sendExceptionRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void ServerException_sendExceptionRequest_finalize(
    ServerException_sendExceptionRequest* sample)
{
    ServerException_sendExceptionRequest_finalize_ex(sample,RTI_TRUE);
}
        
void ServerException_sendExceptionRequest_finalize_ex(
    ServerException_sendExceptionRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool ServerException_sendExceptionRequest_copy(
    ServerException_sendExceptionRequest* dst,
    const ServerException_sendExceptionRequest* src)
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
 * Configure and implement 'ServerException_sendExceptionRequest' sequence class.
 */
#define T ServerException_sendExceptionRequest
#define TSeq ServerException_sendExceptionRequestSeq
#define T_initialize_ex ServerException_sendExceptionRequest_initialize_ex
#define T_finalize_ex   ServerException_sendExceptionRequest_finalize_ex
#define T_copy       ServerException_sendExceptionRequest_copy

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
const char *ServerException_sendExceptionReplyTYPENAME = "ServerException_sendExceptionReply";

DDS_TypeCode* ServerException_sendExceptionReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ServerException_sendExceptionReply_g_tc_members[1]=
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

    static DDS_TypeCode ServerException_sendExceptionReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"ServerException_sendExceptionReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        ServerException_sendExceptionReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ServerException_sendExceptionReply*/

    if (is_initialized) {
        return &ServerException_sendExceptionReply_g_tc;
    }


    ServerException_sendExceptionReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();

    is_initialized = RTI_TRUE;

    return &ServerException_sendExceptionReply_g_tc;
}


RTIBool ServerException_sendExceptionReply_initialize(
    ServerException_sendExceptionReply* sample) {
  return ServerException_sendExceptionReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool ServerException_sendExceptionReply_initialize_ex(
    ServerException_sendExceptionReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void ServerException_sendExceptionReply_finalize(
    ServerException_sendExceptionReply* sample)
{
    ServerException_sendExceptionReply_finalize_ex(sample,RTI_TRUE);
}
        
void ServerException_sendExceptionReply_finalize_ex(
    ServerException_sendExceptionReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
}

RTIBool ServerException_sendExceptionReply_copy(
    ServerException_sendExceptionReply* dst,
    const ServerException_sendExceptionReply* src)
{        

    if (!ReplyHeader_copy(
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
 * Configure and implement 'ServerException_sendExceptionReply' sequence class.
 */
#define T ServerException_sendExceptionReply
#define TSeq ServerException_sendExceptionReplySeq
#define T_initialize_ex ServerException_sendExceptionReply_initialize_ex
#define T_finalize_ex   ServerException_sendExceptionReply_finalize_ex
#define T_copy       ServerException_sendExceptionReply_copy

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
const char *ServerException_sendExceptionTwoRequestTYPENAME = "ServerException_sendExceptionTwoRequest";

DDS_TypeCode* ServerException_sendExceptionTwoRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ServerException_sendExceptionTwoRequest_g_tc_message_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode ServerException_sendExceptionTwoRequest_g_tc_message2_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member ServerException_sendExceptionTwoRequest_g_tc_members[3]=
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
            (char *)"message",/* Member name */
            {
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
            (char *)"message2",/* Member name */
            {
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

    static DDS_TypeCode ServerException_sendExceptionTwoRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"ServerException_sendExceptionTwoRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        ServerException_sendExceptionTwoRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ServerException_sendExceptionTwoRequest*/

    if (is_initialized) {
        return &ServerException_sendExceptionTwoRequest_g_tc;
    }


    ServerException_sendExceptionTwoRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    ServerException_sendExceptionTwoRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&ServerException_sendExceptionTwoRequest_g_tc_message_string;
    ServerException_sendExceptionTwoRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&ServerException_sendExceptionTwoRequest_g_tc_message2_string;

    is_initialized = RTI_TRUE;

    return &ServerException_sendExceptionTwoRequest_g_tc;
}


RTIBool ServerException_sendExceptionTwoRequest_initialize(
    ServerException_sendExceptionTwoRequest* sample) {
  return ServerException_sendExceptionTwoRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool ServerException_sendExceptionTwoRequest_initialize_ex(
    ServerException_sendExceptionTwoRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    sample->message = DDS_String_alloc((255));
    if (sample->message == NULL) {
        return RTI_FALSE;
    }
            
    sample->message2 = DDS_String_alloc((255));
    if (sample->message2 == NULL) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void ServerException_sendExceptionTwoRequest_finalize(
    ServerException_sendExceptionTwoRequest* sample)
{
    ServerException_sendExceptionTwoRequest_finalize_ex(sample,RTI_TRUE);
}
        
void ServerException_sendExceptionTwoRequest_finalize_ex(
    ServerException_sendExceptionTwoRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
    DDS_String_free(sample->message);                
            
    DDS_String_free(sample->message2);                
            
}

RTIBool ServerException_sendExceptionTwoRequest_copy(
    ServerException_sendExceptionTwoRequest* dst,
    const ServerException_sendExceptionTwoRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->message, src->message, (255) + 1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->message2, src->message2, (255) + 1)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ServerException_sendExceptionTwoRequest' sequence class.
 */
#define T ServerException_sendExceptionTwoRequest
#define TSeq ServerException_sendExceptionTwoRequestSeq
#define T_initialize_ex ServerException_sendExceptionTwoRequest_initialize_ex
#define T_finalize_ex   ServerException_sendExceptionTwoRequest_finalize_ex
#define T_copy       ServerException_sendExceptionTwoRequest_copy

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
const char *ServerException_sendExceptionTwoReplyTYPENAME = "ServerException_sendExceptionTwoReply";

DDS_TypeCode* ServerException_sendExceptionTwoReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ServerException_sendExceptionTwoReply_g_tc_message2_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode ServerException_sendExceptionTwoReply_g_tc_message3_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode ServerException_sendExceptionTwoReply_g_tc_sendExceptionTwo_ret_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member ServerException_sendExceptionTwoReply_g_tc_members[4]=
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
            (char *)"message2",/* Member name */
            {
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
            (char *)"message3",/* Member name */
            {
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
            (char *)"sendExceptionTwo_ret",/* Member name */
            {
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

    static DDS_TypeCode ServerException_sendExceptionTwoReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"ServerException_sendExceptionTwoReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        ServerException_sendExceptionTwoReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ServerException_sendExceptionTwoReply*/

    if (is_initialized) {
        return &ServerException_sendExceptionTwoReply_g_tc;
    }


    ServerException_sendExceptionTwoReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    ServerException_sendExceptionTwoReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&ServerException_sendExceptionTwoReply_g_tc_message2_string;
    ServerException_sendExceptionTwoReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&ServerException_sendExceptionTwoReply_g_tc_message3_string;
    ServerException_sendExceptionTwoReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&ServerException_sendExceptionTwoReply_g_tc_sendExceptionTwo_ret_string;

    is_initialized = RTI_TRUE;

    return &ServerException_sendExceptionTwoReply_g_tc;
}


RTIBool ServerException_sendExceptionTwoReply_initialize(
    ServerException_sendExceptionTwoReply* sample) {
  return ServerException_sendExceptionTwoReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool ServerException_sendExceptionTwoReply_initialize_ex(
    ServerException_sendExceptionTwoReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    sample->message2 = DDS_String_alloc((255));
    if (sample->message2 == NULL) {
        return RTI_FALSE;
    }
            
    sample->message3 = DDS_String_alloc((255));
    if (sample->message3 == NULL) {
        return RTI_FALSE;
    }
            
    sample->sendExceptionTwo_ret = DDS_String_alloc((255));
    if (sample->sendExceptionTwo_ret == NULL) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void ServerException_sendExceptionTwoReply_finalize(
    ServerException_sendExceptionTwoReply* sample)
{
    ServerException_sendExceptionTwoReply_finalize_ex(sample,RTI_TRUE);
}
        
void ServerException_sendExceptionTwoReply_finalize_ex(
    ServerException_sendExceptionTwoReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
    DDS_String_free(sample->message2);                
            
    DDS_String_free(sample->message3);                
            
    DDS_String_free(sample->sendExceptionTwo_ret);                
            
}

RTIBool ServerException_sendExceptionTwoReply_copy(
    ServerException_sendExceptionTwoReply* dst,
    const ServerException_sendExceptionTwoReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->message2, src->message2, (255) + 1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->message3, src->message3, (255) + 1)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->sendExceptionTwo_ret, src->sendExceptionTwo_ret, (255) + 1)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ServerException_sendExceptionTwoReply' sequence class.
 */
#define T ServerException_sendExceptionTwoReply
#define TSeq ServerException_sendExceptionTwoReplySeq
#define T_initialize_ex ServerException_sendExceptionTwoReply_initialize_ex
#define T_finalize_ex   ServerException_sendExceptionTwoReply_finalize_ex
#define T_copy       ServerException_sendExceptionTwoReply_copy

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
const char *ServerException_sendExceptionThreeRequestTYPENAME = "ServerException_sendExceptionThreeRequest";

DDS_TypeCode* ServerException_sendExceptionThreeRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ServerException_sendExceptionThreeRequest_g_tc_members[3]=
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
        },
        {
            (char *)"es2",/* Member name */
            {
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

    static DDS_TypeCode ServerException_sendExceptionThreeRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"ServerException_sendExceptionThreeRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        ServerException_sendExceptionThreeRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ServerException_sendExceptionThreeRequest*/

    if (is_initialized) {
        return &ServerException_sendExceptionThreeRequest_g_tc;
    }


    ServerException_sendExceptionThreeRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RequestHeader_get_typecode();
    ServerException_sendExceptionThreeRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Estructura_get_typecode();
    ServerException_sendExceptionThreeRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Estructura_get_typecode();

    is_initialized = RTI_TRUE;

    return &ServerException_sendExceptionThreeRequest_g_tc;
}


RTIBool ServerException_sendExceptionThreeRequest_initialize(
    ServerException_sendExceptionThreeRequest* sample) {
  return ServerException_sendExceptionThreeRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool ServerException_sendExceptionThreeRequest_initialize_ex(
    ServerException_sendExceptionThreeRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RequestHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Estructura_initialize_ex(&sample->es,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Estructura_initialize_ex(&sample->es2,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void ServerException_sendExceptionThreeRequest_finalize(
    ServerException_sendExceptionThreeRequest* sample)
{
    ServerException_sendExceptionThreeRequest_finalize_ex(sample,RTI_TRUE);
}
        
void ServerException_sendExceptionThreeRequest_finalize_ex(
    ServerException_sendExceptionThreeRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    RequestHeader_finalize_ex(&sample->header,deletePointers);
            
    Estructura_finalize_ex(&sample->es,deletePointers);
            
    Estructura_finalize_ex(&sample->es2,deletePointers);
            
}

RTIBool ServerException_sendExceptionThreeRequest_copy(
    ServerException_sendExceptionThreeRequest* dst,
    const ServerException_sendExceptionThreeRequest* src)
{        

    if (!RequestHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!Estructura_copy(
        &dst->es, &src->es)) {
        return RTI_FALSE;
    }
            
    if (!Estructura_copy(
        &dst->es2, &src->es2)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ServerException_sendExceptionThreeRequest' sequence class.
 */
#define T ServerException_sendExceptionThreeRequest
#define TSeq ServerException_sendExceptionThreeRequestSeq
#define T_initialize_ex ServerException_sendExceptionThreeRequest_initialize_ex
#define T_finalize_ex   ServerException_sendExceptionThreeRequest_finalize_ex
#define T_copy       ServerException_sendExceptionThreeRequest_copy

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
const char *ServerException_sendExceptionThreeReplyTYPENAME = "ServerException_sendExceptionThreeReply";

DDS_TypeCode* ServerException_sendExceptionThreeReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ServerException_sendExceptionThreeReply_g_tc_members[4]=
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
            (char *)"es2",/* Member name */
            {
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
            (char *)"es3",/* Member name */
            {
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
            (char *)"sendExceptionThree_ret",/* Member name */
            {
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

    static DDS_TypeCode ServerException_sendExceptionThreeReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"ServerException_sendExceptionThreeReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        ServerException_sendExceptionThreeReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ServerException_sendExceptionThreeReply*/

    if (is_initialized) {
        return &ServerException_sendExceptionThreeReply_g_tc;
    }


    ServerException_sendExceptionThreeReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ReplyHeader_get_typecode();
    ServerException_sendExceptionThreeReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Estructura_get_typecode();
    ServerException_sendExceptionThreeReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Estructura_get_typecode();
    ServerException_sendExceptionThreeReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)Estructura_get_typecode();

    is_initialized = RTI_TRUE;

    return &ServerException_sendExceptionThreeReply_g_tc;
}


RTIBool ServerException_sendExceptionThreeReply_initialize(
    ServerException_sendExceptionThreeReply* sample) {
  return ServerException_sendExceptionThreeReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool ServerException_sendExceptionThreeReply_initialize_ex(
    ServerException_sendExceptionThreeReply* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!ReplyHeader_initialize_ex(&sample->header,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Estructura_initialize_ex(&sample->es2,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Estructura_initialize_ex(&sample->es3,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!Estructura_initialize_ex(&sample->sendExceptionThree_ret,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void ServerException_sendExceptionThreeReply_finalize(
    ServerException_sendExceptionThreeReply* sample)
{
    ServerException_sendExceptionThreeReply_finalize_ex(sample,RTI_TRUE);
}
        
void ServerException_sendExceptionThreeReply_finalize_ex(
    ServerException_sendExceptionThreeReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    ReplyHeader_finalize_ex(&sample->header,deletePointers);
            
    Estructura_finalize_ex(&sample->es2,deletePointers);
            
    Estructura_finalize_ex(&sample->es3,deletePointers);
            
    Estructura_finalize_ex(&sample->sendExceptionThree_ret,deletePointers);
            
}

RTIBool ServerException_sendExceptionThreeReply_copy(
    ServerException_sendExceptionThreeReply* dst,
    const ServerException_sendExceptionThreeReply* src)
{        

    if (!ReplyHeader_copy(
        &dst->header, &src->header)) {
        return RTI_FALSE;
    }
            
    if (!Estructura_copy(
        &dst->es2, &src->es2)) {
        return RTI_FALSE;
    }
            
    if (!Estructura_copy(
        &dst->es3, &src->es3)) {
        return RTI_FALSE;
    }
            
    if (!Estructura_copy(
        &dst->sendExceptionThree_ret, &src->sendExceptionThree_ret)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ServerException_sendExceptionThreeReply' sequence class.
 */
#define T ServerException_sendExceptionThreeReply
#define TSeq ServerException_sendExceptionThreeReplySeq
#define T_initialize_ex ServerException_sendExceptionThreeReply_initialize_ex
#define T_finalize_ex   ServerException_sendExceptionThreeReply_finalize_ex
#define T_copy       ServerException_sendExceptionThreeReply_copy

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

