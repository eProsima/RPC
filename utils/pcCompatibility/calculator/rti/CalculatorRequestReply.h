
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CalculatorRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CalculatorRequestReply_540431706_h
#define CalculatorRequestReply_540431706_h

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

    DDS_Long  x;

    DDS_Long  y;

            
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

        
extern const char *Calculator_substractionRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct Calculator_substractionRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class Calculator_substractionRequestTypeSupport;
    class Calculator_substractionRequestDataWriter;
    class Calculator_substractionRequestDataReader;
#endif

#endif

            
    
class Calculator_substractionRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_substractionRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Calculator_substractionRequestTypeSupport TypeSupport;
    typedef Calculator_substractionRequestDataWriter DataWriter;
    typedef Calculator_substractionRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    DDS_Long  x;

    DDS_Long  y;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_substractionRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_substractionRequestSeq, Calculator_substractionRequest);
        
NDDSUSERDllExport
RTIBool Calculator_substractionRequest_initialize(
        Calculator_substractionRequest* self);
        
NDDSUSERDllExport
RTIBool Calculator_substractionRequest_initialize_ex(
        Calculator_substractionRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Calculator_substractionRequest_finalize(
        Calculator_substractionRequest* self);
                        
NDDSUSERDllExport
void Calculator_substractionRequest_finalize_ex(
        Calculator_substractionRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Calculator_substractionRequest_copy(
        Calculator_substractionRequest* dst,
        const Calculator_substractionRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *Calculator_substractionReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct Calculator_substractionReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class Calculator_substractionReplyTypeSupport;
    class Calculator_substractionReplyDataWriter;
    class Calculator_substractionReplyDataReader;
#endif

#endif

            
    
class Calculator_substractionReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_substractionReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Calculator_substractionReplyTypeSupport TypeSupport;
    typedef Calculator_substractionReplyDataWriter DataWriter;
    typedef Calculator_substractionReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    DDS_Long  substraction_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_substractionReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_substractionReplySeq, Calculator_substractionReply);
        
NDDSUSERDllExport
RTIBool Calculator_substractionReply_initialize(
        Calculator_substractionReply* self);
        
NDDSUSERDllExport
RTIBool Calculator_substractionReply_initialize_ex(
        Calculator_substractionReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Calculator_substractionReply_finalize(
        Calculator_substractionReply* self);
                        
NDDSUSERDllExport
void Calculator_substractionReply_finalize_ex(
        Calculator_substractionReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Calculator_substractionReply_copy(
        Calculator_substractionReply* dst,
        const Calculator_substractionReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *Calculator_multiplicationRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct Calculator_multiplicationRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class Calculator_multiplicationRequestTypeSupport;
    class Calculator_multiplicationRequestDataWriter;
    class Calculator_multiplicationRequestDataReader;
#endif

#endif

            
    
class Calculator_multiplicationRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_multiplicationRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Calculator_multiplicationRequestTypeSupport TypeSupport;
    typedef Calculator_multiplicationRequestDataWriter DataWriter;
    typedef Calculator_multiplicationRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    DDS_Long  x;

    DDS_Long  y;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_multiplicationRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_multiplicationRequestSeq, Calculator_multiplicationRequest);
        
NDDSUSERDllExport
RTIBool Calculator_multiplicationRequest_initialize(
        Calculator_multiplicationRequest* self);
        
NDDSUSERDllExport
RTIBool Calculator_multiplicationRequest_initialize_ex(
        Calculator_multiplicationRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Calculator_multiplicationRequest_finalize(
        Calculator_multiplicationRequest* self);
                        
NDDSUSERDllExport
void Calculator_multiplicationRequest_finalize_ex(
        Calculator_multiplicationRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Calculator_multiplicationRequest_copy(
        Calculator_multiplicationRequest* dst,
        const Calculator_multiplicationRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *Calculator_multiplicationReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct Calculator_multiplicationReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class Calculator_multiplicationReplyTypeSupport;
    class Calculator_multiplicationReplyDataWriter;
    class Calculator_multiplicationReplyDataReader;
#endif

#endif

            
    
class Calculator_multiplicationReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_multiplicationReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Calculator_multiplicationReplyTypeSupport TypeSupport;
    typedef Calculator_multiplicationReplyDataWriter DataWriter;
    typedef Calculator_multiplicationReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    DDS_Long  multiplication_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_multiplicationReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_multiplicationReplySeq, Calculator_multiplicationReply);
        
NDDSUSERDllExport
RTIBool Calculator_multiplicationReply_initialize(
        Calculator_multiplicationReply* self);
        
NDDSUSERDllExport
RTIBool Calculator_multiplicationReply_initialize_ex(
        Calculator_multiplicationReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Calculator_multiplicationReply_finalize(
        Calculator_multiplicationReply* self);
                        
NDDSUSERDllExport
void Calculator_multiplicationReply_finalize_ex(
        Calculator_multiplicationReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Calculator_multiplicationReply_copy(
        Calculator_multiplicationReply* dst,
        const Calculator_multiplicationReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *Calculator_divisionRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct Calculator_divisionRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class Calculator_divisionRequestTypeSupport;
    class Calculator_divisionRequestDataWriter;
    class Calculator_divisionRequestDataReader;
#endif

#endif

            
    
class Calculator_divisionRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_divisionRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Calculator_divisionRequestTypeSupport TypeSupport;
    typedef Calculator_divisionRequestDataWriter DataWriter;
    typedef Calculator_divisionRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    DDS_Long  x;

    DDS_Long  y;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_divisionRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_divisionRequestSeq, Calculator_divisionRequest);
        
NDDSUSERDllExport
RTIBool Calculator_divisionRequest_initialize(
        Calculator_divisionRequest* self);
        
NDDSUSERDllExport
RTIBool Calculator_divisionRequest_initialize_ex(
        Calculator_divisionRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Calculator_divisionRequest_finalize(
        Calculator_divisionRequest* self);
                        
NDDSUSERDllExport
void Calculator_divisionRequest_finalize_ex(
        Calculator_divisionRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Calculator_divisionRequest_copy(
        Calculator_divisionRequest* dst,
        const Calculator_divisionRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *Calculator_divisionReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct Calculator_divisionReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class Calculator_divisionReplyTypeSupport;
    class Calculator_divisionReplyDataWriter;
    class Calculator_divisionReplyDataReader;
#endif

#endif

            
    
class Calculator_divisionReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_divisionReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Calculator_divisionReplyTypeSupport TypeSupport;
    typedef Calculator_divisionReplyDataWriter DataWriter;
    typedef Calculator_divisionReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    DDS_Long  division_ret;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_divisionReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_divisionReplySeq, Calculator_divisionReply);
        
NDDSUSERDllExport
RTIBool Calculator_divisionReply_initialize(
        Calculator_divisionReply* self);
        
NDDSUSERDllExport
RTIBool Calculator_divisionReply_initialize_ex(
        Calculator_divisionReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Calculator_divisionReply_finalize(
        Calculator_divisionReply* self);
                        
NDDSUSERDllExport
void Calculator_divisionReply_finalize_ex(
        Calculator_divisionReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Calculator_divisionReply_copy(
        Calculator_divisionReply* dst,
        const Calculator_divisionReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* CalculatorRequestReply_540431706_h */
