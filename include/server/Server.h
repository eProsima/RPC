#ifndef _SERVER_SERVER_H_
#define _SERVER_SERVER_H_

#include "utils/ddsrpc.h"
#include "utils/Messages.h"
#include "utils/Typedefs.h"
#include "utils/Version.h"

#include <string>
#include <list>

#define DDSRPC_DEFAULT_PERIOD_MILLISEC 5000

namespace eProsima
{
	namespace DDSRPC
	{

        class ServerStrategy;
        class Transport;
		class ServerRPC;
	 
		/**
		 * \brief This class implements the common functionalities that the server have.
		 */
		class DDSRPC_WIN32_DLL_API Server
		{

			public:

				/**
				 * \brief This function starts the server to listen requests.
				 *         The server will create the DDS entities to start listening.
				 */
				void serve();

				/**
				 * \brief This function close the server's communications.
				 *        The server will destroy the DDS entities to close the communications.
				 */
				void stop();

				/**
				 * \brief This function schedules a new request that was received.
				 *
				 * \param execFunction The function that has to be called by the server to execute the request. Cannot be NULL.
				 * \param data The received request. Cannot be NULL.
				 * \param service The remote procedure that has received the request. Cannot be NULL.
				 */
				void schedule(fExecFunction execFunction, void *data, ServerRPC *service);

				/**
				 * \brief This function returns the name of the server that the server offers.
				 *
				 * \return The name of the service.
				 */
				const std::string& getServiceName() const;

				/**
				 * \brief This function returns the DDS domain participant that use this server.
				 *
				 * \return Pointer to the DDS domain participant.
				 */
				DDS::DomainParticipant* getParticipant() const;

			protected:

				/**
				 * \brief A constructor. The associated domain participant is created.
				 *
				 * \param serviceName The name of the service that the server offers. Proxies will use this name to connect with the server.
				 * \param strategy The strategy used by the server to execute new requests.
				 *         This class doesn't delete this object in its destructor. Cannot be NULL.
				 * \param transport The transport that will be use the server. This class doesn't delete this object in its destructor.
				 *        If the pointer is NULL, then a default UDPTransport will be used.
				 * \param domainId The domain id's value that the server proxy will set in the domain participant.
				 * \exception eProsima::DDSRPC::ResourceException 
				 */
				Server(std::string serviceName, ServerStrategy *strategy, Transport *transport, int domainId = 0);

				/// \brief The default destructor.
				virtual ~Server();

				/**
				 * \brief This function adds a new remote procedure call.
				 *
				 * \param newRPC The new remote procedure. Cannot be NULL.
				 * \return 0 value is returned if remote procedure was added succesfully. In other case, -1 value is returned.
				 */
				int setRPC(ServerRPC *newRPC);

			private:

				/// \brief The name of the service that the server offers. Proxies will use this name to connect with the server.
				std::string m_serviceName;

				/// \brief The domain identifier.
				int m_domainId;

				/// \brief The strategy used by the server with new requests.
                ServerStrategy *m_strategy;

				/**
				 * \brief Each server is associated with a DDS DomainParticipant. This participant have to be created in the server creation.
				 * This pointer should never be NULL.
				 */
				DDS::DomainParticipant *m_participant;
        
				/// \brief The list that contains all the remote procedures..
				std::list<ServerRPC*> m_rpcList;

				/// This function deletes all RPC endpoints.
				void deleteRPCs();

				/**
				 * \brief If the transport was created by this class because it is the default UDPTransport,
				 *          then this attribute has the true value. In other case the value will be false.
				 */
				bool m_defaultTransport;

				/// \brief Pointer to the transport which this server's proxy uses.
				Transport *m_transport;
		};

	} // namespace DDSRPC
} // namespace eProsima

#endif // _SERVER_SERVER_H_
