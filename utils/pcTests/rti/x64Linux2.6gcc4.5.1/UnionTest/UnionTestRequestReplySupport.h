
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from UnionTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef UnionTestRequestReplySupport_1136051261_h
#define UnionTestRequestReplySupport_1136051261_h

/* Uses */
#include "UnionTestRequestReply.h"



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

DDS_TYPESUPPORT_CPP(getEmpleadoRequestTypeSupport, getEmpleadoRequest);

DDS_DATAWRITER_CPP(getEmpleadoRequestDataWriter, getEmpleadoRequest);
DDS_DATAREADER_CPP(getEmpleadoRequestDataReader, getEmpleadoRequestSeq, getEmpleadoRequest);


#else

DDS_TYPESUPPORT_C(getEmpleadoRequestTypeSupport, getEmpleadoRequest);
DDS_DATAWRITER_C(getEmpleadoRequestDataWriter, getEmpleadoRequest);
DDS_DATAREADER_C(getEmpleadoRequestDataReader, getEmpleadoRequestSeq, getEmpleadoRequest);

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

DDS_TYPESUPPORT_CPP(getEmpleadoReplyTypeSupport, getEmpleadoReply);

DDS_DATAWRITER_CPP(getEmpleadoReplyDataWriter, getEmpleadoReply);
DDS_DATAREADER_CPP(getEmpleadoReplyDataReader, getEmpleadoReplySeq, getEmpleadoReply);


#else

DDS_TYPESUPPORT_C(getEmpleadoReplyTypeSupport, getEmpleadoReply);
DDS_DATAWRITER_C(getEmpleadoReplyDataWriter, getEmpleadoReply);
DDS_DATAREADER_C(getEmpleadoReplyDataReader, getEmpleadoReplySeq, getEmpleadoReply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* UnionTestRequestReplySupport_1136051261_h */
