/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _SERVER_SERVERSTRATEGY_H_
#define _SERVER_SERVERSTRATEGY_H_

#include "utils/Typedefs.h"
#include "rpcdds_dll.h"

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class ServerTransport;
            class Endpoint;
        }

        namespace strategy
        {
            /**
             * @brief This class is the base of all classes that implement a server strategy
             *        that could be used by the server.
             * @ingroup SERVERMODULE
             */
            class RPCDDS_DllAPI ServerStrategy
            {
                public:

                    /// \brief Default constructor.
                    ServerStrategy(){}

                    /// \brief Default destructor.
                    virtual ~ServerStrategy(){}

                    /**
                     * \brief This function schedules a incoming request.
                     *        This function has to be implemented by the derived classes.
                     *
                     * \param data The request. Cannot be NULL.
                     */
                    virtual void schedule(fExecFunction execFunction,
                            eprosima::rpcdds::transport::ServerTransport &transport, void *data) = 0;
            };
        } // namespace strategy
    } // namespace rpcdds
} // namespace eprosima

#endif // _SERVER_SERVERSTRATEGY_H_
