/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_TCPSERVERTRANSPORT_H_
#define _TRANSPORTS_TCPSERVERTRANSPORT_H_

#include "transports/ServerTransport.h"
#include "rpcdds_dll.h"

#include <string>
#include <iostream>

namespace boost
{
    class thread;

    namespace asio
    {
        class io_service;
    }

    namespace system
    {
        class error_code;
    }
}

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class TCPServerTransportBoost;
            class BossProcess;
            class TCPEndpoint;

            class RPCDDS_DllAPI TCPServerTransport : public ServerTransport
            {
                private:
                    TCPServerTransportBoost *m_boostInfo;
                    boost::thread *thread_;

                    void init(const std::string& address, const std::string& port);

                    void start_accept();

                    void handle_accept(TCPEndpoint* con, const boost::system::error_code &e);

                    std::string get_ip_address(boost::asio::io_service &io_service, std::string hostname, std::string port);

                    

                public:
                    
					/*!
					 * @brief This callback method is invoked when a request arrives.
					 * It makes the thread strategy schedule the incoming request.
					 */
                    BossProcess *onBossProcess;

					/*!
					 * @brief This callback method is invoked by the thread strategy when a request arrives.
					 * It gets the request from the TCP endpoint.
					 * @param connection Incoming endpoint
					 */
					void worker(TCPEndpoint* connection);

					/*!
					 * @brief default constructor
					 * @param to_connect Listening IP interface
					 */
                    TCPServerTransport(const std::string &to_connect);

					/*!
					 * @brief default destructor
					 * @param to_connect Listening IP interface
					 */
                    virtual ~TCPServerTransport();

					/*!
					 * @brief This method runs the TCP server
					 */
                    void run();

					/*!
					 * @brief This method stops the TCP server
					 */
                    void stop();

                    /*!
                     * @brief This function returns the type of the transport.
                     */
                    const char* getType() const {return "RAW";}
                    
					/*!
					 * @brief This function is used to send a reply to a proxy
					 * @param data Response to send
					 * @param dataLength Length of the data to send
					 * @param endpoint Endpoint to send the data to
					 */
					void sendReply(void *data, size_t dataLength, Endpoint *connection);

					/*!
					 * @brief This function is used to send a reply to a proxy
					 * @param data Response to send
					 * @param dataLength Length of the data to send
					 * @param endpoint Endpoint to send the data to
					 */
                    int receive(char *buffer, size_t bufferLength, size_t &dataToRead, Endpoint *endpoint); 
            };

        } // namespace transport
    }// namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_TCPSERVERTRANSPORT_H_
