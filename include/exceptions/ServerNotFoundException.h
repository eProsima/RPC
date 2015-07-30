/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_
#define _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_

#include "SystemException.h"

namespace eprosima
{
    namespace rpc
    {
        namespace exception
        {
            /**
             * @brief This class is thrown as an exception when the server is not found.
             * @ingroup EXCEPTIONMODULE
             */
            class ServerNotFoundException : public SystemException
            {
                public:

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is copied.
                     */
					RPC_DllAPI ServerNotFoundException(const std::string &message) : SystemException(message.c_str(), 4) {}

                    /**
                     * \brief Default copy constructor.
                     *
                     * \param ex ServerNotFoundException that will be copied.
                     */
                    RPC_DllAPI ServerNotFoundException(const ServerNotFoundException &ex);

                    /**
                     * \brief Default move constructor.
                     *
                     * \param ex ServerNotFoundException that will be moved.
                     */
                    RPC_DllAPI ServerNotFoundException(ServerNotFoundException&& ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex ServerNotFoundException that will be copied.
                     */
                    RPC_DllAPI ServerNotFoundException& operator=(const ServerNotFoundException &ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex ServerNotFoundException that will be moved.
                     */
                    RPC_DllAPI ServerNotFoundException& operator=(ServerNotFoundException&& ex);

                    /// \brief Default constructor
                    virtual RPC_DllAPI ~ServerNotFoundException() throw();

                    /// \brief This function throws the object as an exception.
                    virtual RPC_DllAPI void raise() const;
            };
        } // namespace exception
    } // namespace rpc
} // namespace eprosima
#endif // _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_
