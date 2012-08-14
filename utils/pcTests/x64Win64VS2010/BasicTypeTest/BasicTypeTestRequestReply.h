
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BasicTypeTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BasicTypeTestRequestReply_2120091076_h
#define BasicTypeTestRequestReply_2120091076_h

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


#include "BasicTypeTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getOctetRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getOctetRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getOctetRequestTypeSupport;
    class getOctetRequestDataWriter;
    class getOctetRequestDataReader;
#endif

#endif

            
    

typedef struct getOctetRequest
{
#ifdef __cplusplus
    typedef struct getOctetRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getOctetRequestTypeSupport TypeSupport;
    typedef getOctetRequestDataWriter DataWriter;
    typedef getOctetRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Octet  oc1;
    DDS_Octet  oc2;

} getOctetRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getOctetRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getOctetRequestSeq, getOctetRequest);
        
NDDSUSERDllExport
RTIBool getOctetRequest_initialize(
        getOctetRequest* self);
        
NDDSUSERDllExport
RTIBool getOctetRequest_initialize_ex(
        getOctetRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getOctetRequest_finalize(
        getOctetRequest* self);
                        
NDDSUSERDllExport
void getOctetRequest_finalize_ex(
        getOctetRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getOctetRequest_copy(
        getOctetRequest* dst,
        const getOctetRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getOctetReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getOctetReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getOctetReplyTypeSupport;
    class getOctetReplyDataWriter;
    class getOctetReplyDataReader;
#endif

#endif

            
    

typedef struct getOctetReply
{
#ifdef __cplusplus
    typedef struct getOctetReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getOctetReplyTypeSupport TypeSupport;
    typedef getOctetReplyDataWriter DataWriter;
    typedef getOctetReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    DDS_Octet  oc2;
    DDS_Octet  oc3;
    DDS_Octet  returnedValue;

} getOctetReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getOctetReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getOctetReplySeq, getOctetReply);
        
NDDSUSERDllExport
RTIBool getOctetReply_initialize(
        getOctetReply* self);
        
NDDSUSERDllExport
RTIBool getOctetReply_initialize_ex(
        getOctetReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getOctetReply_finalize(
        getOctetReply* self);
                        
NDDSUSERDllExport
void getOctetReply_finalize_ex(
        getOctetReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getOctetReply_copy(
        getOctetReply* dst,
        const getOctetReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getCharRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getCharRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getCharRequestTypeSupport;
    class getCharRequestDataWriter;
    class getCharRequestDataReader;
#endif

#endif

            
    

typedef struct getCharRequest
{
#ifdef __cplusplus
    typedef struct getCharRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getCharRequestTypeSupport TypeSupport;
    typedef getCharRequestDataWriter DataWriter;
    typedef getCharRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Char  ch1;
    DDS_Char  ch2;

} getCharRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getCharRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getCharRequestSeq, getCharRequest);
        
NDDSUSERDllExport
RTIBool getCharRequest_initialize(
        getCharRequest* self);
        
NDDSUSERDllExport
RTIBool getCharRequest_initialize_ex(
        getCharRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getCharRequest_finalize(
        getCharRequest* self);
                        
NDDSUSERDllExport
void getCharRequest_finalize_ex(
        getCharRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getCharRequest_copy(
        getCharRequest* dst,
        const getCharRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getCharReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getCharReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getCharReplyTypeSupport;
    class getCharReplyDataWriter;
    class getCharReplyDataReader;
#endif

#endif

            
    

typedef struct getCharReply
{
#ifdef __cplusplus
    typedef struct getCharReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getCharReplyTypeSupport TypeSupport;
    typedef getCharReplyDataWriter DataWriter;
    typedef getCharReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    DDS_Char  ch2;
    DDS_Char  ch3;
    DDS_Char  returnedValue;

} getCharReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getCharReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getCharReplySeq, getCharReply);
        
NDDSUSERDllExport
RTIBool getCharReply_initialize(
        getCharReply* self);
        
NDDSUSERDllExport
RTIBool getCharReply_initialize_ex(
        getCharReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getCharReply_finalize(
        getCharReply* self);
                        
NDDSUSERDllExport
void getCharReply_finalize_ex(
        getCharReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getCharReply_copy(
        getCharReply* dst,
        const getCharReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getWCharRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getWCharRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getWCharRequestTypeSupport;
    class getWCharRequestDataWriter;
    class getWCharRequestDataReader;
#endif

#endif

            
    

typedef struct getWCharRequest
{
#ifdef __cplusplus
    typedef struct getWCharRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getWCharRequestTypeSupport TypeSupport;
    typedef getWCharRequestDataWriter DataWriter;
    typedef getWCharRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Wchar  wch1;
    DDS_Wchar  wch2;

} getWCharRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getWCharRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getWCharRequestSeq, getWCharRequest);
        
NDDSUSERDllExport
RTIBool getWCharRequest_initialize(
        getWCharRequest* self);
        
NDDSUSERDllExport
RTIBool getWCharRequest_initialize_ex(
        getWCharRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getWCharRequest_finalize(
        getWCharRequest* self);
                        
NDDSUSERDllExport
void getWCharRequest_finalize_ex(
        getWCharRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getWCharRequest_copy(
        getWCharRequest* dst,
        const getWCharRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getWCharReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getWCharReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getWCharReplyTypeSupport;
    class getWCharReplyDataWriter;
    class getWCharReplyDataReader;
#endif

#endif

            
    

typedef struct getWCharReply
{
#ifdef __cplusplus
    typedef struct getWCharReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getWCharReplyTypeSupport TypeSupport;
    typedef getWCharReplyDataWriter DataWriter;
    typedef getWCharReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    DDS_Wchar  wch2;
    DDS_Wchar  wch3;
    DDS_Wchar  returnedValue;

} getWCharReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getWCharReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getWCharReplySeq, getWCharReply);
        
NDDSUSERDllExport
RTIBool getWCharReply_initialize(
        getWCharReply* self);
        
NDDSUSERDllExport
RTIBool getWCharReply_initialize_ex(
        getWCharReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getWCharReply_finalize(
        getWCharReply* self);
                        
NDDSUSERDllExport
void getWCharReply_finalize_ex(
        getWCharReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getWCharReply_copy(
        getWCharReply* dst,
        const getWCharReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getShortRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getShortRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getShortRequestTypeSupport;
    class getShortRequestDataWriter;
    class getShortRequestDataReader;
#endif

#endif

            
    

typedef struct getShortRequest
{
#ifdef __cplusplus
    typedef struct getShortRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getShortRequestTypeSupport TypeSupport;
    typedef getShortRequestDataWriter DataWriter;
    typedef getShortRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Short  sh1;
    DDS_Short  sh2;

} getShortRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getShortRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getShortRequestSeq, getShortRequest);
        
NDDSUSERDllExport
RTIBool getShortRequest_initialize(
        getShortRequest* self);
        
NDDSUSERDllExport
RTIBool getShortRequest_initialize_ex(
        getShortRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getShortRequest_finalize(
        getShortRequest* self);
                        
NDDSUSERDllExport
void getShortRequest_finalize_ex(
        getShortRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getShortRequest_copy(
        getShortRequest* dst,
        const getShortRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getShortReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getShortReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getShortReplyTypeSupport;
    class getShortReplyDataWriter;
    class getShortReplyDataReader;
#endif

#endif

            
    

typedef struct getShortReply
{
#ifdef __cplusplus
    typedef struct getShortReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getShortReplyTypeSupport TypeSupport;
    typedef getShortReplyDataWriter DataWriter;
    typedef getShortReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    DDS_Short  sh2;
    DDS_Short  sh3;
    DDS_Short  returnedValue;

} getShortReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getShortReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getShortReplySeq, getShortReply);
        
NDDSUSERDllExport
RTIBool getShortReply_initialize(
        getShortReply* self);
        
NDDSUSERDllExport
RTIBool getShortReply_initialize_ex(
        getShortReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getShortReply_finalize(
        getShortReply* self);
                        
NDDSUSERDllExport
void getShortReply_finalize_ex(
        getShortReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getShortReply_copy(
        getShortReply* dst,
        const getShortReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getUShortRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getUShortRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getUShortRequestTypeSupport;
    class getUShortRequestDataWriter;
    class getUShortRequestDataReader;
#endif

#endif

            
    

typedef struct getUShortRequest
{
#ifdef __cplusplus
    typedef struct getUShortRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getUShortRequestTypeSupport TypeSupport;
    typedef getUShortRequestDataWriter DataWriter;
    typedef getUShortRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_UnsignedShort  ush1;
    DDS_UnsignedShort  ush2;

} getUShortRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getUShortRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getUShortRequestSeq, getUShortRequest);
        
NDDSUSERDllExport
RTIBool getUShortRequest_initialize(
        getUShortRequest* self);
        
NDDSUSERDllExport
RTIBool getUShortRequest_initialize_ex(
        getUShortRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getUShortRequest_finalize(
        getUShortRequest* self);
                        
NDDSUSERDllExport
void getUShortRequest_finalize_ex(
        getUShortRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getUShortRequest_copy(
        getUShortRequest* dst,
        const getUShortRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getUShortReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getUShortReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getUShortReplyTypeSupport;
    class getUShortReplyDataWriter;
    class getUShortReplyDataReader;
#endif

#endif

            
    

typedef struct getUShortReply
{
#ifdef __cplusplus
    typedef struct getUShortReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getUShortReplyTypeSupport TypeSupport;
    typedef getUShortReplyDataWriter DataWriter;
    typedef getUShortReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    DDS_UnsignedShort  ush2;
    DDS_UnsignedShort  ush3;
    DDS_UnsignedShort  returnedValue;

} getUShortReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getUShortReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getUShortReplySeq, getUShortReply);
        
NDDSUSERDllExport
RTIBool getUShortReply_initialize(
        getUShortReply* self);
        
NDDSUSERDllExport
RTIBool getUShortReply_initialize_ex(
        getUShortReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getUShortReply_finalize(
        getUShortReply* self);
                        
NDDSUSERDllExport
void getUShortReply_finalize_ex(
        getUShortReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getUShortReply_copy(
        getUShortReply* dst,
        const getUShortReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getLongRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getLongRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getLongRequestTypeSupport;
    class getLongRequestDataWriter;
    class getLongRequestDataReader;
#endif

#endif

            
    

typedef struct getLongRequest
{
#ifdef __cplusplus
    typedef struct getLongRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getLongRequestTypeSupport TypeSupport;
    typedef getLongRequestDataWriter DataWriter;
    typedef getLongRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  lo1;
    DDS_Long  lo2;

} getLongRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getLongRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getLongRequestSeq, getLongRequest);
        
NDDSUSERDllExport
RTIBool getLongRequest_initialize(
        getLongRequest* self);
        
NDDSUSERDllExport
RTIBool getLongRequest_initialize_ex(
        getLongRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getLongRequest_finalize(
        getLongRequest* self);
                        
NDDSUSERDllExport
void getLongRequest_finalize_ex(
        getLongRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getLongRequest_copy(
        getLongRequest* dst,
        const getLongRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getLongReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getLongReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getLongReplyTypeSupport;
    class getLongReplyDataWriter;
    class getLongReplyDataReader;
#endif

#endif

            
    

typedef struct getLongReply
{
#ifdef __cplusplus
    typedef struct getLongReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getLongReplyTypeSupport TypeSupport;
    typedef getLongReplyDataWriter DataWriter;
    typedef getLongReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    DDS_Long  lo2;
    DDS_Long  lo3;
    DDS_Long  returnedValue;

} getLongReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getLongReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getLongReplySeq, getLongReply);
        
NDDSUSERDllExport
RTIBool getLongReply_initialize(
        getLongReply* self);
        
NDDSUSERDllExport
RTIBool getLongReply_initialize_ex(
        getLongReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getLongReply_finalize(
        getLongReply* self);
                        
NDDSUSERDllExport
void getLongReply_finalize_ex(
        getLongReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getLongReply_copy(
        getLongReply* dst,
        const getLongReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getULongRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getULongRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getULongRequestTypeSupport;
    class getULongRequestDataWriter;
    class getULongRequestDataReader;
#endif

#endif

            
    

typedef struct getULongRequest
{
#ifdef __cplusplus
    typedef struct getULongRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getULongRequestTypeSupport TypeSupport;
    typedef getULongRequestDataWriter DataWriter;
    typedef getULongRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_UnsignedLong  ulo1;
    DDS_UnsignedLong  ulo2;

} getULongRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getULongRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getULongRequestSeq, getULongRequest);
        
NDDSUSERDllExport
RTIBool getULongRequest_initialize(
        getULongRequest* self);
        
NDDSUSERDllExport
RTIBool getULongRequest_initialize_ex(
        getULongRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getULongRequest_finalize(
        getULongRequest* self);
                        
NDDSUSERDllExport
void getULongRequest_finalize_ex(
        getULongRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getULongRequest_copy(
        getULongRequest* dst,
        const getULongRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getULongReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getULongReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getULongReplyTypeSupport;
    class getULongReplyDataWriter;
    class getULongReplyDataReader;
#endif

#endif

            
    

typedef struct getULongReply
{
#ifdef __cplusplus
    typedef struct getULongReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getULongReplyTypeSupport TypeSupport;
    typedef getULongReplyDataWriter DataWriter;
    typedef getULongReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    DDS_UnsignedLong  ulo2;
    DDS_UnsignedLong  ulo3;
    DDS_UnsignedLong  returnedValue;

} getULongReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getULongReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getULongReplySeq, getULongReply);
        
NDDSUSERDllExport
RTIBool getULongReply_initialize(
        getULongReply* self);
        
NDDSUSERDllExport
RTIBool getULongReply_initialize_ex(
        getULongReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getULongReply_finalize(
        getULongReply* self);
                        
NDDSUSERDllExport
void getULongReply_finalize_ex(
        getULongReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getULongReply_copy(
        getULongReply* dst,
        const getULongReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getLLongRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getLLongRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getLLongRequestTypeSupport;
    class getLLongRequestDataWriter;
    class getLLongRequestDataReader;
#endif

#endif

            
    

typedef struct getLLongRequest
{
#ifdef __cplusplus
    typedef struct getLLongRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getLLongRequestTypeSupport TypeSupport;
    typedef getLLongRequestDataWriter DataWriter;
    typedef getLLongRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_LongLong  llo1;
    DDS_LongLong  llo2;

} getLLongRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getLLongRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getLLongRequestSeq, getLLongRequest);
        
NDDSUSERDllExport
RTIBool getLLongRequest_initialize(
        getLLongRequest* self);
        
NDDSUSERDllExport
RTIBool getLLongRequest_initialize_ex(
        getLLongRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getLLongRequest_finalize(
        getLLongRequest* self);
                        
NDDSUSERDllExport
void getLLongRequest_finalize_ex(
        getLLongRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getLLongRequest_copy(
        getLLongRequest* dst,
        const getLLongRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getLLongReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getLLongReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getLLongReplyTypeSupport;
    class getLLongReplyDataWriter;
    class getLLongReplyDataReader;
#endif

#endif

            
    

typedef struct getLLongReply
{
#ifdef __cplusplus
    typedef struct getLLongReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getLLongReplyTypeSupport TypeSupport;
    typedef getLLongReplyDataWriter DataWriter;
    typedef getLLongReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    DDS_LongLong  llo2;
    DDS_LongLong  llo3;
    DDS_LongLong  returnedValue;

} getLLongReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getLLongReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getLLongReplySeq, getLLongReply);
        
NDDSUSERDllExport
RTIBool getLLongReply_initialize(
        getLLongReply* self);
        
NDDSUSERDllExport
RTIBool getLLongReply_initialize_ex(
        getLLongReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getLLongReply_finalize(
        getLLongReply* self);
                        
NDDSUSERDllExport
void getLLongReply_finalize_ex(
        getLLongReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getLLongReply_copy(
        getLLongReply* dst,
        const getLLongReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getULLongRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getULLongRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getULLongRequestTypeSupport;
    class getULLongRequestDataWriter;
    class getULLongRequestDataReader;
#endif

#endif

            
    

typedef struct getULLongRequest
{
#ifdef __cplusplus
    typedef struct getULLongRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getULLongRequestTypeSupport TypeSupport;
    typedef getULLongRequestDataWriter DataWriter;
    typedef getULLongRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_UnsignedLongLong  ullo1;
    DDS_UnsignedLongLong  ullo2;

} getULLongRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getULLongRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getULLongRequestSeq, getULLongRequest);
        
NDDSUSERDllExport
RTIBool getULLongRequest_initialize(
        getULLongRequest* self);
        
NDDSUSERDllExport
RTIBool getULLongRequest_initialize_ex(
        getULLongRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getULLongRequest_finalize(
        getULLongRequest* self);
                        
NDDSUSERDllExport
void getULLongRequest_finalize_ex(
        getULLongRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getULLongRequest_copy(
        getULLongRequest* dst,
        const getULLongRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getULLongReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getULLongReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getULLongReplyTypeSupport;
    class getULLongReplyDataWriter;
    class getULLongReplyDataReader;
#endif

#endif

            
    

typedef struct getULLongReply
{
#ifdef __cplusplus
    typedef struct getULLongReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getULLongReplyTypeSupport TypeSupport;
    typedef getULLongReplyDataWriter DataWriter;
    typedef getULLongReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    DDS_UnsignedLongLong  ullo2;
    DDS_UnsignedLongLong  ullo3;
    DDS_UnsignedLongLong  returnedValue;

} getULLongReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getULLongReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getULLongReplySeq, getULLongReply);
        
NDDSUSERDllExport
RTIBool getULLongReply_initialize(
        getULLongReply* self);
        
NDDSUSERDllExport
RTIBool getULLongReply_initialize_ex(
        getULLongReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getULLongReply_finalize(
        getULLongReply* self);
                        
NDDSUSERDllExport
void getULLongReply_finalize_ex(
        getULLongReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getULLongReply_copy(
        getULLongReply* dst,
        const getULLongReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getFloatRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getFloatRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getFloatRequestTypeSupport;
    class getFloatRequestDataWriter;
    class getFloatRequestDataReader;
#endif

#endif

            
    

typedef struct getFloatRequest
{
#ifdef __cplusplus
    typedef struct getFloatRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getFloatRequestTypeSupport TypeSupport;
    typedef getFloatRequestDataWriter DataWriter;
    typedef getFloatRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Float  fl1;
    DDS_Float  fl2;

} getFloatRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getFloatRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getFloatRequestSeq, getFloatRequest);
        
NDDSUSERDllExport
RTIBool getFloatRequest_initialize(
        getFloatRequest* self);
        
NDDSUSERDllExport
RTIBool getFloatRequest_initialize_ex(
        getFloatRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getFloatRequest_finalize(
        getFloatRequest* self);
                        
NDDSUSERDllExport
void getFloatRequest_finalize_ex(
        getFloatRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getFloatRequest_copy(
        getFloatRequest* dst,
        const getFloatRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getFloatReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getFloatReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getFloatReplyTypeSupport;
    class getFloatReplyDataWriter;
    class getFloatReplyDataReader;
#endif

#endif

            
    

typedef struct getFloatReply
{
#ifdef __cplusplus
    typedef struct getFloatReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getFloatReplyTypeSupport TypeSupport;
    typedef getFloatReplyDataWriter DataWriter;
    typedef getFloatReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    DDS_Float  fl2;
    DDS_Float  fl3;
    DDS_Float  returnedValue;

} getFloatReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getFloatReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getFloatReplySeq, getFloatReply);
        
NDDSUSERDllExport
RTIBool getFloatReply_initialize(
        getFloatReply* self);
        
NDDSUSERDllExport
RTIBool getFloatReply_initialize_ex(
        getFloatReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getFloatReply_finalize(
        getFloatReply* self);
                        
NDDSUSERDllExport
void getFloatReply_finalize_ex(
        getFloatReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getFloatReply_copy(
        getFloatReply* dst,
        const getFloatReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getDoubleRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getDoubleRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getDoubleRequestTypeSupport;
    class getDoubleRequestDataWriter;
    class getDoubleRequestDataReader;
#endif

#endif

            
    

typedef struct getDoubleRequest
{
#ifdef __cplusplus
    typedef struct getDoubleRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getDoubleRequestTypeSupport TypeSupport;
    typedef getDoubleRequestDataWriter DataWriter;
    typedef getDoubleRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Double  do1;
    DDS_Double  do2;

} getDoubleRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getDoubleRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getDoubleRequestSeq, getDoubleRequest);
        
NDDSUSERDllExport
RTIBool getDoubleRequest_initialize(
        getDoubleRequest* self);
        
NDDSUSERDllExport
RTIBool getDoubleRequest_initialize_ex(
        getDoubleRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getDoubleRequest_finalize(
        getDoubleRequest* self);
                        
NDDSUSERDllExport
void getDoubleRequest_finalize_ex(
        getDoubleRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getDoubleRequest_copy(
        getDoubleRequest* dst,
        const getDoubleRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getDoubleReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getDoubleReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getDoubleReplyTypeSupport;
    class getDoubleReplyDataWriter;
    class getDoubleReplyDataReader;
#endif

#endif

            
    

typedef struct getDoubleReply
{
#ifdef __cplusplus
    typedef struct getDoubleReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getDoubleReplyTypeSupport TypeSupport;
    typedef getDoubleReplyDataWriter DataWriter;
    typedef getDoubleReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    DDS_Double  do2;
    DDS_Double  do3;
    DDS_Double  returnedValue;

} getDoubleReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getDoubleReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getDoubleReplySeq, getDoubleReply);
        
NDDSUSERDllExport
RTIBool getDoubleReply_initialize(
        getDoubleReply* self);
        
NDDSUSERDllExport
RTIBool getDoubleReply_initialize_ex(
        getDoubleReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getDoubleReply_finalize(
        getDoubleReply* self);
                        
NDDSUSERDllExport
void getDoubleReply_finalize_ex(
        getDoubleReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getDoubleReply_copy(
        getDoubleReply* dst,
        const getDoubleReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getBooleanRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getBooleanRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getBooleanRequestTypeSupport;
    class getBooleanRequestDataWriter;
    class getBooleanRequestDataReader;
#endif

#endif

            
    

typedef struct getBooleanRequest
{
#ifdef __cplusplus
    typedef struct getBooleanRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getBooleanRequestTypeSupport TypeSupport;
    typedef getBooleanRequestDataWriter DataWriter;
    typedef getBooleanRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Boolean  bo1;
    DDS_Boolean  bo2;

} getBooleanRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getBooleanRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getBooleanRequestSeq, getBooleanRequest);
        
NDDSUSERDllExport
RTIBool getBooleanRequest_initialize(
        getBooleanRequest* self);
        
NDDSUSERDllExport
RTIBool getBooleanRequest_initialize_ex(
        getBooleanRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getBooleanRequest_finalize(
        getBooleanRequest* self);
                        
NDDSUSERDllExport
void getBooleanRequest_finalize_ex(
        getBooleanRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getBooleanRequest_copy(
        getBooleanRequest* dst,
        const getBooleanRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getBooleanReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getBooleanReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getBooleanReplyTypeSupport;
    class getBooleanReplyDataWriter;
    class getBooleanReplyDataReader;
#endif

#endif

            
    

typedef struct getBooleanReply
{
#ifdef __cplusplus
    typedef struct getBooleanReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getBooleanReplyTypeSupport TypeSupport;
    typedef getBooleanReplyDataWriter DataWriter;
    typedef getBooleanReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    DDS_Boolean  bo2;
    DDS_Boolean  bo3;
    DDS_Boolean  returnedValue;

} getBooleanReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getBooleanReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getBooleanReplySeq, getBooleanReply);
        
NDDSUSERDllExport
RTIBool getBooleanReply_initialize(
        getBooleanReply* self);
        
NDDSUSERDllExport
RTIBool getBooleanReply_initialize_ex(
        getBooleanReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getBooleanReply_finalize(
        getBooleanReply* self);
                        
NDDSUSERDllExport
void getBooleanReply_finalize_ex(
        getBooleanReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getBooleanReply_copy(
        getBooleanReply* dst,
        const getBooleanReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* BasicTypeTestRequestReply_2120091076_h */
