/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/
#ifndef _TRANSPORTS_DDS_PROXYTRANSPORT_H_
#define _TRANSPORTS_DDS_PROXYTRANSPORT_H_

#include "rpcdds/rpcdds_dll.h"
#include "rpcdds/transports/dds/Transport.h"
#include "rpcdds/transports/ProxyTransport.h"
#include "rpcdds/utils/Messages.h"
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
                class ProxyProcedureEndpoint;
                class DDSAsyncTask;
                class AsyncThread;

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
                         * @brief This function returns the DDS service name.
						 * @return DDS service name.
                         */
                        std::string& getRemoteServiceName();

						/*!
                         * @brief This function gets the timeout value.
						 * @return Timeout value.
                         */
                        long getTimeout();

                        /*! TODO Actualizar
                         * @brief This function creates a new proxy procedure endpoint.
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
                         * @return 0 if the function works. -1 in other case.
                         */
                        eprosima::rpcdds::transport::Endpoint*
                            createProcedureEndpoint(const char *name, const char *writertypename, const char *readertypename,
                                Transport::Create_data create_data, Transport::Copy_data copy_data,
                                Transport::Destroy_data destroy_data, Transport::ProcessFunc processFunc, int dataSize);

                        /*!
                         * @brief This function adds a asynchronous task to the asynchronous thread.
                         *
                         * @param query The DDS query condition that is used to take the request. Cannot be NULL.
                         * @param task The asynchronos task created and associated with a request. Cannot be NULL.
                         * @param timeout The timeout used for this request.
                         * @return A 0 value is returned if function works successfully. In any other case, -1 is returned.
                         */
                        int addAsyncTask(DDS::QueryCondition *query, DDSAsyncTask *task, long timeout);

                        /**
                         * @brief This function deletes all the asynchronous tasks associated with the ProxyProcedureEndpoint endpoint.
                         *
                         * @param pe Pointer to the ProxyProcedureEndpoint. It cannot be NULL.
                         */
                        void deleteAssociatedAsyncTasks(ProxyProcedureEndpoint *pe);

                    protected:

						/*!
                         * @brief This abstract function sets the QoS to use a specific transport.
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
                         * @brief Map containing the proxy's procedure endpoints that were created to communicate.
                         * The map key is the pointer where the name is allocated, not the name itself.
                         * Then always the same string in memory has to be used and not a copy.
                         */
                        std::map<const char*, ProxyProcedureEndpoint*> m_procedureEndpoints;

                        std::string m_remoteServiceName;

                        long m_timeout;

                        AsyncThread *m_asyncThread;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_DDS_PROXYTRANSPORT_H_
