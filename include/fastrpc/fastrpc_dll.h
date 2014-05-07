/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _CPP_FASTRPC_DLL_H_
#define _CPP_FASTRPC_DLL_H_

// normalize macros
#if !defined(FASTRPC_DYN_LINK) && !defined(FASTRPC_STATIC_LINK) \
    && !defined(EPROSIMA_ALL_DYN_LINK) && !defined(EPROSIMA_ALL_STATIC_LINK)
#define FASTRPC_STATIC_LINK
#endif

#if defined(EPROSIMA_ALL_DYN_LINK) && !defined(FASTRPC_DYN_LINK)
#define FASTRPC_DYN_LINK
#endif

#if defined(FASTRPC_DYN_LINK) && defined(FASTRPC_STATIC_LINK)
#error Must not define both FASTRPC_DYN_LINK and FASTRPC_STATIC_LINK
#endif

#if defined(EPROSIMA_ALL_NO_LIB) && !defined(FASTRPC_NO_LIB)
#define FASTRPC_NO_LIB
#endif

// enable dynamic linking

#if defined(_WIN32)
#if defined(EPROSIMA_ALL_DYN_LINK) || defined(FASTRPC_DYN_LINK)
#if defined(FASTRPC_SOURCE)
#define FASTRPC_DllAPI __declspec( dllexport )
#else
#define FASTRPC_DllAPI __declspec( dllimport )
#endif // FASTRPC_SOURCE
#else
#define FASTRPC_DllAPI
#endif
#else
#define FASTRPC_DllAPI
#endif // _WIN32

// enabling user dynamic linking
#if defined(_WIN32) && defined(EPROSIMA_USER_DLL_EXPORT)
  #define FASTRPCUSERDllExport __declspec(dllexport)
#else
  #define FASTRPCUSERDllExport
#endif

// Auto linking.

#if !defined(FASTRPC_SOURCE) && !defined(EPROSIMA_ALL_NO_LIB) \
    && !defined(FASTRPC_NO_LIB)

#include "fastrpc/fastrpc_version.h"

// Set properties.
#define EPROSIMA_LIB_NAME fastrpc

#if defined(EPROSIMA_ALL_DYN_LINK) || defined(FASTRPC_DYN_LINK)
#define EPROSIMA_DYN_LINK
#endif

#include "eProsima_cpp/eProsima_auto_link.h"
#endif // auto-linking disabled

#endif // _CPP_FASTRPC_DLL_H_
