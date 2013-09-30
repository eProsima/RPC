/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_SERVERTRANSPORT_H_
#define _TRANSPORTS_DDS_SERVERTRANSPORT_H_

#include "rpcdds_dll.h"
#include "transports/dds/Transport.h"
#include "transports/ServerTransport.h"
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
                class ServerProcedureEndpoint;

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
                         * @param name The name associated with this proxy procedure endpoint. Cannot be NULL:
                         * @param writertypename The type name of the topic that the procedure endpoint uses in the datawriter. Cannot be NULL.
                         * @param readertypename The type name of the topic that the procedure endpoint uses in the datareader. Cannot be NULL:
                         * @param copy_data Pointer to the function used to copy data when it is received.
                         * @return 0 value is returned if the function works successfully. In other case -1 is returned.
                         */
                        int createProcedureEndpoint(const char *name, const char *writertypename, const char *readertypename,
                                Transport::Initialize_data initialize_data, Transport::Copy_data copy_data,
                                Transport::Finalize_data finalize_data, Transport::ProcessFunc processFunc, int dataSize);

                        /*!
                         * 2brief This function returns the behaviour of the transport.
                         * @return The behaviour of the transport.
                         */
                        TransportBehaviour getBehaviour() const;

                        static void process(eprosima::rpcdds::transport::ServerTransport &transport, void *data);

                        virtual void run();

                        virtual void stop();

                        void sendReply(void *data, Endpoint *endpoint);

                    protected:

                        virtual int setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant) = 0;

                        /*!
                         * @brief Default constructor.
                         * @param domainId Optional parameter that specifies the domain identifier will be used in DDS.
                         */
                        ServerTransport(std::string &serviceName, int domainId = 0);

                    private:

                        /*!
                         * @brief Map containing the proxy procedure endpoints that were created to communicate.
                         * The key of the map is the pointer where the name is allocated instead the name.
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
