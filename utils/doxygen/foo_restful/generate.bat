
del *.h
del FooInterfaceRequestReply.idl
del FooInterface.idl

call ..\..\..\scripts\rpcdds_rti_pcTests.bat -ppDisable -protocol rest FooInterface.wadl

del *.cxx
del FooInterfaceRequestReply.h
del FooInterfaceRequestReplyPlugin.h
del FooInterfaceRequestReplySupport.h
del MessageHeader*
echo "IMPORTANTE: Recuerda que hay que añadir @ingroup a las classes."
