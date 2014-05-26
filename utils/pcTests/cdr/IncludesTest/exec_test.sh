#!/bin/bash

errorstatus=0

# Clean output directory
rm -rf output/*
# Info about test
echo "EXECUTING IncludesTest"
# Generates the Util idl file with FASTRPC script
mkdir output/util
../../../scripts/fastrpcgen.sh -local -d output/util -example $NDDSTARGET "IncludesTest/util/Util.idl" $*
errorstatus=$?
if [ $errorstatus != 0 ]; then exit $errorstatus; fi
# Generates the rest of files with FASTRPC script
../../../scripts/fastrpcgen.sh -local -d output -example $NDDSTARGET -IIncludesTest -IIncludesTest/hide "IncludesTest/IncludesTest.idl" "IncludesTest/SameDirectory.idl" "IncludesTest/Level2.idl" "IncludesTest/hide/Hide.idl" $*
errorstatus=$?
if [ $errorstatus != 0 ]; then exit $errorstatus; fi

# Compile the Util idl file.
make -C output/util -f makefile_$NDDSTARGET all
errorstatus=$?
if [ $errorstatus != 0 ]; then exit $errorstatus; fi
# Copy the Util idl library
mkdir output/lib
mkdir output/lib/$NDDSTARGET
cp output/util/lib/$NDDSTARGET/libUtil.a output/lib/$NDDSTARGET
errorstatus=$?
if [ $errorstatus != 0 ]; then exit $errorstatus; fi
# Compile the rest of files.
make -C output -f makefile_$NDDSTARGET all
errorstatus=$?
if [ $errorstatus != 0 ]; then exit $errorstatus; fi
# Copy static files into output directory.
cp IncludesTest/IncludesTestClientExample.cxx output
errorstatus=$?
if [ $errorstatus != 0 ]; then exit $errorstatus; fi
cp IncludesTest/IncludesTestServerImplExample.cxx output
errorstatus=$?
if [ $errorstatus != 0 ]; then exit $errorstatus; fi
make -C output -f makefile_$NDDSTARGET all
errorstatus=$?
if [ $errorstatus != 0 ]; then exit $errorstatus; fi

# Execute the server in background
output/bin/$NDDSTARGET/IncludesTestServerExample &
# Wait 5 seconds
sleep 5
# Execute the client
output/bin/$NDDSTARGET/IncludesTestClientExample
errorstatus=$?
# Kill server
killall -9 IncludesTestServerExample
if [ $errorstatus != 0 ]; then exit $errorstatus; fi
