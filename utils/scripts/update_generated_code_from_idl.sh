#!/bin/bash

# Generate internal idl files

cd fastrpcgen/share/rpcdds/idl
../../../scripts/rpcddsgen -replace -genapi MessageHeader.idl
mv MessageHeader.h ../../../../include/protocols/dds/MessageHeader.h
mv MessageHeaderCdrAux.ipp ../../../../src/protocols/dds/MessageHeaderCdrAux.ipp
mv MessageHeader.cxx ../../../../src/protocols/dds/MessageHeader.cpp
rm *.h
rm *.cxx
sed -i 's+#include <rpcdds/\(.*\)>+#include "../../\1"+' ../../../../include/protocols/dds/MessageHeader.h
cd ../../../..

# Generate examples

cd examples/C++/rpcdds/c++11Types/RTPSCalculator
../../../../../fastrpcgen/scripts/rpcddsgen -replace Calculator.idl
cd ../../../../..

cd examples/C++/rpcdds/c++11Types/RTPSCalculatorAsync
../../../../../fastrpcgen/scripts/rpcddsgen -replace Calculator.idl
cd ../../../../..
