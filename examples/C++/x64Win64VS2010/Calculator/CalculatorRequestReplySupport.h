
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CalculatorRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CalculatorRequestReplySupport_540430929_h
#define CalculatorRequestReplySupport_540430929_h

/* Uses */
#include "CalculatorRequestReply.h"



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

DDS_TYPESUPPORT_CPP(Calculator_additionRequestTypeSupport, Calculator_additionRequest);

DDS_DATAWRITER_CPP(Calculator_additionRequestDataWriter, Calculator_additionRequest);
DDS_DATAREADER_CPP(Calculator_additionRequestDataReader, Calculator_additionRequestSeq, Calculator_additionRequest);


#else

DDS_TYPESUPPORT_C(Calculator_additionRequestTypeSupport, Calculator_additionRequest);
DDS_DATAWRITER_C(Calculator_additionRequestDataWriter, Calculator_additionRequest);
DDS_DATAREADER_C(Calculator_additionRequestDataReader, Calculator_additionRequestSeq, Calculator_additionRequest);

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

DDS_TYPESUPPORT_CPP(Calculator_additionReplyTypeSupport, Calculator_additionReply);

DDS_DATAWRITER_CPP(Calculator_additionReplyDataWriter, Calculator_additionReply);
DDS_DATAREADER_CPP(Calculator_additionReplyDataReader, Calculator_additionReplySeq, Calculator_additionReply);


#else

DDS_TYPESUPPORT_C(Calculator_additionReplyTypeSupport, Calculator_additionReply);
DDS_DATAWRITER_C(Calculator_additionReplyDataWriter, Calculator_additionReply);
DDS_DATAREADER_C(Calculator_additionReplyDataReader, Calculator_additionReplySeq, Calculator_additionReply);

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

DDS_TYPESUPPORT_CPP(Calculator_subtractionRequestTypeSupport, Calculator_subtractionRequest);

DDS_DATAWRITER_CPP(Calculator_subtractionRequestDataWriter, Calculator_subtractionRequest);
DDS_DATAREADER_CPP(Calculator_subtractionRequestDataReader, Calculator_subtractionRequestSeq, Calculator_subtractionRequest);


#else

DDS_TYPESUPPORT_C(Calculator_subtractionRequestTypeSupport, Calculator_subtractionRequest);
DDS_DATAWRITER_C(Calculator_subtractionRequestDataWriter, Calculator_subtractionRequest);
DDS_DATAREADER_C(Calculator_subtractionRequestDataReader, Calculator_subtractionRequestSeq, Calculator_subtractionRequest);

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

DDS_TYPESUPPORT_CPP(Calculator_subtractionReplyTypeSupport, Calculator_subtractionReply);

DDS_DATAWRITER_CPP(Calculator_subtractionReplyDataWriter, Calculator_subtractionReply);
DDS_DATAREADER_CPP(Calculator_subtractionReplyDataReader, Calculator_subtractionReplySeq, Calculator_subtractionReply);


#else

DDS_TYPESUPPORT_C(Calculator_subtractionReplyTypeSupport, Calculator_subtractionReply);
DDS_DATAWRITER_C(Calculator_subtractionReplyDataWriter, Calculator_subtractionReply);
DDS_DATAREADER_C(Calculator_subtractionReplyDataReader, Calculator_subtractionReplySeq, Calculator_subtractionReply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* CalculatorRequestReplySupport_540430929_h */
