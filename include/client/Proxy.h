/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _PROXY_PROXY_H_
#define _PROXY_PROXY_H_

#include "rpcdds_dll.h"
#include "utils/Messages.h"

#include <string>

namespace eprosima
{
    namespace rpcdds
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
            class AsyncThread;
            class AsyncTask;

            /*!
             * @brief This class implements the common functionalities that all server's proxies have.
             * @ingroup PROXYMODULE
             */
            class RPCDDS_DllAPI Proxy
            {
                public:

                    /*!
                     * @brief This function adds a asynchronous task to the asynchronous thread.
                     *
                     * @param query The DDS query condition that is used to take the request. Cannot be NULL.
                     * @param task The asynchronos task created and associated with a request. Cannot be NULL.
                     * @param timeout The timeout used for this request.
                     * @return 0 value is returned if function works successfully. In other case -1 is returned.
                     */
                    //int addAsyncTask(DDS::QueryCondition *query, AsyncTask *task, long timeout);

                    /*!
                     * @brief This function deletes all asynchronous tasks associated with the RPC endpoint.
                     *
                     * @param rpc Pointer to the RPC endpoint. Cannot be NULL.
                     */
                    //void deleteAssociatedAsyncTasks(ClientRPC *rpc);

                    /*!
                     * @brief This function gets the timeout used when a request is sent.
                     *
                     * @return The time out used by the server proxy. It is in milliseconds.
                     */
                    long getTimeout() const;

                    /*!
                     * @brief This function sets te timeout that the server's proxy will use in each request.
                     *
                     * @para milliseconds The timeout in milliseconds.
                     */
                    void setTimeout(long milliseconds);

                    /*!
                     * @brief This function returns the name of the remote service that this proxy is offering.
                     *
                     * @return The service's name of 
                     */
                    const std::string& getRemoteServiceName() const;

                protected:

                    /*!
                     * @brief A constructor. The associated domain participant is created.
                     *
                     * @param remoteServiceName The service's name that the remote server uses and the proxy will use to connect with it. 
                     * @param transport The transport that will be use the server's proxy. This class doesn't delete this object in its destructor.
                     * @param protocol The protocol used to send the information over the transport. This class doesn't delete this object in its destructor.
                     * @param milliseconds Timout in milliseconds for all requests.
                     * @exception InitializeException This exception is thrown when the initialization was wrong.
                     */
                    Proxy(std::string remoteServiceName, eprosima::rpcdds::transport::ProxyTransport *transport,
                            eprosima::rpcdds::protocol::Protocol *protocol, long milliseconds = 10000);

                    //! @brief The default destructor.
                    virtual ~Proxy();

                private:

                    //! @brief Thread object that manages asynchronous repliess from servers.
                    AsyncThread *m_asyncThread;

                    //! @brief Timeout used in each remote procedure call. It value is in milliseconds.
                    long m_timeout;

                    //! @brief Pointer to the transport which this server's proxy uses.
                    eprosima::rpcdds::transport::ProxyTransport *m_transport;

                    //! @brief Pointer to the protocol which this server's proxy uses.
                    eprosima::rpcdds::protocol::Protocol *m_protocol;

                    //! @brief The name of the remote service that the proxy will offer.
                    std::string m_remoteServiceName;
            };
        } // namespace proxy
    } // namespace rpcdds
} // namespace eprosima

#endif // _PROXY_PROXY_H_
