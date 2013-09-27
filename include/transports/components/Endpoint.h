/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_COMPONENTS_ENDPOINT_H_
#define _TRANSPORTS_COMPONENTS_ENDPOINT_H_

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class Endpoint
            {
                protected:

                    Endpoint(){};

                    virtual ~Endpoint(){};
            };
        } // namespace eprosima
    } // namespace eprosima
} // namespace eprosima
#endif // _TRANSPORTS_COMPONENTS_ENDPOINT_H_
