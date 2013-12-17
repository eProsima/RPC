
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Calculator.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef Calculator_1695588693_h
#define Calculator_1695588693_h

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


namespace Calculator{

        
extern const char *EmptyAddResponseTYPENAME;
        


#ifdef __cplusplus
    struct EmptyAddResponseSeq;

#endif

            
    
class EmptyAddResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct EmptyAddResponseSeq Seq;

#endif
    
    DDS_Long  status;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EmptyAddResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EmptyAddResponseSeq, EmptyAddResponse);
        
NDDSUSERDllExport
RTIBool EmptyAddResponse_initialize(
        EmptyAddResponse* self);
        
NDDSUSERDllExport
RTIBool EmptyAddResponse_initialize_ex(
        EmptyAddResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void EmptyAddResponse_finalize(
        EmptyAddResponse* self);
                        
NDDSUSERDllExport
void EmptyAddResponse_finalize_ex(
        EmptyAddResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool EmptyAddResponse_copy(
        EmptyAddResponse* dst,
        const EmptyAddResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


        
extern const char *XMLAddResponseTYPENAME;
        


#ifdef __cplusplus
    struct XMLAddResponseSeq;

#endif

            
    
class XMLAddResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct XMLAddResponseSeq Seq;

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

    
NDDSUSERDllExport DDS_TypeCode* XMLAddResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(XMLAddResponseSeq, XMLAddResponse);
        
NDDSUSERDllExport
RTIBool XMLAddResponse_initialize(
        XMLAddResponse* self);
        
NDDSUSERDllExport
RTIBool XMLAddResponse_initialize_ex(
        XMLAddResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void XMLAddResponse_finalize(
        XMLAddResponse* self);
                        
NDDSUSERDllExport
void XMLAddResponse_finalize_ex(
        XMLAddResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool XMLAddResponse_copy(
        XMLAddResponse* dst,
        const XMLAddResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *AddResponseTYPENAME;



#ifdef __cplusplus
    struct AddResponseSeq;

#endif


typedef struct AddResponse {
#ifdef __cplusplus
    typedef struct AddResponseSeq Seq;

#endif
    DDS_Long _d;

    struct AddResponse_u

    {
    Calculator::EmptyAddResponse  emptyAddResponse;

    Calculator::XMLAddResponse  xmlAddResponse;


    } _u;
} AddResponse;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* AddResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AddResponseSeq, AddResponse);

NDDSUSERDllExport
RTIBool AddResponse_initialize(
        AddResponse* self);
        
NDDSUSERDllExport
RTIBool AddResponse_initialize_ex(
        AddResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void AddResponse_finalize(
        AddResponse* self);
                        
NDDSUSERDllExport
void AddResponse_finalize_ex(
        AddResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool AddResponse_copy(
        AddResponse* dst,
        const AddResponse* src);
        

NDDSUSERDllExport
DDS_UnsignedLong AddResponse_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


        
extern const char *EmptySubstractResponseTYPENAME;
        


#ifdef __cplusplus
    struct EmptySubstractResponseSeq;

#endif

            
    
class EmptySubstractResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct EmptySubstractResponseSeq Seq;

#endif
    
    DDS_Long  status;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EmptySubstractResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EmptySubstractResponseSeq, EmptySubstractResponse);
        
NDDSUSERDllExport
RTIBool EmptySubstractResponse_initialize(
        EmptySubstractResponse* self);
        
NDDSUSERDllExport
RTIBool EmptySubstractResponse_initialize_ex(
        EmptySubstractResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void EmptySubstractResponse_finalize(
        EmptySubstractResponse* self);
                        
NDDSUSERDllExport
void EmptySubstractResponse_finalize_ex(
        EmptySubstractResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool EmptySubstractResponse_copy(
        EmptySubstractResponse* dst,
        const EmptySubstractResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


        
extern const char *XMLSubstractResponseTYPENAME;
        


#ifdef __cplusplus
    struct XMLSubstractResponseSeq;

#endif

            
    
class XMLSubstractResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct XMLSubstractResponseSeq Seq;

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

    
NDDSUSERDllExport DDS_TypeCode* XMLSubstractResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(XMLSubstractResponseSeq, XMLSubstractResponse);
        
NDDSUSERDllExport
RTIBool XMLSubstractResponse_initialize(
        XMLSubstractResponse* self);
        
NDDSUSERDllExport
RTIBool XMLSubstractResponse_initialize_ex(
        XMLSubstractResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void XMLSubstractResponse_finalize(
        XMLSubstractResponse* self);
                        
NDDSUSERDllExport
void XMLSubstractResponse_finalize_ex(
        XMLSubstractResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool XMLSubstractResponse_copy(
        XMLSubstractResponse* dst,
        const XMLSubstractResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *SubstractResponseTYPENAME;



#ifdef __cplusplus
    struct SubstractResponseSeq;

#endif


typedef struct SubstractResponse {
#ifdef __cplusplus
    typedef struct SubstractResponseSeq Seq;

#endif
    DDS_Long _d;

    struct SubstractResponse_u

    {
    Calculator::EmptySubstractResponse  emptySubstractResponse;

    Calculator::XMLSubstractResponse  xmlSubstractResponse;


    } _u;
} SubstractResponse;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SubstractResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SubstractResponseSeq, SubstractResponse);

NDDSUSERDllExport
RTIBool SubstractResponse_initialize(
        SubstractResponse* self);
        
NDDSUSERDllExport
RTIBool SubstractResponse_initialize_ex(
        SubstractResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void SubstractResponse_finalize(
        SubstractResponse* self);
                        
NDDSUSERDllExport
void SubstractResponse_finalize_ex(
        SubstractResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool SubstractResponse_copy(
        SubstractResponse* dst,
        const SubstractResponse* src);
        

NDDSUSERDllExport
DDS_UnsignedLong SubstractResponse_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


        
extern const char *EmptyMultiplyResponseTYPENAME;
        


#ifdef __cplusplus
    struct EmptyMultiplyResponseSeq;

#endif

            
    
class EmptyMultiplyResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct EmptyMultiplyResponseSeq Seq;

#endif
    
    DDS_Long  status;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EmptyMultiplyResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EmptyMultiplyResponseSeq, EmptyMultiplyResponse);
        
NDDSUSERDllExport
RTIBool EmptyMultiplyResponse_initialize(
        EmptyMultiplyResponse* self);
        
NDDSUSERDllExport
RTIBool EmptyMultiplyResponse_initialize_ex(
        EmptyMultiplyResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void EmptyMultiplyResponse_finalize(
        EmptyMultiplyResponse* self);
                        
NDDSUSERDllExport
void EmptyMultiplyResponse_finalize_ex(
        EmptyMultiplyResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool EmptyMultiplyResponse_copy(
        EmptyMultiplyResponse* dst,
        const EmptyMultiplyResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


        
extern const char *XMLMultiplyResponseTYPENAME;
        


#ifdef __cplusplus
    struct XMLMultiplyResponseSeq;

#endif

            
    
class XMLMultiplyResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct XMLMultiplyResponseSeq Seq;

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

    
NDDSUSERDllExport DDS_TypeCode* XMLMultiplyResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(XMLMultiplyResponseSeq, XMLMultiplyResponse);
        
NDDSUSERDllExport
RTIBool XMLMultiplyResponse_initialize(
        XMLMultiplyResponse* self);
        
NDDSUSERDllExport
RTIBool XMLMultiplyResponse_initialize_ex(
        XMLMultiplyResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void XMLMultiplyResponse_finalize(
        XMLMultiplyResponse* self);
                        
NDDSUSERDllExport
void XMLMultiplyResponse_finalize_ex(
        XMLMultiplyResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool XMLMultiplyResponse_copy(
        XMLMultiplyResponse* dst,
        const XMLMultiplyResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *MultiplyResponseTYPENAME;



#ifdef __cplusplus
    struct MultiplyResponseSeq;

#endif


typedef struct MultiplyResponse {
#ifdef __cplusplus
    typedef struct MultiplyResponseSeq Seq;

#endif
    DDS_Long _d;

    struct MultiplyResponse_u

    {
    Calculator::EmptyMultiplyResponse  emptyMultiplyResponse;

    Calculator::XMLMultiplyResponse  xmlMultiplyResponse;


    } _u;
} MultiplyResponse;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MultiplyResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MultiplyResponseSeq, MultiplyResponse);

NDDSUSERDllExport
RTIBool MultiplyResponse_initialize(
        MultiplyResponse* self);
        
NDDSUSERDllExport
RTIBool MultiplyResponse_initialize_ex(
        MultiplyResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void MultiplyResponse_finalize(
        MultiplyResponse* self);
                        
NDDSUSERDllExport
void MultiplyResponse_finalize_ex(
        MultiplyResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool MultiplyResponse_copy(
        MultiplyResponse* dst,
        const MultiplyResponse* src);
        

NDDSUSERDllExport
DDS_UnsignedLong MultiplyResponse_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


        
extern const char *EmptyDivideResponseTYPENAME;
        


#ifdef __cplusplus
    struct EmptyDivideResponseSeq;

#endif

            
    
class EmptyDivideResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct EmptyDivideResponseSeq Seq;

#endif
    
    DDS_Long  status;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* EmptyDivideResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(EmptyDivideResponseSeq, EmptyDivideResponse);
        
NDDSUSERDllExport
RTIBool EmptyDivideResponse_initialize(
        EmptyDivideResponse* self);
        
NDDSUSERDllExport
RTIBool EmptyDivideResponse_initialize_ex(
        EmptyDivideResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void EmptyDivideResponse_finalize(
        EmptyDivideResponse* self);
                        
NDDSUSERDllExport
void EmptyDivideResponse_finalize_ex(
        EmptyDivideResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool EmptyDivideResponse_copy(
        EmptyDivideResponse* dst,
        const EmptyDivideResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


        
extern const char *XMLDivideResponseTYPENAME;
        


#ifdef __cplusplus
    struct XMLDivideResponseSeq;

#endif

            
    
class XMLDivideResponse                                        
{
public:            
#ifdef __cplusplus
    typedef struct XMLDivideResponseSeq Seq;

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

    
NDDSUSERDllExport DDS_TypeCode* XMLDivideResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(XMLDivideResponseSeq, XMLDivideResponse);
        
NDDSUSERDllExport
RTIBool XMLDivideResponse_initialize(
        XMLDivideResponse* self);
        
NDDSUSERDllExport
RTIBool XMLDivideResponse_initialize_ex(
        XMLDivideResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void XMLDivideResponse_finalize(
        XMLDivideResponse* self);
                        
NDDSUSERDllExport
void XMLDivideResponse_finalize_ex(
        XMLDivideResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool XMLDivideResponse_copy(
        XMLDivideResponse* dst,
        const XMLDivideResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


                
extern const char *DivideResponseTYPENAME;



#ifdef __cplusplus
    struct DivideResponseSeq;

#endif


typedef struct DivideResponse {
#ifdef __cplusplus
    typedef struct DivideResponseSeq Seq;

#endif
    DDS_Long _d;

    struct DivideResponse_u

    {
    Calculator::EmptyDivideResponse  emptyDivideResponse;

    Calculator::XMLDivideResponse  xmlDivideResponse;


    } _u;
} DivideResponse;

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DivideResponse_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(DivideResponseSeq, DivideResponse);

NDDSUSERDllExport
RTIBool DivideResponse_initialize(
        DivideResponse* self);
        
NDDSUSERDllExport
RTIBool DivideResponse_initialize_ex(
        DivideResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void DivideResponse_finalize(
        DivideResponse* self);
                        
NDDSUSERDllExport
void DivideResponse_finalize_ex(
        DivideResponse* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool DivideResponse_copy(
        DivideResponse* dst,
        const DivideResponse* src);
        

NDDSUSERDllExport
DDS_UnsignedLong DivideResponse_getDefaultDiscriminator();
    

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace Calculator */


#endif /* Calculator_1695588693_h */
