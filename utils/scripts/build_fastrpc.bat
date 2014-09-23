:: This script build FASTRPC library for platform Win32

@echo off

:: Initialize the returned value to 0 (all succesfully)
set errorstatus=0

:: Get the current vesion of FASTRPC
call ..\..\thirdparty\dev-env\scripts\common_pack_functions.bat :getVersionFromCPP VERSIONFASTRPC ..\..\include\fastrpc\fastrpc_version.h
if not %errorstatus%==0 goto :EOF

:: Release DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="ReleaseDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="ReleaseDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="DebugDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="DebugDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="Release" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="Release" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="Debug" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="Debug" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="ReleaseDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="ReleaseDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="DebugDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="DebugDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="Release" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="Release" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="Debug" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="Debug" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:restore

goto :EOF

