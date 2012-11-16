#ifndef _CLIENT_ASYNCTASK_H_
#define _CLIENT_ASYNCTASK_H_

#include "utils/ddsrpc.h"
#include "utils/Messages.h"
#include "utils/Version.h"
#include "exceptions/SystemException.h"

namespace eProsima
{
    namespace DDSRPC
    {
        class Client;
        class ClientRPC;

		/**
		 * \brief This class represents a asynchronous task created to wait the reply from the server in an asynchronous call.
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
				 * \brief This function executes the callback functions when a reply is received or an exception was transmitted.
				 *        This function should be implemented by generated asynchronous tasks.
				 */
				virtual void execute() = 0;

				/**
				 * \brief This function executes the callback function when an exception occurs in the client side.
				 *        This function should be implemented by generated asynchronous tasks.
				 *
				 * \param ex The exception that is sent to the user.
				 */
				virtual void on_exception(const SystemException &ex) = 0;

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
			     * \param query Query condition associated with this asynchronous task.
				 */
				void execute(DDS::QueryCondition *query);

				/**
				 * \brief This function set the remote procedure associated with this asynchronous task.
				 *
				 * \param clientRPC Pointer to the remote procedure call. Cannot be NULL.
				 */
                void setClientRPC(ClientRPC *clientRPC);

            protected:

				/**
				 * \brief Returns the allocated memory that will be used when reply will be taken.
				 *
				 * \return Pointer to the allocated memory.
				 */
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
