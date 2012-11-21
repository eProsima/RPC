
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from UnionTestRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#include "UnionTestRequestReplySupport.h"
#include "UnionTestRequestReplyPlugin.h"



#ifdef __cplusplus  
    #ifndef dds_c_log_impl_h              
         #include "dds_c/dds_c_log_impl.h"                                
    #endif        
#endif        




/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'UnionTest_getEmpleadoRequest' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   UnionTest_getEmpleadoRequestTYPENAME

/* Defines */
#define TDataWriter UnionTest_getEmpleadoRequestDataWriter
#define TData       UnionTest_getEmpleadoRequest


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   UnionTest_getEmpleadoRequestTYPENAME

/* Defines */
#define TDataReader UnionTest_getEmpleadoRequestDataReader
#define TDataSeq    UnionTest_getEmpleadoRequestSeq
#define TData       UnionTest_getEmpleadoRequest


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    UnionTest_getEmpleadoRequestTYPENAME
#define TPlugin_new  UnionTest_getEmpleadoRequestPlugin_new
#define TPlugin_delete  UnionTest_getEmpleadoRequestPlugin_delete

/* Defines */
#define TTypeSupport UnionTest_getEmpleadoRequestTypeSupport
#define TData        UnionTest_getEmpleadoRequest
#define TDataReader  UnionTest_getEmpleadoRequestDataReader
#define TDataWriter  UnionTest_getEmpleadoRequestDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'UnionTest_getEmpleadoReply' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   UnionTest_getEmpleadoReplyTYPENAME

/* Defines */
#define TDataWriter UnionTest_getEmpleadoReplyDataWriter
#define TData       UnionTest_getEmpleadoReply


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   UnionTest_getEmpleadoReplyTYPENAME

/* Defines */
#define TDataReader UnionTest_getEmpleadoReplyDataReader
#define TDataSeq    UnionTest_getEmpleadoReplySeq
#define TData       UnionTest_getEmpleadoReply


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    UnionTest_getEmpleadoReplyTYPENAME
#define TPlugin_new  UnionTest_getEmpleadoReplyPlugin_new
#define TPlugin_delete  UnionTest_getEmpleadoReplyPlugin_delete

/* Defines */
#define TTypeSupport UnionTest_getEmpleadoReplyTypeSupport
#define TData        UnionTest_getEmpleadoReply
#define TDataReader  UnionTest_getEmpleadoReplyDataReader
#define TDataWriter  UnionTest_getEmpleadoReplyDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete


