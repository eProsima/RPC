
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ServerExceptionRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ServerExceptionRequestReply_2113075547_h
#define ServerExceptionRequestReply_2113075547_h

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


#include "ServerException.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *sendExceptionRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct sendExceptionRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class sendExceptionRequestTypeSupport;
    class sendExceptionRequestDataWriter;
    class sendExceptionRequestDataReader;
#endif

#endif

            
    

typedef struct sendExceptionRequest
{
#ifdef __cplusplus
    typedef struct sendExceptionRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef sendExceptionRequestTypeSupport TypeSupport;
    typedef sendExceptionRequestDataWriter DataWriter;
    typedef sendExceptionRequestDataReader DataReader;
#endif

#endif

    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;

} sendExceptionRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* sendExceptionRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(sendExceptionRequestSeq, sendExceptionRequest);
        
NDDSUSERDllExport
RTIBool sendExceptionRequest_initialize(
        sendExceptionRequest* self);
        
NDDSUSERDllExport
RTIBool sendExceptionRequest_initialize_ex(
        sendExceptionRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void sendExceptionRequest_finalize(
        sendExceptionRequest* self);
                        
NDDSUSERDllExport
void sendExceptionRequest_finalize_ex(
        sendExceptionRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool sendExceptionRequest_copy(
        sendExceptionRequest* dst,
        const sendExceptionRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *sendExceptionReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct sendExceptionReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class sendExceptionReplyTypeSupport;
    class sendExceptionReplyDataWriter;
    class sendExceptionReplyDataReader;
#endif

#endif

            
    

typedef struct sendExceptionReply
{
#ifdef __cplusplus
    typedef struct sendExceptionReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef sendExceptionReplyTypeSupport TypeSupport;
    typedef sendExceptionReplyDataWriter DataWriter;
    typedef sendExceptionReplyDataReader DataReader;
#endif

#endif

    Identification  serverServiceId;
    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    DDS_Long  ddsrpcRetCode;

} sendExceptionReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* sendExceptionReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(sendExceptionReplySeq, sendExceptionReply);
        
NDDSUSERDllExport
RTIBool sendExceptionReply_initialize(
        sendExceptionReply* self);
        
NDDSUSERDllExport
RTIBool sendExceptionReply_initialize_ex(
        sendExceptionReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void sendExceptionReply_finalize(
        sendExceptionReply* self);
                        
NDDSUSERDllExport
void sendExceptionReply_finalize_ex(
        sendExceptionReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool sendExceptionReply_copy(
        sendExceptionReply* dst,
        const sendExceptionReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *sendExceptionTwoRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct sendExceptionTwoRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class sendExceptionTwoRequestTypeSupport;
    class sendExceptionTwoRequestDataWriter;
    class sendExceptionTwoRequestDataReader;
#endif

#endif

            
    

typedef struct sendExceptionTwoRequest
{
#ifdef __cplusplus
    typedef struct sendExceptionTwoRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef sendExceptionTwoRequestTypeSupport TypeSupport;
    typedef sendExceptionTwoRequestDataWriter DataWriter;
    typedef sendExceptionTwoRequestDataReader DataReader;
#endif

#endif

    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    char*  message; /* maximum length = (255) */
    char*  message2; /* maximum length = (255) */

} sendExceptionTwoRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* sendExceptionTwoRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(sendExceptionTwoRequestSeq, sendExceptionTwoRequest);
        
NDDSUSERDllExport
RTIBool sendExceptionTwoRequest_initialize(
        sendExceptionTwoRequest* self);
        
NDDSUSERDllExport
RTIBool sendExceptionTwoRequest_initialize_ex(
        sendExceptionTwoRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void sendExceptionTwoRequest_finalize(
        sendExceptionTwoRequest* self);
                        
NDDSUSERDllExport
void sendExceptionTwoRequest_finalize_ex(
        sendExceptionTwoRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool sendExceptionTwoRequest_copy(
        sendExceptionTwoRequest* dst,
        const sendExceptionTwoRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *sendExceptionTwoReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct sendExceptionTwoReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class sendExceptionTwoReplyTypeSupport;
    class sendExceptionTwoReplyDataWriter;
    class sendExceptionTwoReplyDataReader;
#endif

#endif

            
    

typedef struct sendExceptionTwoReply
{
#ifdef __cplusplus
    typedef struct sendExceptionTwoReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef sendExceptionTwoReplyTypeSupport TypeSupport;
    typedef sendExceptionTwoReplyDataWriter DataWriter;
    typedef sendExceptionTwoReplyDataReader DataReader;
#endif

#endif

    Identification  serverServiceId;
    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    DDS_Long  ddsrpcRetCode;
    char*  message2; /* maximum length = (255) */
    char*  message3; /* maximum length = (255) */
    char*  sendExceptionTwo_ret; /* maximum length = (255) */

} sendExceptionTwoReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* sendExceptionTwoReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(sendExceptionTwoReplySeq, sendExceptionTwoReply);
        
NDDSUSERDllExport
RTIBool sendExceptionTwoReply_initialize(
        sendExceptionTwoReply* self);
        
NDDSUSERDllExport
RTIBool sendExceptionTwoReply_initialize_ex(
        sendExceptionTwoReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void sendExceptionTwoReply_finalize(
        sendExceptionTwoReply* self);
                        
NDDSUSERDllExport
void sendExceptionTwoReply_finalize_ex(
        sendExceptionTwoReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool sendExceptionTwoReply_copy(
        sendExceptionTwoReply* dst,
        const sendExceptionTwoReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *sendExceptionThreeRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct sendExceptionThreeRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class sendExceptionThreeRequestTypeSupport;
    class sendExceptionThreeRequestDataWriter;
    class sendExceptionThreeRequestDataReader;
#endif

#endif

            
    

typedef struct sendExceptionThreeRequest
{
#ifdef __cplusplus
    typedef struct sendExceptionThreeRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef sendExceptionThreeRequestTypeSupport TypeSupport;
    typedef sendExceptionThreeRequestDataWriter DataWriter;
    typedef sendExceptionThreeRequestDataReader DataReader;
#endif

#endif

    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    Estructura  es;
    Estructura  es2;

} sendExceptionThreeRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* sendExceptionThreeRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(sendExceptionThreeRequestSeq, sendExceptionThreeRequest);
        
NDDSUSERDllExport
RTIBool sendExceptionThreeRequest_initialize(
        sendExceptionThreeRequest* self);
        
NDDSUSERDllExport
RTIBool sendExceptionThreeRequest_initialize_ex(
        sendExceptionThreeRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void sendExceptionThreeRequest_finalize(
        sendExceptionThreeRequest* self);
                        
NDDSUSERDllExport
void sendExceptionThreeRequest_finalize_ex(
        sendExceptionThreeRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool sendExceptionThreeRequest_copy(
        sendExceptionThreeRequest* dst,
        const sendExceptionThreeRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *sendExceptionThreeReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct sendExceptionThreeReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class sendExceptionThreeReplyTypeSupport;
    class sendExceptionThreeReplyDataWriter;
    class sendExceptionThreeReplyDataReader;
#endif

#endif

            
    

typedef struct sendExceptionThreeReply
{
#ifdef __cplusplus
    typedef struct sendExceptionThreeReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef sendExceptionThreeReplyTypeSupport TypeSupport;
    typedef sendExceptionThreeReplyDataWriter DataWriter;
    typedef sendExceptionThreeReplyDataReader DataReader;
#endif

#endif

    Identification  serverServiceId;
    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    DDS_Long  ddsrpcRetCode;
    Estructura  es2;
    Estructura  es3;
    Estructura  sendExceptionThree_ret;

} sendExceptionThreeReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* sendExceptionThreeReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(sendExceptionThreeReplySeq, sendExceptionThreeReply);
        
NDDSUSERDllExport
RTIBool sendExceptionThreeReply_initialize(
        sendExceptionThreeReply* self);
        
NDDSUSERDllExport
RTIBool sendExceptionThreeReply_initialize_ex(
        sendExceptionThreeReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void sendExceptionThreeReply_finalize(
        sendExceptionThreeReply* self);
                        
NDDSUSERDllExport
void sendExceptionThreeReply_finalize_ex(
        sendExceptionThreeReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool sendExceptionThreeReply_copy(
        sendExceptionThreeReply* dst,
        const sendExceptionThreeReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* ServerExceptionRequestReply_2113075547_h */
