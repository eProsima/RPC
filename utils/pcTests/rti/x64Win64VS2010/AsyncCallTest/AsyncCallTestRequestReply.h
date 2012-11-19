
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AsyncCallTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef AsyncCallTestRequestReply_842829275_h
#define AsyncCallTestRequestReply_842829275_h

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


#include "MessageHeader.h"


#include "AsyncCallTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *AsyncCallTest_getLongRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct AsyncCallTest_getLongRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class AsyncCallTest_getLongRequestTypeSupport;
    class AsyncCallTest_getLongRequestDataWriter;
    class AsyncCallTest_getLongRequestDataReader;
#endif

#endif

            
    
class AsyncCallTest_getLongRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct AsyncCallTest_getLongRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef AsyncCallTest_getLongRequestTypeSupport TypeSupport;
    typedef AsyncCallTest_getLongRequestDataWriter DataWriter;
    typedef AsyncCallTest_getLongRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    DDS_Long  lo1;

    DDS_Long  lo2;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AsyncCallTest_getLongRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AsyncCallTest_getLongRequestSeq, AsyncCallTest_getLongRequest);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getLongRequest_initialize(
        AsyncCallTest_getLongRequest* self);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getLongRequest_initialize_ex(
        AsyncCallTest_getLongRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void AsyncCallTest_getLongRequest_finalize(
        AsyncCallTest_getLongRequest* self);
                        
NDDSUSERDllExport
void AsyncCallTest_getLongRequest_finalize_ex(
        AsyncCallTest_getLongRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getLongRequest_copy(
        AsyncCallTest_getLongRequest* dst,
        const AsyncCallTest_getLongRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *AsyncCallTest_getLongReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct AsyncCallTest_getLongReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class AsyncCallTest_getLongReplyTypeSupport;
    class AsyncCallTest_getLongReplyDataWriter;
    class AsyncCallTest_getLongReplyDataReader;
#endif

#endif

            
    
class AsyncCallTest_getLongReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct AsyncCallTest_getLongReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef AsyncCallTest_getLongReplyTypeSupport TypeSupport;
    typedef AsyncCallTest_getLongReplyDataWriter DataWriter;
    typedef AsyncCallTest_getLongReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    DDS_Long  lo2;

    DDS_Long  lo3;

    DDS_Long  getLong_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AsyncCallTest_getLongReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AsyncCallTest_getLongReplySeq, AsyncCallTest_getLongReply);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getLongReply_initialize(
        AsyncCallTest_getLongReply* self);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getLongReply_initialize_ex(
        AsyncCallTest_getLongReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void AsyncCallTest_getLongReply_finalize(
        AsyncCallTest_getLongReply* self);
                        
NDDSUSERDllExport
void AsyncCallTest_getLongReply_finalize_ex(
        AsyncCallTest_getLongReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getLongReply_copy(
        AsyncCallTest_getLongReply* dst,
        const AsyncCallTest_getLongReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *AsyncCallTest_getBooleanRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct AsyncCallTest_getBooleanRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class AsyncCallTest_getBooleanRequestTypeSupport;
    class AsyncCallTest_getBooleanRequestDataWriter;
    class AsyncCallTest_getBooleanRequestDataReader;
#endif

#endif

            
    
class AsyncCallTest_getBooleanRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct AsyncCallTest_getBooleanRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef AsyncCallTest_getBooleanRequestTypeSupport TypeSupport;
    typedef AsyncCallTest_getBooleanRequestDataWriter DataWriter;
    typedef AsyncCallTest_getBooleanRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    DDS_Boolean  bo1;

    DDS_Boolean  bo2;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AsyncCallTest_getBooleanRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AsyncCallTest_getBooleanRequestSeq, AsyncCallTest_getBooleanRequest);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getBooleanRequest_initialize(
        AsyncCallTest_getBooleanRequest* self);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getBooleanRequest_initialize_ex(
        AsyncCallTest_getBooleanRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void AsyncCallTest_getBooleanRequest_finalize(
        AsyncCallTest_getBooleanRequest* self);
                        
NDDSUSERDllExport
void AsyncCallTest_getBooleanRequest_finalize_ex(
        AsyncCallTest_getBooleanRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getBooleanRequest_copy(
        AsyncCallTest_getBooleanRequest* dst,
        const AsyncCallTest_getBooleanRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *AsyncCallTest_getBooleanReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct AsyncCallTest_getBooleanReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class AsyncCallTest_getBooleanReplyTypeSupport;
    class AsyncCallTest_getBooleanReplyDataWriter;
    class AsyncCallTest_getBooleanReplyDataReader;
#endif

#endif

            
    
class AsyncCallTest_getBooleanReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct AsyncCallTest_getBooleanReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef AsyncCallTest_getBooleanReplyTypeSupport TypeSupport;
    typedef AsyncCallTest_getBooleanReplyDataWriter DataWriter;
    typedef AsyncCallTest_getBooleanReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    DDS_Boolean  bo2;

    DDS_Boolean  bo3;

    DDS_Boolean  getBoolean_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AsyncCallTest_getBooleanReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AsyncCallTest_getBooleanReplySeq, AsyncCallTest_getBooleanReply);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getBooleanReply_initialize(
        AsyncCallTest_getBooleanReply* self);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getBooleanReply_initialize_ex(
        AsyncCallTest_getBooleanReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void AsyncCallTest_getBooleanReply_finalize(
        AsyncCallTest_getBooleanReply* self);
                        
NDDSUSERDllExport
void AsyncCallTest_getBooleanReply_finalize_ex(
        AsyncCallTest_getBooleanReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getBooleanReply_copy(
        AsyncCallTest_getBooleanReply* dst,
        const AsyncCallTest_getBooleanReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *AsyncCallTest_getStringRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct AsyncCallTest_getStringRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class AsyncCallTest_getStringRequestTypeSupport;
    class AsyncCallTest_getStringRequestDataWriter;
    class AsyncCallTest_getStringRequestDataReader;
#endif

#endif

            
    
class AsyncCallTest_getStringRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct AsyncCallTest_getStringRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef AsyncCallTest_getStringRequestTypeSupport TypeSupport;
    typedef AsyncCallTest_getStringRequestDataWriter DataWriter;
    typedef AsyncCallTest_getStringRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    char*  s1; /* maximum length = (255) */

    char*  s2; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AsyncCallTest_getStringRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AsyncCallTest_getStringRequestSeq, AsyncCallTest_getStringRequest);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getStringRequest_initialize(
        AsyncCallTest_getStringRequest* self);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getStringRequest_initialize_ex(
        AsyncCallTest_getStringRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void AsyncCallTest_getStringRequest_finalize(
        AsyncCallTest_getStringRequest* self);
                        
NDDSUSERDllExport
void AsyncCallTest_getStringRequest_finalize_ex(
        AsyncCallTest_getStringRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getStringRequest_copy(
        AsyncCallTest_getStringRequest* dst,
        const AsyncCallTest_getStringRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *AsyncCallTest_getStringReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct AsyncCallTest_getStringReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class AsyncCallTest_getStringReplyTypeSupport;
    class AsyncCallTest_getStringReplyDataWriter;
    class AsyncCallTest_getStringReplyDataReader;
#endif

#endif

            
    
class AsyncCallTest_getStringReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct AsyncCallTest_getStringReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef AsyncCallTest_getStringReplyTypeSupport TypeSupport;
    typedef AsyncCallTest_getStringReplyDataWriter DataWriter;
    typedef AsyncCallTest_getStringReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    char*  s2; /* maximum length = (255) */

    char*  s3; /* maximum length = (255) */

    char*  getString_ret; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AsyncCallTest_getStringReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AsyncCallTest_getStringReplySeq, AsyncCallTest_getStringReply);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getStringReply_initialize(
        AsyncCallTest_getStringReply* self);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getStringReply_initialize_ex(
        AsyncCallTest_getStringReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void AsyncCallTest_getStringReply_finalize(
        AsyncCallTest_getStringReply* self);
                        
NDDSUSERDllExport
void AsyncCallTest_getStringReply_finalize_ex(
        AsyncCallTest_getStringReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_getStringReply_copy(
        AsyncCallTest_getStringReply* dst,
        const AsyncCallTest_getStringReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *AsyncCallTest_duplicateRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct AsyncCallTest_duplicateRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class AsyncCallTest_duplicateRequestTypeSupport;
    class AsyncCallTest_duplicateRequestDataWriter;
    class AsyncCallTest_duplicateRequestDataReader;
#endif

#endif

            
    
class AsyncCallTest_duplicateRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct AsyncCallTest_duplicateRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef AsyncCallTest_duplicateRequestTypeSupport TypeSupport;
    typedef AsyncCallTest_duplicateRequestDataWriter DataWriter;
    typedef AsyncCallTest_duplicateRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    Structure  ev;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AsyncCallTest_duplicateRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AsyncCallTest_duplicateRequestSeq, AsyncCallTest_duplicateRequest);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_duplicateRequest_initialize(
        AsyncCallTest_duplicateRequest* self);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_duplicateRequest_initialize_ex(
        AsyncCallTest_duplicateRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void AsyncCallTest_duplicateRequest_finalize(
        AsyncCallTest_duplicateRequest* self);
                        
NDDSUSERDllExport
void AsyncCallTest_duplicateRequest_finalize_ex(
        AsyncCallTest_duplicateRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_duplicateRequest_copy(
        AsyncCallTest_duplicateRequest* dst,
        const AsyncCallTest_duplicateRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *AsyncCallTest_duplicateReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct AsyncCallTest_duplicateReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class AsyncCallTest_duplicateReplyTypeSupport;
    class AsyncCallTest_duplicateReplyDataWriter;
    class AsyncCallTest_duplicateReplyDataReader;
#endif

#endif

            
    
class AsyncCallTest_duplicateReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct AsyncCallTest_duplicateReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef AsyncCallTest_duplicateReplyTypeSupport TypeSupport;
    typedef AsyncCallTest_duplicateReplyDataWriter DataWriter;
    typedef AsyncCallTest_duplicateReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    Structure  duplicate_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AsyncCallTest_duplicateReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AsyncCallTest_duplicateReplySeq, AsyncCallTest_duplicateReply);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_duplicateReply_initialize(
        AsyncCallTest_duplicateReply* self);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_duplicateReply_initialize_ex(
        AsyncCallTest_duplicateReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void AsyncCallTest_duplicateReply_finalize(
        AsyncCallTest_duplicateReply* self);
                        
NDDSUSERDllExport
void AsyncCallTest_duplicateReply_finalize_ex(
        AsyncCallTest_duplicateReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool AsyncCallTest_duplicateReply_copy(
        AsyncCallTest_duplicateReply* dst,
        const AsyncCallTest_duplicateReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* AsyncCallTestRequestReply_842829275_h */
