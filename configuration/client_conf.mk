TARGET=$(OUTDIR)/ddsclient.exe

INCLUDE_DIRS+= -I$(BASEDIR)/include/client \

SRC_CPPFILES+= $(BASEDIR)/src/client/main.cpp \
			   $(BASEDIR)/src/client/DDSCSClient.cpp \

