
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MessageHeader.idl using "rtiddsgen".
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



#include "MessageHeader.h"

/* ========================================================================= */
const char *IdentificationTYPENAME = "Identification";

DDS_TypeCode* Identification_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Identification_g_tc_members[4]=
    {
        {
            (char *)"value_1",/* Member name */
            {
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
            (char *)"value_2",/* Member name */
            {
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
            (char *)"value_3",/* Member name */
            {
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
            (char *)"value_4",/* Member name */
            {
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

    static DDS_TypeCode Identification_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Identification", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        Identification_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Identification*/

    if (is_initialized) {
        return &Identification_g_tc;
    }


    Identification_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    Identification_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    Identification_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    Identification_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    is_initialized = RTI_TRUE;

    return &Identification_g_tc;
}


RTIBool Identification_initialize(
    Identification* sample) {
  return Identification_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Identification_initialize_ex(
    Identification* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initUnsignedLong(&sample->value_1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedLong(&sample->value_2)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedLong(&sample->value_3)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedLong(&sample->value_4)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void Identification_finalize(
    Identification* sample)
{
    Identification_finalize_ex(sample,RTI_TRUE);
}
        
void Identification_finalize_ex(
    Identification* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */






}

RTIBool Identification_copy(
    Identification* dst,
    const Identification* src)
{        

    if (!RTICdrType_copyUnsignedLong(
        &dst->value_1, &src->value_1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->value_2, &src->value_2)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->value_3, &src->value_3)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->value_4, &src->value_4)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Identification' sequence class.
 */
#define T Identification
#define TSeq IdentificationSeq
#define T_initialize_ex Identification_initialize_ex
#define T_finalize_ex   Identification_finalize_ex
#define T_copy       Identification_copy

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
const char *RequestHeaderTYPENAME = "RequestHeader";

DDS_TypeCode* RequestHeader_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RequestHeader_g_tc_remoteServiceName_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member RequestHeader_g_tc_members[3]=
    {
        {
            (char *)"clientId",/* Member name */
            {
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
            (char *)"remoteServiceName",/* Member name */
            {
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
            (char *)"requestSequenceNumber",/* Member name */
            {
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

    static DDS_TypeCode RequestHeader_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"RequestHeader", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        RequestHeader_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for RequestHeader*/

    if (is_initialized) {
        return &RequestHeader_g_tc;
    }


    RequestHeader_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    RequestHeader_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&RequestHeader_g_tc_remoteServiceName_string;
    RequestHeader_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    is_initialized = RTI_TRUE;

    return &RequestHeader_g_tc;
}


RTIBool RequestHeader_initialize(
    RequestHeader* sample) {
  return RequestHeader_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool RequestHeader_initialize_ex(
    RequestHeader* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!Identification_initialize_ex(&sample->clientId,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (allocateMemory) {
        sample->remoteServiceName = DDS_String_alloc((255));
        if (sample->remoteServiceName == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->remoteServiceName != NULL) { 
            sample->remoteServiceName[0] = '\0';
        }
    }
            

    if (!RTICdrType_initUnsignedLong(&sample->requestSequenceNumber)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void RequestHeader_finalize(
    RequestHeader* sample)
{
    RequestHeader_finalize_ex(sample,RTI_TRUE);
}
        
void RequestHeader_finalize_ex(
    RequestHeader* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientId,deletePointers);
            

    DDS_String_free(sample->remoteServiceName);                
            


}

RTIBool RequestHeader_copy(
    RequestHeader* dst,
    const RequestHeader* src)
{        

    if (!Identification_copy(
        &dst->clientId, &src->clientId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->remoteServiceName, src->remoteServiceName, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->requestSequenceNumber, &src->requestSequenceNumber)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'RequestHeader' sequence class.
 */
#define T RequestHeader
#define TSeq RequestHeaderSeq
#define T_initialize_ex RequestHeader_initialize_ex
#define T_finalize_ex   RequestHeader_finalize_ex
#define T_copy       RequestHeader_copy

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
const char *ReplyHeaderTYPENAME = "ReplyHeader";

DDS_TypeCode* ReplyHeader_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ReplyHeader_g_tc_rpcddsRetMsg_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member ReplyHeader_g_tc_members[4]=
    {
        {
            (char *)"clientId",/* Member name */
            {
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
            (char *)"requestSequenceNumber",/* Member name */
            {
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
            (char *)"rpcddsRetCode",/* Member name */
            {
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
            (char *)"rpcddsRetMsg",/* Member name */
            {
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

    static DDS_TypeCode ReplyHeader_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"ReplyHeader", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        ReplyHeader_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ReplyHeader*/

    if (is_initialized) {
        return &ReplyHeader_g_tc;
    }


    ReplyHeader_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Identification_get_typecode();
    ReplyHeader_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    ReplyHeader_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    ReplyHeader_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&ReplyHeader_g_tc_rpcddsRetMsg_string;

    is_initialized = RTI_TRUE;

    return &ReplyHeader_g_tc;
}


RTIBool ReplyHeader_initialize(
    ReplyHeader* sample) {
  return ReplyHeader_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ReplyHeader_initialize_ex(
    ReplyHeader* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!Identification_initialize_ex(&sample->clientId,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initUnsignedLong(&sample->requestSequenceNumber)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->rpcddsRetCode)) {
        return RTI_FALSE;
    }                
            

    if (allocateMemory) {
        sample->rpcddsRetMsg = DDS_String_alloc((255));
        if (sample->rpcddsRetMsg == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->rpcddsRetMsg != NULL) { 
            sample->rpcddsRetMsg[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void ReplyHeader_finalize(
    ReplyHeader* sample)
{
    ReplyHeader_finalize_ex(sample,RTI_TRUE);
}
        
void ReplyHeader_finalize_ex(
    ReplyHeader* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Identification_finalize_ex(&sample->clientId,deletePointers);
            



    DDS_String_free(sample->rpcddsRetMsg);                
            

}

RTIBool ReplyHeader_copy(
    ReplyHeader* dst,
    const ReplyHeader* src)
{        

    if (!Identification_copy(
        &dst->clientId, &src->clientId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->requestSequenceNumber, &src->requestSequenceNumber)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->rpcddsRetCode, &src->rpcddsRetCode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->rpcddsRetMsg, src->rpcddsRetMsg, (255) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ReplyHeader' sequence class.
 */
#define T ReplyHeader
#define TSeq ReplyHeaderSeq
#define T_initialize_ex ReplyHeader_initialize_ex
#define T_finalize_ex   ReplyHeader_finalize_ex
#define T_copy       ReplyHeader_copy

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

