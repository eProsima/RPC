#!/bin/sh

if [ x$JAVA_HOME = x ]; then
	echo "$filename: JAVA_HOME not set."
	exit 1
fi

exec "${JAVA_HOME}/bin/java" -DPATH="$PATH" -DLD_LIBRARY_PATH="$LD_LIBRARY_PATH" -DTAO_ROOT="$TAO_ROOT" -DDDS_ROOT="$DDS_ROOT" -Djava.ext.dirs="../../../../idl2ddsrpc/lib" com.eprosima.ddsrpc.idl.IDL2DDSRPC -middleware opendds -os Linux "$@"
