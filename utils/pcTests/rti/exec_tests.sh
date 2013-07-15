#!/bin/bash

errorstatus=0

# This function execute a test in a directory.
# @param Plaform for Visual Studio.
# @param Name of the test
function execTest
{
    # Clean output directory
    rm -rf output/*
    # Info about test
    echo "EXECUTING $1"
    # Generates the file with RPCDDS script
    ../../../scripts/rpcdds_rti_pcTests.sh -ppDisable -d output -example $NDDSTARGET "$1/$1.idl"
    errorstatus=$?
    # Copy static test files into output directory
    cp $1/* output/
    if [ $errorstatus != 0 ]; then return; fi
    # Compile client and server example application
    make -C output -f makefile_$NDDSTARGET all
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Execute the server in background
    output/bin/$NDDSTARGET/$1ServerExample &
    # Wait 5 seconds
    sleep 5
    # Execute the client
    output/bin/$NDDSTARGET/$1ClientExample
    errorstatus=$?
    # Kill server
    killall -9 $1ServerExample
    if [ $errorstatus != 0 ]; then return; fi
}

# Set environment for RTPDDS
. $EPROSIMADIR/scripts/common_dds_functions.sh setRTIversion ndds.5.0.0

# Create symbolic link to EPROSIMADIR in the rpcdds folder.
if [ ! -e "../../../include/eProsima_cpp" ]; then
	ln -s $EPROSIMADIR/code/eProsima_cpp ../../../include/eProsima_cpp
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
fi

# Create output directory 
if [ ! -d "output" ]; then
    mkdir output
fi

# This script runs all tests in this directory and checks their results.
for dir in $(find . -mindepth 1 -maxdepth 1 -path ./output -prune -o -type d -printf "%f\n"); do
    if [ -e "$dir/exec_test.sh" ] ; then
        #./exec_test.sh
		echo NADA
    else
        execTest $dir
    fi

    # Detect error in call.
    if [ $errorstatus != 0 ]; then
        break
    fi
done

# Remove output directory
#rm -r output

# Remove symbolic link
if [ -e ../../../include/eProsima_cpp ]; then
	rm ../../../include/eProsima_cpp
fi

# Restore environment for RPCDDS
. $EPROSIMADIR/scripts/common_dds_functions.sh restoreRTIversion

if [ $errorstatus == 0 ]; then
    echo "TEST SUCCESSFULLY"
else
    echo "TEST FAILED"
fi

exit $errorstatus

