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
                    
                    BossProcess *onBossProcess;

					void worker(TCPEndpoint* connection);

                    TCPServerTransport(const std::string &to_connect);

                    virtual ~TCPServerTransport();

                    void run();

                    void stop();

                    const char* getType() const {return "RAW";}
                    
					void sendReply(void *data, size_t dataLength, Endpoint *connection);

                    int receive(char *buffer, size_t bufferLength, size_t &dataToRead, Endpoint *endpoint); 
            };

        } // namespace transport
    }// namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_TCPSERVERTRANSPORT_H_
