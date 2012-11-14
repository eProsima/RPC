
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FooInterfaceRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FooInterfaceRequestReply_998276846_h
#define FooInterfaceRequestReply_998276846_h

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


#include "FooInterface.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *foo_procedureRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct foo_procedureRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class foo_procedureRequestTypeSupport;
    class foo_procedureRequestDataWriter;
    class foo_procedureRequestDataReader;
#endif

#endif

            
    

typedef struct foo_procedureRequest
{
#ifdef __cplusplus
    typedef struct foo_procedureRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef foo_procedureRequestTypeSupport TypeSupport;
    typedef foo_procedureRequestDataWriter DataWriter;
    typedef foo_procedureRequestDataReader DataReader;
#endif

#endif

    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;

} foo_procedureRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* foo_procedureRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(foo_procedureRequestSeq, foo_procedureRequest);
        
NDDSUSERDllExport
RTIBool foo_procedureRequest_initialize(
        foo_procedureRequest* self);
        
NDDSUSERDllExport
RTIBool foo_procedureRequest_initialize_ex(
        foo_procedureRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void foo_procedureRequest_finalize(
        foo_procedureRequest* self);
                        
NDDSUSERDllExport
void foo_procedureRequest_finalize_ex(
        foo_procedureRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool foo_procedureRequest_copy(
        foo_procedureRequest* dst,
        const foo_procedureRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *foo_procedureReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct foo_procedureReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class foo_procedureReplyTypeSupport;
    class foo_procedureReplyDataWriter;
    class foo_procedureReplyDataReader;
#endif

#endif

            
    

typedef struct foo_procedureReply
{
#ifdef __cplusplus
    typedef struct foo_procedureReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef foo_procedureReplyTypeSupport TypeSupport;
    typedef foo_procedureReplyDataWriter DataWriter;
    typedef foo_procedureReplyDataReader DataReader;
#endif

#endif

    Identification  serverServiceId;
    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    DDS_Long  ddsrpcRetCode;

} foo_procedureReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* foo_procedureReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(foo_procedureReplySeq, foo_procedureReply);
        
NDDSUSERDllExport
RTIBool foo_procedureReply_initialize(
        foo_procedureReply* self);
        
NDDSUSERDllExport
RTIBool foo_procedureReply_initialize_ex(
        foo_procedureReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void foo_procedureReply_finalize(
        foo_procedureReply* self);
                        
NDDSUSERDllExport
void foo_procedureReply_finalize_ex(
        foo_procedureReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool foo_procedureReply_copy(
        foo_procedureReply* dst,
        const foo_procedureReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* FooInterfaceRequestReply_998276846_h */
