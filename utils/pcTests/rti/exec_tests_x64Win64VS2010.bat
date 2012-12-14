:: This script runs all tests in this directory and checks their results.

setlocal EnableDelayedExpansion
setlocal EnableExpansion
@echo off

:: Initialize the returned value to 0 (all succesfully)
set errorstatus=0

:: Save old and set NDDSTARGET environment variable
set NDDSTARGET_OLD=%NDDSTARGET%
set NDDSTARGET=x64Win64VS2010

:: Save old and set PATH environment variable
set PATH_OLD_OLD=%PATH%
set PATH=%RPCDDSHOME%\lib\%NDDSTARGET%;%HOME%\librerias\boost_1_51_0\lib\x64;%PATH%

:: Set environment for RPCDDS
call ..\..\..\scripts\set_environment.bat set

:: Find all directories.
for /D %%D in ("*") do (
   :: Enter to the directory.
   cd %%D
   if exist exec_test.bat (
      call exec_test.bat
   ) else (
      call :execTest %%D
   )
   :: Go out to the parent directory.
   cd ..
   :: Detect error in call.
   if not !errorstatus!==0 goto :exit
)
goto :exit

:: This function execute a test in a directory. Use "call" to call this method.
:execTest
:: Backup of Client.cxx file.
copy Client.cxx Client.cxx.backup
:: Backup of the ServerImpl.cxx file
copy %*ServerImpl.cxx %*ServerImpl.cxx.backup
:: Delete all generated files.
del *.h *.cxx %*RequestReply.idl *-x64Win64VS2010*
:: Generates the file with RPCDDS script
call %RPCDDSHOME%\scripts\rpcdds_rti_pcTests.bat -ppDisable -example x64Win64VS2010 "%*.idl"
set errorstatus=%ERRORLEVEL%
:: Copy backup to original files.
move Client.cxx.backup Client.cxx
move %*ServerImpl.cxx.backup %*ServerImpl.cxx
if not %errorstatus%==0 goto :EOF

:: Start executing tests in each configuration.

:: Release DLL Configuration
:: Clean the visual solution
msbuild "%*-x64Win64VS2010.sln" /t:Clean
:: Build the visual solution
msbuild "%*-x64Win64VS2010.sln" /t:Build /p:Configuration="Release DLL"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start objs\x64Win64VS2010\%*Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"objs\x64Win64VS2010\%*Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%*Server.exe"
if not %errorstatus%==0 goto :EOF

:: Debug DLL Configuration
:: Clean the visual solution
msbuild "%*-x64Win64VS2010.sln" /t:Clean
:: Build the visual solution
msbuild "%*-x64Win64VS2010.sln" /t:Build /p:Configuration="Debug DLL"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start objs\x64Win64VS2010\%*Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"objs\x64Win64VS2010\%*Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%*Server.exe"
if not %errorstatus%==0 goto :EOF

:: Release Configuration
:: Clean the visual solution
msbuild "%*-x64Win64VS2010.sln" /t:Clean
:: Build the visual solution
msbuild "%*-x64Win64VS2010.sln" /t:Build /p:Configuration="Release"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start objs\x64Win64VS2010\%*Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"objs\x64Win64VS2010\%*Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%*Server.exe"
if not %errorstatus%==0 goto :EOF

:: Debug Configuration
:: Clean the visual solution
msbuild "%*-x64Win64VS2010.sln" /t:Clean
:: Build the visual solution
msbuild "%*-x64Win64VS2010.sln" /t:Build /p:Configuration="Debug"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start objs\x64Win64VS2010\%*Server.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"objs\x64Win64VS2010\%*Client.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%*Server.exe"
if not %errorstatus%==0 goto :EOF

goto :EOF

:: Fuction wait. Use "call" to call this function.
:wait
@ping 192.168.1.10 -n %~1 -w 1000
goto :EOF

:: Function exit ::
:exit
:: Restore environment for RPCDDS
call ..\..\..\scripts\set_environment.bat restore

:: Restore old value of NDDSTARGET environment variable.
set NDDSTARGET=%NDDSTARGET_OLD%

:: Restore old value of PATH environment variable.
set PATH=%PATH_OLD_OLD%

if %errorstatus%==0 (echo "TEST SUCCESFULLY") else (echo "TEST FAILED")
exit /B %errorstatus%
goto :EOF
