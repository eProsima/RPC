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

:: Compile FastCDR library.
cd "thirdparty\fastcdr"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Get the current vesion of FastCDR
call ..\..\thirdparty\dev-env\scripts\common_pack_functions.bat :getVersionFromCPP VERSIONFASTCDR ..\..\include\fastcdr\FastCdr_version.h
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Compile CDR library.
rmdir /S /Q lib\i86Win32VS2010
rmdir /S /Q lib\x64Win64VS2010
cd "utils\scripts"
call build_cdr.bat
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Back to FastBuffers directory
cd "..\..\..\.." 

rd /S /Q "utils\doxygen\output"

:: Compile FastRPC library.
rmdir /S /Q lib\i86Win32VS2010
rmdir /S /Q lib\x64Win64VS2010
cd "utils\scripts"
call build_rpcdds.bat
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

:: Copy fastcdr libraries needed in
copy thirdparty\fastcdr\lib\i86Win32VS2010\fastcdr-%VERSIONFASTCDR%.dll lib\i86Win32VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2010\fastcdr-%VERSIONFASTCDR%.lib lib\i86Win32VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2010\fastcdr-%VERSIONFASTCDR%.pdb lib\i86Win32VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2010\fastcdr-%VERSIONFASTCDR%.exp lib\i86Win32VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2010\fastcdrd-%VERSIONFASTCDR%.dll lib\i86Win32VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2010\fastcdrd-%VERSIONFASTCDR%.lib lib\i86Win32VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2010\fastcdrd-%VERSIONFASTCDR%.pdb lib\i86Win32VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2010\fastcdrd-%VERSIONFASTCDR%.exp lib\i86Win32VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2010\libfastcdr-%VERSIONFASTCDR%.lib lib\i86Win32VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2010\libfastcdr-%VERSIONFASTCDR%.pdb lib\i86Win32VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2010\libfastcdrd-%VERSIONFASTCDR%.lib lib\i86Win32VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2010\libfastcdrd-%VERSIONFASTCDR%.pdb lib\i86Win32VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

copy thirdparty\fastcdr\lib\x64Win64VS2010\fastcdr-%VERSIONFASTCDR%.dll lib\x64Win64VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2010\fastcdr-%VERSIONFASTCDR%.lib lib\x64Win64VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2010\fastcdr-%VERSIONFASTCDR%.pdb lib\x64Win64VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2010\fastcdr-%VERSIONFASTCDR%.exp lib\x64Win64VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2010\fastcdrd-%VERSIONFASTCDR%.dll lib\x64Win64VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2010\fastcdrd-%VERSIONFASTCDR%.lib lib\x64Win64VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2010\fastcdrd-%VERSIONFASTCDR%.pdb lib\x64Win64VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2010\fastcdrd-%VERSIONFASTCDR%.exp lib\x64Win64VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2010\libfastcdr-%VERSIONFASTCDR%.lib lib\x64Win64VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2010\libfastcdr-%VERSIONFASTCDR%.pdb lib\x64Win64VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2010\libfastcdrd-%VERSIONFASTCDR%.lib lib\x64Win64VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2010\libfastcdrd-%VERSIONFASTCDR%.pdb lib\x64Win64VS2010
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

:: :: Execute DDS tests
:: set RPCDDSHOME_OLD=%RPCDDSHOME%
:: set RPCDDSHOME=%CD%
:: cd utils/pcTests/rti
:: call exec_tests.bat %package_targets%
:: set errorstatus=%ERRORLEVEL%
:: if not %errorstatus%==0 goto :exit
:: cd "../../.."
:: set RPCDDSHOME=%RPCDDSHOME_OLD%

:: :: Execute DDS tests
:: set RPCDDSHOME_OLD=%RPCDDSHOME%
:: set RPCDDSHOME=%CD%
:: cd utils/pcTests/dds
:: call exec_tests.bat %package_targets%
:: set errorstatus=%ERRORLEVEL%
:: if not %errorstatus%==0 goto :exit
:: cd "../../.."
:: set RPCDDSHOME=%RPCDDSHOME_OLD%

:: Create PDFS from documentation.
cd "doc"
:: Installation manual
soffice.exe --headless "macro:///eProsima.documentation.changeVersion(%CD%\RPCDDS - Installation Manual.odt,%VERSION%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: User manual
soffice.exe --headless "macro:///eProsima.documentation.changeVersion(%CD%\RPCDDS - User Manual.odt,%VERSION%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

cd ".."
:: Create README
soffice.exe --headless "macro:///eProsima.documentation.changeVersionToHTML(%CD%\README_rpcdds.odt,%VERSION%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
move README_rpcdds.html README.html
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

:: Prepare include files
rd /S /Q "includetmp"
mkdir includetmp\rpcdds
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd include\fastrpc
for /f "delims=" %%a in ('cat ../../building/includes/rpcdds_includes') do (
    cp --parents %%a ../../includetmp/rpcdds
    set errorstatus=%ERRORLEVEL%
    if not %errorstatus%==0 goto :exit
)
cd ..\..
cd includetmp\rpcdds
for /r %%F in ("*.h") do sed -i -e 's/#include "fastrpc/#include "rpcdds/' %%F
sed -i -e 's/EPROSIMA_LIB_NAME fastrpc/EPROSIMA_LIB_NAME rpcdds/' fastrpc_dll.h
cd ..\..

:: Create doxygen information.
:: Generate the examples
:: DDS example
call scripts\rpcddsgen.bat -replace -d utils\doxygen\examples\dds utils\doxygen\examples\dds\FooDDS.idl
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Export version
set PROJECT_DOX=RPCDDS
set VERSION_DOX=%VERSION%
set INPUT_DOX=utils/doxygen/doxygenfiles/mainpage_rpcdds.dox includetmp utils/doxygen/examples/dds
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
makensis.exe /DVERSION="%VERSION%" setup_rpcdds.nsi
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
