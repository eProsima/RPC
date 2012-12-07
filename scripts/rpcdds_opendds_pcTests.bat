@REM $Id$

@REM

@REM (c) Copyright, eProsima, 2009.

@REM All rights reserved.

@REM

@REM No duplications, whole or partial, manual or electronic, may be made

@REM without express written permission.  Any such copies, or

@REM revisions thereof, must display this notice unaltered.

@REM This code contains trade secrets of eProsima (Proyectos y Sistemas de Mantenimiento S.L.
)
@REM

@REM modification history

@REM --------------------

@REM 1.0,29sep09,RodM Created

@REM =====================================================================


@echo off
setlocal

set dir=%~dp0


set args=%1


:getarg

shift


if "%~1"=="" goto continue

set args=%args% %1

goto getarg


:continue


"%JAVA_HOME%\bin\java" -DPATH="%PATH%" -DTAO_ROOT="%TAO_ROOT%" -DDDS_ROOT="%DDS_ROOT%" -DRPCDDSHOME="%RPCDDSHOME%" -Djava.ext.dirs="..\..\..\..\..\rpcddsgen\lib" com.eprosima.rpcdds.idl.RPCDDSGEN -middleware opendds %args% -I../../../../../idl/opendds



