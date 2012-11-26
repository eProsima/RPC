
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ServerException.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ServerException_1761115938_h
#define ServerException_1761115938_h

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

        
extern const char *EstructuraTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct EstructuraSeq;

#ifndef NDDS_STANDALONE_TYPE
    class EstructuraTypeSupport;
    class EstructuraDataWriter;
    class EstructuraDataReader;
#endif

#endif

            
    

typedef struct Estructura
{
#ifdef __cplusplus
    typedef struct EstructuraSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef EstructuraTypeSupport TypeSupport;
    typedef EstructuraDataWriter DataWriter;
    typedef EstructuraDataReader DataReader;
#endif

#endif

    DDS_Long  count;
    char*  message; /* maximum length = (255) */

} Estructura;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Estructura_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EstructuraSeq, Estructura);
        
NDDSUSERDllExport
RTIBool Estructura_initialize(
        Estructura* self);
        
NDDSUSERDllExport
RTIBool Estructura_initialize_ex(
        Estructura* self,RTIBool allocatePointers);

NDDSUSERDllExport
void Estructura_finalize(
        Estructura* self);
                        
NDDSUSERDllExport
void Estructura_finalize_ex(
        Estructura* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Estructura_copy(
        Estructura* dst,
        const Estructura* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* ServerException_1761115938_h */
