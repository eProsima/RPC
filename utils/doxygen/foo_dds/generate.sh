#!/bin/bash

rm *.h
rm FooInterfaceRequestReply.idl
../../../scripts/rpcdds_rti_pcTests.sh FooInterface.idl
rm *.cxx
rm FooInterfaceRequestReply.h
rm FooInterfaceRequestReplyPlugin.h
rm FooInterfaceRequestReplySupport.h
rm MessageHeader*
echo "IMPORTANTE: Recuerda que hay que añadir @ingroup a las classes."
