/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _TRANSPORTS_ASYNCTASK_H_
#define _TRANSPORTS_ASYNCTASK_H_

namespace eprosima
{
    namespace rpcdds
    {
        namespace transport
        {
            /**
             * @brief This class represents a asynchronous task created to wait the reply from the server in an asynchronous call.
             * @ingroup TRANSPORTMODULE
             */
            class AsyncTask
            {
                protected:

                    AsyncTask();

                    virtual ~AsyncTask();
            };
        } // namespace transport
    } // namespace rpcdds
} // namespace eprosima

#endif // _TRANSPORTS_ASYNCTASK_H_
