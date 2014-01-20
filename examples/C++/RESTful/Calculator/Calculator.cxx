
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Calculator.idl using "rtiddsgen".
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



#include "Calculator.h"


namespace Calculator{
/* ========================================================================= */
const char *EmptyAddResponseTYPENAME = "Calculator::EmptyAddResponse";

DDS_TypeCode* EmptyAddResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member EmptyAddResponse_g_tc_members[1]=
    {
        {
            (char *)"status",/* Member name */
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

    static DDS_TypeCode EmptyAddResponse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator::EmptyAddResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        EmptyAddResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EmptyAddResponse*/

    if (is_initialized) {
        return &EmptyAddResponse_g_tc;
    }


    EmptyAddResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &EmptyAddResponse_g_tc;
}


RTIBool EmptyAddResponse_initialize(
    EmptyAddResponse* sample) {
  return ::Calculator::EmptyAddResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool EmptyAddResponse_initialize_ex(
    EmptyAddResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->status)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void EmptyAddResponse_finalize(
    EmptyAddResponse* sample)
{
    ::Calculator::EmptyAddResponse_finalize_ex(sample,RTI_TRUE);
}
        
void EmptyAddResponse_finalize_ex(
    EmptyAddResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



}

RTIBool EmptyAddResponse_copy(
    EmptyAddResponse* dst,
    const EmptyAddResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EmptyAddResponse' sequence class.
 */
#define T EmptyAddResponse
#define TSeq EmptyAddResponseSeq
#define T_initialize_ex ::Calculator::EmptyAddResponse_initialize_ex
#define T_finalize_ex   ::Calculator::EmptyAddResponse_finalize_ex
#define T_copy       ::Calculator::EmptyAddResponse_copy

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
const char *XMLAddResponseTYPENAME = "Calculator::XMLAddResponse";

DDS_TypeCode* XMLAddResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode XMLAddResponse_g_tc_xmlRepresentation_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member XMLAddResponse_g_tc_members[2]=
    {
        {
            (char *)"status",/* Member name */
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
            (char *)"xmlRepresentation",/* Member name */
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

    static DDS_TypeCode XMLAddResponse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator::XMLAddResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        XMLAddResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for XMLAddResponse*/

    if (is_initialized) {
        return &XMLAddResponse_g_tc;
    }


    XMLAddResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    XMLAddResponse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&XMLAddResponse_g_tc_xmlRepresentation_string;

    is_initialized = RTI_TRUE;

    return &XMLAddResponse_g_tc;
}


RTIBool XMLAddResponse_initialize(
    XMLAddResponse* sample) {
  return ::Calculator::XMLAddResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool XMLAddResponse_initialize_ex(
    XMLAddResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->status)) {
        return RTI_FALSE;
    }                
            

    if (allocateMemory) {
        sample->xmlRepresentation = DDS_String_alloc((255));
        if (sample->xmlRepresentation == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->xmlRepresentation != NULL) { 
            sample->xmlRepresentation[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void XMLAddResponse_finalize(
    XMLAddResponse* sample)
{
    ::Calculator::XMLAddResponse_finalize_ex(sample,RTI_TRUE);
}
        
void XMLAddResponse_finalize_ex(
    XMLAddResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



    DDS_String_free(sample->xmlRepresentation);                
            

}

RTIBool XMLAddResponse_copy(
    XMLAddResponse* dst,
    const XMLAddResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->xmlRepresentation, src->xmlRepresentation, (255) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'XMLAddResponse' sequence class.
 */
#define T XMLAddResponse
#define TSeq XMLAddResponseSeq
#define T_initialize_ex ::Calculator::XMLAddResponse_initialize_ex
#define T_finalize_ex   ::Calculator::XMLAddResponse_finalize_ex
#define T_copy       ::Calculator::XMLAddResponse_copy

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
const char *AddResponseTYPENAME = "Calculator::AddResponse";

DDS_TypeCode* AddResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member AddResponse_g_tc_members[2]=
    {
        {
            (char *)"emptyAddResponse",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            0, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"xmlAddResponse",/* Member name */
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
        }
    };

    static DDS_TypeCode AddResponse_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Default index */
        (char *)"Calculator::AddResponse", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        AddResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for AddResponse*/

    if (is_initialized) {
        return &AddResponse_g_tc;
    }


    AddResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Calculator::EmptyAddResponse_get_typecode();
    AddResponse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Calculator::XMLAddResponse_get_typecode();

    AddResponse_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &AddResponse_g_tc;
}

DDS_UnsignedLong AddResponse_getDefaultDiscriminator()
{

    DDS_UnsignedLong tmp = 0;
    
    if (tmp > 0) tmp = 0;
    
    if (tmp > 1) tmp = 1;
    
    return tmp;

}
        

RTIBool AddResponse_initialize(
    AddResponse* sample) {
  return ::Calculator::AddResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool AddResponse_initialize_ex(
    AddResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    sample->_d = AddResponse_getDefaultDiscriminator();

    if (!Calculator::EmptyAddResponse_initialize_ex(&sample->_u.emptyAddResponse,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!Calculator::XMLAddResponse_initialize_ex(&sample->_u.xmlAddResponse,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void AddResponse_finalize(
    AddResponse* sample)
{
    ::Calculator::AddResponse_finalize_ex(sample,RTI_TRUE);
}
        
void AddResponse_finalize_ex(
    AddResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Calculator::EmptyAddResponse_finalize_ex(&sample->_u.emptyAddResponse,deletePointers);
            

    Calculator::XMLAddResponse_finalize_ex(&sample->_u.xmlAddResponse,deletePointers);
            

}

RTIBool AddResponse_copy(
    AddResponse* dst,
    const AddResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          case 0:
        {                                    
        
    if (!Calculator::EmptyAddResponse_copy(
        &dst->_u.emptyAddResponse, &src->_u.emptyAddResponse)) {
        return RTI_FALSE;
    }
            

        } break;
      case 1:
        {                                    
        
    if (!Calculator::XMLAddResponse_copy(
        &dst->_u.xmlAddResponse, &src->_u.xmlAddResponse)) {
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
 * Configure and implement 'AddResponse' sequence class.
 */
#define T AddResponse
#define TSeq AddResponseSeq
#define T_initialize_ex ::Calculator::AddResponse_initialize_ex
#define T_finalize_ex   ::Calculator::AddResponse_finalize_ex
#define T_copy       ::Calculator::AddResponse_copy

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
const char *EmptySubstractResponseTYPENAME = "Calculator::EmptySubstractResponse";

DDS_TypeCode* EmptySubstractResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member EmptySubstractResponse_g_tc_members[1]=
    {
        {
            (char *)"status",/* Member name */
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

    static DDS_TypeCode EmptySubstractResponse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator::EmptySubstractResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        EmptySubstractResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EmptySubstractResponse*/

    if (is_initialized) {
        return &EmptySubstractResponse_g_tc;
    }


    EmptySubstractResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &EmptySubstractResponse_g_tc;
}


RTIBool EmptySubstractResponse_initialize(
    EmptySubstractResponse* sample) {
  return ::Calculator::EmptySubstractResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool EmptySubstractResponse_initialize_ex(
    EmptySubstractResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->status)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void EmptySubstractResponse_finalize(
    EmptySubstractResponse* sample)
{
    ::Calculator::EmptySubstractResponse_finalize_ex(sample,RTI_TRUE);
}
        
void EmptySubstractResponse_finalize_ex(
    EmptySubstractResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



}

RTIBool EmptySubstractResponse_copy(
    EmptySubstractResponse* dst,
    const EmptySubstractResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EmptySubstractResponse' sequence class.
 */
#define T EmptySubstractResponse
#define TSeq EmptySubstractResponseSeq
#define T_initialize_ex ::Calculator::EmptySubstractResponse_initialize_ex
#define T_finalize_ex   ::Calculator::EmptySubstractResponse_finalize_ex
#define T_copy       ::Calculator::EmptySubstractResponse_copy

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
const char *XMLSubstractResponseTYPENAME = "Calculator::XMLSubstractResponse";

DDS_TypeCode* XMLSubstractResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode XMLSubstractResponse_g_tc_xmlRepresentation_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member XMLSubstractResponse_g_tc_members[2]=
    {
        {
            (char *)"status",/* Member name */
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
            (char *)"xmlRepresentation",/* Member name */
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

    static DDS_TypeCode XMLSubstractResponse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator::XMLSubstractResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        XMLSubstractResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for XMLSubstractResponse*/

    if (is_initialized) {
        return &XMLSubstractResponse_g_tc;
    }


    XMLSubstractResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    XMLSubstractResponse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&XMLSubstractResponse_g_tc_xmlRepresentation_string;

    is_initialized = RTI_TRUE;

    return &XMLSubstractResponse_g_tc;
}


RTIBool XMLSubstractResponse_initialize(
    XMLSubstractResponse* sample) {
  return ::Calculator::XMLSubstractResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool XMLSubstractResponse_initialize_ex(
    XMLSubstractResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->status)) {
        return RTI_FALSE;
    }                
            

    if (allocateMemory) {
        sample->xmlRepresentation = DDS_String_alloc((255));
        if (sample->xmlRepresentation == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->xmlRepresentation != NULL) { 
            sample->xmlRepresentation[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void XMLSubstractResponse_finalize(
    XMLSubstractResponse* sample)
{
    ::Calculator::XMLSubstractResponse_finalize_ex(sample,RTI_TRUE);
}
        
void XMLSubstractResponse_finalize_ex(
    XMLSubstractResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



    DDS_String_free(sample->xmlRepresentation);                
            

}

RTIBool XMLSubstractResponse_copy(
    XMLSubstractResponse* dst,
    const XMLSubstractResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->xmlRepresentation, src->xmlRepresentation, (255) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'XMLSubstractResponse' sequence class.
 */
#define T XMLSubstractResponse
#define TSeq XMLSubstractResponseSeq
#define T_initialize_ex ::Calculator::XMLSubstractResponse_initialize_ex
#define T_finalize_ex   ::Calculator::XMLSubstractResponse_finalize_ex
#define T_copy       ::Calculator::XMLSubstractResponse_copy

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
const char *SubstractResponseTYPENAME = "Calculator::SubstractResponse";

DDS_TypeCode* SubstractResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SubstractResponse_g_tc_members[2]=
    {
        {
            (char *)"emptySubstractResponse",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            0, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"xmlSubstractResponse",/* Member name */
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
        }
    };

    static DDS_TypeCode SubstractResponse_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Default index */
        (char *)"Calculator::SubstractResponse", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SubstractResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SubstractResponse*/

    if (is_initialized) {
        return &SubstractResponse_g_tc;
    }


    SubstractResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Calculator::EmptySubstractResponse_get_typecode();
    SubstractResponse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Calculator::XMLSubstractResponse_get_typecode();

    SubstractResponse_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &SubstractResponse_g_tc;
}

DDS_UnsignedLong SubstractResponse_getDefaultDiscriminator()
{

    DDS_UnsignedLong tmp = 0;
    
    if (tmp > 0) tmp = 0;
    
    if (tmp > 1) tmp = 1;
    
    return tmp;

}
        

RTIBool SubstractResponse_initialize(
    SubstractResponse* sample) {
  return ::Calculator::SubstractResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SubstractResponse_initialize_ex(
    SubstractResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    sample->_d = SubstractResponse_getDefaultDiscriminator();

    if (!Calculator::EmptySubstractResponse_initialize_ex(&sample->_u.emptySubstractResponse,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!Calculator::XMLSubstractResponse_initialize_ex(&sample->_u.xmlSubstractResponse,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void SubstractResponse_finalize(
    SubstractResponse* sample)
{
    ::Calculator::SubstractResponse_finalize_ex(sample,RTI_TRUE);
}
        
void SubstractResponse_finalize_ex(
    SubstractResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Calculator::EmptySubstractResponse_finalize_ex(&sample->_u.emptySubstractResponse,deletePointers);
            

    Calculator::XMLSubstractResponse_finalize_ex(&sample->_u.xmlSubstractResponse,deletePointers);
            

}

RTIBool SubstractResponse_copy(
    SubstractResponse* dst,
    const SubstractResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          case 0:
        {                                    
        
    if (!Calculator::EmptySubstractResponse_copy(
        &dst->_u.emptySubstractResponse, &src->_u.emptySubstractResponse)) {
        return RTI_FALSE;
    }
            

        } break;
      case 1:
        {                                    
        
    if (!Calculator::XMLSubstractResponse_copy(
        &dst->_u.xmlSubstractResponse, &src->_u.xmlSubstractResponse)) {
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
 * Configure and implement 'SubstractResponse' sequence class.
 */
#define T SubstractResponse
#define TSeq SubstractResponseSeq
#define T_initialize_ex ::Calculator::SubstractResponse_initialize_ex
#define T_finalize_ex   ::Calculator::SubstractResponse_finalize_ex
#define T_copy       ::Calculator::SubstractResponse_copy

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
const char *EmptyMultiplyResponseTYPENAME = "Calculator::EmptyMultiplyResponse";

DDS_TypeCode* EmptyMultiplyResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member EmptyMultiplyResponse_g_tc_members[1]=
    {
        {
            (char *)"status",/* Member name */
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

    static DDS_TypeCode EmptyMultiplyResponse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator::EmptyMultiplyResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        EmptyMultiplyResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EmptyMultiplyResponse*/

    if (is_initialized) {
        return &EmptyMultiplyResponse_g_tc;
    }


    EmptyMultiplyResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &EmptyMultiplyResponse_g_tc;
}


RTIBool EmptyMultiplyResponse_initialize(
    EmptyMultiplyResponse* sample) {
  return ::Calculator::EmptyMultiplyResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool EmptyMultiplyResponse_initialize_ex(
    EmptyMultiplyResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->status)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void EmptyMultiplyResponse_finalize(
    EmptyMultiplyResponse* sample)
{
    ::Calculator::EmptyMultiplyResponse_finalize_ex(sample,RTI_TRUE);
}
        
void EmptyMultiplyResponse_finalize_ex(
    EmptyMultiplyResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



}

RTIBool EmptyMultiplyResponse_copy(
    EmptyMultiplyResponse* dst,
    const EmptyMultiplyResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EmptyMultiplyResponse' sequence class.
 */
#define T EmptyMultiplyResponse
#define TSeq EmptyMultiplyResponseSeq
#define T_initialize_ex ::Calculator::EmptyMultiplyResponse_initialize_ex
#define T_finalize_ex   ::Calculator::EmptyMultiplyResponse_finalize_ex
#define T_copy       ::Calculator::EmptyMultiplyResponse_copy

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
const char *XMLMultiplyResponseTYPENAME = "Calculator::XMLMultiplyResponse";

DDS_TypeCode* XMLMultiplyResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode XMLMultiplyResponse_g_tc_xmlRepresentation_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member XMLMultiplyResponse_g_tc_members[2]=
    {
        {
            (char *)"status",/* Member name */
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
            (char *)"xmlRepresentation",/* Member name */
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

    static DDS_TypeCode XMLMultiplyResponse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator::XMLMultiplyResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        XMLMultiplyResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for XMLMultiplyResponse*/

    if (is_initialized) {
        return &XMLMultiplyResponse_g_tc;
    }


    XMLMultiplyResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    XMLMultiplyResponse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&XMLMultiplyResponse_g_tc_xmlRepresentation_string;

    is_initialized = RTI_TRUE;

    return &XMLMultiplyResponse_g_tc;
}


RTIBool XMLMultiplyResponse_initialize(
    XMLMultiplyResponse* sample) {
  return ::Calculator::XMLMultiplyResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool XMLMultiplyResponse_initialize_ex(
    XMLMultiplyResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->status)) {
        return RTI_FALSE;
    }                
            

    if (allocateMemory) {
        sample->xmlRepresentation = DDS_String_alloc((255));
        if (sample->xmlRepresentation == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->xmlRepresentation != NULL) { 
            sample->xmlRepresentation[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void XMLMultiplyResponse_finalize(
    XMLMultiplyResponse* sample)
{
    ::Calculator::XMLMultiplyResponse_finalize_ex(sample,RTI_TRUE);
}
        
void XMLMultiplyResponse_finalize_ex(
    XMLMultiplyResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



    DDS_String_free(sample->xmlRepresentation);                
            

}

RTIBool XMLMultiplyResponse_copy(
    XMLMultiplyResponse* dst,
    const XMLMultiplyResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->xmlRepresentation, src->xmlRepresentation, (255) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'XMLMultiplyResponse' sequence class.
 */
#define T XMLMultiplyResponse
#define TSeq XMLMultiplyResponseSeq
#define T_initialize_ex ::Calculator::XMLMultiplyResponse_initialize_ex
#define T_finalize_ex   ::Calculator::XMLMultiplyResponse_finalize_ex
#define T_copy       ::Calculator::XMLMultiplyResponse_copy

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
const char *MultiplyResponseTYPENAME = "Calculator::MultiplyResponse";

DDS_TypeCode* MultiplyResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member MultiplyResponse_g_tc_members[2]=
    {
        {
            (char *)"emptyMultiplyResponse",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            0, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"xmlMultiplyResponse",/* Member name */
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
        }
    };

    static DDS_TypeCode MultiplyResponse_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Default index */
        (char *)"Calculator::MultiplyResponse", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        MultiplyResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MultiplyResponse*/

    if (is_initialized) {
        return &MultiplyResponse_g_tc;
    }


    MultiplyResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Calculator::EmptyMultiplyResponse_get_typecode();
    MultiplyResponse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Calculator::XMLMultiplyResponse_get_typecode();

    MultiplyResponse_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &MultiplyResponse_g_tc;
}

DDS_UnsignedLong MultiplyResponse_getDefaultDiscriminator()
{

    DDS_UnsignedLong tmp = 0;
    
    if (tmp > 0) tmp = 0;
    
    if (tmp > 1) tmp = 1;
    
    return tmp;

}
        

RTIBool MultiplyResponse_initialize(
    MultiplyResponse* sample) {
  return ::Calculator::MultiplyResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool MultiplyResponse_initialize_ex(
    MultiplyResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    sample->_d = MultiplyResponse_getDefaultDiscriminator();

    if (!Calculator::EmptyMultiplyResponse_initialize_ex(&sample->_u.emptyMultiplyResponse,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!Calculator::XMLMultiplyResponse_initialize_ex(&sample->_u.xmlMultiplyResponse,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void MultiplyResponse_finalize(
    MultiplyResponse* sample)
{
    ::Calculator::MultiplyResponse_finalize_ex(sample,RTI_TRUE);
}
        
void MultiplyResponse_finalize_ex(
    MultiplyResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Calculator::EmptyMultiplyResponse_finalize_ex(&sample->_u.emptyMultiplyResponse,deletePointers);
            

    Calculator::XMLMultiplyResponse_finalize_ex(&sample->_u.xmlMultiplyResponse,deletePointers);
            

}

RTIBool MultiplyResponse_copy(
    MultiplyResponse* dst,
    const MultiplyResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          case 0:
        {                                    
        
    if (!Calculator::EmptyMultiplyResponse_copy(
        &dst->_u.emptyMultiplyResponse, &src->_u.emptyMultiplyResponse)) {
        return RTI_FALSE;
    }
            

        } break;
      case 1:
        {                                    
        
    if (!Calculator::XMLMultiplyResponse_copy(
        &dst->_u.xmlMultiplyResponse, &src->_u.xmlMultiplyResponse)) {
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
 * Configure and implement 'MultiplyResponse' sequence class.
 */
#define T MultiplyResponse
#define TSeq MultiplyResponseSeq
#define T_initialize_ex ::Calculator::MultiplyResponse_initialize_ex
#define T_finalize_ex   ::Calculator::MultiplyResponse_finalize_ex
#define T_copy       ::Calculator::MultiplyResponse_copy

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
const char *EmptyDivideResponseTYPENAME = "Calculator::EmptyDivideResponse";

DDS_TypeCode* EmptyDivideResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member EmptyDivideResponse_g_tc_members[1]=
    {
        {
            (char *)"status",/* Member name */
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

    static DDS_TypeCode EmptyDivideResponse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator::EmptyDivideResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        EmptyDivideResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EmptyDivideResponse*/

    if (is_initialized) {
        return &EmptyDivideResponse_g_tc;
    }


    EmptyDivideResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &EmptyDivideResponse_g_tc;
}


RTIBool EmptyDivideResponse_initialize(
    EmptyDivideResponse* sample) {
  return ::Calculator::EmptyDivideResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool EmptyDivideResponse_initialize_ex(
    EmptyDivideResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->status)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void EmptyDivideResponse_finalize(
    EmptyDivideResponse* sample)
{
    ::Calculator::EmptyDivideResponse_finalize_ex(sample,RTI_TRUE);
}
        
void EmptyDivideResponse_finalize_ex(
    EmptyDivideResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



}

RTIBool EmptyDivideResponse_copy(
    EmptyDivideResponse* dst,
    const EmptyDivideResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EmptyDivideResponse' sequence class.
 */
#define T EmptyDivideResponse
#define TSeq EmptyDivideResponseSeq
#define T_initialize_ex ::Calculator::EmptyDivideResponse_initialize_ex
#define T_finalize_ex   ::Calculator::EmptyDivideResponse_finalize_ex
#define T_copy       ::Calculator::EmptyDivideResponse_copy

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
const char *XMLDivideResponseTYPENAME = "Calculator::XMLDivideResponse";

DDS_TypeCode* XMLDivideResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode XMLDivideResponse_g_tc_xmlRepresentation_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member XMLDivideResponse_g_tc_members[2]=
    {
        {
            (char *)"status",/* Member name */
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
            (char *)"xmlRepresentation",/* Member name */
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

    static DDS_TypeCode XMLDivideResponse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Calculator::XMLDivideResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        XMLDivideResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for XMLDivideResponse*/

    if (is_initialized) {
        return &XMLDivideResponse_g_tc;
    }


    XMLDivideResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    XMLDivideResponse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&XMLDivideResponse_g_tc_xmlRepresentation_string;

    is_initialized = RTI_TRUE;

    return &XMLDivideResponse_g_tc;
}


RTIBool XMLDivideResponse_initialize(
    XMLDivideResponse* sample) {
  return ::Calculator::XMLDivideResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool XMLDivideResponse_initialize_ex(
    XMLDivideResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->status)) {
        return RTI_FALSE;
    }                
            

    if (allocateMemory) {
        sample->xmlRepresentation = DDS_String_alloc((255));
        if (sample->xmlRepresentation == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->xmlRepresentation != NULL) { 
            sample->xmlRepresentation[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void XMLDivideResponse_finalize(
    XMLDivideResponse* sample)
{
    ::Calculator::XMLDivideResponse_finalize_ex(sample,RTI_TRUE);
}
        
void XMLDivideResponse_finalize_ex(
    XMLDivideResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



    DDS_String_free(sample->xmlRepresentation);                
            

}

RTIBool XMLDivideResponse_copy(
    XMLDivideResponse* dst,
    const XMLDivideResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->status, &src->status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->xmlRepresentation, src->xmlRepresentation, (255) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'XMLDivideResponse' sequence class.
 */
#define T XMLDivideResponse
#define TSeq XMLDivideResponseSeq
#define T_initialize_ex ::Calculator::XMLDivideResponse_initialize_ex
#define T_finalize_ex   ::Calculator::XMLDivideResponse_finalize_ex
#define T_copy       ::Calculator::XMLDivideResponse_copy

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
const char *DivideResponseTYPENAME = "Calculator::DivideResponse";

DDS_TypeCode* DivideResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member DivideResponse_g_tc_members[2]=
    {
        {
            (char *)"emptyDivideResponse",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            1, /* Number of labels */
            0, /* First label */
            NULL, /* Labels (it is NULL when there is only one label)*/
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"xmlDivideResponse",/* Member name */
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
        }
    };

    static DDS_TypeCode DivideResponse_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Default index */
        (char *)"Calculator::DivideResponse", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        DivideResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DivideResponse*/

    if (is_initialized) {
        return &DivideResponse_g_tc;
    }


    DivideResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)Calculator::EmptyDivideResponse_get_typecode();
    DivideResponse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)Calculator::XMLDivideResponse_get_typecode();

    DivideResponse_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &DivideResponse_g_tc;
}

DDS_UnsignedLong DivideResponse_getDefaultDiscriminator()
{

    DDS_UnsignedLong tmp = 0;
    
    if (tmp > 0) tmp = 0;
    
    if (tmp > 1) tmp = 1;
    
    return tmp;

}
        

RTIBool DivideResponse_initialize(
    DivideResponse* sample) {
  return ::Calculator::DivideResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool DivideResponse_initialize_ex(
    DivideResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    sample->_d = DivideResponse_getDefaultDiscriminator();

    if (!Calculator::EmptyDivideResponse_initialize_ex(&sample->_u.emptyDivideResponse,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            

    if (!Calculator::XMLDivideResponse_initialize_ex(&sample->_u.xmlDivideResponse,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void DivideResponse_finalize(
    DivideResponse* sample)
{
    ::Calculator::DivideResponse_finalize_ex(sample,RTI_TRUE);
}
        
void DivideResponse_finalize_ex(
    DivideResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    Calculator::EmptyDivideResponse_finalize_ex(&sample->_u.emptyDivideResponse,deletePointers);
            

    Calculator::XMLDivideResponse_finalize_ex(&sample->_u.xmlDivideResponse,deletePointers);
            

}

RTIBool DivideResponse_copy(
    DivideResponse* dst,
    const DivideResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          case 0:
        {                                    
        
    if (!Calculator::EmptyDivideResponse_copy(
        &dst->_u.emptyDivideResponse, &src->_u.emptyDivideResponse)) {
        return RTI_FALSE;
    }
            

        } break;
      case 1:
        {                                    
        
    if (!Calculator::XMLDivideResponse_copy(
        &dst->_u.xmlDivideResponse, &src->_u.xmlDivideResponse)) {
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
 * Configure and implement 'DivideResponse' sequence class.
 */
#define T DivideResponse
#define TSeq DivideResponseSeq
#define T_initialize_ex ::Calculator::DivideResponse_initialize_ex
#define T_finalize_ex   ::Calculator::DivideResponse_finalize_ex
#define T_copy       ::Calculator::DivideResponse_copy

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


} /* namespace Calculator */
