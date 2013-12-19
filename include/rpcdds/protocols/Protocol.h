/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _PROTOCOLS_PROTOCOL_H_
#define _PROTOCOLS_PROTOCOL_H_

#include "rpcdds/rpcdds_dll.h"
#include <stdio.h>

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class Transport;
            class Endpoint;
        }

        namespace protocol
        {
			/*!
			 * @brief This abstract class represents the protocol used by the RPCs. It serializes and deserializes the information and uses a Transport to send it and receive it.
			 * @ingroup PROTOCOLMODULE
			 */
            class RPCDDS_DllAPI Protocol
            {
                public:

					/*!
					 * @brief This method sets a Transport object, used for the communications.
					 * @param transport Transport to use for the communications.
					 */
                    virtual bool setTransport(eprosima::rpcdds::transport::Transport &transport) = 0;

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
					 * @brief This method returns the Transport object, used for the communications.
					 * @return Transport used for the communications.
					 */
                    inline
                        eprosima::rpcdds::transport::Transport& getTransport() const {return *m_transport;}

					/*!
					 * @brief This method sets a Transport object, used for the communications.
					 * @param transport Transport to use for the communication.
					 */
                    inline
                        void _setTransport(eprosima::rpcdds::transport::Transport &transport){m_transport = &transport;}

                private:

					/*!
					 * @brief Transport object, used for the communication.
					 */
                    eprosima::rpcdds::transport::Transport *m_transport;
            };
        } // namespace protocol
    } // namespace rpcdds
} // namespace eprosima
#endif // _PROTOCOLS_PROTOCOL_H_
