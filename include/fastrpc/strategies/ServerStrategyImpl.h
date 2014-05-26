/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _SERVER_SERVERSTRATEGYIMPL_H_
#define _SERVER_SERVERSTRATEGYIMPL_H_

#include <boost/function.hpp>

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            class ServerTransport;
            class Endpoint;
        }

        namespace strategy
        {
            /**
             * @brief This class is the base of all classes that implement a server strategy.
             *        that could be used by the server.
             * @ingroup SERVERMODULE
             */
            class ServerStrategyImpl
            {
                public:

                    /// \brief Default constructor.
                    ServerStrategyImpl(){}

                    /// \brief Default destructor.
                    virtual ~ServerStrategyImpl(){}

                    /**
                     * \brief This function schedules an incoming request.
                     *        This function has to be implemented by the derived classes.
                     *
                     * \param callback The Server's method to invoke when a request arrives.
                     */
                    virtual void schedule(boost::function<void()> callback) = 0;
            };
        } // namespace strategy
    } // namespace rpc
} // namespace eprosima

#endif // _SERVER_SERVERSTRATEGYIMPL_H_
