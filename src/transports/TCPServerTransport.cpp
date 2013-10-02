#include "transports/TCPServerTransport.h"

#include <iostream>
#include <boost/thread.hpp>
#include <string.h>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/lexical_cast.hpp>

using namespace eprosima::rpcdds;
using namespace ::transport;

void TCPServerTransport::init(const std::string& address,
		const std::string& port) {

	std::string finalAddress = get_ip_address(io_service_, address, port);
	if (finalAddress.empty()) {
		std::cerr << "Could not resolve address " << address << std::endl;
	}

	/*
	 * Server creation
	 */
	bool creationFailed = false;

	boost::asio::ip::tcp::endpoint endpoint(
			boost::asio::ip::address::from_string(finalAddress),
			atoi(port.c_str()));
	try {
		acceptor_.open(endpoint.protocol());
		acceptor_.set_option(
				boost::asio::ip::tcp::acceptor::reuse_address(true));
		acceptor_.bind(endpoint);
		acceptor_.listen();
	} catch (boost::system::system_error e) {
		std::cerr << "Error binding to " << endpoint.address().to_string()
				<< ":" << endpoint.port() << ": " << e.what() << std::endl;
		creationFailed = true;
	}

	//Successful bind
#if defined(TEST)
	std::cout << "Successfuly binded to " << acceptor_.local_endpoint().address().to_string() << ":";
	std::cout << acceptor_.local_endpoint().port() << std::endl;
#endif
	start_accept();
	io_service_.run();
}

TCPServerTransport::TCPServerTransport(const char* to_connect) :
		acceptor_(io_service_) {

	if (to_connect != NULL) {
		std::string str(to_connect);
		size_t index = str.find(':', 1);
		std::string address = str.substr(0, index);
		std::string port = str.substr(index + 2, str.size());
		//TCPServerTransport::TCPServerTransport(address, port);
		init(address, port);
	} else {
		//TCPServerTransport::TCPServerTransport("127.0.0.1", "6960");
		init("127.0.0.1", "6960"); // TODO XXX PORT
	}
}

std::string TCPServerTransport::get_ip_address(
		boost::asio::io_service& io_service, std::string hostname,
		std::string port) {
	boost::asio::ip::tcp::resolver resolver(io_service);
	boost::asio::ip::tcp::resolver::query query(hostname, port);
	boost::asio::ip::tcp::resolver::iterator iterator;
	try {
		iterator = resolver.resolve(query);
	} catch (boost::system::system_error e) {
		std::cerr << "Error resolving " << hostname << ": " << e.what()
				<< std::endl;
		return ("");
	}
	boost::asio::ip::tcp::resolver::iterator end;
	if (iterator == end) {
		return ("");
	}
	return (iterator->endpoint().address().to_string());
}

TCPServerTransport::TCPServerTransport(const std::string& address,
		const std::string& port) : /*io_service_(boost::asio::io_service()),*/
		acceptor_(io_service_) {
	std::string finalAddress = get_ip_address(io_service_, address, port);
	if (finalAddress.empty()) {
		std::cerr << "Could not resolve address " << address << std::endl;
	}

	/*
	 * Server creation
	 */
	bool creationFailed = false;

	boost::asio::ip::tcp::endpoint endpoint(
			boost::asio::ip::address::from_string(finalAddress),
			atoi(port.c_str()));
	try {
		acceptor_.open(endpoint.protocol());
		acceptor_.set_option(
				boost::asio::ip::tcp::acceptor::reuse_address(true));
		acceptor_.bind(endpoint);
		acceptor_.listen();
	} catch (boost::system::system_error e) {
		std::cerr << "Error binding to " << endpoint.address().to_string()
				<< ":" << endpoint.port() << ": " << e.what() << std::endl;
		creationFailed = true;
	}

	//Successful bind
#if defined(TEST)
	std::cout << "Successfuly binded to " << acceptor_.local_endpoint().address().to_string() << ":";
	std::cout << acceptor_.local_endpoint().port() << std::endl;
#endif
	start_accept();
	io_service_.run();
}

void TCPServerTransport::start_accept() {
	//connection::pointer new_connection = connection::create(acceptor_.get_io_service());
	this->new_connection_ = boost::shared_ptr < connection > (new connection());
	new_connection_->master_io_service_ = &io_service_;
	std::cout << "Begin accept" << std::endl;
	acceptor_.async_accept(*new_connection_->socket(),
			new_connection_->endpoint_,
			boost::bind(&TCPServerTransport::handle_accept, this,
					boost::asio::placeholders::error));
}

void TCPServerTransport::run() {
	/*boost::shared_ptr<boost::thread> thread(
	 new boost::thread(boost::bind(&boost::asio::io_service::run, &io_service_))
	 );
	 thread->start_thread();*/
}

void TCPServerTransport::stop() {
	io_service_.stop();
}

void TCPServerTransport::handle_accept(const boost::system::error_code& e) {
	if (e) {
		std::cerr << "Acceptor failed: " << e.message() << std::endl;
		return;
	}
#if defined(TEST)
	std::cout << "Accepted connection from " << new_connection_->endpoint_.address() << std::endl;
#endif
	//new_connection->io_service_ = io_service_;

	/*
	 *
	 * Thread creation
	 *
	 */
    getStrategy().schedule(&TCPServerTransport::worker, *this, (void*)&new_connection_);

	new_connection_ = boost::shared_ptr < connection > (new connection());
	new_connection_->master_io_service_ = &io_service_;
	acceptor_.async_accept(*new_connection_->socket_,
			new_connection_->endpoint_,
			boost::bind(&TCPServerTransport::handle_accept, this,
					boost::asio::placeholders::error));

	//new_connection->start();
	//start_accept();
	/*ceptor_.async_accept(
	 new_connection_->socket(),
	 boost::bind(&TCPServerTransport::handle_accept, this, boost::asio::placeholders::error)
	 );*/
}

void TCPServerTransport::worker(ServerTransport &transport, void* connection)
{
	callback(getLinkedProtocol(), transport, connection);

	/*
	boost::shared_ptr<eprosima::rpcdds::transport::connection> conn = *(boost::shared_ptr<
			eprosima::rpcdds::transport::connection>*) (connection);
    boost::system::error_code ec;
	boost::asio::ip::tcp::socket &socket = *(conn->socket_);
	boost::asio::socket_base::non_blocking_io make_non_blocking(true);
	socket.io_control(make_non_blocking);

	std::cout << "Thread #" << boost::this_thread::get_id() << std::endl;

    // TODO : El tamaño esta fijo estáticamente. Habrá que investigarlo.
	char buffer_[8192];

    // TODO : Comprobar return.
	boost::asio::read(socket, boost::asio::buffer(buffer_), ec);

    // TODO : Call the protocol

	socket.get_io_service().run();
	*/

}
