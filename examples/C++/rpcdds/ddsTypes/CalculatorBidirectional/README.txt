This example shows how to both request and supply procedures in a single application node.

Usage:

Run the application in two terminals, passing "A" as an argument in one and "B" in the other.

CalculatorClientServerExample.exe A
CalculatorClientServerExample.exe B

This is done in order to allow for each program to ignore their own service provider and only use
the remote instance.

The application executable is located in CalculatorClientServer.cxx.

To set a different QoS profile, an XML configuration file must be present at the folder of the executable.
Included with the example comes a USER_QOS_PROFILES.xml file that can be used to modify the default durability QoS.
