#ifndef _UTILS_DDSRPC_H_
#define _UTILS_DDSRPC_H_

#ifdef DDSRPC_WIN32_DLL_EXPORTS
#define DDSRPC_WIN32_DLL_API __declspec(dllexport) 
#else 
#define DDSRPC_WIN32_DLL_API
#endif 

#endif //_UTILS_DDSRPC_H_