/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _UTILS_UTILITIES_H_
#define _UTILS_UTILITIES_H_

#include "../rpc_dll.h"

namespace eprosima
{
    namespace rpc
    {
		/**
		 * \brief This function sleeps the current thread.
		 *
		 * \param milliseconds Time in milliseconds that the thread will be sleeping.
		 */
		RPC_DllAPI void sleep(unsigned int milliseconds);
    } // namespace rpc
} // namespace eprosima

#endif // _UTILS_UTILITIES_H_
