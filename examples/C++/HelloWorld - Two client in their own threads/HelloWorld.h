
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HelloWorld.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
*/

#ifndef HelloWorld_h
#define HelloWorld_h

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


typedef  DDS_OctetSeq  Cookie;
        
        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Cookie_get_typecode(); /* Type code */
    
DDS_SEQUENCE(CookieSeq, Cookie);                                        
            
NDDSUSERDllExport
RTIBool Cookie_initialize(
        Cookie* self);
            
NDDSUSERDllExport
RTIBool Cookie_initialize_ex(
        Cookie* self,RTIBool allocatePointers);
                    
NDDSUSERDllExport
void Cookie_finalize(
        Cookie* self);
            
NDDSUSERDllExport
void Cookie_finalize_ex(
        Cookie* self,RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool Cookie_copy(
        Cookie* dst,
        const Cookie* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *tickConsumerTYPENAME;
        

#ifdef __cplusplus
}
#endif

typedef struct tickConsumer
{
    DDS_Long  id;
    char*  name; /* maximum length = (255) */

} tickConsumer;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* tickConsumer_get_typecode(); /* Type code */
    

DDS_SEQUENCE(tickConsumerSeq, tickConsumer);
        
NDDSUSERDllExport
RTIBool tickConsumer_initialize(
        tickConsumer* self);
        
NDDSUSERDllExport
RTIBool tickConsumer_initialize_ex(
        tickConsumer* self,RTIBool allocatePointers);

NDDSUSERDllExport
void tickConsumer_finalize(
        tickConsumer* self);
                        
NDDSUSERDllExport
void tickConsumer_finalize_ex(
        tickConsumer* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool tickConsumer_copy(
        tickConsumer* dst,
        const tickConsumer* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* HelloWorld_h */
