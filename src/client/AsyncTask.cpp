#include "client/AsyncTask.h"
#include "client/ClientRPC.h"

const char* const CLASS_NAME = "AsyncTask";

namespace eProsima
{
    namespace DDSRPC
    {
        AsyncTask::AsyncTask(Client *client) :
            m_client(client), m_clientRPC(NULL)
        {
        }

        AsyncTask::~AsyncTask()
        {
        }

        void AsyncTask::execute(ReturnMessage message, DDS::QueryCondition *query)
        {
            const char* const METHOD_NAME = "execute";

            if(query != NULL)
            {
                if(message == OPERATION_SUCCESSFUL)
                {
                    eProsima::DDSRPC::ReturnMessage retCode = m_clientRPC->takeReply(m_reply, query);
                    this->execute(retCode);
                }
                else
                {
                    this->execute(message);
                }
            }
            else
            {
                printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
            }
        }

        ClientRPC* AsyncTask::getRPC()
        {
            return m_clientRPC;
        }

        void AsyncTask::setClientRPC(ClientRPC *clientRPC)
        {
            m_clientRPC = clientRPC;
        }
    } // namespace DDSRPC
} // namespace eProsima
