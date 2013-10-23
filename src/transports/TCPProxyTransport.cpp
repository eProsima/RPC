/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/TCPProxyTransport.h"

#include <iostream>
#include "exceptions/ServerNotFoundException.h"

using namespace std;

using namespace eprosima::rpcdds;
using namespace ::transport;

TCPProxyTransport::TCPProxyTransport(const std::string& serverAddress)
{
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
}

TCPProxyTransport::TCPProxyTransport(const std::string& serverAddress, const std::string& serverPort) {
	io_service_ = new boost::asio::io_service();
	resolver_ = new boost::asio::ip::tcp::resolver(*io_service_);
	query_ = new boost::asio::ip::tcp::resolver::query(
			boost::asio::ip::tcp::v4(), serverAddress, serverPort);
	socket_ = new boost::asio::ip::tcp::socket(*io_service_);
	serverAddress_ = serverAddress;
	endpoint_iterator_ = resolver_->resolve(*query_);
}

TCPProxyTransport::~TCPProxyTransport()
{
    if(socket_->is_open())
    {
        socket_->close();
    }
}

bool TCPProxyTransport::connect()
{
    if(!socket_->is_open())
    {
        boost::system::error_code error = boost::asio::error::host_not_found;

        if(endpoint_iterator_ != end_)
        {
            socket_->connect(*endpoint_iterator_, error);
        }

        if (error)
        {
            throw eprosima::rpcdds::exception::ServerNotFoundException("ERROR<TCPProxyTransport::connect>: "+error.message());
        }
    }
	return true;
}

bool TCPProxyTransport::send(const void* buffer, const size_t bufferSize)
{
	boost::system::error_code error = boost::system::error_code();
    const char *buff = (const char*)buffer;

    if(buff != NULL)
    {
        size_t bytes_sent = 0;
        bytes_sent = boost::asio::write(*socket_, boost::asio::buffer(buff, bufferSize),
                boost::asio::transfer_all(), error);
        if (bytes_sent != 0)
        {
            return true;
        }
        else
            std::cout << "Error sending data" << std::endl;

    }
    else
    {
        // TODO print error.
    }

	return false;
}

// dataToRead == 0 -> es bloqueante
// 0 OK
// 1 Connection close
// -1 ERROR
size_t TCPProxyTransport::receive(void *buffer, const size_t bufferSize, size_t &dataToRead)
{
    boost::system::error_code ec = boost::system::error_code();

    if(buffer != NULL && bufferSize > 0)
    {
        // TODO Chequear durante un tiempo hasta que numData sea mayor que cero. Podria ser que la primera llamada solo devolviera 0.
        
        // Check the space in the buffer.
        if(bufferSize < dataToRead)
        {
            dataToRead = 0;
            return -1;
        }

        // TODO check ec.
        if(dataToRead > 0)
        {
            // TODO Chequear durante un tiempo hasta que numData sea mayor que cero. Podria ser que la primera llamada solo devolviera 0.
            dataToRead = boost::asio::read(*socket_, boost::asio::buffer(buffer, dataToRead), ec);
        }
        else
        {
            dataToRead = socket_->read_some(boost::asio::buffer(buffer, bufferSize), ec);
        }

        if(ec != boost::asio::error::eof)
            return 0;
        else
            return 1;
    }

    return -1;
}
