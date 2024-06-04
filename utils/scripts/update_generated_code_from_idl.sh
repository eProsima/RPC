#!/bin/bash

# Generate internal idl files

cd fastrpcgen/share/rpcdds/idl
../../../scripts/rpcddsgen -cdr both -replace -genapi MessageHeader.idl
mv MessageHeader.h ../../../../include/protocols/dds/MessageHeader.h
mv MessageHeaderv1.h ../../../../include/protocols/dds/MessageHeaderv1.h
mv MessageHeaderCdrAux.ipp ../../../../src/protocols/dds/MessageHeaderCdrAux.ipp
mv MessageHeader.cxx ../../../../src/protocols/dds/MessageHeader.cpp
mv MessageHeaderv1.cxx ../../../../src/protocols/dds/MessageHeaderv1.cpp
rm *.h
rm *.cxx
sed -i 's+#include <rpcdds/\(.*\)>+#include "../../\1"+' ../../../../include/protocols/dds/MessageHeader.h
sed -i 's+#include <rpcdds/\(.*\)>+#include "../../\1"+' ../../../../include/protocols/dds/MessageHeaderv1.h
cd ../../../..

# Generate examples

cd examples/C++/rpcdds/c++11Types/RTPSCalculator
../../../../../fastrpcgen/scripts/rpcddsgen -cdr both -topicGeneration byOperation -replace Calculator.idl
cd ../../../../..

cd examples/C++/rpcdds/c++11Types/RTPSCalculatorAsync
../../../../../fastrpcgen/scripts/rpcddsgen -cdr both -topicGeneration byOperation -replace Calculator.idl
cd ../../../../..
