/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "transports/TCPServerTransport.h"
#include "transports/components/TCPEndpoint.h"
#include "strategies/ServerStrategy.h"

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
}

TCPServerTransport::TCPServerTransport(const std::string &to_connect) : work_(io_service_),
    acceptor_(io_service_), thread_(NULL)
{
    size_t index = to_connect.find(':', 1);
    std::string address = to_connect.substr(0, index);
    std::string port = to_connect.substr(index + 1, to_connect.size());
    init(address, port);
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

void TCPServerTransport::start_accept()
{
    TCPEndpoint* new_endpoint = new TCPEndpoint();
    new_endpoint->master_io_service_ = &io_service_;
    std::cout << "Begin accept" << std::endl;
    acceptor_.async_accept(*new_endpoint->socket_,
            boost::bind(&TCPServerTransport::handle_accept, this, new_endpoint,
                boost::asio::placeholders::error));
}

void TCPServerTransport::run()
{
    thread_ = new boost::thread(boost::bind(&boost::asio::io_service::run, &io_service_));
}

void TCPServerTransport::stop()
{
    io_service_.stop();
}

void TCPServerTransport::handle_accept(TCPEndpoint* connection, const boost::system::error_code& e)
{
    if (e) {
        std::cerr << "Acceptor failed: " << e.message() << std::endl;
        return;
    }
#if defined(TEST)
    std::cout << "Accepted connection from " << connection->endpoint_.address() << std::endl;
#endif

    // If this transport is subordinated.
    if(!onBossProcess.empty())
    {
        onBossProcess(connection);
    }
    // Else
    else
    {
        getStrategy().schedule(boost::bind(&TCPServerTransport::worker, this, connection));
    }

    start_accept();
}

void TCPServerTransport::worker(TCPEndpoint* connection)
{
    // TODO check pointer connection.
    boost::system::error_code ec = boost::system::error_code();
    //boost::asio::socket_base::non_blocking_io make_non_blocking(true);
    //socket.io_control(make_non_blocking);

    std::cout << "Thread #" << boost::this_thread::get_id() << std::endl;

    // TODO TIME OUT
    size_t numData = 0;
    while(!ec && (numData = connection->socket_->available(ec)) == 0);

    if(ec == boost::asio::error::eof)
    { 
        std::cout << "Connection closed by proxy" << std::endl;
        return;
    }

    std::cout << "Datos para leer = " << numData << std::endl;

    // TODO Chequear durante un tiempo hasta que numData sea mayor que cero. Podria ser que la primera llamada solo devolviera 0.

    if(numData > 0)
    {
        char *buffer = (char*)calloc(numData, 1);

        if(buffer != NULL)
        {
            size_t bytes_read = boost::asio::read(*connection->socket_, boost::asio::buffer(buffer, numData), ec);

            if(numData == bytes_read)
            {
                getCallback()(getLinkedProtocol(), buffer, numData, connection);
            }
            else
            {
                // TODO check ec == boost::asio::error::eof.
                // TODO print error.
            }

            free(buffer);
        }
        else
        {
            // TODO print exception NULL.
        }
    }
    else
    {
        // TODO Print exception ec.
    }

    // TODO Quitar dependiendo keep-alive.
    connection->socket_->close();
}

void TCPServerTransport::sendReply(void *data, size_t dataLength, Endpoint *connection)
{
    TCPEndpoint *con = dynamic_cast<TCPEndpoint*>(connection);
    boost::system::error_code ec = boost::system::error_code();

    if(con != NULL)
    {
        size_t bytes_sent = boost::asio::write(*con->socket_, boost::asio::buffer(data, dataLength), boost::asio::transfer_all(), ec);

        if(bytes_sent == 0)
        {
            // TODO print error.
        }
    }
    else
    {
        // TODO Print error.
    }
}

// 0 OK
// -1 ERROR
// -2 Readed but not all
// >0 bytes needed in the buffer to read.
int TCPServerTransport::receive(char *buffer, size_t bufferLength, size_t &dataToRead, Endpoint *endpoint)
{
    boost::system::error_code ec = boost::system::error_code();
    size_t _dataToRead = dataToRead;

    if(buffer != NULL && bufferLength > 0 && endpoint != NULL)
    {
        TCPEndpoint* connection = dynamic_cast<TCPEndpoint*>(endpoint);

        if(connection != NULL)
        {
            std::cout << "Thread #" << boost::this_thread::get_id() << std::endl;

            if(_dataToRead == 0)
            {
                while(!ec && (_dataToRead = connection->socket_->available(ec)) == 0);

                if(ec == boost::asio::error::eof)
                { 
                    std::cout << "Connection closed by proxy" << std::endl;
                    return -1;
                }
            }

            std::cout << "Datos para leer = " << _dataToRead << std::endl;

            // TODO Chequear durante un tiempo hasta que numData sea mayor que cero. Podria ser que la primera llamada solo devolviera 0.

            if(_dataToRead > 0)
            {
                // Check the space in the buffer.
                if(bufferLength < _dataToRead)
                {
                    dataToRead = 0;
                    return _dataToRead - bufferLength;
                }

                size_t bytes_read = boost::asio::read(*connection->socket_, boost::asio::buffer(buffer, _dataToRead), ec);

                if(dataToRead > 0 && _dataToRead != bytes_read)
                {
                    dataToRead = bytes_read;
                    return -2;
                }
                else
                {
                    dataToRead = bytes_read;
                    printf("%s\n", buffer);
                    return 0;
                }
            }
            else
            {
                // TODO Print exception ec.
            }
        }
        else
        {
            // TODO print error.
        }
    }
    else
    {
        // TODO Print error: bad parameters
    }
    return -1;
}
