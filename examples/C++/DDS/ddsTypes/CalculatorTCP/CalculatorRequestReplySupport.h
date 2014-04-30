
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CalculatorRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CalculatorRequestReplySupport_540431605_h
#define CalculatorRequestReplySupport_540431605_h

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
  class __declspec(dllimport) ::DDSTypeSupport;
  class __declspec(dllimport) ::DDSDataWriter;
  class __declspec(dllimport) ::DDSDataReader;
#endif

#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(CalculatorRequestTypeSupport, CalculatorRequest);

DDS_DATAWRITER_CPP(CalculatorRequestDataWriter, CalculatorRequest);
DDS_DATAREADER_CPP(CalculatorRequestDataReader, CalculatorRequestSeq, CalculatorRequest);


#else

DDS_TYPESUPPORT_C(CalculatorRequestTypeSupport, CalculatorRequest);
DDS_DATAWRITER_C(CalculatorRequestDataWriter, CalculatorRequest);
DDS_DATAREADER_C(CalculatorRequestDataReader, CalculatorRequestSeq, CalculatorRequest);

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
  class __declspec(dllimport) ::DDSTypeSupport;
  class __declspec(dllimport) ::DDSDataWriter;
  class __declspec(dllimport) ::DDSDataReader;
#endif

#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(CalculatorReplyTypeSupport, CalculatorReply);

DDS_DATAWRITER_CPP(CalculatorReplyDataWriter, CalculatorReply);
DDS_DATAREADER_CPP(CalculatorReplyDataReader, CalculatorReplySeq, CalculatorReply);


#else

DDS_TYPESUPPORT_C(CalculatorReplyTypeSupport, CalculatorReply);
DDS_DATAWRITER_C(CalculatorReplyDataWriter, CalculatorReply);
DDS_DATAREADER_C(CalculatorReplyDataReader, CalculatorReplySeq, CalculatorReply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* CalculatorRequestReplySupport_540431605_h */
