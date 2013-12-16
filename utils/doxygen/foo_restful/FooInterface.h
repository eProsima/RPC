
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FooInterface.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FooInterface_511704831_h
#define FooInterface_511704831_h

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


namespace FooInterface{

        
extern const char *EmptyvoidTYPENAME;
        


#ifdef __cplusplus
    struct EmptyvoidSeq;

#endif

            
    
class Emptyvoid                                        
{
public:            
#ifdef __cplusplus
    typedef struct EmptyvoidSeq Seq;

#endif
    
    DDS_Long  status;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Emptyvoid_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EmptyvoidSeq, Emptyvoid);
        
NDDSUSERDllExport
RTIBool Emptyvoid_initialize(
        Emptyvoid* self);
        
NDDSUSERDllExport
RTIBool Emptyvoid_initialize_ex(
        Emptyvoid* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Emptyvoid_finalize(
        Emptyvoid* self);
                        
NDDSUSERDllExport
void Emptyvoid_finalize_ex(
        Emptyvoid* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Emptyvoid_copy(
        Emptyvoid* dst,
        const Emptyvoid* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace FooInterface */


#endif /* FooInterface_511704831_h */
