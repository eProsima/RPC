:: This script build RPCDDS library for platform Win64

@echo off

:: Initialize the returned value to 0 (all succesfully)
set errorstatus=0

:: Save old and set NDDSTARGET environment variable
set NDDSTARGET_OLD=%NDDSTARGET%
set NDDSTARGET=x64Win64VS2010

:: Set environment for RPCDDS
call set_environment.bat set

:: RTI DDS

:: Release DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds.sln" /t:Clean /p:Configuration="ReleaseDLL"
:: Build the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds.sln" /t:Build /p:Configuration="ReleaseDLL"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds.sln" /t:Clean /p:Configuration="DebugDLL"
:: Build the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds.sln" /t:Build /p:Configuration="DebugDLL"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds.sln" /t:Clean /p:Configuration="Release"
:: Build the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds.sln" /t:Build /p:Configuration="Release"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds.sln" /t:Clean /p:Configuration="Debug"
:: Build the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds.sln" /t:Build /p:Configuration="Debug"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: OPENDDS

:: Release DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds_opendds.sln" /t:Clean /p:Configuration="ReleaseDLL"
:: Build the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds_opendds.sln" /t:Build /p:Configuration="ReleaseDLL"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds_opendds.sln" /t:Clean /p:Configuration="DebugDLL"
:: Build the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds_opendds.sln" /t:Build /p:Configuration="DebugDLL"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Release Configuration
:: Clean the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds_opendds.sln" /t:Clean /p:Configuration="Release"
:: Build the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds_opendds.sln" /t:Build /p:Configuration="Release"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:: Debug Configuration
:: Clean the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds_opendds.sln" /t:Clean /p:Configuration="Debug"
:: Build the visual solution
msbuild "..\..\win32\x64Win64VS2010\rpcdds_opendds.sln" /t:Build /p:Configuration="Debug"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :restore

:restore
:: Restore environment for RPCDDS
call set_environment.bat restore

:: Restore old value of NDDSTARGET environment variable.
set NDDSTARGET=%NDDSTARGET_OLD%
goto :EOF
