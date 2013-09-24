/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _STRATEGIES_SINGLETHREADSTRATEGY_H_
#define _STRATEGIES_SINGLETHREADSTRATEGY_H_

#include "strategies/ServerStrategy.h"
#include "rpcdds_dll.h"

namespace eprosima
{
    namespace rpcdds
    {
        namespace strategy
        {
            /**
             * @brief This class implements the sigle thread strategy.
             *        The server uses the reception thread of RTI DDS to execute the request.
             * @ingroup STRATEGIESMODULE 
             */
            class RPCDDS_DllAPI SingleThreadStrategy : public ServerStrategy
            {
                public:

                    /// \brief Default constructor.
                    SingleThreadStrategy(){};

                    /// \brief Default destructor.
                    virtual ~SingleThreadStrategy(){};

                    /**
                     * \brief This function execute directly the request.
                     *
                     * \param data The request. Cannot be NULL.
                     */
                    virtual void schedule(fExecFunction execFunction,
                            eprosima::rpcdds::transport::ServerTransport &transport, void *data);
            };
        } // namespace strategy
    } // namespace rpcdds
} //namespace eprosima

#endif // _STRATEGIES_SINGLETHREADSTRATEGY_H_
