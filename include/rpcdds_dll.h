/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _CPP_RPCDDS_DLL_H_
#define _CPP_RPCDDS_DLL_H_

// normalize macros
#if !defined(RPCDDS_DYN_LINK) && !defined(RPCDDS_STATIC_LINK) \
    && !defined(EPROSIMA_ALL_DYN_LINK) && !defined(EPROSIMA_ALL_STATIC_LINK)
#define RPCDDS_STATIC_LINK
#endif

#if defined(EPROSIMA_ALL_DYN_LINK) && !defined(RPCDDS_DYN_LINK)
#define RPCDDS_DYN_LINK
#endif

#if defined(RPCDDS_DYN_LINK) && defined(RPCDDS_STATIC_LINK)
#error Must not define both RPCDDS_DYN_LINK and RPCDDS_STATIC_LINK
#endif

#if defined(EPROSIMA_ALL_NO_LIB) && !defined(RPCDDS_NO_LIB)
#define RPCDDS_NO_LIB
#endif

// enable dynamic linking

#if defined(_WIN32)
#if defined(EPROSIMA_ALL_DYN_LINK) || defined(RPCDDS_DYN_LINK)
#if defined(RPCDDS_SOURCE)
#define RPCDDS_DllAPI __declspec( dllexport )
#else
#define RPCDDS_DllAPI __declspec( dllimport )
#endif // RPCDDS_SOURCE
#else
#define RPCDDS_DllAPI
#endif
#else
#define RPCDDS_DllAPI
#endif // _WIN32

// Auto linking.

#if !defined(RPCDDS_SOURCE) && !defined(EPROSIMA_ALL_NO_LIB) \
    && !defined(RPCDDS_NO_LIB)

#include "rpcdds_version.h"

// Set properties.
#if defined(RTI_WIN32) || defined(RTI_LINUX)
#define EPROSIMA_LIB_NAME rpcdds
#elif defined(OPENDDS)
#define EPROSIMA_LIB_NAME rpcddso
#else
#error Not defined any middleware. Define RTI or OPENDDS.
#endif

#if defined(EPROSIMA_ALL_DYN_LINK) || defined(RPCDDS_DYN_LINK)
#define EPROSIMA_DYN_LINK
#endif

#include "eProsima_cpp/eProsima_auto_link.h"
#endif // auto-linking disabled

#endif // _CPP_RPCDDS_DLL_H_
