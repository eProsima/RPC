# Introduction #

This repository contains a set of C++ libraries that provide different [RPC][rpc] communications.

* **eProsima Fast RPC** provides a fast RPC communication using a [modified CDR serialization][fastcdr] over TCP.
* **eProsima RPC over DDS** provides an RPC communication over an OMG DDS implementation. Currently it supports [**eProsima Fast RTPS**][fastrtps] and [RTI DDS][rti] implementations.
* **eProsima RPC over REST** provides an RPC communication over RESTful paradigma.

# Build #

This repository provides [CMake][cmake] scripts to build and install the RPC libraries. Also in [eProsima][eprosima] you can find packages for Linux using autotools and binaries for Windows.

The following subsections explain how to make an out-of-tree build using CMake, for each RPC library:

## eProsima Fast RPC ##

To enable the building of this library, the option `-DRPCPROTO=fastrpc` has to be passed to CMake. By default, this library will be built. 

    $ mkdir build
    $ cd build
    $ cmake ..
    $ make

## eProsima RPC over DDS ##

To enable the building of this library, the option `-DRPCPROTO=rpcdds` has to be passed to CMake.

### Using eProsima Fast RTPS ###

To compile against **eProsima Fast RTPS**, the option `-DWITH_FASTRTPS=ON` has to be passed to CMake. By default, this library links against **eProsima Fast RTPS**.

    $ mkdir build
    $ cd build
    $ cmake -DRPCPROTO=rpcdds ..
    $ make

### Using RTI DDS ###

To compile against RTI DDS, the option `-DWITH_RTIDDS=ON` has to be passed to CMake.

    $ mkdir build
    $ cd build
    $ cmake -DRPCPROTO=rpcdds -DWITH_RTIDDS=ON -DWITH_FASTRTPS=OFF ..
    $ make

## eProsima RPC over REST ##

To enable the building of this library, the option `-DRPCPROTO=rpcrest` has to be passed to CMake.

    $ mkdir build
    $ cd build
    $ cmake -DRPCPROTO=rpcrest ..
    $ make

[cmake]: http://www.cmake.org
[eprosima]: http://www.eprosima.com
[fastcdr]: http://www.github.com/eProsima/Fast-CDR
[fastrtps]: http://www.github.com/eProsima/Fast-RTPS
[rti]: http://www.rti.com
[rpc]: https://en.wikipedia.org/wiki/Remote_procedure_call 
