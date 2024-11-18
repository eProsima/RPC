/*************************************************************************
* Copyright (c) 2013 eProsima. All rights reserved.
*
* This copy of FASTRPC is licensed to you under the terms described in the
* FASTRPC_LICENSE file included in this distribution.
*
*************************************************************************/

#ifndef _TRANSPORTS_DDS_RTPSSERVERTRANSPORT_H_
#define _TRANSPORTS_DDS_RTPSSERVERTRANSPORT_H_

#include "../../rpc_dll.h"

#if RPC_WITH_FASTDDS

#include <map>
#include <string>

#include "RTPSTransport.h"
#include "../ServerTransport.h"


namespace eprosima {
namespace rpc {
namespace transport {
namespace dds {
class RTPSServerProcedureEndpoint;

/*
 * @brief This class implements a DDS transport using only the RTPS level provided by FastRTPS library.
 * This transport can be used by the servers.
 * @ingroup TRANSPORTMODULE
 */
class RTPSServerTransport : public ServerTransport, public RTPSTransport
{
public:

    /*!
     * @brief Default constructor.
     * @param serviceName Name of the remote service. If value is not assigned or NULL pointer is used,
     * the default service's name will be use.
     * @param instanceName Instance's name of the remote service. If value is not assigned or NULL pointer is used,
     * the default instance's name will be use.
     * @param domainId Optional parameter that specifies the domain identifier that will be used in DDS.
     */
    RPC_DllAPI RTPSServerTransport(
            const char* const serviceName = NULL,
            const char* const instanceName = NULL,
            int domainId = 0);

    /*!
     * @brief Default constructor.
     * @param participant User's participant that will be use for communications.
     * @param serviceName Name of the remote service. If value is not assigned or NULL pointer is used,
     * the default service's name will be use.
     * @param instanceName Instance's name of the remote service. If value is not assigned or NULL pointer is used,
     * the default instance's name will be use.
     */
    RPC_DllAPI RTPSServerTransport(
            fastdds::dds::DomainParticipant* participant,
            const char* const serviceName = NULL,
            const char* const instanceName = NULL);

    /*!
     * @brief Default destructor.
     */
    virtual RPC_DllAPI ~RTPSServerTransport();

    /*!
     * @brief This function returns the type of the transport.
     *        This function has to be implemented by the child classes.
     */
    virtual RPC_DllAPI const char* getType() const;

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
     * @return 0 if the function successfully works, -1 in other case
     * TODO
     */
    RPC_DllAPI eprosima::rpc::transport::Endpoint*
    createProcedureEndpoint(
            const char* name,
            const char* writertypename,
            const char* writertopicname,
            const char* readertypename,
            const char* readertopicname,
            RTPSTransport::Create_data create_data,
            RTPSTransport::Copy_data copy_data,
            RTPSTransport::Destroy_data destroy_data,
            RTPSTransport::ProcessFunc processFunc,
            size_t dataSize);

    /*!
     * @brief This method is invoked once for each incoming request.
     *
     * @param data The request data.
     * @param endpoint The request endpoint.
     */
    RPC_DllAPI void process(
            RTPSServerProcedureEndpoint* endpoint,
            void* data);

    /*!
     * @brief This method starts all the DDS Datawriters and Datareaders.
     */
    RPC_DllAPI void run();

    /*!
     * @brief This function does not apply to DDS transport.
     */
    RPC_DllAPI void stop();

    /*!
     * @brief This function is used to send a reply to a proxy.
     * @param data Data to send.
     * @param dataLength Length of the data to send.
     * @param endpoint Endpoint meant to send the data.
     */
    void sendReply(
            void* data,
            size_t dataLength,
            Endpoint* endpoint);

    /*!
     * @brief This function does not apply to DDS transport.
     */
    RPC_DllAPI int receive(
            char* buffer,
            size_t bufferLength,
            size_t& dataToRead,
            Endpoint* endpoint);

    /*!
     * @brief This function returns the DDS service name.
     * @return DDS service name.
     */
    RPC_DllAPI const char* getRemoteServiceName() const;

private:

    /*!
     * @brief Map containing the proxy's procedure endpoints that were created to communicate.
     * The map key is the pointer where the name is allocated, not the name itself.
     * Then always the same string in memory has to be used and not a copy.
     */
    std::map<const char*, RTPSServerProcedureEndpoint*> m_procedureEndpoints;

    std::string m_serviceName;

    std::string m_instanceName;
};
}             // namepsace dds
}         // namespace transport
}     // namepsace fastrpc
} // namespace eprosima

#endif // RPC_WITH_FASTDDS

#endif // _TRANSPORTS_DDS_RTPSSERVERTRANSPORT_H_
