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
    # TODO Que empaquete tambien fastcdr?

    # Get the current version of FastRPC
    . $EPROSIMADIR/scripts/common_pack_functions.sh getVersionFromCPP fastrpcversion include/fastrpc/fastrpc_version.h
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Compile FastRPC library. Also set platform if is necessary.
    # Compile FastRPC library for i86.
    if [ -z $package_targets ] || [ "$package_targets" == "i86" ]; then
        rm -rf output
        . $EPROSIMADIR/scripts/common_dds_functions.sh setRTItarget i86
        rm -rf lib/$NDDSTARGET
        make fastrpc
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
        rm -rf lib/$NDDSTARGET
        make fastrpc
        errorstatus=$?
        . $EPROSIMADIR/scripts/common_pack_functions.sh setPlatform "$NDDSTARGET"
        . $EPROSIMADIR/scripts/common_dds_functions.sh restoreRTItarget
        if [ $errorstatus != 0 ]; then return; fi
    fi

    # Compile fastrpcgen application.
    cd fastrpcgen
    rm -rf build
    ant fastrpcgen_jar
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ..

##    # Execute FastCdr tests
##    cd utils/pcTests/cdr
##    ./exec_tests.sh $package_targets
##    errorstatus=$?
##    if [ $errorstatus != 0 ]; then return; fi
##    cd ../../..

    # Create PDFS from documentation.
    cd doc
    # Installation manual
    soffice --headless "macro:///eProsima.documentation.changeVersion($PWD/FastRPC - Installation Manual.odt,$fastrpcversion)"
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    soffice --headless "macro:///eProsima.documentation.changeVersion($PWD/FastRPC - User Manual.odt,$fastrpcversion)"
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ..

    # Create README
    soffice --headless "macro:///eProsima.documentation.changeHyperlinksAndVersionToHTML($PWD/README_fastrpc.odt,$fastrpcversion,./doc/,./)"
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    mv README_fastrpc.html README.html
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Prepare include files
    mkdir -p includetmp/fastrpc
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    includefiles=$(cat building/includes/fastrpc_includes)
    cd include/fastrpc
    cp --parents $includefiles ../../includetmp/fastrpc
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ../..

    # Create doxygen information.
    # Generate the examples
    # Fastrpc example
    ./scripts/fastrpcgen.sh -replace -d utils/doxygen/examples/fastrpc utils/doxygen/examples/fastrpc/FooFastRPC.idl
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    #Export version
    export PROJECT_DOX=FastRPC
    export VERSION_DOX=$fastrpcversion
    export INPUT_DOX="utils/doxygen/doxygenfiles/mainpage_fastrpc.dox includetmp utils/doxygen/examples/fastrpc"
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
    ./setup_linux_fastrpc.sh $fastrpcversion
    errorstatus=$?
    cd ../../../..
    if [ $errorstatus != 0 ]; then return; fi
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

# Remove the doxygen tmp directory
rm -rf output

# Remove the include tmp directory
rm -rf includetmp

if [ $errorstatus == 0 ]; then
    echo "PACKAGING SUCCESSFULLY"
else
    echo "PACKAGING FAILED"
fi

exit $errorstatus
