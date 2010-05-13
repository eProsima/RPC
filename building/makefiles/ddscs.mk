DDSCS_OUTDIR= $(OUTDIR)/ddscs
DDSCS_OUTDIR_DEBUG = $(DDSCS_OUTDIR)/debug
DDSCS_OUTDIR_RELEASE = $(DDSCS_OUTDIR)/release

DDSCS_SED_OUTPUT_DIR_DEBUG= $(subst /,\\/,$(DDSCS_OUTDIR_DEBUG))
DDSCS_SED_OUTPUT_DIR_RELEASE= $(subst /,\\/,$(DDSCS_OUTDIR_RELEASE))

DDSCS_TARGET_DEBUG= $(BASEDIR)/lib/i86Linux2.6gcc4.1.2/libddscsd.so
DDSCS_TARGET_DEBUG_Z= $(BASEDIR)/lib/i86Linux2.6gcc4.1.2/libddscszd.a
DDSCS_TARGET= $(BASEDIR)/lib/i86Linux2.6gcc4.1.2/libddscs.so
DDSCS_TARGET_Z= $(BASEDIR)/lib/i86Linux2.6gcc4.1.2/libddscsz.a

DDSCS_INCLUDE_DIRS= $(INCLUDE_DIRS) -I$(BASEDIR)/include \
		    -I$(EPROSIMADIR)/code

DDSCS_SRC_CFILES= $(BASEDIR)/src/client/DDSCSClient.cpp \
			$(BASEDIR)/src/client/ClientRemoteService.cpp \
			$(BASEDIR)/src/server/DDSCSServer.cpp \
			$(BASEDIR)/src/server/ServerRemoteService.cpp \
			$(BASEDIR)/src/utils/Thread.cpp \
			$(BASEDIR)/src/utils/ThreadPoolManager.cpp

# Project sources are copied to the current directory
DDSCS_SRCS= $(DDSCS_SRC_CFILES) $(DDSCS_SRC_CPPFILE)

# Source directories
DDSCS_SOURCES_DIRS_AUX= $(foreach srcdir, $(dir $(DDSCS_SRCS)), $(srcdir))
DDSCS_SOURCES_DIRS= $(shell echo $(DDSCS_SOURCES_DIRS_AUX) | tr " " "\n" | sort | uniq | tr "\n" " ")

DDSCS_OBJS_DEBUG = $(foreach obj,$(notdir $(addsuffix .o, $(basename $(DDSCS_SRCS)))), $(DDSCS_OUTDIR_DEBUG)/$(obj))
DDSCS_DEPS_DEBUG = $(foreach dep,$(notdir $(addsuffix .d, $(basename $(DDSCS_SRCS)))), $(DDSCS_OUTDIR_DEBUG)/$(dep))
DDSCS_OBJS_RELEASE = $(foreach obj,$(notdir $(addsuffix .o, $(basename $(DDSCS_SRCS)))), $(DDSCS_OUTDIR_RELEASE)/$(obj))
DDSCS_DEPS_RELEASE = $(foreach dep,$(notdir $(addsuffix .d, $(basename $(DDSCS_SRCS)))), $(DDSCS_OUTDIR_RELEASE)/$(dep))

OBJS+= $(DDSCS_OBJS_DEBUG) $(DDSCS_OBJS_RELEASE)
DEPS+= $(DDSCS_DEPS_DEBUG) $(DDSCS_DEPS_RELEASE)

.PHONY: ddscs checkDDSCSDirectories

ddscs: checkDDSCSDirectories $(DDSCS_TARGET_DEBUG) $(DDSCS_TARGET_DEBUG_Z) $(DDSCS_TARGET) $(DDSCS_TARGET_Z)

checkDDSCSDirectories:
	@mkdir -p $(OUTDIR)
	@mkdir -p $(DDSCS_OUTDIR)
	@mkdir -p $(DDSCS_OUTDIR_DEBUG)
	@mkdir -p $(DDSCS_OUTDIR_RELEASE)

$(DDSCS_TARGET_DEBUG): $(DDSCS_OBJS_DEBUG)
	$(LN) -shared -o $(DDSCS_TARGET_DEBUG) $(LIBRARY_PATH) $(LIBS_DEBUG) $(DDSCS_OBJS_DEBUG)
	$(CP) $(DDSCS_TARGET_DEBUG) $(EPROSIMA_LIBRARY_PATH)/proyectos

$(DDSCS_TARGET_DEBUG_Z): $(DDSCS_OBJS_DEBUG)
	$(AR) -cru $(DDSCS_TARGET_DEBUG_Z) $(DDSCS_OBJS_DEBUG)
	$(CP) $(DDSCS_TARGET_DEBUG_Z) $(EPROSIMA_LIBRARY_PATH)/proyectos

$(DDSCS_TARGET): $(DDSCS_OBJS_RELEASE)
	$(LN) -shared -o $(DDSCS_TARGET) $(LIBRARY_PATH) $(LIBS) $(DDSCS_OBJS_RELEASE)
	$(CP) $(DDSCS_TARGET) $(EPROSIMA_LIBRARY_PATH)/proyectos

$(DDSCS_TARGET_Z): $(DDSCS_OBJS_RELEASE)
	$(AR) -cru $(DDSCS_TARGET_Z) $(DDSCS_OBJS_RELEASE)
	$(CP) $(DDSCS_TARGET_Z) $(EPROSIMA_LIBRARY_PATH)/proyectos

vpath %.cpp $(DDSCS_SOURCES_DIRS)

$(DDSCS_OUTDIR_DEBUG)/%.o:%.cpp
	@echo Calculating dependencies \(DEBUG mode\) $<
	@$(CPP) $(CFLAGS_DEBUG) -MM $(DDSCS_INCLUDE_DIRS) $< | sed "s/^.*:/$(DDSCS_SED_OUTPUT_DIR_DEBUG)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(DEBUG mode\) $<  
	@$(CPP) $(CFLAGS_DEBUG) $(DDSCS_INCLUDE_DIRS) $< -o $@

$(DDSCS_OUTDIR_RELEASE)/%.o:%.cpp
	@echo Calculating dependencies \(RELEASE mode\) $<
	@$(CPP) $(CFLAGS) -MM $(CFLAGS) $(DDSCS_INCLUDE_DIRS) $< | sed "s/^.*:/$(DDSCS_SED_OUTPUT_DIR_RELEASE)\/&/g" > $(@:%.o=%.d)
	@echo Compiling \(RELEASE mode\) $<
	@$(CPP) $(CFLAGS) $(DDSCS_INCLUDE_DIRS) $< -o $@


