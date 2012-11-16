
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TypedefTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TypedefTestRequestReply_1722561955_h
#define TypedefTestRequestReply_1722561955_h

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

        
extern const char *TypedefTest_getLargoRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TypedefTest_getLargoRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TypedefTest_getLargoRequestTypeSupport;
    class TypedefTest_getLargoRequestDataWriter;
    class TypedefTest_getLargoRequestDataReader;
#endif

#endif

            
    
class TypedefTest_getLargoRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct TypedefTest_getLargoRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TypedefTest_getLargoRequestTypeSupport TypeSupport;
    typedef TypedefTest_getLargoRequestDataWriter DataWriter;
    typedef TypedefTest_getLargoRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    largo  l1;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TypedefTest_getLargoRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TypedefTest_getLargoRequestSeq, TypedefTest_getLargoRequest);
        
NDDSUSERDllExport
RTIBool TypedefTest_getLargoRequest_initialize(
        TypedefTest_getLargoRequest* self);
        
NDDSUSERDllExport
RTIBool TypedefTest_getLargoRequest_initialize_ex(
        TypedefTest_getLargoRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void TypedefTest_getLargoRequest_finalize(
        TypedefTest_getLargoRequest* self);
                        
NDDSUSERDllExport
void TypedefTest_getLargoRequest_finalize_ex(
        TypedefTest_getLargoRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool TypedefTest_getLargoRequest_copy(
        TypedefTest_getLargoRequest* dst,
        const TypedefTest_getLargoRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TypedefTest_getLargoReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TypedefTest_getLargoReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class TypedefTest_getLargoReplyTypeSupport;
    class TypedefTest_getLargoReplyDataWriter;
    class TypedefTest_getLargoReplyDataReader;
#endif

#endif

            
    
class TypedefTest_getLargoReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct TypedefTest_getLargoReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TypedefTest_getLargoReplyTypeSupport TypeSupport;
    typedef TypedefTest_getLargoReplyDataWriter DataWriter;
    typedef TypedefTest_getLargoReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    largo  l2;

    largo  getLargo_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TypedefTest_getLargoReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TypedefTest_getLargoReplySeq, TypedefTest_getLargoReply);
        
NDDSUSERDllExport
RTIBool TypedefTest_getLargoReply_initialize(
        TypedefTest_getLargoReply* self);
        
NDDSUSERDllExport
RTIBool TypedefTest_getLargoReply_initialize_ex(
        TypedefTest_getLargoReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void TypedefTest_getLargoReply_finalize(
        TypedefTest_getLargoReply* self);
                        
NDDSUSERDllExport
void TypedefTest_getLargoReply_finalize_ex(
        TypedefTest_getLargoReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool TypedefTest_getLargoReply_copy(
        TypedefTest_getLargoReply* dst,
        const TypedefTest_getLargoReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TypedefTest_getLarguisimoRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TypedefTest_getLarguisimoRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TypedefTest_getLarguisimoRequestTypeSupport;
    class TypedefTest_getLarguisimoRequestDataWriter;
    class TypedefTest_getLarguisimoRequestDataReader;
#endif

#endif

            
    
class TypedefTest_getLarguisimoRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct TypedefTest_getLarguisimoRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TypedefTest_getLarguisimoRequestTypeSupport TypeSupport;
    typedef TypedefTest_getLarguisimoRequestDataWriter DataWriter;
    typedef TypedefTest_getLarguisimoRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    larguisimo  ll1;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TypedefTest_getLarguisimoRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TypedefTest_getLarguisimoRequestSeq, TypedefTest_getLarguisimoRequest);
        
NDDSUSERDllExport
RTIBool TypedefTest_getLarguisimoRequest_initialize(
        TypedefTest_getLarguisimoRequest* self);
        
NDDSUSERDllExport
RTIBool TypedefTest_getLarguisimoRequest_initialize_ex(
        TypedefTest_getLarguisimoRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void TypedefTest_getLarguisimoRequest_finalize(
        TypedefTest_getLarguisimoRequest* self);
                        
NDDSUSERDllExport
void TypedefTest_getLarguisimoRequest_finalize_ex(
        TypedefTest_getLarguisimoRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool TypedefTest_getLarguisimoRequest_copy(
        TypedefTest_getLarguisimoRequest* dst,
        const TypedefTest_getLarguisimoRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TypedefTest_getLarguisimoReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TypedefTest_getLarguisimoReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class TypedefTest_getLarguisimoReplyTypeSupport;
    class TypedefTest_getLarguisimoReplyDataWriter;
    class TypedefTest_getLarguisimoReplyDataReader;
#endif

#endif

            
    
class TypedefTest_getLarguisimoReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct TypedefTest_getLarguisimoReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TypedefTest_getLarguisimoReplyTypeSupport TypeSupport;
    typedef TypedefTest_getLarguisimoReplyDataWriter DataWriter;
    typedef TypedefTest_getLarguisimoReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    larguisimo  ll2;

    larguisimo  getLarguisimo_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TypedefTest_getLarguisimoReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TypedefTest_getLarguisimoReplySeq, TypedefTest_getLarguisimoReply);
        
NDDSUSERDllExport
RTIBool TypedefTest_getLarguisimoReply_initialize(
        TypedefTest_getLarguisimoReply* self);
        
NDDSUSERDllExport
RTIBool TypedefTest_getLarguisimoReply_initialize_ex(
        TypedefTest_getLarguisimoReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void TypedefTest_getLarguisimoReply_finalize(
        TypedefTest_getLarguisimoReply* self);
                        
NDDSUSERDllExport
void TypedefTest_getLarguisimoReply_finalize_ex(
        TypedefTest_getLarguisimoReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool TypedefTest_getLarguisimoReply_copy(
        TypedefTest_getLarguisimoReply* dst,
        const TypedefTest_getLarguisimoReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TypedefTest_getDatosDefRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TypedefTest_getDatosDefRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TypedefTest_getDatosDefRequestTypeSupport;
    class TypedefTest_getDatosDefRequestDataWriter;
    class TypedefTest_getDatosDefRequestDataReader;
#endif

#endif

            
    
class TypedefTest_getDatosDefRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct TypedefTest_getDatosDefRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TypedefTest_getDatosDefRequestTypeSupport TypeSupport;
    typedef TypedefTest_getDatosDefRequestDataWriter DataWriter;
    typedef TypedefTest_getDatosDefRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    DatosDef  d1;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TypedefTest_getDatosDefRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TypedefTest_getDatosDefRequestSeq, TypedefTest_getDatosDefRequest);
        
NDDSUSERDllExport
RTIBool TypedefTest_getDatosDefRequest_initialize(
        TypedefTest_getDatosDefRequest* self);
        
NDDSUSERDllExport
RTIBool TypedefTest_getDatosDefRequest_initialize_ex(
        TypedefTest_getDatosDefRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void TypedefTest_getDatosDefRequest_finalize(
        TypedefTest_getDatosDefRequest* self);
                        
NDDSUSERDllExport
void TypedefTest_getDatosDefRequest_finalize_ex(
        TypedefTest_getDatosDefRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool TypedefTest_getDatosDefRequest_copy(
        TypedefTest_getDatosDefRequest* dst,
        const TypedefTest_getDatosDefRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TypedefTest_getDatosDefReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TypedefTest_getDatosDefReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class TypedefTest_getDatosDefReplyTypeSupport;
    class TypedefTest_getDatosDefReplyDataWriter;
    class TypedefTest_getDatosDefReplyDataReader;
#endif

#endif

            
    
class TypedefTest_getDatosDefReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct TypedefTest_getDatosDefReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TypedefTest_getDatosDefReplyTypeSupport TypeSupport;
    typedef TypedefTest_getDatosDefReplyDataWriter DataWriter;
    typedef TypedefTest_getDatosDefReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    DatosDef  d2;

    DatosDef  getDatosDef_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TypedefTest_getDatosDefReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TypedefTest_getDatosDefReplySeq, TypedefTest_getDatosDefReply);
        
NDDSUSERDllExport
RTIBool TypedefTest_getDatosDefReply_initialize(
        TypedefTest_getDatosDefReply* self);
        
NDDSUSERDllExport
RTIBool TypedefTest_getDatosDefReply_initialize_ex(
        TypedefTest_getDatosDefReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void TypedefTest_getDatosDefReply_finalize(
        TypedefTest_getDatosDefReply* self);
                        
NDDSUSERDllExport
void TypedefTest_getDatosDefReply_finalize_ex(
        TypedefTest_getDatosDefReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool TypedefTest_getDatosDefReply_copy(
        TypedefTest_getDatosDefReply* dst,
        const TypedefTest_getDatosDefReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TypedefTest_getDatosDefondoRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TypedefTest_getDatosDefondoRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TypedefTest_getDatosDefondoRequestTypeSupport;
    class TypedefTest_getDatosDefondoRequestDataWriter;
    class TypedefTest_getDatosDefondoRequestDataReader;
#endif

#endif

            
    
class TypedefTest_getDatosDefondoRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct TypedefTest_getDatosDefondoRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TypedefTest_getDatosDefondoRequestTypeSupport TypeSupport;
    typedef TypedefTest_getDatosDefondoRequestDataWriter DataWriter;
    typedef TypedefTest_getDatosDefondoRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    DatosDefondo  dd1;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TypedefTest_getDatosDefondoRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TypedefTest_getDatosDefondoRequestSeq, TypedefTest_getDatosDefondoRequest);
        
NDDSUSERDllExport
RTIBool TypedefTest_getDatosDefondoRequest_initialize(
        TypedefTest_getDatosDefondoRequest* self);
        
NDDSUSERDllExport
RTIBool TypedefTest_getDatosDefondoRequest_initialize_ex(
        TypedefTest_getDatosDefondoRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void TypedefTest_getDatosDefondoRequest_finalize(
        TypedefTest_getDatosDefondoRequest* self);
                        
NDDSUSERDllExport
void TypedefTest_getDatosDefondoRequest_finalize_ex(
        TypedefTest_getDatosDefondoRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool TypedefTest_getDatosDefondoRequest_copy(
        TypedefTest_getDatosDefondoRequest* dst,
        const TypedefTest_getDatosDefondoRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TypedefTest_getDatosDefondoReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TypedefTest_getDatosDefondoReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class TypedefTest_getDatosDefondoReplyTypeSupport;
    class TypedefTest_getDatosDefondoReplyDataWriter;
    class TypedefTest_getDatosDefondoReplyDataReader;
#endif

#endif

            
    
class TypedefTest_getDatosDefondoReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct TypedefTest_getDatosDefondoReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TypedefTest_getDatosDefondoReplyTypeSupport TypeSupport;
    typedef TypedefTest_getDatosDefondoReplyDataWriter DataWriter;
    typedef TypedefTest_getDatosDefondoReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    DatosDefondo  dd2;

    DatosDefondo  getDatosDefondo_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TypedefTest_getDatosDefondoReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TypedefTest_getDatosDefondoReplySeq, TypedefTest_getDatosDefondoReply);
        
NDDSUSERDllExport
RTIBool TypedefTest_getDatosDefondoReply_initialize(
        TypedefTest_getDatosDefondoReply* self);
        
NDDSUSERDllExport
RTIBool TypedefTest_getDatosDefondoReply_initialize_ex(
        TypedefTest_getDatosDefondoReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void TypedefTest_getDatosDefondoReply_finalize(
        TypedefTest_getDatosDefondoReply* self);
                        
NDDSUSERDllExport
void TypedefTest_getDatosDefondoReply_finalize_ex(
        TypedefTest_getDatosDefondoReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool TypedefTest_getDatosDefondoReply_copy(
        TypedefTest_getDatosDefondoReply* dst,
        const TypedefTest_getDatosDefondoReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TypedefTest_getCadenaRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TypedefTest_getCadenaRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TypedefTest_getCadenaRequestTypeSupport;
    class TypedefTest_getCadenaRequestDataWriter;
    class TypedefTest_getCadenaRequestDataReader;
#endif

#endif

            
    
class TypedefTest_getCadenaRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct TypedefTest_getCadenaRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TypedefTest_getCadenaRequestTypeSupport TypeSupport;
    typedef TypedefTest_getCadenaRequestDataWriter DataWriter;
    typedef TypedefTest_getCadenaRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    cadena  c1;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TypedefTest_getCadenaRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TypedefTest_getCadenaRequestSeq, TypedefTest_getCadenaRequest);
        
NDDSUSERDllExport
RTIBool TypedefTest_getCadenaRequest_initialize(
        TypedefTest_getCadenaRequest* self);
        
NDDSUSERDllExport
RTIBool TypedefTest_getCadenaRequest_initialize_ex(
        TypedefTest_getCadenaRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void TypedefTest_getCadenaRequest_finalize(
        TypedefTest_getCadenaRequest* self);
                        
NDDSUSERDllExport
void TypedefTest_getCadenaRequest_finalize_ex(
        TypedefTest_getCadenaRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool TypedefTest_getCadenaRequest_copy(
        TypedefTest_getCadenaRequest* dst,
        const TypedefTest_getCadenaRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TypedefTest_getCadenaReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TypedefTest_getCadenaReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class TypedefTest_getCadenaReplyTypeSupport;
    class TypedefTest_getCadenaReplyDataWriter;
    class TypedefTest_getCadenaReplyDataReader;
#endif

#endif

            
    
class TypedefTest_getCadenaReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct TypedefTest_getCadenaReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TypedefTest_getCadenaReplyTypeSupport TypeSupport;
    typedef TypedefTest_getCadenaReplyDataWriter DataWriter;
    typedef TypedefTest_getCadenaReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    cadena  c2;

    cadena  getCadena_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TypedefTest_getCadenaReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TypedefTest_getCadenaReplySeq, TypedefTest_getCadenaReply);
        
NDDSUSERDllExport
RTIBool TypedefTest_getCadenaReply_initialize(
        TypedefTest_getCadenaReply* self);
        
NDDSUSERDllExport
RTIBool TypedefTest_getCadenaReply_initialize_ex(
        TypedefTest_getCadenaReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void TypedefTest_getCadenaReply_finalize(
        TypedefTest_getCadenaReply* self);
                        
NDDSUSERDllExport
void TypedefTest_getCadenaReply_finalize_ex(
        TypedefTest_getCadenaReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool TypedefTest_getCadenaReply_copy(
        TypedefTest_getCadenaReply* dst,
        const TypedefTest_getCadenaReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TypedefTest_getCorreaRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TypedefTest_getCorreaRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class TypedefTest_getCorreaRequestTypeSupport;
    class TypedefTest_getCorreaRequestDataWriter;
    class TypedefTest_getCorreaRequestDataReader;
#endif

#endif

            
    
class TypedefTest_getCorreaRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct TypedefTest_getCorreaRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TypedefTest_getCorreaRequestTypeSupport TypeSupport;
    typedef TypedefTest_getCorreaRequestDataWriter DataWriter;
    typedef TypedefTest_getCorreaRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    correa  cc1;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TypedefTest_getCorreaRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TypedefTest_getCorreaRequestSeq, TypedefTest_getCorreaRequest);
        
NDDSUSERDllExport
RTIBool TypedefTest_getCorreaRequest_initialize(
        TypedefTest_getCorreaRequest* self);
        
NDDSUSERDllExport
RTIBool TypedefTest_getCorreaRequest_initialize_ex(
        TypedefTest_getCorreaRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void TypedefTest_getCorreaRequest_finalize(
        TypedefTest_getCorreaRequest* self);
                        
NDDSUSERDllExport
void TypedefTest_getCorreaRequest_finalize_ex(
        TypedefTest_getCorreaRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool TypedefTest_getCorreaRequest_copy(
        TypedefTest_getCorreaRequest* dst,
        const TypedefTest_getCorreaRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *TypedefTest_getCorreaReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct TypedefTest_getCorreaReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class TypedefTest_getCorreaReplyTypeSupport;
    class TypedefTest_getCorreaReplyDataWriter;
    class TypedefTest_getCorreaReplyDataReader;
#endif

#endif

            
    
class TypedefTest_getCorreaReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct TypedefTest_getCorreaReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TypedefTest_getCorreaReplyTypeSupport TypeSupport;
    typedef TypedefTest_getCorreaReplyDataWriter DataWriter;
    typedef TypedefTest_getCorreaReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    correa  cc2;

    correa  getCorrea_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TypedefTest_getCorreaReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TypedefTest_getCorreaReplySeq, TypedefTest_getCorreaReply);
        
NDDSUSERDllExport
RTIBool TypedefTest_getCorreaReply_initialize(
        TypedefTest_getCorreaReply* self);
        
NDDSUSERDllExport
RTIBool TypedefTest_getCorreaReply_initialize_ex(
        TypedefTest_getCorreaReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void TypedefTest_getCorreaReply_finalize(
        TypedefTest_getCorreaReply* self);
                        
NDDSUSERDllExport
void TypedefTest_getCorreaReply_finalize_ex(
        TypedefTest_getCorreaReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool TypedefTest_getCorreaReply_copy(
        TypedefTest_getCorreaReply* dst,
        const TypedefTest_getCorreaReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* TypedefTestRequestReply_1722561955_h */
