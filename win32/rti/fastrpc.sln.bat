:: This script execute Visual Studio getting first the version of the product.

:: Get the current vesion of RPCDDS
call ..\..\thirdparty\dev-env\scripts\common_pack_functions.bat :getVersionFromCPP VERSIONFASTRPC ..\..\include\fastrpc\fastrpc_version.h
if not %errorstatus%==0 goto :EOF

set VERSION=-%VERSIONFASTRPC%

start "" "C:\Program Files (x86)\Microsoft Visual Studio 12.0\Common7\IDE\devenv.exe" fastrpc.sln
