eProsima RPC over REST installation requires the following steps:

1. eProsima RPC over REST requires the installation of eProsima FastCDR library on
your system. eProsima FastCDR library is provided under the folder
"requiredcomponents". Extract the content of the package
"fastcdr_0.2.1.tar.gz" and execute:

    For 32-bit machines
    $ cd fastcdr; ./configure --libdir=/usr/lib; make; make install

    For 64-bit machines
    $ cd fastcdr; ./configure --libdir=/usr/lib64; make; make install

2. eProsima RPC over REST also requires Boost libraries. Install them using your
Linux distribution package manager.

3. Install the eProsima RPC over REST software.

    For 32-bit machines
    $ cd rpcrest; ./configure --libdir=/usr/lib; make; make install

    For 64-bit machines
    $ cd rpcrest; ./configure --libdir=/usr/lib64; make; make install

For more information read the Installation manual located in
"rpcrest/doc/pdf/RPCREST - Installation Manual.pdf"
