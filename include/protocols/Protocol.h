/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _PROTOCOLS_PROTOCOL_H_
#define _PROTOCOLS_PROTOCOL_H_

#include "rpcdds_dll.h"

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class Transport;
        }

        namespace protocol
        {
            class RPCDDS_DllAPI Protocol
            {
                public:

                    virtual bool isCompatibleTransport(eprosima::rpcdds::transport::Transport *transport) = 0;
            };
        } // namespace protocol
    } // namespace rpcdds
} // namespace eprosima
#endif // _PROTOCOLS_PROTOCOL_H_
