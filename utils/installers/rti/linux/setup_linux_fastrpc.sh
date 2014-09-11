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

project="fastrpc"

function installer
{
    # Copy licenses.
    cp ../../../../doc/licencias/FASTRPC_LICENSE.txt tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp ../../../../doc/licencias/LGPLv3_LICENSE.txt tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy documentation.
    mkdir -p tmp/$project/doc
    mkdir -p tmp/$project/doc/pdf
    cp "../../../../doc/FastRPC - Installation Manual.pdf" tmp/$project/doc/pdf
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp "../../../../doc/FastRPC - User Manual.pdf" tmp/$project/doc/pdf
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp -r "../../../../output/doxygen/html" tmp/$project/doc
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp "../../../../output/doxygen/latex/refman.pdf" "tmp/$project/doc/pdf/FastRPC - API C++ Manual.pdf"
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy README
    cp ../../../../README.html tmp/$project/doc
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy example.
    mkdir -p tmp/$project/examples/C++
    cp -r ../../../../examples/C++/FastRPC tmp/$project/examples/C++
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # FastRPC headers
    mkdir -p tmp/$project/include
    cp -r ../../../../includetmp/fastrpc tmp/$project/include
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy eProsima header files
    mkdir -p tmp/$project/include/fastrpc/eProsima_cpp
    cp ../../../../thirdparty/eProsima/code/eProsima_cpp/eProsima_auto_link.h tmp/$project/include/fastrpc/eProsima_cpp
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp ../../../../thirdparty/eProsima/code/eProsima_cpp/eProsimaMacros.h tmp/$project/include/fastrpc/eProsima_cpp
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy threadpool header files.
    mkdir -p tmp/$project/extra
    cp -r $EPROSIMA_LIBRARY_PATH/threadpool-0_2_5-src/threadpool tmp/$project/extra
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy FastRPC sources
    cd ../../../..
    cp --parents `cat building/makefiles/common_sources` utils/installers/rti/linux/tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp --parents `cat building/makefiles/fastrpc_sources` utils/installers/rti/linux/tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd utils/installers/rti/linux

    # Copy autoconf configuration files.
    cp configure_fastrpc.ac tmp/$project/configure.ac
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp Makefile_fastrpc.am tmp/$project/Makefile.am
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
    sourcefiles+=$(cat ../../../../../../building/makefiles/fastrpc_sources | sed -e ':a;N;$!ba;s/\n/ /g')
    sed -i -e "s#FASTRPC_SOURCES#$sourcefiles#" Makefile.am
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    includefiles=$(cat ../../../../../../building/includes/fastrpc_includes | sed -e 's#^#fastrpc/#')
    includefiles=$(echo $includefiles | sed -e ':a;N;$!ba;s/\n/ /g')
    includefiles+=" fastrpc/eProsima_cpp/eProsima_auto_link.h fastrpc/eProsima_cpp/eProsimaMacros.h"
    sed -i -e "s#INCLUDE_FILES#$includefiles#" include/Makefile.am
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    autoreconf --force --install
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ../..

    # Copy Java classes.
    mkdir -p tmp/$project/classes
    cp ../../../../classes/fastrpcgen.jar tmp/$project/classes
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy Java dependent classes.
    cp ../../../../classes/antlr-2.7.7.jar tmp/$project/classes
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp ../../../../classes/antxr.jar tmp/$project/classes
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp ../../../../classes/stringtemplate-3.2.1.jar tmp/$project/classes
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy script
    mkdir -p tmp/$project/scripts
    cp ../../../../scripts/fastrpcgen.sh tmp/$project/scripts
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    chmod 755 tmp/$project/scripts/fastrpcgen.sh

    # Erase backup files from vim
    find tmp/ -iname "*~" -exec rm -f {} \;

    cd tmp
    tar cvzf "../eProsima_FastRPC_${version}-Linux.tar.gz" $project
    errorstatus=$?
    cd ..
    if [ $errorstatus != 0 ]; then return; fi
}

function rpminstaller
{
    rm tmp/$project/classes/antlr-2.7.7.jar
    rm tmp/$project/classes/stringtemplate-3.2.1.jar
    rm tmp/$project/classes/rpcddsgen.jar

	# Change the script form local to general script.
	cp ../../../../scripts/fastrpcgen_rpm.sh tmp/$project/scripts/fastrpcgen.sh
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	chmod 755 tmp/$project/scripts/fastrpcgen.sh

	# JAVA application
	mkdir -p tmp/$project/fastrpcgen

	# Copy the build.xml
	if [ ${distroversion} == CentOS6.4 ]; then
		cp build_rpm_fastrpc_centos.xml tmp/$project/fastrpcgen/build.xml
	else
		cp build_rpm_fastrpc.xml tmp/$project/fastrpcgen/build.xml
	fi
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	cp ../../../../fastrpcgen/manifest tmp/$project/fastrpcgen
	errorstatus=$?

	if [ $errorstatus != 0 ]; then return; fi
	# Copy grammar
	cp -r ../../../../../idl/grammars tmp/$project/fastrpcgen
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Copy Java code
	cp -r ../../../../fastrpcgen/src tmp/$project/fastrpcgen
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	cp -r ../../../../../idl/src tmp/$project/fastrpcgen
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
    # TODO Warning Esto se hace en nuestro build.xml
    cp ../../../../../FastBuffers/src/com/eprosima/fastbuffers/templates/Types.stg tmp/$project/fastrpcgen/src/com/eprosima/fastrpc/idl/templates
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
    cp ../../../../../FastBuffers/src/com/eprosima/fastbuffers/templates/TypesHeader.stg tmp/$project/fastrpcgen/src/com/eprosima/fastrpc/idl/templates
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
    cp ../../../../../FastBuffers/src/com/eprosima/fastbuffers/templates/TypesSource.stg tmp/$project/fastrpcgen/src/com/eprosima/fastrpc/idl/templates
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
    cp ../../../../src/platforms tmp/$project/src
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Copy SPEC file
	if [ ${distroversion} == CentOS6.4 ]; then
		sed "s/VERSION/${version}/g" FastBuffers_centos.spec > ~/rpmbuild/SPECS/FastBuffers.spec
	else
		sed "s/VERSION/${version}/g" fastrpc.spec > ~/rpmbuild/SPECS/fastrpc.spec
	fi
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
	cd ~/rpmbuild/SPECS
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

    # Install fastcdr for i686
    cd ../RPMS/i686
    sudo yum localinstall fastcdr-0.2.2-1.fc20.i686.rpm
    cd -

	# Build command for i686.
	rpmbuild -bb --target i686 fastrpc.spec
	errorstatus=$?
	if [ $errorstatus != 0 ]; then cd -; return; fi

    #Uinstall fastcdr i686
    sudo yum remove fastcdr

    # Install fastcdr for x64
    cd ../RPMS/x86_64
    sudo yum localinstall fastcdr-0.2.2-1.fc20.x86_64.rpm
    cd -

	# Build command for x86_64.
	rpmbuild -bb --target x86_64 fastrpc.spec
	errorstatus=$?
	# Return
	cd -
	if [ $errorstatus != 0 ]; then return; fi

    #Uinstall fastcdr i686
    sudo yum remove fastcdr
}

if [ $# -lt 1 ]; then
    echo "Needs as parameter the version of the product $project"
    exit -1
fi

version=$1

# Get distro version
. ../../../../thirdparty/eProsima/scripts/common_pack_functions.sh getDistroVersion

# Create the temporaly directory.
mkdir tmp
mkdir tmp/$project

installer

# TODO Detect if the distro suport RPM
[ $errorstatus == 0 ] && { rpminstaller; }

# Remove temporaly directory
rm -rf tmp

if [ $errorstatus == 0 ]; then
    echo "INSTALLER SUCCESSFULLY"
else
    echo "INSTALLER FAILED"
fi

exit $errorstatus

