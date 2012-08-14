
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SequenceTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SequenceTestRequestReply_1689902913_h
#define SequenceTestRequestReply_1689902913_h

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


#include "SequenceTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getSLongRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getSLongRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getSLongRequestTypeSupport;
    class getSLongRequestDataWriter;
    class getSLongRequestDataReader;
#endif

#endif

            
    

typedef struct getSLongRequest
{
#ifdef __cplusplus
    typedef struct getSLongRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getSLongRequestTypeSupport TypeSupport;
    typedef getSLongRequestDataWriter DataWriter;
    typedef getSLongRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    largo  l1;
    largo  l2;

} getSLongRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getSLongRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getSLongRequestSeq, getSLongRequest);
        
NDDSUSERDllExport
RTIBool getSLongRequest_initialize(
        getSLongRequest* self);
        
NDDSUSERDllExport
RTIBool getSLongRequest_initialize_ex(
        getSLongRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getSLongRequest_finalize(
        getSLongRequest* self);
                        
NDDSUSERDllExport
void getSLongRequest_finalize_ex(
        getSLongRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getSLongRequest_copy(
        getSLongRequest* dst,
        const getSLongRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getSLongReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getSLongReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getSLongReplyTypeSupport;
    class getSLongReplyDataWriter;
    class getSLongReplyDataReader;
#endif

#endif

            
    

typedef struct getSLongReply
{
#ifdef __cplusplus
    typedef struct getSLongReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getSLongReplyTypeSupport TypeSupport;
    typedef getSLongReplyDataWriter DataWriter;
    typedef getSLongReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    largo  l2;
    largo  l3;
    largo  returnedValue;

} getSLongReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getSLongReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getSLongReplySeq, getSLongReply);
        
NDDSUSERDllExport
RTIBool getSLongReply_initialize(
        getSLongReply* self);
        
NDDSUSERDllExport
RTIBool getSLongReply_initialize_ex(
        getSLongReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getSLongReply_finalize(
        getSLongReply* self);
                        
NDDSUSERDllExport
void getSLongReply_finalize_ex(
        getSLongReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getSLongReply_copy(
        getSLongReply* dst,
        const getSLongReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getStringRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getStringRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getStringRequestTypeSupport;
    class getStringRequestDataWriter;
    class getStringRequestDataReader;
#endif

#endif

            
    

typedef struct getStringRequest
{
#ifdef __cplusplus
    typedef struct getStringRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getStringRequestTypeSupport TypeSupport;
    typedef getStringRequestDataWriter DataWriter;
    typedef getStringRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    cadena  s1;
    cadena  s2;

} getStringRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getStringRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getStringRequestSeq, getStringRequest);
        
NDDSUSERDllExport
RTIBool getStringRequest_initialize(
        getStringRequest* self);
        
NDDSUSERDllExport
RTIBool getStringRequest_initialize_ex(
        getStringRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getStringRequest_finalize(
        getStringRequest* self);
                        
NDDSUSERDllExport
void getStringRequest_finalize_ex(
        getStringRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getStringRequest_copy(
        getStringRequest* dst,
        const getStringRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getStringReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getStringReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getStringReplyTypeSupport;
    class getStringReplyDataWriter;
    class getStringReplyDataReader;
#endif

#endif

            
    

typedef struct getStringReply
{
#ifdef __cplusplus
    typedef struct getStringReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getStringReplyTypeSupport TypeSupport;
    typedef getStringReplyDataWriter DataWriter;
    typedef getStringReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    cadena  s2;
    cadena  s3;
    cadena  returnedValue;

} getStringReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getStringReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getStringReplySeq, getStringReply);
        
NDDSUSERDllExport
RTIBool getStringReply_initialize(
        getStringReply* self);
        
NDDSUSERDllExport
RTIBool getStringReply_initialize_ex(
        getStringReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getStringReply_finalize(
        getStringReply* self);
                        
NDDSUSERDllExport
void getStringReply_finalize_ex(
        getStringReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getStringReply_copy(
        getStringReply* dst,
        const getStringReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getStringBoundedRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getStringBoundedRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getStringBoundedRequestTypeSupport;
    class getStringBoundedRequestDataWriter;
    class getStringBoundedRequestDataReader;
#endif

#endif

            
    

typedef struct getStringBoundedRequest
{
#ifdef __cplusplus
    typedef struct getStringBoundedRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getStringBoundedRequestTypeSupport TypeSupport;
    typedef getStringBoundedRequestDataWriter DataWriter;
    typedef getStringBoundedRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    dattos  sb1;
    dattos  sb2;

} getStringBoundedRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getStringBoundedRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getStringBoundedRequestSeq, getStringBoundedRequest);
        
NDDSUSERDllExport
RTIBool getStringBoundedRequest_initialize(
        getStringBoundedRequest* self);
        
NDDSUSERDllExport
RTIBool getStringBoundedRequest_initialize_ex(
        getStringBoundedRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getStringBoundedRequest_finalize(
        getStringBoundedRequest* self);
                        
NDDSUSERDllExport
void getStringBoundedRequest_finalize_ex(
        getStringBoundedRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getStringBoundedRequest_copy(
        getStringBoundedRequest* dst,
        const getStringBoundedRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getStringBoundedReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getStringBoundedReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getStringBoundedReplyTypeSupport;
    class getStringBoundedReplyDataWriter;
    class getStringBoundedReplyDataReader;
#endif

#endif

            
    

typedef struct getStringBoundedReply
{
#ifdef __cplusplus
    typedef struct getStringBoundedReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getStringBoundedReplyTypeSupport TypeSupport;
    typedef getStringBoundedReplyDataWriter DataWriter;
    typedef getStringBoundedReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    dattos  sb2;
    dattos  sb3;
    dattos  returnedValue;

} getStringBoundedReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getStringBoundedReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getStringBoundedReplySeq, getStringBoundedReply);
        
NDDSUSERDllExport
RTIBool getStringBoundedReply_initialize(
        getStringBoundedReply* self);
        
NDDSUSERDllExport
RTIBool getStringBoundedReply_initialize_ex(
        getStringBoundedReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getStringBoundedReply_finalize(
        getStringBoundedReply* self);
                        
NDDSUSERDllExport
void getStringBoundedReply_finalize_ex(
        getStringBoundedReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getStringBoundedReply_copy(
        getStringBoundedReply* dst,
        const getStringBoundedReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* SequenceTestRequestReply_1689902913_h */
