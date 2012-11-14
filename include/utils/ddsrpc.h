#ifndef _UTILS_DDSRPC_H_
#define _UTILS_DDSRPC_H_

#ifdef DDSRPC_WIN32_DLL_EXPORTS
#define DDSRPC_WIN32_DLL_API __declspec(dllexport) 
#else 
#define DDSRPC_WIN32_DLL_API
#endif

#if defined(DDSRPC_WIN32_DLL_VARIABLE) 
  #if defined(DDSRPC_WIN32_DLL_EXPORTS)
    #define DDSRPC_WIN32_DLL_API_VARIABLE __declspec( dllexport )
  #else
    #define DDSRPC_WIN32_DLL_API_VARIABLE __declspec( dllimport )
  #endif /* RTI_dds_c_DLL_EXPORT */
#else 
    #define DDSRPC_WIN32_DLL_API_VARIABLE
#endif /* RTI_dds_c_DLL_VARIABLE */

#if (defined(RTI_WIN32) || defined(OPENDDS_WIN32))
#define DDSRPC_USE_NOEXCEPT
#elif (defined(RTI_LINUX) || defined(OPENDDS_LINUX))
#define DDSRPC_USE_NOEXCEPT _GLIBCXX_USE_NOEXCEPT
#endif

#endif //_UTILS_DDSRPC_H_
