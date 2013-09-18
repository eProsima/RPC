#include "transports/TCPProxyTransport.h"

namespace eprosima {
namespace rpcdds {
namespace transport {
TCPProxyTransport::TCPProxyTransport(const std::string& serverAddress) {
	io_service_ = new boost::asio::io_service();
	resolver_ = new boost::asio::ip::tcp::resolver(*io_service_);
	query_ = new boost::asio::ip::tcp::resolver::query(
			boost::asio::ip::tcp::v4(), serverAddress, "6960");
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
		throw boost::system::system_error(error);
	}
	return true;
}

bool TCPProxyTransport::send(const char* buffer) {
	boost::system::error_code error = boost::system::error_code();

	std::string s(buffer);
	memcpy(buffer_, buffer, s.size());
	std::cout << "Origen: " << buffer << std::endl;
	std::cout << "String: " << s << std::endl;
	std::cout << "Destino: " << buffer_ << std::endl;
	size_t bytes_sent = 0;
	bytes_sent = boost::asio::write(*socket_, boost::asio::buffer(buffer_),
			boost::asio::transfer_all(), error);
	if (bytes_sent == 0) {
		std::cout << "Error sending data" << std::endl;
		return false;
	}
	//memset(&buffer_, 0, 8192);
	return true;
}

char* TCPProxyTransport::receive() {
	/*std::cout << "RECIEVE SOME DATA " << std::endl;
	 boost::system::error_code error;
	 while(true){
	 size_t len = socket_->read_some(
	 buffer_,
	 error
	 );
	 if(error == boost::asio::error::eof){
	 break;
	 }else if(error){
	 throw boost::system::system_error(error);
	 }
	 std::cout.write(buffer_, len);
	 }*/
	return buffer_;
	//return NULL;
}
}// namespace transport
}// namespace rpcdds
} // namespace eprosima
