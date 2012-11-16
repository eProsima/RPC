
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MultithreadTest.idl using "rtiddsgen".
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



#include "MultithreadTest.h"

/* ========================================================================= */
const char *DatoTYPENAME = "Dato";

DDS_TypeCode* Dato_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Dato_g_tc_message_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member Dato_g_tc_members[2]=
    {
        {
            (char *)"count",/* Member name */
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
        }
    };

    static DDS_TypeCode Dato_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Dato", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Dato_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Dato*/

    if (is_initialized) {
        return &Dato_g_tc;
    }


    Dato_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Dato_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Dato_g_tc_message_string;

    is_initialized = RTI_TRUE;

    return &Dato_g_tc;
}


RTIBool Dato_initialize(
    Dato* sample) {
  return Dato_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Dato_initialize_ex(
    Dato* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->count)) {
        return RTI_FALSE;
    }                
            

    if (allocateMemory) {
        sample->message = DDS_String_alloc((255));
        if (sample->message == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->message != NULL) { 
            sample->message[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void Dato_finalize(
    Dato* sample)
{
    Dato_finalize_ex(sample,RTI_TRUE);
}
        
void Dato_finalize_ex(
    Dato* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



    DDS_String_free(sample->message);                
            

}

RTIBool Dato_copy(
    Dato* dst,
    const Dato* src)
{        

    if (!RTICdrType_copyLong(
        &dst->count, &src->count)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->message, src->message, (255) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Dato' sequence class.
 */
#define T Dato
#define TSeq DatoSeq
#define T_initialize_ex Dato_initialize_ex
#define T_finalize_ex   Dato_finalize_ex
#define T_copy       Dato_copy

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

