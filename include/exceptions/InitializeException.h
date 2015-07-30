/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_INITIALIZEEXCEPTION_H_
#define _EXCEPTIONS_INITIALIZEEXCEPTION_H_

#include "SystemException.h"

namespace eprosima
{
    namespace rpc
    {
        namespace exception
        {
            /**
             * @brief This class is thrown as an exception when there is an error initializating an object.
             * @ingroup EXCEPTIONMODULE
             */
            class InitializeException : public SystemException
            {
                public:

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is copied.
                     */
					RPC_DllAPI InitializeException(const std::string &message) : SystemException(message.c_str(), 1){}

                    /**
                     * \brief Default copy constructor.
                     *
                     * \param ex InitializeException that will be copied.
                     */
                    RPC_DllAPI InitializeException(const InitializeException &ex);

                    /**
                     * \brief Default move constructor.
                     *
                     * \param ex InitializeException that will be moved.
                     */
                    RPC_DllAPI InitializeException(InitializeException&& ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex InitializeException that will be copied.
                     */
                    RPC_DllAPI InitializeException& operator=(const InitializeException &ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex InitializeException that will be moved.
                     */
                    RPC_DllAPI InitializeException& operator=(InitializeException&& ex);

                    /// \brief Default constructor
                    virtual RPC_DllAPI ~InitializeException() throw();

                    /// \brief This function throws the object as an exception.
                    virtual RPC_DllAPI void raise() const;
            };
        } // namespace exception
    } // namespace rpc
} // namespace eprosima
#endif // _EXCEPTIONS_INITIALIZEEXCEPTION_H_
