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
                 * @brief This class is the base of all classes that implement a transport
                 * using DDS. This transport could be used by the proxy or the server.
                 * @ingroup TRANSPORTMODULE
                 */
                class RPCDDS_DllAPI Transport
                {
                    public:

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

                    protected:

                        /*!
                         * @brief Default constructor.
                         * @param domainId Optional parameter that specifies the domain identifier will be used in DDS.
                         */
                        Transport(int domainId = 0);

                    private:

                        /*!
                         * @brief This function sets the QoS of DDS to use a DDS middleware transport that the child class implements.
                         *        This function has to be implemented by the child classes.
                         *
                         * @param participantQos Reference to the DDS domain participant QoS.
                         */
                        virtual int setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant) = 0;

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
