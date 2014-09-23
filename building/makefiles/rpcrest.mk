RPCREST_OUTDIR= $(OUTDIR)/rpcrest
RPCREST_OUTDIR_DEBUG = $(RPCREST_OUTDIR)/debug
RPCREST_OUTDIR_RELEASE = $(RPCREST_OUTDIR)/release

# Get product version.
RPCREST_VERSION=-$(shell $(BASEDIR)/thirdparty/dev-env/scripts/common_pack_functions.sh printVersionFromCPP include/fastrpc/fastrpc_version.h)
FASTCDR_TARGET=$(shell $(BASEDIR)/thirdparty/dev-env/scripts/common_dds_functions.sh printEPROSIMAtarget) 

RPCREST_SED_OUTPUT_DIR_DEBUG= $(subst /,\\/,$(RPCREST_OUTDIR_DEBUG))
RPCREST_SED_OUTPUT_DIR_RELEASE= $(subst /,\\/,$(RPCREST_OUTDIR_RELEASE))

RPCREST_LIBS_DEBUG= $(LIBS_DEBUG) -lboost_system -lboost_thread
RPCREST_LIBS= $(LIBS) -lboost_system -lboost_thread

RPCREST_CFLAGS_DEBUG= $(CFLAGS_DEBUG) -std=c++0x
RPCREST_CFLAGS= $(CFLAGS) -std=c++0x

RPCREST_TARGET_DEBUG_FILE= librpcrestd$(RPCREST_VERSION).so
RPCREST_TARGET_DEBUG_Z_FILE= librpcrestd$(RPCREST_VERSION).a
RPCREST_TARGET_FILE= librpcrest$(RPCREST_VERSION).so
RPCREST_TARGET_Z_FILE= librpcrest$(RPCREST_VERSION).a
RPCREST_TARGET_DEBUG_FILE_LINK= librpcrestd.so
RPCREST_TARGET_DEBUG_Z_FILE_LINK= librpcrestd.a
RPCREST_TARGET_FILE_LINK= librpcrest.so
RPCREST_TARGET_Z_FILE_LINK= librpcrest.a
SPECIFIC_INCLUDE_DIR= -I$(BASEDIR)/include/idl/rti
SPECIFIC_SRC_CPPFILES=
TARGET=$(NDDSTARGET)

RPCREST_TARGET_DEBUG= $(BASEDIR)/lib/$(TARGET)/$(RPCREST_TARGET_DEBUG_FILE)
RPCREST_TARGET_DEBUG_Z= $(BASEDIR)/lib/$(TARGET)/$(RPCREST_TARGET_DEBUG_Z_FILE)
RPCREST_TARGET= $(BASEDIR)/lib/$(TARGET)/$(RPCREST_TARGET_FILE)
RPCREST_TARGET_Z= $(BASEDIR)/lib/$(TARGET)/$(RPCREST_TARGET_Z_FILE)

RPCREST_INCLUDE_DIRS= $(INCLUDE_DIRS) -I$(BASEDIR)/include \
		    -I$(BASEDIR)/thirdparty/eprosima-common-code \
		    -I$(BASEDIR)/thirdparty/boost-threadpool \
		    $(SPECIFIC_INCLUDE_DIR)

RPCREST_SRC_COMMONFILES = $(shell cat building/makefiles/common_sources)

RPCREST_SRC_CPPFILES= $(shell cat building/makefiles/rpcrest_sources)

# Project sources are copied to the current directory
RPCREST_SRCS= $(RPCREST_SRC_COMMONFILES) $(RPCREST_SRC_CPPFILES)

# Source directories
RPCREST_SOURCES_DIRS_AUX= $(foreach srcdir, $(dir $(RPCREST_SRCS)), $(srcdir))
RPCREST_SOURCES_DIRS= $(shell echo $(RPCREST_SOURCES_DIRS_AUX) | tr " " "\n" | sort | uniq | tr "\n" " ")

RPCREST_OBJS_DEBUG = $(foreach obj,$(notdir $(addsuffix .o, $(basename $(RPCREST_SRCS)))), $(RPCREST_OUTDIR_DEBUG)/$(obj))
RPCREST_DEPS_DEBUG = $(foreach dep,$(notdir $(addsuffix .d, $(basename $(RPCREST_SRCS)))), $(RPCREST_OUTDIR_DEBUG)/$(dep))
RPCREST_OBJS_RELEASE = $(foreach obj,$(notdir $(addsuffix .o, $(basename $(RPCREST_SRCS)))), $(RPCREST_OUTDIR_RELEASE)/$(obj))
RPCREST_DEPS_RELEASE = $(foreach dep,$(notdir $(addsuffix .d, $(basename $(RPCREST_SRCS)))), $(RPCREST_OUTDIR_RELEASE)/$(dep))

OBJS+= $(RPCREST_OBJS_DEBUG) $(RPCREST_OBJS_RELEASE)
DEPS+= $(RPCREST_DEPS_DEBUG) $(RPCREST_DEPS_RELEASE)

.PHONY: _rpcrest checkRPCRESTDirectories

_rpcrest: checkRPCRESTDirectories $(RPCREST_TARGET_DEBUG) $(RPCREST_TARGET_DEBUG_Z) $(RPCREST_TARGET) $(RPCREST_TARGET_Z)

checkRPCRESTDirectories:
	@mkdir -p $(OUTDIR)
	@mkdir -p $(RPCREST_OUTDIR)
	@mkdir -p $(RPCREST_OUTDIR_DEBUG)
	@mkdir -p $(RPCREST_OUTDIR_RELEASE)
	@mkdir -p lib
	@mkdir -p lib/$(TARGET)
ifdef EPROSIMA_LIBRARY_PATH
	@mkdir -p $(EPROSIMA_LIBRARY_PATH)/proyectos/$(TARGET)
endif

$(RPCREST_TARGET_DEBUG): $(RPCREST_OBJS_DEBUG)
	$(LN) $(LDFLAGS) -shared -o $(RPCREST_TARGET_DEBUG) $(LIBRARY_PATH) $(RPCREST_OBJS_DEBUG) $(RPCREST_LIBS_DEBUG)
	$(LNK) -s -f $(RPCREST_TARGET_DEBUG_FILE) $(BASEDIR)/lib/$(TARGET)/$(RPCREST_TARGET_DEBUG_FILE_LINK)
ifdef EPROSIMA_LIBRARY_PATH
	$(CP) $(RPCREST_TARGET_DEBUG) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(TARGET)
	$(LNK) -s -f $(EPROSIMA_LIBRARY_PATH)/proyectos/$(TARGET)/$(RPCREST_TARGET_DEBUG_FILE) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(TARGET)/$(RPCREST_TARGET_DEBUG_FILE_LINK)
endif

$(RPCREST_TARGET_DEBUG_Z): $(RPCREST_OBJS_DEBUG)
	$(AR) -cru $(RPCREST_TARGET_DEBUG_Z) $(RPCREST_OBJS_DEBUG)
	$(LNK) -s -f $(RPCREST_TARGET_DEBUG_Z_FILE) $(BASEDIR)/lib/$(TARGET)/$(RPCREST_TARGET_DEBUG_Z_FILE_LINK)
ifdef EPROSIMA_LIBRARY_PATH
	$(CP) $(RPCREST_TARGET_DEBUG_Z) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(TARGET)
	$(LNK) -s -f $(EPROSIMA_LIBRARY_PATH)/proyectos/$(TARGET)/$(RPCREST_TARGET_DEBUG_Z_FILE) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(TARGET)/$(RPCREST_TARGET_DEBUG_Z_FILE_LINK)
endif

$(RPCREST_TARGET): $(RPCREST_OBJS_RELEASE)
	$(LN) $(LDFLAGS) -shared -o $(RPCREST_TARGET) $(LIBRARY_PATH) $(RPCREST_OBJS_RELEASE) $(RPCREST_LIBS)
	$(LNK) -s -f $(RPCREST_TARGET_FILE) $(BASEDIR)/lib/$(TARGET)/$(RPCREST_TARGET_FILE_LINK)
ifdef EPROSIMA_LIBRARY_PATH
	$(CP) $(RPCREST_TARGET) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(TARGET)
	$(LNK) -s -f $(EPROSIMA_LIBRARY_PATH)/proyectos/$(TARGET)/$(RPCREST_TARGET_FILE) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(TARGET)/$(RPCREST_TARGET_FILE_LINK)
endif

$(RPCREST_TARGET_Z): $(RPCREST_OBJS_RELEASE)
	$(AR) -cru $(RPCREST_TARGET_Z) $(RPCREST_OBJS_RELEASE)
	$(LNK) -s -f $(RPCREST_TARGET_Z_FILE) $(BASEDIR)/lib/$(TARGET)/$(RPCREST_TARGET_Z_FILE_LINK)
ifdef EPROSIMA_LIBRARY_PATH
	$(CP) $(RPCREST_TARGET_Z) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(TARGET)
	$(LNK) -s -f $(EPROSIMA_LIBRARY_PATH)/proyectos/$(TARGET)/$(RPCREST_TARGET_Z_FILE) $(EPROSIMA_LIBRARY_PATH)/proyectos/$(TARGET)/$(RPCREST_TARGET_Z_FILE_LINK)
endif

vpath %.cpp $(RPCREST_SOURCES_DIRS)
vpath %.cxx $(RPCREST_SOURCES_DIRS)

$(RPCREST_OUTDIR_DEBUG)/%.o:%.cpp
	@echo Calculating dependencies \(DEBUG mode\) $<
	@$(CPP) $(RPCREST_CFLAGS_DEBUG) -MM $(RPCREST_INCLUDE_DIRS) $< | sed "s/^.*:/$(RPCREST_SED_OUTPUT_DIR_DEBUG)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(DEBUG mode\) $<  
	@$(CPP) $(RPCREST_CFLAGS_DEBUG) $(RPCREST_INCLUDE_DIRS) $< -o $@

$(RPCREST_OUTDIR_RELEASE)/%.o:%.cpp
	@echo Calculating dependencies \(RELEASE mode\) $<
	@$(CPP) -MM $(RPCREST_CFLAGS) $(RPCREST_INCLUDE_DIRS) $< | sed "s/^.*:/$(RPCREST_SED_OUTPUT_DIR_RELEASE)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(RELEASE mode\) $<
	@$(CPP) $(RPCREST_CFLAGS) $(RPCREST_INCLUDE_DIRS) $< -o $@

$(RPCREST_OUTDIR_DEBUG)/%.o:%.cxx
	@echo Calculating dependencies \(DEBUG mode\) $<
	@$(CPP) $(RPCREST_CFLAGS_DEBUG) -MM $(RPCREST_INCLUDE_DIRS) $< | sed "s/^.*:/$(RPCREST_SED_OUTPUT_DIR_DEBUG)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(DEBUG mode\) $<  
	@$(CPP) $(RPCREST_CFLAGS_DEBUG) $(RPCREST_INCLUDE_DIRS) $< -o $@

$(RPCREST_OUTDIR_RELEASE)/%.o:%.cxx
	@echo Calculating dependencies \(RELEASE mode\) $<
	@$(CPP) -MM $(RPCREST_CFLAGS) $(RPCREST_INCLUDE_DIRS) $< | sed "s/^.*:/$(RPCREST_SED_OUTPUT_DIR_RELEASE)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(RELEASE mode\) $<
	@$(CPP) $(RPCREST_CFLAGS) $(RPCREST_INCLUDE_DIRS) $< -o $@

