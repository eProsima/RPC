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

            class RPCDDS_DllAPI TCPProxyTransport:
                public eprosima::rpcdds::transport::ProxyTransport
            {
                private:
                    std::string serverAddress_;
                    TCPProxyTransportBoost *m_boostInfo;

                public:

                    TCPProxyTransport(const std::string &serverAddress);

                    TCPProxyTransport(const std::string& serverAddress, const std::string& serverPort);

                    virtual ~TCPProxyTransport();

                    virtual const char* getType() const {return "RAW";}

                    bool connect();

                    bool send(const void* buffer, const size_t bufferSize);

                    int receive(void* buffer, const size_t bufferSize, size_t &dataToRead);
            };
        }// namespace transport
    }// namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_TCPPROXYTRANSPORT_H_
