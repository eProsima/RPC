:: This script pack FastRPC library for any platform in Windows.
::
:: This script needs the next environment variables to be run.
:: - SVN_BIN_DIR: Directory with the subversion binaries.
:: - LIBREOFFICE_BIN_DIR: Directory with the LibreOffice binaries.
:: - NSIS_BIN_DIR: Directory with the NSIS installer libraries.
:: - EPROSIMADIR: URL to the directory with common sources of eProsima.
:: - ANT_BIN_DIR: Directory with the ant binaries.
:: - DOXYGEN_BIN_DIR: Directory with the doxygen binaries.
:: - GRAPHVIZ_BIN_DIR: Directory with the graphviz binaries.
:: - TEXLIVE_BIN_DIR: Directory with the TexLive binaries.
:: - LIB_BOOST_PATH: BOOST directory
:: Also this script needs the eProsima.documentation.changeVersion macro installed in the system.

setlocal EnableDelayedExpansion
setlocal EnableExpansion
@echo off

:: Initialize the returned value to 0 (all succesfully)
set errorstatus=0

if "%EPROSIMADIR%"=="" (
    echo "EPROSIMADIR environment variable has to be set"
    set errorstatus=-1
    goto :exit
)

:: Go to root directory
cd "..\.."

rd /S /Q "utils\doxygen\output"

:: Compile FastRPC library.
rmdir /S /Q lib\i86Win32VS2010
rmdir /S /Q lib\x64Win64VS2010
cd "utils\scripts"
call build_fastrpc.bat
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd "..\..\"

:: Get the current vesion of FastRPC
call %EPROSIMADIR%\scripts\common_pack_functions.bat :getVersionFromCPP VERSION include\fastrpc\fastrpc_version.h
if not %errorstatus%==0 goto :exit

:: Update and compile FastRPC application.
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Compile FastRPC for target.
cd fastrpcgen
rmdir /S /Q build
call ant jar
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd ".."

:: Copy BOOST libraries needed in 
copy %LIB_BOOST_PATH%\lib\i86\libboost_chrono-vc100-mt-1_53.lib lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\libboost_chrono-vc100-mt-gd-1_53.lib lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\libboost_date_time-vc100-mt-1_53.lib lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\libboost_date_time-vc100-mt-gd-1_53.lib lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\libboost_regex-vc100-mt-1_53.lib lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\libboost_regex-vc100-mt-gd-1_53.lib lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\libboost_system-vc100-mt-1_53.lib lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\libboost_system-vc100-mt-gd-1_53.lib lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\libboost_thread-vc100-mt-1_53.lib lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\libboost_thread-vc100-mt-gd-1_53.lib lib\i86Win32VS2010\

copy %LIB_BOOST_PATH%\lib\i86\boost_chrono-vc100-mt-1_53.dll lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\boost_chrono-vc100-mt-gd-1_53.dll lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\boost_date_time-vc100-mt-1_53.dll lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\boost_date_time-vc100-mt-gd-1_53.dll lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\boost_regex-vc100-mt-1_53.dll lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\boost_regex-vc100-mt-gd-1_53.dll lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\boost_system-vc100-mt-1_53.dll lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\boost_system-vc100-mt-gd-1_53.dll lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\boost_thread-vc100-mt-1_53.dll lib\i86Win32VS2010\
copy %LIB_BOOST_PATH%\lib\i86\boost_thread-vc100-mt-gd-1_53.dll lib\i86Win32VS2010\

copy %LIB_BOOST_PATH%\lib\x64\libboost_chrono-vc100-mt-1_53.lib lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\libboost_chrono-vc100-mt-gd-1_53.lib lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\libboost_date_time-vc100-mt-1_53.lib lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\libboost_date_time-vc100-mt-gd-1_53.lib lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\libboost_regex-vc100-mt-1_53.lib lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\libboost_regex-vc100-mt-gd-1_53.lib lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\libboost_system-vc100-mt-1_53.lib lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\libboost_system-vc100-mt-gd-1_53.lib lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\libboost_thread-vc100-mt-1_53.lib lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\libboost_thread-vc100-mt-gd-1_53.lib lib\x64Win64VS2010\

copy %LIB_BOOST_PATH%\lib\x64\boost_chrono-vc100-mt-1_53.dll lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\boost_chrono-vc100-mt-gd-1_53.dll lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\boost_date_time-vc100-mt-1_53.dll lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\boost_date_time-vc100-mt-gd-1_53.dll lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\boost_regex-vc100-mt-1_53.dll lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\boost_regex-vc100-mt-gd-1_53.dll lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\boost_system-vc100-mt-1_53.dll lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\boost_system-vc100-mt-gd-1_53.dll lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\boost_thread-vc100-mt-1_53.dll lib\x64Win64VS2010\
copy %LIB_BOOST_PATH%\lib\x64\boost_thread-vc100-mt-gd-1_53.dll lib\x64Win64VS2010\

:: Copy fastcdr libraries needed in
copy %FASTCDR%\lib\i86Win32VS2010\fastcdr-0.2.1.dll lib\i86Win32VS2010
copy %FASTCDR%\lib\i86Win32VS2010\fastcdr-0.2.1.lib lib\i86Win32VS2010
copy %FASTCDR%\lib\i86Win32VS2010\fastcdrd-0.2.1.dll lib\i86Win32VS2010
copy %FASTCDR%\lib\i86Win32VS2010\fastcdrd-0.2.1.lib lib\i86Win32VS2010
copy %FASTCDR%\lib\i86Win32VS2010\libfastcdr-0.2.1.lib lib\i86Win32VS2010
copy %FASTCDR%\lib\i86Win32VS2010\libfastcdrd-0.2.1.lib lib\i86Win32VS2010

copy %FASTCDR%\lib\x64Win64VS2010\fastcdr-0.2.1.dll lib\x64Win64VS2010
copy %FASTCDR%\lib\x64Win64VS2010\fastcdr-0.2.1.lib lib\x64Win64VS2010
copy %FASTCDR%\lib\x64Win64VS2010\fastcdrd-0.2.1.dll lib\x64Win64VS2010
copy %FASTCDR%\lib\x64Win64VS2010\fastcdrd-0.2.1.lib lib\x64Win64VS2010
copy %FASTCDR%\lib\x64Win64VS2010\libfastcdr-0.2.1.lib lib\x64Win64VS2010
copy %FASTCDR%\lib\x64Win64VS2010\libfastcdrd-0.2.1.lib lib\x64Win64VS2010

:: :: Execute DDS tests
:: set FASTRPCHOME_OLD=%FASTRPCHOME%
:: set FASTRPCHOME=%CD%
:: cd utils/pcTests/rti
:: call exec_tests.bat %package_targets%
:: set errorstatus=%ERRORLEVEL%
:: if not %errorstatus%==0 goto :exit
:: cd "../../.."
:: set FASTRPCHOME=%FASTRPCHOME_OLD%

:: :: Execute REST tests
:: set FASTRPCHOME_OLD=%FASTRPCHOME%
:: set FASTRPCHOME=%CD%
:: cd utils/pcTests/restful
:: call exec_tests.bat %package_targets%
:: set errorstatus=%ERRORLEVEL%
:: if not %errorstatus%==0 goto :exit
:: cd "../../.."
:: set FASTRPCHOME=%FASTRPCHOME_OLD%

:: Create PDFS from documentation.
cd "doc"
:: Installation manual
soffice.exe --headless "macro:///eProsima.documentation.changeVersion(%CD%\RPC - Installation Manual.odt,%VERSION%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: :: User manual
:: soffice.exe --headless "macro:///eProsima.documentation.changeVersion(%CD%\RPC - REST - User Manual.odt,%VERSION%)"
:: set errorstatus=%ERRORLEVEL%
:: if not %errorstatus%==0 goto :exit
soffice.exe --headless "macro:///eProsima.documentation.changeVersion(%CD%\RPC - DDS - User Manual.odt,%VERSION%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

cd ".."
:: Create README
soffice.exe --headless "macro:///eProsima.documentation.changeVersionToHTML(%CD%\README.odt,%VERSION%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

:: :: Create doxygen information.
:: :: Generate the examples
:: :: DDS example
:: call scripts\rpcdds_rti_pcTests.bat -replace -protocol dds -d utils\doxygen\examples\dds utils\doxygen\examples\dds\FooDDS.idl
:: set errorstatus=%ERRORLEVEL%
:: if not %errorstatus%==0 goto :exit
:: :: REST example
:: call scripts\rpcdds_rti_pcTests.bat -replace -protocol rest -d utils\doxygen\examples\restful utils\doxygen\examples\restful\FooREST.wadl
:: set errorstatus=%ERRORLEVEL%
:: if not %errorstatus%==0 goto :exit
:: :: Export version
:: set VERSION_DOX=%VERSION%
:: mkdir output
:: mkdir output\doxygen
:: doxygen utils\doxygen\doxyfile
:: set errorstatus=%ERRORLEVEL%
:: if not %errorstatus%==0 goto :exit
:: cd output\doxygen\latex
:: call make.bat
:: set errorstatus=%ERRORLEVEL%
:: if not %errorstatus%==0 goto :exit
:: cd ..\..\..

:: Create installers.
cd utils\installers\rti\windows

:: Win installer.
makensis.exe /DVERSION="%VERSION%" setup.nsi
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd "..\..\..\.."

rd /S /Q "utils\doxygen\output"

rmdir /S /Q output

goto :exit

:: Function exit ::
:exit
if %errorstatus%==0 (echo "PACKAGING SUCCESSFULLY") else (echo "PACKAGING FAILED")
exit /b %errorstatus%
goto :EOF
