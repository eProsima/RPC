/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_
#define _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_

#include <fastrpc/exceptions/SystemException.h>

namespace eprosima
{
    namespace fastrpc
    {
        namespace exception
        {
            /**
             * @brief This class is thrown as an exception when the server is not found.
             * @ingroup EXCEPTIONMODULE
             */
            class FASTRPC_DllAPI ServerNotFoundException : public SystemException
            {
                public:

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is copied.
                     */
                    ServerNotFoundException(const std::string &message);

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is moved.
                     */
                    ServerNotFoundException(std::string&& message);

                    /**
                     * \brief Default copy constructor.
                     *
                     * \param ex ServerNotFoundException that will be copied.
                     */
                    ServerNotFoundException(const ServerNotFoundException &ex);

                    /**
                     * \brief Default move constructor.
                     *
                     * \param ex ServerNotFoundException that will be moved.
                     */
                    ServerNotFoundException(ServerNotFoundException&& ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex ServerNotFoundException that will be copied.
                     */
                    ServerNotFoundException& operator=(const ServerNotFoundException &ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex ServerNotFoundException that will be moved.
                     */
                    ServerNotFoundException& operator=(ServerNotFoundException&& ex);

                    /// \brief Default constructor
                    virtual ~ServerNotFoundException() throw();

                    /// \brief This function throws the object as an exception.
                    virtual void raise() const;
            };
        } // namespace exception
    } // namespace fastrpc
} // namespace eprosima
#endif // _EXCEPTIONS_SERVERNOTFOUNDEXCEPTION_H_
