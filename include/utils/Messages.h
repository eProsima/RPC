#ifndef _UTILS_MESSAGES_H_
#define _UTILS_MESSAGES_H_

namespace DDSRPC
{

	typedef enum ReturnMessage
	{
		CLIENT_ERROR = -2,
		RECEIVED_OTHER_REQUEST,
		SERVER_TIMEOUT,
		SERVER_ERROR,
		WITHOUT_RESOURCES,
		OPERATION_SUCCESSFUL,
		NO_SERVER
	} ReturnMessage;

} // namespace DDSRPC

#endif // _UTILS_MESSAGES_H_
