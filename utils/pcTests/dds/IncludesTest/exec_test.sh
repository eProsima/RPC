#!/bin/bash

errorstatus=0

# Clean output directory
rm -rf output/*
# Info about test
echo "EXECUTING IncludesTest using operations as topics"
# Generates the Util idl file with RPCDDS script
mkdir output/util
../../../scripts/rpcdds_rti_pcTests.sh -d output/util -example $NDDSTARGET -protocol dds -topicGeneration byOperation "IncludesTest/util/Util.idl"
errorstatus=$?
if [ $errorstatus != 0 ]; then exit $errorstatus; fi
# Generates the rest of files with RPCDDS script
../../../scripts/rpcdds_rti_pcTests.sh -d output -example $NDDSTARGET -protocol dds -topicGeneration byOperation -IIncludesTest -IIncludesTest/hide "IncludesTest/IncludesTest.idl" "IncludesTest/SameDirectory.idl" "IncludesTest/Level2.idl" "IncludesTest/hide/Hide.idl"
errorstatus=$?
if [ $errorstatus != 0 ]; then exit $errorstatus; fi
# TODO Temporary set of LIBFASTCDR
export LIBFASTCDR=../../../../../../fastcdr/lib/$EPROSIMA_TARGET

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
# TODO Temporary set of LIBFASTCDR
export LIBFASTCDR=../../../../../fastcdr/lib/$EPROSIMA_TARGET
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
# TODO Unset temporary LIBFASTCDR
export LIBFASTCDR=

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

# Clean output directory
rm -rf output/*
# Info about test
echo "EXECUTING IncludesTest using interfaces as topics"
# Generates the Util idl file with RPCDDS script
mkdir output/util
../../../scripts/rpcdds_rti_pcTests.sh -d output/util -example $NDDSTARGET -protocol dds -topicGeneration byInterface "IncludesTest/util/Util.idl"
errorstatus=$?
if [ $errorstatus != 0 ]; then exit $errorstatus; fi
# Generates the rest of files with RPCDDS script
../../../scripts/rpcdds_rti_pcTests.sh -d output -example $NDDSTARGET -protocol dds -topicGeneration byInterface -IIncludesTest -IIncludesTest/hide "IncludesTest/IncludesTest.idl" "IncludesTest/SameDirectory.idl" "IncludesTest/Level2.idl" "IncludesTest/hide/Hide.idl"
errorstatus=$?
if [ $errorstatus != 0 ]; then exit $errorstatus; fi
# TODO Temporary set of LIBFASTCDR
export LIBFASTCDR=../../../../../../fastcdr/lib/$EPROSIMA_TARGET

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
# TODO Temporary set of LIBFASTCDR
export LIBFASTCDR=../../../../../fastcdr/lib/$EPROSIMA_TARGET
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
# TODO Unset temporary LIBFASTCDR
export LIBFASTCDR=

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
