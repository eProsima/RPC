
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HelloWorld.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
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



#ifndef HelloWorld_h
#include "HelloWorld.h"
#endif

/* ========================================================================= */

DDS_TypeCode* Cookie_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Cookie_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(64,NULL);

    static DDS_TypeCode Cookie_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"Cookie", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Cookie */

    if (is_initialized) {
        return &Cookie_g_tc;
    }

    Cookie_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    Cookie_g_tc._data._typeCode = (RTICdrTypeCode *)&Cookie_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &Cookie_g_tc;
}


RTIBool Cookie_initialize(
    Cookie* sample)
{
    return Cookie_initialize_ex(sample,RTI_TRUE);            
}

RTIBool Cookie_initialize_ex(
    Cookie* sample,RTIBool allocatePointers)
{

    void* buffer;
    buffer = NULL;

    DDS_OctetSeq_initialize(sample);
                
    if (!DDS_OctetSeq_set_maximum(sample,
            (64))) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void Cookie_finalize(
    Cookie* sample)
{
    Cookie_finalize_ex(sample,RTI_TRUE);
}
            
void Cookie_finalize_ex(
    Cookie* sample,RTIBool deletePointers)
{

    DDS_OctetSeq_finalize(sample);
            
}


RTIBool Cookie_copy(
    Cookie* dst,
    const Cookie* src)
{

    if (!DDS_OctetSeq_copy_no_alloc(dst,
                                          src)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Cookie' sequence class.
 */
#define T            Cookie
#define TSeq         CookieSeq
#define T_initialize_ex Cookie_initialize_ex
#define T_finalize_ex   Cookie_finalize_ex
#define T_copy       Cookie_copy

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
const char *tickConsumerTYPENAME = "tickConsumer";

DDS_TypeCode* tickConsumer_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode tickConsumer_g_tc_name_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member tickConsumer_g_tc_members[2]=
    {
        {
            (char *)"id",/* Member name */
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
            (char *)"name",/* Member name */
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

    static DDS_TypeCode tickConsumer_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"tickConsumer", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        tickConsumer_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for tickConsumer*/

    if (is_initialized) {
        return &tickConsumer_g_tc;
    }


    tickConsumer_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    tickConsumer_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&tickConsumer_g_tc_name_string;

    is_initialized = RTI_TRUE;

    return &tickConsumer_g_tc;
}


RTIBool tickConsumer_initialize(
    tickConsumer* sample) {
    return tickConsumer_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool tickConsumer_initialize_ex(
    tickConsumer* sample,RTIBool allocatePointers)
{

    if (!RTICdrType_initLong(&sample->id)) {
        return RTI_FALSE;
    }                
            
    sample->name = DDS_String_alloc((255));
    if (sample->name == NULL) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void tickConsumer_finalize(
    tickConsumer* sample)
{
    tickConsumer_finalize_ex(sample,RTI_TRUE);
}
        
void tickConsumer_finalize_ex(
    tickConsumer* sample,RTIBool deletePointers)
{        

    DDS_String_free(sample->name);                
            
}

RTIBool tickConsumer_copy(
    tickConsumer* dst,
    const tickConsumer* src)
{        

    if (!RTICdrType_copyLong(
        &dst->id, &src->id)) {
        return RTI_FALSE;
    }
            
    if (!RTICdrType_copyString(
        dst->name, src->name, (255) + 1)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'tickConsumer' sequence class.
 */
#define T tickConsumer
#define TSeq tickConsumerSeq
#define T_initialize_ex tickConsumer_initialize_ex
#define T_finalize_ex   tickConsumer_finalize_ex
#define T_copy       tickConsumer_copy

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

