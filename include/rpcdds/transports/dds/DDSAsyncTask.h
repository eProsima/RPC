/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_DDS_DDSASYNCTASK_H_
#define _TRANSPORTS_DDS_DDSASYNCTASK_H_

#include "rpcdds/transports/AsyncTask.h"
#include "rpcdds/utils/dds/Middleware.h"
#include "rpcdds/exceptions/SystemException.h"

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            namespace dds
            {
                class ProxyProcedureEndpoint;

                /**
                 * @brief This class represents a asynchronous task created to wait the reply from the server in an asynchronous call.
                 * @ingroup TRANSPORTMODULE
                 */
                class DDSAsyncTask : public eprosima::rpcdds::transport::AsyncTask
                {
                    public:

                        DDSAsyncTask();

                        virtual ~DDSAsyncTask(){}

                        /**
                         * \brief This function is called when the DDS WaitSet was wake up by the query condition of this asynchronous task.
                         *        This funtion takes the reply.
                         *
                         * \param query Query condition associated with this asynchronous task.
                         */
                        void execute(DDS::QueryCondition *query);

                        void setProcedureEndpoint(ProxyProcedureEndpoint *pe);

                        ProxyProcedureEndpoint* getProcedureEndpoint();

                        /**
                         * \brief This function executes the callback function when an exception occurs on the client's side.
                         *        This function should be implemented by the generated asynchronous tasks.
                         *
                         * \param ex The exception that is sent to the user.
                         */
                        virtual void on_exception(const exception::SystemException &ex) = 0;

                    protected:

                        /**
                         * \brief This function executes the callback functions when a reply is received or an exception was transmitted.
                         *        This function should be implemented by the generated asynchronous tasks.
                         */
                        virtual void execute() = 0;

                        /**
                         * \brief Returns the allocated memory that will be used when the reply is taken.
                         *
                         * \return Pointer to the allocated memory.
                         */
                        virtual void* getReplyInstance() = 0;

                    private:

                        ProxyProcedureEndpoint *m_pe;
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_DDS_DDSASYNCTASK_H_

