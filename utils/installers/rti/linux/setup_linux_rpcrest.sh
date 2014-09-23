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

project="rpcrest"

function installer
{
    # Copy licenses.
    cp ../../../../doc/licencias/RPCREST_LICENSE.txt tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp ../../../../doc/licencias/LGPLv3_LICENSE.txt tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy documentation.
    mkdir -p tmp/$project/doc
    mkdir -p tmp/$project/doc/pdf
    cp "../../../../doc/RPCREST - Installation Manual.pdf" tmp/$project/doc/pdf
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp "../../../../doc/RPCREST - User Manual.pdf" tmp/$project/doc/pdf
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp -r "../../../../output/doxygen/html" tmp/$project/doc
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp "../../../../output/doxygen/latex/refman.pdf" "tmp/$project/doc/pdf/RPCREST - API C++ Manual.pdf"
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy README
    cp ../../../../README.html tmp/$project/doc
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy example.
    mkdir -p tmp/$project/examples/C++
    cp -r ../../../../examples/C++/RESTful/* tmp/$project/examples/C++
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # RPCREST headers
    mkdir -p tmp/$project/include
    cp -r ../../../../includetmp/rpcrest tmp/$project/include
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy eProsima header files
    mkdir -p tmp/$project/include/rpcrest/eProsima_cpp/config
    cp ../../../../thirdparty/eprosima-common-code/eProsima_cpp/config/eProsima_auto_link.h tmp/$project/include/rpcrest/eProsima_cpp/config
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    mkdir -p tmp/$project/include/rpcrest/eProsima_c/macros
    cp ../../../../thirdparty/eprosima-common-code/eProsima_c/macros/snprintf.h tmp/$project/include/rpcrest/eProsima_c/macros
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy threadpool header files.
    mkdir -p tmp/$project/extra
    mkdir -p tmp/$project/extra/boost-threadpool
    cp -r ../../../../thirdparty/boost-threadpool/* tmp/$project/extra/boost-threadpool
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi

    # Copy RPCREST sources
    cd ../../../..
    cp --parents `cat building/makefiles/common_sources` utils/installers/rti/linux/tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp --parents `cat building/makefiles/rpcrest_sources` utils/installers/rti/linux/tmp/$project
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd utils/installers/rti/linux
    find tmp/$project/src -type f -exec sed -i -e 's/#include "fastrpc/#include "rpcrest/' {} \;

    # Copy autoconf configuration files.
    cp configure_rpcrest.ac tmp/$project/configure.ac
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cp Makefile_rpcrest.am tmp/$project/Makefile.am
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
    sourcefiles+=$(cat ../../../../../../building/makefiles/rpcrest_sources | sed -e ':a;N;$!ba;s/\n/ /g')
    sed -i -e "s#RPCREST_SOURCES#$sourcefiles#" Makefile.am
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    includefiles=$(cat ../../../../../../building/includes/rpcrest_includes | sed -e 's#^#rpcrest/#')
    includefiles=$(echo $includefiles | sed -e ':a;N;$!ba;s/\n/ /g')
    includefiles+=" rpcrest/eProsima_cpp/config/eProsima_auto_link.h rpcrest/eProsima_c/macros/snprintf.h"
    sed -i -e "s#INCLUDE_FILES#$includefiles#" include/Makefile.am
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    autoreconf --force --install
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    cd ../..

    # Copy Java classes.
    mkdir -p tmp/$project/classes
    cp ../../../../classes/rpcrestgen.jar tmp/$project/classes
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
    cp ../../../../scripts/rpcrestgen.sh tmp/$project/scripts
    errorstatus=$?
    if [ $errorstatus != 0 ]; then return; fi
    chmod 755 tmp/$project/scripts/rpcrestgen.sh

    # Erase backup files from vim
    find tmp/ -iname "*~" -exec rm -f {} \;

    cd tmp
    tar cvzf "../eProsima_RPCREST-${version}-Linux.tar.gz" $project
    errorstatus=$?
    cd ..
    if [ $errorstatus != 0 ]; then return; fi
}

function rpminstaller
{
    rm tmp/$project/classes/antlr-2.7.7.jar
    rm tmp/$project/classes/stringtemplate-3.2.1.jar
    rm tmp/$project/classes/rpcrestgen.jar

	# Change the script form local to general script.
	cp ../../../../scripts/rpcrestgen_rpm.sh tmp/$project/scripts/rpcrestgen.sh
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	chmod 755 tmp/$project/scripts/rpcrestgen.sh

	# JAVA application
	mkdir -p tmp/$project/fastrpcgen

	# Copy the build.xml
	if [ ${distroversion} == CentOS6.4 ]; then
		cp build_rpm_rpcrest_centos.xml tmp/$project/fastrpcgen/build.xml
	else
		cp build_rpm_rpcrest.xml tmp/$project/fastrpcgen/build.xml
	fi
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	cp ../../../../fastrpcgen/manifest_rpcrestgen tmp/$project/fastrpcgen
	errorstatus=$?

	if [ $errorstatus != 0 ]; then return; fi
	# Copy grammar
	cp -r ../../../../thirdparty/idl/grammars tmp/$project/fastrpcgen
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Copy Java code
	cp -r ../../../../fastrpcgen/src tmp/$project/fastrpcgen
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
	cp -r ../../../../thirdparty/idl/src tmp/$project/fastrpcgen
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
    # TODO Warning Esto se hace en nuestro build.xml
    cp ../../../../thirdparty/fastcdr/src/java/com/eprosima/fastcdr/templates/Types.stg tmp/$project/fastrpcgen/src/com/eprosima/fastrpc/idl/templates
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
    cp ../../../../thirdparty/fastcdr/src/java/com/eprosima/fastcdr/templates/TypesHeader.stg tmp/$project/fastrpcgen/src/com/eprosima/fastrpc/idl/templates
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
    cp ../../../../thirdparty/fastcdr/src/java/com/eprosima/fastcdr/templates/TypesSource.stg tmp/$project/fastrpcgen/src/com/eprosima/fastrpc/idl/templates
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi
    cp ../../../../src/platforms tmp/$project/src
	errorstatus=$?
	if [ $errorstatus != 0 ]; then return; fi

	# Copy SPEC file
	if [ ${distroversion} == CentOS6.4 ]; then
		sed "s/VERSION/${version}/g" FastBuffers_centos.spec > ~/rpmbuild/SPECS/FastBuffers.spec
	else
		sed "s/VERSION/${version}/g" rpcrest.spec > ~/rpmbuild/SPECS/rpcrest.spec
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

	# Build command for i686.
	rpmbuild -bb --target i686 rpcrest.spec
	errorstatus=$?
	if [ $errorstatus != 0 ]; then cd -; return; fi

	# Build command for x86_64.
	rpmbuild -bb --target x86_64 rpcrest.spec
	errorstatus=$?
	# Return
	cd -
	if [ $errorstatus != 0 ]; then return; fi
}

if [ $# -lt 1 ]; then
    echo "Needs as parameter the version of the product $project"
    exit -1
fi

version=$1

# Get distro version
. ../../../../thirdparty/dev-env/scripts/common_pack_functions.sh getDistroVersion

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
