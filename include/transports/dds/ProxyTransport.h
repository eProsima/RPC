/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_PROXYTRANSPORT_H_
#define _TRANSPORTS_DDS_PROXYTRANSPORT_H_

#include "rpcdds_dll.h"
#include "transports/dds/Transport.h"
#include "transports/ProxyTransport.h"
#include "utils/Messages.h"
#include "utils/dds/Middleware.h"

#include <string>
#include <map>

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            namespace dds
            {
                class ProxyProcedureEndpoint;

                /*!
                 * @brief This class is the base of all proxies that implement a transport
                 * using DDS.
                 * @ingroup TRANSPORTMODULE
                 */
                class RPCDDS_DllAPI ProxyTransport : public eprosima::rpcdds::transport::ProxyTransport, public Transport
                {
                    public:

                        /*!
                         * @brief Default destructor.
                         */
                        virtual ~ProxyTransport();

                        /*!
                         * @brief This abstract function returns the type of the transport.
                         *        This function has to be implemented by the child classes.
                         */
                        virtual const char* getType() const;

						/*!
                         * @brief This function returns the DDS service name
						 * @return DDS service name
                         */
                        std::string& getRemoteServiceName();

						/*!
                         * @brief This function gets the timeout value
						 * @return Timeout value
                         */
                        long getTimeout();

                        /*!
                         * @brief This function creates a new proxy procedure endpoint.
                         * This proxy procedure endpoint manages the DDS datawriter and the DDS datareader.
                         *
                         * @param name The name associated with this proxy procedure endpoint. Cannot be NULL.
                         * @param writertypename The type name of the topic that the procedure endpoint uses in the datawriter. Cannot be NULL.
                         * @param readertypename The type name of the topic that the procedure endpoint uses in the datareader. Cannot be NULL.
                         * @param copy_data Pointer to the function used to copy data when it is received.
                         * @return 0 if the function works. -1 in other case.
                         */
                        eprosima::rpcdds::transport::Endpoint*
                            createProcedureEndpoint(const char *name, const char *writertypename, const char *readertypename,
                                Transport::Initialize_data initialize_data, Transport::Copy_data copy_data,
                                Transport::Finalize_data finalize_data, Transport::ProcessFunc processFunc, int dataSize);

						/*!
                         * @brief This function sends a synchronous RPC call.
                         * It sends the request to the server and waits for the reply.
                         * Wait mechanism is implemented with a DDS WaitSet.
                         *
                         * @param request Pointer to the allocated request. Cannot be NULL.
                         * @param reply Pointer to the allocated reply. This memory will be filled with the incoming data.
                         *        The pointer can be NULL and this means that the RPC call is oneway.
                         * @throw eprosima::rpcdds::exception::ServerTimeoutException
                         */
                        eprosima::rpcdds::ReturnMessage send(void *request, void* reply);

                    protected:

						/*!
                         * @brief This abstract function sets the QoS of DDS to use a specific transport.
                         *
                         * @param participantQos Reference to the DDS domain participant QoS.
                         * @param participant The domain participant that will be set to use a specific transport.
                         */
                        virtual int setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant) = 0;

                        /*!
                         * @brief Default constructor.
                         * @param domainId Optional parameter that specifies the domain identifier will be used in DDS.
                         */
                        ProxyTransport(std::string &remoteServiceName, int domainId = 0, long milliseconds = 10000L);

                    private:

                        //TODO TEMPORAL
                        bool connect(){return false;}
                        bool send(const void* buffer, const size_t bufferSize){return false;}
                        int receive(void *buffer, const size_t bufferSize, size_t &dataToRead){return -1;}

                        /*!
                         * @brief Map containing the proxy procedure endpoints that were created to communicate.
                         * The key of the map is the pointer where the name is allocated instead the name.
                         * Then always the same string in memory has to be used and not a copy.
                         */
                        std::map<const char*, ProxyProcedureEndpoint*> m_procedureEndpoints;

                        std::string m_remoteServiceName;

                        long m_timeout;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_DDS_PROXYTRANSPORT_H_
