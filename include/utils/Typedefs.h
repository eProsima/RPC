#ifndef _UTILS_TYPEDEFS_H_
#define _UTILS_TYPEDEFS_H_

namespace eProsima
{
	namespace DDSRPC
	{
#define DDS_TIMEOUT(name, duration) DDS::Duration_t name = {duration.total_seconds(), duration.fractional_seconds()}; \
        if(duration.num_fractional_digits() == 3) \
           name.nanosec *= 1000000; \
        if(duration.num_fractional_digits() == 6) \
           name.nanosec *= 1000;

#define DDS_TIMEOUT_SET(name, duration) name.sec = duration.total_seconds(); \
        name.nanosec = duration.fractional_seconds(); \
        if(duration.num_fractional_digits() == 3) \
           name.nanosec *= 1000000; \
        if(duration.num_fractional_digits() == 6) \
           name.nanosec *= 1000;


		class ServerRPC;
		class Server;

		typedef void(*fExecFunction)(Server*, void*, ServerRPC*);

		typedef void (*fDeleteRequestData)(void*);

		typedef void* (*fCreateRequestData)();

		typedef void (*fDeleteReplyData)(void*);

		typedef void* (*fCreateReplyData)();

	} // namespace DDSRPC
} // namespace eProsima

#endif // _UTILS_TYPEDEFS_H_
