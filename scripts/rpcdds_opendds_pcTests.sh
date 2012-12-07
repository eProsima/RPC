#!/bin/sh

if [ x$JAVA_HOME = x ]; then
	echo "$filename: JAVA_HOME not set."
	exit 1
fi

exec "${JAVA_HOME}/bin/java" -DPATH="$PATH" -DLD_LIBRARY_PATH="$LD_LIBRARY_PATH" -DTAO_ROOT="$TAO_ROOT" -DDDS_ROOT="$DDS_ROOT" -DRPCDDSHOME="$RPCDDSHOME" -Djava.ext.dirs="../../../../rpcddsgen/lib" com.eprosima.rpcdds.idl.RPCDDSGEN -middleware opendds -os Linux "$@"
