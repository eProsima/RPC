/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _EXCEPTIONS_SYSTEMEXCEPTION_H_
#define _EXCEPTIONS_SYSTEMEXCEPTION_H_

#include "Exception.h"

#include <cstdint>
#include <string>

#undef minor

namespace eprosima
{
    namespace rpc
    {
        namespace exception
        {
            /**
             * @brief This abstract class is used to create internal FASTRPC exceptions.
             * @ingroup EXCEPTIONMODULE
             */
            class SystemException : public Exception
            {
                public:

                    /// \brief Default destructor.
                    virtual RPC_DllAPI ~SystemException() throw();

                    /**
                     * \brief This function returns the number associated with the system exception.
                     *
                     * \return The number associated with the system exception.
                     */
                    RPC_DllAPI const int32_t& minor() const;

                    /**
                     * \brief This function sets the number that will be associated with the system exception.
                     *
                     * \param minor The number that will be associated with the system exception.
                     */
                    RPC_DllAPI void minor(const int32_t &minor);

                    /// \brief This function throws the object as an exception.
                    virtual RPC_DllAPI void raise() const = 0;
                    
					/**
                     * \brief This function returns the error message.
                     *
                     * \return The error message.
                     */
                    virtual RPC_DllAPI const char* what() const throw();

                protected:

                    /**
                     * \brief Default constructor.
                     *
                     * \param message An error message. This message is copied.
                     */
                    RPC_DllAPI explicit SystemException(const char* const &message);

                    /**
                     * \brief Default copy constructor.
                     *
                     * \param ex SystemException that will be copied.
                     */
                    RPC_DllAPI SystemException(const SystemException &ex);

                    /**
                     * \brief Default move constructor.
                     *
                     * \param ex SystemException that will be moved.
                     */
                    RPC_DllAPI SystemException(SystemException&& ex);

                    /**
                     * \brief Constructor.
                     *
                     * \param message An error message. This message is copied.
                     * \param minor The number that will be associated with the system exception.
                     */
                    RPC_DllAPI explicit SystemException(const char* const &message, int32_t minor);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex SystemException that will be copied.
                     */
                    RPC_DllAPI SystemException& operator=(const SystemException &ex);

                    /**
                     * \brief Assigment operation.
                     *
                     * \param ex SystemException that will be moved.
                     */
                    RPC_DllAPI SystemException& operator=(SystemException&& ex);

                private:

                    std::string m_message;

                    int32_t m_minor;
            };
        } // namespace exception
    } // namespace rpc
} // namespace eprosima

#endif // _EXCEPTIONS_SYSTEMEXCEPTION_H_
