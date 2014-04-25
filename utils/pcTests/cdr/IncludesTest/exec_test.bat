:: This script runs all tests in this directory and checks their results. Supports two optional parameters.
:: @param The unit test to be run. If it isn't set, then all unit tests are run.
:: @param Second parameter is the used architecture. Supported i86 and x64. If it isn't set all architectures are used.

setlocal EnableDelayedExpansion
@echo off

::Info about test
echo "EXECUTING IncludesTest for %NDDSTARGET%"
:: Clean output directory
if exist output rd /S /Q output
mkdir output
:: Generates the Util idl file with FASTRPC script
mkdir output\util
:: Generates the rest of files with FASTRPC script
call ..\..\..\scripts\fastrpcgen.bat -local -d output\util -example %NDDSTARGET% -protocol fastcdr "IncludesTest\util\Util.idl"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
call ..\..\..\scripts\fastrpcgen.bat -local -d output -example %NDDSTARGET% -protocol fastcdr -IIncludesTest -IIncludesTest\hide "IncludesTest\IncludesTest.idl" "IncludesTest\SameDirectory.idl" "IncludesTest\Level2.idl" "IncludesTest\hide\Hide.idl"
set errorstatus=%ERRORLEVEL%
:: Copy backup to original files.
:: Copy static test files into output directory
copy IncludesTest\* output\
if not %errorstatus%==0 goto :EOF

:: Start executing tests in each configuration.

:: Release DLL Configuration
:: Clean the Util visual solution
msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:: Build the Util visual solution
msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Release DLL" /p:Platform="%1"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Copy the Util idl library
mkdir output\lib
mkdir output\lib\%NDDSTARGET%
copy output\util\lib\%NDDSTARGET%\Util.* output\lib\%NDDSTARGET%
:: Clean the rest files visual solution
msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:: Build the rest files visual solution
msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Release DLL" /p:Platform="%1"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
copy output\lib\%NDDSTARGET%\*.dll output\bin\%NDDSTARGET%\
