
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RateGenRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
*/

#ifndef RateGenRequestReplySupport_h
#define RateGenRequestReplySupport_h

/* Uses */
#ifndef RateGenRequestReply_h
#include "RateGenRequestReply.h"
#endif



#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)

#ifdef __cplusplus
  /* If we're building on Windows, explicitly import the superclasses of
   * the types declared below.
   */        
  class __declspec(dllimport) DDSTypeSupport;
  class __declspec(dllimport) DDSDataWriter;
  class __declspec(dllimport) DDSDataReader;
#endif

#endif

#ifdef __cplusplus


DDS_TYPESUPPORT_CPP(subscribe_PulseRequestTypeSupport, subscribe_PulseRequest);

DDS_DATAWRITER_CPP(subscribe_PulseRequestDataWriter, subscribe_PulseRequest);
DDS_DATAREADER_CPP(subscribe_PulseRequestDataReader, subscribe_PulseRequestSeq, subscribe_PulseRequest);


#else

DDS_TYPESUPPORT_C(subscribe_PulseRequestTypeSupport, subscribe_PulseRequest);
DDS_DATAWRITER_C(subscribe_PulseRequestDataWriter, subscribe_PulseRequest);
DDS_DATAREADER_C(subscribe_PulseRequestDataReader, subscribe_PulseRequestSeq, subscribe_PulseRequest);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)

#ifdef __cplusplus
  /* If we're building on Windows, explicitly import the superclasses of
   * the types declared below.
   */        
  class __declspec(dllimport) DDSTypeSupport;
  class __declspec(dllimport) DDSDataWriter;
  class __declspec(dllimport) DDSDataReader;
#endif

#endif

#ifdef __cplusplus


DDS_TYPESUPPORT_CPP(subscribe_PulseReplyTypeSupport, subscribe_PulseReply);

DDS_DATAWRITER_CPP(subscribe_PulseReplyDataWriter, subscribe_PulseReply);
DDS_DATAREADER_CPP(subscribe_PulseReplyDataReader, subscribe_PulseReplySeq, subscribe_PulseReply);


#else

DDS_TYPESUPPORT_C(subscribe_PulseReplyTypeSupport, subscribe_PulseReply);
DDS_DATAWRITER_C(subscribe_PulseReplyDataWriter, subscribe_PulseReply);
DDS_DATAREADER_C(subscribe_PulseReplyDataReader, subscribe_PulseReplySeq, subscribe_PulseReply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)

#ifdef __cplusplus
  /* If we're building on Windows, explicitly import the superclasses of
   * the types declared below.
   */        
  class __declspec(dllimport) DDSTypeSupport;
  class __declspec(dllimport) DDSDataWriter;
  class __declspec(dllimport) DDSDataReader;
#endif

#endif

#ifdef __cplusplus


DDS_TYPESUPPORT_CPP(unsubscribe_PulseRequestTypeSupport, unsubscribe_PulseRequest);

DDS_DATAWRITER_CPP(unsubscribe_PulseRequestDataWriter, unsubscribe_PulseRequest);
DDS_DATAREADER_CPP(unsubscribe_PulseRequestDataReader, unsubscribe_PulseRequestSeq, unsubscribe_PulseRequest);


#else

DDS_TYPESUPPORT_C(unsubscribe_PulseRequestTypeSupport, unsubscribe_PulseRequest);
DDS_DATAWRITER_C(unsubscribe_PulseRequestDataWriter, unsubscribe_PulseRequest);
DDS_DATAREADER_C(unsubscribe_PulseRequestDataReader, unsubscribe_PulseRequestSeq, unsubscribe_PulseRequest);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)

#ifdef __cplusplus
  /* If we're building on Windows, explicitly import the superclasses of
   * the types declared below.
   */        
  class __declspec(dllimport) DDSTypeSupport;
  class __declspec(dllimport) DDSDataWriter;
  class __declspec(dllimport) DDSDataReader;
#endif

#endif

#ifdef __cplusplus


DDS_TYPESUPPORT_CPP(unsubscribe_PulseReplyTypeSupport, unsubscribe_PulseReply);

DDS_DATAWRITER_CPP(unsubscribe_PulseReplyDataWriter, unsubscribe_PulseReply);
DDS_DATAREADER_CPP(unsubscribe_PulseReplyDataReader, unsubscribe_PulseReplySeq, unsubscribe_PulseReply);


#else

DDS_TYPESUPPORT_C(unsubscribe_PulseReplyTypeSupport, unsubscribe_PulseReply);
DDS_DATAWRITER_C(unsubscribe_PulseReplyDataWriter, unsubscribe_PulseReply);
DDS_DATAREADER_C(unsubscribe_PulseReplyDataReader, unsubscribe_PulseReplySeq, unsubscribe_PulseReply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)

#ifdef __cplusplus
  /* If we're building on Windows, explicitly import the superclasses of
   * the types declared below.
   */        
  class __declspec(dllimport) DDSTypeSupport;
  class __declspec(dllimport) DDSDataWriter;
  class __declspec(dllimport) DDSDataReader;
#endif

#endif

#ifdef __cplusplus


DDS_TYPESUPPORT_CPP(noReturnFunctionRequestTypeSupport, noReturnFunctionRequest);

DDS_DATAWRITER_CPP(noReturnFunctionRequestDataWriter, noReturnFunctionRequest);
DDS_DATAREADER_CPP(noReturnFunctionRequestDataReader, noReturnFunctionRequestSeq, noReturnFunctionRequest);


#else

DDS_TYPESUPPORT_C(noReturnFunctionRequestTypeSupport, noReturnFunctionRequest);
DDS_DATAWRITER_C(noReturnFunctionRequestDataWriter, noReturnFunctionRequest);
DDS_DATAREADER_C(noReturnFunctionRequestDataReader, noReturnFunctionRequestSeq, noReturnFunctionRequest);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)

#ifdef __cplusplus
  /* If we're building on Windows, explicitly import the superclasses of
   * the types declared below.
   */        
  class __declspec(dllimport) DDSTypeSupport;
  class __declspec(dllimport) DDSDataWriter;
  class __declspec(dllimport) DDSDataReader;
#endif

#endif

#ifdef __cplusplus


DDS_TYPESUPPORT_CPP(noReturnFunctionReplyTypeSupport, noReturnFunctionReply);

DDS_DATAWRITER_CPP(noReturnFunctionReplyDataWriter, noReturnFunctionReply);
DDS_DATAREADER_CPP(noReturnFunctionReplyDataReader, noReturnFunctionReplySeq, noReturnFunctionReply);


#else

DDS_TYPESUPPORT_C(noReturnFunctionReplyTypeSupport, noReturnFunctionReply);
DDS_DATAWRITER_C(noReturnFunctionReplyDataWriter, noReturnFunctionReply);
DDS_DATAREADER_C(noReturnFunctionReplyDataReader, noReturnFunctionReplySeq, noReturnFunctionReply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* RateGenRequestReplySupport_h */
