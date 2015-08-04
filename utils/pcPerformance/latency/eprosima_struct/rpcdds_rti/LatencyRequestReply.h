
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from LatencyRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef LatencyRequestReply_13938624_h
#define LatencyRequestReply_13938624_h

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


#include "Latency.h"


#define Latency_latency_In_LAST_MEMBER_ID 0
        
extern const char *Latency_latency_InTYPENAME;
        


#ifdef __cplusplus
    struct Latency_latency_InSeq;

#endif

            
    
class Latency_latency_In                                        
{
public:            
#ifdef __cplusplus
    typedef struct Latency_latency_InSeq Seq;

#endif
    
    st  param;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Latency_latency_In_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Latency_latency_InSeq, Latency_latency_In);
        
NDDSUSERDllExport
RTIBool Latency_latency_In_initialize(
        Latency_latency_In* self);
        
NDDSUSERDllExport
RTIBool Latency_latency_In_initialize_ex(
        Latency_latency_In* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Latency_latency_In_initialize_w_params(
        Latency_latency_In* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Latency_latency_In_finalize(
        Latency_latency_In* self);
                        
NDDSUSERDllExport
void Latency_latency_In_finalize_ex(
        Latency_latency_In* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Latency_latency_In_finalize_w_params(
        Latency_latency_In* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Latency_latency_In_finalize_optional_members(
        Latency_latency_In* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Latency_latency_In_copy(
        Latency_latency_In* dst,
        const Latency_latency_In* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define Latency_latency_Out_LAST_MEMBER_ID 0
        
extern const char *Latency_latency_OutTYPENAME;
        


#ifdef __cplusplus
    struct Latency_latency_OutSeq;

#endif

            
    
class Latency_latency_Out                                        
{
public:            
#ifdef __cplusplus
    typedef struct Latency_latency_OutSeq Seq;

#endif
    
    st  return_;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Latency_latency_Out_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Latency_latency_OutSeq, Latency_latency_Out);
        
NDDSUSERDllExport
RTIBool Latency_latency_Out_initialize(
        Latency_latency_Out* self);
        
NDDSUSERDllExport
RTIBool Latency_latency_Out_initialize_ex(
        Latency_latency_Out* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Latency_latency_Out_initialize_w_params(
        Latency_latency_Out* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Latency_latency_Out_finalize(
        Latency_latency_Out* self);
                        
NDDSUSERDllExport
void Latency_latency_Out_finalize_ex(
        Latency_latency_Out* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Latency_latency_Out_finalize_w_params(
        Latency_latency_Out* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Latency_latency_Out_finalize_optional_members(
        Latency_latency_Out* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Latency_latency_Out_copy(
        Latency_latency_Out* dst,
        const Latency_latency_Out* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *Latency_latency_ResultTYPENAME;



#ifdef __cplusplus
    struct Latency_latency_ResultSeq;

#endif


typedef struct Latency_latency_Result {
#ifdef __cplusplus
    typedef struct Latency_latency_ResultSeq Seq;

#endif
    DDS_Long _d;

    struct Latency_latency_Result_u

    {
    UnknownException  unknown_exception;

    Latency_latency_Out  out_;

    SystemExceptionCode  sysx_;


    } _u;
} Latency_latency_Result;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Latency_latency_Result_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Latency_latency_ResultSeq, Latency_latency_Result);

NDDSUSERDllExport
RTIBool Latency_latency_Result_initialize(
        Latency_latency_Result* self);
        
NDDSUSERDllExport
RTIBool Latency_latency_Result_initialize_ex(
        Latency_latency_Result* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Latency_latency_Result_initialize_w_params(
        Latency_latency_Result* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Latency_latency_Result_finalize(
        Latency_latency_Result* self);
                        
NDDSUSERDllExport
void Latency_latency_Result_finalize_ex(
        Latency_latency_Result* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void Latency_latency_Result_finalize_w_params(
        Latency_latency_Result* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Latency_latency_Result_finalize_optional_members(
        Latency_latency_Result* self, RTIBool deletePointers);      
        
NDDSUSERDllExport
RTIBool Latency_latency_Result_copy(
        Latency_latency_Result* dst,
        const Latency_latency_Result* src);
        

NDDSUSERDllExport
DDS_Long Latency_latency_Result_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *Latency_CallTYPENAME;



#ifdef __cplusplus
    struct Latency_CallSeq;

#endif


typedef struct Latency_Call {
#ifdef __cplusplus
    typedef struct Latency_CallSeq Seq;

#endif
    DDS_Long _d;

    struct Latency_Call_u

    {
    UnknownOperation  unknown_operation;

    Latency_latency_In  latency;


    } _u;
} Latency_Call;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Latency_Call_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Latency_CallSeq, Latency_Call);

NDDSUSERDllExport
RTIBool Latency_Call_initialize(
        Latency_Call* self);
        
NDDSUSERDllExport
RTIBool Latency_Call_initialize_ex(
        Latency_Call* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Latency_Call_initialize_w_params(
        Latency_Call* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Latency_Call_finalize(
        Latency_Call* self);
                        
NDDSUSERDllExport
void Latency_Call_finalize_ex(
        Latency_Call* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void Latency_Call_finalize_w_params(
        Latency_Call* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Latency_Call_finalize_optional_members(
        Latency_Call* self, RTIBool deletePointers);      
        
NDDSUSERDllExport
RTIBool Latency_Call_copy(
        Latency_Call* dst,
        const Latency_Call* src);
        

NDDSUSERDllExport
DDS_Long Latency_Call_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define Latency_Request_LAST_MEMBER_ID 1
        
extern const char *Latency_RequestTYPENAME;
        


#ifdef __cplusplus
    struct Latency_RequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class Latency_RequestTypeSupport;
    class Latency_RequestDataWriter;
    class Latency_RequestDataReader;
#endif

#endif

            
    
class Latency_Request                                        
{
public:            
#ifdef __cplusplus
    typedef struct Latency_RequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Latency_RequestTypeSupport TypeSupport;
    typedef Latency_RequestDataWriter DataWriter;
    typedef Latency_RequestDataReader DataReader;
#endif

#endif
    
    RequestHeader  header;

    Latency_Call  request;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Latency_Request_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Latency_RequestSeq, Latency_Request);
        
NDDSUSERDllExport
RTIBool Latency_Request_initialize(
        Latency_Request* self);
        
NDDSUSERDllExport
RTIBool Latency_Request_initialize_ex(
        Latency_Request* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Latency_Request_initialize_w_params(
        Latency_Request* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Latency_Request_finalize(
        Latency_Request* self);
                        
NDDSUSERDllExport
void Latency_Request_finalize_ex(
        Latency_Request* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Latency_Request_finalize_w_params(
        Latency_Request* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Latency_Request_finalize_optional_members(
        Latency_Request* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Latency_Request_copy(
        Latency_Request* dst,
        const Latency_Request* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *Latency_ReturnTYPENAME;



#ifdef __cplusplus
    struct Latency_ReturnSeq;

#endif


typedef struct Latency_Return {
#ifdef __cplusplus
    typedef struct Latency_ReturnSeq Seq;

#endif
    DDS_Long _d;

    struct Latency_Return_u

    {
    UnknownOperation  unknown_operation;

    Latency_latency_Result  latency;


    } _u;
} Latency_Return;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Latency_Return_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Latency_ReturnSeq, Latency_Return);

NDDSUSERDllExport
RTIBool Latency_Return_initialize(
        Latency_Return* self);
        
NDDSUSERDllExport
RTIBool Latency_Return_initialize_ex(
        Latency_Return* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Latency_Return_initialize_w_params(
        Latency_Return* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Latency_Return_finalize(
        Latency_Return* self);
                        
NDDSUSERDllExport
void Latency_Return_finalize_ex(
        Latency_Return* self,RTIBool deletePointers);
        
NDDSUSERDllExport
void Latency_Return_finalize_w_params(
        Latency_Return* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void Latency_Return_finalize_optional_members(
        Latency_Return* self, RTIBool deletePointers);      
        
NDDSUSERDllExport
RTIBool Latency_Return_copy(
        Latency_Return* dst,
        const Latency_Return* src);
        

NDDSUSERDllExport
DDS_Long Latency_Return_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define Latency_Reply_LAST_MEMBER_ID 1
        
extern const char *Latency_ReplyTYPENAME;
        


#ifdef __cplusplus
    struct Latency_ReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class Latency_ReplyTypeSupport;
    class Latency_ReplyDataWriter;
    class Latency_ReplyDataReader;
#endif

#endif

            
    
class Latency_Reply                                        
{
public:            
#ifdef __cplusplus
    typedef struct Latency_ReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef Latency_ReplyTypeSupport TypeSupport;
    typedef Latency_ReplyDataWriter DataWriter;
    typedef Latency_ReplyDataReader DataReader;
#endif

#endif
    
    ReplyHeader  header;

    Latency_Return  reply;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Latency_Reply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(Latency_ReplySeq, Latency_Reply);
        
NDDSUSERDllExport
RTIBool Latency_Reply_initialize(
        Latency_Reply* self);
        
NDDSUSERDllExport
RTIBool Latency_Reply_initialize_ex(
        Latency_Reply* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool Latency_Reply_initialize_w_params(
        Latency_Reply* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void Latency_Reply_finalize(
        Latency_Reply* self);
                        
NDDSUSERDllExport
void Latency_Reply_finalize_ex(
        Latency_Reply* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void Latency_Reply_finalize_w_params(
        Latency_Reply* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void Latency_Reply_finalize_optional_members(
        Latency_Reply* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool Latency_Reply_copy(
        Latency_Reply* dst,
        const Latency_Reply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* LatencyRequestReply_13938624_h */
