:: This script build FASTRPC library for platform Win32

@echo off

:: Initialize the returned value to 0 (all succesfully)
set errorstatus=0

:: Get the current vesion of FASTRPC
call ..\..\thirdparty\dev-env\scripts\common_pack_functions.bat :getVersionFromCPP VERSIONFASTRPC ..\..\include\fastrpc\fastrpc_version.h
if not %errorstatus%==0 goto :EOF

:: Release DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCRESTReleaseDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCRESTReleaseDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCRESTDebugDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCRESTDebugDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCRESTRelease" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCRESTRelease" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCRESTDebug" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCRESTDebug" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCRESTReleaseDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCRESTReleaseDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCRESTDebugDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCRESTDebugDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCRESTRelease" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCRESTRelease" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="RPCRESTDebug" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="RPCRESTDebug" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:restore

goto :EOF
