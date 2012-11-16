
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AsyncCallTest.idl using "rtiddsgen".
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



#include "AsyncCallTest.h"

/* ========================================================================= */
const char *StructureTYPENAME = "Structure";

DDS_TypeCode* Structure_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Structure_g_tc_message_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member Structure_g_tc_members[2]=
    {
        {
            (char *)"dato",/* Member name */
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

    static DDS_TypeCode Structure_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Structure", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Structure_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Structure*/

    if (is_initialized) {
        return &Structure_g_tc;
    }


    Structure_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Structure_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Structure_g_tc_message_string;

    is_initialized = RTI_TRUE;

    return &Structure_g_tc;
}


RTIBool Structure_initialize(
    Structure* sample) {
  return Structure_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Structure_initialize_ex(
    Structure* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->dato)) {
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

void Structure_finalize(
    Structure* sample)
{
    Structure_finalize_ex(sample,RTI_TRUE);
}
        
void Structure_finalize_ex(
    Structure* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



    DDS_String_free(sample->message);                
            

}

RTIBool Structure_copy(
    Structure* dst,
    const Structure* src)
{        

    if (!RTICdrType_copyLong(
        &dst->dato, &src->dato)) {
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
 * Configure and implement 'Structure' sequence class.
 */
#define T Structure
#define TSeq StructureSeq
#define T_initialize_ex Structure_initialize_ex
#define T_finalize_ex   Structure_finalize_ex
#define T_copy       Structure_copy

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

