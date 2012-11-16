
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from UnionTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef UnionTestRequestReplySupport_1136051306_h
#define UnionTestRequestReplySupport_1136051306_h

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

DDS_TYPESUPPORT_CPP(UnionTest_getEmpleadoRequestTypeSupport, UnionTest_getEmpleadoRequest);

DDS_DATAWRITER_CPP(UnionTest_getEmpleadoRequestDataWriter, UnionTest_getEmpleadoRequest);
DDS_DATAREADER_CPP(UnionTest_getEmpleadoRequestDataReader, UnionTest_getEmpleadoRequestSeq, UnionTest_getEmpleadoRequest);


#else

DDS_TYPESUPPORT_C(UnionTest_getEmpleadoRequestTypeSupport, UnionTest_getEmpleadoRequest);
DDS_DATAWRITER_C(UnionTest_getEmpleadoRequestDataWriter, UnionTest_getEmpleadoRequest);
DDS_DATAREADER_C(UnionTest_getEmpleadoRequestDataReader, UnionTest_getEmpleadoRequestSeq, UnionTest_getEmpleadoRequest);

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

DDS_TYPESUPPORT_CPP(UnionTest_getEmpleadoReplyTypeSupport, UnionTest_getEmpleadoReply);

DDS_DATAWRITER_CPP(UnionTest_getEmpleadoReplyDataWriter, UnionTest_getEmpleadoReply);
DDS_DATAREADER_CPP(UnionTest_getEmpleadoReplyDataReader, UnionTest_getEmpleadoReplySeq, UnionTest_getEmpleadoReply);


#else

DDS_TYPESUPPORT_C(UnionTest_getEmpleadoReplyTypeSupport, UnionTest_getEmpleadoReply);
DDS_DATAWRITER_C(UnionTest_getEmpleadoReplyDataWriter, UnionTest_getEmpleadoReply);
DDS_DATAREADER_C(UnionTest_getEmpleadoReplyDataReader, UnionTest_getEmpleadoReplySeq, UnionTest_getEmpleadoReply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* UnionTestRequestReplySupport_1136051306_h */
