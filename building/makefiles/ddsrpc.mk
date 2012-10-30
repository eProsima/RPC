DDSRPC_OUTDIR= $(OUTDIR)/ddsrpc
DDSRPC_OUTDIR_DEBUG = $(DDSRPC_OUTDIR)/debug
DDSRPC_OUTDIR_RELEASE = $(DDSRPC_OUTDIR)/release

DDSRPC_SED_OUTPUT_DIR_DEBUG= $(subst /,\\/,$(DDSRPC_OUTDIR_DEBUG))
DDSRPC_SED_OUTPUT_DIR_RELEASE= $(subst /,\\/,$(DDSRPC_OUTDIR_RELEASE))

DDSRPC_TARGET_DEBUG= $(BASEDIR)/lib/$(TARGET)/libddsrpcd.so
DDSRPC_TARGET_DEBUG_Z= $(BASEDIR)/lib/$(TARGET)/libddsrpczd.a
DDSRPC_TARGET= $(BASEDIR)/lib/$(TARGET)/libddsrpc.so
DDSRPC_TARGET_Z= $(BASEDIR)/lib/$(TARGET)/libddsrpcz.a

DDSRPC_LIBS_DEBUG= $(LIBS_DEBUG) -lboost_thread-mt
DDSRPC_LIBS= $(LIBS) -lboost_thread-mt

DDSRPC_CFLAGS_DEBUG= $(CFLAGS_DEBUG) -std=c++11
DDSRPC_CFLAGS= $(CFLAGS) -std=c++11

ifdef NDDSHOME
	SPECIFIC_INCLUDE_DIR= -I$(BASEDIR)/include/idl/rti
	SPECIFIC_SRC_CPPFILES= $(BASEDIR)/src/idl/rti/MessageHeader.cxx \
			     $(BASEDIR)/src/idl/rti/MessageHeaderPlugin.cxx \
			     $(BASEDIR)/src/idl/rti/MessageHeaderSupport.cxx
else
ifdef DDS_ROOT
	SPECIFIC_INCLUDE_DIR= -I$(BASEDIR)/include/idl/opendds
	SPECIFIC_SRC_CPPFILES= $(BASEDIR)/src/idl/opendds/MessageHeaderC.cpp \
			     $(BASEDIR)/src/idl/opendds/MessageHeaderTypeSupportImpl.cpp
endif
endif

DDSRPC_INCLUDE_DIRS= $(INCLUDE_DIRS) -I$(BASEDIR)/include \
		    -I$(EPROSIMADIR)/code \
		    -I$(EPROSIMA_LIBRARY_PATH)/threadpool-0_2_5-src/threadpool \
		    $(SPECIFIC_INCLUDE_DIR)

DDSRPC_SRC_CPPFILES= $(BASEDIR)/src/client/Client.cpp \
			$(BASEDIR)/src/client/AsyncTask.cpp \
			$(BASEDIR)/src/client/AsyncThread.cpp \
			$(BASEDIR)/src/client/ClientRPC.cpp \
			$(BASEDIR)/src/server/Server.cpp \
			$(BASEDIR)/src/server/ServerRPC.cpp \
			$(BASEDIR)/src/utils/Utilities.cpp \
			$(BASEDIR)/src/transports/UDPTransport.cpp \
			$(BASEDIR)/src/transports/TCPTransport.cpp \
			$(BASEDIR)/src/strategies/ThreadPoolStrategy.cpp \
			$(BASEDIR)/src/strategies/SingleThreadStrategy.cpp \
			$(BASEDIR)/src/strategies/ThreadPerRequestStrategy.cpp \
			$(SPECIFIC_SRC_CPPFILES)

# Project sources are copied to the current directory
DDSRPC_SRCS= $(DDSRPC_SRC_CFILES) $(DDSRPC_SRC_CPPFILES)

# Source directories
DDSRPC_SOURCES_DIRS_AUX= $(foreach srcdir, $(dir $(DDSRPC_SRCS)), $(srcdir))
DDSRPC_SOURCES_DIRS= $(shell echo $(DDSRPC_SOURCES_DIRS_AUX) | tr " " "\n" | sort | uniq | tr "\n" " ")

DDSRPC_OBJS_DEBUG = $(foreach obj,$(notdir $(addsuffix .o, $(basename $(DDSRPC_SRCS)))), $(DDSRPC_OUTDIR_DEBUG)/$(obj))
DDSRPC_DEPS_DEBUG = $(foreach dep,$(notdir $(addsuffix .d, $(basename $(DDSRPC_SRCS)))), $(DDSRPC_OUTDIR_DEBUG)/$(dep))
DDSRPC_OBJS_RELEASE = $(foreach obj,$(notdir $(addsuffix .o, $(basename $(DDSRPC_SRCS)))), $(DDSRPC_OUTDIR_RELEASE)/$(obj))
DDSRPC_DEPS_RELEASE = $(foreach dep,$(notdir $(addsuffix .d, $(basename $(DDSRPC_SRCS)))), $(DDSRPC_OUTDIR_RELEASE)/$(dep))

OBJS+= $(DDSRPC_OBJS_DEBUG) $(DDSRPC_OBJS_RELEASE)
DEPS+= $(DDSRPC_DEPS_DEBUG) $(DDSRPC_DEPS_RELEASE)

.PHONY: ddsrpc checkDDSRPCDirectories

ddsrpc: checkDDSRPCDirectories $(DDSRPC_TARGET_DEBUG) $(DDSRPC_TARGET_DEBUG_Z) $(DDSRPC_TARGET) $(DDSRPC_TARGET_Z)

checkDDSRPCDirectories:
	@mkdir -p $(OUTDIR)
	@mkdir -p $(DDSRPC_OUTDIR)
	@mkdir -p $(DDSRPC_OUTDIR_DEBUG)
	@mkdir -p $(DDSRPC_OUTDIR_RELEASE)

$(DDSRPC_TARGET_DEBUG): $(DDSRPC_OBJS_DEBUG)
	$(LN) $(LDFLAGS) -shared -o $(DDSRPC_TARGET_DEBUG) $(LIBRARY_PATH) $(DDSRPC_LIBS_DEBUG) $(DDSRPC_OBJS_DEBUG)
	$(CP) $(DDSRPC_TARGET_DEBUG) $(EPROSIMA_LIBRARY_PATH)/proyectos

$(DDSRPC_TARGET_DEBUG_Z): $(DDSRPC_OBJS_DEBUG)
	$(AR) -cru $(DDSRPC_TARGET_DEBUG_Z) $(DDSRPC_OBJS_DEBUG)
	$(CP) $(DDSRPC_TARGET_DEBUG_Z) $(EPROSIMA_LIBRARY_PATH)/proyectos

$(DDSRPC_TARGET): $(DDSRPC_OBJS_RELEASE)
	$(LN) $(LDFLAGS) -shared -o $(DDSRPC_TARGET) $(LIBRARY_PATH) $(DDSRPC_LIBS) $(DDSRPC_OBJS_RELEASE)
	$(CP) $(DDSRPC_TARGET) $(EPROSIMA_LIBRARY_PATH)/proyectos

$(DDSRPC_TARGET_Z): $(DDSRPC_OBJS_RELEASE)
	$(AR) -cru $(DDSRPC_TARGET_Z) $(DDSRPC_OBJS_RELEASE)
	$(CP) $(DDSRPC_TARGET_Z) $(EPROSIMA_LIBRARY_PATH)/proyectos

vpath %.cpp $(DDSRPC_SOURCES_DIRS)
vpath %.cxx $(DDSRPC_SOURCES_DIRS)

$(DDSRPC_OUTDIR_DEBUG)/%.o:%.cpp
	@echo Calculating dependencies \(DEBUG mode\) $<
	@$(CPP) $(DDSRPC_CFLAGS_DEBUG) -MM $(DDSRPC_INCLUDE_DIRS) $< | sed "s/^.*:/$(DDSRPC_SED_OUTPUT_DIR_DEBUG)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(DEBUG mode\) $<  
	@$(CPP) $(DDSRPC_CFLAGS_DEBUG) $(DDSRPC_INCLUDE_DIRS) $< -o $@

$(DDSRPC_OUTDIR_RELEASE)/%.o:%.cpp
	@echo Calculating dependencies \(RELEASE mode\) $<
	@$(CPP) -MM $(DDSRPC_CFLAGS) $(DDSRPC_INCLUDE_DIRS) $< | sed "s/^.*:/$(DDSRPC_SED_OUTPUT_DIR_RELEASE)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(RELEASE mode\) $<
	@$(CPP) $(DDSRPC_CFLAGS) $(DDSRPC_INCLUDE_DIRS) $< -o $@

$(DDSRPC_OUTDIR_DEBUG)/%.o:%.cxx
	@echo Calculating dependencies \(DEBUG mode\) $<
	@$(CPP) $(DDSRPC_CFLAGS_DEBUG) -MM $(DDSRPC_INCLUDE_DIRS) $< | sed "s/^.*:/$(DDSRPC_SED_OUTPUT_DIR_DEBUG)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(DEBUG mode\) $<  
	@$(CPP) $(DDSRPC_CFLAGS_DEBUG) $(DDSRPC_INCLUDE_DIRS) $< -o $@

$(DDSRPC_OUTDIR_RELEASE)/%.o:%.cxx
	@echo Calculating dependencies \(RELEASE mode\) $<
	@$(CPP) -MM $(DDSRPC_CFLAGS) $(DDSRPC_INCLUDE_DIRS) $< | sed "s/^.*:/$(DDSRPC_SED_OUTPUT_DIR_RELEASE)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(RELEASE mode\) $<
	@$(CPP) $(DDSRPC_CFLAGS) $(DDSRPC_INCLUDE_DIRS) $< -o $@

