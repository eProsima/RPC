
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CalculatorRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CalculatorRequestReply_540430929_h
#define CalculatorRequestReply_540430929_h

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


#include "Calculator.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *Calculator_additionRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct Calculator_additionRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class Calculator_additionRequestTypeSupport;
    class Calculator_additionRequestDataWriter;
    class Calculator_additionRequestDataReader;
#endif

#endif

            
    
class Calculator_additionRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_additionRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Calculator_additionRequestTypeSupport TypeSupport;
    typedef Calculator_additionRequestDataWriter DataWriter;
    typedef Calculator_additionRequestDataReader DataReader;
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

    
NDDSUSERDllExport DDS_TypeCode* Calculator_additionRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_additionRequestSeq, Calculator_additionRequest);
        
NDDSUSERDllExport
RTIBool Calculator_additionRequest_initialize(
        Calculator_additionRequest* self);
        
NDDSUSERDllExport
RTIBool Calculator_additionRequest_initialize_ex(
        Calculator_additionRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Calculator_additionRequest_finalize(
        Calculator_additionRequest* self);
                        
NDDSUSERDllExport
void Calculator_additionRequest_finalize_ex(
        Calculator_additionRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Calculator_additionRequest_copy(
        Calculator_additionRequest* dst,
        const Calculator_additionRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *Calculator_additionReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct Calculator_additionReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class Calculator_additionReplyTypeSupport;
    class Calculator_additionReplyDataWriter;
    class Calculator_additionReplyDataReader;
#endif

#endif

            
    
class Calculator_additionReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_additionReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Calculator_additionReplyTypeSupport TypeSupport;
    typedef Calculator_additionReplyDataWriter DataWriter;
    typedef Calculator_additionReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    DDS_Long  addition_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_additionReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_additionReplySeq, Calculator_additionReply);
        
NDDSUSERDllExport
RTIBool Calculator_additionReply_initialize(
        Calculator_additionReply* self);
        
NDDSUSERDllExport
RTIBool Calculator_additionReply_initialize_ex(
        Calculator_additionReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Calculator_additionReply_finalize(
        Calculator_additionReply* self);
                        
NDDSUSERDllExport
void Calculator_additionReply_finalize_ex(
        Calculator_additionReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Calculator_additionReply_copy(
        Calculator_additionReply* dst,
        const Calculator_additionReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *Calculator_subtractionRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct Calculator_subtractionRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class Calculator_subtractionRequestTypeSupport;
    class Calculator_subtractionRequestDataWriter;
    class Calculator_subtractionRequestDataReader;
#endif

#endif

            
    
class Calculator_subtractionRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_subtractionRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Calculator_subtractionRequestTypeSupport TypeSupport;
    typedef Calculator_subtractionRequestDataWriter DataWriter;
    typedef Calculator_subtractionRequestDataReader DataReader;
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

    
NDDSUSERDllExport DDS_TypeCode* Calculator_subtractionRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_subtractionRequestSeq, Calculator_subtractionRequest);
        
NDDSUSERDllExport
RTIBool Calculator_subtractionRequest_initialize(
        Calculator_subtractionRequest* self);
        
NDDSUSERDllExport
RTIBool Calculator_subtractionRequest_initialize_ex(
        Calculator_subtractionRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Calculator_subtractionRequest_finalize(
        Calculator_subtractionRequest* self);
                        
NDDSUSERDllExport
void Calculator_subtractionRequest_finalize_ex(
        Calculator_subtractionRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Calculator_subtractionRequest_copy(
        Calculator_subtractionRequest* dst,
        const Calculator_subtractionRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *Calculator_subtractionReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct Calculator_subtractionReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class Calculator_subtractionReplyTypeSupport;
    class Calculator_subtractionReplyDataWriter;
    class Calculator_subtractionReplyDataReader;
#endif

#endif

            
    
class Calculator_subtractionReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_subtractionReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Calculator_subtractionReplyTypeSupport TypeSupport;
    typedef Calculator_subtractionReplyDataWriter DataWriter;
    typedef Calculator_subtractionReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    DDS_Long  subtraction_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_subtractionReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_subtractionReplySeq, Calculator_subtractionReply);
        
NDDSUSERDllExport
RTIBool Calculator_subtractionReply_initialize(
        Calculator_subtractionReply* self);
        
NDDSUSERDllExport
RTIBool Calculator_subtractionReply_initialize_ex(
        Calculator_subtractionReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Calculator_subtractionReply_finalize(
        Calculator_subtractionReply* self);
                        
NDDSUSERDllExport
void Calculator_subtractionReply_finalize_ex(
        Calculator_subtractionReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Calculator_subtractionReply_copy(
        Calculator_subtractionReply* dst,
        const Calculator_subtractionReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* CalculatorRequestReply_540430929_h */
