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
        socket_->close();
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

// 0 OK
// -1 ERROR
// -2 Readed but not all
// -3 Connection close
// >0 bytes needed in the buffer to read.
size_t TCPProxyTransport::receive(void *buffer, const size_t bufferSize, size_t &dataToRead)
{
    boost::system::error_code ec = boost::system::error_code();
    size_t _dataToRead = dataToRead;

    if(buffer != NULL && bufferSize > 0)
    {
        if(_dataToRead == 0)
        {
            while(!ec && (_dataToRead = socket_->available(ec)) == 0);

            if(ec == boost::asio::error::eof)
            { 
                std::cout << "Connection closed by proxy" << std::endl;
                return -3;
            }
        }

        std::cout << "Datos para leer = " << _dataToRead << std::endl;

        // TODO Chequear durante un tiempo hasta que numData sea mayor que cero. Podria ser que la primera llamada solo devolviera 0.

        if(_dataToRead > 0)
        {
            // Check the space in the buffer.
            if(bufferSize < _dataToRead)
            {
                dataToRead = 0;
                return _dataToRead - bufferSize;
            }

            // TODO check ec.
            size_t bytes_read = boost::asio::read(*socket_, boost::asio::buffer(buffer, _dataToRead), ec);

            if(dataToRead > 0 && _dataToRead != bytes_read)
            {
                dataToRead = bytes_read;
                return -2;
            }
            else
            {
                dataToRead = bytes_read;
                printf("%s\n", (char*)buffer);
                return 0;
            }
        }
        else
        {
            // TODO Print exception ec.
        }
    }

    return -1;
}
