
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StructTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef StructTestRequestReply_1086133049_h
#define StructTestRequestReply_1086133049_h

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


#include "StructTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *StructTest_duplicateRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct StructTest_duplicateRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class StructTest_duplicateRequestTypeSupport;
    class StructTest_duplicateRequestDataWriter;
    class StructTest_duplicateRequestDataReader;
#endif

#endif

            
    
class StructTest_duplicateRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct StructTest_duplicateRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef StructTest_duplicateRequestTypeSupport TypeSupport;
    typedef StructTest_duplicateRequestDataWriter DataWriter;
    typedef StructTest_duplicateRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    Envio  ev;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* StructTest_duplicateRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(StructTest_duplicateRequestSeq, StructTest_duplicateRequest);
        
NDDSUSERDllExport
RTIBool StructTest_duplicateRequest_initialize(
        StructTest_duplicateRequest* self);
        
NDDSUSERDllExport
RTIBool StructTest_duplicateRequest_initialize_ex(
        StructTest_duplicateRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void StructTest_duplicateRequest_finalize(
        StructTest_duplicateRequest* self);
                        
NDDSUSERDllExport
void StructTest_duplicateRequest_finalize_ex(
        StructTest_duplicateRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool StructTest_duplicateRequest_copy(
        StructTest_duplicateRequest* dst,
        const StructTest_duplicateRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *StructTest_duplicateReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct StructTest_duplicateReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class StructTest_duplicateReplyTypeSupport;
    class StructTest_duplicateReplyDataWriter;
    class StructTest_duplicateReplyDataReader;
#endif

#endif

            
    
class StructTest_duplicateReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct StructTest_duplicateReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef StructTest_duplicateReplyTypeSupport TypeSupport;
    typedef StructTest_duplicateReplyDataWriter DataWriter;
    typedef StructTest_duplicateReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    Recepcion  duplicate_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* StructTest_duplicateReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(StructTest_duplicateReplySeq, StructTest_duplicateReply);
        
NDDSUSERDllExport
RTIBool StructTest_duplicateReply_initialize(
        StructTest_duplicateReply* self);
        
NDDSUSERDllExport
RTIBool StructTest_duplicateReply_initialize_ex(
        StructTest_duplicateReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void StructTest_duplicateReply_finalize(
        StructTest_duplicateReply* self);
                        
NDDSUSERDllExport
void StructTest_duplicateReply_finalize_ex(
        StructTest_duplicateReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool StructTest_duplicateReply_copy(
        StructTest_duplicateReply* dst,
        const StructTest_duplicateReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *StructTest_sumaRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct StructTest_sumaRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class StructTest_sumaRequestTypeSupport;
    class StructTest_sumaRequestDataWriter;
    class StructTest_sumaRequestDataReader;
#endif

#endif

            
    
class StructTest_sumaRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct StructTest_sumaRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef StructTest_sumaRequestTypeSupport TypeSupport;
    typedef StructTest_sumaRequestDataWriter DataWriter;
    typedef StructTest_sumaRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    Envio  ev1;

    Envio  ev2;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* StructTest_sumaRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(StructTest_sumaRequestSeq, StructTest_sumaRequest);
        
NDDSUSERDllExport
RTIBool StructTest_sumaRequest_initialize(
        StructTest_sumaRequest* self);
        
NDDSUSERDllExport
RTIBool StructTest_sumaRequest_initialize_ex(
        StructTest_sumaRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void StructTest_sumaRequest_finalize(
        StructTest_sumaRequest* self);
                        
NDDSUSERDllExport
void StructTest_sumaRequest_finalize_ex(
        StructTest_sumaRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool StructTest_sumaRequest_copy(
        StructTest_sumaRequest* dst,
        const StructTest_sumaRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *StructTest_sumaReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct StructTest_sumaReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class StructTest_sumaReplyTypeSupport;
    class StructTest_sumaReplyDataWriter;
    class StructTest_sumaReplyDataReader;
#endif

#endif

            
    
class StructTest_sumaReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct StructTest_sumaReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef StructTest_sumaReplyTypeSupport TypeSupport;
    typedef StructTest_sumaReplyDataWriter DataWriter;
    typedef StructTest_sumaReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    Recepcion  suma_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* StructTest_sumaReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(StructTest_sumaReplySeq, StructTest_sumaReply);
        
NDDSUSERDllExport
RTIBool StructTest_sumaReply_initialize(
        StructTest_sumaReply* self);
        
NDDSUSERDllExport
RTIBool StructTest_sumaReply_initialize_ex(
        StructTest_sumaReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void StructTest_sumaReply_finalize(
        StructTest_sumaReply* self);
                        
NDDSUSERDllExport
void StructTest_sumaReply_finalize_ex(
        StructTest_sumaReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool StructTest_sumaReply_copy(
        StructTest_sumaReply* dst,
        const StructTest_sumaReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* StructTestRequestReply_1086133049_h */
