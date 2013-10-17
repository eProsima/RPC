/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_HTTPSERVERTRANSPORT_H_
#define _TRANSPORTS_HTTPSERVERTRANSPORT_H_

#include "rpcdds_dll.h"
#include "transports/TCPServerTransport.h"
#include "transports/HttpTransport.h"

namespace eprosima
{
    namespace rpcdds
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
            class RPCDDS_DllAPI HttpServerTransport : public ServerTransport, public HttpTransport
            {
                public:

                    //! \brief Default constructor.
                    HttpServerTransport(const std::string &to_connect);

                    //! \brief Default destructor.
                    virtual ~HttpServerTransport();

                    /*!
                     * @brief This function returns the type of the transport.
                     *        This function has to be implemented by the child classes.
                     */
                    virtual const char* getType() const {return "HTTP";}

                    void run();

                    void stop();

					void sendReply(void *data, size_t dataLength, Endpoint *connection);

                    int receive(char *buffer, size_t bufferLength, size_t &dataToRead, Endpoint *endpoint); 
                    
                    void bossProcess(TCPEndpoint* connection);

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
    }// namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_HTTPSERVERTRANSPORT_H_
