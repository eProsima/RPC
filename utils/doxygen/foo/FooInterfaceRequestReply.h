
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FooInterfaceRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FooInterfaceRequestReply_998276712_h
#define FooInterfaceRequestReply_998276712_h

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

        
extern const char *FooInterface_FooProcedureRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct FooInterface_FooProcedureRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class FooInterface_FooProcedureRequestTypeSupport;
    class FooInterface_FooProcedureRequestDataWriter;
    class FooInterface_FooProcedureRequestDataReader;
#endif

#endif

            
    

typedef struct FooInterface_FooProcedureRequest
{
#ifdef __cplusplus
    typedef struct FooInterface_FooProcedureRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FooInterface_FooProcedureRequestTypeSupport TypeSupport;
    typedef FooInterface_FooProcedureRequestDataWriter DataWriter;
    typedef FooInterface_FooProcedureRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;

} FooInterface_FooProcedureRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FooInterface_FooProcedureRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FooInterface_FooProcedureRequestSeq, FooInterface_FooProcedureRequest);
        
NDDSUSERDllExport
RTIBool FooInterface_FooProcedureRequest_initialize(
        FooInterface_FooProcedureRequest* self);
        
NDDSUSERDllExport
RTIBool FooInterface_FooProcedureRequest_initialize_ex(
        FooInterface_FooProcedureRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void FooInterface_FooProcedureRequest_finalize(
        FooInterface_FooProcedureRequest* self);
                        
NDDSUSERDllExport
void FooInterface_FooProcedureRequest_finalize_ex(
        FooInterface_FooProcedureRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool FooInterface_FooProcedureRequest_copy(
        FooInterface_FooProcedureRequest* dst,
        const FooInterface_FooProcedureRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *FooInterface_FooProcedureReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct FooInterface_FooProcedureReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class FooInterface_FooProcedureReplyTypeSupport;
    class FooInterface_FooProcedureReplyDataWriter;
    class FooInterface_FooProcedureReplyDataReader;
#endif

#endif

            
    

typedef struct FooInterface_FooProcedureReply
{
#ifdef __cplusplus
    typedef struct FooInterface_FooProcedureReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef FooInterface_FooProcedureReplyTypeSupport TypeSupport;
    typedef FooInterface_FooProcedureReplyDataWriter DataWriter;
    typedef FooInterface_FooProcedureReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;

} FooInterface_FooProcedureReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* FooInterface_FooProcedureReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(FooInterface_FooProcedureReplySeq, FooInterface_FooProcedureReply);
        
NDDSUSERDllExport
RTIBool FooInterface_FooProcedureReply_initialize(
        FooInterface_FooProcedureReply* self);
        
NDDSUSERDllExport
RTIBool FooInterface_FooProcedureReply_initialize_ex(
        FooInterface_FooProcedureReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void FooInterface_FooProcedureReply_finalize(
        FooInterface_FooProcedureReply* self);
                        
NDDSUSERDllExport
void FooInterface_FooProcedureReply_finalize_ex(
        FooInterface_FooProcedureReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool FooInterface_FooProcedureReply_copy(
        FooInterface_FooProcedureReply* dst,
        const FooInterface_FooProcedureReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* FooInterfaceRequestReply_998276712_h */
