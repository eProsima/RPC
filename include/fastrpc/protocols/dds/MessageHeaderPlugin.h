/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _PROTOCOLS_DDS_MESSAGEHEADERPLUGIN_H_
#define _PROTOCOLS_DDS_MESSAGEHEADERPLUGIN_H_

#include "fastrpc/fastrpc_dll.h"

struct DDS_TypeCode;

namespace eprosima
{
    namespace rpc
    {
        namespace protocol
        {
            namespace dds
            {
                /*!
                 * @brief This class offers the functions needed by DDS middleware to use the class Identification.
				 * @ingroup PROTOCOLMODULE
                 */
                class FASTRPC_DllAPI IdentificationPlugin
                {
                    public:

                        /*!
                         * @brief This function returns the TypeCode.
                         * @return The TypeCode.
                         */
                        static DDS_TypeCode* get_typecode();

                    private:

                            IdentificationPlugin(){}
                };

                /*!
                 * @brief This class offers the functions needed by DDS middleware to use the class RequestHeaderPlugin.
				 * @ingroup PROTOCOLMODULE
                 */
                class FASTRPC_DllAPI RequestHeaderPlugin
                {
                    public:

                        /*!
                         * @brief This function returns the TypeCode.
                         * @return The TypeCode.
                         */
                        static DDS_TypeCode* get_typecode();

                    private:

                            RequestHeaderPlugin(){}
                };

                /*!
                 * @brief This class offers the functions needed by DDS middleware to use the class ReplyHeaderPlugin.
				 * @ingroup PROTOCOLMODULE
                 */
                class FASTRPC_DllAPI ReplyHeaderPlugin
                {
                    public:

                        /*!
                         * @brief This function returns the TypeCode.
                         * @return The TypeCode.
                         */
                        static DDS_TypeCode* get_typecode();

                    private:

                            ReplyHeaderPlugin(){}
                };
            } // namespace dds
        } // namespace protocol
    } // namespace rpc
} // namespace eprosima

#endif // _PROTOCOLS_DDS_MESSAGEHEADERPLUGIN_H_
