/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_SERVERTRANSPORT_H_
#define _TRANSPORTS_SERVERTRANSPORT_H_

#include "rpcdds_dll.h"
#include "transports/Transport.h"
#include "transports/components/Endpoint.h"

#include <stdio.h>

namespace eprosima
{
    namespace rpcdds
    {
        namespace protocol
        {
            class Protocol;
        }


        namespace strategy
        {
            class ServerStrategy;
        }

        namespace transport
        {
            /*!
             * @brief This interface is the base of all classes that implement a transport
             *        that can be used by the server.
             * @ingroup TRANSPORTMODULE
             */
            class RPCDDS_DllAPI ServerTransport : public Transport
            {
                typedef void (*ServerTransport_Callback)(eprosima::rpcdds::protocol::Protocol&, void*&, size_t, Endpoint*);

                public:

                    //! \brief Default constructor.
                    ServerTransport() : m_strategy(NULL), m_protocol(NULL), m_callback(NULL)
                    {}

                    //! \brief Default destructor.
                    virtual ~ServerTransport(){}

					/*!
					 * @brief Sets the threading strategy.
					 * @param strategy Threading strategy.
					 */
                    inline
                        void setStrategy(eprosima::rpcdds::strategy::ServerStrategy &strategy)
                        {
                            m_strategy = &strategy;
                        }

					/*!
					 * @brief Sets the communication protocol.
					 * @param protocol Communication protocol.
					 */
                    inline
                        void linkProtocol(eprosima::rpcdds::protocol::Protocol &protocol)
                        {
                            m_protocol = &protocol;
                        }

					/*!
					 * @brief Gets the communication protocol.
					 * @return Communication protocol.
					 */
                    inline
                        eprosima::rpcdds::protocol::Protocol& getLinkedProtocol()
                        {
                            return *m_protocol;
                        }

					/*!
					 * @brief Gets the threading strategy.
					 * @return Threading strategy.
					 */
                    inline
                        eprosima::rpcdds::strategy::ServerStrategy& getStrategy() const
                        {
                            return *m_strategy;
                        }

					/*!
					 * @brief Gets the callback that will proccess the requests.
					 * @return Callback that will proccess the requests.
					 */
                    inline
                        ServerTransport_Callback getCallback() const
                        {
                            return m_callback;
                        }

					/*!
					 * @brief Gets the callback that will proccess the requests.
					 * @param Callback Callback that will proccess the requests.
					 */
                    void setCallback(ServerTransport_Callback callback)
                    {
                        m_callback = callback;
                    }

                    /*!
                     * @brief This function returns the behaviour of the transport.
                     * @return The behaviour of the transport.
                     */
                    TransportBehaviour getBehaviour() const
                    {
                        return SERVER_BEHAVIOUR;
                    }

                    /*!
                     * @brief This function returns the type of the transport.
                     *        This function has to be implemented by the child classes.
                     */
                    virtual const char* getType() const = 0;

					/*!
					 * @brief This method runs the TCP server needed for the HTTP connections.
					 */
                    virtual void run() = 0;

					/*!
					 * @brief This method stops the TCP server needed for the HTTP connections.
					 */
                    virtual void stop() = 0;

					/*!
					 * @brief This function is used to send a reply to a proxy.
					 * @param data Response to send.
					 * @param dataLength Length of the data to send.
					 * @param endpoint Targeg entpoint to send the data to.
					 */
                    virtual void sendReply(void *data, size_t dataLength, Endpoint *endpoint) = 0;

					/*!
					 * @brief This function is used to send a reply to a proxy.
					 * @param data Response to send.
					 * @param dataLength Length of the data to send.
					 * @param endpoint Target endpoint to send the data to.
					 */
                    virtual int receive(char *buffer, size_t bufferLength, size_t &dataToRead, Endpoint *endpoint) = 0; 

                private:

                    eprosima::rpcdds::strategy::ServerStrategy *m_strategy;

                    eprosima::rpcdds::protocol::Protocol *m_protocol;

                    ServerTransport_Callback m_callback;
            };
        }
        // namespace transport
    }// namespace rpcdds
} // namespace eprosima
#endif // _TRANSPORTS_SERVERTRANSPORT_H_
