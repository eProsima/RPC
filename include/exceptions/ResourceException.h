#ifndef _EXCEPTIONS_RESOURCEEXCEPTION_H_
#define _EXCEPTIONS_RESOURCEEXCEPTION_H_

#include <exception>

namespace eProsima
{
    namespace DDSRPC
    {
        class ResourceException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Resource error";
            }
        };
    } // namespace DDSRPC
} // namespace eProsima
#endif // _EXCEPTIONS_RESOURCEEXCEPTION_H_
