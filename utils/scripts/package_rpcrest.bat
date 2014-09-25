:: This script pack FastRPC library for any platform in Windows.
::
:: This script needs the next environment variables to be run.
:: - SVN_BIN_DIR: Directory with the subversion binaries.
:: - LIBREOFFICE_BIN_DIR: Directory with the LibreOffice binaries.
:: - NSIS_BIN_DIR: Directory with the NSIS installer libraries.
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

:: Go to root directory
cd "..\.."

rd /S /Q "utils\doxygen\output"

:: Compile FastRPC library.
rmdir /S /Q lib\i86Win32VS2010
rmdir /S /Q lib\x64Win64VS2010
cd "utils\scripts"
call build_rpcrest.bat
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd "..\..\"

:: Get the current vesion of FastRPC
call thirdparty\dev-env\scripts\common_pack_functions.bat :getVersionFromCPP VERSION include\fastrpc\fastrpc_version.h
if not %errorstatus%==0 goto :exit

:: Update and compile FastRPC application.
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Compile FastRPC for target.
cd fastrpcgen
rmdir /S /Q build
call ant jars
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd ".."

:: Copy BOOST libraries needed in 
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_chrono-vc100-mt-1_53.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_chrono-vc100-mt-gd-1_53.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_date_time-vc100-mt-1_53.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_date_time-vc100-mt-gd-1_53.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_regex-vc100-mt-1_53.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_regex-vc100-mt-gd-1_53.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_system-vc100-mt-1_53.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_system-vc100-mt-gd-1_53.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_thread-vc100-mt-1_53.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_thread-vc100-mt-gd-1_53.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_chrono-vc100-mt-1_53.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_chrono-vc100-mt-gd-1_53.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_date_time-vc100-mt-1_53.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_date_time-vc100-mt-gd-1_53.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_regex-vc100-mt-1_53.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_regex-vc100-mt-gd-1_53.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_system-vc100-mt-1_53.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_system-vc100-mt-gd-1_53.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_thread-vc100-mt-1_53.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_thread-vc100-mt-gd-1_53.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_chrono-vc100-mt-1_53.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_chrono-vc100-mt-gd-1_53.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_date_time-vc100-mt-1_53.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_date_time-vc100-mt-gd-1_53.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_regex-vc100-mt-1_53.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_regex-vc100-mt-gd-1_53.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_system-vc100-mt-1_53.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_system-vc100-mt-gd-1_53.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_thread-vc100-mt-1_53.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_thread-vc100-mt-gd-1_53.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_chrono-vc100-mt-1_53.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_chrono-vc100-mt-gd-1_53.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_date_time-vc100-mt-1_53.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_date_time-vc100-mt-gd-1_53.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_regex-vc100-mt-1_53.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_regex-vc100-mt-gd-1_53.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_system-vc100-mt-1_53.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_system-vc100-mt-gd-1_53.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_thread-vc100-mt-1_53.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_thread-vc100-mt-gd-1_53.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

:: :: Execute DDS tests
:: set RPCRESTHOME_OLD=%RPCRESTHOME%
:: set RPCRESTHOME=%CD%
:: cd utils/pcTests/restful
:: call exec_tests.bat %package_targets%
:: set errorstatus=%ERRORLEVEL%
:: if not %errorstatus%==0 goto :exit
:: cd "../../.."
:: set RPCRESTHOME=%RPCRESTHOME_OLD%

:: Create PDFS from documentation.
cd "doc"
:: Installation manual
soffice.exe --headless "macro:///eProsima.documentation.changeVersion(%CD%\RPCREST - Installation Manual.odt,%VERSION%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: User manual
soffice.exe --headless "macro:///eProsima.documentation.changeVersion(%CD%\RPCREST - User Manual.odt,%VERSION%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

cd ".."
:: Create README
soffice.exe --headless "macro:///eProsima.documentation.changeVersionToHTML(%CD%\README_rpcrest.odt,%VERSION%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
move README_rpcrest.html README.html
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

:: Prepare include files
rd /S /Q "includetmp"
mkdir includetmp\rpcrest
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd include\fastrpc
for /f "delims=" %%a in ('cat ../../building/includes/rpcrest_includes') do (
    cp --parents %%a ../../includetmp/rpcrest
    set errorstatus=%ERRORLEVEL%
    if not %errorstatus%==0 goto :exit
)
cd ..\..
cd includetmp\rpcrest
for /r %%F in ("*.h") do sed -i -e 's/#include "fastrpc/#include "rpcrest/' %%F
sed -i -e 's/EPROSIMA_LIB_NAME fastrpc/EPROSIMA_LIB_NAME rpcrest/' fastrpc_dll.h
cd ..\..

:: Create doxygen information.
:: Generate the examples
:: DDS example
call scripts\rpcrestgen.bat -replace -d utils\doxygen\examples\restful utils\doxygen\examples\restful\FooREST.wadl
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Export version
set PROJECT_DOX=RPCREST
set VERSION_DOX=%VERSION%
set INPUT_DOX=utils/doxygen/doxygenfiles/mainpage_rpcrest.dox includetmp utils/doxygen/examples/restful
mkdir output
mkdir output\doxygen
doxygen utils\doxygen\doxyfile
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd output\doxygen\latex
call make.bat
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd ..\..\..

:: Create installers.
cd utils\installers\rti\windows

:: Win installer.
makensis.exe /DVERSION="%VERSION%" setup_rpcrest.nsi
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd "..\..\..\.."

rd /S /Q "utils\doxygen\output"

rd /S /Q "includetmp"

rmdir /S /Q output

goto :exit

:: Function exit ::
:exit
if %errorstatus%==0 (echo "PACKAGING SUCCESSFULLY") else (echo "PACKAGING FAILED")
exit /b %errorstatus%
goto :EOF
