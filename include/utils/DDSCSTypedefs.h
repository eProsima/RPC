#ifndef _DDSCSTYPEDEFS_H_
#define _DDSCSTYPEDEFS_H_

class ServerRemoteService;

typedef void(*fExecFunction)(ServerRemoteService*, void*);

typedef void (*fDeleteRequestData)(void*);

typedef void* (*fCreateRequestData)();

typedef void (*fDeleteReplyData)(void*);

typedef void* (*fCreateReplyData)();

#endif // _DDSCSTYPEDEFS_H_
