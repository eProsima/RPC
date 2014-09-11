
CPP=c++
CPP_FLAGS= --std=c++0x -O2
LIBS= -lthrift

SOURCE_FILES= main.cpp ApacheClient.cpp LatencyTest.cpp ApacheServer.cpp Latency_types.cpp

all:
	$(CPP) $(CPP_FLAGS) $(SOURCE_FILES) $(LIBS) -o ThriftLatencyTest

clean:
	rm *~ ThriftLatencyTest
