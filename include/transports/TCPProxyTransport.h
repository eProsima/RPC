#ifndef _TRANSPORTS_TCPPROXYTRANSPORT_H_
#define _TRANSPORTS_TCPPROXYTRANSPORT_H_

#include "utils/dds/Middleware.h"
#include "rpcdds_dll.h"
#include "transports/ProxyTransport.h"
#include <string.h>
#include <iostream>
#include "boost/asio.hpp"
#include "boost/array.hpp"

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class RPCDDS_DllAPI TCPProxyTransport:
                public eprosima::rpcdds::transport::ProxyTransport
            {
                private:
                    std::string serverAddress_;
                    boost::asio::io_service *io_service_;
                    boost::asio::ip::tcp::resolver *resolver_;
                    boost::asio::ip::tcp::resolver::query *query_;
                    boost::asio::ip::tcp::resolver::iterator endpoint_iterator_;
                    boost::asio::ip::tcp::resolver::iterator end_;
                    boost::asio::ip::tcp::socket *socket_;

                public:

                    TCPProxyTransport(const std::string &serverAddress);

                    TCPProxyTransport(const std::string& serverAddress, const std::string& serverPort);

                    virtual const char* getType() const {return "RAW";}

                    bool connect();

                    bool send(const void* buffer, const size_t bufferSize);

                    size_t receive(void* buffer, const size_t bufferSize);
            };
        }// namespace transport
    }// namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_TCPPROXYTRANSPORT_H_
