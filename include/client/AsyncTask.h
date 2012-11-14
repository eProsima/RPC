#ifndef _CLIENT_ASYNCTASK_H_
#define _CLIENT_ASYNCTASK_H_

#include "utils/ddsrpc.h"
#include "utils/Messages.h"
#include "utils/Version.h"

namespace eProsima
{
    namespace DDSRPC
    {
        class Client;
        class ClientRPC;

		/**
		 * \brief This class represents each asynchronous task used to wait the reply from an asynchronous call.
		 */
        class DDSRPC_WIN32_DLL_API AsyncTask
        {
            public:

				/**
				 * \brief Default constructor.
				 *
				 * \param client Pointer to the server's proxy. Cannot be NULL.
				 */
                AsyncTask(Client *client);

				/// \brief Default destructor.
                virtual ~AsyncTask();

				/**
				 * \brief This function executes the callback functions when a reply is received or an error occurs.
				 *        This function should be implemented by generated asynchronous tasks.
				 *
				 * \param message Return code that occurs when asynchronous task try to take the reply.
				 */
				virtual void execute(ReturnMessage message) = 0;

				/**
				 * \brief This function returns the remote procedure that this task is linked with.
				 *
				 * \return Pointer to the remote procedure call.
				 */
                ClientRPC* getRPC();

				/**
				 * \brief This function is called when the DDS WaitSet was waked up by the query condition of this asynchronous task.
				 *        This funtion takes the reply.
				 *
				 * \param message Return code occurs till now.
			     * \param query Query condition associated with this asynchronous task.
				 */
				void execute(ReturnMessage message, DDS::QueryCondition *query);

				/**
				 * \brief This function set the remote procedure associated with this asynchronous task.
				 *
				 * \param clientRPC Pointer to the remote procedure call. Cannot be NULL.
				 */
                void setClientRPC(ClientRPC *clientRPC);

            protected:

				/// \brief Returns the allocated memory that will be used when reply will be taken.
                virtual void* getReplyInstance() = 0;

            private:

				/// \brief Pointer to the server's proxy.
                Client *m_client;

				/// \brief Pointer to the remote procedure call.
                ClientRPC *m_clientRPC;
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _CLIENT_ASYNCTASK_H_
