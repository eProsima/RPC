/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _PROTOCOLS_PROTOCOL_H_
#define _PROTOCOLS_PROTOCOL_H_

#include "fastrpc/fastrpc_dll.h"
#include <stdio.h>

namespace eprosima
{
    namespace fastrpc
    {
        namespace transport
        {
            class Transport;
            class Endpoint;
        }

        namespace protocol
        {
			/*!
			 * @brief This abstract class represents the protocol used by the RPCs. It serializes and deserializes the information and uses a eprosima::fastrpc::transport::Transport to send it and receive it.
			 * @ingroup PROTOCOLMODULE
			 */
            class FASTRPC_DllAPI Protocol
            {
                public:

					/*!
					 * @brief This method sets a eprosima::fastrpc::transport::Transport object, used for the communications.
					 * @param transport eprosima::fastrpc::transport::Transport to use for the communications.
					 */
                    virtual bool setTransport(eprosima::fastrpc::transport::Transport &transport) = 0;

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
					 * @brief This method returns the eprosima::fastrpc::transport::Transport object, used for the communications.
					 * @return eprosima::fastrpc::transport::Transport used for the communications.
					 */
                    inline
                        eprosima::fastrpc::transport::Transport& getTransport() const {return *m_transport;}

					/*!
					 * @brief This method sets a eprosima::fastrpc::transport::Transport object, used for the communications.
					 * @param transport eprosima::fastrpc::transport::Transport to use for the communication.
					 */
                    inline
                        void _setTransport(eprosima::fastrpc::transport::Transport &transport){m_transport = &transport;}

                private:

					/*!
					 * @brief eprosima::fastrpc::transport::Transport object, used for the communication.
					 */
                    eprosima::fastrpc::transport::Transport *m_transport;
            };
        } // namespace protocol
    } // namespace fastrpc
} // namespace eprosima
#endif // _PROTOCOLS_PROTOCOL_H_
