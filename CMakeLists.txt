###############################################################################
# CMake build rules for FastRTPS                                                
###############################################################################
cmake_minimum_required(VERSION 2.8.7)

# Set CMAKE_BUILD_TYPE to Release by default.
if(DEFINED CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE ${CMAKE_BUILD_TYPE} CACHE STRING
        "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
        )
else()
    set(CMAKE_BUILD_TYPE Release CACHE STRING
        "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
        )
endif()

if(DEFINED RPCPROTO)
    set(RPCPROTO ${RPCPROTO} CACHE STRING
        "Choose the RPC library to build, options are: fastrpc, rpcdds, rpcrest."
        )
else()
    set(RPCPROTO fastrpc CACHE STRING
        "Choose the RPC library to build, options are: fastrpc, rpcdds, rpcrest."
        )
endif()

if(RPCPROTO STREQUAL "fastrpc")
    project("fastrpc")
    set(PROJECT_NAME_STYLED "FastRPC")
    set(PROJECT_NAME_LARGE "Fast RPC")
    string(TOUPPER "${PROJECT_NAME}" PROJECT_NAME_UPPER)
    set(${PROJECT_NAME}_DESCRIPTION_SUMMARY "C++ library implementation fast remote procedure calls")
    set(${PROJECT_NAME}_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} library provides fast RPC communications.")
elseif(RPCPROTO STREQUAL "rpcdds")
    project("rpcdds")
    set(PROJECT_NAME_STYLED "RPCDDS")
    set(PROJECT_NAME_LARGE "RPC over DDS")
    string(TOUPPER "${PROJECT_NAME}" PROJECT_NAME_UPPER)
    set(${PROJECT_NAME}_DESCRIPTION_SUMMARY "C++ library implementation remote procedure calls using DDS protocol")
    set(${PROJECT_NAME}_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} library provides RPC communications using DDS protocol.")
    option(WITH_FASTRTPS "Defined if building agaist eProsima Fast RTPS" ON)
    option(WITH_RTIDDS "Defined if building agaist RTI DDS" OFF)
elseif(RPCPROTO STREQUAL "rpcrest")
    project("rpcrest")
    set(PROJECT_NAME_STYLED "RPCREST")
    set(PROJECT_NAME_LARGE "RPC over REST")
    string(TOUPPER "${PROJECT_NAME}" PROJECT_NAME_UPPER)
    set(${PROJECT_NAME}_DESCRIPTION_SUMMARY "C++ library implementation remote procedure calls using RESTful")
    set(${PROJECT_NAME}_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} library provides RPC communications using RESTful.")
else()
    message(FATAL_ERROR "Bad value for CMake variable RPCPROTO. Admitted values: fastrpc, rpcdds, rpcrest")
endif()

message(STATUS "Configuring ${PROJECT_NAME_LARGE}")

###############################################################################
# Version information                                                         #
###############################################################################

#If not set, copy over product version from configure.ac
if(NOT PROJECT_MAJOR_VERSION)
    file(STRINGS
        ${PROJECT_SOURCE_DIR}/configure_${PROJECT_NAME}.ac
        PROJECT_MAJOR_VERSION_TMP
        REGEX "^m4_define\\(\\[?version_major\\]?, *\\[?[0-9]+\\]?\\)"
        )
    file(STRINGS
        ${PROJECT_SOURCE_DIR}/configure_${PROJECT_NAME}.ac
        PROJECT_MINOR_VERSION_TMP
        REGEX "^m4_define\\(\\[?version_minor\\]?, *\\[?[0-9]+\\]?\\)"
        )
    file(STRINGS
        ${PROJECT_SOURCE_DIR}/configure_${PROJECT_NAME}.ac
        PROJECT_MICRO_VERSION_TMP
        REGEX "^m4_define\\(\\[?version_micro\\]?, *\\[?[0-9]+\\]?\\)"
        )

    string(REGEX REPLACE "m4_define\\(\\[?version_major\\]?, *\\[?([0-9]+)\\]?\\)"
        "\\1"
        PROJECT_MAJOR_VERSION
        ${PROJECT_MAJOR_VERSION_TMP}
        )
    string(REGEX REPLACE "m4_define\\(\\[?version_minor\\]?, *\\[?([0-9]+)\\]?\\)"
        "\\1"
        PROJECT_MINOR_VERSION
        ${PROJECT_MINOR_VERSION_TMP}
        )
    string(REGEX REPLACE "m4_define\\(\\[?version_micro\\]?, *\\[?([0-9]+)\\]?\\)"
        "\\1"
        PROJECT_MICRO_VERSION
        ${PROJECT_MICRO_VERSION_TMP}
        )
endif()

set(PROJECT_VERSION ${PROJECT_MAJOR_VERSION}.${PROJECT_MINOR_VERSION}.${PROJECT_MICRO_VERSION})

message(STATUS "Version: ${PROJECT_VERSION}")
message(STATUS "To change de version modify the file configure_${PROJECT_NAME}.ac")

###############################################################################
# Generation of windows installers.
###############################################################################
if(WIN32)
    option(EPROSIMA_INSTALLER "Activate the creation of a build to create windows installers" OFF)
endif()

###############################################################################
# Test system configuration
###############################################################################
include(${PROJECT_SOURCE_DIR}/cmake/dev/check_configuration.cmake)
check_stdcxx()
check_endianness()

###############################################################################
# Check MSVC architecture
###############################################################################
if(MSVC OR MSVC_IDE)
    check_msvc_arch()
endif()

###############################################################################
# Load external eProsima projects.
###############################################################################

option(EPROSIMA_BUILD "Activate the use of internal thirdparties" OFF)

if(EPROSIMA_INSTALLER)
    set(EPROSIMA_BUILD ON)
endif()

include(${PROJECT_SOURCE_DIR}/cmake/dev/eprosima_libraries.cmake)

check_threadpool()

if(RPCPROTO STREQUAL "fastrpc" OR RPCPROTO STREQUAL "rpcdds")
    find_eprosima_package(fastcdr)
endif()

if(RPCPROTO STREQUAL "rpcdds" AND WITH_FASTRTPS)
    find_eprosima_package(fastrtps)
endif()

if(RPCPROTO STREQUAL "rpcdds" AND WITH_RTIDDS)
    set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake/modules)
    find_package(RTIDDS 5.1)
endif()

###############################################################################
# Check libraries
###############################################################################
include(${PROJECT_SOURCE_DIR}/cmake/dev/boost_libraries.cmake)
check_boost(thread system date_time chrono regex)

###############################################################################
# Installation paths
###############################################################################
set(BIN_INSTALL_DIR bin/ CACHE PATH "Installation directory for binaries")
set(INCLUDE_INSTALL_DIR include/ CACHE PATH "Installation directory for C++ headers")
if(MSVC OR MSVC_IDE)
    set(LIB_INSTALL_DIR lib/${MSVC_ARCH}/ CACHE PATH "Installation directory for libraries")
else()
    set(LIB_INSTALL_DIR lib/ CACHE PATH "Installation directory for libraries")
endif()
set(DATA_INSTALL_DIR share/ CACHE PATH "Installation directory for data")
if(WIN32)
    set(DOC_DIR "doc")
else()
    set(DOC_DIR "${DATA_INSTALL_DIR}/doc")
endif()
set(DOC_INSTALL_DIR ${DOC_DIR} CACHE PATH "Installation directory for documentation")

###############################################################################
# Java application
###############################################################################
option(BUILD_JAVA "Activate the compilation of the Java application" OFF)

if(EPROSIMA_INSTALLER)
    set(BUILD_JAVA ON)
endif()

if(BUILD_JAVA)
    include(${PROJECT_SOURCE_DIR}/cmake/dev/java_support.cmake)

    gradle_build(${PROJECT_SOURCE_DIR}/${PROJECT_NAME}gen
        THIRDPARTY idl
        THIRDPARTY fastcdr
        )
endif()

###############################################################################
# Compile library.
###############################################################################
add_subdirectory(src)

###############################################################################
# Testing
###############################################################################
#enable_testing()
#include(CTest)
#add_subdirectory(test)
