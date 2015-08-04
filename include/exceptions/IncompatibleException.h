/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_INCOMPATIBLEEXCEPTION_H_
#define _EXCEPTIONS_INCOMPATIBLEEXCEPTION_H_

#include "SystemException.h"

namespace eprosima
{
    namespace rpc
    {
        namespace exception
        {
            /**
             * @brief This class is thrown as an exception when a selected protocol and transport
             * are incompatible.
             * @ingroup EXCEPTIONMODULE
             */
            class IncompatibleException : public SystemException
            {
                public:

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is copied.
                     */
					RPC_DllAPI IncompatibleException(const std::string &message) : SystemException(message.c_str(), 1) {}

                    /**
                     * \brief Default copy constructor.
                     *
                     * \param ex IncompatibleException that will be copied.
                     */
                    RPC_DllAPI IncompatibleException(const IncompatibleException &ex);

                    /**
                     * \brief Default move constructor.
                     *
                     * \param ex IncompatibleException that will be moved.
                     */
                    RPC_DllAPI IncompatibleException(IncompatibleException&& ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex IncompatibleException that will be copied.
                     */
                    RPC_DllAPI IncompatibleException& operator=(const IncompatibleException &ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex IncompatibleException that will be moved.
                     */
                    RPC_DllAPI IncompatibleException& operator=(IncompatibleException&& ex);

                    /// \brief Default constructor
                    virtual RPC_DllAPI ~IncompatibleException() throw();

                    /// \brief This function throws the object as an exception.
                    virtual RPC_DllAPI void raise() const;
            };
        } // namespace exception
    } // namespace rpc
} // namespace eprosima
#endif // _EXCEPTIONS_INCOMPATIBLEEXCEPTION_H_
