/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _UTILS_TYPEDEFS_H_
#define _UTILS_TYPEDEFS_H_

#include "dds/Middleware.h"

namespace eprosima
{
	namespace rpc
	{
        namespace transport
        {
            class ServerTransport;
        }

#define DDS_TIMEOUT(name, duration) DDS::Duration_t name = {duration.total_seconds(), \
    static_cast<EPROSIMA_UINT32>(duration.fractional_seconds() * (1000000000 / boost::posix_time::time_duration::traits_type::res_adjust()))};

#define DDS_TIMEOUT_SET(name, duration) name.sec = duration.total_seconds(); \
        name.nanosec = static_cast<EPROSIMA_UINT32>(duration.fractional_seconds() * (1000000000 / boost::posix_time::time_duration::traits_type::res_adjust()));
	} // namespace rpc
} // namespace eprosima

#endif // _UTILS_TYPEDEFS_H_
