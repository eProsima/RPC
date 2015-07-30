/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _PROTOCOLS_PROTOCOL_H_
#define _PROTOCOLS_PROTOCOL_H_

#include "../rpc_dll.h"
#include <stdio.h>

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            class Transport;
            class Endpoint;
        }

        namespace protocol
        {
			/*!
			 * @brief This abstract class represents the protocol used by the RPCs. It serializes and deserializes the information and uses a eprosima::rpc::transport::Transport to send it and receive it.
			 * @ingroup PROTOCOLMODULE
			 */
            class RPC_DllAPI Protocol
            {
                public:

					/*!
					 * @brief This method sets a eprosima::rpc::transport::Transport object, used for the communications.
					 * @param transport eprosima::rpc::transport::Transport to use for the communications.
					 */
                    virtual bool setTransport(eprosima::rpc::transport::Transport &transport) = 0;

                protected:

					/*!
					 * @brief Default constructor.
					 */
                    Protocol() : m_transport(NULL){}

					/*!
					 * @brief Default destructor.
					 */
                    virtual ~Protocol(){}

					/*!
					 * @brief This method returns the eprosima::rpc::transport::Transport object, used for the communications.
					 * @return eprosima::rpc::transport::Transport used for the communications.
					 */
                    inline
                        eprosima::rpc::transport::Transport& getTransport() const {return *m_transport;}

					/*!
					 * @brief This method sets a eprosima::rpc::transport::Transport object, used for the communications.
					 * @param transport eprosima::rpc::transport::Transport to use for the communication.
					 */
                    inline
                        void _setTransport(eprosima::rpc::transport::Transport &transport){m_transport = &transport;}

                private:

					/*!
					 * @brief eprosima::rpc::transport::Transport object, used for the communication.
					 */
                    eprosima::rpc::transport::Transport *m_transport;
            };
        } // namespace protocol
    } // namespace rpc
} // namespace eprosima
#endif // _PROTOCOLS_PROTOCOL_H_
