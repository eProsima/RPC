/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_SYSTEMEXCEPTION_H_
#define _EXCEPTIONS_SYSTEMEXCEPTION_H_

#include "fastrpc/exceptions/Exception.h"

#include <stdint.h>

namespace eprosima
{
    namespace fastrpc
    {
        namespace exception
        {
            /**
             * @brief This abstract class is used to create internal FASTRPC exceptions.
             * @ingroup EXCEPTIONMODULE
             */
            class FASTRPC_DllAPI SystemException : public Exception
            {
                public:

                    /// \brief Default destructor.
                    virtual ~SystemException() throw();

                    /**
                     * \brief This function returns the number associated with the system exception.
                     *
                     * \return The number associated with the system exception.
                     */
                    const int32_t& minor() const;

                    /**
                     * \brief This function sets the number that will be associated with the system exception.
                     *
                     * \param minor The number that will be associated with the system exception.
                     */
                    void minor(const int32_t &minor);

                    /// \brief This function throws the object as an exception.
                    virtual void raise() const = 0;
                    
					/**
                     * \brief This function returns the error message.
                     *
                     * \return The error message.
                     */
                    virtual const char* what() const throw();

                protected:

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is copied.
                     */
                    SystemException(const std::string &message);

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is moved.
                     */
                    SystemException(std::string&& message);

                    /**
                     * \brief Default copy constructor.
                     *
                     * \param ex SystemException that will be copied.
                     */
                    SystemException(const SystemException &ex);

                    /**
                     * \brief Default move constructor.
                     *
                     * \param ex SystemException that will be moved.
                     */
                    SystemException(SystemException&& ex);

                    /**
                     * \brief Constructor.
                     *
                     * \param message An error message. This message is copied.
                     * \param minor The number that will be associated with the system exception.
                     */
                    SystemException(const std::string &message, int32_t minor);

                    /**
                     * \brief Constructor.
                     *
                     * \param message An error message. This message is moved.
                     * \param minor The number that will be associated with the system exception.
                     */
                    SystemException(std::string&& message, int32_t minor);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex SystemException that will be copied.
                     */
                    SystemException& operator=(const SystemException &ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex SystemException that will be moved.
                     */
                    SystemException& operator=(SystemException&& ex);

                private:

                    std::string m_message;

                    int32_t m_minor;
            };
        } // namespace exception
    } // namespace fastrpc
} // namespace eprosima

#endif // _EXCEPTIONS_SYSTEMEXCEPTION_H_
