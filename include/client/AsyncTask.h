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

        class DDSRPC_WIN32_DLL_API AsyncTask
        {
            public:

                AsyncTask(Client *client);

                ~AsyncTask();

				virtual void execute(ReturnMessage message) = 0;

                ClientRPC* getRPC();

				void execute(ReturnMessage message, DDS::QueryCondition *query);

                void setClientRPC(ClientRPC *clientRPC);

            protected:

                void *m_reply;

            private:


                Client *m_client;
                ClientRPC *m_clientRPC;
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _CLIENT_ASYNCTASK_H_
