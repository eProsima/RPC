-----------------------------------------------------------
Reply is sent before client discover server datawriter.pcap
-----------------------------------------------------------
Reply from server to client with appID 0x1b28 is sent in package 243.
Information of server's datawriters is sent to client with appID 0x1b28 in package 446.

-----------------------------------------------
Request is sent but server dds discards it.pcap
-----------------------------------------------
Client with appID 0x10ec sent data in package 366.
Server request's datareader doesn't show it to the application. It can be see at the end of the following traces. It could be because other
client with appID 0x10ec was executed before.

INFO <DDSCSServer>: Created server with ID 0
SCHEDULING duplicate
Thread 0
SENDING to 0x1860
SCHEDULING suma
Thread 2
SENDING to 0x1860
SCHEDULING duplicate
Thread 1
SENDING to 0x1AEC
SCHEDULING duplicate
Thread 4
SENDING to 0x1A30
SCHEDULING duplicate
Thread 3
SENDING to 0x1BF0
SCHEDULING suma
Thread 0
SENDING to 0x1AEC
SCHEDULING suma
Thread 2
SENDING to 0x1A30
SCHEDULING suma
Thread 1
SENDING to 0x1BF0
SCHEDULING duplicate
Thread 4
SCHEDULING duplicate
SENDING to 0x15A0
Thread 3
SENDING to 0x10EC     <---------
SCHEDULING duplicate
Thread 0
SENDING to 0x1344
SCHEDULING suma
Thread 2
SENDING to 0x15A0
SCHEDULING suma
Thread 1
SENDING to 0x10EC
SCHEDULING suma
Thread 4
SENDING to 0x1344
SCHEDULING duplicate
Thread 3
SENDING to 0xD4C
SCHEDULING duplicate
Thread 0
SENDING to 0x528
SCHEDULING suma
Thread 2
SENDING to 0xD4C
SCHEDULING suma
Thread 1
SENDING to 0x528
SCHEDULING duplicate
Thread 4
SENDING to 0x1840
SCHEDULING suma
Thread 3
SENDING to 0x1840
SCHEDULING duplicate
Thread 0
SCHEDULING duplicate
SCHEDULING duplicate
Thread 1
Thread 2
SENDING to 0x196C
SCHEDULING suma
SENDING to 0x15B8
SENDING to 0x1B30
Thread 4
SCHEDULING suma
SCHEDULING suma
Thread 2
SENDING to 0x1B30
Thread 3
SENDING to 0x196C
SENDING to 0x15B8
SCHEDULING duplicate
Thread 0
SCHEDULING duplicate
SENDING to 0x2EC
Thread 1
SCHEDULING duplicate
Thread 2
SENDING to 0x1AD4
SCHEDULING suma
SCHEDULING suma
SENDING to 0x18C8
Thread 4
SENDING to 0x2EC
SCHEDULING suma
Thread 0
SENDING to 0x18C8
Thread 3
SENDING to 0x1AD4
SCHEDULING duplicate
Thread 2
SENDING to 0x19E0
SCHEDULING suma
Thread 1
SENDING to 0x19E0
SCHEDULING duplicate
Thread 4
SCHEDULING duplicate
Thread 0
SENDING to 0x1814
SENDING to 0x1B98
SCHEDULING duplicate
SCHEDULING suma
SCHEDULING suma
Thread 3
Thread 2
SENDING to 0x1814
SENDING to 0x19B4
Thread 1
SCHEDULING suma
Thread 0
SENDING to 0x19B4
SENDING to 0x1B98
SCHEDULING duplicate
SCHEDULING duplicate
Thread 2
SENDING to 0x13B0
Thread 4
SCHEDULING suma
Thread 3
SENDING to 0x13B0
SENDING to 0x1AE0
SCHEDULING suma
Thread 0
SENDING to 0x1AE0
SCHEDULING duplicate
SCHEDULING duplicate
Thread 2
SENDING to 0xFBC
Thread 1
SENDING to 0x1778
SCHEDULING suma
Thread 3
SENDING to 0x1778
SCHEDULING suma
Thread 4
SENDING to 0xFBC

