#ifndef TCP_SERVER_TRANSPORT_SERVERTRANSPORT
#define TCP_SERVER_TRANSPORT_SERVERTRANSPORT

#include "transports/ServerTransport.h"
#include "transports/connection.h"
#include "rpcdds_dll.h"

#include <boost/asio.hpp>
#include <string>
#include <iostream>

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class RPCDDS_DllAPI TCPServerTransport : public ServerTransport, private boost::noncopyable
            {
                private:
			void (*callback)(ServerTransport&, void*);

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

		static void worker(ServerTransport &transport, void* connection);

                    TCPServerTransport(const char* to_connect);

                    void run();

                    void stop();

                    const char* getType() {return "RAW";}

			void setCallback(void (*callback)(ServerTransport&, void*)) {this->callback = callback; }

            };

        }
        // namespace transport
    }// namespace rpcdds
} // namespace eprosima

#endif //TCP_SERVER_TRANSPORT_SERVERTRANSPORT
