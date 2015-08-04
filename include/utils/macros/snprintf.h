#ifndef _EPROSIMA_C_MACROS_SNPRINTF_H_
#define _EPROSIMA_C_MACROS_SNPRINTF_H_

#ifndef SNPRINTF
#if defined(_WIN32)
#define SNPRINTF _snprintf
#elif defined(__linux)
#define SNPRINTF snprintf
#endif
#endif // SNPRINTF

#endif // _EPROSIMA_C_MACROS_SNPRINTF_H_
