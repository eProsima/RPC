
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MessageHeader.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MessageHeaderSupport_953112849_h
#define MessageHeaderSupport_953112849_h

/* Uses */
#include "MessageHeader.h"



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

DDS_TYPESUPPORT_CPP(SampleIdentity_tTypeSupport, SampleIdentity_t);

DDS_DATAWRITER_CPP(SampleIdentity_tDataWriter, SampleIdentity_t);
DDS_DATAREADER_CPP(SampleIdentity_tDataReader, SampleIdentity_tSeq, SampleIdentity_t);


#else

DDS_TYPESUPPORT_C(SampleIdentity_tTypeSupport, SampleIdentity_t);
DDS_DATAWRITER_C(SampleIdentity_tDataWriter, SampleIdentity_t);
DDS_DATAREADER_C(SampleIdentity_tDataReader, SampleIdentity_tSeq, SampleIdentity_t);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif  /* MessageHeaderSupport_953112849_h */
