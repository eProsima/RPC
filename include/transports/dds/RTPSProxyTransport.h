/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_RTPSPROXYTRANSPORT_H_
#define _TRANSPORTS_DDS_RTPSPROXYTRANSPORT_H_

#include "../../rpc_dll.h"

#if RPC_WITH_FASTRTPS

#include "RTPSTransport.h"
#include "../ProxyTransport.h"
#include "../../utils/Messages.h"

#include <string>
#include <map>

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            namespace dds
            {
                class DDSAsyncTask;
                class AsyncThread;
                class RTPSProxyProcedureEndpoint;

                /*!
                 * @brief This class is the base of all proxies that implement a DDS transport
                 * using only the RTPS level provided by FastRTPS library.
                 * @ingroup TRANSPORTMODULE
                 */
                class RTPSProxyTransport : public ProxyTransport, public RTPSTransport
                {
                    public:

                        /*!
                         * @brief Default constructor.
						 * @param remoteServiceName Name of the remote service. If value is not assigned or NULL pointer is used,
                         * the default service's name will be use.
						 * @param instanceName Instance's name of the remote service. If value is not assigned or NULL pointer is used,
                         * the default instance's name will be use.
                         * @param domainId Optional parameter that specifies the domain identifier will be used in DDS.
                         */
                        RPC_DllAPI RTPSProxyTransport(const char* const remoteServiceName = NULL, const char* const instanceName = NULL, int domainId = 0, long milliseconds = 10000L);

                        /*!
                         * @brief Default destructor.
                         */
                        virtual RPC_DllAPI ~RTPSProxyTransport();

                        /*!
                         * @brief This abstract function returns the type of the transport.
                         *        This function has to be implemented by the child classes.
                         */
                        virtual RPC_DllAPI const char* getType() const;

						/*!
                         * @brief This function returns the DDS service name.
						 * @return DDS service name.
                         */
                        RPC_DllAPI const char* getRemoteServiceName() const;

                        RPC_DllAPI const char* getInstanceName() const;

						/*!
                         * @brief This function gets the timeout value.
						 * @return Timeout value.
                         */
                        RPC_DllAPI long getTimeout();

                        /*! TODO Actualizar
                         * @brief This function creates a new proxy procedure endpoint.
                         * This proxy procedure endpoint manages the DDS datawriter and the DDS datareader.
                         *
                         * @param name The name associated with this proxy procedure endpoint. It cannot be NULL.
                         * @param writertypename The type name of the topic that the procedure endpoint uses in the datawriter. It cannot be NULL.
                         * @param writertopicname The name of the topic that the procedure endpoint uses in the datawriter. It cannot be NULL.
                         * @param readertypename The type name of the topic that the procedure endpoint uses in the datareader. It cannot be NULL.
                         * @param readertopicname The name of the topic that the procedure endpoint uses in the datareader. It cannot be NULL.
						 * @param initialize_data Pointer to the function to initialize DataReader received data
						 * @param finalize_data Pointer to the function to finalize DataReader received data
						 * @param ProcessFunc Pointer to the function invoked when a message is received from the server
						 * @param dataSize Size of the DataReader data structure
                         * @return 0 if the function works. -1 in other case.
                         * TODO
                         */
                        RPC_DllAPI eprosima::rpc::transport::Endpoint*
                            createProcedureEndpoint(const char *name, const char *writertypename,
                                    const char *writertopicname, const char *readertypename, const char *readertopicname,
                                    RTPSTransport::Create_data create_data, RTPSTransport::Copy_data copy_data, RTPSTransport::Destroy_data destroy_data,
                                    RTPSTransport::ProcessFunc processFunc, int dataSize);

                    private:

                        //TODO TEMPORAL
                        bool connect(){return false;}
                        bool send(const void* /*buffer*/, const size_t /*bufferSize*/){return false;}
                        int receive(void* /*buffer*/, const size_t /*bufferSize*/, size_t &/*dataToRead*/){return -1;}

                        /*!
                         * @brief Map containing the proxy's procedure endpoints that were created to communicate.
                         * The map key is the pointer where the name is allocated, not the name itself.
                         * Then always the same string in memory has to be used and not a copy.
                         */
                        std::map<const char*, RTPSProxyProcedureEndpoint*> m_procedureEndpoints;

                        std::string m_remoteServiceName;

                        std::string m_instanceName;

                        long m_timeout;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpc
} // namespace eprosima

#endif // RPC_WITH_FASTRTPS

#endif // _TRANSPORTS_DDS_RTPSPROXYTRANSPORT_H_
