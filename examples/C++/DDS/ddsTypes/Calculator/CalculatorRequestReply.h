
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CalculatorRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CalculatorRequestReply_540432192_h
#define CalculatorRequestReply_540432192_h

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


#define Calculator_additionRequest_LAST_MEMBER_ID 1
        
extern const char *Calculator_additionRequestTYPENAME;
        


#ifdef __cplusplus
    struct Calculator_additionRequestSeq;

#endif

            
    
class Calculator_additionRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_additionRequestSeq Seq;

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

    
NDDSUSERDllExport DDS_TypeCode* Calculator_additionRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_additionRequestSeq, Calculator_additionRequest);
        
NDDSUSERDllExport
RTIBool Calculator_additionRequest_initialize(
        Calculator_additionRequest* self);
        
NDDSUSERDllExport
RTIBool Calculator_additionRequest_initialize_ex(
        Calculator_additionRequest* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_additionRequest_initialize_w_params(
        Calculator_additionRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_additionRequest_finalize(
        Calculator_additionRequest* self);
                        
NDDSUSERDllExport
void Calculator_additionRequest_finalize_ex(
        Calculator_additionRequest* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Calculator_additionRequest_finalize_w_params(
        Calculator_additionRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Calculator_additionRequest_finalize_optional_members(
        Calculator_additionRequest* self, RTIBool deletePointers);        
        
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


#define Calculator_additionReply_LAST_MEMBER_ID 0
        
extern const char *Calculator_additionReplyTYPENAME;
        


#ifdef __cplusplus
    struct Calculator_additionReplySeq;

#endif

            
    
class Calculator_additionReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_additionReplySeq Seq;

#endif
    
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
        Calculator_additionReply* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_additionReply_initialize_w_params(
        Calculator_additionReply* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_additionReply_finalize(
        Calculator_additionReply* self);
                        
NDDSUSERDllExport
void Calculator_additionReply_finalize_ex(
        Calculator_additionReply* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Calculator_additionReply_finalize_w_params(
        Calculator_additionReply* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Calculator_additionReply_finalize_optional_members(
        Calculator_additionReply* self, RTIBool deletePointers);        
        
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


#define Calculator_subtractionRequest_LAST_MEMBER_ID 1
        
extern const char *Calculator_subtractionRequestTYPENAME;
        


#ifdef __cplusplus
    struct Calculator_subtractionRequestSeq;

#endif

            
    
class Calculator_subtractionRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_subtractionRequestSeq Seq;

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

    
NDDSUSERDllExport DDS_TypeCode* Calculator_subtractionRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Calculator_subtractionRequestSeq, Calculator_subtractionRequest);
        
NDDSUSERDllExport
RTIBool Calculator_subtractionRequest_initialize(
        Calculator_subtractionRequest* self);
        
NDDSUSERDllExport
RTIBool Calculator_subtractionRequest_initialize_ex(
        Calculator_subtractionRequest* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_subtractionRequest_initialize_w_params(
        Calculator_subtractionRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_subtractionRequest_finalize(
        Calculator_subtractionRequest* self);
                        
NDDSUSERDllExport
void Calculator_subtractionRequest_finalize_ex(
        Calculator_subtractionRequest* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Calculator_subtractionRequest_finalize_w_params(
        Calculator_subtractionRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Calculator_subtractionRequest_finalize_optional_members(
        Calculator_subtractionRequest* self, RTIBool deletePointers);        
        
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


#define Calculator_subtractionReply_LAST_MEMBER_ID 0
        
extern const char *Calculator_subtractionReplyTYPENAME;
        


#ifdef __cplusplus
    struct Calculator_subtractionReplySeq;

#endif

            
    
class Calculator_subtractionReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct Calculator_subtractionReplySeq Seq;

#endif
    
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
        Calculator_subtractionReply* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Calculator_subtractionReply_initialize_w_params(
        Calculator_subtractionReply* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Calculator_subtractionReply_finalize(
        Calculator_subtractionReply* self);
                        
NDDSUSERDllExport
void Calculator_subtractionReply_finalize_ex(
        Calculator_subtractionReply* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Calculator_subtractionReply_finalize_w_params(
        Calculator_subtractionReply* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Calculator_subtractionReply_finalize_optional_members(
        Calculator_subtractionReply* self, RTIBool deletePointers);        
        
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


                
extern const char *CalculatorRequest_unionTYPENAME;



#ifdef __cplusplus
    struct CalculatorRequest_unionSeq;

#endif


typedef struct CalculatorRequest_union {
#ifdef __cplusplus
    typedef struct CalculatorRequest_unionSeq Seq;

#endif
    DDS_Long _d;

    struct CalculatorRequest_union_u

    {
    Calculator_additionRequest  addition;

    Calculator_subtractionRequest  subtraction;


    } _u;
} CalculatorRequest_union;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CalculatorRequest_union_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(CalculatorRequest_unionSeq, CalculatorRequest_union);

NDDSUSERDllExport
RTIBool CalculatorRequest_union_initialize(
        CalculatorRequest_union* self);
        
NDDSUSERDllExport
RTIBool CalculatorRequest_union_initialize_ex(
        CalculatorRequest_union* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool CalculatorRequest_union_initialize_w_params(
        CalculatorRequest_union* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void CalculatorRequest_union_finalize(
        CalculatorRequest_union* self);
                        
NDDSUSERDllExport
void CalculatorRequest_union_finalize_ex(
        CalculatorRequest_union* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void CalculatorRequest_union_finalize_w_params(
        CalculatorRequest_union* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void CalculatorRequest_union_finalize_optional_members(
        CalculatorRequest_union* self, RTIBool deletePointers);      
        
NDDSUSERDllExport
RTIBool CalculatorRequest_union_copy(
        CalculatorRequest_union* dst,
        const CalculatorRequest_union* src);
        

NDDSUSERDllExport
DDS_Long CalculatorRequest_union_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define CalculatorRequest_LAST_MEMBER_ID 1
        
extern const char *CalculatorRequestTYPENAME;
        


#ifdef __cplusplus
    struct CalculatorRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class CalculatorRequestTypeSupport;
    class CalculatorRequestDataWriter;
    class CalculatorRequestDataReader;
#endif

#endif

            
    
class CalculatorRequest                                        
{
public:            
#ifdef __cplusplus
    typedef struct CalculatorRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef CalculatorRequestTypeSupport TypeSupport;
    typedef CalculatorRequestDataWriter DataWriter;
    typedef CalculatorRequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  _header;

    CalculatorRequest_union  unio;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CalculatorRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(CalculatorRequestSeq, CalculatorRequest);
        
NDDSUSERDllExport
RTIBool CalculatorRequest_initialize(
        CalculatorRequest* self);
        
NDDSUSERDllExport
RTIBool CalculatorRequest_initialize_ex(
        CalculatorRequest* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool CalculatorRequest_initialize_w_params(
        CalculatorRequest* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void CalculatorRequest_finalize(
        CalculatorRequest* self);
                        
NDDSUSERDllExport
void CalculatorRequest_finalize_ex(
        CalculatorRequest* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void CalculatorRequest_finalize_w_params(
        CalculatorRequest* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void CalculatorRequest_finalize_optional_members(
        CalculatorRequest* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool CalculatorRequest_copy(
        CalculatorRequest* dst,
        const CalculatorRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *CalculatorReply_unionTYPENAME;



#ifdef __cplusplus
    struct CalculatorReply_unionSeq;

#endif


typedef struct CalculatorReply_union {
#ifdef __cplusplus
    typedef struct CalculatorReply_unionSeq Seq;

#endif
    DDS_Long _d;

    struct CalculatorReply_union_u

    {
    Calculator_additionReply  addition;

    Calculator_subtractionReply  subtraction;


    } _u;
} CalculatorReply_union;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CalculatorReply_union_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(CalculatorReply_unionSeq, CalculatorReply_union);

NDDSUSERDllExport
RTIBool CalculatorReply_union_initialize(
        CalculatorReply_union* self);
        
NDDSUSERDllExport
RTIBool CalculatorReply_union_initialize_ex(
        CalculatorReply_union* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool CalculatorReply_union_initialize_w_params(
        CalculatorReply_union* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void CalculatorReply_union_finalize(
        CalculatorReply_union* self);
                        
NDDSUSERDllExport
void CalculatorReply_union_finalize_ex(
        CalculatorReply_union* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void CalculatorReply_union_finalize_w_params(
        CalculatorReply_union* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void CalculatorReply_union_finalize_optional_members(
        CalculatorReply_union* self, RTIBool deletePointers);      
        
NDDSUSERDllExport
RTIBool CalculatorReply_union_copy(
        CalculatorReply_union* dst,
        const CalculatorReply_union* src);
        

NDDSUSERDllExport
DDS_Long CalculatorReply_union_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define CalculatorReply_LAST_MEMBER_ID 1
        
extern const char *CalculatorReplyTYPENAME;
        


#ifdef __cplusplus
    struct CalculatorReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class CalculatorReplyTypeSupport;
    class CalculatorReplyDataWriter;
    class CalculatorReplyDataReader;
#endif

#endif

            
    
class CalculatorReply                                        
{
public:            
#ifdef __cplusplus
    typedef struct CalculatorReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef CalculatorReplyTypeSupport TypeSupport;
    typedef CalculatorReplyDataWriter DataWriter;
    typedef CalculatorReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  _header;

    CalculatorReply_union  unio;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CalculatorReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(CalculatorReplySeq, CalculatorReply);
        
NDDSUSERDllExport
RTIBool CalculatorReply_initialize(
        CalculatorReply* self);
        
NDDSUSERDllExport
RTIBool CalculatorReply_initialize_ex(
        CalculatorReply* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool CalculatorReply_initialize_w_params(
        CalculatorReply* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void CalculatorReply_finalize(
        CalculatorReply* self);
                        
NDDSUSERDllExport
void CalculatorReply_finalize_ex(
        CalculatorReply* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void CalculatorReply_finalize_w_params(
        CalculatorReply* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void CalculatorReply_finalize_optional_members(
        CalculatorReply* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool CalculatorReply_copy(
        CalculatorReply* dst,
        const CalculatorReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* CalculatorRequestReply_540432192_h */
