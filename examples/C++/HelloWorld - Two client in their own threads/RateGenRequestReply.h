
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RateGenRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
*/

#ifndef RateGenRequestReply_h
#define RateGenRequestReply_h

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


#include "HelloWorld.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *subscribe_PulseRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif

typedef struct subscribe_PulseRequest
{
    DDS_UnsignedLong  clientId[3];
    DDS_UnsignedLong  localId;
    DDS_Long  numSec;
    tickConsumer  c;
    DDS_Long  i;
    DDS_Long  kk;

} subscribe_PulseRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* subscribe_PulseRequest_get_typecode(); /* Type code */
    

DDS_SEQUENCE(subscribe_PulseRequestSeq, subscribe_PulseRequest);
        
NDDSUSERDllExport
RTIBool subscribe_PulseRequest_initialize(
        subscribe_PulseRequest* self);
        
NDDSUSERDllExport
RTIBool subscribe_PulseRequest_initialize_ex(
        subscribe_PulseRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void subscribe_PulseRequest_finalize(
        subscribe_PulseRequest* self);
                        
NDDSUSERDllExport
void subscribe_PulseRequest_finalize_ex(
        subscribe_PulseRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool subscribe_PulseRequest_copy(
        subscribe_PulseRequest* dst,
        const subscribe_PulseRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *subscribe_PulseReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif

typedef struct subscribe_PulseReply
{
    DDS_UnsignedLong  clientId[3];
    DDS_UnsignedLong  localId;
    DDS_Long  numSec;
    DDS_Long  ddscsRetCode;
    DDS_Long  kk;
    DDS_Octet  ret1;
    Cookie  returnedValue;

} subscribe_PulseReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* subscribe_PulseReply_get_typecode(); /* Type code */
    

DDS_SEQUENCE(subscribe_PulseReplySeq, subscribe_PulseReply);
        
NDDSUSERDllExport
RTIBool subscribe_PulseReply_initialize(
        subscribe_PulseReply* self);
        
NDDSUSERDllExport
RTIBool subscribe_PulseReply_initialize_ex(
        subscribe_PulseReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void subscribe_PulseReply_finalize(
        subscribe_PulseReply* self);
                        
NDDSUSERDllExport
void subscribe_PulseReply_finalize_ex(
        subscribe_PulseReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool subscribe_PulseReply_copy(
        subscribe_PulseReply* dst,
        const subscribe_PulseReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *unsubscribe_PulseRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif

typedef struct unsubscribe_PulseRequest
{
    DDS_UnsignedLong  clientId[3];
    DDS_UnsignedLong  localId;
    DDS_Long  numSec;
    Cookie  ck;

} unsubscribe_PulseRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* unsubscribe_PulseRequest_get_typecode(); /* Type code */
    

DDS_SEQUENCE(unsubscribe_PulseRequestSeq, unsubscribe_PulseRequest);
        
NDDSUSERDllExport
RTIBool unsubscribe_PulseRequest_initialize(
        unsubscribe_PulseRequest* self);
        
NDDSUSERDllExport
RTIBool unsubscribe_PulseRequest_initialize_ex(
        unsubscribe_PulseRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void unsubscribe_PulseRequest_finalize(
        unsubscribe_PulseRequest* self);
                        
NDDSUSERDllExport
void unsubscribe_PulseRequest_finalize_ex(
        unsubscribe_PulseRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool unsubscribe_PulseRequest_copy(
        unsubscribe_PulseRequest* dst,
        const unsubscribe_PulseRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *unsubscribe_PulseReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif

typedef struct unsubscribe_PulseReply
{
    DDS_UnsignedLong  clientId[3];
    DDS_UnsignedLong  localId;
    DDS_Long  numSec;
    DDS_Long  ddscsRetCode;
    tickConsumer  returnedValue;

} unsubscribe_PulseReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* unsubscribe_PulseReply_get_typecode(); /* Type code */
    

DDS_SEQUENCE(unsubscribe_PulseReplySeq, unsubscribe_PulseReply);
        
NDDSUSERDllExport
RTIBool unsubscribe_PulseReply_initialize(
        unsubscribe_PulseReply* self);
        
NDDSUSERDllExport
RTIBool unsubscribe_PulseReply_initialize_ex(
        unsubscribe_PulseReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void unsubscribe_PulseReply_finalize(
        unsubscribe_PulseReply* self);
                        
NDDSUSERDllExport
void unsubscribe_PulseReply_finalize_ex(
        unsubscribe_PulseReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool unsubscribe_PulseReply_copy(
        unsubscribe_PulseReply* dst,
        const unsubscribe_PulseReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *noReturnFunctionRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif

typedef struct noReturnFunctionRequest
{
    DDS_UnsignedLong  clientId[3];
    DDS_UnsignedLong  localId;
    DDS_Long  numSec;
    DDS_Long  id;

} noReturnFunctionRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* noReturnFunctionRequest_get_typecode(); /* Type code */
    

DDS_SEQUENCE(noReturnFunctionRequestSeq, noReturnFunctionRequest);
        
NDDSUSERDllExport
RTIBool noReturnFunctionRequest_initialize(
        noReturnFunctionRequest* self);
        
NDDSUSERDllExport
RTIBool noReturnFunctionRequest_initialize_ex(
        noReturnFunctionRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void noReturnFunctionRequest_finalize(
        noReturnFunctionRequest* self);
                        
NDDSUSERDllExport
void noReturnFunctionRequest_finalize_ex(
        noReturnFunctionRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool noReturnFunctionRequest_copy(
        noReturnFunctionRequest* dst,
        const noReturnFunctionRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *noReturnFunctionReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif

typedef struct noReturnFunctionReply
{
    DDS_UnsignedLong  clientId[3];
    DDS_UnsignedLong  localId;
    DDS_Long  numSec;
    DDS_Long  ddscsRetCode;
    DDS_Octet  ret2;

} noReturnFunctionReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* noReturnFunctionReply_get_typecode(); /* Type code */
    

DDS_SEQUENCE(noReturnFunctionReplySeq, noReturnFunctionReply);
        
NDDSUSERDllExport
RTIBool noReturnFunctionReply_initialize(
        noReturnFunctionReply* self);
        
NDDSUSERDllExport
RTIBool noReturnFunctionReply_initialize_ex(
        noReturnFunctionReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void noReturnFunctionReply_finalize(
        noReturnFunctionReply* self);
                        
NDDSUSERDllExport
void noReturnFunctionReply_finalize_ex(
        noReturnFunctionReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool noReturnFunctionReply_copy(
        noReturnFunctionReply* dst,
        const noReturnFunctionReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* RateGenRequestReply_h */
