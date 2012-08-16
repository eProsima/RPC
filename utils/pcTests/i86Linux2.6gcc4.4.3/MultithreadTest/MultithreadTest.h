
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MultithreadTest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MultithreadTest_1857714594_h
#define MultithreadTest_1857714594_h

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

        
extern const char *DatoTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct DatoSeq;

#endif

            
    

typedef struct Dato
{
#ifdef __cplusplus
    typedef struct DatoSeq Seq;

#endif

    DDS_Long  count;
    char*  message; /* maximum length = (255) */

} Dato;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Dato_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(DatoSeq, Dato);
        
NDDSUSERDllExport
RTIBool Dato_initialize(
        Dato* self);
        
NDDSUSERDllExport
RTIBool Dato_initialize_ex(
        Dato* self,RTIBool allocatePointers);

NDDSUSERDllExport
void Dato_finalize(
        Dato* self);
                        
NDDSUSERDllExport
void Dato_finalize_ex(
        Dato* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Dato_copy(
        Dato* dst,
        const Dato* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* MultithreadTest_1857714594_h */
