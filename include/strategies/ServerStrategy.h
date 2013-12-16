/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _SERVER_SERVERSTRATEGY_H_
#define _SERVER_SERVERSTRATEGY_H_

#include "rpcdds_dll.h"

namespace eprosima
{
    namespace rpcdds
    {
        namespace strategy
        {
			class ServerStrategyImpl;

            /**
             * @brief This class is the base of all classes that implement a server strategy.
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

					/*!
					 * @brief Gets the implementation of the strategy using Boost library.
					 * @return Implementation of the strategy.
					 */
                    virtual ServerStrategyImpl* getImpl() = 0;
            };
        } // namespace strategy
    } // namespace rpcdds
} // namespace eprosima

#endif // _SERVER_SERVERSTRATEGY_H_
