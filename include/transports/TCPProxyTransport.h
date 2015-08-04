#ifndef _TRANSPORTS_TCPPROXYTRANSPORT_H_
#define _TRANSPORTS_TCPPROXYTRANSPORT_H_

#include "../rpc_dll.h"
#include "ProxyTransport.h"

#include <string>
#include <iostream>

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            class TCPProxyTransportBoost;

			/*!
             * @brief This class represents a TCP transport. It must be used by TCP clients.
             * @ingroup TRANSPORTMODULE
             */
            class TCPProxyTransport:
                public eprosima::rpc::transport::ProxyTransport
            {
                private:
                    std::string serverAddress_;
                    TCPProxyTransportBoost *m_boostInfo;

                public:

                    /*! 
					 * @brief Default constructor.
					 * @param serverAddress Server address.
					 */
                    RPC_DllAPI TCPProxyTransport(const char* const &serverAddress);

                    /*! 
					 * @brief Default constructor.
					 * @param serverAddress Server address.
					 * @param serverAddress Server port.
					 */
                    RPC_DllAPI TCPProxyTransport(const char* const &, const char* const &serverPort);

                    //! \brief Default destructor.
                    virtual RPC_DllAPI ~TCPProxyTransport();

                    /*!
                     * @brief This function returns the type of the transport. In this case, it is RAW data.
                     */
                    RPC_DllAPI const char* getType() const {return "RAW";}

					/*!
					 * @brief Starts a TCP connection with a TCP server.
					 * @return true if the operation is successful, false otherwise.
					 */
                    RPC_DllAPI bool connect();

					/*!
					 * @brief Sends an TCP message to the server.
					 * @param buffer Buffer containing the TCP message.
					 * @param bufferSize Size of the buffer.
					 * @return true if the operation is successful, false otherwise.
					 */
                    RPC_DllAPI bool send(const void* buffer, const size_t bufferSize);

					/*!
					 * @brief Receives a TCP message from the server.
					 * @param buffer Buffer that will contain the TCP message.
					 * @param bufferSize Size of the buffer.
					 * @param dataToRead Number of bytes received.
					 * @return -1 if the operation fails.
					 */
                    RPC_DllAPI int receive(void* buffer, const size_t bufferSize, size_t &dataToRead);
            };
        }// namespace transport
    }// namespace rpc
} // namespace eprosima

#endif // _TRANSPORTS_TCPPROXYTRANSPORT_H_
