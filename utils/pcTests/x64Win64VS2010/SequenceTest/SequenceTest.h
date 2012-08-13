
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SequenceTest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SequenceTest_81001484_h
#define SequenceTest_81001484_h

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

        
extern const char *DatosTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct DatosSeq;

#ifndef NDDS_STANDALONE_TYPE
    class DatosTypeSupport;
    class DatosDataWriter;
    class DatosDataReader;
#endif

#endif

            
    

typedef struct Datos
{
#ifdef __cplusplus
    typedef struct DatosSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef DatosTypeSupport TypeSupport;
    typedef DatosDataWriter DataWriter;
    typedef DatosDataReader DataReader;
#endif

#endif

    DDS_Long  count;
    char*  message; /* maximum length = (255) */

} Datos;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Datos_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(DatosSeq, Datos);
        
NDDSUSERDllExport
RTIBool Datos_initialize(
        Datos* self);
        
NDDSUSERDllExport
RTIBool Datos_initialize_ex(
        Datos* self,RTIBool allocatePointers);

NDDSUSERDllExport
void Datos_finalize(
        Datos* self);
                        
NDDSUSERDllExport
void Datos_finalize_ex(
        Datos* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Datos_copy(
        Datos* dst,
        const Datos* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


typedef  DDS_LongSeq  largo;
        
        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* largo_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(largoSeq, largo);                                        
            
NDDSUSERDllExport
RTIBool largo_initialize(
        largo* self);
            
NDDSUSERDllExport
RTIBool largo_initialize_ex(
        largo* self,RTIBool allocatePointers);
                    
NDDSUSERDllExport
void largo_finalize(
        largo* self);
            
NDDSUSERDllExport
void largo_finalize_ex(
        largo* self,RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool largo_copy(
        largo* dst,
        const largo* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


typedef  DDS_StringSeq  cadena;
        
        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* cadena_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(cadenaSeq, cadena);                                        
            
NDDSUSERDllExport
RTIBool cadena_initialize(
        cadena* self);
            
NDDSUSERDllExport
RTIBool cadena_initialize_ex(
        cadena* self,RTIBool allocatePointers);
                    
NDDSUSERDllExport
void cadena_finalize(
        cadena* self);
            
NDDSUSERDllExport
void cadena_finalize_ex(
        cadena* self,RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool cadena_copy(
        cadena* dst,
        const cadena* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


typedef  DatosSeq  dattos;
        
        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* dattos_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(dattosSeq, dattos);                                        
            
NDDSUSERDllExport
RTIBool dattos_initialize(
        dattos* self);
            
NDDSUSERDllExport
RTIBool dattos_initialize_ex(
        dattos* self,RTIBool allocatePointers);
                    
NDDSUSERDllExport
void dattos_finalize(
        dattos* self);
            
NDDSUSERDllExport
void dattos_finalize_ex(
        dattos* self,RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool dattos_copy(
        dattos* dst,
        const dattos* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* SequenceTest_81001484_h */
