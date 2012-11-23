
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MultithreadTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MultithreadTestRequestReply_135729755_h
#define MultithreadTestRequestReply_135729755_h

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


#include "MultithreadTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *MultithreadTest_testRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct MultithreadTest_testRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class MultithreadTest_testRequestTypeSupport;
    class MultithreadTest_testRequestDataWriter;
    class MultithreadTest_testRequestDataReader;
#endif

#endif

            
    

typedef struct MultithreadTest_testRequest
{
#ifdef __cplusplus
    typedef struct MultithreadTest_testRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MultithreadTest_testRequestTypeSupport TypeSupport;
    typedef MultithreadTest_testRequestDataWriter DataWriter;
    typedef MultithreadTest_testRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    Dato  dato1;

} MultithreadTest_testRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MultithreadTest_testRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MultithreadTest_testRequestSeq, MultithreadTest_testRequest);
        
NDDSUSERDllExport
RTIBool MultithreadTest_testRequest_initialize(
        MultithreadTest_testRequest* self);
        
NDDSUSERDllExport
RTIBool MultithreadTest_testRequest_initialize_ex(
        MultithreadTest_testRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void MultithreadTest_testRequest_finalize(
        MultithreadTest_testRequest* self);
                        
NDDSUSERDllExport
void MultithreadTest_testRequest_finalize_ex(
        MultithreadTest_testRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool MultithreadTest_testRequest_copy(
        MultithreadTest_testRequest* dst,
        const MultithreadTest_testRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *MultithreadTest_testReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct MultithreadTest_testReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class MultithreadTest_testReplyTypeSupport;
    class MultithreadTest_testReplyDataWriter;
    class MultithreadTest_testReplyDataReader;
#endif

#endif

            
    

typedef struct MultithreadTest_testReply
{
#ifdef __cplusplus
    typedef struct MultithreadTest_testReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MultithreadTest_testReplyTypeSupport TypeSupport;
    typedef MultithreadTest_testReplyDataWriter DataWriter;
    typedef MultithreadTest_testReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    Dato  dato2;
    DDS_Long  test_ret;

} MultithreadTest_testReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MultithreadTest_testReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MultithreadTest_testReplySeq, MultithreadTest_testReply);
        
NDDSUSERDllExport
RTIBool MultithreadTest_testReply_initialize(
        MultithreadTest_testReply* self);
        
NDDSUSERDllExport
RTIBool MultithreadTest_testReply_initialize_ex(
        MultithreadTest_testReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void MultithreadTest_testReply_finalize(
        MultithreadTest_testReply* self);
                        
NDDSUSERDllExport
void MultithreadTest_testReply_finalize_ex(
        MultithreadTest_testReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool MultithreadTest_testReply_copy(
        MultithreadTest_testReply* dst,
        const MultithreadTest_testReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* MultithreadTestRequestReply_135729755_h */
