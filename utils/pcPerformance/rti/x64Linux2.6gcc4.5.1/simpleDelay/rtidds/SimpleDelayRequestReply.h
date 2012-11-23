
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SimpleDelayRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SimpleDelayRequestReply_1090934891_h
#define SimpleDelayRequestReply_1090934891_h

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


#include "SimpleDelay.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *SimpleDelay_sumaRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct SimpleDelay_sumaRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SimpleDelay_sumaRequestTypeSupport;
    class SimpleDelay_sumaRequestDataWriter;
    class SimpleDelay_sumaRequestDataReader;
#endif

#endif

            
    
class SimpleDelay_sumaRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct SimpleDelay_sumaRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SimpleDelay_sumaRequestTypeSupport TypeSupport;
    typedef SimpleDelay_sumaRequestDataWriter DataWriter;
    typedef SimpleDelay_sumaRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    DDS_Long  value1;

    DDS_Long  value2;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SimpleDelay_sumaRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SimpleDelay_sumaRequestSeq, SimpleDelay_sumaRequest);
        
NDDSUSERDllExport
RTIBool SimpleDelay_sumaRequest_initialize(
        SimpleDelay_sumaRequest* self);
        
NDDSUSERDllExport
RTIBool SimpleDelay_sumaRequest_initialize_ex(
        SimpleDelay_sumaRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void SimpleDelay_sumaRequest_finalize(
        SimpleDelay_sumaRequest* self);
                        
NDDSUSERDllExport
void SimpleDelay_sumaRequest_finalize_ex(
        SimpleDelay_sumaRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool SimpleDelay_sumaRequest_copy(
        SimpleDelay_sumaRequest* dst,
        const SimpleDelay_sumaRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *SimpleDelay_sumaReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct SimpleDelay_sumaReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class SimpleDelay_sumaReplyTypeSupport;
    class SimpleDelay_sumaReplyDataWriter;
    class SimpleDelay_sumaReplyDataReader;
#endif

#endif

            
    
class SimpleDelay_sumaReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct SimpleDelay_sumaReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SimpleDelay_sumaReplyTypeSupport TypeSupport;
    typedef SimpleDelay_sumaReplyDataWriter DataWriter;
    typedef SimpleDelay_sumaReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    DDS_Long  suma_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SimpleDelay_sumaReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SimpleDelay_sumaReplySeq, SimpleDelay_sumaReply);
        
NDDSUSERDllExport
RTIBool SimpleDelay_sumaReply_initialize(
        SimpleDelay_sumaReply* self);
        
NDDSUSERDllExport
RTIBool SimpleDelay_sumaReply_initialize_ex(
        SimpleDelay_sumaReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void SimpleDelay_sumaReply_finalize(
        SimpleDelay_sumaReply* self);
                        
NDDSUSERDllExport
void SimpleDelay_sumaReply_finalize_ex(
        SimpleDelay_sumaReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool SimpleDelay_sumaReply_copy(
        SimpleDelay_sumaReply* dst,
        const SimpleDelay_sumaReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *SimpleDelay_duplicateRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct SimpleDelay_duplicateRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SimpleDelay_duplicateRequestTypeSupport;
    class SimpleDelay_duplicateRequestDataWriter;
    class SimpleDelay_duplicateRequestDataReader;
#endif

#endif

            
    
class SimpleDelay_duplicateRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct SimpleDelay_duplicateRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SimpleDelay_duplicateRequestTypeSupport TypeSupport;
    typedef SimpleDelay_duplicateRequestDataWriter DataWriter;
    typedef SimpleDelay_duplicateRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    Estructura  es;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SimpleDelay_duplicateRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SimpleDelay_duplicateRequestSeq, SimpleDelay_duplicateRequest);
        
NDDSUSERDllExport
RTIBool SimpleDelay_duplicateRequest_initialize(
        SimpleDelay_duplicateRequest* self);
        
NDDSUSERDllExport
RTIBool SimpleDelay_duplicateRequest_initialize_ex(
        SimpleDelay_duplicateRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void SimpleDelay_duplicateRequest_finalize(
        SimpleDelay_duplicateRequest* self);
                        
NDDSUSERDllExport
void SimpleDelay_duplicateRequest_finalize_ex(
        SimpleDelay_duplicateRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool SimpleDelay_duplicateRequest_copy(
        SimpleDelay_duplicateRequest* dst,
        const SimpleDelay_duplicateRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *SimpleDelay_duplicateReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct SimpleDelay_duplicateReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class SimpleDelay_duplicateReplyTypeSupport;
    class SimpleDelay_duplicateReplyDataWriter;
    class SimpleDelay_duplicateReplyDataReader;
#endif

#endif

            
    
class SimpleDelay_duplicateReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct SimpleDelay_duplicateReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SimpleDelay_duplicateReplyTypeSupport TypeSupport;
    typedef SimpleDelay_duplicateReplyDataWriter DataWriter;
    typedef SimpleDelay_duplicateReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    Estructura  duplicate_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SimpleDelay_duplicateReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SimpleDelay_duplicateReplySeq, SimpleDelay_duplicateReply);
        
NDDSUSERDllExport
RTIBool SimpleDelay_duplicateReply_initialize(
        SimpleDelay_duplicateReply* self);
        
NDDSUSERDllExport
RTIBool SimpleDelay_duplicateReply_initialize_ex(
        SimpleDelay_duplicateReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void SimpleDelay_duplicateReply_finalize(
        SimpleDelay_duplicateReply* self);
                        
NDDSUSERDllExport
void SimpleDelay_duplicateReply_finalize_ex(
        SimpleDelay_duplicateReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool SimpleDelay_duplicateReply_copy(
        SimpleDelay_duplicateReply* dst,
        const SimpleDelay_duplicateReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* SimpleDelayRequestReply_1090934891_h */
