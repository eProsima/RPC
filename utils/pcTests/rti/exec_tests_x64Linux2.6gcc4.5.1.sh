#!/bin/bash

errorstatus=0

function execTest
{
# Backup of Client.cxx file.
cp Client.cxx Client.cxx.backup
# Backup of the ServerImpl.cxx file
cp $1ServerImpl.cxx $1ServerImpl.cxx.backup
# Delete all generated files.
rm *.h *.cxx $1RequestReply.idl makefile_x64Linux2.6gcc4.5.1
# Generates the file with RPCDDS script
$RPCDDSHOME/scripts/rpcdds_rti_pcTests.sh -ppDisable -example x64Linux2.6gcc4.5.1 "$1.idl"
errorstatus=$?
# Copy backup to original files.
mv Client.cxx.backup Client.cxx
mv $1ServerImpl.cxx.backup $1ServerImpl.cxx
if [ $errorstatus != 0 ]; then return; fi
# Clean output directory
rm -rf objs
# Compile client application
make -f makefile_x64Linux2.6gcc4.5.1
errorstatus=$?
if [ $errorstatus != 0 ]; then return; fi
# Compile server application
make -f makefile_x64Linux2.6gcc4.5.1 server
errorstatus=$?
if [ $errorstatus != 0 ]; then return; fi
# Execute the server in background
objs/x64Linux2.6gcc4.5.1/$1Server &
# Wait 5 seconds
sleep 5
# Execute the client
objs/x64Linux2.6gcc4.5.1/$1Client
errorstatus=$?
if [ $errorstatus != 0 ]; then return; fi
# Kill server
killall -9 $1Server
}

# This script runs all tests in this directory and checks their results.
for dir in $(find . -type d -mindepth 1 -maxdepth 1 -printf "%f\n"); do
# Enter to the directory.
cd $dir
if [ -e "exec_test_x64Linux2.6gcc4.5.1.sh" ] ; then
    ./exec_test_x64Linux2.6gcc4.5.1.sh
else
    execTest $dir
fi
# Go out to the parent directory.
cd ..
# Detect error in call.
if [ $errorstatus != 0 ]; then
break
fi
done

if [ $errorstatus == 0 ]; then
echo "TEST SUCCESSFULLY"
else
echo "TEST FAILED"
fi

exit $errorstatus
