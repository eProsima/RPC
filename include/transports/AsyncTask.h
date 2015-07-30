/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_ASYNCTASK_H_
#define _TRANSPORTS_ASYNCTASK_H_

#include "../rpc_dll.h"

namespace eprosima
{
    namespace rpc
    {
        namespace transport
        {
            /**
             * @brief This class represents a asynchronous task created to wait the reply from the server in an asynchronous call.
             * @ingroup TRANSPORTMODULE
             */
            class RPC_DllAPI AsyncTask
            {
                protected:

                    //! Default constructor.
                    AsyncTask();

                    //! Destructor.
                    virtual ~AsyncTask();
            };
        } // namespace transport
    } // namespace rpc
} // namespace eprosima

#endif // _TRANSPORTS_ASYNCTASK_H_
