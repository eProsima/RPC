:: This script runs all tests in this directory and checks their results.

setlocal EnableDelayedExpansion
setlocal EnableExpansion
@echo off

:: Initialize the returned value to 0 (all succesfully)
set errorstatus=0

:: Set environment for RPCDDS
call %EPROSIMADIR%\scripts\common_dds_functions.bat :setRTIversion ndds.5.0.0

:: Create symbolic link to EPROSIMADIR in this rpcdds fold.
if not exist ..\..\..\include\eProsima_cpp mklink /D ..\..\..\include\eProsima_cpp %EPROSIMADIR%\code\eProsima_cpp
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

:: Find all directories.
for /D %%D in ("*") do (
   if exist exec_test.bat (
      call exec_test.bat
   ) else (
      :: i86 target
      :: Set environtment
      call %EPROSIMADIR%\scripts\common_dds_functions.bat :setRTItarget i86Win32VS2010
      call %EPROSIMADIR%\scripts\common_exectest_functions.bat :setTargetPath "..\..\..\lib\i86Win32VS2010;%LIB_BOOST_PATH%\lib\i86"
      call :execTest i86Win32VS2010 Win32 %%D
      :: Restore environtment
      call %EPROSIMADIR%\scripts\common_exectest_functions.bat :restoreTargetPath
      call %EPROSIMADIR%\scripts\common_dds_functions.bat :restoreRTItarget
   )
   :: Detect error in call.
   if not !errorstatus!==0 goto :exit
)
goto :exit

:: This function execute a test in a directory. Use "call" to call this method.
:: @param Target used.
:: @param Plaform for Visual Studio.
:: @param Name of the test
:execTest
::Info about test
echo "EXECUTING %3 for %1"
:: Clean output directory
if exist output rd /S /Q output
mkdir output
:: Generates the file with RPCDDS script
call ..\..\..\scripts\rpcdds_rti_pcTests.bat -ppDisable -d output -example %1 "%3\%3.idl"
set errorstatus=%ERRORLEVEL%
:: Copy backup to original files.
:: Copy static test files into output directory
copy %3\* output\
if not %errorstatus%==0 goto :EOF

:: Start executing tests in each configuration.

:: Release DLL Configuration
:: Clean the visual solution
msbuild "output\%3-%1.sln" /t:Clean /p:Platform="%2"
:: Build the visual solution
msbuild "output\%3-%1.sln" /t:Build /p:Configuration="Release DLL" /p:Platform="%2"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start output\objs\%1\%3Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\objs\%1\%3Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%3Server.exe"
if not %errorstatus%==0 goto :EOF

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "output\%3-%1.sln" /t:Clean /p:Platform="%2"
:: Build the visual solution
msbuild "output\%3-%1.sln" /t:Build /p:Configuration="Debug DLL" /p:Platform="%2"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start output\objs\%1\%3Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\objs\%1\%3Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%3Server.exe"
if not %errorstatus%==0 goto :EOF

:: Release Configuration
:: Clean the visual solution
msbuild "output\%3-%1.sln" /t:Clean /p:Platform="%2"
:: Build the visual solution
msbuild "output\%3-%1.sln" /t:Build /p:Configuration="Release" /p:Platform="%2"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start output\objs\%1\%3Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\objs\%1\%3Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%3Server.exe"
if not %errorstatus%==0 goto :EOF

:: Debug Configuration
:: Clean the visual solution
msbuild "output\%3-%1.sln" /t:Clean /p:Platform="%2"
:: Build the visual solution
msbuild "output\%3-%1.sln" /t:Build /p:Configuration="Debug" /p:Platform="%2"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start output\objs\%1\%3Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\objs\%1\%3Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%3Server.exe"
if not %errorstatus%==0 goto :EOF

goto :EOF

:: Fuction wait. Use "call" to call this function.
:wait
@ping 192.168.1.10 -n %~1 -w 1000
goto :EOF

:: Function exit ::
:exit
:: Remove output directory
::rd /S /Q output

if exist ..\..\..\include\eProsima_cpp rmdir /Q ..\..\..\include\eProsima_cpp

:: Restore environment for RPCDDS
call %EPROSIMADIR%\scripts\common_dds_functions.bat :restoreRTIversion

if %errorstatus%==0 (echo "TEST SUCCESFULLY") else (echo "TEST FAILED")
exit /B %errorstatus%
goto :EOF
