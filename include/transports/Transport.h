/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_TRANSPORT_H_
#define _TRANSPORTS_TRANSPORT_H_

#include "../rpc_dll.h"

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            /*!
             * @brief This enumeration specifies the behaviour
             * of the transport.
			 * @ingroup TRANSPORTMODULE
             */
            typedef enum TransportBehaviour
            {
                PROXY_BEHAVIOUR,
                SERVER_BEHAVIOUR
            } TransportBehaviour;

            /*!
             * @brief This class is the base of all classes that implement a transport
             *        that could be used by the proxy or the server.
             * @ingroup TRANSPORTMODULE
             */
            class RPC_DllAPI Transport
            {
                public:

                    //! @brief Default constructor.
                    Transport(){}

                    //! @brief Default destructor.
                    virtual ~Transport(){}

                    /*!
                     * @brief This function returns the type of the transport.
                     *        This function has to be implemented by the child classes.
                     */
                    virtual const char* getType() const = 0;

                    /*!
                     * 2brief This function returns the behaviour of the transport.
                     * @return The behaviour of the transport.
                     */
                    virtual TransportBehaviour getBehaviour() const = 0;
            };
        } // namespace transport
    } // namespace FASTRPC
} // namespace eProsima
#endif // _TRANSPORTS_TRANSPORT_H_
