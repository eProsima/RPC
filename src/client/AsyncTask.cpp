#include "client/AsyncTask.h"

namespace eProsima
{
    namespace DDSRPC
    {
        AsyncTask::AsyncTask(Client *client, ClientRPC *clientRPC) :
            m_client(client), m_clientRPC(clientRPC)
        {
        }

        ClientRPC* AsyncTask::getRPC()
        {
            return m_clientRPC;
        }
    } // namespace DDSRPC
} // namespace eProsima
