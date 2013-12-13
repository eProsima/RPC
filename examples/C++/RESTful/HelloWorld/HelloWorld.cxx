
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HelloWorld.idl using "rtiddsgen".
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



#include "HelloWorld.h"

/* ========================================================================= */
const char *XMLHelloResponseTYPENAME = "XMLHelloResponse";

DDS_TypeCode* XMLHelloResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode XMLHelloResponse_g_tc_xmlRepresentation_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member XMLHelloResponse_g_tc_members[2]=
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

    static DDS_TypeCode XMLHelloResponse_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"XMLHelloResponse", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        XMLHelloResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for XMLHelloResponse*/

    if (is_initialized) {
        return &XMLHelloResponse_g_tc;
    }


    XMLHelloResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    XMLHelloResponse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&XMLHelloResponse_g_tc_xmlRepresentation_string;

    is_initialized = RTI_TRUE;

    return &XMLHelloResponse_g_tc;
}


RTIBool XMLHelloResponse_initialize(
    XMLHelloResponse* sample) {
  return ::XMLHelloResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool XMLHelloResponse_initialize_ex(
    XMLHelloResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
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

void XMLHelloResponse_finalize(
    XMLHelloResponse* sample)
{
    ::XMLHelloResponse_finalize_ex(sample,RTI_TRUE);
}
        
void XMLHelloResponse_finalize_ex(
    XMLHelloResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */



    DDS_String_free(sample->xmlRepresentation);                
            

}

RTIBool XMLHelloResponse_copy(
    XMLHelloResponse* dst,
    const XMLHelloResponse* src)
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
 * Configure and implement 'XMLHelloResponse' sequence class.
 */
#define T XMLHelloResponse
#define TSeq XMLHelloResponseSeq
#define T_initialize_ex ::XMLHelloResponse_initialize_ex
#define T_finalize_ex   ::XMLHelloResponse_finalize_ex
#define T_copy       ::XMLHelloResponse_copy

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
const char *HelloResponseTYPENAME = "HelloResponse";

DDS_TypeCode* HelloResponse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member HelloResponse_g_tc_members[1]=
    {
        {
            (char *)"xmlHelloResponse",/* Member name */
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

    static DDS_TypeCode HelloResponse_g_tc =
    {{
        DDS_TK_UNION,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Default index */
        (char *)"HelloResponse", /* Name */
        NULL, /* Discriminator type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        1, /* Number of members */
        HelloResponse_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for HelloResponse*/

    if (is_initialized) {
        return &HelloResponse_g_tc;
    }


    HelloResponse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)XMLHelloResponse_get_typecode();

    HelloResponse_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long; /* Discriminator type code */

    is_initialized = RTI_TRUE;

    return &HelloResponse_g_tc;
}

DDS_UnsignedLong HelloResponse_getDefaultDiscriminator()
{

    DDS_UnsignedLong tmp = 1;
    
    if (tmp > 1) tmp = 1;
    
    return tmp;

}
        

RTIBool HelloResponse_initialize(
    HelloResponse* sample) {
  return ::HelloResponse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool HelloResponse_initialize_ex(
    HelloResponse* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    sample->_d = HelloResponse_getDefaultDiscriminator();

    if (!XMLHelloResponse_initialize_ex(&sample->_u.xmlHelloResponse,allocatePointers,allocateMemory)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void HelloResponse_finalize(
    HelloResponse* sample)
{
    ::HelloResponse_finalize_ex(sample,RTI_TRUE);
}
        
void HelloResponse_finalize_ex(
    HelloResponse* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    XMLHelloResponse_finalize_ex(&sample->_u.xmlHelloResponse,deletePointers);
            

}

RTIBool HelloResponse_copy(
    HelloResponse* dst,
    const HelloResponse* src)
{        

    if (!RTICdrType_copyLong(
        &dst->_d, &src->_d)) {
        return RTI_FALSE;
    }
            

    switch(src->_d) {
          case 1:
        {                                    
        
    if (!XMLHelloResponse_copy(
        &dst->_u.xmlHelloResponse, &src->_u.xmlHelloResponse)) {
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
 * Configure and implement 'HelloResponse' sequence class.
 */
#define T HelloResponse
#define TSeq HelloResponseSeq
#define T_initialize_ex ::HelloResponse_initialize_ex
#define T_finalize_ex   ::HelloResponse_finalize_ex
#define T_copy       ::HelloResponse_copy

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

