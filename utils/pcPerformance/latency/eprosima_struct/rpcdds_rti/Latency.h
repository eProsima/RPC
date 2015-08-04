
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Latency.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Latency_1496237631_h
#define Latency_1496237631_h

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


#define element_LAST_MEMBER_ID 4
        
extern const char *elementTYPENAME;
        


#ifdef __cplusplus
    struct elementSeq;

#endif

            
    
class element                                        
{
public:            
#ifdef __cplusplus
    typedef struct elementSeq Seq;

#endif
    
    DDS_Boolean  att1;

    char*  att2; /* maximum length = (255) */

    DDS_Long  att3;

    DDS_Short  att4;

    DDS_Boolean  att5;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* element_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(elementSeq, element);
        
NDDSUSERDllExport
RTIBool element_initialize(
        element* self);
        
NDDSUSERDllExport
RTIBool element_initialize_ex(
        element* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool element_initialize_w_params(
        element* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void element_finalize(
        element* self);
                        
NDDSUSERDllExport
void element_finalize_ex(
        element* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void element_finalize_w_params(
        element* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void element_finalize_optional_members(
        element* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool element_copy(
        element* dst,
        const element* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#define st_LAST_MEMBER_ID element_LAST_MEMBER_ID
typedef  elementSeq  st;
        
    
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* st_get_typecode(void); /* Type code */
    
DDS_SEQUENCE(stSeq, st);                                        
            
NDDSUSERDllExport
RTIBool st_initialize(
        st* self);
            
NDDSUSERDllExport
RTIBool st_initialize_ex(
        st* self,
        RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool st_initialize_w_params(
        st* self,
        const struct DDS_TypeAllocationParams_t * allocParams);
                    
NDDSUSERDllExport
void st_finalize(
        st* self);
            
NDDSUSERDllExport
void st_finalize_ex(
        st* self,RTIBool deletePointers);

NDDSUSERDllExport
void st_finalize_w_params(
        st* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void st_finalize_optional_members(
        st* self, RTIBool deletePointers);
                    
NDDSUSERDllExport
RTIBool st_copy(
        st* dst,
        const st* src);

    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols. */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* Latency_1496237631_h */
