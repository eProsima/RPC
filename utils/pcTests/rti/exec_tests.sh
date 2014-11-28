#!/bin/bash
# This scripts run the unit tests. Supports two optional parameters.
# @param The unit test to be run. If it isn't set, then all unit tests are run.
# @param Second parameter is the used architecture. Supported i86 and x64. If it isn't set all architectures are used.
# @param The rest of params will be to java application

errorstatus=0
test_selected=""
# @default, all targets are used (i86 and x64)
test_targets=""
test_args=""

# This function execute a test in a directory.
# @param Plaform for Visual Studio.
# @param Name of the test
function execTest
{
    # Clean output directory
    rm -rf output/*
    # Info about test
    echo "EXECUTING $1 for $NDDSTARGET using operations as topics"
    # Generates the file with FASTRPC script
    ../../../scripts/rpcddsgen.sh -local -types rti -topicGeneration byOperation -d output -example $NDDSTARGET "$1/$1.idl" $test_args
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Compile client and server example application
    make -C output -f makefile_$NDDSTARGET all
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Copy static test files into output directory
    cp $1/* output/
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Compile again client and server example application
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

    # Clean output directory
    rm -rf output/*
    # Info about test
    echo "EXECUTING $1 for $NDDSTARGET using interfaces as topics"
    # Generates the file with FASTRPC script
    ../../../scripts/rpcddsgen.sh -local -types rti -topicGeneration byInterface -d output -example $NDDSTARGET "$1/$1.idl" $test_args
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Compile client and server example application
    make -C output -f makefile_$NDDSTARGET all
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Copy static test files into output directory
    cp $1/* output/
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Compile again client and server example application
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

# Get the optional parameter
while (( "$#" )); do
    if [[ $1 != -* ]]; then
        if [ $1 == "i86" ] || [ $1 == "x64" ]; then
            test_targets=$1
        else
            test_selected=$1
            echo TEST $test_selected
        fi
    else
        test_args=$*
        break
    fi

    shift
done

# Check environment variables
if [ "$NDDSHOME" == "" ]; then
    echo "NDDSHOME environment variables is not set."
    exit -1
fi

#if [ "$EPROSIMADIR" == "" ]; then
#    echo "EPROSIMADIR environment variables is not set."
#    exit -1
#fi

if [ "$RPCDDSHOME" == "" ]; then
    echo "RPCDDSHOME environment variables is not set."
    exit -1
fi

# Set environment for RPCDDS
. ../../../thirdparty/dev-env/scripts/common_dds_functions.sh setRTIversion ndds.5.1.0

# Create output directory 
if [ ! -d "output" ]; then
    mkdir output
fi

# This script runs all tests in this directory and checks their results.
for dir in $(find . -mindepth 1 -maxdepth 1 -path ./output -prune -o -path ./.svn -prune -o -type d -printf "%f\n"); do
    if [ "$test_selected" == "" ] || [ "$test_selected" == "$dir" ]; then
        if [ -e "$dir/exec_test.sh" ] ; then
            if [ $errorstatus == 0 ]; then
                if [ -z $test_targets ] || [ "$test_targets" == "i86" ]; then
                    . ../../../thirdparty/dev-env/scripts/common_dds_functions.sh setRTItarget i86
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh setTarget i86
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh setTargetLibraryPath ../../../lib/$NDDSTARGET
                    $dir/exec_test.sh $test_args
                    errorstatus=$?
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh restoreTargetLibraryPath
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh restoreTarget
                    . ../../../thirdparty/dev-env/scripts/common_dds_functions.sh restoreRTItarget
                fi
            fi
            # x64 target
            if [ $errorstatus == 0 ]; then
                if [ -z $test_targets ] || [ "$test_targets" == "x64" ]; then
                    . ../../../thirdparty/dev-env/scripts/common_dds_functions.sh setRTItarget x64
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh setTarget x64
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh setTargetLibraryPath ../../../lib/$NDDSTARGET
                    $dir/exec_test.sh $test_args
                    errorstatus=$?
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh restoreTargetLibraryPath
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh restoreTarget
                    . ../../../thirdparty/dev-env/scripts/common_dds_functions.sh restoreRTItarget
                fi
            fi
        else
            # i86 target
            if [ $errorstatus == 0 ]; then
                if [ -z $test_targets ] || [ "$test_targets" == "i86" ]; then
                    . ../../../thirdparty/dev-env/scripts/common_dds_functions.sh setRTItarget i86
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh setTarget i86
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh setTargetLibraryPath ../../../lib/$NDDSTARGET
                    execTest $dir
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh restoreTargetLibraryPath
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh restoreTarget
                    . ../../../thirdparty/dev-env/scripts/common_dds_functions.sh restoreRTItarget
                fi
            fi
            # x64 target
            if [ $errorstatus == 0 ]; then
                if [ -z $test_targets ] || [ "$test_targets" == "x64" ]; then
                    . ../../../thirdparty/dev-env/scripts/common_dds_functions.sh setRTItarget x64
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh setTarget x64
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh setTargetLibraryPath ../../../lib/$NDDSTARGET
                    execTest $dir
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh restoreTargetLibraryPath
                    . ../../../thirdparty/dev-env/scripts/common_exectest_functions.sh restoreTarget
                    . ../../../thirdparty/dev-env/scripts/common_dds_functions.sh restoreRTItarget
                fi
            fi
        fi
    fi

    # Detect error in call.
    if [ $errorstatus != 0 ]; then
        break
    fi
done

# Remove output directory
rm -r output

# Restore environment for FASTRPC
. ../../../thirdparty/dev-env/scripts/common_dds_functions.sh restoreRTIversion

if [ $errorstatus == 0 ]; then
    echo "TEST SUCCESSFULLY"
else
    echo "TEST FAILED"
fi

exit $errorstatus
