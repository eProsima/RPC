
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from UnionTest.idl using "rtiddsgen".
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



#include "UnionTest.h"

/* ========================================================================= */
const char *EmpleadoTYPENAME = "Empleado";

DDS_TypeCode* Empleado_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Empleado_g_tc_name_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member Empleado_g_tc_members[2]=
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
            1, /* Number of labels */
            1, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
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
            1, /* Number of labels */
            2, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode Empleado_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Default index */
        (char *)"Empleado", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        Empleado_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Empleado*/

    if (is_initialized) {
        return &Empleado_g_tc;
    }


    Empleado_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    Empleado_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Empleado_g_tc_name_string;

    Empleado_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &Empleado_g_tc;
}


RTIBool Empleado_initialize(
    Empleado* sample) {
  return Empleado_initialize_ex(sample,RTI_TRUE);
}
        
RTIBool Empleado_initialize_ex(
    Empleado* sample,RTIBool allocatePointers)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */


    if (!RTICdrType_initLong(&sample->_u.id)) {
        return RTI_FALSE;
    }                
            
    sample->_u.name = DDS_String_alloc((255));
    if (sample->_u.name == NULL) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}

void Empleado_finalize(
    Empleado* sample)
{
    Empleado_finalize_ex(sample,RTI_TRUE);
}
        
void Empleado_finalize_ex(
    Empleado* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    DDS_String_free(sample->_u.name);                
            
}

RTIBool Empleado_copy(
    Empleado* dst,
    const Empleado* src)
{        

    if (!RTICdrType_copyChar(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            
    switch(src->_d) {
          case 1:
        {                                    
        
    if (!RTICdrType_copyLong(
        &dst->_u.id, &src->_u.id)) {
        return RTI_FALSE;
    }
            
        } break;
      case 2:
        {                                    
        
    if (!RTICdrType_copyString(
        dst->_u.name, src->_u.name, (255) + 1)) {
        return RTI_FALSE;
    }
            
        } break;
              
    }
      

    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Empleado' sequence class.
 */
#define T Empleado
#define TSeq EmpleadoSeq
#define T_initialize_ex Empleado_initialize_ex
#define T_finalize_ex   Empleado_finalize_ex
#define T_copy       Empleado_copy

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

