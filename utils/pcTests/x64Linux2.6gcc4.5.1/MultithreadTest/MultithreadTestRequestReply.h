
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MultithreadTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MultithreadTestRequestReply_135729188_h
#define MultithreadTestRequestReply_135729188_h

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


#include "MultithreadTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *testRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct testRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class testRequestTypeSupport;
    class testRequestDataWriter;
    class testRequestDataReader;
#endif

#endif

            
    

typedef struct testRequest
{
#ifdef __cplusplus
    typedef struct testRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef testRequestTypeSupport TypeSupport;
    typedef testRequestDataWriter DataWriter;
    typedef testRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    Dato  dato1;

} testRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* testRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(testRequestSeq, testRequest);
        
NDDSUSERDllExport
RTIBool testRequest_initialize(
        testRequest* self);
        
NDDSUSERDllExport
RTIBool testRequest_initialize_ex(
        testRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void testRequest_finalize(
        testRequest* self);
                        
NDDSUSERDllExport
void testRequest_finalize_ex(
        testRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool testRequest_copy(
        testRequest* dst,
        const testRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *testReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct testReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class testReplyTypeSupport;
    class testReplyDataWriter;
    class testReplyDataReader;
#endif

#endif

            
    

typedef struct testReply
{
#ifdef __cplusplus
    typedef struct testReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef testReplyTypeSupport TypeSupport;
    typedef testReplyDataWriter DataWriter;
    typedef testReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    Dato  dato2;
    DDS_Long  returnedValue;

} testReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* testReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(testReplySeq, testReply);
        
NDDSUSERDllExport
RTIBool testReply_initialize(
        testReply* self);
        
NDDSUSERDllExport
RTIBool testReply_initialize_ex(
        testReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void testReply_finalize(
        testReply* self);
                        
NDDSUSERDllExport
void testReply_finalize_ex(
        testReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool testReply_copy(
        testReply* dst,
        const testReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* MultithreadTestRequestReply_135729188_h */
