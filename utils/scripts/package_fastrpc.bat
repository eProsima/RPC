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
call ..\..\thirdparty\dev-env\scripts\common_pack_functions.bat :getVersionFromCPP VERSIONFASTCDR ..\..\thirdparty\fastcdr\include\fastcdr\FastCdr_version.h
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Compile CDR library.
rmdir /S /Q lib\i86Win32VS2010
rmdir /S /Q lib\i86Win32VS2013
rmdir /S /Q lib\x64Win64VS2010
rmdir /S /Q lib\x64Win64VS2013
cd "utils\scripts"
call build_cdr.bat
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Back to FastBuffers directory
cd "..\..\..\.." 

rd /S /Q "utils\doxygen\output"

:: Compile FastRPC library.
rmdir /S /Q lib\i86Win32VS2010
rmdir /S /Q lib\i86Win32VS2013
rmdir /S /Q lib\x64Win64VS2010
rmdir /S /Q lib\x64Win64VS2013
cd "utils\scripts"
call build_fastrpc.bat
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

:: Copy VS2013 libraries

:: Copy BOOST libraries needed in 
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\libboost_chrono-vc120-mt-1_57.lib lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\libboost_chrono-vc120-mt-gd-1_57.lib lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\libboost_date_time-vc120-mt-1_57.lib lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\libboost_date_time-vc120-mt-gd-1_57.lib lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\libboost_regex-vc120-mt-1_57.lib lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\libboost_regex-vc120-mt-gd-1_57.lib lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\libboost_system-vc120-mt-1_57.lib lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\libboost_system-vc120-mt-gd-1_57.lib lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\libboost_thread-vc120-mt-1_57.lib lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\libboost_thread-vc120-mt-gd-1_57.lib lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

copy %BOOST_LIBRARYDIR%\i86Win32VS2013\boost_chrono-vc120-mt-1_57.dll lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\boost_chrono-vc120-mt-gd-1_57.dll lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\boost_date_time-vc120-mt-1_57.dll lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\boost_date_time-vc120-mt-gd-1_57.dll lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\boost_regex-vc120-mt-1_57.dll lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\boost_regex-vc120-mt-gd-1_57.dll lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\boost_system-vc120-mt-1_57.dll lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\boost_system-vc120-mt-gd-1_57.dll lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\boost_thread-vc120-mt-1_57.dll lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2013\boost_thread-vc120-mt-gd-1_57.dll lib\i86Win32VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

copy %BOOST_LIBRARYDIR%\x64Win64VS2013\libboost_chrono-vc120-mt-1_57.lib lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\libboost_chrono-vc120-mt-gd-1_57.lib lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\libboost_date_time-vc120-mt-1_57.lib lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\libboost_date_time-vc120-mt-gd-1_57.lib lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\libboost_regex-vc120-mt-1_57.lib lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\libboost_regex-vc120-mt-gd-1_57.lib lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\libboost_system-vc120-mt-1_57.lib lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\libboost_system-vc120-mt-gd-1_57.lib lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\libboost_thread-vc120-mt-1_57.lib lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\libboost_thread-vc120-mt-gd-1_57.lib lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

copy %BOOST_LIBRARYDIR%\x64Win64VS2013\boost_chrono-vc120-mt-1_57.dll lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\boost_chrono-vc120-mt-gd-1_57.dll lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\boost_date_time-vc120-mt-1_57.dll lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\boost_date_time-vc120-mt-gd-1_57.dll lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\boost_regex-vc120-mt-1_57.dll lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\boost_regex-vc120-mt-gd-1_57.dll lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\boost_system-vc120-mt-1_57.dll lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\boost_system-vc120-mt-gd-1_57.dll lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\boost_thread-vc120-mt-1_57.dll lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2013\boost_thread-vc120-mt-gd-1_57.dll lib\x64Win64VS2013\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

:: Copy fastcdr libraries needed in
copy thirdparty\fastcdr\lib\i86Win32VS2013\fastcdr-%VERSIONFASTCDR%.dll lib\i86Win32VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2013\fastcdr-%VERSIONFASTCDR%.lib lib\i86Win32VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2013\fastcdr-%VERSIONFASTCDR%.pdb lib\i86Win32VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2013\fastcdr-%VERSIONFASTCDR%.exp lib\i86Win32VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2013\fastcdrd-%VERSIONFASTCDR%.dll lib\i86Win32VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2013\fastcdrd-%VERSIONFASTCDR%.lib lib\i86Win32VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2013\fastcdrd-%VERSIONFASTCDR%.pdb lib\i86Win32VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2013\fastcdrd-%VERSIONFASTCDR%.exp lib\i86Win32VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2013\libfastcdr-%VERSIONFASTCDR%.lib lib\i86Win32VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2013\libfastcdr-%VERSIONFASTCDR%.pdb lib\i86Win32VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2013\libfastcdrd-%VERSIONFASTCDR%.lib lib\i86Win32VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\i86Win32VS2013\libfastcdrd-%VERSIONFASTCDR%.pdb lib\i86Win32VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

copy thirdparty\fastcdr\lib\x64Win64VS2013\fastcdr-%VERSIONFASTCDR%.dll lib\x64Win64VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2013\fastcdr-%VERSIONFASTCDR%.lib lib\x64Win64VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2013\fastcdr-%VERSIONFASTCDR%.pdb lib\x64Win64VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2013\fastcdr-%VERSIONFASTCDR%.exp lib\x64Win64VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2013\fastcdrd-%VERSIONFASTCDR%.dll lib\x64Win64VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2013\fastcdrd-%VERSIONFASTCDR%.lib lib\x64Win64VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2013\fastcdrd-%VERSIONFASTCDR%.pdb lib\x64Win64VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2013\fastcdrd-%VERSIONFASTCDR%.exp lib\x64Win64VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2013\libfastcdr-%VERSIONFASTCDR%.lib lib\x64Win64VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2013\libfastcdr-%VERSIONFASTCDR%.pdb lib\x64Win64VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2013\libfastcdrd-%VERSIONFASTCDR%.lib lib\x64Win64VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy thirdparty\fastcdr\lib\x64Win64VS2013\libfastcdrd-%VERSIONFASTCDR%.pdb lib\x64Win64VS2013
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

:: Copy VS2010 libraries

:: Copy BOOST libraries needed in 
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_chrono-vc100-mt-1_57.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_chrono-vc100-mt-gd-1_57.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_date_time-vc100-mt-1_57.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_date_time-vc100-mt-gd-1_57.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_regex-vc100-mt-1_57.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_regex-vc100-mt-gd-1_57.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_system-vc100-mt-1_57.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_system-vc100-mt-gd-1_57.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_thread-vc100-mt-1_57.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\libboost_thread-vc100-mt-gd-1_57.lib lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_chrono-vc100-mt-1_57.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_chrono-vc100-mt-gd-1_57.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_date_time-vc100-mt-1_57.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_date_time-vc100-mt-gd-1_57.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_regex-vc100-mt-1_57.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_regex-vc100-mt-gd-1_57.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_system-vc100-mt-1_57.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_system-vc100-mt-gd-1_57.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_thread-vc100-mt-1_57.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\i86Win32VS2010\boost_thread-vc100-mt-gd-1_57.dll lib\i86Win32VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_chrono-vc100-mt-1_57.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_chrono-vc100-mt-gd-1_57.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_date_time-vc100-mt-1_57.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_date_time-vc100-mt-gd-1_57.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_regex-vc100-mt-1_57.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_regex-vc100-mt-gd-1_57.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_system-vc100-mt-1_57.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_system-vc100-mt-gd-1_57.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_thread-vc100-mt-1_57.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\libboost_thread-vc100-mt-gd-1_57.lib lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_chrono-vc100-mt-1_57.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_chrono-vc100-mt-gd-1_57.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_date_time-vc100-mt-1_57.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_date_time-vc100-mt-gd-1_57.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_regex-vc100-mt-1_57.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_regex-vc100-mt-gd-1_57.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_system-vc100-mt-1_57.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_system-vc100-mt-gd-1_57.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_thread-vc100-mt-1_57.dll lib\x64Win64VS2010\
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
copy %BOOST_LIBRARYDIR%\x64Win64VS2010\boost_thread-vc100-mt-gd-1_57.dll lib\x64Win64VS2010\
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

:: :: Execute FastRPC tests
:: set FASTRPCHOME_OLD=%FASTRPCHOME%
:: set FASTRPCHOME=%CD%
:: cd utils/pcTests/cdr
:: call exec_tests.bat %package_targets%
:: set errorstatus=%ERRORLEVEL%
:: if not %errorstatus%==0 goto :exit
:: cd "../../.."
:: set FASTRPCHOME=%FASTRPCHOME_OLD%

:: Create PDFS from documentation.
cd "doc"
:: Installation manual
soffice.exe --headless "macro:///eProsima.documentation.changeVersion(%CD%\FastRPC - Installation Manual.odt,%VERSION%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
soffice.exe --headless "macro:///eProsima.documentation.changeVersion(%CD%\FastRPC - User Manual.odt,%VERSION%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

cd ".."
:: Create README
soffice.exe --headless "macro:///eProsima.documentation.changeVersionToHTML(%CD%\README_fastrpc.odt,%VERSION%)"
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
move README_fastrpc.html README.html
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit

:: Prepare include files
rd /S /Q "includetmp"
mkdir includetmp\fastrpc
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
cd include\fastrpc
for /f "delims=" %%a in ('cat ../../building/includes/fastrpc_includes') do (
    cp --parents %%a ../../includetmp/fastrpc
    set errorstatus=%ERRORLEVEL%
    if not %errorstatus%==0 goto :exit
)
cd ..\..

:: Create doxygen information.
:: Generate the examples
:: FastRPC example
call scripts\fastrpcgen.bat -replace -d utils\doxygen\examples\fastrpc utils\doxygen\examples\fastrpc\FooFastRPC.idl
set errorstatus=%ERRORLEVEL%
if not %errorstatus%==0 goto :exit
:: Export version
set PROJECT_DOX=FastRPC
set VERSION_DOX=%VERSION%
set INPUT_DOX=utils/doxygen/doxygenfiles/mainpage_fastrpc.dox includetmp utils/doxygen/examples/fastrpc
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
makensis.exe /DVERSION="%VERSION%" setup_fastrpc.nsi
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
