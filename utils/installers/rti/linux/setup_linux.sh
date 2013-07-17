#!/bin/sh

# This scripts creates a tar.gz file with all the linux installation
# @param Version of the product.
# @param Optional. The architecture that will be created the installer for. Default: all architectures (i86, x64)

project="RPCDDS"

installer_targets=""

function installer
{
    ## Copy documentation.
    #mkdir -p tmp/$project/doc
    #mkdir -p tmp/$project/doc/pdf
    #cp "../../../doc/Installation Manual.pdf" tmp/$project/doc/pdf
    #errorstatus=$?
    #if [ $errorstatus != 0 ]; then return; fi
    #cp "../../../doc/User Manual.pdf" tmp/$project/doc/pdf
    #errorstatus=$?
    #if [ $errorstatus != 0 ]; then return; fi
    #cp -r "../../../output/doxygen/html" tmp/$project/doc
    #errorstatus=$?
    #if [ $errorstatus != 0 ]; then return; fi
    #cp "../../../output/doxygen/latex/refman.pdf" "tmp/$project/doc/pdf/API C++ Manual.pdf"
    #errorstatus=$?
    #if [ $errorstatus != 0 ]; then return; fi

    ## Copy example.
    #mkdir -p tmp/$project/examples
    #cp -r ../../../examples/HelloWorld tmp/$project/examples
    #errorstatus=$?
    #if [ $errorstatus != 0 ]; then return; fi

    # Copy licenses.
    cp ../../../../doc/licencias/RPCDDS_LICENSE.txt tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp ../../../../doc/licencias/LGPLv3_LICENSE.txt tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    ## Copy README
    #cp ../../../README.html tmp/$project
    #errorstatus=$?
    #if [ $errorstatus != 0 ]; then return; fi

    # Copy Java classes.
    mkdir -p tmp/$project/classes
    cp ../../../../rpcddsgen/lib/*.jar tmp/$project/classes
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy scripts
    mkdir -p tmp/$project/scripts
    cp ../../../../scripts/rpcddsgen.sh tmp/$project/scripts
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    chmod 755 tmp/$project/scripts/rpcddsgen.sh

    # RPCDDS headers
    mkdir -p tmp/$project/include
    cp -r ../../../../include/* tmp/$project/include
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # MessageHeader.idl
    mkdir -p tmp/$project/idl
    cp ../../../../idl/MessageHeader.idl tmp/$project/idl
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy eProsima header files
    mkdir -p tmp/$project/include/eProsima_cpp
    cp $EPROSIMADIR/code/eProsima_cpp/eProsimaMacros.h tmp/$project/include/eProsima_cpp
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp $EPROSIMADIR/code/eProsima_cpp/eProsima_auto_link.h tmp/$project/include/eProsima_cpp
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy RPCDDS libraries
    mkdir -p tmp/$project/lib

    # Copy i86 RPCDDS libraries. Preserve links.
    if [ -z $installer_targets ] || [ "$installer_targets" == "i86" ]; then
        . $EPROSIMADIR/scripts/common_dds_functions.sh setRTItarget i86
        mkdir -p tmp/$project/lib/$NDDSTARGET
        cp -d ../../../../lib/$NDDSTARGET/* tmp/$project/lib/$NDDSTARGET
        errorstatus=$?
        . $EPROSIMADIR/scripts/common_dds_functions.sh restoreRTItarget
        if [ $errorstatus != 0 ]; then return; fi
    fi

    # Copy x64 RPC libraries. Preserve links.
    if [ -z $installer_targets ] || [ "$installer_targets" == "x64" ]; then
        . $EPROSIMADIR/scripts/common_dds_functions.sh setRTItarget x64
        mkdir -p tmp/$project/lib/$NDDSTARGET
        cp -d ../../../../lib/$NDDSTARGET/* tmp/$project/lib/$NDDSTARGET
        errorstatus=$?
        . $EPROSIMADIR/scripts/common_dds_functions.sh restoreRTItarget
        if [ $errorstatus != 0 ]; then return; fi
    fi

    # Erase subversion directories
    find . -name ".svn" -exec rm -rf {} \;
    # Erase backup files from vim
    find . -iname "*~" -exec rm -f {} \;

    cd tmp
    tar cvzf "../${project}_${version}_${distroversion}-RTIDDS_5.0.0.tar.gz" $project
    errorstatus=$?
    cd ..
    if [ $errorstatus != 0 ]; then return; fi
}

if [ $# -lt 1 ]; then
    echo "Needs as parameter the version of the product $project"
    exit -1
fi

version=$1

if [ $# -ge 2 ] && [ -n $2 ]; then
    if [ "$2" == "i86" ] || [ "$2" == "x64" ]; then
        installer_targets=$2
    else
        echo Error: Bad argument. Valid values. i86, x64
        exit -1;
    fi
fi

# Get distro version
. $EPROSIMADIR/scripts/common_pack_functions.sh getDistroVersion

# Create the temporaly directory.
mkdir tmp
mkdir tmp/$project

installer

# Remove temporaly directory
rm -rf tmp

if [ $errorstatus == 0 ]; then
    echo "INSTALLER SUCCESSFULLY"
else
    echo "INSTALLER FAILED"
fi

exit $errorstatus

