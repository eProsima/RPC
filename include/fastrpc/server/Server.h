/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _SERVER_SERVER_H_
#define _SERVER_SERVER_H_

#include "fastrpc/fastrpc_dll.h"
#include "fastrpc/utils/Messages.h"

#include <string>

#define FASTRPC_DEFAULT_PERIOD_MILLISEC 5000

namespace eprosima
{
    namespace fastrpc
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
             * @brief This class implements the common functionalities that any server has.
             * @ingroup SERVERMODULE
             */
            class FASTRPC_DllAPI Server
            {

                public:

                    /**
                     * \brief This function makes the server starts listening requests.
                     * \exception eprosima::fastrpc::exception::InitializeException This exception is thrown when the initialization fails for any reason
                     */
                    void serve();

                    /**
                     * \brief This function closes the server's communications.
                     */
                    void stop();

					/*!
					 * @brief This callback is invoked by the ServerStrategy. It processes a request.
					 *
					 * @param server The invoked server.
					 * @param data The request data.
					 * @param endpoint The request endpoint.
					 */
                    static void process(Server &server, void *data, eprosima::fastrpc::transport::Endpoint &endpoint);

                protected:

                    /**
                     * \brief A constructor. The associated domain participant is created.
                     *
                     * \param serviceName The service's name that proxies will use to connect with the server.
                     * \param strategy The strategy used by the server to execute new requests.
                     *         This class doesn't delete this object in its destructor. It cannot be NULL.
                     * \param transport The transport that will use the server. This class doesn't delete this object in its destructor.
                     *        If the pointer is NULL, then a default UDPTransport will be used.
                     * \param domainId The domain id's value that the server proxy will set in the domain participant.
                     * \exception InitializeException This exception is thrown when the initialization was wrong.
                     */
                    Server(eprosima::fastrpc::strategy::ServerStrategy &strategy, eprosima::fastrpc::transport::ServerTransport &transport,
                            eprosima::fastrpc::protocol::Protocol &protocol);

                    /// \brief The default destructor.
                    virtual ~Server();

                private:

					/// \brief Pointer to the thread strategy this server uses.
                    eprosima::fastrpc::strategy::ServerStrategy &m_strategy;

                    /// \brief Pointer to the transport which this server's proxy uses.
                    eprosima::fastrpc::transport::ServerTransport &m_transport;

					/// \brief Pointer to the protocol this server uses.
                    eprosima::fastrpc::protocol::Protocol &m_protocol;
            };
        } // namespace server
    } // namespace fastrpc
} // namespace eprosima

#endif // _SERVER_SERVER_H_
