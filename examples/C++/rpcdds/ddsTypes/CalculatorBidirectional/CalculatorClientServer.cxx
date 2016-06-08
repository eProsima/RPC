/***
 *	RPC over DDS example of a bidirectional RPC scheme
 *
 *	This application implements the Calculator example methods for other applications
 *	to call remotely, while at the same time requests remote execution of the same members
 *	on another network element. The purpose of this example is to show how to make a
 *	bidirectional RPC scheme where the same node can be both a client and a server.
 *
 *	In this example both client side and server side run on the same Service, and therefore
 *	their names have to be changed in order for the clients to connect to the remote servers
 *	instead of their own.
 *
 *	By modifying the provided services, it is possible to have two nodes where node A implements
 *	one service and node B implements a different one.	
 *
 *	eProsima 2016
 * */

#include "CalculatorServer.h"
#include <rpcdds/strategies/ThreadPoolStrategy.h>
#include "CalculatorDDSProtocol.h"
#include <rpcdds/transports/dds/UDPServerTransport.h>
#include <rpcdds/exceptions/Exceptions.h>
#include <rpcdds/utils/Utilities.h>
#include "CalculatorServerImplExample.h"

#include "CalculatorProxy.h"
#include "Calculator.h"
#include "CalculatorDDSProtocol.h"
#include <rpcdds/transports/dds/UDPProxyTransport.h>


#include <iostream>





using namespace eprosima::rpc;
using namespace ::exception;
using namespace ::strategy;
using namespace ::transport::dds;
using namespace ::protocol::dds;


int main(int argc, char **argv){
//Server side variable declaration
unsigned int threadPoolSize = 5;
ThreadPoolStrategy *pool = NULL;
CalculatorProtocol *serverProtocol = NULL;
UDPServerTransport *serverTransport = NULL;
CalculatorServer *server = NULL;
CalculatorServerImplExample servant;
//Client side declaration
CalculatorProxy *proxy = NULL;
CalculatorProtocol *clientProtocol = NULL;
UDPProxyTransport *clientTransport = NULL;
DDS_Long value1, value2;
DDS_Long addition_ret, substraction_ret;
//Auxiliary elements for configuration and user interaction
std::string placeholder_string;
std::string server_ServiceName;
std::string client_ServiceName;
	
	/* 
	 * In order to be able to distinguish the remote server from the one provided by this node
	 * the user needs to specify wether he wants instance A or instance B. A and B are designed
	 * to interconnect with erach other 
	 */
	if(argc > 1)
	{
		if(std::strcmp(argv[1],"A") == 0)
		{
			server_ServiceName.assign("CalculatorServiceA");
			client_ServiceName.assign("CalculatorServiceB");
		}
		else if(std::strcmp(argv[1],"B") == 0)
		{
			server_ServiceName.assign("CalculatorServiceB");
			client_ServiceName.assign("CalculatorServiceA");
		}
		else{
			std::cout <<"Usage: Invoke \"CalculatorClientServer A\" and \"InvokeClientServer B\" in separate terminals\"" << std::endl; 
			return -1;
		}
	}
	else{
		std::cout <<"Usage: Invoke \"CalculatorClientServer A\" and \"InvokeClientServer B\" in separate terminals\"" << std::endl; 
		return -1;
	}

	/*
	 * Create and initialize both the server and the client. In this example, both parts use the same service.
	 * But they could run different services if needed in a user application, as long as the Proxy of a node
	 * matches the service of the server of the other node and vice-versa
	 */
	try{
		pool = new ThreadPoolStrategy(threadPoolSize);
		serverProtocol = new CalculatorProtocol();
		serverTransport = new UDPServerTransport(server_ServiceName.c_str(), "Instance");
		server = new CalculatorServer(*pool, *serverTransport, *serverProtocol, servant);
		server -> serve();
		std::cout << "RPC Server online, priving service name " << server_ServiceName << std::endl;
	}
	catch(InitializeException &ex){
		std::cout << ex.what() << std::endl;
		return -1;
	}
	//Client side
	try{
		clientProtocol = new CalculatorProtocol();
		clientTransport = new UDPProxyTransport(client_ServiceName.c_str(), "Instance");
		proxy = new CalculatorProxy(*clientTransport, *clientProtocol);
		std::cout << "RPC Proxy online, connecting to service name " << client_ServiceName << std::endl;
	}
	catch (InitializeException &ex){
		std::cout << ex.what() << std::endl;
		return -1;
	}
	/*Once the server is running on the background, application can lock on user input to request a remote operation*/
	bool run = true;
	while(run){
		std::cout << "Please enter two numbers on separate lines to perform a remote operation. Enter an invalid parameter to quit." << std::endl;
		std::cin >> placeholder_string;
		try
		{
			value1 = std::stoi(placeholder_string);	
		}
		catch(std::invalid_argument &ex){
			run = false;
		}
		std::cin >> placeholder_string;
		try
		{		
			value2 = std::stoi(placeholder_string);
		}
		catch(std::invalid_argument &ex){
			run = false;
		}
		//If parameters are valid, execute the remote procedures
		if(run){
			addition_ret = 0;
			try{
				addition_ret = proxy->addition(value1,value2);
				std::cout << "Addition result is " << addition_ret << std::endl;
			}
			catch(SystemException &ex){
				std::cout << ex.what() << std::endl;
			}
			substraction_ret = 0;
			try{
				substraction_ret = proxy->subtraction(value1,value2);
				std::cout << "Substraction result is " << substraction_ret << std::endl;
			}
			catch(SystemException &ex){
				std::cout << ex.what() << std::endl;
			}
		}
	}
	/* Cleanup on application exit */
	server->stop();
	delete proxy;
	delete clientTransport;
	delete server;
	delete serverTransport;
	delete clientProtocol;
	delete serverProtocol;
	delete pool;

	return 0;
}
