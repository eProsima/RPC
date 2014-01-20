
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MessageHeader.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MessageHeader_953112507_h
#define MessageHeader_953112507_h

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

        
extern const char *IdentificationTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct IdentificationSeq;

#endif

            
    
class Identification                                        
{
public:            
#ifdef __cplusplus
    typedef struct IdentificationSeq Seq;

#endif
    
    DDS_UnsignedLong  value_1;

    DDS_UnsignedLong  value_2;

    DDS_UnsignedLong  value_3;

    DDS_UnsignedLong  value_4;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Identification_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(IdentificationSeq, Identification);
        
NDDSUSERDllExport
RTIBool Identification_initialize(
        Identification* self);
        
NDDSUSERDllExport
RTIBool Identification_initialize_ex(
        Identification* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Identification_finalize(
        Identification* self);
                        
NDDSUSERDllExport
void Identification_finalize_ex(
        Identification* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Identification_copy(
        Identification* dst,
        const Identification* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *RequestHeaderTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct RequestHeaderSeq;

#endif

            
    
class RequestHeader                                        
{
public:            
#ifdef __cplusplus
    typedef struct RequestHeaderSeq Seq;

#endif
    
    Identification  clientId;

    char*  remoteServiceName; /* maximum length = (255) */

    DDS_UnsignedLong  requestSequenceNumber;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* RequestHeader_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(RequestHeaderSeq, RequestHeader);
        
NDDSUSERDllExport
RTIBool RequestHeader_initialize(
        RequestHeader* self);
        
NDDSUSERDllExport
RTIBool RequestHeader_initialize_ex(
        RequestHeader* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void RequestHeader_finalize(
        RequestHeader* self);
                        
NDDSUSERDllExport
void RequestHeader_finalize_ex(
        RequestHeader* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool RequestHeader_copy(
        RequestHeader* dst,
        const RequestHeader* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *ReplyHeaderTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct ReplyHeaderSeq;

#endif

            
    
class ReplyHeader                                        
{
public:            
#ifdef __cplusplus
    typedef struct ReplyHeaderSeq Seq;

#endif
    
    Identification  clientId;

    DDS_UnsignedLong  requestSequenceNumber;

    DDS_Long  rpcddsRetCode;

    char*  rpcddsRetMsg; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ReplyHeader_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ReplyHeaderSeq, ReplyHeader);
        
NDDSUSERDllExport
RTIBool ReplyHeader_initialize(
        ReplyHeader* self);
        
NDDSUSERDllExport
RTIBool ReplyHeader_initialize_ex(
        ReplyHeader* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void ReplyHeader_finalize(
        ReplyHeader* self);
                        
NDDSUSERDllExport
void ReplyHeader_finalize_ex(
        ReplyHeader* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool ReplyHeader_copy(
        ReplyHeader* dst,
        const ReplyHeader* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* MessageHeader_953112507_h */
