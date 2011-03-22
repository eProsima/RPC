
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RateGenRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
*/

#ifndef RateGenRequestReply_1293720626495_h
#define RateGenRequestReply_1293720626495_h

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


#include "HelloWorld.h"


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *sumaRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif

typedef struct sumaRequest
{
    DDS_UnsignedLong  clientId[3];
    DDS_UnsignedLong  localId;
    DDS_Long  numSec;
    DDS_Long  id1;
    DDS_Long  id2;

} sumaRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* sumaRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(sumaRequestSeq, sumaRequest);
        
NDDSUSERDllExport
RTIBool sumaRequest_initialize(
        sumaRequest* self);
        
NDDSUSERDllExport
RTIBool sumaRequest_initialize_ex(
        sumaRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void sumaRequest_finalize(
        sumaRequest* self);
                        
NDDSUSERDllExport
void sumaRequest_finalize_ex(
        sumaRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool sumaRequest_copy(
        sumaRequest* dst,
        const sumaRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *sumaReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif

typedef struct sumaReply
{
    DDS_UnsignedLong  clientId[3];
    DDS_UnsignedLong  localId;
    DDS_Long  numSec;
    DDS_Long  ddscsRetCode;
    DDS_Long  returnedValue;

} sumaReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* sumaReply_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(sumaReplySeq, sumaReply);
        
NDDSUSERDllExport
RTIBool sumaReply_initialize(
        sumaReply* self);
        
NDDSUSERDllExport
RTIBool sumaReply_initialize_ex(
        sumaReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void sumaReply_finalize(
        sumaReply* self);
                        
NDDSUSERDllExport
void sumaReply_finalize_ex(
        sumaReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool sumaReply_copy(
        sumaReply* dst,
        const sumaReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* RateGenRequestReply_1293720626495_h */
