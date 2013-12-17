
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Bank.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Bank_1795593968_h
#define Bank_1795593968_h

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


namespace Bank{

        
extern const char *account_accountNumberTYPENAME;
        


#ifdef __cplusplus
    struct account_accountNumberSeq;

#endif

            
    
class account_accountNumber                                        
{
public:            
#ifdef __cplusplus
    typedef struct account_accountNumberSeq Seq;

#endif
    
    DDS_Long  accountNumber_;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* account_accountNumber_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(account_accountNumberSeq, account_accountNumber);
        
NDDSUSERDllExport
RTIBool account_accountNumber_initialize(
        account_accountNumber* self);
        
NDDSUSERDllExport
RTIBool account_accountNumber_initialize_ex(
        account_accountNumber* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void account_accountNumber_finalize(
        account_accountNumber* self);
                        
NDDSUSERDllExport
void account_accountNumber_finalize_ex(
        account_accountNumber* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool account_accountNumber_copy(
        account_accountNumber* dst,
        const account_accountNumber* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


        
extern const char *EmptyGetAccountDetailsResponseTYPENAME;
        


#ifdef __cplusplus
    struct EmptyGetAccountDetailsResponseSeq;

#endif

            
    
class EmptyGetAccountDetailsResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct EmptyGetAccountDetailsResponseSeq Seq;

#endif
    
    DDS_Long  status;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EmptyGetAccountDetailsResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EmptyGetAccountDetailsResponseSeq, EmptyGetAccountDetailsResponse);
        
NDDSUSERDllExport
RTIBool EmptyGetAccountDetailsResponse_initialize(
        EmptyGetAccountDetailsResponse* self);
        
NDDSUSERDllExport
RTIBool EmptyGetAccountDetailsResponse_initialize_ex(
        EmptyGetAccountDetailsResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void EmptyGetAccountDetailsResponse_finalize(
        EmptyGetAccountDetailsResponse* self);
                        
NDDSUSERDllExport
void EmptyGetAccountDetailsResponse_finalize_ex(
        EmptyGetAccountDetailsResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool EmptyGetAccountDetailsResponse_copy(
        EmptyGetAccountDetailsResponse* dst,
        const EmptyGetAccountDetailsResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


        
extern const char *XMLGetAccountDetailsResponseTYPENAME;
        


#ifdef __cplusplus
    struct XMLGetAccountDetailsResponseSeq;

#endif

            
    
class XMLGetAccountDetailsResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct XMLGetAccountDetailsResponseSeq Seq;

#endif
    
    DDS_Long  status;

    char*  xmlRepresentation; /* maximum length = (255) */

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* XMLGetAccountDetailsResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(XMLGetAccountDetailsResponseSeq, XMLGetAccountDetailsResponse);
        
NDDSUSERDllExport
RTIBool XMLGetAccountDetailsResponse_initialize(
        XMLGetAccountDetailsResponse* self);
        
NDDSUSERDllExport
RTIBool XMLGetAccountDetailsResponse_initialize_ex(
        XMLGetAccountDetailsResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void XMLGetAccountDetailsResponse_finalize(
        XMLGetAccountDetailsResponse* self);
                        
NDDSUSERDllExport
void XMLGetAccountDetailsResponse_finalize_ex(
        XMLGetAccountDetailsResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool XMLGetAccountDetailsResponse_copy(
        XMLGetAccountDetailsResponse* dst,
        const XMLGetAccountDetailsResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *GetAccountDetailsResponseTYPENAME;



#ifdef __cplusplus
    struct GetAccountDetailsResponseSeq;

#endif


typedef struct GetAccountDetailsResponse {
#ifdef __cplusplus
    typedef struct GetAccountDetailsResponseSeq Seq;

#endif
    DDS_Long _d;

    struct GetAccountDetailsResponse_u

    {
    Bank::EmptyGetAccountDetailsResponse  emptyGetAccountDetailsResponse;

    Bank::XMLGetAccountDetailsResponse  xmlGetAccountDetailsResponse;


    } _u;
} GetAccountDetailsResponse;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* GetAccountDetailsResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(GetAccountDetailsResponseSeq, GetAccountDetailsResponse);

NDDSUSERDllExport
RTIBool GetAccountDetailsResponse_initialize(
        GetAccountDetailsResponse* self);
        
NDDSUSERDllExport
RTIBool GetAccountDetailsResponse_initialize_ex(
        GetAccountDetailsResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void GetAccountDetailsResponse_finalize(
        GetAccountDetailsResponse* self);
                        
NDDSUSERDllExport
void GetAccountDetailsResponse_finalize_ex(
        GetAccountDetailsResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool GetAccountDetailsResponse_copy(
        GetAccountDetailsResponse* dst,
        const GetAccountDetailsResponse* src);
        

NDDSUSERDllExport
DDS_UnsignedLong GetAccountDetailsResponse_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *GetAccountDetailsRequestTYPENAME;



#ifdef __cplusplus
    struct GetAccountDetailsRequestSeq;

#endif


typedef struct GetAccountDetailsRequest {
#ifdef __cplusplus
    typedef struct GetAccountDetailsRequestSeq Seq;

#endif
    DDS_Long _d;

    struct GetAccountDetailsRequest_u

    {
    char*  xmlRepresentation; /* maximum length = (255) */


    } _u;
} GetAccountDetailsRequest;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* GetAccountDetailsRequest_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(GetAccountDetailsRequestSeq, GetAccountDetailsRequest);

NDDSUSERDllExport
RTIBool GetAccountDetailsRequest_initialize(
        GetAccountDetailsRequest* self);
        
NDDSUSERDllExport
RTIBool GetAccountDetailsRequest_initialize_ex(
        GetAccountDetailsRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void GetAccountDetailsRequest_finalize(
        GetAccountDetailsRequest* self);
                        
NDDSUSERDllExport
void GetAccountDetailsRequest_finalize_ex(
        GetAccountDetailsRequest* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool GetAccountDetailsRequest_copy(
        GetAccountDetailsRequest* dst,
        const GetAccountDetailsRequest* src);
        

NDDSUSERDllExport
DDS_UnsignedLong GetAccountDetailsRequest_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace Bank */


#endif /* Bank_1795593968_h */
