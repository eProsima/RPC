/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_BADPARAMEXCEPTION_H_
#define _EXCEPTIONS_BADPARAMEXCEPTION_H_

#include "fastrpc/exceptions/SystemException.h"

namespace eprosima
{
    namespace rpc
    {
        namespace exception
        {
            /**
             * @brief This class is thrown as an exception when there is some bad paremeter
             * in a object.
             * @ingroup EXCEPTIONMODULE
             */
            class FASTRPC_DllAPI BadParamException : public SystemException
            {
                public:

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is copied.
                     */
                    BadParamException(const std::string &message);

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is moved.
                     */
                    BadParamException(std::string&& message);

                    /**
                     * \brief Default copy constructor.
                     *
                     * \param ex BadParamException that will be copied.
                     */
                    BadParamException(const BadParamException &ex);

                    /**
                     * \brief Default move constructor.
                     *
                     * \param ex BadParamException that will be moved.
                     */
                    BadParamException(BadParamException&& ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex BadParamException that will be copied.
                     */
                    BadParamException& operator=(const BadParamException &ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex BadParamException that will be moved.
                     */
                    BadParamException& operator=(BadParamException&& ex);

                    /// \brief Default constructor
                    virtual ~BadParamException() throw();

                    /// \brief This function throws the object as an exception.
                    virtual void raise() const;
            };
        } // namespace exception
    } // namespace rpc
} // namespace eprosima
#endif // _EXCEPTIONS_BADPARAMEXCEPTION_H_

