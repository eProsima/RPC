/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "fastrpc/transports/TCPServerTransport.h"
#include "fastrpc/transports/TCPServerTransportImpl.h"
#include "fastrpc/transports/components/TCPEndpoint.h"
#include "fastrpc/strategies/ServerStrategy.h"
#include "fastrpc/strategies/ServerStrategyImpl.h"

#include <iostream>
#include <string.h>
#include <boost/thread.hpp>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/lexical_cast.hpp>

namespace eprosima { namespace fastrpc { namespace transport {
    class TCPServerTransportBoost
    {
        public:

            TCPServerTransportBoost() : io_service_(NULL),
            work_(NULL), acceptor_(NULL)
            {
                io_service_ = new boost::asio::io_service();
                work_ = new boost::asio::io_service::work(*io_service_);
                acceptor_ = new boost::asio::ip::tcp::acceptor(*io_service_);
            }

            ~TCPServerTransportBoost()
            {
                delete acceptor_;
                delete work_;
                delete io_service_;
            }

            boost::asio::io_service *io_service_;
            boost::asio::io_service::work *work_;
            boost::asio::ip::tcp::acceptor *acceptor_;
    };
}}}

using namespace eprosima::fastrpc;
using namespace ::transport;

void TCPServerTransport::init(const std::string& address,
        const std::string& port)
{

    std::string finalAddress = get_ip_address(*m_boostInfo->io_service_, address, port);
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
    try
    {
        m_boostInfo->acceptor_->open(endpoint.protocol());
        m_boostInfo->acceptor_->set_option(boost::asio::ip::tcp::acceptor::reuse_address(true));
        m_boostInfo->acceptor_->bind(endpoint);
        m_boostInfo->acceptor_->listen();
    } catch (boost::system::system_error e)
    {
        std::cerr << "Error binding to " << endpoint.address().to_string()
            << ":" << endpoint.port() << ": " << e.what() << std::endl;
        creationFailed = true;
    }

    //Successful bind
#if defined(TEST)
    std::cout << "Successfuly binded to " << m_boostInfo->acceptor_->local_endpoint().address().to_string() << ":";
    std::cout << m_boostInfo->acceptor_->local_endpoint().port() << std::endl;
#endif
    start_accept();
}

TCPServerTransport::TCPServerTransport(const std::string &to_connect) : m_boostInfo(NULL),
    thread_(NULL)
{
    size_t index = to_connect.find(':', 1);
    std::string address = to_connect.substr(0, index);
    std::string port = to_connect.substr(index + 1, to_connect.size());
    m_boostInfo = new TCPServerTransportBoost();
    onBossProcess = new BossProcess();
    init(address, port);
}

TCPServerTransport::~TCPServerTransport()
{
    if(m_boostInfo != NULL)
        delete m_boostInfo;
    if(onBossProcess != NULL)
        delete onBossProcess;
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
    new_endpoint->master_io_service_ = m_boostInfo->io_service_;
    std::cout << "Begin accept" << std::endl;
    m_boostInfo->acceptor_->async_accept(*new_endpoint->socket_,
            boost::bind(&TCPServerTransport::handle_accept, this, new_endpoint,
                boost::asio::placeholders::error));
}

void TCPServerTransport::run()
{
    thread_ = new boost::thread(boost::bind(&boost::asio::io_service::run, m_boostInfo->io_service_));
}

void TCPServerTransport::stop()
{
    m_boostInfo->io_service_->stop();
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
    if(!onBossProcess->function.empty())
    {
        onBossProcess->function(connection);
    }
    // Else
    else
    {
        getStrategy().getImpl()->schedule(boost::bind(&TCPServerTransport::worker, this, connection));
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

    do
    {
        // TODO TIME OUT
        size_t numData = 0;
        while(!ec && (numData = connection->socket_->available(ec)) == 0);

        if(ec != boost::asio::error::eof)
        { 

            // TODO Chequear durante un tiempo hasta que numData sea mayor que cero. Podria ser que la primera llamada solo devolviera 0.

            if(numData > 0)
            {
                void *buffer = calloc(numData, sizeof(char));

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
        }
    } while(ec != boost::asio::error::eof);

    std::cout << "Connection closed by proxy" << std::endl;
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

// dataToRead == 0 -> es bloqueante
// 0 OK
// 1 Connection close
// -1 ERROR
int TCPServerTransport::receive(char *buffer, size_t bufferLength, size_t &dataToRead, Endpoint *endpoint)
{
    boost::system::error_code ec = boost::system::error_code();

    if(buffer != NULL && bufferLength > 0 && endpoint != NULL)
    {
        TCPEndpoint* connection = dynamic_cast<TCPEndpoint*>(endpoint);

        if(connection != NULL)
        {
            // Check the space in the buffer.
            if(bufferLength < dataToRead)
            {
                dataToRead = 0;
                return -1;
            }

            // TODO check ec.

            if(dataToRead > 0)
            {
                // TODO Chequear durante un tiempo hasta que numData sea mayor que cero. Podria ser que la primera llamada solo devolviera 0.
                dataToRead = boost::asio::read(*connection->socket_, boost::asio::buffer(buffer, dataToRead), ec);
            }
            else
            {
                dataToRead = connection->socket_->read_some(boost::asio::buffer(buffer, bufferLength), ec);
            }

            if(ec != boost::asio::error::eof)
                return 0;
            else
                return 1;
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
