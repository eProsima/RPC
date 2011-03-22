
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RateGenRequestReply.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
*/

#ifndef RateGenRequestReplySupport_h
#include "RateGenRequestReplySupport.h"
#endif

#ifndef RateGenRequestReplyPlugin_h
#include "RateGenRequestReplyPlugin.h"
#endif



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

   Configure and implement 'subscribe_PulseRequest' support classes.

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
#define TTYPENAME   subscribe_PulseRequestTYPENAME

/* Defines */
#define TDataWriter subscribe_PulseRequestDataWriter
#define TData       subscribe_PulseRequest


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
#define TTYPENAME   subscribe_PulseRequestTYPENAME

/* Defines */
#define TDataReader subscribe_PulseRequestDataReader
#define TDataSeq    subscribe_PulseRequestSeq
#define TData       subscribe_PulseRequest


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
#define TTYPENAME    subscribe_PulseRequestTYPENAME
#define TPlugin_new  subscribe_PulseRequestPlugin_new
#define TPlugin_delete  subscribe_PulseRequestPlugin_delete

/* Defines */
#define TTypeSupport subscribe_PulseRequestTypeSupport
#define TData        subscribe_PulseRequest
#define TDataReader  subscribe_PulseRequestDataReader
#define TDataWriter  subscribe_PulseRequestDataWriter
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

   Configure and implement 'subscribe_PulseReply' support classes.

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
#define TTYPENAME   subscribe_PulseReplyTYPENAME

/* Defines */
#define TDataWriter subscribe_PulseReplyDataWriter
#define TData       subscribe_PulseReply


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
#define TTYPENAME   subscribe_PulseReplyTYPENAME

/* Defines */
#define TDataReader subscribe_PulseReplyDataReader
#define TDataSeq    subscribe_PulseReplySeq
#define TData       subscribe_PulseReply


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
#define TTYPENAME    subscribe_PulseReplyTYPENAME
#define TPlugin_new  subscribe_PulseReplyPlugin_new
#define TPlugin_delete  subscribe_PulseReplyPlugin_delete

/* Defines */
#define TTypeSupport subscribe_PulseReplyTypeSupport
#define TData        subscribe_PulseReply
#define TDataReader  subscribe_PulseReplyDataReader
#define TDataWriter  subscribe_PulseReplyDataWriter
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

   Configure and implement 'unsubscribe_PulseRequest' support classes.

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
#define TTYPENAME   unsubscribe_PulseRequestTYPENAME

/* Defines */
#define TDataWriter unsubscribe_PulseRequestDataWriter
#define TData       unsubscribe_PulseRequest


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
#define TTYPENAME   unsubscribe_PulseRequestTYPENAME

/* Defines */
#define TDataReader unsubscribe_PulseRequestDataReader
#define TDataSeq    unsubscribe_PulseRequestSeq
#define TData       unsubscribe_PulseRequest


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
#define TTYPENAME    unsubscribe_PulseRequestTYPENAME
#define TPlugin_new  unsubscribe_PulseRequestPlugin_new
#define TPlugin_delete  unsubscribe_PulseRequestPlugin_delete

/* Defines */
#define TTypeSupport unsubscribe_PulseRequestTypeSupport
#define TData        unsubscribe_PulseRequest
#define TDataReader  unsubscribe_PulseRequestDataReader
#define TDataWriter  unsubscribe_PulseRequestDataWriter
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

   Configure and implement 'unsubscribe_PulseReply' support classes.

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
#define TTYPENAME   unsubscribe_PulseReplyTYPENAME

/* Defines */
#define TDataWriter unsubscribe_PulseReplyDataWriter
#define TData       unsubscribe_PulseReply


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
#define TTYPENAME   unsubscribe_PulseReplyTYPENAME

/* Defines */
#define TDataReader unsubscribe_PulseReplyDataReader
#define TDataSeq    unsubscribe_PulseReplySeq
#define TData       unsubscribe_PulseReply


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
#define TTYPENAME    unsubscribe_PulseReplyTYPENAME
#define TPlugin_new  unsubscribe_PulseReplyPlugin_new
#define TPlugin_delete  unsubscribe_PulseReplyPlugin_delete

/* Defines */
#define TTypeSupport unsubscribe_PulseReplyTypeSupport
#define TData        unsubscribe_PulseReply
#define TDataReader  unsubscribe_PulseReplyDataReader
#define TDataWriter  unsubscribe_PulseReplyDataWriter
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

   Configure and implement 'noReturnFunctionRequest' support classes.

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
#define TTYPENAME   noReturnFunctionRequestTYPENAME

/* Defines */
#define TDataWriter noReturnFunctionRequestDataWriter
#define TData       noReturnFunctionRequest


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
#define TTYPENAME   noReturnFunctionRequestTYPENAME

/* Defines */
#define TDataReader noReturnFunctionRequestDataReader
#define TDataSeq    noReturnFunctionRequestSeq
#define TData       noReturnFunctionRequest


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
#define TTYPENAME    noReturnFunctionRequestTYPENAME
#define TPlugin_new  noReturnFunctionRequestPlugin_new
#define TPlugin_delete  noReturnFunctionRequestPlugin_delete

/* Defines */
#define TTypeSupport noReturnFunctionRequestTypeSupport
#define TData        noReturnFunctionRequest
#define TDataReader  noReturnFunctionRequestDataReader
#define TDataWriter  noReturnFunctionRequestDataWriter
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

   Configure and implement 'noReturnFunctionReply' support classes.

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
#define TTYPENAME   noReturnFunctionReplyTYPENAME

/* Defines */
#define TDataWriter noReturnFunctionReplyDataWriter
#define TData       noReturnFunctionReply


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
#define TTYPENAME   noReturnFunctionReplyTYPENAME

/* Defines */
#define TDataReader noReturnFunctionReplyDataReader
#define TDataSeq    noReturnFunctionReplySeq
#define TData       noReturnFunctionReply


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
#define TTYPENAME    noReturnFunctionReplyTYPENAME
#define TPlugin_new  noReturnFunctionReplyPlugin_new
#define TPlugin_delete  noReturnFunctionReplyPlugin_delete

/* Defines */
#define TTypeSupport noReturnFunctionReplyTypeSupport
#define TData        noReturnFunctionReply
#define TDataReader  noReturnFunctionReplyDataReader
#define TDataWriter  noReturnFunctionReplyDataWriter
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


