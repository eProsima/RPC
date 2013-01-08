#!/bin/sh

EXPECTED_ARGS=3

if [ $# -ne $EXPECTED_ARGS ]; then
    echo "Usage: execute_several_clients.sh [Number of clients] [Server IP address] [Data size]"
    exit -1
fi

for ((i=1;i<=$1;++i)); do 
    ./objs/x64Linux2.6gcc4.4.5/SimpleDelayClient $2 $3 $1 $i &
done

echo "Waiting the end of all clients"
wait
echo "Finished"
