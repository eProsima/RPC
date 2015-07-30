/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_DDS_DDSASYNCTASK_H_
#define _TRANSPORTS_DDS_DDSASYNCTASK_H_

#include "../../rpc_dll.h"

#if RPC_WITH_FASTRTPS

#include "../AsyncTask.h"
#include "../../exceptions/SystemException.h"

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            namespace dds
            {
                /**
                 * @brief This class represents a asynchronous task created to wait the reply from the server in an asynchronous call.
                 * @ingroup TRANSPORTMODULE
                 */
                class RPC_DllAPI RTPSAsyncTask : public eprosima::rpc::transport::AsyncTask
                {
                    public:

						/*!
						 * @brief default constructor
						 */
                        RTPSAsyncTask();
						
						/*!
						 * @brief default destructor
						 */
                        virtual ~RTPSAsyncTask(){}

                        /**
                         * \brief This function executes the callback function when an exception occurs on the client's side.
                         *        This function should be implemented by the generated asynchronous tasks.
                         *
                         * \param ex The exception that is sent to the user.
                         */
                        virtual void on_exception(const exception::SystemException &ex) = 0;

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
                };
            } // namespace dds
        } // namespace transport
    } // namespace rpc
} // namespace eprosima

#endif // RPC_WITH_FASTRTPS

#endif // _TRANSPORTS_DDS_RTPSASYNCTASK_H_
