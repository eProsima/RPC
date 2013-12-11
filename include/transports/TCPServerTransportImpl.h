/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_TCPSERVERTRANSPORTIMPL_H_
#define _TRANSPORTS_TCPSERVERTRANSPORTIMPL_H_

#include <boost/function.hpp>

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class BossProcess
            {
                public:
                    boost::function<void(TCPEndpoint*)> function;
            };
        } // namespace transport
    }// namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_TCPSERVERTRANSPORTIMPL_H_
