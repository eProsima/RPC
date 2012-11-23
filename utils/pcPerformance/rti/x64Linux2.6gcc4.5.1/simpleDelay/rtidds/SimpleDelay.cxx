
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SimpleDelay.idl using "rtiddsgen".
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



#include "SimpleDelay.h"

/* ========================================================================= */
const char *EstructuraTYPENAME = "Estructura";

DDS_TypeCode* Estructura_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Estructura_g_tc_valor3_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member Estructura_g_tc_members[3]=
    {
        {
            (char *)"valor1",/* Member name */
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
            (char *)"valor2",/* Member name */
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
            (char *)"valor3",/* Member name */
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

    static DDS_TypeCode Estructura_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Estructura", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        Estructura_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Estructura*/

    if (is_initialized) {
        return &Estructura_g_tc;
    }


    Estructura_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Estructura_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Estructura_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&Estructura_g_tc_valor3_string;

    is_initialized = RTI_TRUE;

    return &Estructura_g_tc;
}


RTIBool Estructura_initialize(
    Estructura* sample) {
  return Estructura_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Estructura_initialize_ex(
    Estructura* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->valor1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->valor2)) {
        return RTI_FALSE;
    }                
            

    if (allocateMemory) {
        sample->valor3 = DDS_String_alloc((255));
        if (sample->valor3 == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->valor3 != NULL) { 
            sample->valor3[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void Estructura_finalize(
    Estructura* sample)
{
    Estructura_finalize_ex(sample,RTI_TRUE);
}
        
void Estructura_finalize_ex(
    Estructura* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */




    DDS_String_free(sample->valor3);                
            

}

RTIBool Estructura_copy(
    Estructura* dst,
    const Estructura* src)
{        

    if (!RTICdrType_copyLong(
        &dst->valor1, &src->valor1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->valor2, &src->valor2)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->valor3, src->valor3, (255) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Estructura' sequence class.
 */
#define T Estructura
#define TSeq EstructuraSeq
#define T_initialize_ex Estructura_initialize_ex
#define T_finalize_ex   Estructura_finalize_ex
#define T_copy       Estructura_copy

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

