#include "strategies/ThreadPerRequestStrategy.h"
#include "server/Server.h"

#include "boost/thread.hpp"

static const char* const CLASS_NAME = "ThreadPerRequestStrategy";

namespace eProsima
{
    namespace RPCDDS
    {
        class ThreadPerRequestStrategyJob
        {
            public:
                ThreadPerRequestStrategyJob(fExecFunction execFunction, void *data, Server *server, ServerRPC *service)
                    : m_execFunction(execFunction), m_data(data), m_server(server), m_service(service)
                {
                }

                void run()
                {
                    m_execFunction(m_server, m_data, m_service);
                }

            private:
                fExecFunction m_execFunction;
                void *m_data;
                Server *m_server;
                ServerRPC *m_service;
        };

        void ThreadPerRequestStrategy::schedule(fExecFunction execFunction, void *data, Server *server, ServerRPC *service)
        {
            const char* const METHOD_NAME = "schedule";

            if(execFunction != NULL && data != NULL && server != NULL && service != NULL)
            {
                boost::shared_ptr<ThreadPerRequestStrategyJob> job(new ThreadPerRequestStrategyJob(execFunction, data, server, service));
                boost::thread thread(boost::bind(&ThreadPerRequestStrategyJob::run, job));
                thread.detach();
            }
            else
            {
                printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
            }
        }

    } // namespace RPCDDS
} // namespace eProsima

