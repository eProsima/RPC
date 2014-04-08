#ifndef _PROTOCOLS_DDS_MESSAGEHEADERPLUGIN_H_
#define _PROTOCOLS_DDS_MESSAGEHEADERPLUGIN_H_

struct DDS_TypeCode;

namespace eprosima
{
    namespace fastrpc
    {
        namespace protocol
        {
            namespace dds
            {
                class IdentificationPlugin
                {
                    public:

                        static DDS_TypeCode* get_typecode();

                    private:

                            IdentificationPlugin(){}
                };

                class RequestHeaderPlugin
                {
                    public:

                        static DDS_TypeCode* get_typecode();

                    private:

                            RequestHeaderPlugin(){}
                };

                class ReplyHeaderPlugin
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
