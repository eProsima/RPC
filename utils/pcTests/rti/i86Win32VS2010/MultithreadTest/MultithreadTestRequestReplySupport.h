
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MultithreadTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MultithreadTestRequestReplySupport_135729755_h
#define MultithreadTestRequestReplySupport_135729755_h

/* Uses */
#include "MultithreadTestRequestReply.h"



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

DDS_TYPESUPPORT_CPP(MultithreadTest_testRequestTypeSupport, MultithreadTest_testRequest);

DDS_DATAWRITER_CPP(MultithreadTest_testRequestDataWriter, MultithreadTest_testRequest);
DDS_DATAREADER_CPP(MultithreadTest_testRequestDataReader, MultithreadTest_testRequestSeq, MultithreadTest_testRequest);


#else

DDS_TYPESUPPORT_C(MultithreadTest_testRequestTypeSupport, MultithreadTest_testRequest);
DDS_DATAWRITER_C(MultithreadTest_testRequestDataWriter, MultithreadTest_testRequest);
DDS_DATAREADER_C(MultithreadTest_testRequestDataReader, MultithreadTest_testRequestSeq, MultithreadTest_testRequest);

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

DDS_TYPESUPPORT_CPP(MultithreadTest_testReplyTypeSupport, MultithreadTest_testReply);

DDS_DATAWRITER_CPP(MultithreadTest_testReplyDataWriter, MultithreadTest_testReply);
DDS_DATAREADER_CPP(MultithreadTest_testReplyDataReader, MultithreadTest_testReplySeq, MultithreadTest_testReply);


#else

DDS_TYPESUPPORT_C(MultithreadTest_testReplyTypeSupport, MultithreadTest_testReply);
DDS_DATAWRITER_C(MultithreadTest_testReplyDataWriter, MultithreadTest_testReply);
DDS_DATAREADER_C(MultithreadTest_testReplyDataReader, MultithreadTest_testReplySeq, MultithreadTest_testReply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* MultithreadTestRequestReplySupport_135729755_h */
