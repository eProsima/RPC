
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EnumYStringTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef EnumYStringTestRequestReply_1383308312_h
#define EnumYStringTestRequestReply_1383308312_h

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


#include "EnumYStringTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *EnumYStringTest_getEnumRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct EnumYStringTest_getEnumRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class EnumYStringTest_getEnumRequestTypeSupport;
    class EnumYStringTest_getEnumRequestDataWriter;
    class EnumYStringTest_getEnumRequestDataReader;
#endif

#endif

            
    
class EnumYStringTest_getEnumRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct EnumYStringTest_getEnumRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef EnumYStringTest_getEnumRequestTypeSupport TypeSupport;
    typedef EnumYStringTest_getEnumRequestDataWriter DataWriter;
    typedef EnumYStringTest_getEnumRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    Valores  v1;

    Valores  v2;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EnumYStringTest_getEnumRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EnumYStringTest_getEnumRequestSeq, EnumYStringTest_getEnumRequest);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getEnumRequest_initialize(
        EnumYStringTest_getEnumRequest* self);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getEnumRequest_initialize_ex(
        EnumYStringTest_getEnumRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void EnumYStringTest_getEnumRequest_finalize(
        EnumYStringTest_getEnumRequest* self);
                        
NDDSUSERDllExport
void EnumYStringTest_getEnumRequest_finalize_ex(
        EnumYStringTest_getEnumRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getEnumRequest_copy(
        EnumYStringTest_getEnumRequest* dst,
        const EnumYStringTest_getEnumRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *EnumYStringTest_getEnumReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct EnumYStringTest_getEnumReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class EnumYStringTest_getEnumReplyTypeSupport;
    class EnumYStringTest_getEnumReplyDataWriter;
    class EnumYStringTest_getEnumReplyDataReader;
#endif

#endif

            
    
class EnumYStringTest_getEnumReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct EnumYStringTest_getEnumReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef EnumYStringTest_getEnumReplyTypeSupport TypeSupport;
    typedef EnumYStringTest_getEnumReplyDataWriter DataWriter;
    typedef EnumYStringTest_getEnumReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    Valores  v2;

    Valores  v3;

    Valores  getEnum_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EnumYStringTest_getEnumReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EnumYStringTest_getEnumReplySeq, EnumYStringTest_getEnumReply);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getEnumReply_initialize(
        EnumYStringTest_getEnumReply* self);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getEnumReply_initialize_ex(
        EnumYStringTest_getEnumReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void EnumYStringTest_getEnumReply_finalize(
        EnumYStringTest_getEnumReply* self);
                        
NDDSUSERDllExport
void EnumYStringTest_getEnumReply_finalize_ex(
        EnumYStringTest_getEnumReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getEnumReply_copy(
        EnumYStringTest_getEnumReply* dst,
        const EnumYStringTest_getEnumReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *EnumYStringTest_getStringRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct EnumYStringTest_getStringRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class EnumYStringTest_getStringRequestTypeSupport;
    class EnumYStringTest_getStringRequestDataWriter;
    class EnumYStringTest_getStringRequestDataReader;
#endif

#endif

            
    
class EnumYStringTest_getStringRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct EnumYStringTest_getStringRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef EnumYStringTest_getStringRequestTypeSupport TypeSupport;
    typedef EnumYStringTest_getStringRequestDataWriter DataWriter;
    typedef EnumYStringTest_getStringRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    char*  s1; /* maximum length = (255) */

    char*  s2; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EnumYStringTest_getStringRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EnumYStringTest_getStringRequestSeq, EnumYStringTest_getStringRequest);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getStringRequest_initialize(
        EnumYStringTest_getStringRequest* self);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getStringRequest_initialize_ex(
        EnumYStringTest_getStringRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void EnumYStringTest_getStringRequest_finalize(
        EnumYStringTest_getStringRequest* self);
                        
NDDSUSERDllExport
void EnumYStringTest_getStringRequest_finalize_ex(
        EnumYStringTest_getStringRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getStringRequest_copy(
        EnumYStringTest_getStringRequest* dst,
        const EnumYStringTest_getStringRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *EnumYStringTest_getStringReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct EnumYStringTest_getStringReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class EnumYStringTest_getStringReplyTypeSupport;
    class EnumYStringTest_getStringReplyDataWriter;
    class EnumYStringTest_getStringReplyDataReader;
#endif

#endif

            
    
class EnumYStringTest_getStringReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct EnumYStringTest_getStringReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef EnumYStringTest_getStringReplyTypeSupport TypeSupport;
    typedef EnumYStringTest_getStringReplyDataWriter DataWriter;
    typedef EnumYStringTest_getStringReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    char*  s2; /* maximum length = (255) */

    char*  s3; /* maximum length = (255) */

    char*  getString_ret; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EnumYStringTest_getStringReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EnumYStringTest_getStringReplySeq, EnumYStringTest_getStringReply);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getStringReply_initialize(
        EnumYStringTest_getStringReply* self);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getStringReply_initialize_ex(
        EnumYStringTest_getStringReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void EnumYStringTest_getStringReply_finalize(
        EnumYStringTest_getStringReply* self);
                        
NDDSUSERDllExport
void EnumYStringTest_getStringReply_finalize_ex(
        EnumYStringTest_getStringReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getStringReply_copy(
        EnumYStringTest_getStringReply* dst,
        const EnumYStringTest_getStringReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *EnumYStringTest_getStringBoundedRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct EnumYStringTest_getStringBoundedRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class EnumYStringTest_getStringBoundedRequestTypeSupport;
    class EnumYStringTest_getStringBoundedRequestDataWriter;
    class EnumYStringTest_getStringBoundedRequestDataReader;
#endif

#endif

            
    
class EnumYStringTest_getStringBoundedRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct EnumYStringTest_getStringBoundedRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef EnumYStringTest_getStringBoundedRequestTypeSupport TypeSupport;
    typedef EnumYStringTest_getStringBoundedRequestDataWriter DataWriter;
    typedef EnumYStringTest_getStringBoundedRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    char*  sb1; /* maximum length = (255) */

    char*  sb2; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EnumYStringTest_getStringBoundedRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EnumYStringTest_getStringBoundedRequestSeq, EnumYStringTest_getStringBoundedRequest);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getStringBoundedRequest_initialize(
        EnumYStringTest_getStringBoundedRequest* self);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getStringBoundedRequest_initialize_ex(
        EnumYStringTest_getStringBoundedRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void EnumYStringTest_getStringBoundedRequest_finalize(
        EnumYStringTest_getStringBoundedRequest* self);
                        
NDDSUSERDllExport
void EnumYStringTest_getStringBoundedRequest_finalize_ex(
        EnumYStringTest_getStringBoundedRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getStringBoundedRequest_copy(
        EnumYStringTest_getStringBoundedRequest* dst,
        const EnumYStringTest_getStringBoundedRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *EnumYStringTest_getStringBoundedReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct EnumYStringTest_getStringBoundedReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class EnumYStringTest_getStringBoundedReplyTypeSupport;
    class EnumYStringTest_getStringBoundedReplyDataWriter;
    class EnumYStringTest_getStringBoundedReplyDataReader;
#endif

#endif

            
    
class EnumYStringTest_getStringBoundedReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct EnumYStringTest_getStringBoundedReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef EnumYStringTest_getStringBoundedReplyTypeSupport TypeSupport;
    typedef EnumYStringTest_getStringBoundedReplyDataWriter DataWriter;
    typedef EnumYStringTest_getStringBoundedReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    char*  sb2; /* maximum length = (255) */

    char*  sb3; /* maximum length = (255) */

    char*  getStringBounded_ret; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EnumYStringTest_getStringBoundedReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EnumYStringTest_getStringBoundedReplySeq, EnumYStringTest_getStringBoundedReply);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getStringBoundedReply_initialize(
        EnumYStringTest_getStringBoundedReply* self);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getStringBoundedReply_initialize_ex(
        EnumYStringTest_getStringBoundedReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void EnumYStringTest_getStringBoundedReply_finalize(
        EnumYStringTest_getStringBoundedReply* self);
                        
NDDSUSERDllExport
void EnumYStringTest_getStringBoundedReply_finalize_ex(
        EnumYStringTest_getStringBoundedReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool EnumYStringTest_getStringBoundedReply_copy(
        EnumYStringTest_getStringBoundedReply* dst,
        const EnumYStringTest_getStringBoundedReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* EnumYStringTestRequestReply_1383308312_h */
