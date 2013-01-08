#!/bin/sh

if [ x$JAVA_HOME = x ]; then
	filename=$0
	arch="some_dummy_value_to_be_overridden_later"
	os=`uname -s`

	case $os in
		Linux*)
			cpu=`uname -p`

			if test "unknown" = "$cpu";
			then
				cpu=`uname -m`
			fi

			if test "x86_64" = "$cpu"; then
				if [ -d "${NDDSHOME}/jre/x64Linux" ]; then
					arch="x64Linux"
				else
					# Try using jre shipped 32-bit linux host
					arch="i86Linux"
				fi
			else
				if test "unknown" = "$cpu"; then
					# This may be Ubuntu, try uname -m
					cpu=`uname -m`
					if test "x86_64" = "$cpu"; then
						if [ -d "${NDDSHOME}/jre/x64Linux" ]; then
							arch="x64Linux"
						else
							# Try using jre shipped 32-bit linux host
							arch="i86Linux"
						fi
					else
						arch="i86Linux"
					fi		
				else
					arch="i86Linux"
				fi
			fi
			;;
		*)
			# If we don't recognize the OS, fall back to JREHOME. It may still work.
			echo "Warning: OS $os may not be supported. Be sure JREHOME is set."
			;;
	esac

	if [ x$NDDSJREHOME = x ]; then
		if [ -d "${NDDSHOME}/jre/${arch}" ]; then
			JREHOME="${NDDSHOME}/jre/${arch}"
		else
			if [ x$JREHOME = x ]; then
				echo "$filename: JREHOME not set."
				exit 1
			fi
		fi
	else
		JREHOME="${NDDSJREHOME}"
	fi
else
	JREHOME="${JAVA_HOME}"
fi

exec "${JREHOME}/bin/java" -DPATH="$PATH" -DNDDSHOME="$NDDSHOME" -DRPCDDSHOME="$RPCDDSHOME" -Djava.ext.dirs="$RPCDDSHOME/rpcddsgen/lib" com.eprosima.rpcdds.idl.RPCDDSGEN -os Linux -I$RPCDDSHOME/idl "$@"
