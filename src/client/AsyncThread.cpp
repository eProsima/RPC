#include "client/AsyncThread.h"
#include "client/AsyncTask.h"
#include "client/ClientRPC.h"

#include <stdio.h>

static const char* const CLASS_NAME = "eProsima::DDSRPC::AsyncThread";

namespace eProsima
{
    namespace DDSRPC
    {
        AsyncThread::AsyncThread() : m_guardWaitSet(NULL), m_exit(0)
        {
        }

        int AsyncThread::init()
        {
            const char* const METHOD_NAME = "init";

            m_guardWaitSet = new DDS::GuardCondition();

            if(m_guardWaitSet != NULL)
            {
                m_waitSet = new DDS::WaitSet();

                if(m_waitSet != NULL)
                {
                    m_mutex =  new boost::mutex();

                    if(m_mutex != NULL)
                    {
                        try
                        {
                            m_thread = boost::thread(&AsyncThread::run, this);
                            return 0;
                        }
                        catch(boost::thread_resource_error ex)
                        {
                            printf("ERROR<%s::%s>: Cannot create thread\n", CLASS_NAME, METHOD_NAME);
                        }

                        delete m_mutex;
                    }
                    else
                    {
                        printf("ERROR<%s::%s>: Cannot create mutex\n", CLASS_NAME, METHOD_NAME);
                    }

                    delete m_waitSet;
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot create waitset\n", CLASS_NAME, METHOD_NAME);
                }

                delete m_guardWaitSet;
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot create guard condition\n", CLASS_NAME, METHOD_NAME);
            }

            return -1;
        }

        void AsyncThread::exit()
        {
            m_exit = 1;
            m_guardWaitSet->set_trigger_value(1);
            m_thread.join();
            delete m_mutex;
            delete m_waitSet;
            delete m_guardWaitSet;
        }

        void AsyncThread::run()
        {
            const char* const METHOD_NAME = "run";

            if(m_waitSet->attach_condition(m_guardWaitSet) == DDS::RETCODE_OK)
            {
                while(m_exit == 0)
                {
                    DDS::ReturnCode_t retCode;
                    DDS::ConditionSeq conds;
                    DDS::Duration_t timeout = {DDS_DURATION_INFINITE_SEC, DDS_DURATION_INFINITE_NSEC};

                    retCode = m_waitSet->wait(conds, timeout);

                    if(retCode == DDS::RETCODE_OK)
                    {
                        boost::lock_guard<boost::mutex> lock_guard(*m_mutex);

                        for(int i = 0; i < conds.length(); ++i)
                        {
                            AsyncTaskMap::iterator it = m_map.begin();

                            for(; it != m_map.end(); ++it)
                            {
                                if(conds[i] == it->first)
                                {
                                    break;
                                }
                            }

                            if(it != m_map.end())
                            {
                                it->second->execute(it->first);
                                m_waitSet->detach_condition(it->first);
                                it->second->getRPC()->deleteQuery(it->first);
                                delete it->second;
                                m_map.erase(it);
                            }
                        }
                    }
                    else if(retCode == DDS::RETCODE_TIMEOUT)
                    {
                        printf("WARNING <%s::%s>: Wait timeout. Retrying.\n", CLASS_NAME, METHOD_NAME);
                    }
                }

                m_waitSet->detach_condition(m_guardWaitSet);
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot attach the guard condition to waitset\n", CLASS_NAME, METHOD_NAME);
            }

            return;
        }

        int AsyncThread::addTask(DDS::QueryCondition *query, AsyncTask *task)
        {
            const char* const METHOD_NAME = "addTask";
            boost::lock_guard<boost::mutex> lock_guard(*m_mutex);
            int returnedValue = -1;

            if(query != NULL && task != NULL)
            {
                AsyncTaskPair pair(query, task);
                m_map.insert(pair);

                if(m_waitSet->attach_condition(query) == DDS::RETCODE_OK)
                {
                    returnedValue = 0;
                }
                else
                {
                    printf("ERROR<%s::%s>: Cannot attach query condition\n", CLASS_NAME, METHOD_NAME);
                }
            }
            else
            {
                printf("ERROR<%s::%s>: Bad parameters\n", CLASS_NAME, METHOD_NAME);
            }

            return returnedValue;
        }

    } // namespace DDSRPC
} // namespace eProsima
