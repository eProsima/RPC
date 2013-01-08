:: This script runs the MultiThread test.

@echo off

set TEST_NAME=MultithreadTest
:: Backup of Client.cxx file.
copy Client.cxx Client.cxx.backup
:: Backup of the ServerImpl.cxx file
copy %TEST_NAME%ServerImpl.cxx %TEST_NAME%ServerImpl.cxx.backup
:: Delete all generated files.
del *.h *.cxx %TEST_NAME%RequestReply.idl
:: Generates the file with RPCDDS script
call %RPCDDSHOME%\scripts\rpcdds_rti_pcTests.bat -ppDisable "%TEST_NAME%.idl"
set errorstatus=%ERRORLEVEL%
:: Copy backup to original files.
move Client.cxx.backup Client.cxx
move %TEST_NAME%ServerImpl.cxx.backup %TEST_NAME%ServerImpl.cxx
if not %errorstatus%==0 goto :exit

:: Start executing test in each configuration.

:: Release DLL Configuration
:: Clean the visual solution
msbuild "%TEST_NAME%-x64Win64VS2010.sln" /t:Clean
:: Build the visual solution
msbuild "%TEST_NAME%-x64Win64VS2010.sln" /t:Build /p:Configuration="Release DLL"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Execute the server in other cmd.exe
start objs\x64Win64VS2010\%TEST_NAME%Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"objs\x64Win64VS2010\%TEST_NAME%Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%TEST_NAME%Server.exe"
if not %errorstatus%==0 goto :exit

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "%TEST_NAME%-x64Win64VS2010.sln" /t:Clean
:: Build the visual solution
msbuild "%TEST_NAME%-x64Win64VS2010.sln" /t:Build /p:Configuration="Debug DLL"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Execute the server in other cmd.exe
start objs\x64Win64VS2010\%TEST_NAME%Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"objs\x64Win64VS2010\%TEST_NAME%Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%TEST_NAME%Server.exe"
if not %errorstatus%==0 goto :exit

:: Release Configuration
:: Clean the visual solution
msbuild "%TEST_NAME%-x64Win64VS2010.sln" /t:Clean
:: Build the visual solution
msbuild "%TEST_NAME%-x64Win64VS2010.sln" /t:Build /p:Configuration="Release"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Execute the server in other cmd.exe
start objs\x64Win64VS2010\%TEST_NAME%Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"objs\x64Win64VS2010\%TEST_NAME%Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%TEST_NAME%Server.exe"
goto :exit

:: Fuction wait. Use "call" to call this function.
:wait
@ping 192.168.1.10 -n %~1 -w 1000
goto :EOF

:: Function exit ::
:exit
if %errorstatus%==0 (echo "TEST SUCCESFULLY") else (echo "TEST FAILED")
goto :EOF
