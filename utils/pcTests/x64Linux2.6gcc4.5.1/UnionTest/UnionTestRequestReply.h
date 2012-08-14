
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from UnionTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef UnionTestRequestReply_1136051226_h
#define UnionTestRequestReply_1136051226_h

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


#include "UnionTest.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getEmpleadoRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getEmpleadoRequestSeq;

#ifndef NDDS_STANDALONE_TYPE
    class getEmpleadoRequestTypeSupport;
    class getEmpleadoRequestDataWriter;
    class getEmpleadoRequestDataReader;
#endif

#endif

            
    

typedef struct getEmpleadoRequest
{
#ifdef __cplusplus
    typedef struct getEmpleadoRequestSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getEmpleadoRequestTypeSupport TypeSupport;
    typedef getEmpleadoRequestDataWriter DataWriter;
    typedef getEmpleadoRequestDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    Empleado  em1;
    Empleado  em2;

} getEmpleadoRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getEmpleadoRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getEmpleadoRequestSeq, getEmpleadoRequest);
        
NDDSUSERDllExport
RTIBool getEmpleadoRequest_initialize(
        getEmpleadoRequest* self);
        
NDDSUSERDllExport
RTIBool getEmpleadoRequest_initialize_ex(
        getEmpleadoRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getEmpleadoRequest_finalize(
        getEmpleadoRequest* self);
                        
NDDSUSERDllExport
void getEmpleadoRequest_finalize_ex(
        getEmpleadoRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getEmpleadoRequest_copy(
        getEmpleadoRequest* dst,
        const getEmpleadoRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *getEmpleadoReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct getEmpleadoReplySeq;

#ifndef NDDS_STANDALONE_TYPE
    class getEmpleadoReplyTypeSupport;
    class getEmpleadoReplyDataWriter;
    class getEmpleadoReplyDataReader;
#endif

#endif

            
    

typedef struct getEmpleadoReply
{
#ifdef __cplusplus
    typedef struct getEmpleadoReplySeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef getEmpleadoReplyTypeSupport TypeSupport;
    typedef getEmpleadoReplyDataWriter DataWriter;
    typedef getEmpleadoReplyDataReader DataReader;
#endif

#endif

    DDS_UnsignedLong  serverServiceId[4];
    DDS_UnsignedLong  clientServiceId[4];
    DDS_UnsignedLong  numSec;
    DDS_Long  ddscsRetCode;
    Empleado  em2;
    Empleado  em3;
    Empleado  returnedValue;

} getEmpleadoReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* getEmpleadoReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(getEmpleadoReplySeq, getEmpleadoReply);
        
NDDSUSERDllExport
RTIBool getEmpleadoReply_initialize(
        getEmpleadoReply* self);
        
NDDSUSERDllExport
RTIBool getEmpleadoReply_initialize_ex(
        getEmpleadoReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void getEmpleadoReply_finalize(
        getEmpleadoReply* self);
                        
NDDSUSERDllExport
void getEmpleadoReply_finalize_ex(
        getEmpleadoReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool getEmpleadoReply_copy(
        getEmpleadoReply* dst,
        const getEmpleadoReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* UnionTestRequestReply_1136051226_h */
