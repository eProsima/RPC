
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HelloWorld.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef HelloWorld_1436885919_h
#define HelloWorld_1436885919_h

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


namespace HelloWorld{

        
extern const char *EmptyHelloResponseTYPENAME;
        


#ifdef __cplusplus
    struct EmptyHelloResponseSeq;

#endif

            
    
class EmptyHelloResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct EmptyHelloResponseSeq Seq;

#endif
    
    DDS_Long  status;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EmptyHelloResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EmptyHelloResponseSeq, EmptyHelloResponse);
        
NDDSUSERDllExport
RTIBool EmptyHelloResponse_initialize(
        EmptyHelloResponse* self);
        
NDDSUSERDllExport
RTIBool EmptyHelloResponse_initialize_ex(
        EmptyHelloResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void EmptyHelloResponse_finalize(
        EmptyHelloResponse* self);
                        
NDDSUSERDllExport
void EmptyHelloResponse_finalize_ex(
        EmptyHelloResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool EmptyHelloResponse_copy(
        EmptyHelloResponse* dst,
        const EmptyHelloResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


        
extern const char *XMLHelloResponseTYPENAME;
        


#ifdef __cplusplus
    struct XMLHelloResponseSeq;

#endif

            
    
class XMLHelloResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct XMLHelloResponseSeq Seq;

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

    
NDDSUSERDllExport DDS_TypeCode* XMLHelloResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(XMLHelloResponseSeq, XMLHelloResponse);
        
NDDSUSERDllExport
RTIBool XMLHelloResponse_initialize(
        XMLHelloResponse* self);
        
NDDSUSERDllExport
RTIBool XMLHelloResponse_initialize_ex(
        XMLHelloResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void XMLHelloResponse_finalize(
        XMLHelloResponse* self);
                        
NDDSUSERDllExport
void XMLHelloResponse_finalize_ex(
        XMLHelloResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool XMLHelloResponse_copy(
        XMLHelloResponse* dst,
        const XMLHelloResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *HelloResponseTYPENAME;



#ifdef __cplusplus
    struct HelloResponseSeq;

#endif


typedef struct HelloResponse {
#ifdef __cplusplus
    typedef struct HelloResponseSeq Seq;

#endif
    DDS_Long _d;

    struct HelloResponse_u

    {
    HelloWorld::EmptyHelloResponse  emptyHelloResponse;

    HelloWorld::XMLHelloResponse  xmlHelloResponse;


    } _u;
} HelloResponse;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* HelloResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(HelloResponseSeq, HelloResponse);

NDDSUSERDllExport
RTIBool HelloResponse_initialize(
        HelloResponse* self);
        
NDDSUSERDllExport
RTIBool HelloResponse_initialize_ex(
        HelloResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void HelloResponse_finalize(
        HelloResponse* self);
                        
NDDSUSERDllExport
void HelloResponse_finalize_ex(
        HelloResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool HelloResponse_copy(
        HelloResponse* dst,
        const HelloResponse* src);
        

NDDSUSERDllExport
DDS_UnsignedLong HelloResponse_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace HelloWorld */


#endif /* HelloWorld_1436885919_h */
