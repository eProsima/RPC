
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HelloWorldAsyncRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef HelloWorldAsyncRequestReply_1955699126_h
#define HelloWorldAsyncRequestReply_1955699126_h

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


#include "HelloWorldAsync.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *HelloWorldAsync_sayHelloRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct HelloWorldAsync_sayHelloRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class HelloWorldAsync_sayHelloRequestTypeSupport;
    class HelloWorldAsync_sayHelloRequestDataWriter;
    class HelloWorldAsync_sayHelloRequestDataReader;
#endif

#endif

            
    
class HelloWorldAsync_sayHelloRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct HelloWorldAsync_sayHelloRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef HelloWorldAsync_sayHelloRequestTypeSupport TypeSupport;
    typedef HelloWorldAsync_sayHelloRequestDataWriter DataWriter;
    typedef HelloWorldAsync_sayHelloRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    char*  name; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* HelloWorldAsync_sayHelloRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(HelloWorldAsync_sayHelloRequestSeq, HelloWorldAsync_sayHelloRequest);
        
NDDSUSERDllExport
RTIBool HelloWorldAsync_sayHelloRequest_initialize(
        HelloWorldAsync_sayHelloRequest* self);
        
NDDSUSERDllExport
RTIBool HelloWorldAsync_sayHelloRequest_initialize_ex(
        HelloWorldAsync_sayHelloRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void HelloWorldAsync_sayHelloRequest_finalize(
        HelloWorldAsync_sayHelloRequest* self);
                        
NDDSUSERDllExport
void HelloWorldAsync_sayHelloRequest_finalize_ex(
        HelloWorldAsync_sayHelloRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool HelloWorldAsync_sayHelloRequest_copy(
        HelloWorldAsync_sayHelloRequest* dst,
        const HelloWorldAsync_sayHelloRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *HelloWorldAsync_sayHelloReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct HelloWorldAsync_sayHelloReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class HelloWorldAsync_sayHelloReplyTypeSupport;
    class HelloWorldAsync_sayHelloReplyDataWriter;
    class HelloWorldAsync_sayHelloReplyDataReader;
#endif

#endif

            
    
class HelloWorldAsync_sayHelloReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct HelloWorldAsync_sayHelloReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef HelloWorldAsync_sayHelloReplyTypeSupport TypeSupport;
    typedef HelloWorldAsync_sayHelloReplyDataWriter DataWriter;
    typedef HelloWorldAsync_sayHelloReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    char*  sayHello_ret; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* HelloWorldAsync_sayHelloReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(HelloWorldAsync_sayHelloReplySeq, HelloWorldAsync_sayHelloReply);
        
NDDSUSERDllExport
RTIBool HelloWorldAsync_sayHelloReply_initialize(
        HelloWorldAsync_sayHelloReply* self);
        
NDDSUSERDllExport
RTIBool HelloWorldAsync_sayHelloReply_initialize_ex(
        HelloWorldAsync_sayHelloReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void HelloWorldAsync_sayHelloReply_finalize(
        HelloWorldAsync_sayHelloReply* self);
                        
NDDSUSERDllExport
void HelloWorldAsync_sayHelloReply_finalize_ex(
        HelloWorldAsync_sayHelloReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool HelloWorldAsync_sayHelloReply_copy(
        HelloWorldAsync_sayHelloReply* dst,
        const HelloWorldAsync_sayHelloReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* HelloWorldAsyncRequestReply_1955699126_h */
