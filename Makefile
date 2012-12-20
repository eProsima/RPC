BASEDIR=.
OUTDIR= $(BASEDIR)/output
CC=gcc
CPP=g++
LN=g++
AR=ar
CP=cp

ifdef NDDSHOME
-include $(EPROSIMADIR)/building/makefiles/dds.mk
else
ifdef DDS_ROOT
-include $(EPROSIMADIR)/building/makefiles/opendds.mk
endif
endif
-include $(BASEDIR)/building/makefiles/rpcdds.mk
-include $(BASEDIR)/building/makefiles/doxygen.mk
-include $(BASEDIR)/building/makefiles/package.mk

.PHONY: all doxygen

all: rpcdds doxygen package

clean:
	@rm -f $(OBJS)
	@rm -f $(DEPS)

ifneq ($(MAKECMDGOALS), clean)
-include $(DEPS)
endif
