CPP= g++
CPPFLAGS = -c -Wall -fpic -m64 -std=c++0x
LN= g++
AR=ar
LDFLAGS= -m64
SYSLIBS= -ldl -lnsl -lm -lpthread -lrt
DEFINES= 

INCLUDES= -I. -I../../../include -I../../../thirdparty/fastcdr/include -I../../../thirdparty/eProsima/code

LIBS = -L../../../lib/x64Linux2.6gcc4.4.5 -L../../../thirdparty/fastcdr/lib/x64Linux2.6gcc -lboost_system -lboost_thread -lfastcdr -lfastrpc $(SYSLIBS)

DIRECTORIES= output.dir output/x64Linux2.6gcc4.4.5.dir lib.dir lib/x64Linux2.6gcc4.4.5.dir bin.dir bin/x64Linux2.6gcc4.4.5.dir

all: $(DIRECTORIES) Latency  LatencyClient LatencyClientExample LatencyServer LatencyServerExample


Latency_TARGET= lib/x64Linux2.6gcc4.4.5/libLatency.so
Latency_TARGET_Z= lib/x64Linux2.6gcc4.4.5/libLatency.a
Latency_CLIENT_TARGET= lib/x64Linux2.6gcc4.4.5/libLatencyClient.so
Latency_CLIENT_TARGET_Z= lib/x64Linux2.6gcc4.4.5/libLatencyClient.a
Latency_CLIENT_EXAMPLE_TARGET= bin/x64Linux2.6gcc4.4.5/LatencyClientExample
Latency_SERVER_TARGET= lib/x64Linux2.6gcc4.4.5/libLatencyServer.so
Latency_SERVER_TARGET_Z= lib/x64Linux2.6gcc4.4.5/libLatencyServer.a
Latency_SERVER_EXAMPLE_TARGET= bin/x64Linux2.6gcc4.4.5/LatencyServerExample
Latency_COMMON_SRC_CXXFILES = Latency.cxx \
	LatencyCDRProtocol.cxx

Latency_COMMON_SRC_CPPFILES=

Latency_CLIENTSOURCES = LatencyProxy.cxx
Latency_SERVERSOURCES = LatencyServer.cxx
Latency_COMMONOBJS    = $(Latency_COMMON_SRC_CXXFILES:%.cxx=output/x64Linux2.6gcc4.4.5/%.o) $(Latency_COMMON_SRC_CPPFILES:%.cpp=output/x64Linux2.6gcc4.4.5/%.o)
Latency_CLIENTOBJS    = $(Latency_CLIENTSOURCES:%.cxx=output/x64Linux2.6gcc4.4.5/%.o)
Latency_SERVEROBJS    = $(Latency_SERVERSOURCES:%.cxx=output/x64Linux2.6gcc4.4.5/%.o)
OBJS+= $(Latency_COMMONOBJS) $(Latency_CLIENTOBJS) $(Latency_SERVEROBJS)

$(Latency_TARGET): $(Latency_COMMONOBJS)
	$(LN) $(LDFLAGS) -shared -o $(Latency_TARGET) $(Latency_COMMONOBJS) $(LIBS) -Llib/x64Linux2.6gcc4.4.5 

$(Latency_TARGET_Z): $(Latency_COMMONOBJS)
	$(AR) -cru $(Latency_TARGET_Z) $(Latency_COMMONOBJS)
$(Latency_CLIENT_TARGET): $(Latency_CLIENTOBJS)
	$(LN) $(LDFLAGS) -shared -o $(Latency_CLIENT_TARGET) $(LIBS) -Llib/x64Linux2.6gcc4.4.5 -lLatency $(Latency_CLIENTOBJS)

$(Latency_CLIENT_TARGET_Z): $(Latency_CLIENTOBJS)
	$(AR) -cru $(Latency_CLIENT_TARGET_Z) $(Latency_CLIENTOBJS)
	
$(Latency_SERVER_TARGET): $(Latency_SERVEROBJS)
	$(LN) $(LDFLAGS) -shared -o $(Latency_SERVER_TARGET) $(LIBS) -Llib/x64Linux2.6gcc4.4.5 -lLatency $(Latency_SERVEROBJS)

$(Latency_SERVER_TARGET_Z): $(Latency_COMMONOBJS) $(Latency_SERVEROBJS)
	$(AR) -cru $(Latency_SERVER_TARGET_Z) $(Latency_SERVEROBJS)
LatencyClient : $(Latency_CLIENT_TARGET) $(Latency_CLIENT_TARGET_Z)
	
LatencyServer : $(Latency_SERVER_TARGET) $(Latency_SERVER_TARGET_Z)
	
$(Latency_CLIENT_EXAMPLE_TARGET): output/x64Linux2.6gcc4.4.5/LatencyClientExample.o lib/x64Linux2.6gcc4.4.5/libLatencyClient.a lib/x64Linux2.6gcc4.4.5/libLatency.a 
	$(LN) $(LDFLAGS) -o $@ output/x64Linux2.6gcc4.4.5/LatencyClientExample.o -Wl,-Bstatic -Llib/x64Linux2.6gcc4.4.5 -lLatencyClient -lLatency  -Wl,-Bdynamic $(LIBS)
	
$(Latency_SERVER_EXAMPLE_TARGET): output/x64Linux2.6gcc4.4.5/LatencyServerExample.o output/x64Linux2.6gcc4.4.5/LatencyServerImplExample.o lib/x64Linux2.6gcc4.4.5/libLatencyServer.a lib/x64Linux2.6gcc4.4.5/libLatency.a 
	$(LN) $(LDFLAGS) -o $@ output/x64Linux2.6gcc4.4.5/LatencyServerImplExample.o output/x64Linux2.6gcc4.4.5/LatencyServerExample.o -Wl,-Bstatic -Llib/x64Linux2.6gcc4.4.5 -lLatencyServer -lLatency  -Wl,-Bdynamic $(LIBS)
	
LatencyClientExample : $(Latency_CLIENT_EXAMPLE_TARGET)
	
LatencyServerExample : $(Latency_SERVER_EXAMPLE_TARGET)
Latency: $(Latency_TARGET) $(Latency_TARGET_Z) LatencyClient LatencyClientExample LatencyServer LatencyServerExample


output/x64Linux2.6gcc4.4.5/%.o:%.cxx
	$(CPP) $(CPPFLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

output/x64Linux2.6gcc4.4.5/%.o:%.cpp
	$(CPP) $(CPPFLAGS) $(INCLUDES) $(DEFINES) -c $< -o $@

.PHONY: Latency  LatencyClient LatencyClientExample LatencyServer LatencyServerExample

clean:
	@rm -f $(OBJS) *~

%.dir : 
	@echo "Checking directory $*"
	@if [ ! -d $* ]; then \
		echo "Making directory $*"; \
		mkdir -p $* ; \
	fi;
