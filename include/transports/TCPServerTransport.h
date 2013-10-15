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

#include <boost/asio.hpp>
#include <boost/function.hpp>
#include <string>
#include <iostream>

namespace boost
{
    class thread;
}

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class TCPEndpoint;

            class RPCDDS_DllAPI TCPServerTransport : public ServerTransport, private boost::noncopyable
            {
                private:
                    boost::asio::io_service io_service_;
                    boost::asio::io_service::work work_;
                    boost::asio::ip::tcp::acceptor acceptor_;
                    boost::thread *thread_;

                    void init(const std::string& address, const std::string& port);

                    void start_accept();

                    void handle_accept(TCPEndpoint* con, const boost::system::error_code& e);

                    std::string get_ip_address(boost::asio::io_service& io_service, std::string hostname, std::string port);

                    

                public:
                    
                    boost::function<void(TCPEndpoint*)> onBossProcess;

					void worker(TCPEndpoint* connection);

                    TCPServerTransport(const std::string &to_connect);

                    void run();

                    void stop();

                    const char* getType() const {return "RAW";}
                    
					void sendReply(void *data, size_t dataLength, Endpoint *connection);

                    int receive(char *buffer, size_t bufferLength, size_t &dataToRead, Endpoint *endpoint); 
            };

        }
        // namespace transport
    }// namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_TCPSERVERTRANSPORT_H_
