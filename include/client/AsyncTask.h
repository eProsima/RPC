#ifndef _CLIENT_ASYNCTASK_H_
#define _CLIENT_ASYNCTASK_H_

#include "utils/ddsrpc.h"

#include "ndds_namespace_cpp.h"

namespace eProsima
{
    namespace DDSRPC
    {
        class Client;
        class ClientRPC;

        class DDSRPC_WIN32_DLL_API AsyncTask
        {
            public:

                AsyncTask(Client *client, ClientRPC *clientRPC);

				virtual void execute(DDS::QueryCondition *query) = 0;

                ClientRPC* getRPC();

            private:

                Client *m_client;
                ClientRPC *m_clientRPC;
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _CLIENT_ASYNCTASK_H_
