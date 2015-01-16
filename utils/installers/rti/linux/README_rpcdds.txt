eProsima RPC over DDS installation requires the following steps:

1. eProsima RPC over DDS requires the installation of eProsima FastCDR library on
your system. eProsima FastCDR library is provided under the folder
"requiredcomponents". Extract the content of the package
"fastcdr_0.2.4.tar.gz" and execute:

    For 32-bit machines
    $ cd fastcdr; ./configure --libdir=/usr/lib; make; make install

    For 64-bit machines
    $ cd fastcdr; ./configure --libdir=/usr/lib64; make; make install

2. eProsima RPC over DDS requires the installation of eProsima FastRTPS library on
your system. eProsima FastRTPS library is provided under the folder
"requiredcomponents". Extract the content of the package
"eProsima_FastRTPS_1.0.0-Linux.tar.gz" and execute:

    For 32-bit machines
    $ cd fastrtps; ./configure --libdir=/usr/lib; make; make install

    For 64-bit machines
    $ cd fastrtps; ./configure --libdir=/usr/lib64; make; make install

3. eProsima RPC over DDS also requires Boost libraries. Install them using your
Linux distribution package manager.

4. Install the eProsima RPC over DDS software.

    For 32-bit machines
    $ cd rpcdds; ./configure --libdir=/usr/lib; make; make install

    For 64-bit machines
    $ cd rpcdds; ./configure --libdir=/usr/lib64; make; make install

For more information read the Installation manual located in
"rpcdds/doc/pdf/RPCDDS - Installation Manual.pdf"
