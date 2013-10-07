#include "transports/TCPProxyTransport.h"

#include <iostream>
#include "exceptions/ServerNotFoundException.h"

using namespace std;

namespace eprosima {
namespace rpcdds {
namespace transport {
TCPProxyTransport::TCPProxyTransport(const std::string& serverAddress) {
	string host = "127.0.0.1";
	string port = "80";
	if (serverAddress.size() > 0) {
		size_t index = serverAddress.find(':', 1);
		host = serverAddress.substr(0, index);
		if(index != string::npos)
			port = serverAddress.substr(index + 1, serverAddress.size());
	}
	io_service_ = new boost::asio::io_service();
	resolver_ = new boost::asio::ip::tcp::resolver(*io_service_);
	query_ = new boost::asio::ip::tcp::resolver::query(
			boost::asio::ip::tcp::v4(), host, port);
	socket_ = new boost::asio::ip::tcp::socket(*io_service_);
	serverAddress_ = host;
	endpoint_iterator_ = resolver_->resolve(*query_);
	memset(&buffer_, 0, 8192);
}

TCPProxyTransport::TCPProxyTransport(const std::string& serverAddress, const std::string& serverPort) {
	io_service_ = new boost::asio::io_service();
	resolver_ = new boost::asio::ip::tcp::resolver(*io_service_);
	query_ = new boost::asio::ip::tcp::resolver::query(
			boost::asio::ip::tcp::v4(), serverAddress, serverPort);
	socket_ = new boost::asio::ip::tcp::socket(*io_service_);
	serverAddress_ = serverAddress;
	endpoint_iterator_ = resolver_->resolve(*query_);
	memset(&buffer_, 0, 8192);
}

bool TCPProxyTransport::connect() {
	boost::system::error_code error = boost::asio::error::host_not_found;
	while (error && endpoint_iterator_ != end_) {
		socket_->close();
		socket_->connect(*endpoint_iterator_++, error);
	}
	if (error) {
		throw eprosima::rpcdds::exception::ServerNotFoundException("ERROR<TCPProxyTransport::connect>: "+error.message());
	}
	return true;
}

bool TCPProxyTransport::send(const char* buffer) {
	boost::system::error_code error = boost::system::error_code();

	size_t size = strlen(buffer);
	memcpy(buffer_, buffer, size);
	size_t bytes_sent = 0;
	bytes_sent = boost::asio::write(*socket_, boost::asio::buffer(buffer_, size),
			boost::asio::transfer_all(), error);
	if (bytes_sent == 0) {
		std::cout << "Error sending data" << std::endl;
		return false;
	}
	memset(&buffer_, 0, 8192);
	return true;
}

char* TCPProxyTransport::receive() {
	boost::system::error_code error = boost::system::error_code();
	memset(&buffer_, 0, 8192);
	size_t actualPos = 0;
	char* response = NULL;
	while(true){
		size_t len = socket_->read_some(
			boost::asio::buffer(buffer_, 8192),
			error
		);

		response = (char*)realloc(response, actualPos+len);
		memcpy(response + actualPos, buffer_, len);

		actualPos += len;
			
		if(error == boost::asio::error::eof){
			break;
		}else if(error){
			throw boost::system::system_error(error);
		}
	}

	return response;
}
}// namespace transport
}// namespace rpcdds
} // namespace eprosima
