
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ControlData.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ControlData_1587716516_h
#define ControlData_1587716516_h

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

 
typedef enum Action
{
    READY = 0,
    START
} Action;
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Action_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ActionSeq, Action);
        
NDDSUSERDllExport
RTIBool Action_initialize(
        Action* self);
        
NDDSUSERDllExport
RTIBool Action_initialize_ex(
        Action* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Action_finalize(
        Action* self);
                        
NDDSUSERDllExport
void Action_finalize_ex(
        Action* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Action_copy(
        Action* dst,
        const Action* src);


NDDSUSERDllExport
RTIBool Action_getValues(ActionSeq * values);
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *ControlDataTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct ControlDataSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ControlDataTypeSupport;
    class ControlDataDataWriter;
    class ControlDataDataReader;
#endif

#endif

            
    
class ControlData                                        
{
public:            
#ifdef __cplusplus
    typedef struct ControlDataSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ControlDataTypeSupport TypeSupport;
    typedef ControlDataDataWriter DataWriter;
    typedef ControlDataDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedLong  appId;

    Action  action;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ControlData_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ControlDataSeq, ControlData);
        
NDDSUSERDllExport
RTIBool ControlData_initialize(
        ControlData* self);
        
NDDSUSERDllExport
RTIBool ControlData_initialize_ex(
        ControlData* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void ControlData_finalize(
        ControlData* self);
                        
NDDSUSERDllExport
void ControlData_finalize_ex(
        ControlData* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool ControlData_copy(
        ControlData* dst,
        const ControlData* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* ControlData_1587716516_h */
