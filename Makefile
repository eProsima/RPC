BASEDIR=.
OUTDIR= $(BASEDIR)/output
CC=gcc
CPP=g++
LN=g++
AR=ar
CP=cp
LNK=ln
EPROSIMA_TARGET=$(NDDSTARGET)

all: fastrpc rpcdds rpcrest

-include $(BASEDIR)/thirdparty/dev-env/building/makefiles/eProsima.mk
-include $(BASEDIR)/building/makefiles/fastrpc.mk
-include $(BASEDIR)/building/makefiles/rpcdds.mk
-include $(BASEDIR)/building/makefiles/rpcrest.mk

.PHONY: fastrpc rpcdds rpcrest all check-env

fastrpc: check-env _fastrpc

rpcdds: check-env _rpcdds

rpcrest: check-env _rpcrest

clean:
	@rm -f $(OBJS)
	@rm -f $(DEPS)

check-env:
ifndef NDDSTARGET
	$(error NDDSTARGET environment variable has to be set)
endif
ifndef NDDSVERSION
	$(error NDDSVERSION environment variable has to be set)
endif

ifneq ($(MAKECMDGOALS), clean)
-include $(DEPS)
endif
