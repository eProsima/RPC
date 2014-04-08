/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _PROXY_PROXY_H_
#define _PROXY_PROXY_H_

#include "fastrpc/fastrpc_dll.h"
#include "fastrpc/utils/Messages.h"

#include <string>

namespace eprosima
{
    namespace fastrpc
    {
        namespace transport
        {
            class ProxyTransport;
        }

        namespace protocol
        {
            class Protocol;
        }

        namespace proxy
        {
            /*!
             * @brief This class implements the common functionalities that all server's proxies have.
             * @ingroup PROXYMODULE
             */
            class FASTRPC_DllAPI Proxy
            {
                protected:

                    /*!
                     * @brief Proxy constructor.
                     *
                     * @param transport The transport that will be used by the server's proxy. This class doesn't delete this object in its destructor.
                     * @param protocol The protocol used to send information over the transport. This class doesn't delete this object in its destructor.
                     * @exception InitializeException This exception is thrown when the initialization went wrong.
                     */
                    Proxy(eprosima::fastrpc::transport::ProxyTransport &transport,
                            eprosima::fastrpc::protocol::Protocol &protocol);

                    //! @brief The default destructor.
                    virtual ~Proxy();
                    
					/*!
					 * @brief Method to obtain the protocol
					 * 
					 * @return The protocol used to send information over the transport
					 */
                    inline
                        eprosima::fastrpc::protocol::Protocol& getProtocol() const
                        {
                            return m_protocol;
                        }
						
					/*!
					 * @brief Method to get the transport
					 * 
					 * @return The transport used used by the proxy
					 */
                    inline
                        eprosima::fastrpc::transport::ProxyTransport& getTransport() const
                        {
                            return m_transport;
                        }

                private:

                    //! @brief Pointer to the transport that this server proxy uses.
                    eprosima::fastrpc::transport::ProxyTransport &m_transport;

                    //! @brief Pointer to the protocol that this server proxy uses.
                    eprosima::fastrpc::protocol::Protocol &m_protocol;
            };
        } // namespace proxy
    } // namespace fastrpc
} // namespace eprosima

#endif // _PROXY_PROXY_H_
