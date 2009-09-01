
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from function1TemplateReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
*/

#ifndef function1TemplateReply_h
#define function1TemplateReply_h

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

        
extern const char *function1TemplateReplyTYPENAME;
        

#ifdef __cplusplus
}
#endif

typedef struct function1TemplateReply
{
    DDS_Long  clientId;
    DDS_UnsignedLong  numSec;
    DDS_Long  serverReturnCode;
    DDS_Long  returnedValue;

} function1TemplateReply;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* function1TemplateReply_get_typecode(); /* Type code */
    

DDS_SEQUENCE(function1TemplateReplySeq, function1TemplateReply);
        
NDDSUSERDllExport
RTIBool function1TemplateReply_initialize(
        function1TemplateReply* self);
        
NDDSUSERDllExport
RTIBool function1TemplateReply_initialize_ex(
        function1TemplateReply* self,RTIBool allocatePointers);

NDDSUSERDllExport
void function1TemplateReply_finalize(
        function1TemplateReply* self);
                        
NDDSUSERDllExport
void function1TemplateReply_finalize_ex(
        function1TemplateReply* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool function1TemplateReply_copy(
        function1TemplateReply* dst,
        const function1TemplateReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* function1TemplateReply_h */
