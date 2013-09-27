/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _SERVER_SERVER_H_
#define _SERVER_SERVER_H_

#include "rpcdds_dll.h"
#include "utils/Messages.h"

#include <string>

#define RPCDDS_DEFAULT_PERIOD_MILLISEC 5000

namespace eprosima
{
    namespace rpcdds
    {
        namespace strategy
        {
            class ServerStrategy;
        }

        namespace transport
        {
            class ServerTransport;
            class Endpoint;
        }

        namespace protocol
        {
            class Protocol;
        }

        namespace server
        {
            /**
             * @brief This class implements the common functionalities that the server has.
             * @ingroup SERVERMODULE
             */
            class RPCDDS_DllAPI Server
            {

                public:

                    /**
                     * \brief This function starts the server to listen requests.
                     *         The server will create the DDS entities to start listening.
                     * \exception eProsima::RPCDDS::InitializeException This exception is thrown when the initialization of DDS entities was wrong.
                     */
                    void serve();

                    /**
                     * \brief This function close the server's communications.
                     *        The server will destroy the DDS entities to close the communications.
                     */
                    void stop();

                    static void process(Server &server, void *data, eprosima::rpcdds::transport::Endpoint &endpoint);

                protected:

                    /**
                     * \brief A constructor. The associated domain participant is created.
                     *
                     * \param serviceName The service's name that proxies will use to connect with the server.
                     * \param strategy The strategy used by the server to execute new requests.
                     *         This class doesn't delete this object in its destructor. Cannot be NULL.
                     * \param transport The transport that will be use the server. This class doesn't delete this object in its destructor.
                     *        If the pointer is NULL, then a default UDPTransport will be used.
                     * \param domainId The domain id's value that the server proxy will set in the domain participant.
                     * \exception InitializeException This exception is thrown when the initialization was wrong.
                     */
                    Server(eprosima::rpcdds::strategy::ServerStrategy &strategy, eprosima::rpcdds::transport::ServerTransport &transport,
                            eprosima::rpcdds::protocol::Protocol &protocol);

                    /// \brief The default destructor.
                    virtual ~Server();

                private:

                    eprosima::rpcdds::strategy::ServerStrategy &m_strategy;

                    /// \brief Pointer to the transport which this server's proxy uses.
                    eprosima::rpcdds::transport::ServerTransport &m_transport;

                    eprosima::rpcdds::protocol::Protocol &m_protocol;
            };
        } // namespace server
    } // namespace rpcdds
} // namespace eprosima

#endif // _SERVER_SERVER_H_
