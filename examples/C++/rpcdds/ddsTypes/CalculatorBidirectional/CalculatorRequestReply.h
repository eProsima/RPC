
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CalculatorRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CalculatorRequestReply_540432743_h
#define CalculatorRequestReply_540432743_h

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


#define Calculator_addition_In_LAST_MEMBER_ID 1
        
extern const char *Calculator_addition_InTYPENAME;
        


#ifdef __cplusplus
    struct Calculator_addition_InSeq;

#endif

            
    
class Calculator_addition_In                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_addition_InSeq Seq;

#endif
    
    DDS_Long  value1;

    DDS_Long  value2;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_addition_In_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_addition_InSeq, Calculator_addition_In);
        
NDDSUSERDllExport
RTIBool Calculator_addition_In_initialize(
        Calculator_addition_In* self);
        
NDDSUSERDllExport
RTIBool Calculator_addition_In_initialize_ex(
        Calculator_addition_In* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_addition_In_initialize_w_params(
        Calculator_addition_In* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_addition_In_finalize(
        Calculator_addition_In* self);
                        
NDDSUSERDllExport
void Calculator_addition_In_finalize_ex(
        Calculator_addition_In* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Calculator_addition_In_finalize_w_params(
        Calculator_addition_In* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Calculator_addition_In_finalize_optional_members(
        Calculator_addition_In* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Calculator_addition_In_copy(
        Calculator_addition_In* dst,
        const Calculator_addition_In* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define Calculator_addition_Out_LAST_MEMBER_ID 0
        
extern const char *Calculator_addition_OutTYPENAME;
        


#ifdef __cplusplus
    struct Calculator_addition_OutSeq;

#endif

            
    
class Calculator_addition_Out                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_addition_OutSeq Seq;

#endif
    
    DDS_Long  return_;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_addition_Out_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_addition_OutSeq, Calculator_addition_Out);
        
NDDSUSERDllExport
RTIBool Calculator_addition_Out_initialize(
        Calculator_addition_Out* self);
        
NDDSUSERDllExport
RTIBool Calculator_addition_Out_initialize_ex(
        Calculator_addition_Out* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_addition_Out_initialize_w_params(
        Calculator_addition_Out* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_addition_Out_finalize(
        Calculator_addition_Out* self);
                        
NDDSUSERDllExport
void Calculator_addition_Out_finalize_ex(
        Calculator_addition_Out* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Calculator_addition_Out_finalize_w_params(
        Calculator_addition_Out* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Calculator_addition_Out_finalize_optional_members(
        Calculator_addition_Out* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Calculator_addition_Out_copy(
        Calculator_addition_Out* dst,
        const Calculator_addition_Out* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *Calculator_addition_ResultTYPENAME;



#ifdef __cplusplus
    struct Calculator_addition_ResultSeq;

#endif


typedef struct Calculator_addition_Result {
#ifdef __cplusplus
    typedef struct Calculator_addition_ResultSeq Seq;

#endif
    DDS_Long _d;

    struct Calculator_addition_Result_u

    {
    Calculator_addition_Out  result;

    dds::rpc::UnknownException  unknownEx;


    } _u;
} Calculator_addition_Result;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_addition_Result_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_addition_ResultSeq, Calculator_addition_Result);

NDDSUSERDllExport
RTIBool Calculator_addition_Result_initialize(
        Calculator_addition_Result* self);
        
NDDSUSERDllExport
RTIBool Calculator_addition_Result_initialize_ex(
        Calculator_addition_Result* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_addition_Result_initialize_w_params(
        Calculator_addition_Result* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_addition_Result_finalize(
        Calculator_addition_Result* self);
                        
NDDSUSERDllExport
void Calculator_addition_Result_finalize_ex(
        Calculator_addition_Result* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void Calculator_addition_Result_finalize_w_params(
        Calculator_addition_Result* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Calculator_addition_Result_finalize_optional_members(
        Calculator_addition_Result* self, RTIBool deletePointers);      
        
NDDSUSERDllExport
RTIBool Calculator_addition_Result_copy(
        Calculator_addition_Result* dst,
        const Calculator_addition_Result* src);
        

NDDSUSERDllExport
DDS_Long Calculator_addition_Result_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define Calculator_subtraction_In_LAST_MEMBER_ID 1
        
extern const char *Calculator_subtraction_InTYPENAME;
        


#ifdef __cplusplus
    struct Calculator_subtraction_InSeq;

#endif

            
    
class Calculator_subtraction_In                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_subtraction_InSeq Seq;

#endif
    
    DDS_Long  value1;

    DDS_Long  value2;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_subtraction_In_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_subtraction_InSeq, Calculator_subtraction_In);
        
NDDSUSERDllExport
RTIBool Calculator_subtraction_In_initialize(
        Calculator_subtraction_In* self);
        
NDDSUSERDllExport
RTIBool Calculator_subtraction_In_initialize_ex(
        Calculator_subtraction_In* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_subtraction_In_initialize_w_params(
        Calculator_subtraction_In* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_subtraction_In_finalize(
        Calculator_subtraction_In* self);
                        
NDDSUSERDllExport
void Calculator_subtraction_In_finalize_ex(
        Calculator_subtraction_In* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Calculator_subtraction_In_finalize_w_params(
        Calculator_subtraction_In* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Calculator_subtraction_In_finalize_optional_members(
        Calculator_subtraction_In* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Calculator_subtraction_In_copy(
        Calculator_subtraction_In* dst,
        const Calculator_subtraction_In* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define Calculator_subtraction_Out_LAST_MEMBER_ID 0
        
extern const char *Calculator_subtraction_OutTYPENAME;
        


#ifdef __cplusplus
    struct Calculator_subtraction_OutSeq;

#endif

            
    
class Calculator_subtraction_Out                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_subtraction_OutSeq Seq;

#endif
    
    DDS_Long  return_;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_subtraction_Out_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_subtraction_OutSeq, Calculator_subtraction_Out);
        
NDDSUSERDllExport
RTIBool Calculator_subtraction_Out_initialize(
        Calculator_subtraction_Out* self);
        
NDDSUSERDllExport
RTIBool Calculator_subtraction_Out_initialize_ex(
        Calculator_subtraction_Out* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_subtraction_Out_initialize_w_params(
        Calculator_subtraction_Out* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_subtraction_Out_finalize(
        Calculator_subtraction_Out* self);
                        
NDDSUSERDllExport
void Calculator_subtraction_Out_finalize_ex(
        Calculator_subtraction_Out* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Calculator_subtraction_Out_finalize_w_params(
        Calculator_subtraction_Out* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Calculator_subtraction_Out_finalize_optional_members(
        Calculator_subtraction_Out* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Calculator_subtraction_Out_copy(
        Calculator_subtraction_Out* dst,
        const Calculator_subtraction_Out* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *Calculator_subtraction_ResultTYPENAME;



#ifdef __cplusplus
    struct Calculator_subtraction_ResultSeq;

#endif


typedef struct Calculator_subtraction_Result {
#ifdef __cplusplus
    typedef struct Calculator_subtraction_ResultSeq Seq;

#endif
    DDS_Long _d;

    struct Calculator_subtraction_Result_u

    {
    Calculator_subtraction_Out  result;

    dds::rpc::UnknownException  unknownEx;


    } _u;
} Calculator_subtraction_Result;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_subtraction_Result_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_subtraction_ResultSeq, Calculator_subtraction_Result);

NDDSUSERDllExport
RTIBool Calculator_subtraction_Result_initialize(
        Calculator_subtraction_Result* self);
        
NDDSUSERDllExport
RTIBool Calculator_subtraction_Result_initialize_ex(
        Calculator_subtraction_Result* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_subtraction_Result_initialize_w_params(
        Calculator_subtraction_Result* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_subtraction_Result_finalize(
        Calculator_subtraction_Result* self);
                        
NDDSUSERDllExport
void Calculator_subtraction_Result_finalize_ex(
        Calculator_subtraction_Result* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void Calculator_subtraction_Result_finalize_w_params(
        Calculator_subtraction_Result* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Calculator_subtraction_Result_finalize_optional_members(
        Calculator_subtraction_Result* self, RTIBool deletePointers);      
        
NDDSUSERDllExport
RTIBool Calculator_subtraction_Result_copy(
        Calculator_subtraction_Result* dst,
        const Calculator_subtraction_Result* src);
        

NDDSUSERDllExport
DDS_Long Calculator_subtraction_Result_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *Calculator_CallTYPENAME;



#ifdef __cplusplus
    struct Calculator_CallSeq;

#endif


typedef struct Calculator_Call {
#ifdef __cplusplus
    typedef struct Calculator_CallSeq Seq;

#endif
    DDS_Long _d;

    struct Calculator_Call_u

    {
    Calculator_addition_In  addition;

    Calculator_subtraction_In  subtraction;

    dds::rpc::UnknownOperation  unknownOp;


    } _u;
} Calculator_Call;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_Call_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_CallSeq, Calculator_Call);

NDDSUSERDllExport
RTIBool Calculator_Call_initialize(
        Calculator_Call* self);
        
NDDSUSERDllExport
RTIBool Calculator_Call_initialize_ex(
        Calculator_Call* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_Call_initialize_w_params(
        Calculator_Call* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_Call_finalize(
        Calculator_Call* self);
                        
NDDSUSERDllExport
void Calculator_Call_finalize_ex(
        Calculator_Call* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void Calculator_Call_finalize_w_params(
        Calculator_Call* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Calculator_Call_finalize_optional_members(
        Calculator_Call* self, RTIBool deletePointers);      
        
NDDSUSERDllExport
RTIBool Calculator_Call_copy(
        Calculator_Call* dst,
        const Calculator_Call* src);
        

NDDSUSERDllExport
DDS_Long Calculator_Call_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define Calculator_Request_LAST_MEMBER_ID 1
        
extern const char *Calculator_RequestTYPENAME;
        


#ifdef __cplusplus
    struct Calculator_RequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class Calculator_RequestTypeSupport;
    class Calculator_RequestDataWriter;
    class Calculator_RequestDataReader;
#endif

#endif

            
    
class Calculator_Request                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_RequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Calculator_RequestTypeSupport TypeSupport;
    typedef Calculator_RequestDataWriter DataWriter;
    typedef Calculator_RequestDataReader DataReader;
#endif

#endif
    
    dds::rpc::RequestHeader  header;

    Calculator_Call  data;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_Request_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_RequestSeq, Calculator_Request);
        
NDDSUSERDllExport
RTIBool Calculator_Request_initialize(
        Calculator_Request* self);
        
NDDSUSERDllExport
RTIBool Calculator_Request_initialize_ex(
        Calculator_Request* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_Request_initialize_w_params(
        Calculator_Request* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_Request_finalize(
        Calculator_Request* self);
                        
NDDSUSERDllExport
void Calculator_Request_finalize_ex(
        Calculator_Request* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Calculator_Request_finalize_w_params(
        Calculator_Request* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Calculator_Request_finalize_optional_members(
        Calculator_Request* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Calculator_Request_copy(
        Calculator_Request* dst,
        const Calculator_Request* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *Calculator_ReturnTYPENAME;



#ifdef __cplusplus
    struct Calculator_ReturnSeq;

#endif


typedef struct Calculator_Return {
#ifdef __cplusplus
    typedef struct Calculator_ReturnSeq Seq;

#endif
    DDS_Long _d;

    struct Calculator_Return_u

    {
    Calculator_addition_Result  addition;

    Calculator_subtraction_Result  subtraction;

    dds::rpc::UnknownOperation  unknownOp;


    } _u;
} Calculator_Return;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_Return_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_ReturnSeq, Calculator_Return);

NDDSUSERDllExport
RTIBool Calculator_Return_initialize(
        Calculator_Return* self);
        
NDDSUSERDllExport
RTIBool Calculator_Return_initialize_ex(
        Calculator_Return* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_Return_initialize_w_params(
        Calculator_Return* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_Return_finalize(
        Calculator_Return* self);
                        
NDDSUSERDllExport
void Calculator_Return_finalize_ex(
        Calculator_Return* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void Calculator_Return_finalize_w_params(
        Calculator_Return* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Calculator_Return_finalize_optional_members(
        Calculator_Return* self, RTIBool deletePointers);      
        
NDDSUSERDllExport
RTIBool Calculator_Return_copy(
        Calculator_Return* dst,
        const Calculator_Return* src);
        

NDDSUSERDllExport
DDS_Long Calculator_Return_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define Calculator_Reply_LAST_MEMBER_ID 1
        
extern const char *Calculator_ReplyTYPENAME;
        


#ifdef __cplusplus
    struct Calculator_ReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class Calculator_ReplyTypeSupport;
    class Calculator_ReplyDataWriter;
    class Calculator_ReplyDataReader;
#endif

#endif

            
    
class Calculator_Reply                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_ReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Calculator_ReplyTypeSupport TypeSupport;
    typedef Calculator_ReplyDataWriter DataWriter;
    typedef Calculator_ReplyDataReader DataReader;
#endif

#endif
    
    dds::rpc::ReplyHeader  header;

    Calculator_Return  data;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Calculator_Reply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_ReplySeq, Calculator_Reply);
        
NDDSUSERDllExport
RTIBool Calculator_Reply_initialize(
        Calculator_Reply* self);
        
NDDSUSERDllExport
RTIBool Calculator_Reply_initialize_ex(
        Calculator_Reply* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_Reply_initialize_w_params(
        Calculator_Reply* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_Reply_finalize(
        Calculator_Reply* self);
                        
NDDSUSERDllExport
void Calculator_Reply_finalize_ex(
        Calculator_Reply* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Calculator_Reply_finalize_w_params(
        Calculator_Reply* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Calculator_Reply_finalize_optional_members(
        Calculator_Reply* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Calculator_Reply_copy(
        Calculator_Reply* dst,
        const Calculator_Reply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* CalculatorRequestReply_540432743_h */
