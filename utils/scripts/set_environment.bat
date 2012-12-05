:: This file set the environment for RPCDDS

if "%1"=="set" goto :set
if "%1"=="restore" goto :restore

echo "Bad parameter. Aborting..."
goto :EOF


:set
:: Save old and set NDDSHOME environment variable.
set NDDSVERSION_OLD=%NDDSVERSION%
set NDDSHOME_OLD=%NDDSHOME%
set NDDSVERSION=ndds.5.0.0
set NDDSHOME=%HOME%\workspace\desarrollo\DDS\RTI\instalaciones\%NDDSVERSION%

:: Save old and set PAT environment variable.
set PATH_OLD=%PATH%
set PATH=%NDDSHOME%\lib\%NDDSTARGET%;%NDDSHOME%\scripts;%PATH%

goto :EOF

:restore
:: Restore old value of NDDSHOME environment variable.
set NDDSHOME=%NDDSHOME_OLD%
set NDDSVERSION=%NDDSVERSION_OLD%
:: Restore old value of PATH environment variable.
set PATH=%PATH_OLD%

goto :EOF
