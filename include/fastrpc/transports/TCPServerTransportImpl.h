/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_TCPSERVERTRANSPORTIMPL_H_
#define _TRANSPORTS_TCPSERVERTRANSPORTIMPL_H_

#include <boost/function.hpp>

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            class BossProcess
            {
                public:
					/*!
					 * @brief Callback designed to receive a proxy request and schedule it invoking the concrete threading strategy.
					 * @ingroup TRANSPORTMODULE
					 */
                    boost::function<void(TCPEndpoint*)> function;
            };
        } // namespace transport
    }// namespace rpc
} // namespace eprosima

#endif // _TRANSPORTS_TCPSERVERTRANSPORTIMPL_H_
