
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MessageHeader.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MessageHeader_953112849_h
#define MessageHeader_953112849_h

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



#define UnknownOperation_LAST_MEMBER_ID octet_LAST_MEMBER_ID
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



#define UnknownException_LAST_MEMBER_ID octet_LAST_MEMBER_ID
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

 
typedef enum SystemExceptionCode
{
    OK,
    UNIMPLEMENTED,
    BAD_PARAMETER,
    PRECONDITION_NOT_MET,
    OUT_OF_RESOURCES,
    NOT_ENABLED,
    ALREADY_DELETED,
    ILLEGAL_OPERATION,
    TIMEOUT,
    INITIALIZE_ERROR,
    CLIENT_INTERNAL_ERROR,
    SERVER_INTERNAL_ERROR,
    SERVER_NOT_FOUND,
    UNKNOWN
} SystemExceptionCode;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SystemExceptionCode_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SystemExceptionCodeSeq, SystemExceptionCode);
        
NDDSUSERDllExport
RTIBool SystemExceptionCode_initialize(
        SystemExceptionCode* self);
        
NDDSUSERDllExport
RTIBool SystemExceptionCode_initialize_ex(
        SystemExceptionCode* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SystemExceptionCode_initialize_w_params(
        SystemExceptionCode* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SystemExceptionCode_finalize(
        SystemExceptionCode* self);
                        
NDDSUSERDllExport
void SystemExceptionCode_finalize_ex(
        SystemExceptionCode* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void SystemExceptionCode_finalize_w_params(
        SystemExceptionCode* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void SystemExceptionCode_finalize_optional_members(
        SystemExceptionCode* self, RTIBool deletePointers);
                
NDDSUSERDllExport
RTIBool SystemExceptionCode_copy(
        SystemExceptionCode* dst,
        const SystemExceptionCode* src);


NDDSUSERDllExport
RTIBool SystemExceptionCode_getValues(SystemExceptionCodeSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define GUID_t_LAST_MEMBER_ID 0
        
extern const char *GUID_tTYPENAME;
        


#ifdef __cplusplus
    struct GUID_tSeq;

#endif

            
    
class GUID_t                                        
{
public:            
#ifdef __cplusplus
    typedef struct GUID_tSeq Seq;

#endif
    
    DDS_Octet  value[16];

            
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


#define SampleIdentity_t_LAST_MEMBER_ID 1
        
extern const char *SampleIdentity_tTYPENAME;
        


#ifdef __cplusplus
    struct SampleIdentity_tSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SampleIdentity_tTypeSupport;
    class SampleIdentity_tDataWriter;
    class SampleIdentity_tDataReader;
#endif

#endif

            
    
class SampleIdentity_t                                        
{
public:            
#ifdef __cplusplus
    typedef struct SampleIdentity_tSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SampleIdentity_tTypeSupport TypeSupport;
    typedef SampleIdentity_tDataWriter DataWriter;
    typedef SampleIdentity_tDataReader DataReader;
#endif

#endif
    
    GUID_t  guid;

    DDS_LongLong  sequence_number;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SampleIdentity_t_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SampleIdentity_tSeq, SampleIdentity_t);
        
NDDSUSERDllExport
RTIBool SampleIdentity_t_initialize(
        SampleIdentity_t* self);
        
NDDSUSERDllExport
RTIBool SampleIdentity_t_initialize_ex(
        SampleIdentity_t* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SampleIdentity_t_initialize_w_params(
        SampleIdentity_t* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SampleIdentity_t_finalize(
        SampleIdentity_t* self);
                        
NDDSUSERDllExport
void SampleIdentity_t_finalize_ex(
        SampleIdentity_t* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SampleIdentity_t_finalize_w_params(
        SampleIdentity_t* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SampleIdentity_t_finalize_optional_members(
        SampleIdentity_t* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SampleIdentity_t_copy(
        SampleIdentity_t* dst,
        const SampleIdentity_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define RequestHeader_LAST_MEMBER_ID 2
        
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
    
    SampleIdentity_t  request_id;

    char*  remote_service_name; /* maximum length = (255) */

    char*  instance_name; /* maximum length = (255) */

            
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


#define ReplyHeader_LAST_MEMBER_ID 0
        
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
    
    SampleIdentity_t  request_id;

            
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



#endif /* MessageHeader_953112849_h */
