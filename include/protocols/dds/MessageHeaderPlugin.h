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
                class FASTRPC_DllAPI GuidPrefix_tPlugin
                {
                    public:

                        /*!
                         * @brief This function returns the TypeCode.
                         * @return The TypeCode.
                         */
                        static DDS_TypeCode* get_typecode();

                    private:

                        GuidPrefix_tPlugin(){}
                };
                
                class FASTRPC_DllAPI EntityId_tPlugin
                {
                    public:

                        /*!
                         * @brief This function returns the TypeCode.
                         * @return The TypeCode.
                         */
                        static DDS_TypeCode* get_typecode();

                    private:

                        EntityId_tPlugin(){}
                };

                class FASTRPC_DllAPI GUID_tPlugin
                {
                    public:

                        /*!
                         * @brief This function returns the TypeCode.
                         * @return The TypeCode.
                         */
                        static DDS_TypeCode* get_typecode();

                    private:

                        GUID_tPlugin(){}
                };

                class FASTRPC_DllAPI SequenceNumber_tPlugin
                {
                    public:

                        /*!
                         * @brief This function returns the TypeCode.
                         * @return The TypeCode.
                         */
                        static DDS_TypeCode* get_typecode();

                    private:

                        SequenceNumber_tPlugin(){}
                };

                class FASTRPC_DllAPI SampleIdentityPlugin
                {
                    public:

                        /*!
                         * @brief This function returns the TypeCode.
                         * @return The TypeCode.
                         */
                        static DDS_TypeCode* get_typecode();

                    private:

                        SampleIdentityPlugin(){}
                };

                namespace rpc
                {
                    class FASTRPC_DllAPI UnknownOperationPlugin
                    {
                        public:

                            /*!
                             * @brief This function returns the TypeCode.
                             * @return The TypeCode.
                             */
                            static DDS_TypeCode* get_typecode();

                        private:

                            UnknownOperationPlugin(){}
                    };

                    class FASTRPC_DllAPI UnknownExceptionPlugin
                    {
                        public:

                            /*!
                             * @brief This function returns the TypeCode.
                             * @return The TypeCode.
                             */
                            static DDS_TypeCode* get_typecode();

                        private:

                            UnknownExceptionPlugin(){}
                    };

                    class FASTRPC_DllAPI UnusedMemberPlugin
                    {
                        public:

                            /*!
                             * @brief This function returns the TypeCode.
                             * @return The TypeCode.
                             */
                            static DDS_TypeCode* get_typecode();

                        private:

                            UnusedMemberPlugin(){}
                    };

                    class FASTRPC_DllAPI RemoteExceptionCode_tPlugin
                    {
                        public:

                            /*!
                             * @brief This function returns the TypeCode.
                             * @return The TypeCode.
                             */
                            static DDS_TypeCode* get_typecode();

                        private:

                            RemoteExceptionCode_tPlugin(){}
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
                } // namespace rpc
            } // namespace dds
        } // namespace protocol
    } // namespace rpc
} // namespace eprosima

#endif // _PROTOCOLS_DDS_MESSAGEHEADERPLUGIN_H_
