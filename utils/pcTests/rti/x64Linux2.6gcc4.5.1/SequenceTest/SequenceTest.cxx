
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SequenceTest.idl using "rtiddsgen".
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



#include "SequenceTest.h"

/* ========================================================================= */
const char *DatosTYPENAME = "Datos";

DDS_TypeCode* Datos_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Datos_g_tc_message_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member Datos_g_tc_members[2]=
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

    static DDS_TypeCode Datos_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Datos", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Datos_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Datos*/

    if (is_initialized) {
        return &Datos_g_tc;
    }


    Datos_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Datos_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Datos_g_tc_message_string;

    is_initialized = RTI_TRUE;

    return &Datos_g_tc;
}


RTIBool Datos_initialize(
    Datos* sample) {
  return Datos_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Datos_initialize_ex(
    Datos* sample,RTIBool allocatePointers,RTIBool allocateMemory)
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

void Datos_finalize(
    Datos* sample)
{
    Datos_finalize_ex(sample,RTI_TRUE);
}
        
void Datos_finalize_ex(
    Datos* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



    DDS_String_free(sample->message);                
            

}

RTIBool Datos_copy(
    Datos* dst,
    const Datos* src)
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
 * Configure and implement 'Datos' sequence class.
 */
#define T Datos
#define TSeq DatosSeq
#define T_initialize_ex Datos_initialize_ex
#define T_finalize_ex   Datos_finalize_ex
#define T_copy       Datos_copy

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

DDS_TypeCode* largo_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode largo_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(100,NULL);

    static DDS_TypeCode largo_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"largo", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for largo */

    if (is_initialized) {
        return &largo_g_tc;
    }

    largo_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    largo_g_tc._data._typeCode = (RTICdrTypeCode *)&largo_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &largo_g_tc;
}


RTIBool largo_initialize(
    largo* sample)
{
    return largo_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool largo_initialize_ex(
    largo* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */


    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */



    if (allocateMemory) {
        DDS_LongSeq_initialize(sample);
        if (!DDS_LongSeq_set_maximum(sample,
                (100))) {
            return RTI_FALSE;
        }
    } else {
        DDS_LongSeq_set_length(sample, 0); 
    }
            


    return RTI_TRUE;
}

void largo_finalize(
    largo* sample)
{
    largo_finalize_ex(sample,RTI_TRUE);
}
            
void largo_finalize_ex(
    largo* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    DDS_LongSeq_finalize(sample);
            

}


RTIBool largo_copy(
    largo* dst,
    const largo* src)
{

    if (!DDS_LongSeq_copy_no_alloc(dst,
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
 * Configure and implement 'largo' sequence class.
 */
#define T            largo
#define TSeq         largoSeq
#define T_initialize_ex largo_initialize_ex
#define T_finalize_ex   largo_finalize_ex
#define T_copy       largo_copy


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

DDS_TypeCode* cadena_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode cadena_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode cadena_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(100,NULL);

    static DDS_TypeCode cadena_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"cadena", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for cadena */

    if (is_initialized) {
        return &cadena_g_tc;
    }

    cadena_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)&cadena_g_tc_string;
    cadena_g_tc._data._typeCode = (RTICdrTypeCode *)&cadena_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &cadena_g_tc;
}


RTIBool cadena_initialize(
    cadena* sample)
{
    return cadena_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool cadena_initialize_ex(
    cadena* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */


    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */



    if (allocateMemory) {    
        DDS_StringSeq_initialize(sample);
        if (!DDS_StringSeq_set_maximum(sample,
                                       (100))) {
            return RTI_FALSE;
        }
        buffer = DDS_StringSeq_get_contiguous_bufferI(sample);
        if (buffer == NULL) {
            return RTI_FALSE;
        }
        if (!RTICdrType_initStringArray(buffer, (100),(255)+1,
            RTI_CDR_CHAR_TYPE)) {
            return RTI_FALSE;
        }
    } else {
        DDS_StringSeq_set_length(sample, 0);
    }
            


    return RTI_TRUE;
}

void cadena_finalize(
    cadena* sample)
{
    cadena_finalize_ex(sample,RTI_TRUE);
}
            
void cadena_finalize_ex(
    cadena* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    DDS_StringSeq_finalize(sample);
            

}


RTIBool cadena_copy(
    cadena* dst,
    const cadena* src)
{

    if (!DDS_StringSeq_copy_no_alloc(dst,
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
 * Configure and implement 'cadena' sequence class.
 */
#define T            cadena
#define TSeq         cadenaSeq
#define T_initialize_ex cadena_initialize_ex
#define T_finalize_ex   cadena_finalize_ex
#define T_copy       cadena_copy


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

DDS_TypeCode* dattos_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode dattos_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(100,NULL);

    static DDS_TypeCode dattos_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"dattos", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for dattos */

    if (is_initialized) {
        return &dattos_g_tc;
    }

    dattos_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)Datos_get_typecode();
    dattos_g_tc._data._typeCode = (RTICdrTypeCode *)&dattos_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &dattos_g_tc;
}


RTIBool dattos_initialize(
    dattos* sample)
{
    return dattos_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool dattos_initialize_ex(
    dattos* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */


    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */



    if (allocateMemory) {
        DatosSeq_initialize(sample);
        DatosSeq_set_element_pointers_allocation(sample,allocatePointers);
        if (!DatosSeq_set_maximum(sample,
                                           (100))) {
            return RTI_FALSE;
        }
    } else {
        DatosSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void dattos_finalize(
    dattos* sample)
{
    dattos_finalize_ex(sample,RTI_TRUE);
}
            
void dattos_finalize_ex(
    dattos* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    DatosSeq_finalize(sample);
            

}


RTIBool dattos_copy(
    dattos* dst,
    const dattos* src)
{

    if (!DatosSeq_copy_no_alloc(dst,
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
 * Configure and implement 'dattos' sequence class.
 */
#define T            dattos
#define TSeq         dattosSeq
#define T_initialize_ex dattos_initialize_ex
#define T_finalize_ex   dattos_finalize_ex
#define T_copy       dattos_copy


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

