
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from StructTest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef StructTest_784352119_h
#define StructTest_784352119_h

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

        
extern const char *EnvioTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct EnvioSeq;

#endif

            
    
class Envio                                        
{
public:            
#ifdef __cplusplus
    typedef struct EnvioSeq Seq;

#endif
    
    DDS_Long  dato;

    char*  message; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Envio_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EnvioSeq, Envio);
        
NDDSUSERDllExport
RTIBool Envio_initialize(
        Envio* self);
        
NDDSUSERDllExport
RTIBool Envio_initialize_ex(
        Envio* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Envio_finalize(
        Envio* self);
                        
NDDSUSERDllExport
void Envio_finalize_ex(
        Envio* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Envio_copy(
        Envio* dst,
        const Envio* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *RecepcionTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct RecepcionSeq;

#endif

            
    
class Recepcion                                        
{
public:            
#ifdef __cplusplus
    typedef struct RecepcionSeq Seq;

#endif
    
    DDS_Long  devolucion;

    char*  message; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Recepcion_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(RecepcionSeq, Recepcion);
        
NDDSUSERDllExport
RTIBool Recepcion_initialize(
        Recepcion* self);
        
NDDSUSERDllExport
RTIBool Recepcion_initialize_ex(
        Recepcion* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Recepcion_finalize(
        Recepcion* self);
                        
NDDSUSERDllExport
void Recepcion_finalize_ex(
        Recepcion* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Recepcion_copy(
        Recepcion* dst,
        const Recepcion* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* StructTest_784352119_h */
