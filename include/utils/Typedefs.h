#ifndef _UTILS_TYPEDEFS_H_
#define _UTILS_TYPEDEFS_H_

namespace eProsima
{
	namespace DDSRPC
	{

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
