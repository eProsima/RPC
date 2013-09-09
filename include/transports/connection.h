#ifndef TCP_SERVER_TRANSPORT_CONNECTION
#define TCP_SERVER_TRANSPORT_CONNECTION

#include <boost/asio.hpp>
#include <boost/array.hpp>
#include <boost/noncopyable.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/thread.hpp>
#include <boost/enable_shared_from_this.hpp>
#include "strategies/ThreadPoolStrategy.h"

namespace eprosima {
namespace rpcdds {
namespace transport {
class connection: public boost::enable_shared_from_this<connection>,
		private boost::noncopyable {
private:

	char buffer_[8192];

	void handle_write(const boost::system::error_code& error,
			std::size_t bytes_transferred);

	void handle_read(const boost::system::error_code& error,
			std::size_t bytes_transferred);

public:

	boost::shared_ptr<boost::asio::ip::tcp::socket> socket_;

	boost::asio::io_service io_service_;
	boost::asio::io_service *master_io_service_;

	boost::asio::ip::tcp::endpoint endpoint_;

	boost::shared_ptr<boost::thread> thread_;

	bool close;

	typedef boost::shared_ptr<connection> pointer;

	connection(void);

	boost::shared_ptr<boost::asio::ip::tcp::socket>& socket();

	void start();

};

}
}
}

#endif //TCP_SERVER_TRANSPORT_CONNECTION
