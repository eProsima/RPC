
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TypedefTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TypedefTestRequestReply_1722561831_h
#define TypedefTestRequestReply_1722561831_h

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


#include "TypedefTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getLargoRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getLargoRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getLargoRequestTypeSupport;
    class getLargoRequestDataWriter;
    class getLargoRequestDataReader;
#endif

#endif

            
    

typedef struct getLargoRequest
{
#ifdef __cplusplus
    typedef struct getLargoRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getLargoRequestTypeSupport TypeSupport;
    typedef getLargoRequestDataWriter DataWriter;
    typedef getLargoRequestDataReader DataReader;
#endif

#endif

    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    largo  l1;

} getLargoRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getLargoRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getLargoRequestSeq, getLargoRequest);
        
NDDSUSERDllExport
RTIBool getLargoRequest_initialize(
        getLargoRequest* self);
        
NDDSUSERDllExport
RTIBool getLargoRequest_initialize_ex(
        getLargoRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getLargoRequest_finalize(
        getLargoRequest* self);
                        
NDDSUSERDllExport
void getLargoRequest_finalize_ex(
        getLargoRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getLargoRequest_copy(
        getLargoRequest* dst,
        const getLargoRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getLargoReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getLargoReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getLargoReplyTypeSupport;
    class getLargoReplyDataWriter;
    class getLargoReplyDataReader;
#endif

#endif

            
    

typedef struct getLargoReply
{
#ifdef __cplusplus
    typedef struct getLargoReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getLargoReplyTypeSupport TypeSupport;
    typedef getLargoReplyDataWriter DataWriter;
    typedef getLargoReplyDataReader DataReader;
#endif

#endif

    Identification  serverServiceId;
    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    DDS_Long  ddsrpcRetCode;
    largo  l2;
    largo  getLargo_ret;

} getLargoReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getLargoReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getLargoReplySeq, getLargoReply);
        
NDDSUSERDllExport
RTIBool getLargoReply_initialize(
        getLargoReply* self);
        
NDDSUSERDllExport
RTIBool getLargoReply_initialize_ex(
        getLargoReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getLargoReply_finalize(
        getLargoReply* self);
                        
NDDSUSERDllExport
void getLargoReply_finalize_ex(
        getLargoReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getLargoReply_copy(
        getLargoReply* dst,
        const getLargoReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getLarguisimoRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getLarguisimoRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getLarguisimoRequestTypeSupport;
    class getLarguisimoRequestDataWriter;
    class getLarguisimoRequestDataReader;
#endif

#endif

            
    

typedef struct getLarguisimoRequest
{
#ifdef __cplusplus
    typedef struct getLarguisimoRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getLarguisimoRequestTypeSupport TypeSupport;
    typedef getLarguisimoRequestDataWriter DataWriter;
    typedef getLarguisimoRequestDataReader DataReader;
#endif

#endif

    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    larguisimo  ll1;

} getLarguisimoRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getLarguisimoRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getLarguisimoRequestSeq, getLarguisimoRequest);
        
NDDSUSERDllExport
RTIBool getLarguisimoRequest_initialize(
        getLarguisimoRequest* self);
        
NDDSUSERDllExport
RTIBool getLarguisimoRequest_initialize_ex(
        getLarguisimoRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getLarguisimoRequest_finalize(
        getLarguisimoRequest* self);
                        
NDDSUSERDllExport
void getLarguisimoRequest_finalize_ex(
        getLarguisimoRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getLarguisimoRequest_copy(
        getLarguisimoRequest* dst,
        const getLarguisimoRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getLarguisimoReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getLarguisimoReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getLarguisimoReplyTypeSupport;
    class getLarguisimoReplyDataWriter;
    class getLarguisimoReplyDataReader;
#endif

#endif

            
    

typedef struct getLarguisimoReply
{
#ifdef __cplusplus
    typedef struct getLarguisimoReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getLarguisimoReplyTypeSupport TypeSupport;
    typedef getLarguisimoReplyDataWriter DataWriter;
    typedef getLarguisimoReplyDataReader DataReader;
#endif

#endif

    Identification  serverServiceId;
    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    DDS_Long  ddsrpcRetCode;
    larguisimo  ll2;
    larguisimo  getLarguisimo_ret;

} getLarguisimoReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getLarguisimoReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getLarguisimoReplySeq, getLarguisimoReply);
        
NDDSUSERDllExport
RTIBool getLarguisimoReply_initialize(
        getLarguisimoReply* self);
        
NDDSUSERDllExport
RTIBool getLarguisimoReply_initialize_ex(
        getLarguisimoReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getLarguisimoReply_finalize(
        getLarguisimoReply* self);
                        
NDDSUSERDllExport
void getLarguisimoReply_finalize_ex(
        getLarguisimoReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getLarguisimoReply_copy(
        getLarguisimoReply* dst,
        const getLarguisimoReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getDatosDefRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getDatosDefRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getDatosDefRequestTypeSupport;
    class getDatosDefRequestDataWriter;
    class getDatosDefRequestDataReader;
#endif

#endif

            
    

typedef struct getDatosDefRequest
{
#ifdef __cplusplus
    typedef struct getDatosDefRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getDatosDefRequestTypeSupport TypeSupport;
    typedef getDatosDefRequestDataWriter DataWriter;
    typedef getDatosDefRequestDataReader DataReader;
#endif

#endif

    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    DatosDef  d1;

} getDatosDefRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getDatosDefRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getDatosDefRequestSeq, getDatosDefRequest);
        
NDDSUSERDllExport
RTIBool getDatosDefRequest_initialize(
        getDatosDefRequest* self);
        
NDDSUSERDllExport
RTIBool getDatosDefRequest_initialize_ex(
        getDatosDefRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getDatosDefRequest_finalize(
        getDatosDefRequest* self);
                        
NDDSUSERDllExport
void getDatosDefRequest_finalize_ex(
        getDatosDefRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getDatosDefRequest_copy(
        getDatosDefRequest* dst,
        const getDatosDefRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getDatosDefReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getDatosDefReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getDatosDefReplyTypeSupport;
    class getDatosDefReplyDataWriter;
    class getDatosDefReplyDataReader;
#endif

#endif

            
    

typedef struct getDatosDefReply
{
#ifdef __cplusplus
    typedef struct getDatosDefReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getDatosDefReplyTypeSupport TypeSupport;
    typedef getDatosDefReplyDataWriter DataWriter;
    typedef getDatosDefReplyDataReader DataReader;
#endif

#endif

    Identification  serverServiceId;
    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    DDS_Long  ddsrpcRetCode;
    DatosDef  d2;
    DatosDef  getDatosDef_ret;

} getDatosDefReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getDatosDefReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getDatosDefReplySeq, getDatosDefReply);
        
NDDSUSERDllExport
RTIBool getDatosDefReply_initialize(
        getDatosDefReply* self);
        
NDDSUSERDllExport
RTIBool getDatosDefReply_initialize_ex(
        getDatosDefReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getDatosDefReply_finalize(
        getDatosDefReply* self);
                        
NDDSUSERDllExport
void getDatosDefReply_finalize_ex(
        getDatosDefReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getDatosDefReply_copy(
        getDatosDefReply* dst,
        const getDatosDefReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getDatosDefondoRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getDatosDefondoRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getDatosDefondoRequestTypeSupport;
    class getDatosDefondoRequestDataWriter;
    class getDatosDefondoRequestDataReader;
#endif

#endif

            
    

typedef struct getDatosDefondoRequest
{
#ifdef __cplusplus
    typedef struct getDatosDefondoRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getDatosDefondoRequestTypeSupport TypeSupport;
    typedef getDatosDefondoRequestDataWriter DataWriter;
    typedef getDatosDefondoRequestDataReader DataReader;
#endif

#endif

    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    DatosDefondo  dd1;

} getDatosDefondoRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getDatosDefondoRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getDatosDefondoRequestSeq, getDatosDefondoRequest);
        
NDDSUSERDllExport
RTIBool getDatosDefondoRequest_initialize(
        getDatosDefondoRequest* self);
        
NDDSUSERDllExport
RTIBool getDatosDefondoRequest_initialize_ex(
        getDatosDefondoRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getDatosDefondoRequest_finalize(
        getDatosDefondoRequest* self);
                        
NDDSUSERDllExport
void getDatosDefondoRequest_finalize_ex(
        getDatosDefondoRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getDatosDefondoRequest_copy(
        getDatosDefondoRequest* dst,
        const getDatosDefondoRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getDatosDefondoReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getDatosDefondoReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getDatosDefondoReplyTypeSupport;
    class getDatosDefondoReplyDataWriter;
    class getDatosDefondoReplyDataReader;
#endif

#endif

            
    

typedef struct getDatosDefondoReply
{
#ifdef __cplusplus
    typedef struct getDatosDefondoReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getDatosDefondoReplyTypeSupport TypeSupport;
    typedef getDatosDefondoReplyDataWriter DataWriter;
    typedef getDatosDefondoReplyDataReader DataReader;
#endif

#endif

    Identification  serverServiceId;
    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    DDS_Long  ddsrpcRetCode;
    DatosDefondo  dd2;
    DatosDefondo  getDatosDefondo_ret;

} getDatosDefondoReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getDatosDefondoReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getDatosDefondoReplySeq, getDatosDefondoReply);
        
NDDSUSERDllExport
RTIBool getDatosDefondoReply_initialize(
        getDatosDefondoReply* self);
        
NDDSUSERDllExport
RTIBool getDatosDefondoReply_initialize_ex(
        getDatosDefondoReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getDatosDefondoReply_finalize(
        getDatosDefondoReply* self);
                        
NDDSUSERDllExport
void getDatosDefondoReply_finalize_ex(
        getDatosDefondoReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getDatosDefondoReply_copy(
        getDatosDefondoReply* dst,
        const getDatosDefondoReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getCadenaRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getCadenaRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getCadenaRequestTypeSupport;
    class getCadenaRequestDataWriter;
    class getCadenaRequestDataReader;
#endif

#endif

            
    

typedef struct getCadenaRequest
{
#ifdef __cplusplus
    typedef struct getCadenaRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getCadenaRequestTypeSupport TypeSupport;
    typedef getCadenaRequestDataWriter DataWriter;
    typedef getCadenaRequestDataReader DataReader;
#endif

#endif

    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    cadena  c1;

} getCadenaRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getCadenaRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getCadenaRequestSeq, getCadenaRequest);
        
NDDSUSERDllExport
RTIBool getCadenaRequest_initialize(
        getCadenaRequest* self);
        
NDDSUSERDllExport
RTIBool getCadenaRequest_initialize_ex(
        getCadenaRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getCadenaRequest_finalize(
        getCadenaRequest* self);
                        
NDDSUSERDllExport
void getCadenaRequest_finalize_ex(
        getCadenaRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getCadenaRequest_copy(
        getCadenaRequest* dst,
        const getCadenaRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getCadenaReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getCadenaReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getCadenaReplyTypeSupport;
    class getCadenaReplyDataWriter;
    class getCadenaReplyDataReader;
#endif

#endif

            
    

typedef struct getCadenaReply
{
#ifdef __cplusplus
    typedef struct getCadenaReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getCadenaReplyTypeSupport TypeSupport;
    typedef getCadenaReplyDataWriter DataWriter;
    typedef getCadenaReplyDataReader DataReader;
#endif

#endif

    Identification  serverServiceId;
    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    DDS_Long  ddsrpcRetCode;
    cadena  c2;
    cadena  getCadena_ret;

} getCadenaReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getCadenaReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getCadenaReplySeq, getCadenaReply);
        
NDDSUSERDllExport
RTIBool getCadenaReply_initialize(
        getCadenaReply* self);
        
NDDSUSERDllExport
RTIBool getCadenaReply_initialize_ex(
        getCadenaReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getCadenaReply_finalize(
        getCadenaReply* self);
                        
NDDSUSERDllExport
void getCadenaReply_finalize_ex(
        getCadenaReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getCadenaReply_copy(
        getCadenaReply* dst,
        const getCadenaReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getCorreaRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getCorreaRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getCorreaRequestTypeSupport;
    class getCorreaRequestDataWriter;
    class getCorreaRequestDataReader;
#endif

#endif

            
    

typedef struct getCorreaRequest
{
#ifdef __cplusplus
    typedef struct getCorreaRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getCorreaRequestTypeSupport TypeSupport;
    typedef getCorreaRequestDataWriter DataWriter;
    typedef getCorreaRequestDataReader DataReader;
#endif

#endif

    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    correa  cc1;

} getCorreaRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getCorreaRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getCorreaRequestSeq, getCorreaRequest);
        
NDDSUSERDllExport
RTIBool getCorreaRequest_initialize(
        getCorreaRequest* self);
        
NDDSUSERDllExport
RTIBool getCorreaRequest_initialize_ex(
        getCorreaRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getCorreaRequest_finalize(
        getCorreaRequest* self);
                        
NDDSUSERDllExport
void getCorreaRequest_finalize_ex(
        getCorreaRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getCorreaRequest_copy(
        getCorreaRequest* dst,
        const getCorreaRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getCorreaReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getCorreaReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getCorreaReplyTypeSupport;
    class getCorreaReplyDataWriter;
    class getCorreaReplyDataReader;
#endif

#endif

            
    

typedef struct getCorreaReply
{
#ifdef __cplusplus
    typedef struct getCorreaReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getCorreaReplyTypeSupport TypeSupport;
    typedef getCorreaReplyDataWriter DataWriter;
    typedef getCorreaReplyDataReader DataReader;
#endif

#endif

    Identification  serverServiceId;
    Identification  clientServiceId;
    DDS_UnsignedLong  numSec;
    DDS_Long  ddsrpcRetCode;
    correa  cc2;
    correa  getCorrea_ret;

} getCorreaReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getCorreaReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getCorreaReplySeq, getCorreaReply);
        
NDDSUSERDllExport
RTIBool getCorreaReply_initialize(
        getCorreaReply* self);
        
NDDSUSERDllExport
RTIBool getCorreaReply_initialize_ex(
        getCorreaReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getCorreaReply_finalize(
        getCorreaReply* self);
                        
NDDSUSERDllExport
void getCorreaReply_finalize_ex(
        getCorreaReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getCorreaReply_copy(
        getCorreaReply* dst,
        const getCorreaReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* TypedefTestRequestReply_1722561831_h */
