
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

    static DDS_TypeCode Estructura_g_tc_string1_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode Estructura_g_tc_string2_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member Estructura_g_tc_members[10]=
    {
        {
            (char *)"short1",/* Member name */
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
            (char *)"short2",/* Member name */
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
            (char *)"long1",/* Member name */
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
            (char *)"long2",/* Member name */
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
            (char *)"llong1",/* Member name */
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
            (char *)"llong2",/* Member name */
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
            (char *)"double1",/* Member name */
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
            (char *)"double2",/* Member name */
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
            (char *)"string1",/* Member name */
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
            (char *)"string2",/* Member name */
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
        10, /* Number of members */
        Estructura_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Estructura*/

    if (is_initialized) {
        return &Estructura_g_tc;
    }


    Estructura_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    Estructura_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    Estructura_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Estructura_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Estructura_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    Estructura_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;
    Estructura_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    Estructura_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    Estructura_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&Estructura_g_tc_string1_string;
    Estructura_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&Estructura_g_tc_string2_string;

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

    if (!RTICdrType_initShort(&sample->short1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initShort(&sample->short2)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->long1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->long2)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->llong1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLongLong(&sample->llong2)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->double1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->double2)) {
        return RTI_FALSE;
    }                
            

    if (allocateMemory) {
        sample->string1 = DDS_String_alloc((255));
        if (sample->string1 == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->string1 != NULL) { 
            sample->string1[0] = '\0';
        }
    }
            

    if (allocateMemory) {
        sample->string2 = DDS_String_alloc((255));
        if (sample->string2 == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->string2 != NULL) { 
            sample->string2[0] = '\0';
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










    DDS_String_free(sample->string1);                
            

    DDS_String_free(sample->string2);                
            

}

RTIBool Estructura_copy(
    Estructura* dst,
    const Estructura* src)
{        

    if (!RTICdrType_copyShort(
        &dst->short1, &src->short1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyShort(
        &dst->short2, &src->short2)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->long1, &src->long1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->long2, &src->long2)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->llong1, &src->llong1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLongLong(
        &dst->llong2, &src->llong2)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->double1, &src->double1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->double2, &src->double2)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->string1, src->string1, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->string2, src->string2, (255) + 1)) {
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

