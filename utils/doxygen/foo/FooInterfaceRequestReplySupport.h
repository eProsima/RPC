
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FooInterfaceRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FooInterfaceRequestReplySupport_998276846_h
#define FooInterfaceRequestReplySupport_998276846_h

/* Uses */
#include "FooInterfaceRequestReply.h"



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

DDS_TYPESUPPORT_CPP(foo_procedureRequestTypeSupport, foo_procedureRequest);

DDS_DATAWRITER_CPP(foo_procedureRequestDataWriter, foo_procedureRequest);
DDS_DATAREADER_CPP(foo_procedureRequestDataReader, foo_procedureRequestSeq, foo_procedureRequest);


#else

DDS_TYPESUPPORT_C(foo_procedureRequestTypeSupport, foo_procedureRequest);
DDS_DATAWRITER_C(foo_procedureRequestDataWriter, foo_procedureRequest);
DDS_DATAREADER_C(foo_procedureRequestDataReader, foo_procedureRequestSeq, foo_procedureRequest);

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

DDS_TYPESUPPORT_CPP(foo_procedureReplyTypeSupport, foo_procedureReply);

DDS_DATAWRITER_CPP(foo_procedureReplyDataWriter, foo_procedureReply);
DDS_DATAREADER_CPP(foo_procedureReplyDataReader, foo_procedureReplySeq, foo_procedureReply);


#else

DDS_TYPESUPPORT_C(foo_procedureReplyTypeSupport, foo_procedureReply);
DDS_DATAWRITER_C(foo_procedureReplyDataWriter, foo_procedureReply);
DDS_DATAREADER_C(foo_procedureReplyDataReader, foo_procedureReplySeq, foo_procedureReply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* FooInterfaceRequestReplySupport_998276846_h */
