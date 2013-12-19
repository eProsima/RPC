:: This script build RPCDDS library for platform Win32

@echo off

:: Initialize the returned value to 0 (all succesfully)
set errorstatus=0

:: Get the current vesion of RPCDDS
call %EPROSIMADIR%\scripts\common_pack_functions.bat :getVersionFromCPP VERSIONRPCDDS ..\..\include\rpcdds\rpcdds_version.h
if not %errorstatus%==0 goto :EOF

:: Set environment for RPCDDS
call %EPROSIMADIR%\scripts\common_dds_functions.bat :setRTIversion ndds.5.0.0

:: Set environment Win32
call %EPROSIMADIR%\scripts\common_dds_functions.bat :setRTItarget i86Win32VS2010

:: Release DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Clean /p:Configuration="ReleaseDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONRPCDDS%"
:: Build the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Build /p:Configuration="ReleaseDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONRPCDDS%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Clean /p:Configuration="DebugDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONRPCDDS%"
:: Build the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Build /p:Configuration="DebugDLL" /p:Platform="Win32" /p:VERSION="-%VERSIONRPCDDS%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Clean /p:Configuration="Release" /p:Platform="Win32" /p:VERSION="-%VERSIONRPCDDS%"
:: Build the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Build /p:Configuration="Release" /p:Platform="Win32" /p:VERSION="-%VERSIONRPCDDS%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Clean /p:Configuration="Debug" /p:Platform="Win32" /p:VERSION="-%VERSIONRPCDDS%"
:: Build the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Build /p:Configuration="Debug" /p:Platform="Win32" /p:VERSION="-%VERSIONRPCDDS%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

call %EPROSIMADIR%\scripts\common_dds_functions.bat :restoreRTItarget

:: Set environment x64
call %EPROSIMADIR%\scripts\common_dds_functions.bat :setRTItarget x64Win64VS2010


:: Release DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Clean /p:Configuration="ReleaseDLL" /p:Platform="x64" /p:VERSION="-%VERSIONRPCDDS%"
:: Build the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Build /p:Configuration="ReleaseDLL" /p:Platform="x64" /p:VERSION="-%VERSIONRPCDDS%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Clean /p:Configuration="DebugDLL" /p:Platform="x64" /p:VERSION="-%VERSIONRPCDDS%"
:: Build the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Build /p:Configuration="DebugDLL" /p:Platform="x64" /p:VERSION="-%VERSIONRPCDDS%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Clean /p:Configuration="Release" /p:Platform="x64" /p:VERSION="-%VERSIONRPCDDS%"
:: Build the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Build /p:Configuration="Release" /p:Platform="x64" /p:VERSION="-%VERSIONRPCDDS%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Clean /p:Configuration="Debug" /p:Platform="x64" /p:VERSION="-%VERSIONRPCDDS%"
:: Build the visual solution
msbuild "..\..\win32\rti\rpcdds.sln" /t:Build /p:Configuration="Debug" /p:Platform="x64" /p:VERSION="-%VERSIONRPCDDS%"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:restore
:: Restore environment for RPCDDS
call %EPROSIMADIR%\scripts\common_dds_functions.bat :restoreRTItarget

call %EPROSIMADIR%\scripts\common_dds_functions.bat :restoreRTIversion

goto :EOF

