
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SimpleDelay.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SimpleDelay_1048391523_h
#define SimpleDelay_1048391523_h

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

            
    
class Estructura                                        
{
public:            
#ifdef __cplusplus
    typedef struct EstructuraSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef EstructuraTypeSupport TypeSupport;
    typedef EstructuraDataWriter DataWriter;
    typedef EstructuraDataReader DataReader;
#endif

#endif
    
    DDS_Short  short1;

    DDS_Short  short2;

    DDS_Long  long1;

    DDS_Long  long2;

    DDS_LongLong  llong1;

    DDS_LongLong  llong2;

    DDS_Double  double1;

    DDS_Double  double2;

    char*  string1; /* maximum length = (255) */

    char*  string2; /* maximum length = (255) */

            
};                        
    
                            
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
        Estructura* self,RTIBool allocatePointers,RTIBool allocateMemory);

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



#endif /* SimpleDelay_1048391523_h */
