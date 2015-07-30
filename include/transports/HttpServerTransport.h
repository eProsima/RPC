/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_HTTPSERVERTRANSPORT_H_
#define _TRANSPORTS_HTTPSERVERTRANSPORT_H_

#include "../rpc_dll.h"
#include "TCPServerTransport.h"

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            class TCPEndpoint;
            class HttpMessage;

            /*!
             * @brief This interface is the base of all classes that implement a transport
             *        that could be used by a proxy.
             * @ingroup TRANSPORTMODULE
             */
            class RPC_DllAPI HttpServerTransport : public ServerTransport
            {
                public:

					/*!
					 * @brief Default constructor.
					 * @param to_connect Listening IP interface.
					 */
                    HttpServerTransport(const char* const &to_connect);

                    //! \brief Default destructor.
                    virtual ~HttpServerTransport();

                    /*!
                     * @brief This function returns the type of the transport.
                     */
                    virtual const char* getType() const {return "HTTP";}

					/*!
					 * @brief This method runs the TCP server needed for the HTTP connections.
					 */
                    void run();

					/*!
					 * @brief This method stops the TCP server needed for the HTTP connections.
					 */
                    void stop();

					/*!
					 * @brief This function is used to send a reply to a proxy.
					 * @param data HTTP response to send.
					 * @param dataLength Length of the data to send.
					 * @param endpoint Target endpoint to send the data to.
					 */
					void sendReply(void *data, size_t dataLength, Endpoint *connection);

					/*!
					 * @brief This function does not apply to HTTP transport..
					 */
                    int receive(char *buffer, size_t bufferLength, size_t &dataToRead, Endpoint *endpoint); 
                    
					/*!
					 * @brief This callback method is invoked when a request arrives.
					 * It makes the thread strategy schedule the incoming request.
					 * @param connection Incoming endpoint.
					 */
                    void bossProcess(TCPEndpoint* connection);

					/*!
					 * @brief This callback method is invoked by the thread strategy when a request arrives.
					 * It gets the request from the TCP endpoint.
					 * @param connection Incoming endpoint
					 */
                    void worker(TCPEndpoint* connection);

                private:

                    int readMethod(TCPEndpoint *connection, HttpMessage &httpMessage);

                    int readUri(TCPEndpoint *connection, HttpMessage &httpMessage);

                    int readVersion(TCPEndpoint *connection, HttpMessage &httpMessage);

                    int readHeaderLines(TCPEndpoint *connection, HttpMessage &httpMessage);

                    int readHeaders(TCPEndpoint *connection, HttpMessage &httpMessage);

                    TCPServerTransport m_tcptransport;
            };
        }
        // namespace transport
    }// namespace rpc
} // namespace eprosima

#endif // _TRANSPORTS_HTTPSERVERTRANSPORT_H_
