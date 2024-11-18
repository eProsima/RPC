/*************************************************************************
* Copyright (c) 2013 eProsima. All rights reserved.
*
* This copy of FASTRPC is licensed to you under the terms described in the
* FASTRPC_LICENSE file included in this distribution.
*
*************************************************************************/
#ifndef _TRANSPORTS_DDS_RTPSTRANSPORT_H_
#define _TRANSPORTS_DDS_RTPSTRANSPORT_H_

#include "../../rpc_dll.h"
#include <cstddef>

#if RPC_WITH_FASTDDS

namespace eprosima {
namespace fastdds {
namespace dds {
class DomainParticipant;
class Publisher;
class Subscriber;
} // namespace dds
} // namespace fastdds

namespace rpc {
namespace protocol {
class Protocol;
} // namespace protocol

namespace transport {
class Endpoint;

namespace dds {
/*!
 * @brief This class is the base of all classes that implement a transport
 * using RTPS. This transport could be used by both proxies and servers.
 * @ingroup TRANSPORTMODULE
 */
class RPC_DllAPI RTPSTransport
{
public:

    typedef void* (* Create_data)(
            void);
    typedef void (* Copy_data)(
            void* dst,
            void* src);
    typedef void (* Destroy_data)(
            void* data);
    typedef void (* ProcessFunc)(
            rpc::protocol::Protocol&,
            void*,
            rpc::transport::Endpoint*);

    /*!
     * @brief Default destructor.
     */
    virtual ~RTPSTransport();

    /*!
     * @brief Initializes all the DDS elements: creates the topic, the participant, the publisher and the subscriber.
     */
    void initialize();

    /*!
     * @brief Gets the domain participant.
     * @return DDS domain participant.
     */
    fastdds::dds::DomainParticipant* get_participant() const
    {
        return m_participant;
    }

    fastdds::dds::Publisher* get_publisher() const
    {
        return m_publisher;
    }

    fastdds::dds::Subscriber* get_subscriber() const
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
     * @param finalize_data Pointer to the function to finalize DataReader received data
     * @param ProcessFunc Pointer to the function invoked when a message is received from the server
     * @param dataSize Size of the DataReader data structure
     *
     * @return 0 if the function ends successfully, -1 otherwise.
     * TODO
     */
    virtual rpc::transport::Endpoint*
    createProcedureEndpoint(
            const char* name,
            const char* writertypename,
            const char* writertopicname,
            const char* readertypename,
            const char* readertopicname,
            Create_data create_data,
            Copy_data copy_data,
            Destroy_data destroy_data,
            ProcessFunc processFunc,
            size_t dataSize) = 0;

protected:

    /*!
     * @brief Default constructor.
     * @param domainId Optional parameter that specifies the domain identifier that will be used in DDS.
     */
    RTPSTransport(
            int domainId = 0);

    RTPSTransport(
            fastdds::dds::DomainParticipant* participant);

private:

    //! \brief The domain identifier that will be used in DDS.
    int m_domainId {0};

    /*!
     * @brief A DDS transport that uses a DDS::DomainParticipant entity to create DDS entities.
     * This participant has to be created during the transport creation.
     * This pointer should never be NULL.
     */
    fastdds::dds::DomainParticipant* m_participant {nullptr};

    fastdds::dds::Publisher* m_publisher {nullptr};

    fastdds::dds::Subscriber* m_subscriber {nullptr};

    bool m_ownership {false};
};
}             // namespace dds
}         // namespace transport
}     // namespace rpc
} // namespace eprosima

#endif // RPC_WITH_FASTDDS

#endif // _TRANSPORTS_DDS_RTPSTRANSPORT_H_
