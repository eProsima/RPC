:: This script runs all tests in this directory and checks their results. Supports two optional parameters.
:: @param The unit test to be run. If it isn't set, then all unit tests are run.
:: @param Second parameter is the used architecture. Supported i86 and x64. If it isn't set all architectures are used.

setlocal EnableDelayedExpansion
@echo off

::Info about test
echo "EXECUTING IncludesTest for %NDDSTARGET% using operations as topics"
:: Clean output directory
if exist output rd /S /Q output
mkdir output
:: Generates the Util idl file with FASTRPC script
mkdir output\util
:: Generates the rest of files with FASTRPC script
call ..\..\..\scripts\rpcddsgen.bat -local -transport rtps -d output\util -example %NDDSTARGET% -topicGeneration byOperation "IncludesTest\util\Util.idl"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
call ..\..\..\scripts\rpcddsgen.bat -local -transport rtps -d output -example %NDDSTARGET% -topicGeneration byOperation -IIncludesTest -IIncludesTest\hide "IncludesTest\IncludesTest.idl" "IncludesTest\SameDirectory.idl" "IncludesTest\Level2.idl" "IncludesTest\hide\Hide.idl"
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
copy output\util\lib\%NDDSTARGET%\* output\lib\%NDDSTARGET%
:: Clean the rest files visual solution
msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:: Build the rest files visual solution
msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Release DLL" /p:Platform="%1"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
copy output\lib\%NDDSTARGET%\*.dll output\bin\%NDDSTARGET%\
:: Execute the server in other cmd.exe
start output\bin\%NDDSTARGET%\IncludesTestServerExample.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\bin\%NDDSTARGET%\IncludesTestClientExample.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "IncludesTestServerExample.exe"
if not %errorstatus%==0 goto :EOF

:::: Debug DLL Configuration
:::: Clean the Util visual solution
::msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:::: Build the Util visual solution
::msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Debug DLL" /p:Platform="%1"
::set errorstatus=%ERRORLEVEL%
::if not %errorstatus%==0 goto :EOF
:::: Copy the Util idl library
::mkdir output\lib
::mkdir output\lib\%NDDSTARGET%
::copy output\util\lib\%NDDSTARGET%\* output\lib\%NDDSTARGET%
:::: Clean the visual solution
::msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:::: Build the visual solution
::msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Debug DLL" /p:Platform="%1"
::set errorstatus=%ERRORLEVEL%
::if not %errorstatus%==0 goto :EOF
::copy output\lib\%NDDSTARGET%\*.dll output\bin\%NDDSTARGET%\
:::: Execute the server in other cmd.exe
::start output\bin\%NDDSTARGET%\IncludesTestServerExample.exe
:::: Wait 5 seconds
::call :wait 5
:::: Execute the client in this cmd.exe
::"output\bin\%NDDSTARGET%\IncludesTestClientExample.exe"
::set errorstatus=%ERRORLEVEL%
:::: Kill server
::TaskKill /IM "IncludesTestServerExample.exe"
::if not %errorstatus%==0 goto :EOF

:: Release Configuration
:: Clean the Util visual solution
msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:: Build the Util visual solution
msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Release" /p:Platform="%1"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Copy the Util idl library
mkdir output\lib
mkdir output\lib\%NDDSTARGET%
copy output\util\lib\%NDDSTARGET%\* output\lib\%NDDSTARGET%
:: Clean the visual solution
msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:: Build the visual solution
msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Release" /p:Platform="%1"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start output\bin\%NDDSTARGET%\IncludesTestServerExample.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\bin\%NDDSTARGET%\IncludesTestClientExample.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "IncludesTestServerExample.exe"
if not %errorstatus%==0 goto :EOF

:::: Debug Configuration
:::: Clean the Util visual solution
::msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:::: Build the Util visual solution
::msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Debug" /p:Platform="%1"
::set errorstatus=%ERRORLEVEL%
::if not %errorstatus%==0 goto :EOF
:::: Copy the Util idl library
::mkdir output\lib
::mkdir output\lib\%NDDSTARGET%
::copy output\util\lib\%NDDSTARGET%\* output\lib\%NDDSTARGET%
:::: Clean the visual solution
::msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:::: Build the visual solution
::msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Debug" /p:Platform="%1"
::set errorstatus=%ERRORLEVEL%
::if not %errorstatus%==0 goto :EOF
:::: Execute the server in other cmd.exe
::start output\bin\%NDDSTARGET%\IncludesTestServerExample.exe
:::: Wait 5 seconds
::call :wait 5
:::: Execute the client in this cmd.exe
::"output\bin\%NDDSTARGET%\IncludesTestClientExample.exe"
::set errorstatus=%ERRORLEVEL%
:::: Kill server
::TaskKill /IM "IncludesTestServerExample.exe"
::if not %errorstatus%==0 goto :EOF

::Info about test
echo "EXECUTING IncludesTest for %NDDSTARGET% using interfaces as topics"
:: Clean output directory
if exist output rd /S /Q output
mkdir output
:: Generates the Util idl file with FASTRPC script
mkdir output\util
:: Generates the rest of files with FASTRPC script
call ..\..\..\scripts\rpcddsgen.bat -local -transport rtps -d output\util -example %NDDSTARGET% -topicGeneration byInterface "IncludesTest\util\Util.idl"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
call ..\..\..\scripts\rpcddsgen.bat -local -transport rtps -d output -example %NDDSTARGET% -topicGeneration byInterface -IIncludesTest -IIncludesTest\hide "IncludesTest\IncludesTest.idl" "IncludesTest\SameDirectory.idl" "IncludesTest\Level2.idl" "IncludesTest\hide\Hide.idl"
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
copy output\util\lib\%NDDSTARGET%\* output\lib\%NDDSTARGET%
:: Clean the rest files visual solution
msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:: Build the rest files visual solution
msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Release DLL" /p:Platform="%1"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
copy output\lib\%NDDSTARGET%\*.dll output\bin\%NDDSTARGET%\
:: Execute the server in other cmd.exe
start output\bin\%NDDSTARGET%\IncludesTestServerExample.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\bin\%NDDSTARGET%\IncludesTestClientExample.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "IncludesTestServerExample.exe"
if not %errorstatus%==0 goto :EOF

:::: Debug DLL Configuration
:::: Clean the Util visual solution
::msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:::: Build the Util visual solution
::msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Debug DLL" /p:Platform="%1"
::set errorstatus=%ERRORLEVEL%
::if not %errorstatus%==0 goto :EOF
:::: Copy the Util idl library
::mkdir output\lib
::mkdir output\lib\%NDDSTARGET%
::copy output\util\lib\%NDDSTARGET%\* output\lib\%NDDSTARGET%
:::: Clean the visual solution
::msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:::: Build the visual solution
::msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Debug DLL" /p:Platform="%1"
::set errorstatus=%ERRORLEVEL%
::if not %errorstatus%==0 goto :EOF
::copy output\lib\%NDDSTARGET%\*.dll output\bin\%NDDSTARGET%\
:::: Execute the server in other cmd.exe
::start output\bin\%NDDSTARGET%\IncludesTestServerExample.exe
:::: Wait 5 seconds
::call :wait 5
:::: Execute the client in this cmd.exe
::"output\bin\%NDDSTARGET%\IncludesTestClientExample.exe"
::set errorstatus=%ERRORLEVEL%
:::: Kill server
::TaskKill /IM "IncludesTestServerExample.exe"
::if not %errorstatus%==0 goto :EOF

:: Release Configuration
:: Clean the Util visual solution
msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:: Build the Util visual solution
msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Release" /p:Platform="%1"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Copy the Util idl library
mkdir output\lib
mkdir output\lib\%NDDSTARGET%
copy output\util\lib\%NDDSTARGET%\* output\lib\%NDDSTARGET%
:: Clean the visual solution
msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:: Build the visual solution
msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Release" /p:Platform="%1"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start output\bin\%NDDSTARGET%\IncludesTestServerExample.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\bin\%NDDSTARGET%\IncludesTestClientExample.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "IncludesTestServerExample.exe"
if not %errorstatus%==0 goto :EOF

:::: Debug Configuration
:::: Clean the Util visual solution
::msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:::: Build the Util visual solution
::msbuild "output\util\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Debug" /p:Platform="%1"
::set errorstatus=%ERRORLEVEL%
::if not %errorstatus%==0 goto :EOF
:::: Copy the Util idl library
::mkdir output\lib
::mkdir output\lib\%NDDSTARGET%
::copy output\util\lib\%NDDSTARGET%\* output\lib\%NDDSTARGET%
:::: Clean the visual solution
::msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Clean /p:Platform="%1"
:::: Build the visual solution
::msbuild "output\rpcsolution-%NDDSTARGET%.sln" /t:Build /p:Configuration="Debug" /p:Platform="%1"
::set errorstatus=%ERRORLEVEL%
::if not %errorstatus%==0 goto :EOF
:::: Execute the server in other cmd.exe
::start output\bin\%NDDSTARGET%\IncludesTestServerExample.exe
:::: Wait 5 seconds
::call :wait 5
:::: Execute the client in this cmd.exe
::"output\bin\%NDDSTARGET%\IncludesTestClientExample.exe"
::set errorstatus=%ERRORLEVEL%
:::: Kill server
::TaskKill /IM "IncludesTestServerExample.exe"
::if not %errorstatus%==0 goto :EOF

goto :EOF

:: Fuction wait. Use "call" to call this function.
:wait
@ping 192.168.1.10 -n %~1 -w 1000
goto :EOF
