SUBDIRS = include

lib_LTLIBRARIES = librpcdds.la
librpcdds_la_SOURCES = src/client/Proxy.cpp \
			src/server/Server.cpp \
			src/utils/Utilities.cpp \
			src/utils/dds/Middleware.cpp \
			src/protocols/rest/FastBuffer.cpp \
			src/protocols/rest/HTTPEntities.cpp \
			src/protocols/rest/RESTSerializer.cpp \
			src/transports/components/TCPEndpoint.cpp \
			src/transports/TCPProxyTransport.cpp \
			src/transports/TCPServerTransport.cpp \
			src/transports/HttpProxyTransport.cpp \
			src/transports/HttpServerTransport.cpp \
			src/transports/AsyncTask.cpp \
			src/transports/dds/Transport.cpp \
			src/transports/dds/ProxyTransport.cpp \
			src/transports/dds/ServerTransport.cpp \
			src/transports/dds/DDSUDPProxyTransport.cpp \
			src/transports/dds/DDSUDPServerTransport.cpp \
			src/transports/dds/DDSTCPProxyTransport.cpp \
			src/transports/dds/DDSTCPServerTransport.cpp \
			src/transports/dds/DDSAsyncTask.cpp \
			src/transports/dds/AsyncThread.cpp \
			src/transports/dds/components/ProxyProcedureEndpoint.cpp \
			src/transports/dds/components/ServerProcedureEndpoint.cpp \
			src/strategies/ThreadPoolStrategy.cpp \
			src/strategies/SingleThreadStrategy.cpp \
			src/strategies/ThreadPerRequestStrategy.cpp \
			src/exceptions/Exception.cpp \
			src/exceptions/ClientInternalException.cpp \
			src/exceptions/InitializeException.cpp \
			src/exceptions/IncompatibleException.cpp \
			src/exceptions/ServerInternalException.cpp \
			src/exceptions/ServerNotFoundException.cpp \
			src/exceptions/ServerTimeoutException.cpp \
			src/exceptions/SystemException.cpp \
			src/exceptions/UserException.cpp

librpcdds_la_LDFLAGS = -version-number VERSION_MAJOR:VERSION_MINOR:0

AM_CPPFLAGS = -std=c++0x -DRTI_LINUX -DRTI_UNIX -Iinclude -Iinclude/rpcdds -Iextra/threadpool -I$(NDDSHOME)/include -I$(NDDSHOME)/include/ndds

rpcdds_licenciasdir = $(datadir)/doc/rpcdds
rpcdds_licencias_DATA = RPC_LICENSE.txt LGPLv3_LICENSE.txt

rpcdds_scriptdir = $(bindir)
rpcdds_script_DATA = scripts/rpcddsgen.sh

install-data-hook:
	mkdir -p $(DESTDIR)$(datadir)/doc/rpcdds; \
	cp -r doc/* $(DESTDIR)$(datadir)/doc/rpcdds; \
	mkdir -p $(DESTDIR)$(datadir)/rpcdds; \
	cp -r examples $(DESTDIR)$(datadir)/rpcdds/;

uninstall-hook:
	rm -r $(DESTDIR)$(datadir)/doc/rpcdds; \
	rm -r $(DESTDIR)$(datadir)/rpcdds
