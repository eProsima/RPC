#!/bin/sh

#: This script pack FastRPC product for any platform in Linux.
#
# This script needs the next programs to be run.
# - subversion
# - libreoffice
# - ant
# - doxygen
# Also this script needs the eProsima.documentation.changeVersion macro installed in the system.
#
# Fedora 17: This script has to be run in a Fedora 17 x64.
#            The system has to have installed: libgcc.i686 and libstdc++.i686 boost-devel.i686

errorstatus=0

# Default value, oll platforms will be generated (i86, x64)
package_targets=""

function setPlatform
{
    platforms=`cat src/platforms`
    if [[ $platforms != *$1* ]]; then
        echo $1 >> src/platforms
    fi
}

function package
{
    # Get the current version of FastRPC
    . $EPROSIMADIR/scripts/common_pack_functions.sh getVersionFromCPP fastrpcversion include/fastrpc/fastrpc_version.h
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Compile FastRPC library. Also set platform if is necessary.
    # Compile FastRPC library for i86.
    if [ -z $package_targets ] || [ "$package_targets" == "i86" ]; then
        rm -rf output
        . $EPROSIMADIR/scripts/common_dds_functions.sh setRTItarget i86
        rm -r lib/$NDDSTARGET
        make
        errorstatus=$?
        # Try to add platform
        . $EPROSIMADIR/scripts/common_pack_functions.sh setPlatform "$NDDSTARGET"
        . $EPROSIMADIR/scripts/common_dds_functions.sh restoreRTItarget
        if [ $errorstatus != 0 ]; then return; fi
    fi
    # Compile FastRPC library for x64.
    if [ -z $package_targets ] || [ "$package_targets" == "x64" ]; then
        rm -rf output
        . $EPROSIMADIR/scripts/common_dds_functions.sh setRTItarget x64
        rm -r lib/$NDDSTARGET
        make
        errorstatus=$?
        . $EPROSIMADIR/scripts/common_pack_functions.sh setPlatform "$NDDSTARGET"
        . $EPROSIMADIR/scripts/common_dds_functions.sh restoreRTItarget
        if [ $errorstatus != 0 ]; then return; fi
    fi

    # Compile fastrpcgen application.
    cd fastrpcgen
    rm -rf build
    ant jar
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ..

##    # Execute DDS tests
##    cd utils/pcTests/rti
##    ./exec_tests.sh $package_targets
##    errorstatus=$?
##    if [ $errorstatus != 0 ]; then return; fi
##    cd ../../..
##
##    # Execute REST tests
##    cd utils/pcTests/restful
##    ./exec_tests.sh $package_targets
##    errorstatus=$?
##    if [ $errorstatus != 0 ]; then return; fi
##    cd ../../..

    # Create PDFS from documentation.
    cd doc
    # Installation manual
    soffice --headless "macro:///eProsima.documentation.changeVersion($PWD/RPC - Installation Manual.odt,$fastrpcversion)"
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
##    # User manual
##    soffice --headless "macro:///eProsima.documentation.changeVersion($PWD/RPC - REST - User Manual.odt,$fastrpcversion)"
##    errorstatus=$?
##    if [ $errorstatus != 0 ]; then return; fi
    soffice --headless "macro:///eProsima.documentation.changeVersion($PWD/RPC - DDS - User Manual.odt,$fastrpcversion)"
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ..

    # Create README
    soffice --headless "macro:///eProsima.documentation.changeHyperlinksAndVersionToHTML($PWD/README.odt,$fastrpcversion,./doc/,./)"
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Create doxygen information.
    # Generate the examples
    # DDS example
    ./scripts/fastrpcgen.sh -replace -protocol dds -d utils/doxygen/examples/dds utils/doxygen/examples/dds/FooDDS.idl
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
##    # REST example
##    ./scripts/fastrpcgen.sh -replace -protocol rest -d utils/doxygen/examples/restful utils/doxygen/examples/restful/FooREST.wadl
##    errorstatus=$?
##    if [ $errorstatus != 0 ]; then return; fi
    #Export version
    export VERSION_DOX=$fastrpcversion
    mkdir -p output
    mkdir -p output/doxygen
    doxygen utils/doxygen/doxyfile
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    # Compile the latex document
    cd output/doxygen/latex
    make
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ../../../

    # Create installers
    cd utils/installers/rti/linux
    ./setup_linux.sh $fastrpcversion
    errorstatus=$?
    cd ../../..
    if [ $errorstatus != 0 ]; then return; fi

    # Remove the doxygen tmp directory
    rm -rf output
}

# Check that the environment.sh script was run.
if [ "$EPROSIMADIR" == "" ]; then
    echo "environment.sh must to be run."
    exit -1
fi

# Get the optional parameter
if [ $# -ge 1 ] && [ -n $1 ]; then
    if [ "$1" == "i86" ] || [ "$1" == "x64" ]; then
        package_targets=$1
    else
        echo Error: Bad argument. Valid values. i86, x64
        exit -1;
    fi
fi

# Go to root
cd ../..

package

if [ $errorstatus == 0 ]; then
    echo "PACKAGING SUCCESSFULLY"
else
    echo "PACKAGING FAILED"
fi

exit $errorstatus
