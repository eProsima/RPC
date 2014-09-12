#include <stdio.h>

#ifdef _WIN32
//#include <time.h>
#include <boost/chrono.hpp>
/*long timediff(clock_t t1, clock_t t2) {
    long elapsed;
    elapsed = ((double)t2 - t1) / CLOCKS_PER_SEC * 1000;
    return elapsed;
}*/
#else
#include <unistd.h>
#include <sys/time.h>
#include <chrono>
#endif



#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>

#include "LatencyTest.h"

using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;

#include "ApacheClient.h"


double ApacheClientTest::run(string ip, int samples, int bytes)
{
	
#ifdef _WIN32

	using namespace boost::chrono;
	system_clock::time_point m_t1 = system_clock::now();
	system_clock::time_point m_t2;
	for(int i=0;i<1000;i++)
		m_t2 = system_clock::now();
	double m_overhead = duration_cast<microseconds>(m_t2 - m_t1).count()/1001;
	//printf("Overhead: %lf\n", m_overhead);
#else

	typedef std::chrono::high_resolution_clock Clock;
	typedef std::chrono::microseconds microseconds;

	Clock::time_point m_t1;
	Clock::time_point m_t2;

	m_t1 = Clock::now();
	for(int i=0;i<1000;i++)
		m_t2 = Clock::now();
	double m_overhead = std::chrono::duration_cast<microseconds>(m_t2 - m_t1).count()/1001;
	
#endif

	//START APACHE CLIENT:
	boost::shared_ptr<TTransport> socket(new TSocket(ip, 9092));
	boost::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
	boost::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
	LatencyTestClient client(protocol);
	try {
		transport->open();
	}
	catch (TException &tx) {
		printf("ERROR: %s\n", tx.what());
		return -1;
	}

	string payload = "";
	for(int i = 0; i < bytes; ++i) {
		payload += "A";
	}

	string _return;
	
#ifdef _WIN32
	m_t1 = system_clock::now();
#else
	m_t1 = Clock::now();
#endif

	int isam = 0;
	for(isam = 0;isam<samples;++isam)
	{
		try {
			client.latency(_return, payload);
		} catch (exception &io) {
			printf("Exception: %s\n", io.what());
			break;
		}
	}
	
#ifdef _WIN32
	m_t2 = system_clock::now();
#else
	m_t2 = Clock::now();
#endif

	transport->close();

	if(isam == samples)
	{
#ifdef _WIN32
		return (duration_cast<microseconds>(m_t2 - m_t1).count() - m_overhead) / samples;
#else 
		return (std::chrono::duration_cast<microseconds>(m_t2 - m_t1).count() - m_overhead) / samples;
#endif
	}


	return -1;
}


