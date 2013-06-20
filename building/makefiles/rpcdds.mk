RPCDDS_OUTDIR= $(OUTDIR)/rpcdds
RPCDDS_OUTDIR_DEBUG = $(RPCDDS_OUTDIR)/debug
RPCDDS_OUTDIR_RELEASE = $(RPCDDS_OUTDIR)/release

RPCDDS_SED_OUTPUT_DIR_DEBUG= $(subst /,\\/,$(RPCDDS_OUTDIR_DEBUG))
RPCDDS_SED_OUTPUT_DIR_RELEASE= $(subst /,\\/,$(RPCDDS_OUTDIR_RELEASE))

RPCDDS_LIBS_DEBUG= $(LIBS_DEBUG) -lboost_thread-mt
RPCDDS_LIBS= $(LIBS) -lboost_thread-mt

RPCDDS_CFLAGS_DEBUG= $(CFLAGS_DEBUG) -std=c++11
RPCDDS_CFLAGS= $(CFLAGS) -std=c++11

ifdef NDDSHOME
	RPCDDS_TARGET_DEBUG= $(BASEDIR)/lib/$(TARGET)/librpcddsd.so
	RPCDDS_TARGET_DEBUG_Z= $(BASEDIR)/lib/$(TARGET)/librpcddszd.a
	RPCDDS_TARGET= $(BASEDIR)/lib/$(TARGET)/librpcdds.so
	RPCDDS_TARGET_Z= $(BASEDIR)/lib/$(TARGET)/librpcddsz.a
	SPECIFIC_INCLUDE_DIR= -I$(BASEDIR)/include/idl/rti
	SPECIFIC_SRC_CPPFILES=
	VERSION=$(NDDSVERSION)
	TARGET=$(NDDSTARGET)
else
ifdef DDS_ROOT
	RPCDDS_TARGET_DEBUG= $(BASEDIR)/lib/$(TARGET)/librpcddsod.so
	RPCDDS_TARGET_DEBUG_Z= $(BASEDIR)/lib/$(TARGET)/librpcddsozd.a
	RPCDDS_TARGET= $(BASEDIR)/lib/$(TARGET)/librpcddso.so
	RPCDDS_TARGET_Z= $(BASEDIR)/lib/$(TARGET)/librpcddsoz.a
	SPECIFIC_INCLUDE_DIR= -I$(BASEDIR)/include/idl/opendds
	SPECIFIC_SRC_CPPFILES=
	VERSION=$(DDS_VERSION)
	TARGET=$(DDS_TARGET)
endif
endif

RPCDDS_INCLUDE_DIRS= $(INCLUDE_DIRS) -I$(BASEDIR)/include \
		    -I$(EPROSIMADIR)/code \
		    -I$(EPROSIMA_LIBRARY_PATH)/threadpool-0_2_5-src/threadpool \
		    $(SPECIFIC_INCLUDE_DIR)

RPCDDS_SRC_CPPFILES= $(BASEDIR)/src/client/Client.cpp \
			$(BASEDIR)/src/client/AsyncTask.cpp \
			$(BASEDIR)/src/client/AsyncThread.cpp \
			$(BASEDIR)/src/client/ClientRPC.cpp \
			$(BASEDIR)/src/server/Server.cpp \
			$(BASEDIR)/src/server/ServerRPC.cpp \
			$(BASEDIR)/src/utils/Utilities.cpp \
			$(BASEDIR)/src/utils/Middleware.cpp \
			$(BASEDIR)/src/transports/UDPTransport.cpp \
			$(BASEDIR)/src/transports/TCPTransport.cpp \
			$(BASEDIR)/src/strategies/ThreadPoolStrategy.cpp \
			$(BASEDIR)/src/strategies/SingleThreadStrategy.cpp \
			$(BASEDIR)/src/strategies/ThreadPerRequestStrategy.cpp \
            $(BASEDIR)/src/exceptions/Exception.cpp \
            $(BASEDIR)/src/exceptions/ClientInternalException.cpp \
            $(BASEDIR)/src/exceptions/InitializeException.cpp \
            $(BASEDIR)/src/exceptions/ServerInternalException.cpp \
            $(BASEDIR)/src/exceptions/ServerNotFoundException.cpp \
            $(BASEDIR)/src/exceptions/ServerTimeoutException.cpp \
            $(BASEDIR)/src/exceptions/SystemException.cpp \
			$(SPECIFIC_SRC_CPPFILES)

# Project sources are copied to the current directory
RPCDDS_SRCS= $(RPCDDS_SRC_CFILES) $(RPCDDS_SRC_CPPFILES)

# Source directories
RPCDDS_SOURCES_DIRS_AUX= $(foreach srcdir, $(dir $(RPCDDS_SRCS)), $(srcdir))
RPCDDS_SOURCES_DIRS= $(shell echo $(RPCDDS_SOURCES_DIRS_AUX) | tr " " "\n" | sort | uniq | tr "\n" " ")

RPCDDS_OBJS_DEBUG = $(foreach obj,$(notdir $(addsuffix .o, $(basename $(RPCDDS_SRCS)))), $(RPCDDS_OUTDIR_DEBUG)/$(obj))
RPCDDS_DEPS_DEBUG = $(foreach dep,$(notdir $(addsuffix .d, $(basename $(RPCDDS_SRCS)))), $(RPCDDS_OUTDIR_DEBUG)/$(dep))
RPCDDS_OBJS_RELEASE = $(foreach obj,$(notdir $(addsuffix .o, $(basename $(RPCDDS_SRCS)))), $(RPCDDS_OUTDIR_RELEASE)/$(obj))
RPCDDS_DEPS_RELEASE = $(foreach dep,$(notdir $(addsuffix .d, $(basename $(RPCDDS_SRCS)))), $(RPCDDS_OUTDIR_RELEASE)/$(dep))

OBJS+= $(RPCDDS_OBJS_DEBUG) $(RPCDDS_OBJS_RELEASE)
DEPS+= $(RPCDDS_DEPS_DEBUG) $(RPCDDS_DEPS_RELEASE)

.PHONY: rpcdds checkRPCDDSDirectories

rpcdds: checkRPCDDSDirectories $(RPCDDS_TARGET_DEBUG) $(RPCDDS_TARGET_DEBUG_Z) $(RPCDDS_TARGET) $(RPCDDS_TARGET_Z)

checkRPCDDSDirectories:
	@mkdir -p $(OUTDIR)
	@mkdir -p $(RPCDDS_OUTDIR)
	@mkdir -p $(RPCDDS_OUTDIR_DEBUG)
	@mkdir -p $(RPCDDS_OUTDIR_RELEASE)

$(RPCDDS_TARGET_DEBUG): $(RPCDDS_OBJS_DEBUG)
	$(LN) $(LDFLAGS) -shared -o $(RPCDDS_TARGET_DEBUG) $(LIBRARY_PATH) $(RPCDDS_LIBS_DEBUG) $(RPCDDS_OBJS_DEBUG)
	$(CP) $(RPCDDS_TARGET_DEBUG) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)

$(RPCDDS_TARGET_DEBUG_Z): $(RPCDDS_OBJS_DEBUG)
	$(AR) -cru $(RPCDDS_TARGET_DEBUG_Z) $(RPCDDS_OBJS_DEBUG)
	$(CP) $(RPCDDS_TARGET_DEBUG_Z) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)

$(RPCDDS_TARGET): $(RPCDDS_OBJS_RELEASE)
	$(LN) $(LDFLAGS) -shared -o $(RPCDDS_TARGET) $(LIBRARY_PATH) $(RPCDDS_LIBS) $(RPCDDS_OBJS_RELEASE)
	$(CP) $(RPCDDS_TARGET) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)

$(RPCDDS_TARGET_Z): $(RPCDDS_OBJS_RELEASE)
	$(AR) -cru $(RPCDDS_TARGET_Z) $(RPCDDS_OBJS_RELEASE)
	$(CP) $(RPCDDS_TARGET_Z) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(VERSION)/$(TARGET)

vpath %.cpp $(RPCDDS_SOURCES_DIRS)
vpath %.cxx $(RPCDDS_SOURCES_DIRS)

$(RPCDDS_OUTDIR_DEBUG)/%.o:%.cpp
	@echo Calculating dependencies \(DEBUG mode\) $<
	@$(CPP) $(RPCDDS_CFLAGS_DEBUG) -MM $(RPCDDS_INCLUDE_DIRS) $< | sed "s/^.*:/$(RPCDDS_SED_OUTPUT_DIR_DEBUG)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(DEBUG mode\) $<  
	@$(CPP) $(RPCDDS_CFLAGS_DEBUG) $(RPCDDS_INCLUDE_DIRS) $< -o $@

$(RPCDDS_OUTDIR_RELEASE)/%.o:%.cpp
	@echo Calculating dependencies \(RELEASE mode\) $<
	@$(CPP) -MM $(RPCDDS_CFLAGS) $(RPCDDS_INCLUDE_DIRS) $< | sed "s/^.*:/$(RPCDDS_SED_OUTPUT_DIR_RELEASE)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(RELEASE mode\) $<
	@$(CPP) $(RPCDDS_CFLAGS) $(RPCDDS_INCLUDE_DIRS) $< -o $@

$(RPCDDS_OUTDIR_DEBUG)/%.o:%.cxx
	@echo Calculating dependencies \(DEBUG mode\) $<
	@$(CPP) $(RPCDDS_CFLAGS_DEBUG) -MM $(RPCDDS_INCLUDE_DIRS) $< | sed "s/^.*:/$(RPCDDS_SED_OUTPUT_DIR_DEBUG)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(DEBUG mode\) $<  
	@$(CPP) $(RPCDDS_CFLAGS_DEBUG) $(RPCDDS_INCLUDE_DIRS) $< -o $@

$(RPCDDS_OUTDIR_RELEASE)/%.o:%.cxx
	@echo Calculating dependencies \(RELEASE mode\) $<
	@$(CPP) -MM $(RPCDDS_CFLAGS) $(RPCDDS_INCLUDE_DIRS) $< | sed "s/^.*:/$(RPCDDS_SED_OUTPUT_DIR_RELEASE)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(RELEASE mode\) $<
	@$(CPP) $(RPCDDS_CFLAGS) $(RPCDDS_INCLUDE_DIRS) $< -o $@

