/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_INITIALIZEEXCEPTION_H_
#define _EXCEPTIONS_INITIALIZEEXCEPTION_H_

#include <fastrpc/exceptions/SystemException.h>

namespace eprosima
{
    namespace fastrpc
    {
        namespace exception
        {
            /**
             * @brief This class is thrown as an exception when there is an error initializating an object.
             * @ingroup EXCEPTIONMODULE
             */
            class FASTRPC_DllAPI InitializeException : public SystemException
            {
                public:

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is copied.
                     */
                    InitializeException(const std::string &message);

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is moved.
                     */
                    InitializeException(std::string&& message);

                    /**
                     * \brief Default copy constructor.
                     *
                     * \param ex InitializeException that will be copied.
                     */
                    InitializeException(const InitializeException &ex);

                    /**
                     * \brief Default move constructor.
                     *
                     * \param ex InitializeException that will be moved.
                     */
                    InitializeException(InitializeException&& ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex InitializeException that will be copied.
                     */
                    InitializeException& operator=(const InitializeException &ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex InitializeException that will be moved.
                     */
                    InitializeException& operator=(InitializeException&& ex);

                    /// \brief Default constructor
                    virtual ~InitializeException() throw();

                    /// \brief This function throws the object as an exception.
                    virtual void raise() const;
            };
        } // namespace exception
    } // namespace fastrpc
} // namespace eprosima
#endif // _EXCEPTIONS_INITIALIZEEXCEPTION_H_
