
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SequenceTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SequenceTestRequestReply_1689902559_h
#define SequenceTestRequestReply_1689902559_h

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


#include "SequenceTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *SequenceTest_getSLongRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct SequenceTest_getSLongRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SequenceTest_getSLongRequestTypeSupport;
    class SequenceTest_getSLongRequestDataWriter;
    class SequenceTest_getSLongRequestDataReader;
#endif

#endif

            
    

typedef struct SequenceTest_getSLongRequest
{
#ifdef __cplusplus
    typedef struct SequenceTest_getSLongRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SequenceTest_getSLongRequestTypeSupport TypeSupport;
    typedef SequenceTest_getSLongRequestDataWriter DataWriter;
    typedef SequenceTest_getSLongRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    largo  l1;
    largo  l2;

} SequenceTest_getSLongRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SequenceTest_getSLongRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SequenceTest_getSLongRequestSeq, SequenceTest_getSLongRequest);
        
NDDSUSERDllExport
RTIBool SequenceTest_getSLongRequest_initialize(
        SequenceTest_getSLongRequest* self);
        
NDDSUSERDllExport
RTIBool SequenceTest_getSLongRequest_initialize_ex(
        SequenceTest_getSLongRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void SequenceTest_getSLongRequest_finalize(
        SequenceTest_getSLongRequest* self);
                        
NDDSUSERDllExport
void SequenceTest_getSLongRequest_finalize_ex(
        SequenceTest_getSLongRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool SequenceTest_getSLongRequest_copy(
        SequenceTest_getSLongRequest* dst,
        const SequenceTest_getSLongRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *SequenceTest_getSLongReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct SequenceTest_getSLongReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class SequenceTest_getSLongReplyTypeSupport;
    class SequenceTest_getSLongReplyDataWriter;
    class SequenceTest_getSLongReplyDataReader;
#endif

#endif

            
    

typedef struct SequenceTest_getSLongReply
{
#ifdef __cplusplus
    typedef struct SequenceTest_getSLongReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SequenceTest_getSLongReplyTypeSupport TypeSupport;
    typedef SequenceTest_getSLongReplyDataWriter DataWriter;
    typedef SequenceTest_getSLongReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    largo  l2;
    largo  l3;
    largo  getSLong_ret;

} SequenceTest_getSLongReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SequenceTest_getSLongReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SequenceTest_getSLongReplySeq, SequenceTest_getSLongReply);
        
NDDSUSERDllExport
RTIBool SequenceTest_getSLongReply_initialize(
        SequenceTest_getSLongReply* self);
        
NDDSUSERDllExport
RTIBool SequenceTest_getSLongReply_initialize_ex(
        SequenceTest_getSLongReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void SequenceTest_getSLongReply_finalize(
        SequenceTest_getSLongReply* self);
                        
NDDSUSERDllExport
void SequenceTest_getSLongReply_finalize_ex(
        SequenceTest_getSLongReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool SequenceTest_getSLongReply_copy(
        SequenceTest_getSLongReply* dst,
        const SequenceTest_getSLongReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *SequenceTest_getStringRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct SequenceTest_getStringRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SequenceTest_getStringRequestTypeSupport;
    class SequenceTest_getStringRequestDataWriter;
    class SequenceTest_getStringRequestDataReader;
#endif

#endif

            
    

typedef struct SequenceTest_getStringRequest
{
#ifdef __cplusplus
    typedef struct SequenceTest_getStringRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SequenceTest_getStringRequestTypeSupport TypeSupport;
    typedef SequenceTest_getStringRequestDataWriter DataWriter;
    typedef SequenceTest_getStringRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    cadena  s1;
    cadena  s2;

} SequenceTest_getStringRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SequenceTest_getStringRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SequenceTest_getStringRequestSeq, SequenceTest_getStringRequest);
        
NDDSUSERDllExport
RTIBool SequenceTest_getStringRequest_initialize(
        SequenceTest_getStringRequest* self);
        
NDDSUSERDllExport
RTIBool SequenceTest_getStringRequest_initialize_ex(
        SequenceTest_getStringRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void SequenceTest_getStringRequest_finalize(
        SequenceTest_getStringRequest* self);
                        
NDDSUSERDllExport
void SequenceTest_getStringRequest_finalize_ex(
        SequenceTest_getStringRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool SequenceTest_getStringRequest_copy(
        SequenceTest_getStringRequest* dst,
        const SequenceTest_getStringRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *SequenceTest_getStringReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct SequenceTest_getStringReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class SequenceTest_getStringReplyTypeSupport;
    class SequenceTest_getStringReplyDataWriter;
    class SequenceTest_getStringReplyDataReader;
#endif

#endif

            
    

typedef struct SequenceTest_getStringReply
{
#ifdef __cplusplus
    typedef struct SequenceTest_getStringReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SequenceTest_getStringReplyTypeSupport TypeSupport;
    typedef SequenceTest_getStringReplyDataWriter DataWriter;
    typedef SequenceTest_getStringReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    cadena  s2;
    cadena  s3;
    cadena  getString_ret;

} SequenceTest_getStringReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SequenceTest_getStringReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SequenceTest_getStringReplySeq, SequenceTest_getStringReply);
        
NDDSUSERDllExport
RTIBool SequenceTest_getStringReply_initialize(
        SequenceTest_getStringReply* self);
        
NDDSUSERDllExport
RTIBool SequenceTest_getStringReply_initialize_ex(
        SequenceTest_getStringReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void SequenceTest_getStringReply_finalize(
        SequenceTest_getStringReply* self);
                        
NDDSUSERDllExport
void SequenceTest_getStringReply_finalize_ex(
        SequenceTest_getStringReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool SequenceTest_getStringReply_copy(
        SequenceTest_getStringReply* dst,
        const SequenceTest_getStringReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *SequenceTest_getStringBoundedRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct SequenceTest_getStringBoundedRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SequenceTest_getStringBoundedRequestTypeSupport;
    class SequenceTest_getStringBoundedRequestDataWriter;
    class SequenceTest_getStringBoundedRequestDataReader;
#endif

#endif

            
    

typedef struct SequenceTest_getStringBoundedRequest
{
#ifdef __cplusplus
    typedef struct SequenceTest_getStringBoundedRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SequenceTest_getStringBoundedRequestTypeSupport TypeSupport;
    typedef SequenceTest_getStringBoundedRequestDataWriter DataWriter;
    typedef SequenceTest_getStringBoundedRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    dattos  sb1;
    dattos  sb2;

} SequenceTest_getStringBoundedRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SequenceTest_getStringBoundedRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SequenceTest_getStringBoundedRequestSeq, SequenceTest_getStringBoundedRequest);
        
NDDSUSERDllExport
RTIBool SequenceTest_getStringBoundedRequest_initialize(
        SequenceTest_getStringBoundedRequest* self);
        
NDDSUSERDllExport
RTIBool SequenceTest_getStringBoundedRequest_initialize_ex(
        SequenceTest_getStringBoundedRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void SequenceTest_getStringBoundedRequest_finalize(
        SequenceTest_getStringBoundedRequest* self);
                        
NDDSUSERDllExport
void SequenceTest_getStringBoundedRequest_finalize_ex(
        SequenceTest_getStringBoundedRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool SequenceTest_getStringBoundedRequest_copy(
        SequenceTest_getStringBoundedRequest* dst,
        const SequenceTest_getStringBoundedRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *SequenceTest_getStringBoundedReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct SequenceTest_getStringBoundedReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class SequenceTest_getStringBoundedReplyTypeSupport;
    class SequenceTest_getStringBoundedReplyDataWriter;
    class SequenceTest_getStringBoundedReplyDataReader;
#endif

#endif

            
    

typedef struct SequenceTest_getStringBoundedReply
{
#ifdef __cplusplus
    typedef struct SequenceTest_getStringBoundedReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SequenceTest_getStringBoundedReplyTypeSupport TypeSupport;
    typedef SequenceTest_getStringBoundedReplyDataWriter DataWriter;
    typedef SequenceTest_getStringBoundedReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    dattos  sb2;
    dattos  sb3;
    dattos  getStringBounded_ret;

} SequenceTest_getStringBoundedReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SequenceTest_getStringBoundedReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SequenceTest_getStringBoundedReplySeq, SequenceTest_getStringBoundedReply);
        
NDDSUSERDllExport
RTIBool SequenceTest_getStringBoundedReply_initialize(
        SequenceTest_getStringBoundedReply* self);
        
NDDSUSERDllExport
RTIBool SequenceTest_getStringBoundedReply_initialize_ex(
        SequenceTest_getStringBoundedReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void SequenceTest_getStringBoundedReply_finalize(
        SequenceTest_getStringBoundedReply* self);
                        
NDDSUSERDllExport
void SequenceTest_getStringBoundedReply_finalize_ex(
        SequenceTest_getStringBoundedReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool SequenceTest_getStringBoundedReply_copy(
        SequenceTest_getStringBoundedReply* dst,
        const SequenceTest_getStringBoundedReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* SequenceTestRequestReply_1689902559_h */
