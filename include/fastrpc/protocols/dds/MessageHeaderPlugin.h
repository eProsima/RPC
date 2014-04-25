#ifndef _PROTOCOLS_DDS_MESSAGEHEADERPLUGIN_H_
#define _PROTOCOLS_DDS_MESSAGEHEADERPLUGIN_H_

#include "fastrpc/fastrpc_dll.h"

struct DDS_TypeCode;

namespace eprosima
{
    namespace fastrpc
    {
        namespace protocol
        {
            namespace dds
            {
                class FASTRPC_DllAPI IdentificationPlugin
                {
                    public:

                        static DDS_TypeCode* get_typecode();

                    private:

                            IdentificationPlugin(){}
                };

                class FASTRPC_DllAPI RequestHeaderPlugin
                {
                    public:

                        static DDS_TypeCode* get_typecode();

                    private:

                            RequestHeaderPlugin(){}
                };

                class FASTRPC_DllAPI ReplyHeaderPlugin
                {
                    public:

                        static DDS_TypeCode* get_typecode();

                    private:

                            ReplyHeaderPlugin(){}
                };
            } // namespace dds
        } // namespace protocol
    } // namespace fastrpc
} // namespace eprosima

#endif // _PROTOCOLS_DDS_MESSAGEHEADERPLUGIN_H_
