
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from LatencyRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef LatencyRequestReplySupport_13938624_h
#define LatencyRequestReplySupport_13938624_h

/* Uses */
#include "LatencyRequestReply.h"



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

DDS_TYPESUPPORT_CPP(Latency_RequestTypeSupport, Latency_Request);

DDS_DATAWRITER_CPP(Latency_RequestDataWriter, Latency_Request);
DDS_DATAREADER_CPP(Latency_RequestDataReader, Latency_RequestSeq, Latency_Request);


#else

DDS_TYPESUPPORT_C(Latency_RequestTypeSupport, Latency_Request);
DDS_DATAWRITER_C(Latency_RequestDataWriter, Latency_Request);
DDS_DATAREADER_C(Latency_RequestDataReader, Latency_RequestSeq, Latency_Request);

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

DDS_TYPESUPPORT_CPP(Latency_ReplyTypeSupport, Latency_Reply);

DDS_DATAWRITER_CPP(Latency_ReplyDataWriter, Latency_Reply);
DDS_DATAREADER_CPP(Latency_ReplyDataReader, Latency_ReplySeq, Latency_Reply);


#else

DDS_TYPESUPPORT_C(Latency_ReplyTypeSupport, Latency_Reply);
DDS_DATAWRITER_C(Latency_ReplyDataWriter, Latency_Reply);
DDS_DATAREADER_C(Latency_ReplyDataReader, Latency_ReplySeq, Latency_Reply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* LatencyRequestReplySupport_13938624_h */
