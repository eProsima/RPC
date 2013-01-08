Generación:

wsdl2h -o SimpleDelay.h SimpleDelay.wsdl

soapcpp2 -i -I/usr/share/gsoap/import SimpleDelay.h
