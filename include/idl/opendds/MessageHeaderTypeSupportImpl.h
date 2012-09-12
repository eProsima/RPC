/* -*- C++ -*- */
/* Generated by opendds_idl.exe version 3.2 (ACE version 5.6a_p13) running on input file MessageHeader.idl*/
#ifndef OPENDDS_IDL_GENERATED_MESSAGEHEADERTYPESUPPORTIMPL_H_O24CWU
#define OPENDDS_IDL_GENERATED_MESSAGEHEADERTYPESUPPORTIMPL_H_O24CWU
#include "dds/DCPS/Definitions.h"
#include "MessageHeaderC.h"
#include "dds/DCPS/Serializer.h"
#include "utils/ddsrpc.h"


/* Begin STRUCT: Identification */

namespace OpenDDS { namespace DCPS {

DDSRPC_WIN32_DLL_API_VARIABLE
void gen_find_size(const Identification& stru, size_t& size, size_t& padding);

DDSRPC_WIN32_DLL_API_VARIABLE
bool operator<<(Serializer& strm, const Identification& stru);

DDSRPC_WIN32_DLL_API_VARIABLE
bool operator>>(Serializer& strm, Identification& stru);

}  }

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
DDSRPC_WIN32_DLL_API_VARIABLE
const MetaStruct& getMetaStruct<Identification>();
}  }

#endif

/* End STRUCT: Identification */
#endif /* OPENDDS_IDL_GENERATED_MESSAGEHEADERTYPESUPPORTIMPL_H_O24CWU */