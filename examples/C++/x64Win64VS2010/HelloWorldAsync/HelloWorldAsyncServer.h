#ifndef _HelloWorldAsyncSKELETON_H_
#define _HelloWorldAsyncSKELETON_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "server/Server.h"
#include "HelloWorldAsyncServerImpl.h"
#include "HelloWorldAsyncRequestReplyUtils.h"

/**
 * \brief This class implements a specific server for the defined interface by user.
 */
class HelloWorldAsyncServer : public eProsima::RPCDDS::Server
{
    public:
    
        /**
         * \brief Default constructor. The server will use the default eProsima::RPCDDS::UDPTransport.
         *
         * \param serviceName The service's name that proxies will use to connect with the server.
         * \param strategy Strategy used by server to work with new requests.
         *        This class doesn't delete this object in its destructor. Cannot be NULL.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0.
         * \exception eProsima::RPCDDS::InitializeException This exception is thrown when the initialization was wrong.
         */
        HelloWorldAsyncServer(std::string serviceName, eProsima::RPCDDS::ServerStrategy *strategy,
            int domainId = 0);

        /**
         * \brief This constructor sets the transport that will be used by the server.
         *
         * \param serviceName The service's name that proxies will use to connect with the server.
         * \param strategy Strategy used by server to work with new requests.
         *        This class doesn't delete this object in its destructor. Cannot be NULL.
         * \param transport The network transport that server has to use.
         *        This transport's object is not deleted by this class in its destrcutor. Cannot be NULL.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0.
         * \exception eProsima::RPCDDS::InitializeException This exception is thrown when the initialization was wrong.
         */
        HelloWorldAsyncServer(std::string serviceName, eProsima::RPCDDS::ServerStrategy *strategy, eProsima::RPCDDS::Transport *transport,
            int domainId = 0);

        /// \brief The default destructor.
        virtual ~HelloWorldAsyncServer();

        static void sayHello(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service);
        
     private:
        /**
         * \brief This function creates all RPC endpoints for each remote procedure.
         */
        void createRPCs();
        
        /// \brief Pointer to the server's servant implemented by the user.
        HelloWorldAsyncServerImpl *_impl;
};

#endif // _HelloWorldAsyncSKELETON_H_