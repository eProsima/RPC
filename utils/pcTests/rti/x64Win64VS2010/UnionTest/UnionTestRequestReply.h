
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from UnionTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef UnionTestRequestReply_1136051145_h
#define UnionTestRequestReply_1136051145_h

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


#include "UnionTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *UnionTest_getEmpleadoRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct UnionTest_getEmpleadoRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class UnionTest_getEmpleadoRequestTypeSupport;
    class UnionTest_getEmpleadoRequestDataWriter;
    class UnionTest_getEmpleadoRequestDataReader;
#endif

#endif

            
    

typedef struct UnionTest_getEmpleadoRequest
{
#ifdef __cplusplus
    typedef struct UnionTest_getEmpleadoRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef UnionTest_getEmpleadoRequestTypeSupport TypeSupport;
    typedef UnionTest_getEmpleadoRequestDataWriter DataWriter;
    typedef UnionTest_getEmpleadoRequestDataReader DataReader;
#endif

#endif

    RequestHeader  header;
    Empleado  em1;
    Empleado  em2;

} UnionTest_getEmpleadoRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* UnionTest_getEmpleadoRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(UnionTest_getEmpleadoRequestSeq, UnionTest_getEmpleadoRequest);
        
NDDSUSERDllExport
RTIBool UnionTest_getEmpleadoRequest_initialize(
        UnionTest_getEmpleadoRequest* self);
        
NDDSUSERDllExport
RTIBool UnionTest_getEmpleadoRequest_initialize_ex(
        UnionTest_getEmpleadoRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void UnionTest_getEmpleadoRequest_finalize(
        UnionTest_getEmpleadoRequest* self);
                        
NDDSUSERDllExport
void UnionTest_getEmpleadoRequest_finalize_ex(
        UnionTest_getEmpleadoRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool UnionTest_getEmpleadoRequest_copy(
        UnionTest_getEmpleadoRequest* dst,
        const UnionTest_getEmpleadoRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *UnionTest_getEmpleadoReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct UnionTest_getEmpleadoReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class UnionTest_getEmpleadoReplyTypeSupport;
    class UnionTest_getEmpleadoReplyDataWriter;
    class UnionTest_getEmpleadoReplyDataReader;
#endif

#endif

            
    

typedef struct UnionTest_getEmpleadoReply
{
#ifdef __cplusplus
    typedef struct UnionTest_getEmpleadoReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef UnionTest_getEmpleadoReplyTypeSupport TypeSupport;
    typedef UnionTest_getEmpleadoReplyDataWriter DataWriter;
    typedef UnionTest_getEmpleadoReplyDataReader DataReader;
#endif

#endif

    ReplyHeader  header;
    Empleado  em2;
    Empleado  em3;
    Empleado  getEmpleado_ret;

} UnionTest_getEmpleadoReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* UnionTest_getEmpleadoReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(UnionTest_getEmpleadoReplySeq, UnionTest_getEmpleadoReply);
        
NDDSUSERDllExport
RTIBool UnionTest_getEmpleadoReply_initialize(
        UnionTest_getEmpleadoReply* self);
        
NDDSUSERDllExport
RTIBool UnionTest_getEmpleadoReply_initialize_ex(
        UnionTest_getEmpleadoReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void UnionTest_getEmpleadoReply_finalize(
        UnionTest_getEmpleadoReply* self);
                        
NDDSUSERDllExport
void UnionTest_getEmpleadoReply_finalize_ex(
        UnionTest_getEmpleadoReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool UnionTest_getEmpleadoReply_copy(
        UnionTest_getEmpleadoReply* dst,
        const UnionTest_getEmpleadoReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* UnionTestRequestReply_1136051145_h */
