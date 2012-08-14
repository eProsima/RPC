
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StructTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef StructTestRequestReply_1086132997_h
#define StructTestRequestReply_1086132997_h

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


#include "StructTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *duplicateRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct duplicateRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class duplicateRequestTypeSupport;
    class duplicateRequestDataWriter;
    class duplicateRequestDataReader;
#endif

#endif

            
    

typedef struct duplicateRequest
{
#ifdef __cplusplus
    typedef struct duplicateRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef duplicateRequestTypeSupport TypeSupport;
    typedef duplicateRequestDataWriter DataWriter;
    typedef duplicateRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    Envio  ev;

} duplicateRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* duplicateRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(duplicateRequestSeq, duplicateRequest);
        
NDDSUSERDllExport
RTIBool duplicateRequest_initialize(
        duplicateRequest* self);
        
NDDSUSERDllExport
RTIBool duplicateRequest_initialize_ex(
        duplicateRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void duplicateRequest_finalize(
        duplicateRequest* self);
                        
NDDSUSERDllExport
void duplicateRequest_finalize_ex(
        duplicateRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool duplicateRequest_copy(
        duplicateRequest* dst,
        const duplicateRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *duplicateReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct duplicateReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class duplicateReplyTypeSupport;
    class duplicateReplyDataWriter;
    class duplicateReplyDataReader;
#endif

#endif

            
    

typedef struct duplicateReply
{
#ifdef __cplusplus
    typedef struct duplicateReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef duplicateReplyTypeSupport TypeSupport;
    typedef duplicateReplyDataWriter DataWriter;
    typedef duplicateReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    Recepcion  returnedValue;

} duplicateReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* duplicateReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(duplicateReplySeq, duplicateReply);
        
NDDSUSERDllExport
RTIBool duplicateReply_initialize(
        duplicateReply* self);
        
NDDSUSERDllExport
RTIBool duplicateReply_initialize_ex(
        duplicateReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void duplicateReply_finalize(
        duplicateReply* self);
                        
NDDSUSERDllExport
void duplicateReply_finalize_ex(
        duplicateReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool duplicateReply_copy(
        duplicateReply* dst,
        const duplicateReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *sumaRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct sumaRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class sumaRequestTypeSupport;
    class sumaRequestDataWriter;
    class sumaRequestDataReader;
#endif

#endif

            
    

typedef struct sumaRequest
{
#ifdef __cplusplus
    typedef struct sumaRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef sumaRequestTypeSupport TypeSupport;
    typedef sumaRequestDataWriter DataWriter;
    typedef sumaRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    Envio  ev1;
    Envio  ev2;

} sumaRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* sumaRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(sumaRequestSeq, sumaRequest);
        
NDDSUSERDllExport
RTIBool sumaRequest_initialize(
        sumaRequest* self);
        
NDDSUSERDllExport
RTIBool sumaRequest_initialize_ex(
        sumaRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void sumaRequest_finalize(
        sumaRequest* self);
                        
NDDSUSERDllExport
void sumaRequest_finalize_ex(
        sumaRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool sumaRequest_copy(
        sumaRequest* dst,
        const sumaRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *sumaReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct sumaReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class sumaReplyTypeSupport;
    class sumaReplyDataWriter;
    class sumaReplyDataReader;
#endif

#endif

            
    

typedef struct sumaReply
{
#ifdef __cplusplus
    typedef struct sumaReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef sumaReplyTypeSupport TypeSupport;
    typedef sumaReplyDataWriter DataWriter;
    typedef sumaReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    Recepcion  returnedValue;

} sumaReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* sumaReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(sumaReplySeq, sumaReply);
        
NDDSUSERDllExport
RTIBool sumaReply_initialize(
        sumaReply* self);
        
NDDSUSERDllExport
RTIBool sumaReply_initialize_ex(
        sumaReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void sumaReply_finalize(
        sumaReply* self);
                        
NDDSUSERDllExport
void sumaReply_finalize_ex(
        sumaReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool sumaReply_copy(
        sumaReply* dst,
        const sumaReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* StructTestRequestReply_1086132997_h */
