
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from BasicTypeTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef BasicTypeTestRequestReply_2120091168_h
#define BasicTypeTestRequestReply_2120091168_h

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


#include "BasicTypeTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getOctetRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getOctetRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getOctetRequestTypeSupport;
    class BasicTypeTest_getOctetRequestDataWriter;
    class BasicTypeTest_getOctetRequestDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getOctetRequest
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getOctetRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getOctetRequestTypeSupport TypeSupport;
    typedef BasicTypeTest_getOctetRequestDataWriter DataWriter;
    typedef BasicTypeTest_getOctetRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    DDS_Octet  oc1;
    DDS_Octet  oc2;

} BasicTypeTest_getOctetRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getOctetRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getOctetRequestSeq, BasicTypeTest_getOctetRequest);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getOctetRequest_initialize(
        BasicTypeTest_getOctetRequest* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getOctetRequest_initialize_ex(
        BasicTypeTest_getOctetRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getOctetRequest_finalize(
        BasicTypeTest_getOctetRequest* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getOctetRequest_finalize_ex(
        BasicTypeTest_getOctetRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getOctetRequest_copy(
        BasicTypeTest_getOctetRequest* dst,
        const BasicTypeTest_getOctetRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getOctetReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getOctetReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getOctetReplyTypeSupport;
    class BasicTypeTest_getOctetReplyDataWriter;
    class BasicTypeTest_getOctetReplyDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getOctetReply
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getOctetReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getOctetReplyTypeSupport TypeSupport;
    typedef BasicTypeTest_getOctetReplyDataWriter DataWriter;
    typedef BasicTypeTest_getOctetReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    DDS_Octet  oc2;
    DDS_Octet  oc3;
    DDS_Octet  getOctet_ret;

} BasicTypeTest_getOctetReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getOctetReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getOctetReplySeq, BasicTypeTest_getOctetReply);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getOctetReply_initialize(
        BasicTypeTest_getOctetReply* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getOctetReply_initialize_ex(
        BasicTypeTest_getOctetReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getOctetReply_finalize(
        BasicTypeTest_getOctetReply* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getOctetReply_finalize_ex(
        BasicTypeTest_getOctetReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getOctetReply_copy(
        BasicTypeTest_getOctetReply* dst,
        const BasicTypeTest_getOctetReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getCharRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getCharRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getCharRequestTypeSupport;
    class BasicTypeTest_getCharRequestDataWriter;
    class BasicTypeTest_getCharRequestDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getCharRequest
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getCharRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getCharRequestTypeSupport TypeSupport;
    typedef BasicTypeTest_getCharRequestDataWriter DataWriter;
    typedef BasicTypeTest_getCharRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    DDS_Char  ch1;
    DDS_Char  ch2;

} BasicTypeTest_getCharRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getCharRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getCharRequestSeq, BasicTypeTest_getCharRequest);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getCharRequest_initialize(
        BasicTypeTest_getCharRequest* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getCharRequest_initialize_ex(
        BasicTypeTest_getCharRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getCharRequest_finalize(
        BasicTypeTest_getCharRequest* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getCharRequest_finalize_ex(
        BasicTypeTest_getCharRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getCharRequest_copy(
        BasicTypeTest_getCharRequest* dst,
        const BasicTypeTest_getCharRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getCharReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getCharReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getCharReplyTypeSupport;
    class BasicTypeTest_getCharReplyDataWriter;
    class BasicTypeTest_getCharReplyDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getCharReply
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getCharReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getCharReplyTypeSupport TypeSupport;
    typedef BasicTypeTest_getCharReplyDataWriter DataWriter;
    typedef BasicTypeTest_getCharReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    DDS_Char  ch2;
    DDS_Char  ch3;
    DDS_Char  getChar_ret;

} BasicTypeTest_getCharReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getCharReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getCharReplySeq, BasicTypeTest_getCharReply);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getCharReply_initialize(
        BasicTypeTest_getCharReply* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getCharReply_initialize_ex(
        BasicTypeTest_getCharReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getCharReply_finalize(
        BasicTypeTest_getCharReply* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getCharReply_finalize_ex(
        BasicTypeTest_getCharReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getCharReply_copy(
        BasicTypeTest_getCharReply* dst,
        const BasicTypeTest_getCharReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getWCharRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getWCharRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getWCharRequestTypeSupport;
    class BasicTypeTest_getWCharRequestDataWriter;
    class BasicTypeTest_getWCharRequestDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getWCharRequest
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getWCharRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getWCharRequestTypeSupport TypeSupport;
    typedef BasicTypeTest_getWCharRequestDataWriter DataWriter;
    typedef BasicTypeTest_getWCharRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    DDS_Wchar  wch1;
    DDS_Wchar  wch2;

} BasicTypeTest_getWCharRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getWCharRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getWCharRequestSeq, BasicTypeTest_getWCharRequest);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getWCharRequest_initialize(
        BasicTypeTest_getWCharRequest* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getWCharRequest_initialize_ex(
        BasicTypeTest_getWCharRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getWCharRequest_finalize(
        BasicTypeTest_getWCharRequest* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getWCharRequest_finalize_ex(
        BasicTypeTest_getWCharRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getWCharRequest_copy(
        BasicTypeTest_getWCharRequest* dst,
        const BasicTypeTest_getWCharRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getWCharReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getWCharReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getWCharReplyTypeSupport;
    class BasicTypeTest_getWCharReplyDataWriter;
    class BasicTypeTest_getWCharReplyDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getWCharReply
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getWCharReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getWCharReplyTypeSupport TypeSupport;
    typedef BasicTypeTest_getWCharReplyDataWriter DataWriter;
    typedef BasicTypeTest_getWCharReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    DDS_Wchar  wch2;
    DDS_Wchar  wch3;
    DDS_Wchar  getWChar_ret;

} BasicTypeTest_getWCharReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getWCharReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getWCharReplySeq, BasicTypeTest_getWCharReply);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getWCharReply_initialize(
        BasicTypeTest_getWCharReply* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getWCharReply_initialize_ex(
        BasicTypeTest_getWCharReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getWCharReply_finalize(
        BasicTypeTest_getWCharReply* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getWCharReply_finalize_ex(
        BasicTypeTest_getWCharReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getWCharReply_copy(
        BasicTypeTest_getWCharReply* dst,
        const BasicTypeTest_getWCharReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getShortRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getShortRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getShortRequestTypeSupport;
    class BasicTypeTest_getShortRequestDataWriter;
    class BasicTypeTest_getShortRequestDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getShortRequest
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getShortRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getShortRequestTypeSupport TypeSupport;
    typedef BasicTypeTest_getShortRequestDataWriter DataWriter;
    typedef BasicTypeTest_getShortRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    DDS_Short  sh1;
    DDS_Short  sh2;

} BasicTypeTest_getShortRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getShortRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getShortRequestSeq, BasicTypeTest_getShortRequest);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getShortRequest_initialize(
        BasicTypeTest_getShortRequest* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getShortRequest_initialize_ex(
        BasicTypeTest_getShortRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getShortRequest_finalize(
        BasicTypeTest_getShortRequest* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getShortRequest_finalize_ex(
        BasicTypeTest_getShortRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getShortRequest_copy(
        BasicTypeTest_getShortRequest* dst,
        const BasicTypeTest_getShortRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getShortReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getShortReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getShortReplyTypeSupport;
    class BasicTypeTest_getShortReplyDataWriter;
    class BasicTypeTest_getShortReplyDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getShortReply
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getShortReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getShortReplyTypeSupport TypeSupport;
    typedef BasicTypeTest_getShortReplyDataWriter DataWriter;
    typedef BasicTypeTest_getShortReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    DDS_Short  sh2;
    DDS_Short  sh3;
    DDS_Short  getShort_ret;

} BasicTypeTest_getShortReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getShortReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getShortReplySeq, BasicTypeTest_getShortReply);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getShortReply_initialize(
        BasicTypeTest_getShortReply* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getShortReply_initialize_ex(
        BasicTypeTest_getShortReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getShortReply_finalize(
        BasicTypeTest_getShortReply* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getShortReply_finalize_ex(
        BasicTypeTest_getShortReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getShortReply_copy(
        BasicTypeTest_getShortReply* dst,
        const BasicTypeTest_getShortReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getUShortRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getUShortRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getUShortRequestTypeSupport;
    class BasicTypeTest_getUShortRequestDataWriter;
    class BasicTypeTest_getUShortRequestDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getUShortRequest
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getUShortRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getUShortRequestTypeSupport TypeSupport;
    typedef BasicTypeTest_getUShortRequestDataWriter DataWriter;
    typedef BasicTypeTest_getUShortRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    DDS_UnsignedShort  ush1;
    DDS_UnsignedShort  ush2;

} BasicTypeTest_getUShortRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getUShortRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getUShortRequestSeq, BasicTypeTest_getUShortRequest);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getUShortRequest_initialize(
        BasicTypeTest_getUShortRequest* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getUShortRequest_initialize_ex(
        BasicTypeTest_getUShortRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getUShortRequest_finalize(
        BasicTypeTest_getUShortRequest* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getUShortRequest_finalize_ex(
        BasicTypeTest_getUShortRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getUShortRequest_copy(
        BasicTypeTest_getUShortRequest* dst,
        const BasicTypeTest_getUShortRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getUShortReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getUShortReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getUShortReplyTypeSupport;
    class BasicTypeTest_getUShortReplyDataWriter;
    class BasicTypeTest_getUShortReplyDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getUShortReply
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getUShortReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getUShortReplyTypeSupport TypeSupport;
    typedef BasicTypeTest_getUShortReplyDataWriter DataWriter;
    typedef BasicTypeTest_getUShortReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    DDS_UnsignedShort  ush2;
    DDS_UnsignedShort  ush3;
    DDS_UnsignedShort  getUShort_ret;

} BasicTypeTest_getUShortReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getUShortReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getUShortReplySeq, BasicTypeTest_getUShortReply);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getUShortReply_initialize(
        BasicTypeTest_getUShortReply* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getUShortReply_initialize_ex(
        BasicTypeTest_getUShortReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getUShortReply_finalize(
        BasicTypeTest_getUShortReply* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getUShortReply_finalize_ex(
        BasicTypeTest_getUShortReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getUShortReply_copy(
        BasicTypeTest_getUShortReply* dst,
        const BasicTypeTest_getUShortReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getLongRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getLongRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getLongRequestTypeSupport;
    class BasicTypeTest_getLongRequestDataWriter;
    class BasicTypeTest_getLongRequestDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getLongRequest
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getLongRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getLongRequestTypeSupport TypeSupport;
    typedef BasicTypeTest_getLongRequestDataWriter DataWriter;
    typedef BasicTypeTest_getLongRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    DDS_Long  lo1;
    DDS_Long  lo2;

} BasicTypeTest_getLongRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getLongRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getLongRequestSeq, BasicTypeTest_getLongRequest);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getLongRequest_initialize(
        BasicTypeTest_getLongRequest* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getLongRequest_initialize_ex(
        BasicTypeTest_getLongRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getLongRequest_finalize(
        BasicTypeTest_getLongRequest* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getLongRequest_finalize_ex(
        BasicTypeTest_getLongRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getLongRequest_copy(
        BasicTypeTest_getLongRequest* dst,
        const BasicTypeTest_getLongRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getLongReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getLongReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getLongReplyTypeSupport;
    class BasicTypeTest_getLongReplyDataWriter;
    class BasicTypeTest_getLongReplyDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getLongReply
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getLongReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getLongReplyTypeSupport TypeSupport;
    typedef BasicTypeTest_getLongReplyDataWriter DataWriter;
    typedef BasicTypeTest_getLongReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    DDS_Long  lo2;
    DDS_Long  lo3;
    DDS_Long  getLong_ret;

} BasicTypeTest_getLongReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getLongReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getLongReplySeq, BasicTypeTest_getLongReply);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getLongReply_initialize(
        BasicTypeTest_getLongReply* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getLongReply_initialize_ex(
        BasicTypeTest_getLongReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getLongReply_finalize(
        BasicTypeTest_getLongReply* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getLongReply_finalize_ex(
        BasicTypeTest_getLongReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getLongReply_copy(
        BasicTypeTest_getLongReply* dst,
        const BasicTypeTest_getLongReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getULongRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getULongRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getULongRequestTypeSupport;
    class BasicTypeTest_getULongRequestDataWriter;
    class BasicTypeTest_getULongRequestDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getULongRequest
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getULongRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getULongRequestTypeSupport TypeSupport;
    typedef BasicTypeTest_getULongRequestDataWriter DataWriter;
    typedef BasicTypeTest_getULongRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    DDS_UnsignedLong  ulo1;
    DDS_UnsignedLong  ulo2;

} BasicTypeTest_getULongRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getULongRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getULongRequestSeq, BasicTypeTest_getULongRequest);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getULongRequest_initialize(
        BasicTypeTest_getULongRequest* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getULongRequest_initialize_ex(
        BasicTypeTest_getULongRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getULongRequest_finalize(
        BasicTypeTest_getULongRequest* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getULongRequest_finalize_ex(
        BasicTypeTest_getULongRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getULongRequest_copy(
        BasicTypeTest_getULongRequest* dst,
        const BasicTypeTest_getULongRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getULongReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getULongReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getULongReplyTypeSupport;
    class BasicTypeTest_getULongReplyDataWriter;
    class BasicTypeTest_getULongReplyDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getULongReply
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getULongReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getULongReplyTypeSupport TypeSupport;
    typedef BasicTypeTest_getULongReplyDataWriter DataWriter;
    typedef BasicTypeTest_getULongReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    DDS_UnsignedLong  ulo2;
    DDS_UnsignedLong  ulo3;
    DDS_UnsignedLong  getULong_ret;

} BasicTypeTest_getULongReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getULongReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getULongReplySeq, BasicTypeTest_getULongReply);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getULongReply_initialize(
        BasicTypeTest_getULongReply* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getULongReply_initialize_ex(
        BasicTypeTest_getULongReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getULongReply_finalize(
        BasicTypeTest_getULongReply* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getULongReply_finalize_ex(
        BasicTypeTest_getULongReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getULongReply_copy(
        BasicTypeTest_getULongReply* dst,
        const BasicTypeTest_getULongReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getLLongRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getLLongRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getLLongRequestTypeSupport;
    class BasicTypeTest_getLLongRequestDataWriter;
    class BasicTypeTest_getLLongRequestDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getLLongRequest
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getLLongRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getLLongRequestTypeSupport TypeSupport;
    typedef BasicTypeTest_getLLongRequestDataWriter DataWriter;
    typedef BasicTypeTest_getLLongRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    DDS_LongLong  llo1;
    DDS_LongLong  llo2;

} BasicTypeTest_getLLongRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getLLongRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getLLongRequestSeq, BasicTypeTest_getLLongRequest);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getLLongRequest_initialize(
        BasicTypeTest_getLLongRequest* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getLLongRequest_initialize_ex(
        BasicTypeTest_getLLongRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getLLongRequest_finalize(
        BasicTypeTest_getLLongRequest* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getLLongRequest_finalize_ex(
        BasicTypeTest_getLLongRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getLLongRequest_copy(
        BasicTypeTest_getLLongRequest* dst,
        const BasicTypeTest_getLLongRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getLLongReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getLLongReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getLLongReplyTypeSupport;
    class BasicTypeTest_getLLongReplyDataWriter;
    class BasicTypeTest_getLLongReplyDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getLLongReply
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getLLongReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getLLongReplyTypeSupport TypeSupport;
    typedef BasicTypeTest_getLLongReplyDataWriter DataWriter;
    typedef BasicTypeTest_getLLongReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    DDS_LongLong  llo2;
    DDS_LongLong  llo3;
    DDS_LongLong  getLLong_ret;

} BasicTypeTest_getLLongReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getLLongReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getLLongReplySeq, BasicTypeTest_getLLongReply);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getLLongReply_initialize(
        BasicTypeTest_getLLongReply* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getLLongReply_initialize_ex(
        BasicTypeTest_getLLongReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getLLongReply_finalize(
        BasicTypeTest_getLLongReply* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getLLongReply_finalize_ex(
        BasicTypeTest_getLLongReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getLLongReply_copy(
        BasicTypeTest_getLLongReply* dst,
        const BasicTypeTest_getLLongReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getULLongRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getULLongRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getULLongRequestTypeSupport;
    class BasicTypeTest_getULLongRequestDataWriter;
    class BasicTypeTest_getULLongRequestDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getULLongRequest
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getULLongRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getULLongRequestTypeSupport TypeSupport;
    typedef BasicTypeTest_getULLongRequestDataWriter DataWriter;
    typedef BasicTypeTest_getULLongRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    DDS_UnsignedLongLong  ullo1;
    DDS_UnsignedLongLong  ullo2;

} BasicTypeTest_getULLongRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getULLongRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getULLongRequestSeq, BasicTypeTest_getULLongRequest);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getULLongRequest_initialize(
        BasicTypeTest_getULLongRequest* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getULLongRequest_initialize_ex(
        BasicTypeTest_getULLongRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getULLongRequest_finalize(
        BasicTypeTest_getULLongRequest* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getULLongRequest_finalize_ex(
        BasicTypeTest_getULLongRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getULLongRequest_copy(
        BasicTypeTest_getULLongRequest* dst,
        const BasicTypeTest_getULLongRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getULLongReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getULLongReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getULLongReplyTypeSupport;
    class BasicTypeTest_getULLongReplyDataWriter;
    class BasicTypeTest_getULLongReplyDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getULLongReply
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getULLongReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getULLongReplyTypeSupport TypeSupport;
    typedef BasicTypeTest_getULLongReplyDataWriter DataWriter;
    typedef BasicTypeTest_getULLongReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    DDS_UnsignedLongLong  ullo2;
    DDS_UnsignedLongLong  ullo3;
    DDS_UnsignedLongLong  getULLong_ret;

} BasicTypeTest_getULLongReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getULLongReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getULLongReplySeq, BasicTypeTest_getULLongReply);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getULLongReply_initialize(
        BasicTypeTest_getULLongReply* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getULLongReply_initialize_ex(
        BasicTypeTest_getULLongReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getULLongReply_finalize(
        BasicTypeTest_getULLongReply* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getULLongReply_finalize_ex(
        BasicTypeTest_getULLongReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getULLongReply_copy(
        BasicTypeTest_getULLongReply* dst,
        const BasicTypeTest_getULLongReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getFloatRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getFloatRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getFloatRequestTypeSupport;
    class BasicTypeTest_getFloatRequestDataWriter;
    class BasicTypeTest_getFloatRequestDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getFloatRequest
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getFloatRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getFloatRequestTypeSupport TypeSupport;
    typedef BasicTypeTest_getFloatRequestDataWriter DataWriter;
    typedef BasicTypeTest_getFloatRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    DDS_Float  fl1;
    DDS_Float  fl2;

} BasicTypeTest_getFloatRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getFloatRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getFloatRequestSeq, BasicTypeTest_getFloatRequest);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getFloatRequest_initialize(
        BasicTypeTest_getFloatRequest* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getFloatRequest_initialize_ex(
        BasicTypeTest_getFloatRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getFloatRequest_finalize(
        BasicTypeTest_getFloatRequest* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getFloatRequest_finalize_ex(
        BasicTypeTest_getFloatRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getFloatRequest_copy(
        BasicTypeTest_getFloatRequest* dst,
        const BasicTypeTest_getFloatRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getFloatReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getFloatReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getFloatReplyTypeSupport;
    class BasicTypeTest_getFloatReplyDataWriter;
    class BasicTypeTest_getFloatReplyDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getFloatReply
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getFloatReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getFloatReplyTypeSupport TypeSupport;
    typedef BasicTypeTest_getFloatReplyDataWriter DataWriter;
    typedef BasicTypeTest_getFloatReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    DDS_Float  fl2;
    DDS_Float  fl3;
    DDS_Float  getFloat_ret;

} BasicTypeTest_getFloatReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getFloatReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getFloatReplySeq, BasicTypeTest_getFloatReply);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getFloatReply_initialize(
        BasicTypeTest_getFloatReply* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getFloatReply_initialize_ex(
        BasicTypeTest_getFloatReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getFloatReply_finalize(
        BasicTypeTest_getFloatReply* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getFloatReply_finalize_ex(
        BasicTypeTest_getFloatReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getFloatReply_copy(
        BasicTypeTest_getFloatReply* dst,
        const BasicTypeTest_getFloatReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getDoubleRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getDoubleRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getDoubleRequestTypeSupport;
    class BasicTypeTest_getDoubleRequestDataWriter;
    class BasicTypeTest_getDoubleRequestDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getDoubleRequest
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getDoubleRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getDoubleRequestTypeSupport TypeSupport;
    typedef BasicTypeTest_getDoubleRequestDataWriter DataWriter;
    typedef BasicTypeTest_getDoubleRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    DDS_Double  do1;
    DDS_Double  do2;

} BasicTypeTest_getDoubleRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getDoubleRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getDoubleRequestSeq, BasicTypeTest_getDoubleRequest);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getDoubleRequest_initialize(
        BasicTypeTest_getDoubleRequest* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getDoubleRequest_initialize_ex(
        BasicTypeTest_getDoubleRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getDoubleRequest_finalize(
        BasicTypeTest_getDoubleRequest* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getDoubleRequest_finalize_ex(
        BasicTypeTest_getDoubleRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getDoubleRequest_copy(
        BasicTypeTest_getDoubleRequest* dst,
        const BasicTypeTest_getDoubleRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getDoubleReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getDoubleReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getDoubleReplyTypeSupport;
    class BasicTypeTest_getDoubleReplyDataWriter;
    class BasicTypeTest_getDoubleReplyDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getDoubleReply
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getDoubleReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getDoubleReplyTypeSupport TypeSupport;
    typedef BasicTypeTest_getDoubleReplyDataWriter DataWriter;
    typedef BasicTypeTest_getDoubleReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    DDS_Double  do2;
    DDS_Double  do3;
    DDS_Double  getDouble_ret;

} BasicTypeTest_getDoubleReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getDoubleReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getDoubleReplySeq, BasicTypeTest_getDoubleReply);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getDoubleReply_initialize(
        BasicTypeTest_getDoubleReply* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getDoubleReply_initialize_ex(
        BasicTypeTest_getDoubleReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getDoubleReply_finalize(
        BasicTypeTest_getDoubleReply* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getDoubleReply_finalize_ex(
        BasicTypeTest_getDoubleReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getDoubleReply_copy(
        BasicTypeTest_getDoubleReply* dst,
        const BasicTypeTest_getDoubleReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getBooleanRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getBooleanRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getBooleanRequestTypeSupport;
    class BasicTypeTest_getBooleanRequestDataWriter;
    class BasicTypeTest_getBooleanRequestDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getBooleanRequest
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getBooleanRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getBooleanRequestTypeSupport TypeSupport;
    typedef BasicTypeTest_getBooleanRequestDataWriter DataWriter;
    typedef BasicTypeTest_getBooleanRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    DDS_Boolean  bo1;
    DDS_Boolean  bo2;

} BasicTypeTest_getBooleanRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getBooleanRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getBooleanRequestSeq, BasicTypeTest_getBooleanRequest);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getBooleanRequest_initialize(
        BasicTypeTest_getBooleanRequest* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getBooleanRequest_initialize_ex(
        BasicTypeTest_getBooleanRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getBooleanRequest_finalize(
        BasicTypeTest_getBooleanRequest* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getBooleanRequest_finalize_ex(
        BasicTypeTest_getBooleanRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getBooleanRequest_copy(
        BasicTypeTest_getBooleanRequest* dst,
        const BasicTypeTest_getBooleanRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *BasicTypeTest_getBooleanReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct BasicTypeTest_getBooleanReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class BasicTypeTest_getBooleanReplyTypeSupport;
    class BasicTypeTest_getBooleanReplyDataWriter;
    class BasicTypeTest_getBooleanReplyDataReader;
#endif

#endif

            
    

typedef struct BasicTypeTest_getBooleanReply
{
#ifdef __cplusplus
    typedef struct BasicTypeTest_getBooleanReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef BasicTypeTest_getBooleanReplyTypeSupport TypeSupport;
    typedef BasicTypeTest_getBooleanReplyDataWriter DataWriter;
    typedef BasicTypeTest_getBooleanReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    DDS_Boolean  bo2;
    DDS_Boolean  bo3;
    DDS_Boolean  getBoolean_ret;

} BasicTypeTest_getBooleanReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* BasicTypeTest_getBooleanReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(BasicTypeTest_getBooleanReplySeq, BasicTypeTest_getBooleanReply);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getBooleanReply_initialize(
        BasicTypeTest_getBooleanReply* self);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getBooleanReply_initialize_ex(
        BasicTypeTest_getBooleanReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void BasicTypeTest_getBooleanReply_finalize(
        BasicTypeTest_getBooleanReply* self);
                        
NDDSUSERDllExport
void BasicTypeTest_getBooleanReply_finalize_ex(
        BasicTypeTest_getBooleanReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool BasicTypeTest_getBooleanReply_copy(
        BasicTypeTest_getBooleanReply* dst,
        const BasicTypeTest_getBooleanReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* BasicTypeTestRequestReply_2120091168_h */
