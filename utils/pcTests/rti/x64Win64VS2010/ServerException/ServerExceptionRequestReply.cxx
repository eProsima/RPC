
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
const char *sendExceptionRequestTYPENAME = "sendExceptionRequest";

DDS_TypeCode* sendExceptionRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member sendExceptionRequest_g_tc_members[2]=
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
        }
    };

    static DDS_TypeCode sendExceptionRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"sendExceptionRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        sendExceptionRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for sendExceptionRequest*/

    if (is_initialized) {
        return &sendExceptionRequest_g_tc;
    }


    sendExceptionRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    sendExceptionRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    is_initialized = RTI_TRUE;

    return &sendExceptionRequest_g_tc;
}


RTIBool sendExceptionRequest_initialize(
    sendExceptionRequest* sample) {
  return sendExceptionRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool sendExceptionRequest_initialize_ex(
    sendExceptionRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
        return RTI_FALSE;
    }                
            

    return RTI_TRUE;
}

void sendExceptionRequest_finalize(
    sendExceptionRequest* sample)
{
    sendExceptionRequest_finalize_ex(sample,RTI_TRUE);
}
        
void sendExceptionRequest_finalize_ex(
    sendExceptionRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool sendExceptionRequest_copy(
    sendExceptionRequest* dst,
    const sendExceptionRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'sendExceptionRequest' sequence class.
 */
#define T sendExceptionRequest
#define TSeq sendExceptionRequestSeq
#define T_initialize_ex sendExceptionRequest_initialize_ex
#define T_finalize_ex   sendExceptionRequest_finalize_ex
#define T_copy       sendExceptionRequest_copy

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
const char *sendExceptionReplyTYPENAME = "sendExceptionReply";

DDS_TypeCode* sendExceptionReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member sendExceptionReply_g_tc_members[4]=
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
        }
    };

    static DDS_TypeCode sendExceptionReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"sendExceptionReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        sendExceptionReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for sendExceptionReply*/

    if (is_initialized) {
        return &sendExceptionReply_g_tc;
    }


    sendExceptionReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    sendExceptionReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    sendExceptionReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    sendExceptionReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &sendExceptionReply_g_tc;
}


RTIBool sendExceptionReply_initialize(
    sendExceptionReply* sample) {
  return sendExceptionReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool sendExceptionReply_initialize_ex(
    sendExceptionReply* sample,RTIBool allocatePointers)
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
            

    return RTI_TRUE;
}

void sendExceptionReply_finalize(
    sendExceptionReply* sample)
{
    sendExceptionReply_finalize_ex(sample,RTI_TRUE);
}
        
void sendExceptionReply_finalize_ex(
    sendExceptionReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
}

RTIBool sendExceptionReply_copy(
    sendExceptionReply* dst,
    const sendExceptionReply* src)
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
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'sendExceptionReply' sequence class.
 */
#define T sendExceptionReply
#define TSeq sendExceptionReplySeq
#define T_initialize_ex sendExceptionReply_initialize_ex
#define T_finalize_ex   sendExceptionReply_finalize_ex
#define T_copy       sendExceptionReply_copy

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
const char *sendExceptionTwoRequestTYPENAME = "sendExceptionTwoRequest";

DDS_TypeCode* sendExceptionTwoRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode sendExceptionTwoRequest_g_tc_message_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode sendExceptionTwoRequest_g_tc_message2_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member sendExceptionTwoRequest_g_tc_members[4]=
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

    static DDS_TypeCode sendExceptionTwoRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"sendExceptionTwoRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        sendExceptionTwoRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for sendExceptionTwoRequest*/

    if (is_initialized) {
        return &sendExceptionTwoRequest_g_tc;
    }


    sendExceptionTwoRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    sendExceptionTwoRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    sendExceptionTwoRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&sendExceptionTwoRequest_g_tc_message_string;
    sendExceptionTwoRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&sendExceptionTwoRequest_g_tc_message2_string;

    is_initialized = RTI_TRUE;

    return &sendExceptionTwoRequest_g_tc;
}


RTIBool sendExceptionTwoRequest_initialize(
    sendExceptionTwoRequest* sample) {
  return sendExceptionTwoRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool sendExceptionTwoRequest_initialize_ex(
    sendExceptionTwoRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void sendExceptionTwoRequest_finalize(
    sendExceptionTwoRequest* sample)
{
    sendExceptionTwoRequest_finalize_ex(sample,RTI_TRUE);
}
        
void sendExceptionTwoRequest_finalize_ex(
    sendExceptionTwoRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
    DDS_String_free(sample->message);                
            
    DDS_String_free(sample->message2);                
            
}

RTIBool sendExceptionTwoRequest_copy(
    sendExceptionTwoRequest* dst,
    const sendExceptionTwoRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'sendExceptionTwoRequest' sequence class.
 */
#define T sendExceptionTwoRequest
#define TSeq sendExceptionTwoRequestSeq
#define T_initialize_ex sendExceptionTwoRequest_initialize_ex
#define T_finalize_ex   sendExceptionTwoRequest_finalize_ex
#define T_copy       sendExceptionTwoRequest_copy

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
const char *sendExceptionTwoReplyTYPENAME = "sendExceptionTwoReply";

DDS_TypeCode* sendExceptionTwoReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode sendExceptionTwoReply_g_tc_message2_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode sendExceptionTwoReply_g_tc_message3_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode sendExceptionTwoReply_g_tc_sendExceptionTwo_ret_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member sendExceptionTwoReply_g_tc_members[7]=
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

    static DDS_TypeCode sendExceptionTwoReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"sendExceptionTwoReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        sendExceptionTwoReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for sendExceptionTwoReply*/

    if (is_initialized) {
        return &sendExceptionTwoReply_g_tc;
    }


    sendExceptionTwoReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    sendExceptionTwoReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    sendExceptionTwoReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    sendExceptionTwoReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    sendExceptionTwoReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&sendExceptionTwoReply_g_tc_message2_string;
    sendExceptionTwoReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&sendExceptionTwoReply_g_tc_message3_string;
    sendExceptionTwoReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&sendExceptionTwoReply_g_tc_sendExceptionTwo_ret_string;

    is_initialized = RTI_TRUE;

    return &sendExceptionTwoReply_g_tc;
}


RTIBool sendExceptionTwoReply_initialize(
    sendExceptionTwoReply* sample) {
  return sendExceptionTwoReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool sendExceptionTwoReply_initialize_ex(
    sendExceptionTwoReply* sample,RTIBool allocatePointers)
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

void sendExceptionTwoReply_finalize(
    sendExceptionTwoReply* sample)
{
    sendExceptionTwoReply_finalize_ex(sample,RTI_TRUE);
}
        
void sendExceptionTwoReply_finalize_ex(
    sendExceptionTwoReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
    DDS_String_free(sample->message2);                
            
    DDS_String_free(sample->message3);                
            
    DDS_String_free(sample->sendExceptionTwo_ret);                
            
}

RTIBool sendExceptionTwoReply_copy(
    sendExceptionTwoReply* dst,
    const sendExceptionTwoReply* src)
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
 * Configure and implement 'sendExceptionTwoReply' sequence class.
 */
#define T sendExceptionTwoReply
#define TSeq sendExceptionTwoReplySeq
#define T_initialize_ex sendExceptionTwoReply_initialize_ex
#define T_finalize_ex   sendExceptionTwoReply_finalize_ex
#define T_copy       sendExceptionTwoReply_copy

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
const char *sendExceptionThreeRequestTYPENAME = "sendExceptionThreeRequest";

DDS_TypeCode* sendExceptionThreeRequest_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member sendExceptionThreeRequest_g_tc_members[4]=
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

    static DDS_TypeCode sendExceptionThreeRequest_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"sendExceptionThreeRequest", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        sendExceptionThreeRequest_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for sendExceptionThreeRequest*/

    if (is_initialized) {
        return &sendExceptionThreeRequest_g_tc;
    }


    sendExceptionThreeRequest_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    sendExceptionThreeRequest_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    sendExceptionThreeRequest_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)Estructura_get_typecode();
    sendExceptionThreeRequest_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)Estructura_get_typecode();

    is_initialized = RTI_TRUE;

    return &sendExceptionThreeRequest_g_tc;
}


RTIBool sendExceptionThreeRequest_initialize(
    sendExceptionThreeRequest* sample) {
  return sendExceptionThreeRequest_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool sendExceptionThreeRequest_initialize_ex(
    sendExceptionThreeRequest* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!Identification_initialize_ex(&sample->clientServiceId,allocatePointers)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_initUnsignedLong(&sample->numSec)) {
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

void sendExceptionThreeRequest_finalize(
    sendExceptionThreeRequest* sample)
{
    sendExceptionThreeRequest_finalize_ex(sample,RTI_TRUE);
}
        
void sendExceptionThreeRequest_finalize_ex(
    sendExceptionThreeRequest* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
    Estructura_finalize_ex(&sample->es,deletePointers);
            
    Estructura_finalize_ex(&sample->es2,deletePointers);
            
}

RTIBool sendExceptionThreeRequest_copy(
    sendExceptionThreeRequest* dst,
    const sendExceptionThreeRequest* src)
{        

    if (!Identification_copy(
        &dst->clientServiceId, &src->clientServiceId)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyUnsignedLong(
        &dst->numSec, &src->numSec)) {
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
 * Configure and implement 'sendExceptionThreeRequest' sequence class.
 */
#define T sendExceptionThreeRequest
#define TSeq sendExceptionThreeRequestSeq
#define T_initialize_ex sendExceptionThreeRequest_initialize_ex
#define T_finalize_ex   sendExceptionThreeRequest_finalize_ex
#define T_copy       sendExceptionThreeRequest_copy

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
const char *sendExceptionThreeReplyTYPENAME = "sendExceptionThreeReply";

DDS_TypeCode* sendExceptionThreeReply_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member sendExceptionThreeReply_g_tc_members[7]=
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

    static DDS_TypeCode sendExceptionThreeReply_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"sendExceptionThreeReply", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        7, /* Number of members */
        sendExceptionThreeReply_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for sendExceptionThreeReply*/

    if (is_initialized) {
        return &sendExceptionThreeReply_g_tc;
    }


    sendExceptionThreeReply_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    sendExceptionThreeReply_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    sendExceptionThreeReply_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    sendExceptionThreeReply_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    sendExceptionThreeReply_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)Estructura_get_typecode();
    sendExceptionThreeReply_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)Estructura_get_typecode();
    sendExceptionThreeReply_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)Estructura_get_typecode();

    is_initialized = RTI_TRUE;

    return &sendExceptionThreeReply_g_tc;
}


RTIBool sendExceptionThreeReply_initialize(
    sendExceptionThreeReply* sample) {
  return sendExceptionThreeReply_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool sendExceptionThreeReply_initialize_ex(
    sendExceptionThreeReply* sample,RTIBool allocatePointers)
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

void sendExceptionThreeReply_finalize(
    sendExceptionThreeReply* sample)
{
    sendExceptionThreeReply_finalize_ex(sample,RTI_TRUE);
}
        
void sendExceptionThreeReply_finalize_ex(
    sendExceptionThreeReply* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->serverServiceId,deletePointers);
            
    Identification_finalize_ex(&sample->clientServiceId,deletePointers);
            
    Estructura_finalize_ex(&sample->es2,deletePointers);
            
    Estructura_finalize_ex(&sample->es3,deletePointers);
            
    Estructura_finalize_ex(&sample->sendExceptionThree_ret,deletePointers);
            
}

RTIBool sendExceptionThreeReply_copy(
    sendExceptionThreeReply* dst,
    const sendExceptionThreeReply* src)
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
 * Configure and implement 'sendExceptionThreeReply' sequence class.
 */
#define T sendExceptionThreeReply
#define TSeq sendExceptionThreeReplySeq
#define T_initialize_ex sendExceptionThreeReply_initialize_ex
#define T_finalize_ex   sendExceptionThreeReply_finalize_ex
#define T_copy       sendExceptionThreeReply_copy

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

