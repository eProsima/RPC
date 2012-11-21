
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from OnewayCallTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef OnewayCallTestRequestReply_1352503069_h
#define OnewayCallTestRequestReply_1352503069_h

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


#include "OnewayCallTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *OnewayCallTest_setLongRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct OnewayCallTest_setLongRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class OnewayCallTest_setLongRequestTypeSupport;
    class OnewayCallTest_setLongRequestDataWriter;
    class OnewayCallTest_setLongRequestDataReader;
#endif

#endif

            
    
class OnewayCallTest_setLongRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct OnewayCallTest_setLongRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OnewayCallTest_setLongRequestTypeSupport TypeSupport;
    typedef OnewayCallTest_setLongRequestDataWriter DataWriter;
    typedef OnewayCallTest_setLongRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    DDS_Long  lo1;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OnewayCallTest_setLongRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OnewayCallTest_setLongRequestSeq, OnewayCallTest_setLongRequest);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_setLongRequest_initialize(
        OnewayCallTest_setLongRequest* self);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_setLongRequest_initialize_ex(
        OnewayCallTest_setLongRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void OnewayCallTest_setLongRequest_finalize(
        OnewayCallTest_setLongRequest* self);
                        
NDDSUSERDllExport
void OnewayCallTest_setLongRequest_finalize_ex(
        OnewayCallTest_setLongRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_setLongRequest_copy(
        OnewayCallTest_setLongRequest* dst,
        const OnewayCallTest_setLongRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *OnewayCallTest_getLongRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct OnewayCallTest_getLongRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class OnewayCallTest_getLongRequestTypeSupport;
    class OnewayCallTest_getLongRequestDataWriter;
    class OnewayCallTest_getLongRequestDataReader;
#endif

#endif

            
    
class OnewayCallTest_getLongRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct OnewayCallTest_getLongRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OnewayCallTest_getLongRequestTypeSupport TypeSupport;
    typedef OnewayCallTest_getLongRequestDataWriter DataWriter;
    typedef OnewayCallTest_getLongRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OnewayCallTest_getLongRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OnewayCallTest_getLongRequestSeq, OnewayCallTest_getLongRequest);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getLongRequest_initialize(
        OnewayCallTest_getLongRequest* self);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getLongRequest_initialize_ex(
        OnewayCallTest_getLongRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void OnewayCallTest_getLongRequest_finalize(
        OnewayCallTest_getLongRequest* self);
                        
NDDSUSERDllExport
void OnewayCallTest_getLongRequest_finalize_ex(
        OnewayCallTest_getLongRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getLongRequest_copy(
        OnewayCallTest_getLongRequest* dst,
        const OnewayCallTest_getLongRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *OnewayCallTest_getLongReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct OnewayCallTest_getLongReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class OnewayCallTest_getLongReplyTypeSupport;
    class OnewayCallTest_getLongReplyDataWriter;
    class OnewayCallTest_getLongReplyDataReader;
#endif

#endif

            
    
class OnewayCallTest_getLongReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct OnewayCallTest_getLongReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OnewayCallTest_getLongReplyTypeSupport TypeSupport;
    typedef OnewayCallTest_getLongReplyDataWriter DataWriter;
    typedef OnewayCallTest_getLongReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    DDS_Long  getLong_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OnewayCallTest_getLongReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OnewayCallTest_getLongReplySeq, OnewayCallTest_getLongReply);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getLongReply_initialize(
        OnewayCallTest_getLongReply* self);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getLongReply_initialize_ex(
        OnewayCallTest_getLongReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void OnewayCallTest_getLongReply_finalize(
        OnewayCallTest_getLongReply* self);
                        
NDDSUSERDllExport
void OnewayCallTest_getLongReply_finalize_ex(
        OnewayCallTest_getLongReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getLongReply_copy(
        OnewayCallTest_getLongReply* dst,
        const OnewayCallTest_getLongReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *OnewayCallTest_setBooleanRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct OnewayCallTest_setBooleanRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class OnewayCallTest_setBooleanRequestTypeSupport;
    class OnewayCallTest_setBooleanRequestDataWriter;
    class OnewayCallTest_setBooleanRequestDataReader;
#endif

#endif

            
    
class OnewayCallTest_setBooleanRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct OnewayCallTest_setBooleanRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OnewayCallTest_setBooleanRequestTypeSupport TypeSupport;
    typedef OnewayCallTest_setBooleanRequestDataWriter DataWriter;
    typedef OnewayCallTest_setBooleanRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    DDS_Boolean  bo1;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OnewayCallTest_setBooleanRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OnewayCallTest_setBooleanRequestSeq, OnewayCallTest_setBooleanRequest);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_setBooleanRequest_initialize(
        OnewayCallTest_setBooleanRequest* self);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_setBooleanRequest_initialize_ex(
        OnewayCallTest_setBooleanRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void OnewayCallTest_setBooleanRequest_finalize(
        OnewayCallTest_setBooleanRequest* self);
                        
NDDSUSERDllExport
void OnewayCallTest_setBooleanRequest_finalize_ex(
        OnewayCallTest_setBooleanRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_setBooleanRequest_copy(
        OnewayCallTest_setBooleanRequest* dst,
        const OnewayCallTest_setBooleanRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *OnewayCallTest_getBooleanRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct OnewayCallTest_getBooleanRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class OnewayCallTest_getBooleanRequestTypeSupport;
    class OnewayCallTest_getBooleanRequestDataWriter;
    class OnewayCallTest_getBooleanRequestDataReader;
#endif

#endif

            
    
class OnewayCallTest_getBooleanRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct OnewayCallTest_getBooleanRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OnewayCallTest_getBooleanRequestTypeSupport TypeSupport;
    typedef OnewayCallTest_getBooleanRequestDataWriter DataWriter;
    typedef OnewayCallTest_getBooleanRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OnewayCallTest_getBooleanRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OnewayCallTest_getBooleanRequestSeq, OnewayCallTest_getBooleanRequest);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getBooleanRequest_initialize(
        OnewayCallTest_getBooleanRequest* self);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getBooleanRequest_initialize_ex(
        OnewayCallTest_getBooleanRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void OnewayCallTest_getBooleanRequest_finalize(
        OnewayCallTest_getBooleanRequest* self);
                        
NDDSUSERDllExport
void OnewayCallTest_getBooleanRequest_finalize_ex(
        OnewayCallTest_getBooleanRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getBooleanRequest_copy(
        OnewayCallTest_getBooleanRequest* dst,
        const OnewayCallTest_getBooleanRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *OnewayCallTest_getBooleanReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct OnewayCallTest_getBooleanReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class OnewayCallTest_getBooleanReplyTypeSupport;
    class OnewayCallTest_getBooleanReplyDataWriter;
    class OnewayCallTest_getBooleanReplyDataReader;
#endif

#endif

            
    
class OnewayCallTest_getBooleanReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct OnewayCallTest_getBooleanReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OnewayCallTest_getBooleanReplyTypeSupport TypeSupport;
    typedef OnewayCallTest_getBooleanReplyDataWriter DataWriter;
    typedef OnewayCallTest_getBooleanReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    DDS_Boolean  getBoolean_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OnewayCallTest_getBooleanReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OnewayCallTest_getBooleanReplySeq, OnewayCallTest_getBooleanReply);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getBooleanReply_initialize(
        OnewayCallTest_getBooleanReply* self);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getBooleanReply_initialize_ex(
        OnewayCallTest_getBooleanReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void OnewayCallTest_getBooleanReply_finalize(
        OnewayCallTest_getBooleanReply* self);
                        
NDDSUSERDllExport
void OnewayCallTest_getBooleanReply_finalize_ex(
        OnewayCallTest_getBooleanReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getBooleanReply_copy(
        OnewayCallTest_getBooleanReply* dst,
        const OnewayCallTest_getBooleanReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *OnewayCallTest_setStringRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct OnewayCallTest_setStringRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class OnewayCallTest_setStringRequestTypeSupport;
    class OnewayCallTest_setStringRequestDataWriter;
    class OnewayCallTest_setStringRequestDataReader;
#endif

#endif

            
    
class OnewayCallTest_setStringRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct OnewayCallTest_setStringRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OnewayCallTest_setStringRequestTypeSupport TypeSupport;
    typedef OnewayCallTest_setStringRequestDataWriter DataWriter;
    typedef OnewayCallTest_setStringRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    char*  s1; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OnewayCallTest_setStringRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OnewayCallTest_setStringRequestSeq, OnewayCallTest_setStringRequest);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_setStringRequest_initialize(
        OnewayCallTest_setStringRequest* self);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_setStringRequest_initialize_ex(
        OnewayCallTest_setStringRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void OnewayCallTest_setStringRequest_finalize(
        OnewayCallTest_setStringRequest* self);
                        
NDDSUSERDllExport
void OnewayCallTest_setStringRequest_finalize_ex(
        OnewayCallTest_setStringRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_setStringRequest_copy(
        OnewayCallTest_setStringRequest* dst,
        const OnewayCallTest_setStringRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *OnewayCallTest_getStringRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct OnewayCallTest_getStringRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class OnewayCallTest_getStringRequestTypeSupport;
    class OnewayCallTest_getStringRequestDataWriter;
    class OnewayCallTest_getStringRequestDataReader;
#endif

#endif

            
    
class OnewayCallTest_getStringRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct OnewayCallTest_getStringRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OnewayCallTest_getStringRequestTypeSupport TypeSupport;
    typedef OnewayCallTest_getStringRequestDataWriter DataWriter;
    typedef OnewayCallTest_getStringRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OnewayCallTest_getStringRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OnewayCallTest_getStringRequestSeq, OnewayCallTest_getStringRequest);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getStringRequest_initialize(
        OnewayCallTest_getStringRequest* self);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getStringRequest_initialize_ex(
        OnewayCallTest_getStringRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void OnewayCallTest_getStringRequest_finalize(
        OnewayCallTest_getStringRequest* self);
                        
NDDSUSERDllExport
void OnewayCallTest_getStringRequest_finalize_ex(
        OnewayCallTest_getStringRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getStringRequest_copy(
        OnewayCallTest_getStringRequest* dst,
        const OnewayCallTest_getStringRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *OnewayCallTest_getStringReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct OnewayCallTest_getStringReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class OnewayCallTest_getStringReplyTypeSupport;
    class OnewayCallTest_getStringReplyDataWriter;
    class OnewayCallTest_getStringReplyDataReader;
#endif

#endif

            
    
class OnewayCallTest_getStringReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct OnewayCallTest_getStringReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OnewayCallTest_getStringReplyTypeSupport TypeSupport;
    typedef OnewayCallTest_getStringReplyDataWriter DataWriter;
    typedef OnewayCallTest_getStringReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    char*  getString_ret; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OnewayCallTest_getStringReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OnewayCallTest_getStringReplySeq, OnewayCallTest_getStringReply);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getStringReply_initialize(
        OnewayCallTest_getStringReply* self);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getStringReply_initialize_ex(
        OnewayCallTest_getStringReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void OnewayCallTest_getStringReply_finalize(
        OnewayCallTest_getStringReply* self);
                        
NDDSUSERDllExport
void OnewayCallTest_getStringReply_finalize_ex(
        OnewayCallTest_getStringReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getStringReply_copy(
        OnewayCallTest_getStringReply* dst,
        const OnewayCallTest_getStringReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *OnewayCallTest_setStructRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct OnewayCallTest_setStructRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class OnewayCallTest_setStructRequestTypeSupport;
    class OnewayCallTest_setStructRequestDataWriter;
    class OnewayCallTest_setStructRequestDataReader;
#endif

#endif

            
    
class OnewayCallTest_setStructRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct OnewayCallTest_setStructRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OnewayCallTest_setStructRequestTypeSupport TypeSupport;
    typedef OnewayCallTest_setStructRequestDataWriter DataWriter;
    typedef OnewayCallTest_setStructRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    Structure  ev;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OnewayCallTest_setStructRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OnewayCallTest_setStructRequestSeq, OnewayCallTest_setStructRequest);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_setStructRequest_initialize(
        OnewayCallTest_setStructRequest* self);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_setStructRequest_initialize_ex(
        OnewayCallTest_setStructRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void OnewayCallTest_setStructRequest_finalize(
        OnewayCallTest_setStructRequest* self);
                        
NDDSUSERDllExport
void OnewayCallTest_setStructRequest_finalize_ex(
        OnewayCallTest_setStructRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_setStructRequest_copy(
        OnewayCallTest_setStructRequest* dst,
        const OnewayCallTest_setStructRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *OnewayCallTest_getStructRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct OnewayCallTest_getStructRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class OnewayCallTest_getStructRequestTypeSupport;
    class OnewayCallTest_getStructRequestDataWriter;
    class OnewayCallTest_getStructRequestDataReader;
#endif

#endif

            
    
class OnewayCallTest_getStructRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct OnewayCallTest_getStructRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OnewayCallTest_getStructRequestTypeSupport TypeSupport;
    typedef OnewayCallTest_getStructRequestDataWriter DataWriter;
    typedef OnewayCallTest_getStructRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OnewayCallTest_getStructRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OnewayCallTest_getStructRequestSeq, OnewayCallTest_getStructRequest);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getStructRequest_initialize(
        OnewayCallTest_getStructRequest* self);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getStructRequest_initialize_ex(
        OnewayCallTest_getStructRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void OnewayCallTest_getStructRequest_finalize(
        OnewayCallTest_getStructRequest* self);
                        
NDDSUSERDllExport
void OnewayCallTest_getStructRequest_finalize_ex(
        OnewayCallTest_getStructRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getStructRequest_copy(
        OnewayCallTest_getStructRequest* dst,
        const OnewayCallTest_getStructRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *OnewayCallTest_getStructReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct OnewayCallTest_getStructReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class OnewayCallTest_getStructReplyTypeSupport;
    class OnewayCallTest_getStructReplyDataWriter;
    class OnewayCallTest_getStructReplyDataReader;
#endif

#endif

            
    
class OnewayCallTest_getStructReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct OnewayCallTest_getStructReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef OnewayCallTest_getStructReplyTypeSupport TypeSupport;
    typedef OnewayCallTest_getStructReplyDataWriter DataWriter;
    typedef OnewayCallTest_getStructReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    Structure  getStruct_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* OnewayCallTest_getStructReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(OnewayCallTest_getStructReplySeq, OnewayCallTest_getStructReply);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getStructReply_initialize(
        OnewayCallTest_getStructReply* self);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getStructReply_initialize_ex(
        OnewayCallTest_getStructReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void OnewayCallTest_getStructReply_finalize(
        OnewayCallTest_getStructReply* self);
                        
NDDSUSERDllExport
void OnewayCallTest_getStructReply_finalize_ex(
        OnewayCallTest_getStructReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool OnewayCallTest_getStructReply_copy(
        OnewayCallTest_getStructReply* dst,
        const OnewayCallTest_getStructReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* OnewayCallTestRequestReply_1352503069_h */
