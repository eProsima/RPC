#!/bin/bash
# This scripts run the unit tests. Supports two optional parameters.
# @param The unit test to be run. If it isn't set, then all unit tests are run.
# Second parameter is the used architecture. Supported i86 and x64. If it isn't set all architectures are used.

errorstatus=0
test_selected=""
# @default, all targets are used (i86 and x64)
test_targets=""

# This function execute a test in a directory.
# @param Plaform for Visual Studio.
# @param Name of the test
function execTest
{
    # Clean output directory
    rm -rf output/*
    # Info about test
    echo "EXECUTING $1 for $NDDSTARGET"
    # Generates the file with RPCDDS script
    ../../../scripts/rpcdds_rti_pcTests.sh -d output -example $NDDSTARGET "$1/$1.idl"
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
if [ $# -ge 1 ] && [ -n $1 ]; then
    if [ "$1" == "i86" ] || [ "$1" == "x64" ]; then
        test_targets=$1
    else
        test_selected=$1

        if [ $# -ge 2 ] && [ -n $2 ]; then
            if [ "$2" == "i86" ] || [ "$2" == "x64" ]; then
                test_targets=$2
            else
                echo Error: Bad argument in second parameter. Valid values. i86, x64
                exit -1;
            fi
        fi
    fi
fi

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
for dir in $(find . -mindepth 1 -maxdepth 1 -path ./output -prune -o -path ./.svn -prune -o -type d -printf "%f\n"); do
    if [ "$test_selected" == "" ] || [ "$test_selected" == "$dir" ]; then
        if [ -e "$dir/exec_test.sh" ] ; then
            if [ $errorstatus == 0 ]; then
                if [ -z $test_targets ] || [ "$test_targets" == "i86" ]; then
                    . $EPROSIMADIR/scripts/common_dds_functions.sh setRTItarget i86
                    . $EPROSIMADIR/scripts/common_exectest_functions.sh setTargetLibraryPath ../../../lib/$NDDSTARGET
                    $dir/exec_test.sh
                    errorstatus=$?
                    . $EPROSIMADIR/scripts/common_exectest_functions.sh restoreTargetLibraryPath
                    . $EPROSIMADIR/scripts/common_dds_functions.sh restoreRTItarget
                fi
            fi
            # x64 target
            if [ $errorstatus == 0 ]; then
                if [ -z $test_targets ] || [ "$test_targets" == "x64" ]; then
                    . $EPROSIMADIR/scripts/common_dds_functions.sh setRTItarget x64
                    . $EPROSIMADIR/scripts/common_exectest_functions.sh setTargetLibraryPath ../../../lib/$NDDSTARGET
                    $dir/exec_test.sh
                    errorstatus=$?
                    . $EPROSIMADIR/scripts/common_exectest_functions.sh restoreTargetLibraryPath
                    . $EPROSIMADIR/scripts/common_dds_functions.sh restoreRTItarget
                fi
            fi
        else
            # i86 target
            if [ $errorstatus == 0 ]; then
                if [ -z $test_targets ] || [ "$test_targets" == "i86" ]; then
                    . $EPROSIMADIR/scripts/common_dds_functions.sh setRTItarget i86
                    . $EPROSIMADIR/scripts/common_exectest_functions.sh setTargetLibraryPath ../../../lib/$NDDSTARGET
                    execTest $dir
                    . $EPROSIMADIR/scripts/common_exectest_functions.sh restoreTargetLibraryPath
                    . $EPROSIMADIR/scripts/common_dds_functions.sh restoreRTItarget
                fi
            fi
            # x64 target
            if [ $errorstatus == 0 ]; then
                if [ -z $test_targets ] || [ "$test_targets" == "x64" ]; then
                    . $EPROSIMADIR/scripts/common_dds_functions.sh setRTItarget x64
                    . $EPROSIMADIR/scripts/common_exectest_functions.sh setTargetLibraryPath ../../../lib/$NDDSTARGET
                    execTest $dir
                    . $EPROSIMADIR/scripts/common_exectest_functions.sh restoreTargetLibraryPath
                    . $EPROSIMADIR/scripts/common_dds_functions.sh restoreRTItarget
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

