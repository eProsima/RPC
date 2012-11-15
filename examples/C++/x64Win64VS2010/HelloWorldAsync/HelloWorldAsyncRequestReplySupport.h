
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HelloWorldAsyncRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef HelloWorldAsyncRequestReplySupport_1955698971_h
#define HelloWorldAsyncRequestReplySupport_1955698971_h

/* Uses */
#include "HelloWorldAsyncRequestReply.h"



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

DDS_TYPESUPPORT_CPP(HelloWorldAsync_sayHelloRequestTypeSupport, HelloWorldAsync_sayHelloRequest);

DDS_DATAWRITER_CPP(HelloWorldAsync_sayHelloRequestDataWriter, HelloWorldAsync_sayHelloRequest);
DDS_DATAREADER_CPP(HelloWorldAsync_sayHelloRequestDataReader, HelloWorldAsync_sayHelloRequestSeq, HelloWorldAsync_sayHelloRequest);


#else

DDS_TYPESUPPORT_C(HelloWorldAsync_sayHelloRequestTypeSupport, HelloWorldAsync_sayHelloRequest);
DDS_DATAWRITER_C(HelloWorldAsync_sayHelloRequestDataWriter, HelloWorldAsync_sayHelloRequest);
DDS_DATAREADER_C(HelloWorldAsync_sayHelloRequestDataReader, HelloWorldAsync_sayHelloRequestSeq, HelloWorldAsync_sayHelloRequest);

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

DDS_TYPESUPPORT_CPP(HelloWorldAsync_sayHelloReplyTypeSupport, HelloWorldAsync_sayHelloReply);

DDS_DATAWRITER_CPP(HelloWorldAsync_sayHelloReplyDataWriter, HelloWorldAsync_sayHelloReply);
DDS_DATAREADER_CPP(HelloWorldAsync_sayHelloReplyDataReader, HelloWorldAsync_sayHelloReplySeq, HelloWorldAsync_sayHelloReply);


#else

DDS_TYPESUPPORT_C(HelloWorldAsync_sayHelloReplyTypeSupport, HelloWorldAsync_sayHelloReply);
DDS_DATAWRITER_C(HelloWorldAsync_sayHelloReplyDataWriter, HelloWorldAsync_sayHelloReply);
DDS_DATAREADER_C(HelloWorldAsync_sayHelloReplyDataReader, HelloWorldAsync_sayHelloReplySeq, HelloWorldAsync_sayHelloReply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* HelloWorldAsyncRequestReplySupport_1955698971_h */
