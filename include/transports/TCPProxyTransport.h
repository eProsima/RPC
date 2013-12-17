#ifndef _TRANSPORTS_TCPPROXYTRANSPORT_H_
#define _TRANSPORTS_TCPPROXYTRANSPORT_H_

#include "utils/dds/Middleware.h"
#include "rpcdds_dll.h"
#include "transports/ProxyTransport.h"
#include <string.h>
#include <iostream>

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            class TCPProxyTransportBoost;

			/*!
             * @brief This class represents a TCP transport. It must be used by TCP clients.
             * @ingroup TRANSPORTMODULE
			 */
            class RPCDDS_DllAPI TCPProxyTransport:
                public eprosima::rpcdds::transport::ProxyTransport
            {
                private:
                    std::string serverAddress_;
                    TCPProxyTransportBoost *m_boostInfo;

                public:

                    /*! 
					 * @brief Default constructor.
					 * @param serverAddress Server address.
					 */
                    TCPProxyTransport(const std::string &serverAddress);

                    /*! 
					 * @brief Default constructor.
					 * @param serverAddress Server address.
					 * @param serverAddress Server port.
					 */
                    TCPProxyTransport(const std::string& serverAddress, const std::string& serverPort);

                    //! \brief Default destructor.
                    virtual ~TCPProxyTransport();

                    /*!
                     * @brief This function returns the type of the transport. In this case, it is RAW data.
                     */
                    virtual const char* getType() const {return "RAW";}

					/*!
					 * @brief Starts a TCP connection with a TCP server.
					 * @return true if the operation is successful, false otherwise.
					 */
                    bool connect();

					/*!
					 * @brief Sends an TCP message to the server.
					 * @param buffer Buffer containing the TCP message.
					 * @param bufferSize Size of the buffer.
					 * @return true if the operation is successful, false otherwise.
					 */
                    bool send(const void* buffer, const size_t bufferSize);

					/*!
					 * @brief Receives a TCP message from the server.
					 * @param buffer Buffer that will contain the TCP message.
					 * @param bufferSize Size of the buffer.
					 * @param dataToRead Number of bytes received.
					 * @return -1 if the operation fails.
					 */
                    int receive(void* buffer, const size_t bufferSize, size_t &dataToRead);
            };
        }// namespace transport
    }// namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_TCPPROXYTRANSPORT_H_
