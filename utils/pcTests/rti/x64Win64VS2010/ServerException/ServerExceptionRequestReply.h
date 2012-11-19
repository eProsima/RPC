
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ServerExceptionRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ServerExceptionRequestReply_2113075668_h
#define ServerExceptionRequestReply_2113075668_h

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

        
extern const char *ServerException_sendExceptionRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct ServerException_sendExceptionRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ServerException_sendExceptionRequestTypeSupport;
    class ServerException_sendExceptionRequestDataWriter;
    class ServerException_sendExceptionRequestDataReader;
#endif

#endif

            
    
class ServerException_sendExceptionRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct ServerException_sendExceptionRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ServerException_sendExceptionRequestTypeSupport TypeSupport;
    typedef ServerException_sendExceptionRequestDataWriter DataWriter;
    typedef ServerException_sendExceptionRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ServerException_sendExceptionRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ServerException_sendExceptionRequestSeq, ServerException_sendExceptionRequest);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionRequest_initialize(
        ServerException_sendExceptionRequest* self);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionRequest_initialize_ex(
        ServerException_sendExceptionRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void ServerException_sendExceptionRequest_finalize(
        ServerException_sendExceptionRequest* self);
                        
NDDSUSERDllExport
void ServerException_sendExceptionRequest_finalize_ex(
        ServerException_sendExceptionRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionRequest_copy(
        ServerException_sendExceptionRequest* dst,
        const ServerException_sendExceptionRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *ServerException_sendExceptionReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct ServerException_sendExceptionReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class ServerException_sendExceptionReplyTypeSupport;
    class ServerException_sendExceptionReplyDataWriter;
    class ServerException_sendExceptionReplyDataReader;
#endif

#endif

            
    
class ServerException_sendExceptionReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct ServerException_sendExceptionReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ServerException_sendExceptionReplyTypeSupport TypeSupport;
    typedef ServerException_sendExceptionReplyDataWriter DataWriter;
    typedef ServerException_sendExceptionReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ServerException_sendExceptionReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ServerException_sendExceptionReplySeq, ServerException_sendExceptionReply);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionReply_initialize(
        ServerException_sendExceptionReply* self);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionReply_initialize_ex(
        ServerException_sendExceptionReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void ServerException_sendExceptionReply_finalize(
        ServerException_sendExceptionReply* self);
                        
NDDSUSERDllExport
void ServerException_sendExceptionReply_finalize_ex(
        ServerException_sendExceptionReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionReply_copy(
        ServerException_sendExceptionReply* dst,
        const ServerException_sendExceptionReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *ServerException_sendExceptionTwoRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct ServerException_sendExceptionTwoRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ServerException_sendExceptionTwoRequestTypeSupport;
    class ServerException_sendExceptionTwoRequestDataWriter;
    class ServerException_sendExceptionTwoRequestDataReader;
#endif

#endif

            
    
class ServerException_sendExceptionTwoRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct ServerException_sendExceptionTwoRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ServerException_sendExceptionTwoRequestTypeSupport TypeSupport;
    typedef ServerException_sendExceptionTwoRequestDataWriter DataWriter;
    typedef ServerException_sendExceptionTwoRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    char*  message; /* maximum length = (255) */

    char*  message2; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ServerException_sendExceptionTwoRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ServerException_sendExceptionTwoRequestSeq, ServerException_sendExceptionTwoRequest);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionTwoRequest_initialize(
        ServerException_sendExceptionTwoRequest* self);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionTwoRequest_initialize_ex(
        ServerException_sendExceptionTwoRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void ServerException_sendExceptionTwoRequest_finalize(
        ServerException_sendExceptionTwoRequest* self);
                        
NDDSUSERDllExport
void ServerException_sendExceptionTwoRequest_finalize_ex(
        ServerException_sendExceptionTwoRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionTwoRequest_copy(
        ServerException_sendExceptionTwoRequest* dst,
        const ServerException_sendExceptionTwoRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *ServerException_sendExceptionTwoReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct ServerException_sendExceptionTwoReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class ServerException_sendExceptionTwoReplyTypeSupport;
    class ServerException_sendExceptionTwoReplyDataWriter;
    class ServerException_sendExceptionTwoReplyDataReader;
#endif

#endif

            
    
class ServerException_sendExceptionTwoReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct ServerException_sendExceptionTwoReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ServerException_sendExceptionTwoReplyTypeSupport TypeSupport;
    typedef ServerException_sendExceptionTwoReplyDataWriter DataWriter;
    typedef ServerException_sendExceptionTwoReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    char*  message2; /* maximum length = (255) */

    char*  message3; /* maximum length = (255) */

    char*  sendExceptionTwo_ret; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ServerException_sendExceptionTwoReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ServerException_sendExceptionTwoReplySeq, ServerException_sendExceptionTwoReply);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionTwoReply_initialize(
        ServerException_sendExceptionTwoReply* self);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionTwoReply_initialize_ex(
        ServerException_sendExceptionTwoReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void ServerException_sendExceptionTwoReply_finalize(
        ServerException_sendExceptionTwoReply* self);
                        
NDDSUSERDllExport
void ServerException_sendExceptionTwoReply_finalize_ex(
        ServerException_sendExceptionTwoReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionTwoReply_copy(
        ServerException_sendExceptionTwoReply* dst,
        const ServerException_sendExceptionTwoReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *ServerException_sendExceptionThreeRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct ServerException_sendExceptionThreeRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ServerException_sendExceptionThreeRequestTypeSupport;
    class ServerException_sendExceptionThreeRequestDataWriter;
    class ServerException_sendExceptionThreeRequestDataReader;
#endif

#endif

            
    
class ServerException_sendExceptionThreeRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct ServerException_sendExceptionThreeRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ServerException_sendExceptionThreeRequestTypeSupport TypeSupport;
    typedef ServerException_sendExceptionThreeRequestDataWriter DataWriter;
    typedef ServerException_sendExceptionThreeRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    Estructura  es;

    Estructura  es2;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ServerException_sendExceptionThreeRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ServerException_sendExceptionThreeRequestSeq, ServerException_sendExceptionThreeRequest);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionThreeRequest_initialize(
        ServerException_sendExceptionThreeRequest* self);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionThreeRequest_initialize_ex(
        ServerException_sendExceptionThreeRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void ServerException_sendExceptionThreeRequest_finalize(
        ServerException_sendExceptionThreeRequest* self);
                        
NDDSUSERDllExport
void ServerException_sendExceptionThreeRequest_finalize_ex(
        ServerException_sendExceptionThreeRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionThreeRequest_copy(
        ServerException_sendExceptionThreeRequest* dst,
        const ServerException_sendExceptionThreeRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *ServerException_sendExceptionThreeReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct ServerException_sendExceptionThreeReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class ServerException_sendExceptionThreeReplyTypeSupport;
    class ServerException_sendExceptionThreeReplyDataWriter;
    class ServerException_sendExceptionThreeReplyDataReader;
#endif

#endif

            
    
class ServerException_sendExceptionThreeReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct ServerException_sendExceptionThreeReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ServerException_sendExceptionThreeReplyTypeSupport TypeSupport;
    typedef ServerException_sendExceptionThreeReplyDataWriter DataWriter;
    typedef ServerException_sendExceptionThreeReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    Estructura  es2;

    Estructura  es3;

    Estructura  sendExceptionThree_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ServerException_sendExceptionThreeReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ServerException_sendExceptionThreeReplySeq, ServerException_sendExceptionThreeReply);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionThreeReply_initialize(
        ServerException_sendExceptionThreeReply* self);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionThreeReply_initialize_ex(
        ServerException_sendExceptionThreeReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void ServerException_sendExceptionThreeReply_finalize(
        ServerException_sendExceptionThreeReply* self);
                        
NDDSUSERDllExport
void ServerException_sendExceptionThreeReply_finalize_ex(
        ServerException_sendExceptionThreeReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool ServerException_sendExceptionThreeReply_copy(
        ServerException_sendExceptionThreeReply* dst,
        const ServerException_sendExceptionThreeReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* ServerExceptionRequestReply_2113075668_h */
