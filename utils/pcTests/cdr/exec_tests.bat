:: This script runs all tests in this directory and checks their results. Supports two optional parameters.
:: @param The unit test to be run. If it isn't set, then all unit tests are run.
:: @param Second parameter is the used architecture. Supported i86 and x64. If it isn't set all architectures are used.

setlocal EnableDelayedExpansion
@echo off

:: Initialize the returned value to 0 (all succesfully)
set errorstatus=0
set test_selected=
:: @default, all targets are used (i86 and x64)
set test_targets=

:: Get number of arguments
set argC=0
for %%x in (%*) do set /A argC+=1

:: Get the optional parameter
if %argC% geq 1 (
    if "%1"=="i86" set test_targets=%1
    if "%1"=="x64" set test_targets=%1
    if "!test_targets!"=="" (
        set test_selected=%1

        if %argC% geq 2 (
            if "%2"=="i86" set test_targets=%2
            if "%2"=="x64" set test_targets=%2
            if "!test_targets!"=="" (
                echo Error: Bad argument in second parameter. Valid values: i86, x64
                exit /b -1
            )
        )
    )
)

:: Check environment variables
::if "%EPROSIMADIR%"=="" (
::    echo "EPROSIMADIR environment variable is not set."
::    exit /b -1
::)

if "%FASTRPCHOME%"=="" (
    echo "RPCDDSHOME environment variable is not set."
    exit /b -1
)

::if "%FASTCDR%"=="" (
::    echo "FASTCDR environment variable is not set."
::    exit /b -1
::)

:: Find all directories.
for /D %%D in ("*") do (
   set exec_test_bool=0
   set exec_target_bool=0
   if "%test_selected%"=="" set exec_test_bool=1
   if "%test_selected%"=="%%D" set exec_test_bool=1
   if !exec_test_bool!==1 (
      :: Exec internal batch file
      if exist "%%D\exec_test.bat" (
	 :: i86 target
         if %errorstatus%==0 (
            if "%test_targets%"=="" set exec_target_bool=1
            if "%test_targets%"=="i86" set exec_target_bool=1
            if !exec_target_bool!==1 (
                :: i86 target
                :: Set environtment
                call ..\..\..\thirdparty\dev-env\scripts\common_dds_functions.bat :setRTItarget i86Win32VS2013
                call ..\..\..\thirdparty\dev-env\scripts\common_exectest_functions.bat :setTargetPath "..\..\..\lib\i86Win32VS2013;..\..\..\thirdparty\fastcdr\lib\i86Win32VS2013;%BOOST_LIBRARYDIR%\i86Win32VS2013"
                call "%%D\exec_test.bat" Win32
                :: Restore environtment
                call ..\..\..\thirdparty\dev-env\scripts\common_exectest_functions.bat :restoreTargetPath
                call ..\..\..\thirdparty\dev-env\scripts\common_dds_functions.bat :restoreRTItarget
            )
         )
	 ::x64 target
         if %errorstatus%==0 (
            if "%test_targets%"=="" set exec_target_bool=2
            if "%test_targets%"=="x64" set exec_target_bool=2
            if !exec_target_bool!==2 (
                call ..\..\..\thirdparty\dev-env\scripts\common_dds_functions.bat :setRTItarget x64Win64VS2013
                call ..\..\..\thirdparty\dev-env\scripts\common_exectest_functions.bat :setTargetPath "..\..\..\lib\x64Win64VS2013;..\..\..\thirdparty\fastcdr\lib\x64Win64VS2013;%BOOST_LIBRARYDIR%\x64Win64VS2013"
                call "%%D\exec_test.bat" x64
                :: Restore environtment
                call ..\..\..\thirdparty\dev-env\scripts\common_exectest_functions.bat :restoreTargetPath
                call ..\..\..\thirdparty\dev-env\scripts\common_dds_functions.bat :restoreRTItarget
            )
         )
      ) else (
	 :: i86 target
         if %errorstatus%==0 (
            if "%test_targets%"=="" set exec_target_bool=3
            if "%test_targets%"=="i86" set exec_target_bool=3
            if !exec_target_bool!==3 (
                :: Set environtment
                call ..\..\..\thirdparty\dev-env\scripts\common_dds_functions.bat :setRTItarget i86Win32VS2013
                call ..\..\..\thirdparty\dev-env\scripts\common_exectest_functions.bat :setTargetPath "..\..\..\lib\i86Win32VS2013;..\..\..\thirdparty\fastcdr\lib\i86Win32VS2013;%BOOST_LIBRARYDIR%\i86Win32VS2013"
                call :execTest i86Win32VS2013 Win32 %%D
                :: Restore environtment
                call ..\..\..\thirdparty\dev-env\scripts\common_exectest_functions.bat :restoreTargetPath
                call ..\..\..\thirdparty\dev-env\scripts\common_dds_functions.bat :restoreRTItarget
            )
         )
	 ::x64 target
         if %errorstatus%==0 (
            if "%test_targets%"=="" set exec_target_bool=4
            if "%test_targets%"=="x64" set exec_target_bool=4
            if !exec_target_bool!==4 (
                :: Set environtment
                call ..\..\..\thirdparty\dev-env\scripts\common_dds_functions.bat :setRTItarget x64Win64VS2013
                call ..\..\..\thirdparty\dev-env\scripts\common_exectest_functions.bat :setTargetPath "..\..\..\lib\x64Win64VS2013;..\..\..\thirdparty\fastcdr\lib\x64Win64VS2013;%BOOST_LIBRARYDIR%\x64Win64VS2013"
                call :execTest x64Win64VS2013 x64 %%D
                :: Restore environtment
                call ..\..\..\thirdparty\dev-env\scripts\common_exectest_functions.bat :restoreTargetPath
                call ..\..\..\thirdparty\dev-env\scripts\common_dds_functions.bat :restoreRTItarget
            )
         )
      )
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
:: Generates the file with FASTRPC script
call ..\..\..\scripts\fastrpcgen.bat -local -d output -example %1 "%3\%3.idl"
set errorstatus=%ERRORLEVEL%
:: Copy backup to original files.
:: Copy static test files into output directory
copy %3\* output\
if not %errorstatus%==0 goto :EOF

:: Start executing tests in each configuration.

:: Release DLL Configuration
:: Clean the visual solution
msbuild "output\rpcsolution-%1.sln" /t:Clean /p:Configuration="Release DLL" /p:Platform="%2"
:: Build the visual solution
msbuild "output\rpcsolution-%1.sln" /t:Build /p:Configuration="Release DLL" /p:Platform="%2"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
copy output\lib\%1\*.dll output\bin\%1\
:: Execute the server in other cmd.exe
start output\bin\%1\%3ServerExample.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\bin\%1\%3ClientExample.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%3ServerExample.exe"
if not %errorstatus%==0 goto :EOF
:: Debug DLL Configuration
:: Clean the visual solution
msbuild "output\rpcsolution-%1.sln" /t:Clean /p:Configuration="Debug DLL" /p:Platform="%2"
:: Build the visual solution
msbuild "output\rpcsolution-%1.sln" /t:Build /p:Configuration="Debug DLL" /p:Platform="%2"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
copy output\lib\%1\*.dll output\bin\%1\
:: Execute the server in other cmd.exe
start output\bin\%1\%3ServerExample.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\bin\%1\%3ClientExample.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%3ServerExample.exe"
if not %errorstatus%==0 goto :EOF

:: Release Configuration
:: Clean the visual solution
msbuild "output\rpcsolution-%1.sln" /t:Clean /p:Configuration="Release" /p:Platform="%2"
:: Build the visual solution
msbuild "output\rpcsolution-%1.sln" /t:Build /p:Configuration="Release" /p:Platform="%2"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF

:: Execute the server in other cmd.exe
start output\bin\%1\%3ServerExample.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\bin\%1\%3ClientExample.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%3ServerExample.exe"
if not %errorstatus%==0 goto :EOF

:: Debug Configuration
:: Clean the visual solution
msbuild "output\rpcsolution-%1.sln" /t:Clean /p:Configuration="Debug" /p:Platform="%2"
:: Build the visual solution
msbuild "output\rpcsolution-%1.sln" /t:Build /p:Configuration="Debug" /p:Platform="%2"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :EOF
:: Execute the server in other cmd.exe
start output\bin\%1\%3ServerExample.exe
:: Wait 5 seconds
call :wait 5
:: Execute the client in this cmd.exe
"output\bin\%1\%3ClientExample.exe"
set errorstatus=%ERRORLEVEL%
:: Kill server
TaskKill /IM "%3ServerExample.exe"
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

if %errorstatus%==0 (echo "TEST SUCCESFULLY") else (echo "TEST FAILED")
exit /b %errorstatus%
goto :EOF
