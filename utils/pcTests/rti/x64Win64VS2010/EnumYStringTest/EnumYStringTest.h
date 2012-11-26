
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from EnumYStringTest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef EnumYStringTest_928480589_h
#define EnumYStringTest_928480589_h

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



typedef enum Valores
{
    VALOR1,
    VALOR2,
    VALOR3
} Valores;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Valores_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ValoresSeq, Valores);
        
NDDSUSERDllExport
RTIBool Valores_initialize(
        Valores* self);
        
NDDSUSERDllExport
RTIBool Valores_initialize_ex(
        Valores* self,RTIBool allocatePointers);

NDDSUSERDllExport
void Valores_finalize(
        Valores* self);
                        
NDDSUSERDllExport
void Valores_finalize_ex(
        Valores* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Valores_copy(
        Valores* dst,
        const Valores* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* EnumYStringTest_928480589_h */
