
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from TypedefTest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef TypedefTest_46236590_h
#define TypedefTest_46236590_h

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

#endif

            
    

typedef struct Datos
{
#ifdef __cplusplus
    typedef struct DatosSeq Seq;

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


typedef DDS_Long  largo;
        
        
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


typedef Datos  DatosDef;
        
        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DatosDef_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(DatosDefSeq, DatosDef);                                        
            
NDDSUSERDllExport
RTIBool DatosDef_initialize(
        DatosDef* self);
            
NDDSUSERDllExport
RTIBool DatosDef_initialize_ex(
        DatosDef* self,RTIBool allocatePointers);
                    
NDDSUSERDllExport
void DatosDef_finalize(
        DatosDef* self);
            
NDDSUSERDllExport
void DatosDef_finalize_ex(
        DatosDef* self,RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool DatosDef_copy(
        DatosDef* dst,
        const DatosDef* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


typedef char *  cadena;                
        
        
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


typedef largo  larguisimo;
        
        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* larguisimo_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(larguisimoSeq, larguisimo);                                        
            
NDDSUSERDllExport
RTIBool larguisimo_initialize(
        larguisimo* self);
            
NDDSUSERDllExport
RTIBool larguisimo_initialize_ex(
        larguisimo* self,RTIBool allocatePointers);
                    
NDDSUSERDllExport
void larguisimo_finalize(
        larguisimo* self);
            
NDDSUSERDllExport
void larguisimo_finalize_ex(
        larguisimo* self,RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool larguisimo_copy(
        larguisimo* dst,
        const larguisimo* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


typedef DatosDef  DatosDefondo;
        
        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DatosDefondo_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(DatosDefondoSeq, DatosDefondo);                                        
            
NDDSUSERDllExport
RTIBool DatosDefondo_initialize(
        DatosDefondo* self);
            
NDDSUSERDllExport
RTIBool DatosDefondo_initialize_ex(
        DatosDefondo* self,RTIBool allocatePointers);
                    
NDDSUSERDllExport
void DatosDefondo_finalize(
        DatosDefondo* self);
            
NDDSUSERDllExport
void DatosDefondo_finalize_ex(
        DatosDefondo* self,RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool DatosDefondo_copy(
        DatosDefondo* dst,
        const DatosDefondo* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


typedef cadena  correa;
        
        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* correa_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(correaSeq, correa);                                        
            
NDDSUSERDllExport
RTIBool correa_initialize(
        correa* self);
            
NDDSUSERDllExport
RTIBool correa_initialize_ex(
        correa* self,RTIBool allocatePointers);
                    
NDDSUSERDllExport
void correa_finalize(
        correa* self);
            
NDDSUSERDllExport
void correa_finalize_ex(
        correa* self,RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool correa_copy(
        correa* dst,
        const correa* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* TypedefTest_46236590_h */
