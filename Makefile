BASEDIR=.
OUTDIR= $(BASEDIR)/output
CC=gcc
CPP=g++
LN=g++
AR=ar
CP=cp

-include $(EPROSIMADIR)/building/makefiles/dds.mk
-include $(BASEDIR)/building/makefiles/ddsrpc.mk

.PHONY: all

all: ddsrpc

clean:
	@rm -f $(OBJS)
	@rm -f $(DEPS)

ifneq ($(MAKECMDGOALS), clean)
-include $(DEPS)
endif
