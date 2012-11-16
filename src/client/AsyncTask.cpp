#include "client/AsyncTask.h"
#include "client/ClientRPC.h"
#include "exceptions/ClientInternalException.h"
#include "exceptions/ServerTimeoutException.h"

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

        void AsyncTask::execute(DDS::QueryCondition *query)
        {
            const char* const METHOD_NAME = "execute";

            if(query != NULL)
            {
                eProsima::DDSRPC::ReturnMessage retCode = m_clientRPC->takeReply(getReplyInstance(), query);

				if(retCode == OPERATION_SUCCESSFUL)
				{
					this->execute();
				}
				else if(retCode == CLIENT_INTERNAL_ERROR)
				{
					this->on_exception(ClientInternalException("Error taking the reply"));
				}
				else if(retCode == SERVER_TIMEOUT)
				{
					this->on_exception(ServerTimeoutException("Error taking the reply"));
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
