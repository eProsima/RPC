
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
  return Identification_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool Identification_initialize_ex(
    Identification* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


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

