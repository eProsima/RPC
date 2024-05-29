# Generate internal idl files

cd fastrpcgen/share/rpcdds/idl
../../../scripts/rpcddsgen -replace -genapi MessageHeader.idl
mv MessageHeader.h ../../../../include/protocols/dds/MessageHeader.h
mv MessageHeader.cxx ../../../../src/protocols/dds/MessageHeader.cpp
rm *.h
rm *.cxx
sed -i 's+#include <rpcdds/\(.*\)>+#include "../../\1"+' ../../../../include/protocols/dds/MessageHeader.h
cd ../../../..
