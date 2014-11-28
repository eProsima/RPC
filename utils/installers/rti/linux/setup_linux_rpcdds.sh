#!/bin/sh

# This scripts creates a tar.gz file with all the linux installation.
# Also it creates a RPM package.
# @param The version of the project

# To create the source tar file you have to install next packages:
# autoconf, automake, libtool

# To create RPM in Fedora you have to follow this section on the link:
#   https://fedoraproject.org/wiki/How_to_create_an_RPM_package#Preparing_your_system

# To create RPM in CentOs you have to follow this link:
#   http://wiki.centos.org/HowTos/SetupRpmBuildEnvironment

project="rpcdds"

function installer
{
    # Copy licenses.
    cp ../../../../doc/licencias/RPCDDS_LICENSE.txt tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp ../../../../doc/licencias/LGPLv3_LICENSE.txt tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy documentation.
    mkdir -p tmp/$project/doc
    mkdir -p tmp/$project/doc/pdf
    cp "../../../../doc/RPCDDS - Installation Manual.pdf" tmp/$project/doc/pdf
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp "../../../../doc/RPCDDS - User Manual.pdf" tmp/$project/doc/pdf
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp -r "../../../../output/doxygen/html" tmp/$project/doc
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp "../../../../output/doxygen/latex/refman.pdf" "tmp/$project/doc/pdf/RPCDDS - API C++ Manual.pdf"
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy README
    cp ../../../../README.html tmp/$project/doc
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy example.
    mkdir -p tmp/$project/examples/C++
    cp -r ../../../../examples/C++/DDS/* tmp/$project/examples/C++
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # RPCDDS headers
    mkdir -p tmp/$project/include
    cp -r ../../../../includetmp/rpcdds tmp/$project/include
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy eProsima header files
    mkdir -p tmp/$project/include/rpcdds/eProsima_cpp/config
    cp ../../../../thirdparty/eprosima-common-code/eProsima_cpp/config/eProsima_auto_link.h tmp/$project/include/rpcdds/eProsima_cpp/config
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    mkdir -p tmp/$project/include/rpcdds/eProsima_c/macros
    cp ../../../../thirdparty/eprosima-common-code/eProsima_c/macros/snprintf.h tmp/$project/include/rpcdds/eProsima_c/macros
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy threadpool header files.
    mkdir -p tmp/$project/extra
    mkdir -p tmp/$project/extra/boost-threadpool
    cp -r ../../../../thirdparty/boost-threadpool/* tmp/$project/extra/boost-threadpool
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy RPCDDS sources
    cd ../../../..
    cp --parents `cat building/makefiles/common_sources` utils/installers/rti/linux/tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp --parents `cat building/makefiles/rpcdds_sources` utils/installers/rti/linux/tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd utils/installers/rti/linux
    find tmp/$project/src -type f -exec sed -i -e 's/#include "fastrpc/#include "rpcdds/' {} \;

    # Copy autoconf configuration files.
    cp configure_rpcdds.ac tmp/$project/configure.ac
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp Makefile_rpcdds.am tmp/$project/Makefile.am
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp include_Makefile.am tmp/$project/include/Makefile.am
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Generate autoconf files
    cd tmp/$project
    sed -i "s/VERSION/${version}/g" configure.ac
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    sed -i "s/VERSION_MAJOR/`echo ${version} | cut -d. -f1`/g" Makefile.am
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    sed -i "s/VERSION_MINOR/`echo ${version} | cut -d. -f2`/g" Makefile.am
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    sed -i "s/VERSION_RELEASE/`echo ${version} | cut -d. -f3`/g" Makefile.am
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    sourcefiles=$(cat ../../../../../../building/makefiles/common_sources | sed -e ':a;N;$!ba;s/\n/ /g')
    sourcefiles+=" "
    sourcefiles+=$(cat ../../../../../../building/makefiles/rpcdds_sources | sed -e ':a;N;$!ba;s/\n/ /g')
    sed -i -e "s#RPCDDS_SOURCES#$sourcefiles#" Makefile.am
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    includefiles=$(cat ../../../../../../building/includes/rpcdds_includes | sed -e 's#^#rpcdds/#')
    includefiles=$(echo $includefiles | sed -e ':a;N;$!ba;s/\n/ /g')
    includefiles+=" rpcdds/eProsima_cpp/config/eProsima_auto_link.h rpcdds/eProsima_c/macros/snprintf.h"
    sed -i -e "s#INCLUDE_FILES#$includefiles#" include/Makefile.am
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    autoreconf --force --install
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ../..

    # Copy Java classes.
    mkdir -p tmp/$project/classes
    cp ../../../../classes/rpcddsgen.jar tmp/$project/classes
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy script
    mkdir -p tmp/$project/scripts
    cp ../../../../scripts/rpcddsgen.sh tmp/$project/scripts
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    chmod 755 tmp/$project/scripts/rpcddsgen.sh

    # Copy MessageHeader.idl
    mkdir -p tmp/$project/idl
    cp ../../../../idl/MessageHeader.idl tmp/$project/idl
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Erase backup files from vim
    find tmp/ -iname "*~" -exec rm -f {} \;

    cd tmp
    tar cvzf "../eProsima_RPCDDS-${version}-Linux-RTIDDS-5.1.0.tar.gz" $project
    errorstatus=$?
    cd ..
    if [ $errorstatus != 0 ]; then return; fi
}

function rpminstaller
{
	# Change the script form local to general script.
	cp ../../../../scripts/rpcddsgen_rpm.sh tmp/$project/scripts/rpcddsgen.sh
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	chmod 755 tmp/$project/scripts/rpcddsgen.sh

	# Copy SPEC file
    sed "s/VERSION/${version}/g" rpcdds.spec > ~/rpmbuild/SPECS/rpcdds.spec
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Create new source
	cd tmp
	tar cvzf "../${project}_${version}_rpm.tar.gz" $project
	errorstatus=$?
	cd ..
	if [ $errorstatus != 0 ]; then return; fi

	# Copy source
	mv "${project}_${version}_rpm.tar.gz" ~/rpmbuild/SOURCES
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Go to directory to build.
	cd ~/rpmbuild/RPMS/i686
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
    # Install fastcdr for i686
    if [[ "${distroversion}" = "Fedora20" ]]; then
        sudo yum localinstall fastcdr-$cdrversion-1.fc20.i686.rpm
        errorstatus=$?
    elif [[ "${distroversion}" = "CentOS6"* ]]; then
        sudo yum localinstall fastcdr-$cdrversion-1.el6.i686.rpm
        errorstatus=$?
    fi
    cd -
	if [ $errorstatus != 0 ]; then return; fi

	# Build command for i686.
	cd ~/rpmbuild/SPECS
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	rpmbuild -bb --target i686 rpcdds.spec
	errorstatus=$?
    cd -
	if [ $errorstatus != 0 ]; then cd -; return; fi

    #Uinstall fastcdr i686
    sudo yum remove fastcdr

    # Install fastcdr for x64
	cd ~/rpmbuild/RPMS/x86_64
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
    if [ "${distroversion}" = "Fedora20" ]; then
        sudo yum localinstall fastcdr-$cdrversion-1.fc20.x86_64.rpm
        errorstatus=$?
    elif [[ "${distroversion}" = "CentOS6"* ]]; then
        sudo yum localinstall fastcdr-$cdrversion-1.el6.x86_64.rpm
        errorstatus=$?
    fi
    cd -
	if [ $errorstatus != 0 ]; then return; fi

	# Build command for x86_64.
	cd ~/rpmbuild/SPECS
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	rpmbuild -bb --target x86_64 rpcdds.spec
	errorstatus=$?
	# Return
	cd -
	if [ $errorstatus != 0 ]; then return; fi

    #Uinstall fastcdr i686
    sudo yum remove fastcdr
}

if [ $# -lt 2 ]; then
    echo "Needs as parameter the version of the product $project and FastCDR version"
    exit -1
fi

version=$1
cdrversion=$2

# Get distro version
. ../../../../thirdparty/dev-env/scripts/common_pack_functions.sh getDistroVersion

# Create the temporaly directory.
mkdir tmp
mkdir tmp/$project

installer

if [ $errorstatus == 0 ]; then
    if [[ "${distroversion}" == "CentOS6"* ]] || [[ "${distroversion}" == "Fedora"* ]]; then
        rpminstaller
    fi
fi

# Remove temporaly directory
rm -rf tmp

if [ $errorstatus == 0 ]; then
    echo "INSTALLER SUCCESSFULLY"
else
    echo "INSTALLER FAILED"
fi

exit $errorstatus
