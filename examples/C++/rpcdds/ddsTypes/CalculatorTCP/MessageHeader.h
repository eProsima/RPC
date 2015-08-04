
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MessageHeader.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MessageHeader_953113280_h
#define MessageHeader_953113280_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


namespace dds{


#define dds_GuidPrefix_t_LAST_MEMBER_ID octet_LAST_MEMBER_ID
typedef DDS_Octet  GuidPrefix_t[12];
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* GuidPrefix_t_get_typecode(void); /* Type code */
    
DDS_SEQUENCE_NO_GET(GuidPrefix_tSeq, GuidPrefix_t);                
            
NDDSUSERDllExport
RTIBool GuidPrefix_t_initialize(
        GuidPrefix_t* self);
            
NDDSUSERDllExport
RTIBool GuidPrefix_t_initialize_ex(
        GuidPrefix_t* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool GuidPrefix_t_initialize_w_params(
        GuidPrefix_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void GuidPrefix_t_finalize(
        GuidPrefix_t* self);
            
NDDSUSERDllExport
void GuidPrefix_t_finalize_ex(
        GuidPrefix_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void GuidPrefix_t_finalize_w_params(
        GuidPrefix_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void GuidPrefix_t_finalize_optional_members(
        GuidPrefix_t* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool GuidPrefix_t_copy(
        GuidPrefix_t* dst,
        const GuidPrefix_t* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define dds_EntityId_t_LAST_MEMBER_ID 1
        
extern const char *EntityId_tTYPENAME;
        


#ifdef __cplusplus
    struct EntityId_tSeq;

#ifndef NDDS_STANDALONE_TYPE
    class EntityId_tTypeSupport;
    class EntityId_tDataWriter;
    class EntityId_tDataReader;
#endif

#endif

            
    
class EntityId_t                                        
{
public:            
#ifdef __cplusplus
    typedef struct EntityId_tSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef EntityId_tTypeSupport TypeSupport;
    typedef EntityId_tDataWriter DataWriter;
    typedef EntityId_tDataReader DataReader;
#endif

#endif
    
    DDS_Octet  entityKey[3];

    DDS_Octet  entityKind;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EntityId_t_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EntityId_tSeq, EntityId_t);
        
NDDSUSERDllExport
RTIBool EntityId_t_initialize(
        EntityId_t* self);
        
NDDSUSERDllExport
RTIBool EntityId_t_initialize_ex(
        EntityId_t* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool EntityId_t_initialize_w_params(
        EntityId_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void EntityId_t_finalize(
        EntityId_t* self);
                        
NDDSUSERDllExport
void EntityId_t_finalize_ex(
        EntityId_t* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void EntityId_t_finalize_w_params(
        EntityId_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void EntityId_t_finalize_optional_members(
        EntityId_t* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool EntityId_t_copy(
        EntityId_t* dst,
        const EntityId_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define dds_GUID_t_LAST_MEMBER_ID 1
        
extern const char *GUID_tTYPENAME;
        


#ifdef __cplusplus
    struct GUID_tSeq;

#ifndef NDDS_STANDALONE_TYPE
    class GUID_tTypeSupport;
    class GUID_tDataWriter;
    class GUID_tDataReader;
#endif

#endif

            
    
class GUID_t                                        
{
public:            
#ifdef __cplusplus
    typedef struct GUID_tSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef GUID_tTypeSupport TypeSupport;
    typedef GUID_tDataWriter DataWriter;
    typedef GUID_tDataReader DataReader;
#endif

#endif
    
    dds::GuidPrefix_t  guidPrefix;

    dds::EntityId_t  entityId;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* GUID_t_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(GUID_tSeq, GUID_t);
        
NDDSUSERDllExport
RTIBool GUID_t_initialize(
        GUID_t* self);
        
NDDSUSERDllExport
RTIBool GUID_t_initialize_ex(
        GUID_t* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool GUID_t_initialize_w_params(
        GUID_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void GUID_t_finalize(
        GUID_t* self);
                        
NDDSUSERDllExport
void GUID_t_finalize_ex(
        GUID_t* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void GUID_t_finalize_w_params(
        GUID_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void GUID_t_finalize_optional_members(
        GUID_t* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool GUID_t_copy(
        GUID_t* dst,
        const GUID_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define dds_SequenceNumber_t_LAST_MEMBER_ID 1
        
extern const char *SequenceNumber_tTYPENAME;
        


#ifdef __cplusplus
    struct SequenceNumber_tSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SequenceNumber_tTypeSupport;
    class SequenceNumber_tDataWriter;
    class SequenceNumber_tDataReader;
#endif

#endif

            
    
class SequenceNumber_t                                        
{
public:            
#ifdef __cplusplus
    typedef struct SequenceNumber_tSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SequenceNumber_tTypeSupport TypeSupport;
    typedef SequenceNumber_tDataWriter DataWriter;
    typedef SequenceNumber_tDataReader DataReader;
#endif

#endif
    
    DDS_Long  high;

    DDS_UnsignedLong  low;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SequenceNumber_t_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SequenceNumber_tSeq, SequenceNumber_t);
        
NDDSUSERDllExport
RTIBool SequenceNumber_t_initialize(
        SequenceNumber_t* self);
        
NDDSUSERDllExport
RTIBool SequenceNumber_t_initialize_ex(
        SequenceNumber_t* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SequenceNumber_t_initialize_w_params(
        SequenceNumber_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SequenceNumber_t_finalize(
        SequenceNumber_t* self);
                        
NDDSUSERDllExport
void SequenceNumber_t_finalize_ex(
        SequenceNumber_t* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SequenceNumber_t_finalize_w_params(
        SequenceNumber_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SequenceNumber_t_finalize_optional_members(
        SequenceNumber_t* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SequenceNumber_t_copy(
        SequenceNumber_t* dst,
        const SequenceNumber_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define dds_SampleIdentity_LAST_MEMBER_ID 1
        
extern const char *SampleIdentityTYPENAME;
        


#ifdef __cplusplus
    struct SampleIdentitySeq;

#ifndef NDDS_STANDALONE_TYPE
    class SampleIdentityTypeSupport;
    class SampleIdentityDataWriter;
    class SampleIdentityDataReader;
#endif

#endif

            
    
class SampleIdentity                                        
{
public:            
#ifdef __cplusplus
    typedef struct SampleIdentitySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SampleIdentityTypeSupport TypeSupport;
    typedef SampleIdentityDataWriter DataWriter;
    typedef SampleIdentityDataReader DataReader;
#endif

#endif
    
    dds::GUID_t  writer_guid;

    dds::SequenceNumber_t  sequence_number;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SampleIdentity_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SampleIdentitySeq, SampleIdentity);
        
NDDSUSERDllExport
RTIBool SampleIdentity_initialize(
        SampleIdentity* self);
        
NDDSUSERDllExport
RTIBool SampleIdentity_initialize_ex(
        SampleIdentity* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SampleIdentity_initialize_w_params(
        SampleIdentity* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SampleIdentity_finalize(
        SampleIdentity* self);
                        
NDDSUSERDllExport
void SampleIdentity_finalize_ex(
        SampleIdentity* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SampleIdentity_finalize_w_params(
        SampleIdentity* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SampleIdentity_finalize_optional_members(
        SampleIdentity* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SampleIdentity_copy(
        SampleIdentity* dst,
        const SampleIdentity* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


namespace rpc{


#define dds_rpc_UnknownOperation_LAST_MEMBER_ID octet_LAST_MEMBER_ID
typedef DDS_Octet  UnknownOperation;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* UnknownOperation_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(UnknownOperationSeq, UnknownOperation);                                        
            
NDDSUSERDllExport
RTIBool UnknownOperation_initialize(
        UnknownOperation* self);
            
NDDSUSERDllExport
RTIBool UnknownOperation_initialize_ex(
        UnknownOperation* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UnknownOperation_initialize_w_params(
        UnknownOperation* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void UnknownOperation_finalize(
        UnknownOperation* self);
            
NDDSUSERDllExport
void UnknownOperation_finalize_ex(
        UnknownOperation* self,RTIBool deletePointers);

NDDSUSERDllExport
void UnknownOperation_finalize_w_params(
        UnknownOperation* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UnknownOperation_finalize_optional_members(
        UnknownOperation* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool UnknownOperation_copy(
        UnknownOperation* dst,
        const UnknownOperation* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define dds_rpc_UnknownException_LAST_MEMBER_ID octet_LAST_MEMBER_ID
typedef DDS_Octet  UnknownException;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* UnknownException_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(UnknownExceptionSeq, UnknownException);                                        
            
NDDSUSERDllExport
RTIBool UnknownException_initialize(
        UnknownException* self);
            
NDDSUSERDllExport
RTIBool UnknownException_initialize_ex(
        UnknownException* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UnknownException_initialize_w_params(
        UnknownException* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void UnknownException_finalize(
        UnknownException* self);
            
NDDSUSERDllExport
void UnknownException_finalize_ex(
        UnknownException* self,RTIBool deletePointers);

NDDSUSERDllExport
void UnknownException_finalize_w_params(
        UnknownException* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UnknownException_finalize_optional_members(
        UnknownException* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool UnknownException_copy(
        UnknownException* dst,
        const UnknownException* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define dds_rpc_UnusedMember_LAST_MEMBER_ID octet_LAST_MEMBER_ID
typedef DDS_Octet  UnusedMember;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* UnusedMember_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(UnusedMemberSeq, UnusedMember);                                        
            
NDDSUSERDllExport
RTIBool UnusedMember_initialize(
        UnusedMember* self);
            
NDDSUSERDllExport
RTIBool UnusedMember_initialize_ex(
        UnusedMember* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool UnusedMember_initialize_w_params(
        UnusedMember* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void UnusedMember_finalize(
        UnusedMember* self);
            
NDDSUSERDllExport
void UnusedMember_finalize_ex(
        UnusedMember* self,RTIBool deletePointers);

NDDSUSERDllExport
void UnusedMember_finalize_w_params(
        UnusedMember* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void UnusedMember_finalize_optional_members(
        UnusedMember* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool UnusedMember_copy(
        UnusedMember* dst,
        const UnusedMember* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

 
typedef enum RemoteExceptionCode_t
{
    REMOTE_EX_OK,
    REMOTE_EX_UNSUPPORTED,
    REMOTE_EX_INVALID_ARGUMENT,
    REMOTE_EX_OUT_OF_RESOURCES,
    REMOTE_EX_UNKNOWN_OPERATION,
    REMOTE_EX_UNKNOWN_EXCEPTION
} RemoteExceptionCode_t;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* RemoteExceptionCode_t_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(RemoteExceptionCode_tSeq, RemoteExceptionCode_t);
        
NDDSUSERDllExport
RTIBool RemoteExceptionCode_t_initialize(
        RemoteExceptionCode_t* self);
        
NDDSUSERDllExport
RTIBool RemoteExceptionCode_t_initialize_ex(
        RemoteExceptionCode_t* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool RemoteExceptionCode_t_initialize_w_params(
        RemoteExceptionCode_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void RemoteExceptionCode_t_finalize(
        RemoteExceptionCode_t* self);
                        
NDDSUSERDllExport
void RemoteExceptionCode_t_finalize_ex(
        RemoteExceptionCode_t* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void RemoteExceptionCode_t_finalize_w_params(
        RemoteExceptionCode_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RemoteExceptionCode_t_finalize_optional_members(
        RemoteExceptionCode_t* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool RemoteExceptionCode_t_copy(
        RemoteExceptionCode_t* dst,
        const RemoteExceptionCode_t* src);


NDDSUSERDllExport
RTIBool RemoteExceptionCode_t_getValues(RemoteExceptionCode_tSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define dds_rpc_RequestHeader_LAST_MEMBER_ID 1
        
extern const char *RequestHeaderTYPENAME;
        


#ifdef __cplusplus
    struct RequestHeaderSeq;

#endif

            
    
class RequestHeader                                        
{
public:            
#ifdef __cplusplus
    typedef struct RequestHeaderSeq Seq;

#endif
    
    dds::SampleIdentity  requestId;

    char*  instanceName; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* RequestHeader_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(RequestHeaderSeq, RequestHeader);
        
NDDSUSERDllExport
RTIBool RequestHeader_initialize(
        RequestHeader* self);
        
NDDSUSERDllExport
RTIBool RequestHeader_initialize_ex(
        RequestHeader* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool RequestHeader_initialize_w_params(
        RequestHeader* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void RequestHeader_finalize(
        RequestHeader* self);
                        
NDDSUSERDllExport
void RequestHeader_finalize_ex(
        RequestHeader* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void RequestHeader_finalize_w_params(
        RequestHeader* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void RequestHeader_finalize_optional_members(
        RequestHeader* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool RequestHeader_copy(
        RequestHeader* dst,
        const RequestHeader* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define dds_rpc_ReplyHeader_LAST_MEMBER_ID 1
        
extern const char *ReplyHeaderTYPENAME;
        


#ifdef __cplusplus
    struct ReplyHeaderSeq;

#endif

            
    
class ReplyHeader                                        
{
public:            
#ifdef __cplusplus
    typedef struct ReplyHeaderSeq Seq;

#endif
    
    dds::SampleIdentity  relatedRequestId;

    dds::rpc::RemoteExceptionCode_t  remoteEx;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ReplyHeader_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ReplyHeaderSeq, ReplyHeader);
        
NDDSUSERDllExport
RTIBool ReplyHeader_initialize(
        ReplyHeader* self);
        
NDDSUSERDllExport
RTIBool ReplyHeader_initialize_ex(
        ReplyHeader* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ReplyHeader_initialize_w_params(
        ReplyHeader* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ReplyHeader_finalize(
        ReplyHeader* self);
                        
NDDSUSERDllExport
void ReplyHeader_finalize_ex(
        ReplyHeader* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ReplyHeader_finalize_w_params(
        ReplyHeader* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ReplyHeader_finalize_optional_members(
        ReplyHeader* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ReplyHeader_copy(
        ReplyHeader* dst,
        const ReplyHeader* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rpc */

} /* namespace dds */


#endif /* MessageHeader_953113280_h */
