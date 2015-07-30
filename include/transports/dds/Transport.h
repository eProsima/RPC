/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_TRANSPORT_H_
#define _TRANSPORTS_DDS_TRANSPORT_H_

#include "../../rpc_dll.h"

#if RPC_WITH_RTIDDS


class DDSDomainParticipant;
class DDSPublisher;
class DDSSubscriber;
struct DDS_DomainParticipantQos;

namespace eprosima
{
    namespace rpc
    {
        namespace protocol
        {
            class Protocol;
        }

        namespace transport
        {
            class Endpoint;

            namespace dds
            {
                /*!
                 * @brief This class is the base of all classes that implement a transport
                 * using DDS. This transport could be used by both proxies and servers.
                 * @ingroup TRANSPORTMODULE
                 */
                class RPC_DllAPI Transport
                {
                    public:

                        typedef void* (*Create_data)(void);
                        typedef void (*Copy_data)(void *dst, void *src);
                        typedef void (*Destroy_data)(void *data);
                        typedef void (*ProcessFunc)(eprosima::rpc::protocol::Protocol&, void*,
                                eprosima::rpc::transport::Endpoint*);

                        /*!
                         * @brief Default destructor.
                         */
                        virtual ~Transport();

		                /*!
						 * @brief Initializes all the DDS elements: creates the topic, the participant, the publisher and the subscriber.
						 */
                        void initialize();

		                /*!
						 * @brief Gets the domain participant.
						 * @return DDS domain participant.
						 */
                        inline
                            DDSDomainParticipant* getParticipant() const
                            {
                                return m_participant;
                            }

		                /*!
						 * @brief Gets the publisher.
						 * @return DDS publisher.
						 */
                        inline
                            DDSPublisher* getPublisher() const
                            {
                                return m_publisher;
                            }

		                /*!
						 * @brief Gets the subscriber.
						 * @return DDS subscriber.
						 */
                        inline
                            DDSSubscriber* getSubscriber() const
                            {
                                return m_subscriber;
                            }

                        virtual const char* getRemoteServiceName() const = 0;

                        /*! TODO Actualizar
                         * @brief This function creates a new procedure endpoint.
                         * This proxy procedure endpoint manages the DDS datawriter and the DDS datareader.
                         *
                         * @param name The name associated with this proxy procedure endpoint. It cannot be NULL.
                         * @param writertypename The type name of the topic that the procedure endpoint uses in the datawriter. It cannot be NULL.
                         * @param readertypename The type name of the topic that the procedure endpoint uses in the datareader. It cannot be NULL.
						 * @param initialize_data Pointer to the function to initialize DataReader received data
                         * @param copy_data Pointer to the function used to copy the data when it is received.
						 * @param finalize_data Pointer to the function to finalize DataReader received data
						 * @param ProcessFunc Pointer to the function invoked when a message is received from the server
						 * @param dataSize Size of the DataReader data structure
						 *
                         * @return 0 if the function ends successfully, -1 otherwise.
                         * TODO
                         */
                        virtual eprosima::rpc::transport::Endpoint*
                            createProcedureEndpoint(const char *name, const char *writertypename,
                                    const char *writertopicname, const char *readertypename,
                                    const char *readertopicname, bool eprosima_types,
                                    Create_data create_data, Copy_data copy_data, Destroy_data destroy_data,
                                    ProcessFunc processFunc, int dataSize) = 0;

                    protected:

						/*!
                         * @brief This abstract function sets the QoS to use a specific transport.
                         *
                         * @param participantQos Reference to the DDS domain participant QoS.
                         * @param participant The domain participant that will be set to use a specific transport.
                         */
                        virtual int setTransport(DDS_DomainParticipantQos &participantQos, DDSDomainParticipant *participant) = 0;

                        /*!
                         * @brief Default constructor.
                         * @param domainId Optional parameter that specifies the domain identifier that will be used in DDS.
                         */
                        Transport(int domainId = 0);

                    private:

                        //! \brief The domain identifier that will be used in DDS.
                        int m_domainId;

                        /*!
                         * @brief A DDS transport that uses a DDS::DomainParticipant entity to create DDS entities.
                         * This participant has to be created during the transport creation.
                         * This pointer should never be NULL.
                         */
                        DDSDomainParticipant *m_participant;

                        /*!
                         * @brief DDS::Publisher entity used to create DDS::DataWriter entities.
                         * This publisher has to be created in the transport creation.
                         * This pointer should never be NULL.
                         */
                        DDSPublisher *m_publisher;

                        /*!
                         * @brief DDS::Subscriber entity used to create DDS::DataReader entities.
                         * This subscriber has to be created in the transport creation.
                         * This pointer should never be NULL.
                         */
                        DDSSubscriber *m_subscriber;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpc
} // namespace eprosima

#endif // RPC_WITH_RTIDDS

#endif // _TRANSPORTS_DDS_TRANSPORT_H_
