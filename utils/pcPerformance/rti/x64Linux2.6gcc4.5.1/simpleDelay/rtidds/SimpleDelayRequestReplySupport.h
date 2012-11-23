
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SimpleDelayRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SimpleDelayRequestReplySupport_1090934891_h
#define SimpleDelayRequestReplySupport_1090934891_h

/* Uses */
#include "SimpleDelayRequestReply.h"



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

DDS_TYPESUPPORT_CPP(SimpleDelay_sumaRequestTypeSupport, SimpleDelay_sumaRequest);

DDS_DATAWRITER_CPP(SimpleDelay_sumaRequestDataWriter, SimpleDelay_sumaRequest);
DDS_DATAREADER_CPP(SimpleDelay_sumaRequestDataReader, SimpleDelay_sumaRequestSeq, SimpleDelay_sumaRequest);


#else

DDS_TYPESUPPORT_C(SimpleDelay_sumaRequestTypeSupport, SimpleDelay_sumaRequest);
DDS_DATAWRITER_C(SimpleDelay_sumaRequestDataWriter, SimpleDelay_sumaRequest);
DDS_DATAREADER_C(SimpleDelay_sumaRequestDataReader, SimpleDelay_sumaRequestSeq, SimpleDelay_sumaRequest);

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

DDS_TYPESUPPORT_CPP(SimpleDelay_sumaReplyTypeSupport, SimpleDelay_sumaReply);

DDS_DATAWRITER_CPP(SimpleDelay_sumaReplyDataWriter, SimpleDelay_sumaReply);
DDS_DATAREADER_CPP(SimpleDelay_sumaReplyDataReader, SimpleDelay_sumaReplySeq, SimpleDelay_sumaReply);


#else

DDS_TYPESUPPORT_C(SimpleDelay_sumaReplyTypeSupport, SimpleDelay_sumaReply);
DDS_DATAWRITER_C(SimpleDelay_sumaReplyDataWriter, SimpleDelay_sumaReply);
DDS_DATAREADER_C(SimpleDelay_sumaReplyDataReader, SimpleDelay_sumaReplySeq, SimpleDelay_sumaReply);

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

DDS_TYPESUPPORT_CPP(SimpleDelay_duplicateRequestTypeSupport, SimpleDelay_duplicateRequest);

DDS_DATAWRITER_CPP(SimpleDelay_duplicateRequestDataWriter, SimpleDelay_duplicateRequest);
DDS_DATAREADER_CPP(SimpleDelay_duplicateRequestDataReader, SimpleDelay_duplicateRequestSeq, SimpleDelay_duplicateRequest);


#else

DDS_TYPESUPPORT_C(SimpleDelay_duplicateRequestTypeSupport, SimpleDelay_duplicateRequest);
DDS_DATAWRITER_C(SimpleDelay_duplicateRequestDataWriter, SimpleDelay_duplicateRequest);
DDS_DATAREADER_C(SimpleDelay_duplicateRequestDataReader, SimpleDelay_duplicateRequestSeq, SimpleDelay_duplicateRequest);

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

DDS_TYPESUPPORT_CPP(SimpleDelay_duplicateReplyTypeSupport, SimpleDelay_duplicateReply);

DDS_DATAWRITER_CPP(SimpleDelay_duplicateReplyDataWriter, SimpleDelay_duplicateReply);
DDS_DATAREADER_CPP(SimpleDelay_duplicateReplyDataReader, SimpleDelay_duplicateReplySeq, SimpleDelay_duplicateReply);


#else

DDS_TYPESUPPORT_C(SimpleDelay_duplicateReplyTypeSupport, SimpleDelay_duplicateReply);
DDS_DATAWRITER_C(SimpleDelay_duplicateReplyDataWriter, SimpleDelay_duplicateReply);
DDS_DATAREADER_C(SimpleDelay_duplicateReplyDataReader, SimpleDelay_duplicateReplySeq, SimpleDelay_duplicateReply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* SimpleDelayRequestReplySupport_1090934891_h */
