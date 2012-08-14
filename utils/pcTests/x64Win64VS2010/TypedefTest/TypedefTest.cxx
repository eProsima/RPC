
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TypedefTest.idl using "rtiddsgen".
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



#include "TypedefTest.h"

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
  return Datos_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool Datos_initialize_ex(
    Datos* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RTICdrType_initLong(&sample->count)) {
        return RTI_FALSE;
    }                
            
    sample->message = DDS_String_alloc((255));
    if (sample->message == NULL) {
        return RTI_FALSE;
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

    largo_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Content type code */

    is_initialized = RTI_TRUE;

    return &largo_g_tc;
}


RTIBool largo_initialize(
    largo* sample)
{
    return largo_initialize_ex(sample,RTI_TRUE);
}

RTIBool largo_initialize_ex(
    largo* sample,RTIBool allocatePointers)
{


    if (allocatePointers) {} /* To avoid warnings */



    if (!RTICdrType_initLong(sample)) {
        return RTI_FALSE;
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


}


RTIBool largo_copy(
    largo* dst,
    const largo* src)
{

    if (!RTICdrType_copyLong(
        dst, src)) {
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

DDS_TypeCode* DatosDef_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode DatosDef_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"DatosDef", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DatosDef */

    if (is_initialized) {
        return &DatosDef_g_tc;
    }

    DatosDef_g_tc._data._typeCode = (RTICdrTypeCode *)Datos_get_typecode(); /* Content type code */

    is_initialized = RTI_TRUE;

    return &DatosDef_g_tc;
}


RTIBool DatosDef_initialize(
    DatosDef* sample)
{
    return DatosDef_initialize_ex(sample,RTI_TRUE);
}

RTIBool DatosDef_initialize_ex(
    DatosDef* sample,RTIBool allocatePointers)
{


    if (allocatePointers) {} /* To avoid warnings */



    if (!Datos_initialize_ex(sample,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void DatosDef_finalize(
    DatosDef* sample)
{
    DatosDef_finalize_ex(sample,RTI_TRUE);
}
            
void DatosDef_finalize_ex(
    DatosDef* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Datos_finalize_ex(sample,deletePointers);
            
}


RTIBool DatosDef_copy(
    DatosDef* dst,
    const DatosDef* src)
{

    if (!Datos_copy(
        dst, src)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'DatosDef' sequence class.
 */
#define T            DatosDef
#define TSeq         DatosDefSeq
#define T_initialize_ex DatosDef_initialize_ex
#define T_finalize_ex   DatosDef_finalize_ex
#define T_copy       DatosDef_copy


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

    cadena_g_tc._data._typeCode = (RTICdrTypeCode *)&cadena_g_tc_string; /* Content type code */

    is_initialized = RTI_TRUE;

    return &cadena_g_tc;
}


RTIBool cadena_initialize(
    cadena* sample)
{
    return cadena_initialize_ex(sample,RTI_TRUE);
}

RTIBool cadena_initialize_ex(
    cadena* sample,RTIBool allocatePointers)
{


    if (allocatePointers) {} /* To avoid warnings */



    (*sample) = DDS_String_alloc((255));
    if ((*sample) == NULL) {
        return RTI_FALSE;
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


    DDS_String_free((*sample));                
            
}


RTIBool cadena_copy(
    cadena* dst,
    const cadena* src)
{

    if (!RTICdrType_copyString(
        (*dst), (*src), (255) + 1)) {
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

DDS_TypeCode* larguisimo_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode larguisimo_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"larguisimo", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for larguisimo */

    if (is_initialized) {
        return &larguisimo_g_tc;
    }

    larguisimo_g_tc._data._typeCode = (RTICdrTypeCode *)largo_get_typecode(); /* Content type code */

    is_initialized = RTI_TRUE;

    return &larguisimo_g_tc;
}


RTIBool larguisimo_initialize(
    larguisimo* sample)
{
    return larguisimo_initialize_ex(sample,RTI_TRUE);
}

RTIBool larguisimo_initialize_ex(
    larguisimo* sample,RTIBool allocatePointers)
{


    if (allocatePointers) {} /* To avoid warnings */



    if (!largo_initialize_ex(sample,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void larguisimo_finalize(
    larguisimo* sample)
{
    larguisimo_finalize_ex(sample,RTI_TRUE);
}
            
void larguisimo_finalize_ex(
    larguisimo* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    largo_finalize_ex(sample,deletePointers);
            
}


RTIBool larguisimo_copy(
    larguisimo* dst,
    const larguisimo* src)
{

    if (!largo_copy(
        dst, src)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'larguisimo' sequence class.
 */
#define T            larguisimo
#define TSeq         larguisimoSeq
#define T_initialize_ex larguisimo_initialize_ex
#define T_finalize_ex   larguisimo_finalize_ex
#define T_copy       larguisimo_copy


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

DDS_TypeCode* DatosDefondo_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode DatosDefondo_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"DatosDefondo", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DatosDefondo */

    if (is_initialized) {
        return &DatosDefondo_g_tc;
    }

    DatosDefondo_g_tc._data._typeCode = (RTICdrTypeCode *)DatosDef_get_typecode(); /* Content type code */

    is_initialized = RTI_TRUE;

    return &DatosDefondo_g_tc;
}


RTIBool DatosDefondo_initialize(
    DatosDefondo* sample)
{
    return DatosDefondo_initialize_ex(sample,RTI_TRUE);
}

RTIBool DatosDefondo_initialize_ex(
    DatosDefondo* sample,RTIBool allocatePointers)
{


    if (allocatePointers) {} /* To avoid warnings */



    if (!DatosDef_initialize_ex(sample,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void DatosDefondo_finalize(
    DatosDefondo* sample)
{
    DatosDefondo_finalize_ex(sample,RTI_TRUE);
}
            
void DatosDefondo_finalize_ex(
    DatosDefondo* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    DatosDef_finalize_ex(sample,deletePointers);
            
}


RTIBool DatosDefondo_copy(
    DatosDefondo* dst,
    const DatosDefondo* src)
{

    if (!DatosDef_copy(
        dst, src)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'DatosDefondo' sequence class.
 */
#define T            DatosDefondo
#define TSeq         DatosDefondoSeq
#define T_initialize_ex DatosDefondo_initialize_ex
#define T_finalize_ex   DatosDefondo_finalize_ex
#define T_copy       DatosDefondo_copy


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

DDS_TypeCode* correa_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode correa_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"correa", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for correa */

    if (is_initialized) {
        return &correa_g_tc;
    }

    correa_g_tc._data._typeCode = (RTICdrTypeCode *)cadena_get_typecode(); /* Content type code */

    is_initialized = RTI_TRUE;

    return &correa_g_tc;
}


RTIBool correa_initialize(
    correa* sample)
{
    return correa_initialize_ex(sample,RTI_TRUE);
}

RTIBool correa_initialize_ex(
    correa* sample,RTIBool allocatePointers)
{


    if (allocatePointers) {} /* To avoid warnings */



    if (!cadena_initialize_ex(sample,allocatePointers)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void correa_finalize(
    correa* sample)
{
    correa_finalize_ex(sample,RTI_TRUE);
}
            
void correa_finalize_ex(
    correa* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    cadena_finalize_ex(sample,deletePointers);
            
}


RTIBool correa_copy(
    correa* dst,
    const correa* src)
{

    if (!cadena_copy(
        dst, src)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'correa' sequence class.
 */
#define T            correa
#define TSeq         correaSeq
#define T_initialize_ex correa_initialize_ex
#define T_finalize_ex   correa_finalize_ex
#define T_copy       correa_copy


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

