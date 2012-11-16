
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from UnionTest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef UnionTest_229517745_h
#define UnionTest_229517745_h

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

                
extern const char *EmpleadoTYPENAME;


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct EmpleadoSeq;

#endif


typedef struct Empleado {
#ifdef __cplusplus
    typedef struct EmpleadoSeq Seq;

#endif
    DDS_Char _d;
    struct Empleado_u
    {
    DDS_Long  id;
    char*  name; /* maximum length = (255) */

    } _u;
} Empleado;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Empleado_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EmpleadoSeq, Empleado);

NDDSUSERDllExport
RTIBool Empleado_initialize(
        Empleado* self);
        
NDDSUSERDllExport
RTIBool Empleado_initialize_ex(
        Empleado* self,RTIBool allocatePointers);

NDDSUSERDllExport
void Empleado_finalize(
        Empleado* self);
                        
NDDSUSERDllExport
void Empleado_finalize_ex(
        Empleado* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Empleado_copy(
        Empleado* dst,
        const Empleado* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* UnionTest_229517745_h */
