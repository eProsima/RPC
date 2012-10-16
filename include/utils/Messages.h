#ifndef _UTILS_MESSAGES_H_
#define _UTILS_MESSAGES_H_

namespace eProsima
{
	namespace DDSRPC
	{
		/**
		 * \brief This enumeration type defines the success of an operation or
		 *        the posible errors that occur in the operation.
		 */
		typedef enum ReturnMessage
		{
			/// \brief An error occurs in the server's proxy side.
			CLIENT_ERROR = -2,
			/// \brief Timeout while the client is waiting the server's reply.
			SERVER_TIMEOUT,
			/// \brief An error occurs in the server side.
			SERVER_ERROR,
			/// \brief There are not resources to manage the server's proxy request.
			WITHOUT_RESOURCES,
			/// \brief Operation was succesful.
			OPERATION_SUCCESSFUL,
			/// \brief Server was not found.
			NO_SERVER
		} ReturnMessage;

	} // namespace DDSRPC
} // namespace eProsima

#endif // _UTILS_MESSAGES_H_
