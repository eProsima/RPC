/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_
#define _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_

#include <fastrpc/exceptions/SystemException.h>

namespace eprosima
{
    namespace fastrpc
    {
        namespace exception
        {
            /**
             * @brief This class is thrown as an exception when the remote procedure call exceeds the maximum time.
             * @ingroup EXCEPTIONMODULE
             */
            class FASTRPC_DllAPI ServerTimeoutException : public SystemException
            {
                public:

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is copied.
                     */
                    ServerTimeoutException(const std::string &message);

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is moved.
                     */
                    ServerTimeoutException(std::string&& message);

                    /**
                     * \brief Default copy constructor.
                     *
                     * \param ex ServerTimeoutException that will be copied.
                     */
                    ServerTimeoutException(const ServerTimeoutException &ex);

                    /**
                     * \brief Default move constructor.
                     *
                     * \param ex ServerTimeoutException that will be moved.
                     */
                    ServerTimeoutException(ServerTimeoutException&& ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex ServerTimeoutException that will be copied.
                     */
                    ServerTimeoutException& operator=(const ServerTimeoutException &ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex ServerTimeoutException that will be moved.
                     */
                    ServerTimeoutException& operator=(ServerTimeoutException&& ex);

                    /// \brief Default constructor
                    virtual ~ServerTimeoutException() throw();

                    /// \brief This function throws the object as an exception.
                    virtual void raise() const;
            };
        } // namespace exception
    } // namespace fastrpc
} // namespace eprosima
#endif // _EXCEPTIONS_SERVERTIMEOUTEXCEPTION_H_
