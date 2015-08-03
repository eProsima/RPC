/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_COMPONENTS_ENDPOINT_H_
#define _TRANSPORTS_COMPONENTS_ENDPOINT_H_

#include "../../rpc_dll.h"

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
			/*!
             * @brief This class represents an endpoint.
             * @ingroup TRANSPORTMODULE
             */
            class RPC_DllAPI Endpoint
            {
                protected:

					/*!
					 * @brief Default constructor.
					 */
                    Endpoint(){};

					/*!
					 * @brief Default destructor.
					 */
                    virtual ~Endpoint(){};
            };
        } // namespace eprosima
    } // namespace eprosima
} // namespace eprosima
#endif // _TRANSPORTS_COMPONENTS_ENDPOINT_H_
