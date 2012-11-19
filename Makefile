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

.PHONY: all

all: rpcdds

clean:
	@rm -f $(OBJS)
	@rm -f $(DEPS)

ifneq ($(MAKECMDGOALS), clean)
-include $(DEPS)
endif
