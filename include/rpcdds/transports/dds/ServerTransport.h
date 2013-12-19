/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_SERVERTRANSPORT_H_
#define _TRANSPORTS_DDS_SERVERTRANSPORT_H_

#include "rpcdds/rpcdds_dll.h"
#include "rpcdds/transports/dds/Transport.h"
#include "rpcdds/transports/ServerTransport.h"
#include "rpcdds/utils/dds/Middleware.h"

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
                class ServerProcedureEndpoint;

				/*!
                 * @brief This class is the base of all classes that implement a transport
                 * using DDS. This transport can be used by the servers.
                 * @ingroup TRANSPORTMODULE
                 */
                class RPCDDS_DllAPI ServerTransport : public eprosima::rpcdds::transport::ServerTransport, public Transport
                {
                    public:

                        /*!
                         * @brief Default destructor.
                         */
                        virtual ~ServerTransport();

                        /*!
                         * @brief This function returns the type of the transport.
                         *        This function has to be implemented by the child classes.
                         */
                        virtual const char* getType() const;

                        /*!
                         * @brief This function creates a new proxy procedure endpoint.
                         * This proxy procedure endpoint manages the DDS datawriter and the DDS datareader.
                         *
                         * @param name The name associated with this proxy procedure endpoint. It cannot be NULL.
                         * @param writertypename The type name of the topic that the procedure endpoint uses in the datawriter. It cannot be NULL.
                         * @param readertypename The type name of the topic that the procedure endpoint uses in the datareader. It cannot be NULL.
                         * @param copy_data Pointer to the function used to copy the data when it is received.
                         * @return 0 if the function successfully works, -1 in other case
                         */
                        eprosima::rpcdds::transport::Endpoint*
                            createProcedureEndpoint(const char *name, const char *writertypename, const char *readertypename,
                                Transport::Initialize_data initialize_data, Transport::Copy_data copy_data,
                                Transport::Finalize_data finalize_data, Transport::ProcessFunc processFunc, int dataSize);

								
						/*!
						 * @brief This method is invoked once for each incoming request.
						 *
						 * @param data The request data.
						 * @param endpoint The request endpoint.
						 */
                        void process(ServerProcedureEndpoint *endpoint, void *data);

						/*!
						 * @brief This method starts all the DDS Datawriters and Datareaders.
						 */
                        void run();

						/*!
						 * @brief This function does not apply to DDS transport.
						 */
                        void stop();

						/*!
						 * @brief This function is used to send a reply to a proxy.
						 * @param data Data to send.
						 * @param dataLength Length of the data to send.
						 * @param endpoint Endpoint meant to send the data.
						 */
                        void sendReply(void *data, size_t dataLength, Endpoint *endpoint);

						/*!
						 * @brief This function does not apply to DDS transport.
						 */
                        int receive(char *buffer, size_t bufferLength, size_t &dataToRead, Endpoint *endpoint); 

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
                         * @param domainId Optional parameter that specifies the domain identifier that will be used in DDS.
                         */
                        ServerTransport(std::string &serviceName, int domainId = 0);

                    private:

                        /*!
                         * @brief Map containing the proxy's procedure endpoints that were created to communicate.
                         * The map key is the pointer where the name is allocated, not the name itself.
                         * Then always the same string in memory has to be used and not a copy.
                         */
                        std::map<const char*, ServerProcedureEndpoint*> m_procedureEndpoints;

                        std::string m_serviceName;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_DDS_SERVERTRANSPORT_H_
