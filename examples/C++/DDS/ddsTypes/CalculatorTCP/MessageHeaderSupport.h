
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from MessageHeader.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef MessageHeaderSupport_953113280_h
#define MessageHeaderSupport_953113280_h

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


namespace dds{
        

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

DDS_TYPESUPPORT_CPP(EntityId_tTypeSupport, EntityId_t);

DDS_DATAWRITER_CPP(EntityId_tDataWriter, EntityId_t);
DDS_DATAREADER_CPP(EntityId_tDataReader, EntityId_tSeq, EntityId_t);


#else

DDS_TYPESUPPORT_C(EntityId_tTypeSupport, EntityId_t);
DDS_DATAWRITER_C(EntityId_tDataWriter, EntityId_t);
DDS_DATAREADER_C(EntityId_tDataReader, EntityId_tSeq, EntityId_t);

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

DDS_TYPESUPPORT_CPP(GUID_tTypeSupport, GUID_t);

DDS_DATAWRITER_CPP(GUID_tDataWriter, GUID_t);
DDS_DATAREADER_CPP(GUID_tDataReader, GUID_tSeq, GUID_t);


#else

DDS_TYPESUPPORT_C(GUID_tTypeSupport, GUID_t);
DDS_DATAWRITER_C(GUID_tDataWriter, GUID_t);
DDS_DATAREADER_C(GUID_tDataReader, GUID_tSeq, GUID_t);

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

DDS_TYPESUPPORT_CPP(SequenceNumber_tTypeSupport, SequenceNumber_t);

DDS_DATAWRITER_CPP(SequenceNumber_tDataWriter, SequenceNumber_t);
DDS_DATAREADER_CPP(SequenceNumber_tDataReader, SequenceNumber_tSeq, SequenceNumber_t);


#else

DDS_TYPESUPPORT_C(SequenceNumber_tTypeSupport, SequenceNumber_t);
DDS_DATAWRITER_C(SequenceNumber_tDataWriter, SequenceNumber_t);
DDS_DATAREADER_C(SequenceNumber_tDataReader, SequenceNumber_tSeq, SequenceNumber_t);

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

DDS_TYPESUPPORT_CPP(SampleIdentityTypeSupport, SampleIdentity);

DDS_DATAWRITER_CPP(SampleIdentityDataWriter, SampleIdentity);
DDS_DATAREADER_CPP(SampleIdentityDataReader, SampleIdentitySeq, SampleIdentity);


#else

DDS_TYPESUPPORT_C(SampleIdentityTypeSupport, SampleIdentity);
DDS_DATAWRITER_C(SampleIdentityDataWriter, SampleIdentity);
DDS_DATAREADER_C(SampleIdentityDataReader, SampleIdentitySeq, SampleIdentity);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


namespace rpc{

} /* namespace rpc */

} /* namespace dds */


#endif  /* MessageHeaderSupport_953113280_h */
