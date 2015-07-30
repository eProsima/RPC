/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _CPP_RPC_DLL_H_
#define _CPP_RPC_DLL_H_

#include "config.h"

// normalize macros
#if !defined(RPC_DYN_LINK) && !defined(RPC_STATIC_LINK) \
    && !defined(EPROSIMA_ALL_DYN_LINK) && !defined(EPROSIMA_ALL_STATIC_LINK)
#define RPC_STATIC_LINK
#endif

#if defined(EPROSIMA_ALL_DYN_LINK) && !defined(RPC_DYN_LINK)
#define RPC_DYN_LINK
#endif

#if defined(RPC_DYN_LINK) && defined(RPC_STATIC_LINK)
#error Must not define both RPC_DYN_LINK and RPC_STATIC_LINK
#endif

#if defined(EPROSIMA_ALL_NO_LIB) && !defined(RPC_NO_LIB)
#define RPC_NO_LIB
#endif

// enable dynamic linking

#if defined(_WIN32)
#if defined(EPROSIMA_ALL_DYN_LINK) || defined(RPC_DYN_LINK)
#if defined(RPC_SOURCE)
#define RPC_DllAPI __declspec( dllexport )
#else
#define RPC_DllAPI __declspec( dllimport )
#endif // RPC_SOURCE
#else
#define RPC_DllAPI
#endif
#else
#define RPC_DllAPI
#endif // _WIN32

// enabling user dynamic linking
#if defined(_WIN32) && defined(EPROSIMA_USER_DLL_EXPORT)
  #define RPCUSERDllExport __declspec(dllexport)
#else
  #define RPCUSERDllExport
#endif

// Auto linking.

#if !defined(RPC_SOURCE) && !defined(EPROSIMA_ALL_NO_LIB) \
    && !defined(RPC_NO_LIB)

#if defined(EPROSIMA_ALL_DYN_LINK) || defined(RPC_DYN_LINK)
#define EPROSIMA_DYN_LINK
#endif

#include "eProsima_auto_link.h"
#endif // auto-linking disabled

#endif // _CPP_RPC_DLL_H_
