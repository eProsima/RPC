/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_TRANSPORT_H_
#define _TRANSPORTS_DDS_TRANSPORT_H_

#include "rpcdds_dll.h"
#include "utils/dds/Middleware.h"

#include <map>

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            namespace dds
            {
                /*!
                 * @brief This enumeration specifies the behaviour
                 * of the transport
                 */
                typedef enum TransportBehaviour
                {
                    PROXY_BEHAVIOUR,
                    SERVER_BEHAVIOUR
                } TransportBehaviour;
                /*!
                 * @brief This class is the base of all classes that implement a transport
                 * using DDS. This transport could be used by the proxy or the server.
                 * @ingroup TRANSPORTMODULE
                 */
                class RPCDDS_DllAPI Transport
                {
                    public:

                        typedef void (*Copy_data)(void *src, void *dst);

                        /*!
                         * @brief Default destructor.
                         */
                        virtual ~Transport();

                        inline
                            DDS::DomainParticipant* getParticipant() const
                            {
                                return m_participant;
                            }

                        inline
                            DDS::Publisher* getPublisher() const
                            {
                                return m_publisher;
                            }

                        inline
                            DDS::Subscriber* getSubscriber() const
                            {
                                return m_subscriber;
                            }

                        /*!
                         * @brief This function creates a new procedure endpoint.
                         * This proxy procedure endpoint manages the DDS datawriter and the DDS datareader.
                         *
                         * @param name The name associated with this proxy procedure endpoint. Cannot be NULL:
                         * @param writertypename The type name of the topic that the procedure endpoint uses in the datawriter. Cannot be NULL.
                         * @param readertypename The type name of the topic that the procedure endpoint uses in the datareader. Cannot be NULL:
                         * @return 0 value is returned if the function works successfully. In other case -1 is returned.
                         */
                        virtual int createProcedureEndpoint(const char *name, const char *writertypename, const char *readertypename,
                                Copy_data copy_data, int dataSize) = 0;

                        /*!
                         * 2brief This function returns the behaviour of the transport.
                         * @return The behaviour of the transport.
                         */
                        virtual TransportBehaviour getBehaviour() = 0;

                    protected:

                        typedef int (*setTransport)(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant);

                        /*!
                         * @brief Default constructor.
                         * @param domainId Optional parameter that specifies the domain identifier will be used in DDS.
                         */
                        Transport(setTransport setter, int domainId = 0);

                    private:

                        //! \brief The domain identifier that will be used in DDS.
                        int m_domainId;

                        /*!
                         * @brief A DDS transport uses a DDS::DomainParticipant entity to create DDS entities.
                         * This participant has to be created in the transport creation.
                         * This pointer should never be NULL.
                         */
                        DDS::DomainParticipant *m_participant;

                        /*!
                         * @brief DDS::Publisher entity used to create DDS::DataWriter entities.
                         * This publisher has to be created in the transport creation.
                         * This pointer should never be NULL.
                         */
                        DDS::Publisher *m_publisher;

                        /*!
                         * @brief DDS::Subscriber entity used to create DDS::DataReader entities.
                         * This subscriber has to be created in the transport creation.
                         * This pointer should never be NULL.
                         */
                        DDS::Subscriber *m_subscriber;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_DDS_TRANSPORT_H_
