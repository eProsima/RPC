#ifndef _DDSCS_H_
#define _DDSCS_H_

#ifdef DDSCS_WIN32_DLL_EXPORTS
#define DDSCS_WIN32_DLL_API __declspec(dllexport) 
#else 
#define DDSCS_WIN32_DLL_API
#endif 

#endif //_DDSCS_H_