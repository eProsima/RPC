
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from CalculatorRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef CalculatorRequestReplySupport_540432743_h
#define CalculatorRequestReplySupport_540432743_h

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
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(Calculator_RequestTypeSupport, Calculator_Request);

DDS_DATAWRITER_CPP(Calculator_RequestDataWriter, Calculator_Request);
DDS_DATAREADER_CPP(Calculator_RequestDataReader, Calculator_RequestSeq, Calculator_Request);


#else

DDS_TYPESUPPORT_C(Calculator_RequestTypeSupport, Calculator_Request);
DDS_DATAWRITER_C(Calculator_RequestDataWriter, Calculator_Request);
DDS_DATAREADER_C(Calculator_RequestDataReader, Calculator_RequestSeq, Calculator_Request);

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
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(Calculator_ReplyTypeSupport, Calculator_Reply);

DDS_DATAWRITER_CPP(Calculator_ReplyDataWriter, Calculator_Reply);
DDS_DATAREADER_CPP(Calculator_ReplyDataReader, Calculator_ReplySeq, Calculator_Reply);


#else

DDS_TYPESUPPORT_C(Calculator_ReplyTypeSupport, Calculator_Reply);
DDS_DATAWRITER_C(Calculator_ReplyDataWriter, Calculator_Reply);
DDS_DATAREADER_C(Calculator_ReplyDataReader, Calculator_ReplySeq, Calculator_Reply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* CalculatorRequestReplySupport_540432743_h */
