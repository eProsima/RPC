FASTRPC_OUTDIR= $(OUTDIR)/fastrpc
FASTRPC_OUTDIR_DEBUG = $(FASTRPC_OUTDIR)/debug
FASTRPC_OUTDIR_RELEASE = $(FASTRPC_OUTDIR)/release

# Get product version.
FASTRPC_VERSION=-$(shell $(EPROSIMADIR)/scripts/common_pack_functions.sh printVersionFromCPP include/fastrpc/fastrpc_version.h)
FASTCDR_TARGET=$(shell $(EPROSIMADIR)/scripts/common_dds_functions.sh printEPROSIMAtarget) 

FASTRPC_SED_OUTPUT_DIR_DEBUG= $(subst /,\\/,$(FASTRPC_OUTDIR_DEBUG))
FASTRPC_SED_OUTPUT_DIR_RELEASE= $(subst /,\\/,$(FASTRPC_OUTDIR_RELEASE))

FASTRPC_LIBS_DEBUG= $(LIBS_DEBUG) -L../fastcdr/lib/$(FASTCDR_TARGET) -lfastcdr -lboost_system -lboost_thread
FASTRPC_LIBS= $(LIBS) -L../fastcdr/lib/$(FASTCDR_TARGET) -lfastcdr -lboost_system -lboost_thread

FASTRPC_CFLAGS_DEBUG= $(CFLAGS_DEBUG) -std=c++0x
FASTRPC_CFLAGS= $(CFLAGS) -std=c++0x

ifdef NDDSHOME
	FASTRPC_TARGET_DEBUG_FILE= libfastrpcd$(FASTRPC_VERSION).so
	FASTRPC_TARGET_DEBUG_Z_FILE= libfastrpcd$(FASTRPC_VERSION).a
	FASTRPC_TARGET_FILE= libfastrpc$(FASTRPC_VERSION).so
	FASTRPC_TARGET_Z_FILE= libfastrpc$(FASTRPC_VERSION).a
	FASTRPC_TARGET_DEBUG_FILE_LINK= libfastrpcd.so
	FASTRPC_TARGET_DEBUG_Z_FILE_LINK= libfastrpcd.a
	FASTRPC_TARGET_FILE_LINK= libfastrpc.so
	FASTRPC_TARGET_Z_FILE_LINK= libfastrpc.a
	SPECIFIC_INCLUDE_DIR= -I$(BASEDIR)/include/idl/rti
	SPECIFIC_SRC_CPPFILES=
	VERSION=$(NDDSVERSION)
else
ifdef DDS_ROOT
	FASTRPC_TARGET_DEBUG_FILE= libfastrpcod$(FASTRPC_VERSION).so
	FASTRPC_TARGET_DEBUG_Z_FILE= libfastrpcod$(FASTRPC_VERSION).a
	FASTRPC_TARGET_FILE= libfastrpco$(FASTRPC_VERSION).so
	FASTRPC_TARGET_Z_FILE= libfastrpco$(FASTRPC_VERSION).a
	FASTRPC_TARGET_DEBUG_FILE_LINK= libfastrpcod.so
	FASTRPC_TARGET_FILE_LINK= libfastrpco.so
	SPECIFIC_INCLUDE_DIR= -I$(BASEDIR)/include/idl/opendds
	SPECIFIC_SRC_CPPFILES=
	VERSION=$(DDS_VERSION)
endif
endif

FASTRPC_TARGET_DEBUG= $(BASEDIR)/lib/$(TARGET)/$(FASTRPC_TARGET_DEBUG_FILE)
FASTRPC_TARGET_DEBUG_Z= $(BASEDIR)/lib/$(TARGET)/$(FASTRPC_TARGET_DEBUG_Z_FILE)
FASTRPC_TARGET= $(BASEDIR)/lib/$(TARGET)/$(FASTRPC_TARGET_FILE)
FASTRPC_TARGET_Z= $(BASEDIR)/lib/$(TARGET)/$(FASTRPC_TARGET_Z_FILE)

FASTRPC_INCLUDE_DIRS= $(INCLUDE_DIRS) -I$(BASEDIR)/include \
		    -I$(EPROSIMADIR)/code \
		    -I$(BASEDIR)/../fastcdr/include \
		    -I$(EPROSIMA_LIBRARY_PATH)/threadpool-0_2_5-src/threadpool \
		    $(SPECIFIC_INCLUDE_DIR)

FASTRPC_SRC_CPPFILES= $(BASEDIR)/src/client/Proxy.cpp \
		     $(BASEDIR)/src/server/Server.cpp \
		     $(BASEDIR)/src/utils/Utilities.cpp \
		     $(BASEDIR)/src/utils/dds/Middleware.cpp \
		     $(BASEDIR)/src/protocols/dds/MessageHeader.cpp \
		     $(BASEDIR)/src/protocols/dds/MessageHeaderPlugin.cpp \
		     $(BASEDIR)/src/protocols/rest/FastBuffer.cpp \
		     $(BASEDIR)/src/protocols/rest/HTTPEntities.cpp \
		     $(BASEDIR)/src/protocols/rest/RESTSerializer.cpp \
		     $(BASEDIR)/src/transports/components/TCPEndpoint.cpp \
		     $(BASEDIR)/src/transports/TCPProxyTransport.cpp \
		     $(BASEDIR)/src/transports/TCPServerTransport.cpp \
		     $(BASEDIR)/src/transports/HttpProxyTransport.cpp \
		     $(BASEDIR)/src/transports/HttpServerTransport.cpp \
		     $(BASEDIR)/src/transports/AsyncTask.cpp \
		     $(BASEDIR)/src/transports/dds/Transport.cpp \
		     $(BASEDIR)/src/transports/dds/ProxyTransport.cpp \
		     $(BASEDIR)/src/transports/dds/ServerTransport.cpp \
		     $(BASEDIR)/src/transports/dds/DDSUDPProxyTransport.cpp \
		     $(BASEDIR)/src/transports/dds/DDSUDPServerTransport.cpp \
		     $(BASEDIR)/src/transports/dds/DDSTCPProxyTransport.cpp \
		     $(BASEDIR)/src/transports/dds/DDSTCPServerTransport.cpp \
		     $(BASEDIR)/src/transports/dds/DDSAsyncTask.cpp \
		     $(BASEDIR)/src/transports/dds/AsyncThread.cpp \
		     $(BASEDIR)/src/transports/dds/components/ProxyProcedureEndpoint.cpp \
		     $(BASEDIR)/src/transports/dds/components/ServerProcedureEndpoint.cpp \
		     $(BASEDIR)/src/strategies/ThreadPoolStrategy.cpp \
		     $(BASEDIR)/src/strategies/SingleThreadStrategy.cpp \
		     $(BASEDIR)/src/strategies/ThreadPerRequestStrategy.cpp \
		     $(BASEDIR)/src/exceptions/Exception.cpp \
		     $(BASEDIR)/src/exceptions/ClientInternalException.cpp \
		     $(BASEDIR)/src/exceptions/InitializeException.cpp \
		     $(BASEDIR)/src/exceptions/IncompatibleException.cpp \
		     $(BASEDIR)/src/exceptions/ServerInternalException.cpp \
		     $(BASEDIR)/src/exceptions/ServerNotFoundException.cpp \
		     $(BASEDIR)/src/exceptions/ServerTimeoutException.cpp \
		     $(BASEDIR)/src/exceptions/SystemException.cpp \
		     $(BASEDIR)/src/exceptions/UserException.cpp \
		     $(BASEDIR)/src/exceptions/BadParamException.cpp \
		     $(SPECIFIC_SRC_CPPFILES)

# Project sources are copied to the current directory
FASTRPC_SRCS= $(FASTRPC_SRC_CFILES) $(FASTRPC_SRC_CPPFILES)

# Source directories
FASTRPC_SOURCES_DIRS_AUX= $(foreach srcdir, $(dir $(FASTRPC_SRCS)), $(srcdir))
FASTRPC_SOURCES_DIRS= $(shell echo $(FASTRPC_SOURCES_DIRS_AUX) | tr " " "\n" | sort | uniq | tr "\n" " ")

FASTRPC_OBJS_DEBUG = $(foreach obj,$(notdir $(addsuffix .o, $(basename $(FASTRPC_SRCS)))), $(FASTRPC_OUTDIR_DEBUG)/$(obj))
FASTRPC_DEPS_DEBUG = $(foreach dep,$(notdir $(addsuffix .d, $(basename $(FASTRPC_SRCS)))), $(FASTRPC_OUTDIR_DEBUG)/$(dep))
FASTRPC_OBJS_RELEASE = $(foreach obj,$(notdir $(addsuffix .o, $(basename $(FASTRPC_SRCS)))), $(FASTRPC_OUTDIR_RELEASE)/$(obj))
FASTRPC_DEPS_RELEASE = $(foreach dep,$(notdir $(addsuffix .d, $(basename $(FASTRPC_SRCS)))), $(FASTRPC_OUTDIR_RELEASE)/$(dep))

OBJS+= $(FASTRPC_OBJS_DEBUG) $(FASTRPC_OBJS_RELEASE)
DEPS+= $(FASTRPC_DEPS_DEBUG) $(FASTRPC_DEPS_RELEASE)

.PHONY: fastrpc checkFASTRPCDirectories

fastrpc: checkFASTRPCDirectories $(FASTRPC_TARGET_DEBUG) $(FASTRPC_TARGET_DEBUG_Z) $(FASTRPC_TARGET) $(FASTRPC_TARGET_Z)

checkFASTRPCDirectories:
	@mkdir -p $(OUTDIR)
	@mkdir -p $(FASTRPC_OUTDIR)
	@mkdir -p $(FASTRPC_OUTDIR_DEBUG)
	@mkdir -p $(FASTRPC_OUTDIR_RELEASE)
	@mkdir -p lib
	@mkdir -p lib/$(TARGET)
	@mkdir -p $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)

$(FASTRPC_TARGET_DEBUG): $(FASTRPC_OBJS_DEBUG)
	$(LN) $(LDFLAGS) -shared -o $(FASTRPC_TARGET_DEBUG) $(LIBRARY_PATH) $(FASTRPC_OBJS_DEBUG) $(FASTRPC_LIBS_DEBUG)
	$(LNK) -s -f $(FASTRPC_TARGET_DEBUG_FILE) $(BASEDIR)/lib/$(TARGET)/$(FASTRPC_TARGET_DEBUG_FILE_LINK)
	$(CP) $(FASTRPC_TARGET_DEBUG) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)
	$(LNK) -s -f $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)/$(FASTRPC_TARGET_DEBUG_FILE) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)/$(FASTRPC_TARGET_DEBUG_FILE_LINK)

$(FASTRPC_TARGET_DEBUG_Z): $(FASTRPC_OBJS_DEBUG)
	$(AR) -cru $(FASTRPC_TARGET_DEBUG_Z) $(FASTRPC_OBJS_DEBUG)
	$(LNK) -s -f $(FASTRPC_TARGET_DEBUG_Z_FILE) $(BASEDIR)/lib/$(TARGET)/$(FASTRPC_TARGET_DEBUG_Z_FILE_LINK)
	$(CP) $(FASTRPC_TARGET_DEBUG_Z) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)
	$(LNK) -s -f $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)/$(FASTRPC_TARGET_DEBUG_Z_FILE) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)/$(FASTRPC_TARGET_DEBUG_Z_FILE_LINK)

$(FASTRPC_TARGET): $(FASTRPC_OBJS_RELEASE)
	$(LN) $(LDFLAGS) -shared -o $(FASTRPC_TARGET) $(LIBRARY_PATH) $(FASTRPC_OBJS_RELEASE) $(FASTRPC_LIBS)
	$(LNK) -s -f $(FASTRPC_TARGET_FILE) $(BASEDIR)/lib/$(TARGET)/$(FASTRPC_TARGET_FILE_LINK)
	$(CP) $(FASTRPC_TARGET) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)
	$(LNK) -s -f $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)/$(FASTRPC_TARGET_FILE) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)/$(FASTRPC_TARGET_FILE_LINK)

$(FASTRPC_TARGET_Z): $(FASTRPC_OBJS_RELEASE)
	$(AR) -cru $(FASTRPC_TARGET_Z) $(FASTRPC_OBJS_RELEASE)
	$(LNK) -s -f $(FASTRPC_TARGET_Z_FILE) $(BASEDIR)/lib/$(TARGET)/$(FASTRPC_TARGET_Z_FILE_LINK)
	$(CP) $(FASTRPC_TARGET_Z) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)
	$(LNK) -s -f $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)/$(FASTRPC_TARGET_Z_FILE) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)/$(FASTRPC_TARGET_Z_FILE_LINK)

vpath %.cpp $(FASTRPC_SOURCES_DIRS)
vpath %.cxx $(FASTRPC_SOURCES_DIRS)

$(FASTRPC_OUTDIR_DEBUG)/%.o:%.cpp
	@echo Calculating dependencies \(DEBUG mode\) $<
	@$(CPP) $(FASTRPC_CFLAGS_DEBUG) -MM $(FASTRPC_INCLUDE_DIRS) $< | sed "s/^.*:/$(FASTRPC_SED_OUTPUT_DIR_DEBUG)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(DEBUG mode\) $<  
	@$(CPP) $(FASTRPC_CFLAGS_DEBUG) $(FASTRPC_INCLUDE_DIRS) $< -o $@

$(FASTRPC_OUTDIR_RELEASE)/%.o:%.cpp
	@echo Calculating dependencies \(RELEASE mode\) $<
	@$(CPP) -MM $(FASTRPC_CFLAGS) $(FASTRPC_INCLUDE_DIRS) $< | sed "s/^.*:/$(FASTRPC_SED_OUTPUT_DIR_RELEASE)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(RELEASE mode\) $<
	@$(CPP) $(FASTRPC_CFLAGS) $(FASTRPC_INCLUDE_DIRS) $< -o $@

$(FASTRPC_OUTDIR_DEBUG)/%.o:%.cxx
	@echo Calculating dependencies \(DEBUG mode\) $<
	@$(CPP) $(FASTRPC_CFLAGS_DEBUG) -MM $(FASTRPC_INCLUDE_DIRS) $< | sed "s/^.*:/$(FASTRPC_SED_OUTPUT_DIR_DEBUG)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(DEBUG mode\) $<  
	@$(CPP) $(FASTRPC_CFLAGS_DEBUG) $(FASTRPC_INCLUDE_DIRS) $< -o $@

$(FASTRPC_OUTDIR_RELEASE)/%.o:%.cxx
	@echo Calculating dependencies \(RELEASE mode\) $<
	@$(CPP) -MM $(FASTRPC_CFLAGS) $(FASTRPC_INCLUDE_DIRS) $< | sed "s/^.*:/$(FASTRPC_SED_OUTPUT_DIR_RELEASE)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(RELEASE mode\) $<
	@$(CPP) $(FASTRPC_CFLAGS) $(FASTRPC_INCLUDE_DIRS) $< -o $@

