#!/bin/sh

if [ x$JAVA_HOME = x ]; then
	echo "$filename: JAVA_HOME not set."
	exit 1
fi

exec "${JAVA_HOME}/bin/java" -Djava.ext.dirs="$RPCDDSHOME/rpcddsgen/lib" com.eprosima.rpcdds.RPCDDSGEN -middleware opendds -os Linux "$@" "-I$RPCDDSHOME/idl"
