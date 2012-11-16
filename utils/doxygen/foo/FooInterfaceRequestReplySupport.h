
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FooInterfaceRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FooInterfaceRequestReplySupport_998276712_h
#define FooInterfaceRequestReplySupport_998276712_h

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

DDS_TYPESUPPORT_CPP(FooInterface_FooProcedureRequestTypeSupport, FooInterface_FooProcedureRequest);

DDS_DATAWRITER_CPP(FooInterface_FooProcedureRequestDataWriter, FooInterface_FooProcedureRequest);
DDS_DATAREADER_CPP(FooInterface_FooProcedureRequestDataReader, FooInterface_FooProcedureRequestSeq, FooInterface_FooProcedureRequest);


#else

DDS_TYPESUPPORT_C(FooInterface_FooProcedureRequestTypeSupport, FooInterface_FooProcedureRequest);
DDS_DATAWRITER_C(FooInterface_FooProcedureRequestDataWriter, FooInterface_FooProcedureRequest);
DDS_DATAREADER_C(FooInterface_FooProcedureRequestDataReader, FooInterface_FooProcedureRequestSeq, FooInterface_FooProcedureRequest);

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

DDS_TYPESUPPORT_CPP(FooInterface_FooProcedureReplyTypeSupport, FooInterface_FooProcedureReply);

DDS_DATAWRITER_CPP(FooInterface_FooProcedureReplyDataWriter, FooInterface_FooProcedureReply);
DDS_DATAREADER_CPP(FooInterface_FooProcedureReplyDataReader, FooInterface_FooProcedureReplySeq, FooInterface_FooProcedureReply);


#else

DDS_TYPESUPPORT_C(FooInterface_FooProcedureReplyTypeSupport, FooInterface_FooProcedureReply);
DDS_DATAWRITER_C(FooInterface_FooProcedureReplyDataWriter, FooInterface_FooProcedureReply);
DDS_DATAREADER_C(FooInterface_FooProcedureReplyDataReader, FooInterface_FooProcedureReplySeq, FooInterface_FooProcedureReply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* FooInterfaceRequestReplySupport_998276712_h */
