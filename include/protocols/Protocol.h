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
#include <stdio.h>

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

                    virtual bool setTransport(eprosima::rpcdds::transport::Transport &transport) = 0;

                protected:

                    Protocol() : m_transport(NULL){}

                    virtual ~Protocol(){}

                    inline
                        eprosima::rpcdds::transport::Transport& getTransport() const {return *m_transport;}

                    inline
                        void _setTransport(eprosima::rpcdds::transport::Transport &transport){m_transport = &transport;}

                private:

                    eprosima::rpcdds::transport::Transport *m_transport;
            };
        } // namespace protocol
    } // namespace rpcdds
} // namespace eprosima
#endif // _PROTOCOLS_PROTOCOL_H_
