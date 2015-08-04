/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_
#define _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_

#include "SystemException.h"

namespace eprosima
{
    namespace rpc
    {
        namespace exception
        {
            /**
             * @brief This class is thrown as an exception when the remote procedure call exceeds the maximum time.
             * @ingroup EXCEPTIONMODULE
             */
            class ServerTimeoutException : public SystemException
            {
                public:

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is copied.
                     */
					RPC_DllAPI ServerTimeoutException(const std::string &message) : SystemException(message.c_str(), 5) {}

                    /**
                     * \brief Default copy constructor.
                     *
                     * \param ex ServerTimeoutException that will be copied.
                     */
                    RPC_DllAPI ServerTimeoutException(const ServerTimeoutException &ex);

                    /**
                     * \brief Default move constructor.
                     *
                     * \param ex ServerTimeoutException that will be moved.
                     */
                    RPC_DllAPI ServerTimeoutException(ServerTimeoutException&& ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex ServerTimeoutException that will be copied.
                     */
                    RPC_DllAPI ServerTimeoutException& operator=(const ServerTimeoutException &ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex ServerTimeoutException that will be moved.
                     */
                    RPC_DllAPI ServerTimeoutException& operator=(ServerTimeoutException&& ex);

                    /// \brief Default constructor
                    virtual RPC_DllAPI ~ServerTimeoutException() throw();

                    /// \brief This function throws the object as an exception.
                    virtual RPC_DllAPI void raise() const;
            };
        } // namespace exception
    } // namespace rpc
} // namespace eprosima
#endif // _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_
