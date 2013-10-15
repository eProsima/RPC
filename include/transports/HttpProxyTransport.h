/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_HTTPPROXYTRANSPORT_H_
#define _TRANSPORTS_HTTPPROXYTRANSPORT_H_

#include "rpcdds_dll.h"
#include "transports/TCPProxyTransport.h"
#include "transports/HttpTransport.h"

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            /*!
             * @brief This interface is the base of all classes that implement a transport
             *        that could be used by a proxy.
             * @ingroup TRANSPORTMODULE
             */
            class RPCDDS_DllAPI HttpProxyTransport : public ProxyTransport, public HttpTransport
            {
                public:

                    //! \brief Default constructor.
                    HttpProxyTransport(const std::string &serverAddress);

                    //! \brief Default destructor.
                    virtual ~HttpProxyTransport();

                    /*!
                     * @brief This function returns the type of the transport.
                     *        This function has to be implemented by the child classes.
                     */
                    virtual const char* getType() const {return "HTTP";}

                    virtual bool connect();
                    virtual bool send(const void* buffer, const size_t bufferSize);
                    virtual size_t receive(char *buffer, const size_t bufferSize);

                private:

                    TCPProxyTransport m_tcptransport;
            };
        }
        // namespace transport
    }// namespace rpcdds
} // namespace eprosima
#endif // _TRANSPORTS_HTTPPROXYTRANSPORT_H_
