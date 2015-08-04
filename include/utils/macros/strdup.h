#ifndef _EPROSIMA_C_MACROS_STRDUP_H_
#define _EPROSIMA_C_MACROS_STRDUP_H_

#ifndef STRDUP
#if defined(_WIN32)
#define STRDUP _strdup
#elif defined(__linux)
#define STRDUP strdup
#endif
#endif // STRDUP

#endif // _EPROSIMA_C_MACROS_STRDUP_H_
