
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from function1TemplateReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
*/

#ifndef function1TemplateReplySupport_h
#define function1TemplateReplySupport_h

/* Uses */
#ifndef function1TemplateReply_h
#include "function1TemplateReply.h"
#endif



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


DDS_TYPESUPPORT_CPP(function1TemplateReplyTypeSupport, function1TemplateReply);

DDS_DATAWRITER_CPP(function1TemplateReplyDataWriter, function1TemplateReply);
DDS_DATAREADER_CPP(function1TemplateReplyDataReader, function1TemplateReplySeq, function1TemplateReply);


#else

DDS_TYPESUPPORT_C(function1TemplateReplyTypeSupport, function1TemplateReply);
DDS_DATAWRITER_C(function1TemplateReplyDataWriter, function1TemplateReply);
DDS_DATAREADER_C(function1TemplateReplyDataReader, function1TemplateReplySeq, function1TemplateReply);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* function1TemplateReplySupport_h */
