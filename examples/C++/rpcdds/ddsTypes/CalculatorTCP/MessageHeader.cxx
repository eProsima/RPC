#if defined(_WIN32) && defined(NDDS_USER_DLL_EXPORT)
class __declspec(dllimport) DDSDomainEntity;
class __declspec(dllimport) DDSEntity;
#endif

/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MessageHeader.idl using "rtiddsgen".
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



#include "MessageHeader.h"


namespace dds{
/* ========================================================================= */

DDS_TypeCode* GuidPrefix_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode GuidPrefix_t_g_tc_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,12,NULL,NULL);

    static DDS_TypeCode GuidPrefix_t_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"dds::GuidPrefix_t", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for GuidPrefix_t */

    if (is_initialized) {
        return &GuidPrefix_t_g_tc;
    }

    GuidPrefix_t_g_tc_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;
    GuidPrefix_t_g_tc._data._typeCode = (RTICdrTypeCode *)&GuidPrefix_t_g_tc_array; /* Content type code */

    is_initialized = RTI_TRUE;

    return &GuidPrefix_t_g_tc;
}


RTIBool GuidPrefix_t_initialize(
    GuidPrefix_t* sample)
{
    return ::dds::GuidPrefix_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool GuidPrefix_t_initialize_ex(
    GuidPrefix_t* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::dds::GuidPrefix_t_initialize_w_params(
        sample,&allocParams);
}

RTIBool GuidPrefix_t_initialize_w_params(
        GuidPrefix_t* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    
    if (!RTICdrType_initArray(
        (*sample), (12), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void GuidPrefix_t_finalize(
    GuidPrefix_t* sample)
{
    ::dds::GuidPrefix_t_finalize_ex(sample,RTI_TRUE);
}
 
void GuidPrefix_t_finalize_ex(
    GuidPrefix_t* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::dds::GuidPrefix_t_finalize_w_params(
        sample,&deallocParams);
}
           
void GuidPrefix_t_finalize_w_params(
    GuidPrefix_t* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */



}

void GuidPrefix_t_finalize_optional_members(
    GuidPrefix_t* sample, RTIBool deletePointers)
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

RTIBool GuidPrefix_t_copy(
    GuidPrefix_t* dst,
    const GuidPrefix_t* src)
{

    if (!RTICdrType_copyArray(
        (*dst), (*src), (12), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

    
/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'GuidPrefix_t' sequence class.
 */
#define T            GuidPrefix_t
#define TSeq         GuidPrefix_tSeq
#define T_initialize_w_params ::dds::GuidPrefix_t_initialize_w_params
#define T_finalize_w_params   ::dds::GuidPrefix_t_finalize_w_params
#define T_copy       ::dds::GuidPrefix_t_copy


#define T_no_get        

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

#undef T_no_get

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *EntityId_tTYPENAME = "dds::EntityId_t";

DDS_TypeCode* EntityId_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode EntityId_t_g_tc_entityKey_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,3,NULL,NULL);

    static DDS_TypeCode_Member EntityId_t_g_tc_members[2]=
    {
        {
            (char *)"entityKey",/* Member name */
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
            (char *)"entityKind",/* Member name */
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
        }
    };

    static DDS_TypeCode EntityId_t_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"dds::EntityId_t", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        EntityId_t_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for EntityId_t*/

    if (is_initialized) {
        return &EntityId_t_g_tc;
    }

    EntityId_t_g_tc_entityKey_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    EntityId_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&EntityId_t_g_tc_entityKey_array;
    EntityId_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

    is_initialized = RTI_TRUE;

    return &EntityId_t_g_tc;
}


RTIBool EntityId_t_initialize(
    EntityId_t* sample) {
  return ::dds::EntityId_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool EntityId_t_initialize_ex(
    EntityId_t* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::dds::EntityId_t_initialize_w_params(
        sample,&allocParams);
}

RTIBool EntityId_t_initialize_w_params(
        EntityId_t* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    
    if (!RTICdrType_initArray(
        sample->entityKey, (3), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initOctet(&sample->entityKind)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void EntityId_t_finalize(
    EntityId_t* sample)
{
    ::dds::EntityId_t_finalize_ex(sample,RTI_TRUE);
}
        
void EntityId_t_finalize_ex(
    EntityId_t* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::dds::EntityId_t_finalize_w_params(
        sample,&deallocParams);
}

void EntityId_t_finalize_w_params(
        EntityId_t* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




}

void EntityId_t_finalize_optional_members(
    EntityId_t* sample, RTIBool deletePointers)
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

RTIBool EntityId_t_copy(
    EntityId_t* dst,
    const EntityId_t* src)
{

    if (!RTICdrType_copyArray(
        dst->entityKey, src->entityKey, (3), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyOctet(
        &dst->entityKind, &src->entityKind)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'EntityId_t' sequence class.
 */
#define T EntityId_t
#define TSeq EntityId_tSeq
#define T_initialize_w_params ::dds::EntityId_t_initialize_w_params
#define T_finalize_w_params   ::dds::EntityId_t_finalize_w_params
#define T_copy       ::dds::EntityId_t_copy

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
const char *GUID_tTYPENAME = "dds::GUID_t";

DDS_TypeCode* GUID_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member GUID_t_g_tc_members[2]=
    {
        {
            (char *)"guidPrefix",/* Member name */
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
            (char *)"entityId",/* Member name */
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
        }
    };

    static DDS_TypeCode GUID_t_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"dds::GUID_t", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        GUID_t_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for GUID_t*/

    if (is_initialized) {
        return &GUID_t_g_tc;
    }


    GUID_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)dds::GuidPrefix_t_get_typecode();
    GUID_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)dds::EntityId_t_get_typecode();

    is_initialized = RTI_TRUE;

    return &GUID_t_g_tc;
}


RTIBool GUID_t_initialize(
    GUID_t* sample) {
  return ::dds::GUID_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool GUID_t_initialize_ex(
    GUID_t* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::dds::GUID_t_initialize_w_params(
        sample,&allocParams);
}

RTIBool GUID_t_initialize_w_params(
        GUID_t* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!dds::GuidPrefix_t_initialize_w_params(&sample->guidPrefix,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!dds::EntityId_t_initialize_w_params(&sample->entityId,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void GUID_t_finalize(
    GUID_t* sample)
{
    ::dds::GUID_t_finalize_ex(sample,RTI_TRUE);
}
        
void GUID_t_finalize_ex(
    GUID_t* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::dds::GUID_t_finalize_w_params(
        sample,&deallocParams);
}

void GUID_t_finalize_w_params(
        GUID_t* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    dds::GuidPrefix_t_finalize_w_params(&sample->guidPrefix, deallocParams);
            

    dds::EntityId_t_finalize_w_params(&sample->entityId, deallocParams);
            

}

void GUID_t_finalize_optional_members(
    GUID_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    dds::GuidPrefix_t_finalize_optional_members(&sample->guidPrefix, deallocParams->delete_pointers);
            

    dds::EntityId_t_finalize_optional_members(&sample->entityId, deallocParams->delete_pointers);
            

}

RTIBool GUID_t_copy(
    GUID_t* dst,
    const GUID_t* src)
{

    if (!dds::GuidPrefix_t_copy(
        &dst->guidPrefix, &src->guidPrefix)) {
        return RTI_FALSE;
    }
            

    if (!dds::EntityId_t_copy(
        &dst->entityId, &src->entityId)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'GUID_t' sequence class.
 */
#define T GUID_t
#define TSeq GUID_tSeq
#define T_initialize_w_params ::dds::GUID_t_initialize_w_params
#define T_finalize_w_params   ::dds::GUID_t_finalize_w_params
#define T_copy       ::dds::GUID_t_copy

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
const char *SequenceNumber_tTYPENAME = "dds::SequenceNumber_t";

DDS_TypeCode* SequenceNumber_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SequenceNumber_t_g_tc_members[2]=
    {
        {
            (char *)"high",/* Member name */
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
            (char *)"low",/* Member name */
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
        }
    };

    static DDS_TypeCode SequenceNumber_t_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"dds::SequenceNumber_t", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SequenceNumber_t_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SequenceNumber_t*/

    if (is_initialized) {
        return &SequenceNumber_t_g_tc;
    }


    SequenceNumber_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    SequenceNumber_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

    is_initialized = RTI_TRUE;

    return &SequenceNumber_t_g_tc;
}


RTIBool SequenceNumber_t_initialize(
    SequenceNumber_t* sample) {
  return ::dds::SequenceNumber_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SequenceNumber_t_initialize_ex(
    SequenceNumber_t* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::dds::SequenceNumber_t_initialize_w_params(
        sample,&allocParams);
}

RTIBool SequenceNumber_t_initialize_w_params(
        SequenceNumber_t* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initLong(&sample->high)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedLong(&sample->low)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void SequenceNumber_t_finalize(
    SequenceNumber_t* sample)
{
    ::dds::SequenceNumber_t_finalize_ex(sample,RTI_TRUE);
}
        
void SequenceNumber_t_finalize_ex(
    SequenceNumber_t* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::dds::SequenceNumber_t_finalize_w_params(
        sample,&deallocParams);
}

void SequenceNumber_t_finalize_w_params(
        SequenceNumber_t* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




}

void SequenceNumber_t_finalize_optional_members(
    SequenceNumber_t* sample, RTIBool deletePointers)
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

RTIBool SequenceNumber_t_copy(
    SequenceNumber_t* dst,
    const SequenceNumber_t* src)
{

    if (!RTICdrType_copyLong(
        &dst->high, &src->high)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->low, &src->low)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SequenceNumber_t' sequence class.
 */
#define T SequenceNumber_t
#define TSeq SequenceNumber_tSeq
#define T_initialize_w_params ::dds::SequenceNumber_t_initialize_w_params
#define T_finalize_w_params   ::dds::SequenceNumber_t_finalize_w_params
#define T_copy       ::dds::SequenceNumber_t_copy

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
const char *SampleIdentityTYPENAME = "dds::SampleIdentity";

DDS_TypeCode* SampleIdentity_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SampleIdentity_g_tc_members[2]=
    {
        {
            (char *)"writer_guid",/* Member name */
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
            (char *)"sequence_number",/* Member name */
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
        }
    };

    static DDS_TypeCode SampleIdentity_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"dds::SampleIdentity", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SampleIdentity_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SampleIdentity*/

    if (is_initialized) {
        return &SampleIdentity_g_tc;
    }


    SampleIdentity_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)dds::GUID_t_get_typecode();
    SampleIdentity_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)dds::SequenceNumber_t_get_typecode();

    is_initialized = RTI_TRUE;

    return &SampleIdentity_g_tc;
}


RTIBool SampleIdentity_initialize(
    SampleIdentity* sample) {
  return ::dds::SampleIdentity_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SampleIdentity_initialize_ex(
    SampleIdentity* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::dds::SampleIdentity_initialize_w_params(
        sample,&allocParams);
}

RTIBool SampleIdentity_initialize_w_params(
        SampleIdentity* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!dds::GUID_t_initialize_w_params(&sample->writer_guid,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!dds::SequenceNumber_t_initialize_w_params(&sample->sequence_number,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void SampleIdentity_finalize(
    SampleIdentity* sample)
{
    ::dds::SampleIdentity_finalize_ex(sample,RTI_TRUE);
}
        
void SampleIdentity_finalize_ex(
    SampleIdentity* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::dds::SampleIdentity_finalize_w_params(
        sample,&deallocParams);
}

void SampleIdentity_finalize_w_params(
        SampleIdentity* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    dds::GUID_t_finalize_w_params(&sample->writer_guid, deallocParams);
            

    dds::SequenceNumber_t_finalize_w_params(&sample->sequence_number, deallocParams);
            

}

void SampleIdentity_finalize_optional_members(
    SampleIdentity* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    dds::GUID_t_finalize_optional_members(&sample->writer_guid, deallocParams->delete_pointers);
            

    dds::SequenceNumber_t_finalize_optional_members(&sample->sequence_number, deallocParams->delete_pointers);
            

}

RTIBool SampleIdentity_copy(
    SampleIdentity* dst,
    const SampleIdentity* src)
{

    if (!dds::GUID_t_copy(
        &dst->writer_guid, &src->writer_guid)) {
        return RTI_FALSE;
    }
            

    if (!dds::SequenceNumber_t_copy(
        &dst->sequence_number, &src->sequence_number)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SampleIdentity' sequence class.
 */
#define T SampleIdentity
#define TSeq SampleIdentitySeq
#define T_initialize_w_params ::dds::SampleIdentity_initialize_w_params
#define T_finalize_w_params   ::dds::SampleIdentity_finalize_w_params
#define T_copy       ::dds::SampleIdentity_copy

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


namespace rpc{
/* ========================================================================= */

DDS_TypeCode* UnknownOperation_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode UnknownOperation_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"dds::rpc::UnknownOperation", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for UnknownOperation */

    if (is_initialized) {
        return &UnknownOperation_g_tc;
    }

    UnknownOperation_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet; /* Content type code */

    is_initialized = RTI_TRUE;

    return &UnknownOperation_g_tc;
}


RTIBool UnknownOperation_initialize(
    UnknownOperation* sample)
{
    return ::dds::rpc::UnknownOperation_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool UnknownOperation_initialize_ex(
    UnknownOperation* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::dds::rpc::UnknownOperation_initialize_w_params(
        sample,&allocParams);
}

RTIBool UnknownOperation_initialize_w_params(
        UnknownOperation* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (!RTICdrType_initOctet(sample)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void UnknownOperation_finalize(
    UnknownOperation* sample)
{
    ::dds::rpc::UnknownOperation_finalize_ex(sample,RTI_TRUE);
}
 
void UnknownOperation_finalize_ex(
    UnknownOperation* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::dds::rpc::UnknownOperation_finalize_w_params(
        sample,&deallocParams);
}
           
void UnknownOperation_finalize_w_params(
    UnknownOperation* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */



}

void UnknownOperation_finalize_optional_members(
    UnknownOperation* sample, RTIBool deletePointers)
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

RTIBool UnknownOperation_copy(
    UnknownOperation* dst,
    const UnknownOperation* src)
{

    if (!RTICdrType_copyOctet(
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
 * Configure and implement 'UnknownOperation' sequence class.
 */
#define T            UnknownOperation
#define TSeq         UnknownOperationSeq
#define T_initialize_w_params ::dds::rpc::UnknownOperation_initialize_w_params
#define T_finalize_w_params   ::dds::rpc::UnknownOperation_finalize_w_params
#define T_copy       ::dds::rpc::UnknownOperation_copy


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

DDS_TypeCode* UnknownException_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode UnknownException_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"dds::rpc::UnknownException", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for UnknownException */

    if (is_initialized) {
        return &UnknownException_g_tc;
    }

    UnknownException_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet; /* Content type code */

    is_initialized = RTI_TRUE;

    return &UnknownException_g_tc;
}


RTIBool UnknownException_initialize(
    UnknownException* sample)
{
    return ::dds::rpc::UnknownException_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool UnknownException_initialize_ex(
    UnknownException* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::dds::rpc::UnknownException_initialize_w_params(
        sample,&allocParams);
}

RTIBool UnknownException_initialize_w_params(
        UnknownException* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (!RTICdrType_initOctet(sample)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void UnknownException_finalize(
    UnknownException* sample)
{
    ::dds::rpc::UnknownException_finalize_ex(sample,RTI_TRUE);
}
 
void UnknownException_finalize_ex(
    UnknownException* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::dds::rpc::UnknownException_finalize_w_params(
        sample,&deallocParams);
}
           
void UnknownException_finalize_w_params(
    UnknownException* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */



}

void UnknownException_finalize_optional_members(
    UnknownException* sample, RTIBool deletePointers)
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

RTIBool UnknownException_copy(
    UnknownException* dst,
    const UnknownException* src)
{

    if (!RTICdrType_copyOctet(
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
 * Configure and implement 'UnknownException' sequence class.
 */
#define T            UnknownException
#define TSeq         UnknownExceptionSeq
#define T_initialize_w_params ::dds::rpc::UnknownException_initialize_w_params
#define T_finalize_w_params   ::dds::rpc::UnknownException_finalize_w_params
#define T_copy       ::dds::rpc::UnknownException_copy


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

DDS_TypeCode* UnusedMember_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode UnusedMember_g_tc =
    {{
        DDS_TK_ALIAS, /* Kind*/
        DDS_BOOLEAN_FALSE, /* Is a pointer? */
        -1, /* Ignored */
        (char *)"dds::rpc::UnusedMember", /* Name */
        NULL, /* Content type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for UnusedMember */

    if (is_initialized) {
        return &UnusedMember_g_tc;
    }

    UnusedMember_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet; /* Content type code */

    is_initialized = RTI_TRUE;

    return &UnusedMember_g_tc;
}


RTIBool UnusedMember_initialize(
    UnusedMember* sample)
{
    return ::dds::rpc::UnusedMember_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool UnusedMember_initialize_ex(
    UnusedMember* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::dds::rpc::UnusedMember_initialize_w_params(
        sample,&allocParams);
}

RTIBool UnusedMember_initialize_w_params(
        UnusedMember* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        


    if (!RTICdrType_initOctet(sample)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void UnusedMember_finalize(
    UnusedMember* sample)
{
    ::dds::rpc::UnusedMember_finalize_ex(sample,RTI_TRUE);
}
 
void UnusedMember_finalize_ex(
    UnusedMember* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::dds::rpc::UnusedMember_finalize_w_params(
        sample,&deallocParams);
}
           
void UnusedMember_finalize_w_params(
    UnusedMember* sample,
    const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) { } /* To avoid warnings */



}

void UnusedMember_finalize_optional_members(
    UnusedMember* sample, RTIBool deletePointers)
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

RTIBool UnusedMember_copy(
    UnusedMember* dst,
    const UnusedMember* src)
{

    if (!RTICdrType_copyOctet(
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
 * Configure and implement 'UnusedMember' sequence class.
 */
#define T            UnusedMember
#define TSeq         UnusedMemberSeq
#define T_initialize_w_params ::dds::rpc::UnusedMember_initialize_w_params
#define T_finalize_w_params   ::dds::rpc::UnusedMember_finalize_w_params
#define T_copy       ::dds::rpc::UnusedMember_copy


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
const char *RemoteExceptionCode_tTYPENAME = "dds::rpc::RemoteExceptionCode_t";

DDS_TypeCode* RemoteExceptionCode_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RemoteExceptionCode_t_g_tc_members[6] =
    {
        {
            (char *)"REMOTE_EX_OK",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            REMOTE_EX_OK, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"REMOTE_EX_UNSUPPORTED",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            REMOTE_EX_UNSUPPORTED, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"REMOTE_EX_INVALID_ARGUMENT",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            REMOTE_EX_INVALID_ARGUMENT, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"REMOTE_EX_OUT_OF_RESOURCES",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            REMOTE_EX_OUT_OF_RESOURCES, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"REMOTE_EX_UNKNOWN_OPERATION",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            REMOTE_EX_UNKNOWN_OPERATION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"REMOTE_EX_UNKNOWN_EXCEPTION",/* Member name */
            {
                0,/* Ignored */
                DDS_BOOLEAN_FALSE, /* Ignored */
                -1, /* Ignored */
                NULL /* Ignored */
            },
            REMOTE_EX_UNKNOWN_EXCEPTION, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Ignored */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode RemoteExceptionCode_t_g_tc = 
    {{
        DDS_TK_ENUM, /* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1, /* Ignored */
        (char *)"dds::rpc::RemoteExceptionCode_t", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of enumerators */
        RemoteExceptionCode_t_g_tc_members, /* Enumerators */
        DDS_VM_NONE /* Ignored */
}    };

    if (is_initialized) {
        return &RemoteExceptionCode_t_g_tc;
    }

    is_initialized = RTI_TRUE;
    return &RemoteExceptionCode_t_g_tc;
}
 

RTIBool RemoteExceptionCode_t_initialize(
    RemoteExceptionCode_t* sample)
{
    *sample = REMOTE_EX_OK;
    return RTI_TRUE;
}
        
RTIBool RemoteExceptionCode_t_initialize_ex(
    RemoteExceptionCode_t* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */
    *sample = REMOTE_EX_OK;
    return RTI_TRUE;
}

RTIBool RemoteExceptionCode_t_initialize_w_params(
        RemoteExceptionCode_t* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
    if (allocParams) {} /* To avoid warnings */
    *sample = REMOTE_EX_OK;
    return RTI_TRUE;
}

void RemoteExceptionCode_t_finalize(
    RemoteExceptionCode_t* sample)
{
    if (sample) {} /* To avoid warnings */
    /* empty */
}
        
void RemoteExceptionCode_t_finalize_ex(
    RemoteExceptionCode_t* sample,RTIBool deletePointers)
{
    if (sample) {} /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */
    /* empty */
}

void RemoteExceptionCode_t_finalize_w_params(
        RemoteExceptionCode_t* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{
    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
    /* empty */
}

RTIBool RemoteExceptionCode_t_copy(
    RemoteExceptionCode_t* dst,
    const RemoteExceptionCode_t* src)
{
    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);
}


RTIBool RemoteExceptionCode_t_getValues(RemoteExceptionCode_tSeq * values) 
    
{
    int i = 0;
    RemoteExceptionCode_t * buffer;


    if (!values->maximum(6)) {
        return RTI_FALSE;
    }

    if (!values->length(6)) {
        return RTI_FALSE;
    }

    buffer = values->get_contiguous_buffer();
    
    buffer[i] = REMOTE_EX_OK;
    i++;
    
    buffer[i] = REMOTE_EX_UNSUPPORTED;
    i++;
    
    buffer[i] = REMOTE_EX_INVALID_ARGUMENT;
    i++;
    
    buffer[i] = REMOTE_EX_OUT_OF_RESOURCES;
    i++;
    
    buffer[i] = REMOTE_EX_UNKNOWN_OPERATION;
    i++;
    
    buffer[i] = REMOTE_EX_UNKNOWN_EXCEPTION;
    i++;
    

    return RTI_TRUE;
}

/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'RemoteExceptionCode_t' sequence class.
 */
#define T RemoteExceptionCode_t
#define TSeq RemoteExceptionCode_tSeq
#define T_initialize_w_params RemoteExceptionCode_t_initialize_w_params
#define T_finalize_w_params   RemoteExceptionCode_t_finalize_w_params
#define T_copy       RemoteExceptionCode_t_copy

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
const char *RequestHeaderTYPENAME = "dds::rpc::RequestHeader";

DDS_TypeCode* RequestHeader_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RequestHeader_g_tc_instanceName_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member RequestHeader_g_tc_members[2]=
    {
        {
            (char *)"requestId",/* Member name */
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
            (char *)"instanceName",/* Member name */
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
        }
    };

    static DDS_TypeCode RequestHeader_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"dds::rpc::RequestHeader", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        RequestHeader_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for RequestHeader*/

    if (is_initialized) {
        return &RequestHeader_g_tc;
    }


    RequestHeader_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)dds::SampleIdentity_get_typecode();
    RequestHeader_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&RequestHeader_g_tc_instanceName_string;

    is_initialized = RTI_TRUE;

    return &RequestHeader_g_tc;
}


RTIBool RequestHeader_initialize(
    RequestHeader* sample) {
  return ::dds::rpc::RequestHeader_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool RequestHeader_initialize_ex(
    RequestHeader* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::dds::rpc::RequestHeader_initialize_w_params(
        sample,&allocParams);
}

RTIBool RequestHeader_initialize_w_params(
        RequestHeader* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!dds::SampleIdentity_initialize_w_params(&sample->requestId,allocParams)) {
        return RTI_FALSE;
    }
            

    if (allocParams->allocate_memory) {
        sample->instanceName = DDS_String_alloc((255));
        if (sample->instanceName == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->instanceName != NULL) { 
            sample->instanceName[0] = '\0';
        }
    }
            


    return RTI_TRUE;
}

void RequestHeader_finalize(
    RequestHeader* sample)
{
    ::dds::rpc::RequestHeader_finalize_ex(sample,RTI_TRUE);
}
        
void RequestHeader_finalize_ex(
    RequestHeader* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::dds::rpc::RequestHeader_finalize_w_params(
        sample,&deallocParams);
}

void RequestHeader_finalize_w_params(
        RequestHeader* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    dds::SampleIdentity_finalize_w_params(&sample->requestId, deallocParams);
            

    if (sample->instanceName != NULL) {    
        DDS_String_free(sample->instanceName);
        sample->instanceName = NULL;
    }
            

}

void RequestHeader_finalize_optional_members(
    RequestHeader* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    dds::SampleIdentity_finalize_optional_members(&sample->requestId, deallocParams->delete_pointers);
            


}

RTIBool RequestHeader_copy(
    RequestHeader* dst,
    const RequestHeader* src)
{

    if (!dds::SampleIdentity_copy(
        &dst->requestId, &src->requestId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->instanceName, src->instanceName, (255) + 1)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'RequestHeader' sequence class.
 */
#define T RequestHeader
#define TSeq RequestHeaderSeq
#define T_initialize_w_params ::dds::rpc::RequestHeader_initialize_w_params
#define T_finalize_w_params   ::dds::rpc::RequestHeader_finalize_w_params
#define T_copy       ::dds::rpc::RequestHeader_copy

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
const char *ReplyHeaderTYPENAME = "dds::rpc::ReplyHeader";

DDS_TypeCode* ReplyHeader_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member ReplyHeader_g_tc_members[2]=
    {
        {
            (char *)"relatedRequestId",/* Member name */
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
            (char *)"remoteEx",/* Member name */
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
        }
    };

    static DDS_TypeCode ReplyHeader_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"dds::rpc::ReplyHeader", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        ReplyHeader_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for ReplyHeader*/

    if (is_initialized) {
        return &ReplyHeader_g_tc;
    }


    ReplyHeader_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)dds::SampleIdentity_get_typecode();
    ReplyHeader_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)dds::rpc::RemoteExceptionCode_t_get_typecode();

    is_initialized = RTI_TRUE;

    return &ReplyHeader_g_tc;
}


RTIBool ReplyHeader_initialize(
    ReplyHeader* sample) {
  return ::dds::rpc::ReplyHeader_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool ReplyHeader_initialize_ex(
    ReplyHeader* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::dds::rpc::ReplyHeader_initialize_w_params(
        sample,&allocParams);
}

RTIBool ReplyHeader_initialize_w_params(
        ReplyHeader* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!dds::SampleIdentity_initialize_w_params(&sample->relatedRequestId,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!dds::rpc::RemoteExceptionCode_t_initialize_w_params(&sample->remoteEx,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void ReplyHeader_finalize(
    ReplyHeader* sample)
{
    ::dds::rpc::ReplyHeader_finalize_ex(sample,RTI_TRUE);
}
        
void ReplyHeader_finalize_ex(
    ReplyHeader* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::dds::rpc::ReplyHeader_finalize_w_params(
        sample,&deallocParams);
}

void ReplyHeader_finalize_w_params(
        ReplyHeader* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */


    dds::SampleIdentity_finalize_w_params(&sample->relatedRequestId, deallocParams);
            

    dds::rpc::RemoteExceptionCode_t_finalize_w_params(&sample->remoteEx, deallocParams);
            

}

void ReplyHeader_finalize_optional_members(
    ReplyHeader* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    dds::SampleIdentity_finalize_optional_members(&sample->relatedRequestId, deallocParams->delete_pointers);
            

    dds::rpc::RemoteExceptionCode_t_finalize_w_params(&sample->remoteEx, deallocParams);
            

}

RTIBool ReplyHeader_copy(
    ReplyHeader* dst,
    const ReplyHeader* src)
{

    if (!dds::SampleIdentity_copy(
        &dst->relatedRequestId, &src->relatedRequestId)) {
        return RTI_FALSE;
    }
            

    if (!dds::rpc::RemoteExceptionCode_t_copy(
        &dst->remoteEx, &src->remoteEx)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'ReplyHeader' sequence class.
 */
#define T ReplyHeader
#define TSeq ReplyHeaderSeq
#define T_initialize_w_params ::dds::rpc::ReplyHeader_initialize_w_params
#define T_finalize_w_params   ::dds::rpc::ReplyHeader_finalize_w_params
#define T_copy       ::dds::rpc::ReplyHeader_copy

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


} /* namespace rpc */

} /* namespace dds */
