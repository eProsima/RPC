:: This file set the environment for RPCDDS

if "%1"=="set" goto :set
if "%1"=="restore" goto :restore

echo "Bad parameter. Aborting..."
goto :EOF


:set
:: Save old and set NDDSHOME environment variable.
set NDDSHOME_OLD=%NDDSHOME%
set NDDSHOME=D:\richi\workspace\desarrollo\DDS\RTI\instalaciones\ndds.4.5f

:: Save old and set PAT environment variable.
set PATH_OLD=%PATH%
set PATH=%NDDSHOME%\lib\%NDDSTARGET%;%NDDSHOME%\scripts;%PATH%

goto :EOF

:restore
:: Restore old value of NDDSHOME environment variable.
set NDDSHOME=%NDDSHOME_OLD%
:: Restore old value of PATH environment variable.
set PATH=%PATH_OLD%

goto :EOF
