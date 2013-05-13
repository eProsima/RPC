:: This script build RPCDDS library for platform Win32

@echo off

:: Initialize the returned value to 0 (all succesfully)
set errorstatus=0

:: Save old and set NDDSTARGET environment variable
set NDDSTARGET_OLD=%NDDSTARGET%
set NDDSTARGET=i86Win32VS2010

:: Set environment for RPCDDS
call set_environment.bat set

:: Release DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\i86Win32VS2010\rpcdds.sln" /t:Clean /p:Configuration="ReleaseDLL" /p:Platform="Win32"
:: Build the visual solution
msbuild "..\..\win32\i86Win32VS2010\rpcdds.sln" /t:Build /p:Configuration="ReleaseDLL" /p:Platform="Win32"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\i86Win32VS2010\rpcdds.sln" /t:Clean /p:Configuration="DebugDLL" /p:Platform="Win32"
:: Build the visual solution
msbuild "..\..\win32\i86Win32VS2010\rpcdds.sln" /t:Build /p:Configuration="DebugDLL" /p:Platform="Win32"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
msbuild "..\..\win32\i86Win32VS2010\rpcdds.sln" /t:Clean /p:Configuration="Release" /p:Platform="Win32"
:: Build the visual solution
msbuild "..\..\win32\i86Win32VS2010\rpcdds.sln" /t:Build /p:Configuration="Release" /p:Platform="Win32"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
msbuild "..\..\win32\i86Win32VS2010\rpcdds.sln" /t:Clean /p:Configuration="Debug" /p:Platform="Win32"
:: Build the visual solution
msbuild "..\..\win32\i86Win32VS2010\rpcdds.sln" /t:Build /p:Configuration="Debug" /p:Platform="Win32"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:restore
:: Restore environment for RPCDDS
call set_environment.bat restore

:: Restore old value of NDDSTARGET environment variable.
set NDDSTARGET=%NDDSTARGET_OLD%
goto :EOF

