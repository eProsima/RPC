:: This script build FASTRPC library for platform Win32

@echo off

:: Initialize the returned value to 0 (all succesfully)
set errorstatus=0

set clean=0

set argC=0
for %%x in (%*) do set /A argC+=1

if %argC% geq 1 (
    if "%1"=="clean" set clean=1
)

:: Get the current vesion of FASTRPC
call ..\..\thirdparty\dev-env\scripts\common_pack_functions.bat :getVersionFromCPP VERSIONFASTRPC ..\..\include\fastrpc\fastrpc_version.h
if not %errorstatus%==0 goto :EOF

:: Release DLL Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="ReleaseDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="ReleaseDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="DebugDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="DebugDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="Release" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="Release" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="Debug" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="Debug" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release DLL Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="ReleaseDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="ReleaseDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="DebugDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="DebugDLL" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="Release" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="Release" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="Debug" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="Debug" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: VS2010 libraries

:: Release DLL Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="ReleaseDLLVS2010" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="ReleaseDLLVS2010" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="DebugDLLVS2010" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="DebugDLLVS2010" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="ReleaseVS2010" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="ReleaseVS2010" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="DebugVS2010" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="DebugVS2010" /p:Platform="Win32" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release DLL Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="ReleaseDLLVS2010" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="ReleaseDLLVS2010" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="DebugDLLVS2010" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="DebugDLLVS2010" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="ReleaseVS2010" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="ReleaseVS2010" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
if %clean%==1 (
msbuild "..\..\win32\rti\fastrpc.sln" /t:Clean /p:Configuration="DebugVS2010" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
)
:: Build the visual solution
msbuild "..\..\win32\rti\fastrpc.sln" /t:Build /p:Configuration="DebugVS2010" /p:Platform="x64" /p:VERSION="-%VERSIONFASTRPC%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:restore

goto :EOF

