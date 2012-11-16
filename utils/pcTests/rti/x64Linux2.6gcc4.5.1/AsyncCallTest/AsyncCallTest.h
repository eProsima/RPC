
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from AsyncCallTest.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef AsyncCallTest_1539606957_h
#define AsyncCallTest_1539606957_h

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

        
extern const char *StructureTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct StructureSeq;

#endif

            
    
class Structure                                        
{
public:            
#ifdef __cplusplus
    typedef struct StructureSeq Seq;

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

    
NDDSUSERDllExport DDS_TypeCode* Structure_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(StructureSeq, Structure);
        
NDDSUSERDllExport
RTIBool Structure_initialize(
        Structure* self);
        
NDDSUSERDllExport
RTIBool Structure_initialize_ex(
        Structure* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Structure_finalize(
        Structure* self);
                        
NDDSUSERDllExport
void Structure_finalize_ex(
        Structure* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Structure_copy(
        Structure* dst,
        const Structure* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* AsyncCallTest_1539606957_h */
