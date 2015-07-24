#!/bin/sh
#
# rpcddsgen script
# based on work of theJPackage Project <http://www.jpackage.org/>

# Configuration
BASE_FLAGS=""
BASE_JARS="rpcddsgen"
BASE_OPTIONS=""
MAIN_CLASS=com.eprosima.fastrpc.rpcddsgen

# Source functions library
. /usr/share/java-utils/java-functions

# Set parameters
set_jvm
set_classpath $BASE_JARS
set_flags $BASE_FLAGS
set_options $BASE_OPTIONS
# Let's start
run -rpm "$@"
