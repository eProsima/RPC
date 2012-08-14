
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EnumYStringTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef EnumYStringTestRequestReply_1383307684_h
#define EnumYStringTestRequestReply_1383307684_h

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


#include "EnumYStringTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getEnumRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getEnumRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getEnumRequestTypeSupport;
    class getEnumRequestDataWriter;
    class getEnumRequestDataReader;
#endif

#endif

            
    

typedef struct getEnumRequest
{
#ifdef __cplusplus
    typedef struct getEnumRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getEnumRequestTypeSupport TypeSupport;
    typedef getEnumRequestDataWriter DataWriter;
    typedef getEnumRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    Valores  v1;
    Valores  v2;

} getEnumRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getEnumRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getEnumRequestSeq, getEnumRequest);
        
NDDSUSERDllExport
RTIBool getEnumRequest_initialize(
        getEnumRequest* self);
        
NDDSUSERDllExport
RTIBool getEnumRequest_initialize_ex(
        getEnumRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getEnumRequest_finalize(
        getEnumRequest* self);
                        
NDDSUSERDllExport
void getEnumRequest_finalize_ex(
        getEnumRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getEnumRequest_copy(
        getEnumRequest* dst,
        const getEnumRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getEnumReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getEnumReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getEnumReplyTypeSupport;
    class getEnumReplyDataWriter;
    class getEnumReplyDataReader;
#endif

#endif

            
    

typedef struct getEnumReply
{
#ifdef __cplusplus
    typedef struct getEnumReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getEnumReplyTypeSupport TypeSupport;
    typedef getEnumReplyDataWriter DataWriter;
    typedef getEnumReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    Valores  v2;
    Valores  v3;
    Valores  returnedValue;

} getEnumReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getEnumReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getEnumReplySeq, getEnumReply);
        
NDDSUSERDllExport
RTIBool getEnumReply_initialize(
        getEnumReply* self);
        
NDDSUSERDllExport
RTIBool getEnumReply_initialize_ex(
        getEnumReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getEnumReply_finalize(
        getEnumReply* self);
                        
NDDSUSERDllExport
void getEnumReply_finalize_ex(
        getEnumReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getEnumReply_copy(
        getEnumReply* dst,
        const getEnumReply* src);

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
    char*  s1; /* maximum length = (255) */
    char*  s2; /* maximum length = (255) */

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
    char*  s2; /* maximum length = (255) */
    char*  s3; /* maximum length = (255) */
    char*  returnedValue; /* maximum length = (255) */

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
    char*  sb1; /* maximum length = (255) */
    char*  sb2; /* maximum length = (255) */

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
    char*  sb2; /* maximum length = (255) */
    char*  sb3; /* maximum length = (255) */
    char*  returnedValue; /* maximum length = (255) */

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



#endif /* EnumYStringTestRequestReply_1383307684_h */
