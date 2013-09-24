#include "transports/connection.h"
#include <iostream>
#include <vector>
#include <boost/bind.hpp>

using namespace eprosima::rpcdds;
using namespace ::transport;

void function() {
	//Do something
	std::cout << "Function execution" << std::endl;
}

connection::connection(void) /*: socket_(new boost::asio::ip::tcp::socket(io_service))*/
{
	this->socket_ = boost::shared_ptr<boost::asio::ip::tcp::socket>(
			new boost::asio::ip::tcp::socket(io_service_));
}

void connection::handle_write(const boost::system::error_code& error,
		size_t bytec_transferred) {
	//Do something
}

void connection::handle_read(const boost::system::error_code& error,
		std::size_t bytes_transferred) {
	if (!error) {
		std::cout << "Received " << bytes_transferred << " bytes, data: ";
		std::cout.write(buffer_, bytes_transferred);
		std::cout << std::endl;
		function();
	}
}

boost::shared_ptr<boost::asio::ip::tcp::socket>& connection::socket() {
	return socket_;
}

void connection::start() {
	boost::asio::async_read(*socket_, boost::asio::buffer(buffer_),
			boost::bind(&connection::handle_read, shared_from_this(),
					boost::asio::placeholders::error,
					boost::asio::placeholders::bytes_transferred));
}
