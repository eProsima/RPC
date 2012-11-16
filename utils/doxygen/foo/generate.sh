#!/bin/bash

rm *.h
rm FooInterfaceRequestReply.idl
../../../scripts/ddsrpc_rti_pcTests.sh FooInterface.idl
rm *.cxx
rm FooInterfaceRequestReply.h
rm FooInterfaceRequestReplyPlugin.h
rm FooInterfaceRequestReplySupport.h
