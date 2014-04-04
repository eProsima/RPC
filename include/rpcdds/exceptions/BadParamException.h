/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_BADPARAMEXCEPTION_H_
#define _EXCEPTIONS_BADPARAMEXCEPTION_H_

#include <rpcdds/exceptions/SystemException.h>

namespace eprosima
{
    namespace rpcdds
    {
        namespace exception
        {
            /**
             * @brief This class is thrown as an exception when there is an error initializating an object.
             * @ingroup EXCEPTIONMODULE
             */
            class RPCDDS_DllAPI BadParamException : public SystemException
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
    } // namespace rpcdds
} // namespace eprosima
#endif // _EXCEPTIONS_BADPARAMEXCEPTION_H_

