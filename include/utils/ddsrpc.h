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

#endif //_UTILS_DDSRPC_H_