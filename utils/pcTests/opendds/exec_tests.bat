:: This script runs all tests in this directory and checks their results.

setlocal EnableDelayedExpansion
setlocal EnableExpansion
@echo off

:: Initialize the returned value to 0 (all succesfully)
set errorstatus=0

:: Check the parameters
if "%1"=="" (
   echo "Usage: exec_tests.bat <platform>"
   exit /B 65
)

:: Save old and set NDDSTARGET environment variable
set NDDSTARGET_OLD=%NDDSTARGET%
set NDDSTARGET=%1

:: Save old and set PATH environment variable
set PATH_OLD_OLD=%PATH%
:: Check if x64
echo %1|findstr /r "x64*" >nul
if %ERRORLEVEL%==0 set PATH=%RPCDDSHOME%\lib\%NDDSTARGET%;%HOME%\librerias\boost_1_51_0\lib\x64;%PATH%
::Check if i86
echo %1|findstr /r "i86*" >nul
if %ERRORLEVEL%==0 set PATH=%RPCDDSHOME%\lib\%NDDSTARGET%;%HOME%\librerias\boost_1_51_0\lib\i86;%PATH%

:: Set environment for RPCDDS
call ..\..\scripts\set_environment.bat set

:: Find all directories.
for /D %%D in ("*") do (
   if exist exec_test.bat (
      call exec_test.bat
   ) else (
      call :execTest %1 %%D
   )
   :: Detect error in call.
   if not !errorstatus!==0 goto :exit
)
goto :exit

:: This function execute a test in a directory. Use "call" to call this method.
:execTest
:: Clean output directory
if exist output rd /S /Q output
mkdir output
::Info about test
echo "EXECUTING %2"
:: Generates the file with RPCDDS script
call %RPCDDSHOME%\scripts\rpcdds_opendds_pcTests.bat -ppDisable -t %HOME%\tmp -d output -example %1 "%2\%2.idl"
set errorstatus=%ERRORLEVEL%
:: Copy backup to original files.
:: Copy static test files into output directory
copy %2\* output\
if not %errorstatus%==0 goto :EOF

:: Start executing tests in each configuration.

:: Release DLL Configuration
:: Clean the visual solution
msbuild "output\%2-%1.sln" /t:Clean
:: Build the visual solution
msbuild "output\%2-%1.sln" /t:Build /p:Configuration="Release DLL"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start output\objs\%1\%2Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\objs\%1\%2Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%2Server.exe"
if not %errorstatus%==0 goto :EOF

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "output\%2-%1.sln" /t:Clean
:: Build the visual solution
msbuild "output\%2-%1.sln" /t:Build /p:Configuration="Debug DLL"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start output\objs\%1\%2Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\objs\%1\%2Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%2Server.exe"
if not %errorstatus%==0 goto :EOF

:: Release Configuration
:: Clean the visual solution
msbuild "output\%2-%1.sln" /t:Clean
:: Build the visual solution
msbuild "output\%2-%1.sln" /t:Build /p:Configuration="Release"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start output\objs\%1\%2Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\objs\%1\%2Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%2Server.exe"
if not %errorstatus%==0 goto :EOF

:: Debug Configuration
:: Clean the visual solution
msbuild "output\%2-%1.sln" /t:Clean
:: Build the visual solution
msbuild "output\%2-%1.sln" /t:Build /p:Configuration="Debug"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start output\objs\%1\%2Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\objs\%1\%2Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%2Server.exe"
if not %errorstatus%==0 goto :EOF

goto :EOF

:: Fuction wait. Use "call" to call this function.
:wait
@ping 192.168.1.10 -n %~1 -w 1000
goto :EOF

:: Function exit ::
:exit
:: Remove output directory
rd /S /Q output

:: Restore environment for RPCDDS
call ..\..\scripts\set_environment.bat restore

:: Restore old value of NDDSTARGET environment variable.
set NDDSTARGET=%NDDSTARGET_OLD%

:: Restore old value of PATH environment variable.
set PATH=%PATH_OLD_OLD%

if %errorstatus%==0 (echo "TEST SUCCESFULLY") else (echo "TEST FAILED")
exit /B %errorstatus%
goto :EOF
