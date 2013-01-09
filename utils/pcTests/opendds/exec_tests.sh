#!/bin/bash

errorstatus=0
EXPECTED_ARGS=1

function execTest
{
    # Clean output directory
    rm -rf output/*
    # Info about test
    echo "EXECUTING $2"
    # Generates the file with RPCDDS script
    $RPCDDSHOME/scripts/rpcdds_opendds_pcTests.sh -ppDisable -d output -example $1 "$2/$2.idl"
    errorstatus=$?
    # Copy static test files into output directory
    cp $2/* output/
    if [ $errorstatus != 0 ]; then return; fi
    # Compile client application
    make -C output -f makefile_$1
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Compile server application
    make -C output -f makefile_$1 server
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Execute the server in background
    output/objs/$1/$2Server &
    # Wait 5 seconds
    sleep 5
    # Execute the client
    output/objs/$1/$2Client
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Kill server
    killall -9 $2Server
}

# Check the parameters
if [ $# -ne $EXPECTED_ARGS ]; then
    echo "Usage: `basename $0` <platform>"
    exit 65
fi

# Create output directory 
if [ ! -d "output" ]; then
    mkdir output
fi

# This script runs all tests in this directory and checks their results.
for dir in $(find . -mindepth 1 -maxdepth 1 -path ./output -prune -o -type d -printf "%f\n"); do
    if [ -e "$dir/exec_test.sh" ] ; then
        ./exec_test.sh
    else
        execTest $1 $dir
    fi

    # Detect error in call.
    if [ $errorstatus != 0 ]; then
        break
    fi
done

# Remove output directory
rm -r output

if [ $errorstatus == 0 ]; then
    echo "TEST SUCCESSFULLY"
else
    echo "TEST FAILED"
fi

exit $errorstatus

