###############################################################################
# CMake build rules for RPC                                                    
###############################################################################
cmake_minimum_required(VERSION 2.8.11)

set(IS_TOP_LEVEL TRUE)
if(PROJECT_SOURCE_DIR)
    set(IS_TOP_LEVEL FALSE)
endif()

# Set CMAKE_BUILD_TYPE to Release by default.
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(STATUS "Setting build type to 'Release' as none was specified.")
    set(CMAKE_BUILD_TYPE Release CACHE STRING
        "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
        FORCE)
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
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

###############################################################################
# Version information                                                         #
###############################################################################

set(CONFIGURE_SUFFIX "")
if(RPCPROTO STREQUAL "rpcdds")
    set(CONFIGURE_SUFFIX ".in")
endif()
#If not set, copy over product version from configure.ac
file(STRINGS
    configure_${RPCPROTO}.ac${CONFIGURE_SUFFIX}
    LIB_MAJOR_VERSION_TMP
    REGEX "^m4_define\\(\\[?version_major\\]?, *\\[?[0-9]+\\]?\\)"
    )
file(STRINGS
    configure_${RPCPROTO}.ac${CONFIGURE_SUFFIX}
    LIB_MINOR_VERSION_TMP
    REGEX "^m4_define\\(\\[?version_minor\\]?, *\\[?[0-9]+\\]?\\)"
    )
file(STRINGS
    configure_${RPCPROTO}.ac${CONFIGURE_SUFFIX}
    LIB_PATCH_VERSION_TMP
    REGEX "^m4_define\\(\\[?version_micro\\]?, *\\[?[0-9]+\\]?\\)"
    )

string(REGEX REPLACE "m4_define\\(\\[?version_major\\]?, *\\[?([0-9]+)\\]?\\)"
    "\\1"
    LIB_MAJOR_VERSION
    ${LIB_MAJOR_VERSION_TMP}
    )
string(REGEX REPLACE "m4_define\\(\\[?version_minor\\]?, *\\[?([0-9]+)\\]?\\)"
    "\\1"
    LIB_MINOR_VERSION
    ${LIB_MINOR_VERSION_TMP}
    )
string(REGEX REPLACE "m4_define\\(\\[?version_micro\\]?, *\\[?([0-9]+)\\]?\\)"
    "\\1"
    LIB_PATCH_VERSION
    ${LIB_PATCH_VERSION_TMP}
    )

set(LIB_VERSION_STR "${LIB_MAJOR_VERSION}.${LIB_MINOR_VERSION}.${LIB_PATCH_VERSION}")

if(RPCPROTO STREQUAL "fastrpc")
    if(CMAKE_VERSION VERSION_LESS 3.0)
        project(fastrpc C CXX)
        set(PROJECT_VERSION_MAJOR "${LIB_MAJOR_VERSION}")
        set(PROJECT_VERSION_MINOR "${LIB_MINOR_VERSION}")
        set(PROJECT_VERSION_PATCH "${LIB_PATCH_VERSION}")
        set(PROJECT_VERSION "${LIB_VERSION_STR}")
    else()
        cmake_policy(SET CMP0048 NEW)
        project(fastrpc VERSION "${LIB_VERSION_STR}" LANGUAGES C CXX)
    endif()
    set(PROJECT_NAME_STYLED "FastRPC")
    set(PROJECT_NAME_LARGE "Fast RPC")
    string(TOUPPER "${PROJECT_NAME}" PROJECT_NAME_UPPER)
    set(${PROJECT_NAME}_DESCRIPTION_SUMMARY "C++ library implementation fast remote procedure calls")
    set(${PROJECT_NAME}_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} library provides fast RPC communications.")
elseif(RPCPROTO STREQUAL "rpcdds")
    if(CMAKE_VERSION VERSION_LESS 3.0)
        project(rpcdds C CXX)
        set(PROJECT_VERSION_MAJOR "${LIB_MAJOR_VERSION}")
        set(PROJECT_VERSION_MINOR "${LIB_MINOR_VERSION}")
        set(PROJECT_VERSION_PATCH "${LIB_PATCH_VERSION}")
        set(PROJECT_VERSION "${LIB_VERSION_STR}")
    else()
        cmake_policy(SET CMP0048 NEW)
        project(rpcdds VERSION "${LIB_VERSION_STR}" LANGUAGES C CXX)
    endif()
    set(PROJECT_NAME_STYLED "RPCDDS")
    set(PROJECT_NAME_LARGE "RPC over DDS")
    string(TOUPPER "${PROJECT_NAME}" PROJECT_NAME_UPPER)
    set(${PROJECT_NAME}_DESCRIPTION_SUMMARY "C++ library implementation remote procedure calls using DDS protocol")
    set(${PROJECT_NAME}_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} library provides RPC communications using DDS protocol.")
    option(WITH_FASTRTPS "Defined if building agaist eProsima Fast RTPS" ON)
    option(WITH_RTIDDS "Defined if building agaist RTI DDS" OFF)
elseif(RPCPROTO STREQUAL "rpcrest")
    if(CMAKE_VERSION VERSION_LESS 3.0)
        project(rpcrest C CXX)
        set(PROJECT_VERSION_MAJOR "${LIB_MAJOR_VERSION}")
        set(PROJECT_VERSION_MINOR "${LIB_MINOR_VERSION}")
        set(PROJECT_VERSION_PATCH "${LIB_PATCH_VERSION}")
        set(PROJECT_VERSION "${LIB_VERSION_STR}")
    else()
        cmake_policy(SET CMP0048 NEW)
        project(rpcrest VERSION "${LIB_VERSION_STR}" LANGUAGES C CXX)
    endif()
    set(PROJECT_NAME_STYLED "RPCREST")
    set(PROJECT_NAME_LARGE "RPC over REST")
    string(TOUPPER "${PROJECT_NAME}" PROJECT_NAME_UPPER)
    set(${PROJECT_NAME}_DESCRIPTION_SUMMARY "C++ library implementation remote procedure calls using RESTful")
    set(${PROJECT_NAME}_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} library provides RPC communications using RESTful.")
else()
    message(FATAL_ERROR "Bad value for CMake variable RPCPROTO. Admitted values: fastrpc, rpcdds, rpcrest")
endif()

message(STATUS "Configuring ${PROJECT_NAME_LARGE}")
message(STATUS "Version: ${PROJECT_VERSION}")
message(STATUS "To change de version modify the file configure_${PROJECT_NAME}.ac${CONFIGURE_SUFFIX}")

###############################################################################
# Generation of windows installers.
###############################################################################
if(WIN32)
    option(EPROSIMA_INSTALLER "Activate the creation of a build to create windows installers" OFF)
    option(EPROSIMA_INSTALLER_MINION "Informs this is part of an installer " OFF)
endif()

###############################################################################
# Warning level
###############################################################################
if(MSVC OR MSVC_IDE)
    if(CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
        string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
    else()
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
    endif()
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wextra -Wno-unknown-pragmas")
endif()


###############################################################################
# Test system configuration
###############################################################################
include(${PROJECT_SOURCE_DIR}/cmake/common/check_configuration.cmake)
check_stdcxx()
#check_compile_feature()
check_endianness()

###############################################################################
# Check MSVC architecture
###############################################################################
if(MSVC OR MSVC_IDE)
    check_msvc_arch()
endif()

###############################################################################
# Installation paths
###############################################################################
set(BIN_INSTALL_DIR bin/ CACHE PATH "Installation directory for binaries")
set(INCLUDE_INSTALL_DIR include/ CACHE PATH "Installation directory for C++ headers")
set(LIB_INSTALL_DIR lib/ CACHE PATH "Installation directory for libraries")
set(DATA_INSTALL_DIR share/ CACHE PATH "Installation directory for data")
if(WIN32)
    set(DOC_DIR "doc")
else()
    set(DOC_DIR "${DATA_INSTALL_DIR}/doc")
endif()
set(DOC_INSTALL_DIR ${DOC_DIR} CACHE PATH "Installation directory for documentation")
if(WIN32 AND EPROSIMA_INSTALLER AND IS_TOP_LEVEL)
    set(LICENSE_INSTALL_DIR . CACHE PATH "Installation directory for licenses")
else()
    set(LICENSE_INSTALL_DIR ${DATA_INSTALL_DIR}/${PROJECT_NAME} CACHE PATH "Installation directory for licenses")
endif()

###############################################################################
# eProsima build options
###############################################################################
option(EPROSIMA_BUILD "Activate internal building" OFF)
option(MINION "Tells if it is a subproject of a superproject" OFF)

if(EPROSIMA_INSTALLER)
    set(EPROSIMA_BUILD ON)
endif()

###############################################################################
# Check libraries
###############################################################################
include(${PROJECT_SOURCE_DIR}/cmake/dev/boost_libraries.cmake)
check_boost(thread system date_time chrono regex atomic)

###############################################################################
# Default shared libraries
###############################################################################
# Global flag to cause add_library() to create shared libraries if on.
# If set to true, this will cause all libraries to be built shared
# unless the library was explicitly added as a static library.
option(BUILD_SHARED_LIBS "Create shared libraries by default" ON)

###############################################################################
# Load external eProsima projects.
###############################################################################
option(THIRDPARTY "Activate the use of internal thirdparties" OFF)

if(EPROSIMA_BUILD)
    set(THIRDPARTY ON)
endif()

include(${PROJECT_SOURCE_DIR}/cmake/common/eprosima_libraries.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/dev/eprosima_libraries.cmake)

check_threadpool()

if(RPCPROTO STREQUAL "fastrpc" OR RPCPROTO STREQUAL "rpcdds")
    eprosima_find_package(fastcdr)
endif()

if(RPCPROTO STREQUAL "rpcdds" AND WITH_FASTRTPS)
    eprosima_find_package(fastrtps OPTIONS TINYXML2_FROM_SOURCE)
endif()

if(RPCPROTO STREQUAL "rpcdds" AND WITH_RTIDDS)
    set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake/modules)
    find_package(RTIDDS 5.1 REQUIRED)
endif()

###############################################################################
# Java application
###############################################################################
option(BUILD_JAVA "Activate the compilation of the Java application" OFF)

if(EPROSIMA_INSTALLER)
    set(BUILD_JAVA ON)
endif()

if(BUILD_JAVA)
    include(${PROJECT_SOURCE_DIR}/cmake/dev/java_support.cmake)

    gradle_build(${PROJECT_SOURCE_DIR}/fastrpcgen ${PROJECT_NAME}genJar
        THIRDPARTY_DEPENDENCY idl
        THIRDPARTY_DEPENDENCY fastcdr
        )
endif()

###############################################################################
# Compile library.
###############################################################################
add_subdirectory(src)

###############################################################################
# Testing
###############################################################################
if(NOT EPROSIMA_INSTALLER AND NOT EPROSIMA_INSTALLER_MINION)
    enable_testing()
    include(CTest)
    add_subdirectory(test)
endif()

###############################################################################
# Examples 
###############################################################################
option(COMPILE_EXAMPLES "Build example" ON)
if(COMPILE_EXAMPLES)
    add_subdirectory(examples)
endif()


###############################################################################
# Documentation
###############################################################################
# Add an option to toggle the generation of the API documentation.
option(BUILD_DOCUMENTATION "Use doxygen and libreoffice to create product documentation" OFF)

if(EPROSIMA_INSTALLER)
    set(BUILD_DOCUMENTATION ON)
    set(DOXYGEN_SHOULD_SKIP_THIS_PUBLIC "DOXYGEN_SHOULD_SKIP_THIS_PUBLIC")
endif()

if(BUILD_DOCUMENTATION)
    find_package(Doxygen)
    if(NOT DOXYGEN_FOUND)
        message(FATAL_ERROR "doxygen is needed to build the documentation. Please install it correctly")
    endif()
    find_package(LATEX)
    if(NOT LATEX_COMPILER)
        message(FATAL_ERROR "latex is needed to build the documentation. Please install it correctly")
    endif()
    if(UNIX)
        find_program(DOXYFILE_MAKE make)
        if(DOXYFILE_MAKE)
            message(STATUS "Found Make: ${DOXYFILE_MAKE}")
        else()
            message(FATAL_ERROR "make is needed to build the documentation. Please install it correctly")
        endif()
    elseif(WIN32)
        set(DOXYFILE_MAKE make.bat)
    endif()
    find_program(LIBREOFFICE_EXE soffice)
    if(LIBREOFFICE_EXE)
        message(STATUS "Found Libreoffice: ${LIBREOFFICE_EXE}")
        message(STATUS "Recall you need to have installed the eProsima macros for Libreoffice")
    else()
        message(FATAL_ERROR "libreoffice is needed to build the documentation. Please install it correctly")
    endif()
    
    # Target to create documentation directories
    add_custom_target(docdirs
        COMMAND ${CMAKE_COMMAND} -E make_directory ${PROJECT_BINARY_DIR}/doc
        COMMAND ${CMAKE_COMMAND} -E make_directory ${PROJECT_BINARY_DIR}/doc/pdf
        COMMENT "Creating documentation directory" VERBATIM)

    ### Doxygen ########################3

    # Configure the template doxyfile for or specific project
    configure_file(doxyfile.in ${PROJECT_BINARY_DIR}/doxyfile @ONLY IMMEDIATE)
    # Add custom target to run doxygen when ever the project is build
    add_custom_target(doxygen
        COMMAND "${DOXYGEN_EXECUTABLE}" "${PROJECT_BINARY_DIR}/doxyfile"
        SOURCES "${PROJECT_BINARY_DIR}/doxyfile"
        COMMENT "Generating API documentation with doxygen" VERBATIM)
    # Add custom post_build target to run make and generate latex
    # documentation.
    add_custom_command(TARGET doxygen POST_BUILD
        COMMAND "${DOXYFILE_MAKE}"
        COMMAND ${CMAKE_COMMAND} -E copy refman.pdf "${PROJECT_BINARY_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - C++ API Manual.pdf"
        WORKING_DIRECTORY "${PROJECT_BINARY_DIR}/doxygen/latex"
        COMMENT "Running LaTex for doxygen documentation" VERBATIM)

    add_dependencies(doxygen docdirs)

    # Instalation of doxygen files
    install(DIRECTORY ${PROJECT_BINARY_DIR}/doc/html
        DESTINATION ${DOC_INSTALL_DIR}
        COMPONENT documentation
        )

    install(FILES "${PROJECT_BINARY_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - C++ API Manual.pdf"
        DESTINATION ${DOC_INSTALL_DIR}/pdf
        COMPONENT documentation
        )

    ### README html ########################

    if(WIN32)
        set(README_LOCATION "${PROJECT_BINARY_DIR}/")
        set(README_LOCATION_PREFFIX "doc/")
        set(README_INSTALL_LOCATION ".")
    else()
        set(README_LOCATION "${PROJECT_BINARY_DIR}/doc/")
        set(README_INSTALL_LOCATION "${DOC_INSTALL_DIR}")
    endif()

    configure_file(doc/README.html.in ${README_LOCATION}/README.html @ONLY IMMEDIATE)

    ### Libreoffice ########################3

    # User manuals and installation manuals
    if((NOT RPCPROTO STREQUAL "rpcdds") OR (RPCPROTO STREQUAL "rpcdds" AND WITH_FASTRTPS AND WITH_RTIDDS))
        set(LIBREOFFICE_CONVERT_INSTALLATION_MANUAL_DOC "${PROJECT_SOURCE_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - Installation Manual")
        set(LIBREOFFICE_CONVERT_USER_MANUAL_DOC "${PROJECT_SOURCE_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - User Manual")
    elseif(RPCPROTO STREQUAL "rpcdds" AND WITH_FASTRTPS)
        set(LIBREOFFICE_CONVERT_INSTALLATION_MANUAL_DOC "${PROJECT_SOURCE_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - Installation Manual For FastRTPS")
        set(LIBREOFFICE_CONVERT_USER_MANUAL_DOC "${PROJECT_SOURCE_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - User Manual For FastRTPS")
    elseif(RPCPROTO STREQUAL "rpcdds" AND WITH_RTIDDS)
        set(LIBREOFFICE_CONVERT_INSTALLATION_MANUAL_DOC "${PROJECT_SOURCE_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - Installation Manual For RTIDDS")
        set(LIBREOFFICE_CONVERT_USER_MANUAL_DOC "${PROJECT_SOURCE_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - User Manual For RTIDDS")
    endif()

    add_custom_target(libreoffice
        COMMAND "${LIBREOFFICE_EXE}" --headless
        "macro:///eProsima.documentation.changeVersion(${LIBREOFFICE_CONVERT_INSTALLATION_MANUAL_DOC}.odt,${PROJECT_VERSION})"
        COMMAND ${CMAKE_COMMAND} -E rename "${LIBREOFFICE_CONVERT_INSTALLATION_MANUAL_DOC}.pdf" "${PROJECT_BINARY_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - Installation Manual.pdf"
        COMMAND "${LIBREOFFICE_EXE}" --headless
        "macro:///eProsima.documentation.changeVersion(${LIBREOFFICE_CONVERT_USER_MANUAL_DOC}.odt,${PROJECT_VERSION})"
        COMMAND ${CMAKE_COMMAND} -E rename "${LIBREOFFICE_CONVERT_USER_MANUAL_DOC}.pdf" "${PROJECT_BINARY_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - User Manual.pdf"
        DEPENDS
        "${PROJECT_SOURCE_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - Installation Manual.odt"
        "${PROJECT_SOURCE_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - User Manual.odt"
        COMMENT "Generating documentation with libreoffice" VERBATIM)

    add_dependencies(libreoffice docdirs)

    add_custom_target(doc ALL
        COMMENT "Generated project documentation" VERBATIM)

    add_dependencies(doc doxygen libreoffice)
endif()

###############################################################################
# Packaging
###############################################################################
install_boost(ALL thread system date_time chrono regex atomic)

# Install licenses
install(FILES ${PROJECT_SOURCE_DIR}/${PROJECT_NAME_UPPER}_LICENSE.txt
    ${PROJECT_SOURCE_DIR}/LGPLv3_LICENSE.txt
    DESTINATION ${LICENSE_INSTALL_DIR}
    COMPONENT licenses
    )
set(CPACK_COMPONENT_LICENSES_HIDDEN 1)

# Install examples
if((NOT RPCPROTO STREQUAL "rpcdds") OR (RPCPROTO STREQUAL "rpcdds" AND WITH_FASTRTPS AND WITH_RTIDDS))
    install(DIRECTORY ${PROJECT_SOURCE_DIR}/examples/C++/${PROJECT_NAME}/
        DESTINATION examples/C++
        COMPONENT examples
        )
elseif(RPCPROTO STREQUAL "rpcdds" AND WITH_FASTRTPS)
    install(DIRECTORY ${PROJECT_SOURCE_DIR}/examples/C++/${PROJECT_NAME}/c++11Types/RTPSCalculator/
        DESTINATION examples/C++/RTPSCalculator
        COMPONENT examples
        )
    install(DIRECTORY ${PROJECT_SOURCE_DIR}/examples/C++/${PROJECT_NAME}/c++11Types/RTPSCalculatorAsync/
        DESTINATION examples/C++/RTPSCalculatorAsync
        COMPONENT examples
        )
elseif(RPCPROTO STREQUAL "rpcdds" AND WITH_RTIDDS)
    install(DIRECTORY ${PROJECT_SOURCE_DIR}/examples/C++/${PROJECT_NAME}/ddsTypes/
        DESTINATION examples/C++
        COMPONENT examples
        )
endif()

set(CPACK_COMPONENT_EXAMPLES_DISPLAY_NAME "Examples")
set(CPACK_COMPONENT_EXAMPLES_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} examples")

set(CPACK_COMPONENTS_ALL headers licenses examples)

if(BUILD_JAVA)
    install(FILES ${PROJECT_SOURCE_DIR}/fastrpcgen/share/${PROJECT_NAME}/${PROJECT_NAME}gen.jar
        DESTINATION ${DATA_INSTALL_DIR}/${PROJECT_NAME}
        COMPONENT java
        )

    if(WIN32)
        install(PROGRAMS
            ${PROJECT_SOURCE_DIR}/fastrpcgen/scripts/${PROJECT_NAME}gen.bat
            DESTINATION ${BIN_INSTALL_DIR}
            COMPONENT java
            )
    else()
        install(PROGRAMS
            ${PROJECT_SOURCE_DIR}/fastrpcgen/scripts/${PROJECT_NAME}gen
            DESTINATION ${BIN_INSTALL_DIR}
            COMPONENT java
            )
    endif()

    if(RPCPROTO STREQUAL "rpcdds" AND WITH_RTIDDS)
        install(FILES ${PROJECT_SOURCE_DIR}/fastrpcgen/share/${PROJECT_NAME}/idl/MessageHeader.idl
            DESTINATION ${DATA_INSTALL_DIR}/${PROJECT_NAME}/idl
            COMPONENT java
            )
    endif()

    ### Java component
    set(CPACK_COMPONENT_JAVA_DISPLAY_NAME "Java application")
    set(CPACK_COMPONENT_JAVA_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} generator")

    set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} java)
endif()

if(BUILD_DOCUMENTATION)
    # Instalation of pdf files
    install(FILES 
        "${PROJECT_BINARY_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - Installation Manual.pdf"
        "${PROJECT_BINARY_DIR}/doc/pdf/${PROJECT_NAME_LARGE} - User Manual.pdf"
        DESTINATION ${DOC_INSTALL_DIR}/pdf
        COMPONENT documentation
        )

    install(FILES "${README_LOCATION}/README.html"
        DESTINATION ${README_INSTALL_LOCATION}
        COMPONENT documentation
        )

    ### Documentation component
    set(CPACK_COMPONENT_DOCUMENTATION_DISPLAY_NAME "Documentation")
    set(CPACK_COMPONENT_DOCUMENTATION_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} documentation")

    set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} documentation)
endif()

if(MSVC OR MSVC_IDE)
    if(EPROSIMA_INSTALLER)
        set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL}
            libraries_i86Win32VS2013
            libraries_x64Win64VS2013
            libraries_i86Win32VS2015
            libraries_x64Win64VS2015
            )
    else()
        set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} libraries_${MSVC_ARCH})
    endif()
else()
    set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} libraries)
endif()

include(${PROJECT_SOURCE_DIR}/cmake/packaging/eProsimaPackaging.cmake)
