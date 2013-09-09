#ifndef TCP_SERVER_TRANSPORT_SERVERTRANSPORT
#define TCP_SERVER_TRANSPORT_SERVERTRANSPORT

#include "transports/Transport.h"
#include "strategies/ThreadPoolStrategy.h"
#include "utils/dds/Middleware.h"
#include "rpcdds_dll.h"
#include <boost/asio.hpp>
#include <string>
#include "transports/connection.h"
#include <iostream>
#include "server/Server.h"

namespace eprosima {
namespace rpcdds {
namespace transport {
class RPCDDS_DllAPI TCPServerTransport : private boost::noncopyable
{
private:

	boost::asio::io_service io_service_;
	boost::asio::ip::tcp::acceptor acceptor_;
	//connection_ptr new_connection_;

	boost::shared_ptr<connection> new_connection_;

	void init(const std::string& address, const std::string& port);
	//TCPServerTransport(const std::string& address, const std::string& port, const std::string& doc_root);
	TCPServerTransport(const std::string& address, const std::string& port);

	void start_accept();

	void handle_accept(const boost::system::error_code& e);

	std::string get_ip_address(boost::asio::io_service& io_service, std::string hostname, std::string port);

public:

	TCPServerTransport(const char* to_connect);

	void run();

	void stop();

	const char* getType() {return "raw";}

};

}
 // namespace transport
}// namespace rpcdds
} // namespace eprosima

#endif //TCP_SERVER_TRANSPORT_SERVERTRANSPORT
