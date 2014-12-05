#if defined(_WIN32) && defined(NDDS_USER_DLL_EXPORT)
class __declspec(dllimport) DDSDomainEntity;
class __declspec(dllimport) DDSEntity;
#endif

/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Latency.idl using "rtiddsgen".
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



#include "Latency.h"

/* ========================================================================= */
const char *elementTYPENAME = "element";

DDS_TypeCode* element_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode element_g_tc_att2_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member element_g_tc_members[5]=
    {
        {
            (char *)"att1",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"att2",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"att3",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"att4",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"att5",/* Member name */
            {
                4,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode element_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"element", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        element_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for element*/

    if (is_initialized) {
        return &element_g_tc;
    }


    element_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    element_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&element_g_tc_att2_string;
    element_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    element_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;
    element_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &element_g_tc;
}


RTIBool element_initialize(
    element* sample) {
  return ::element_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool element_initialize_ex(
    element* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::element_initialize_w_params(
        sample,&allocParams);
}

RTIBool element_initialize_w_params(
        element* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initBoolean(&sample->att1)) {
        return RTI_FALSE;
    }                
            

    if (allocParams->allocate_memory) {
        sample->att2 = DDS_String_alloc((255));
        if (sample->att2 == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->att2 != NULL) { 
            sample->att2[0] = '\0';
        }
    }
            

    if (!RTICdrType_initLong(&sample->att3)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initShort(&sample->att4)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->att5)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void element_finalize(
    element* sample)
{
    ::element_finalize_ex(sample,RTI_TRUE);
}
        
void element_finalize_ex(
    element* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::element_finalize_w_params(
        sample,&deallocParams);
}

void element_finalize_w_params(
        element* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    if (sample->att2 != NULL) {    
        DDS_String_free(sample->att2);
        sample->att2 = NULL;
    }
            




}

void element_finalize_optional_members(
    element* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             






}

RTIBool element_copy(
    element* dst,
    const element* src)
{

    if (!RTICdrType_copyBoolean(
        &dst->att1, &src->att1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->att2, src->att2, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->att3, &src->att3)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyShort(
        &dst->att4, &src->att4)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->att5, &src->att5)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'element' sequence class.
 */
#define T element
#define TSeq elementSeq
#define T_initialize_w_params ::element_initialize_w_params
#define T_finalize_w_params   ::element_finalize_w_params
#define T_copy       ::element_copy

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
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* st_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode st_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(2048,NULL);

    static DDS_TypeCode st_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"st", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for st */

    if (is_initialized) {
        return &st_g_tc;
    }

    st_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)element_get_typecode();
    st_g_tc._data._typeCode = (RTICdrTypeCode *)&st_g_tc_sequence; /* Content type code */

    is_initialized = RTI_TRUE;

    return &st_g_tc;
}


RTIBool st_initialize(
    st* sample)
{
    return ::st_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool st_initialize_ex(
    st* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::st_initialize_w_params(
        sample,&allocParams);
}

RTIBool st_initialize_w_params(
        st* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (allocParams->allocate_memory) {
        elementSeq_initialize(sample);
        elementSeq_set_element_allocation_params(sample,allocParams);
        if (!elementSeq_set_maximum(sample,
                                           (2048))) {
            return RTI_FALSE;
        }
    } else {
        elementSeq_set_length(sample,0);
    }
            


    return RTI_TRUE;
}

void st_finalize(
    st* sample)
{
    ::st_finalize_ex(sample,RTI_TRUE);
}
 
void st_finalize_ex(
    st* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::st_finalize_w_params(
        sample,&deallocParams);
}
           
void st_finalize_w_params(
    st* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */


    elementSeq_set_element_deallocation_params(sample,deallocParams);
    elementSeq_finalize(sample);
            

}

void st_finalize_optional_members(
    st* sample, RTIBool deletePointers)
{   
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
     
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    
    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    


    {
        DDS_UnsignedLong i, length;
        length = elementSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            element_finalize_optional_members(
                elementSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool st_copy(
    st* dst,
    const st* src)
{

    if (!elementSeq_copy(dst,
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
 * Configure and implement 'st' sequence class.
 */
#define T            st
#define TSeq         stSeq
#define T_initialize_w_params ::st_initialize_w_params
#define T_finalize_w_params   ::st_finalize_w_params
#define T_copy       ::st_copy


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
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

