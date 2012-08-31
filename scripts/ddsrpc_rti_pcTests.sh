#!/bin/sh

if [ x$JAVA_HOME = x ]; then
	echo "$filename: JAVA_HOME not set."
	exit 1
fi



exec "${JAVA_HOME}/bin/java" -DPATH="$PATH" -DNDDSHOME="$NDDSHOME" -Djava.ext.dirs="../../../../idl2ddsrpc/lib" com.eprosima.ddsrpc.idl.IDL2DDSRPC -os Linux "$@"
