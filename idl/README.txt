Generate MessageHeader source:

_________
OPENDDS
_________

tao_idl.exe -SS -Sa -Wb,export_macro=DDSRPC_WIN32_DLL_API_VARIABLE -Wb,export_include=utils/ddsrpc.h MessageHeader.idl

opendds_idl.exe -Wb,export_macro=DDSRPC_WIN32_DLL_API_VARIABLE -Wb,export_include=utils/ddsrpc.h MessageHeader.idl