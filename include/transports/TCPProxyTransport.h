#ifndef TCP_SERVER_TRANSPORT_PROXYTRANSPORT
#define TCP_SERVER_TRANSPORT_PROXYTRANSPORT

#include "utils/dds/Middleware.h"
#include "rpcdds_dll.h"
#include "transports/ProxyTransport.h"
#include <string.h>
#include <iostream>
#include "boost/asio.hpp"
#include "boost/array.hpp"

namespace REST {
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
	//boost::array<char, 8192> buffer_;
	char buffer_[8192];

public:

	TCPProxyTransport(const std::string& serverAddress);

	const char* getType() {return "raw";}

	bool connect();

	bool send(const char* buffer);

	char* receive();
};
}

#endif
