#!/bin/bash

TEST_NAME=MultithreadTest
# Backup of Client.cxx file.
cp Client.cxx Client.cxx.backup
# Backup of the ServerImpl.cxx file
cp ${TEST_NAME}ServerImpl.cxx ${TEST_NAME}ServerImpl.cxx.backup
# Delete all generated files.
rm *.h *.cxx ${TEST_NAME}RequestReply.idl
# Generates the file with RPCDDS script
$RPCDDSHOME/scripts/rpcdds_rti_pcTests.sh -ppDisable "${TEST_NAME}.idl"
errorstatus=$?
# Copy backup to original files.
mv Client.cxx.backup Client.cxx
mv ${TEST_NAME}ServerImpl.cxx.backup ${TEST_NAME}ServerImpl.cxx
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
objs/x64Linux2.6gcc4.5.1/${TEST_NAME}Server &
# Wait 5 seconds
sleep 5
# Execute the client
objs/x64Linux2.6gcc4.5.1/${TEST_NAME}Client
errorstatus=$?
if [ $errorstatus != 0 ]; then return; fi
# Kill server
killall -9 ${TEST_NAME}Server
