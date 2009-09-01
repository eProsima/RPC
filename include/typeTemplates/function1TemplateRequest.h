
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from function1TemplateRequest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
*/

#ifndef function1TemplateRequest_h
#define function1TemplateRequest_h

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


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *function1TemplateRequestTYPENAME;
        

#ifdef __cplusplus
}
#endif

typedef struct function1TemplateRequest
{
    DDS_Long  clientId;
    DDS_UnsignedLong  numSec;
    DDS_Long  param1;
    DDS_Octet  param2;

} function1TemplateRequest;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* function1TemplateRequest_get_typecode(); /* Type code */
    

DDS_SEQUENCE(function1TemplateRequestSeq, function1TemplateRequest);
        
NDDSUSERDllExport
RTIBool function1TemplateRequest_initialize(
        function1TemplateRequest* self);
        
NDDSUSERDllExport
RTIBool function1TemplateRequest_initialize_ex(
        function1TemplateRequest* self,RTIBool allocatePointers);

NDDSUSERDllExport
void function1TemplateRequest_finalize(
        function1TemplateRequest* self);
                        
NDDSUSERDllExport
void function1TemplateRequest_finalize_ex(
        function1TemplateRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool function1TemplateRequest_copy(
        function1TemplateRequest* dst,
        const function1TemplateRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* function1TemplateRequest_h */
