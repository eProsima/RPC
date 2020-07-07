include(${PROJECT_SOURCE_DIR}/cmake/dev/set_sources.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/dev/generate_msvc_libraries.cmake)

# Set source files
set_sources(
    client/Proxy.cpp
    server/Server.cpp
    utils/Utilities.cpp
    strategies/ThreadPoolStrategy.cpp
    strategies/SingleThreadStrategy.cpp
    strategies/ThreadPerRequestStrategy.cpp
    exceptions/Exception.cpp
    exceptions/ClientInternalException.cpp
    exceptions/InitializeException.cpp
    exceptions/IncompatibleException.cpp
    exceptions/ServerInternalException.cpp
    exceptions/ServerNotFoundException.cpp
    exceptions/ServerTimeoutException.cpp
    exceptions/SystemException.cpp
    exceptions/UserException.cpp
    exceptions/BadParamException.cpp
    fastrpc.rc
    )

if(RPCPROTO STREQUAL "fastrpc")
set_sources(
    transports/components/TCPEndpoint.cpp
    transports/TCPProxyTransport.cpp
    transports/TCPServerTransport.cpp
    )
elseif(RPCPROTO STREQUAL "rpcdds")
set_sources(
    utils/dds/Middleware.cpp
    transports/AsyncTask.cpp
    protocols/dds/MessageHeader.cpp
    protocols/dds/MessageHeaderPlugin.cpp
    transports/dds/Transport.cpp
    transports/dds/RTPSTransport.cpp
    transports/dds/ProxyTransport.cpp
    transports/dds/RTPSProxyTransport.cpp
    transports/dds/ServerTransport.cpp
    transports/dds/RTPSServerTransport.cpp
    transports/dds/UDPProxyTransport.cpp
    transports/dds/UDPServerTransport.cpp
    transports/dds/TCPProxyTransport.cpp
    transports/dds/TCPServerTransport.cpp
    transports/dds/DDSAsyncTask.cpp
    transports/dds/RTPSAsyncTask.cpp
    transports/dds/AsyncThread.cpp
    transports/dds/components/ProxyProcedureEndpoint.cpp
    transports/dds/components/RTPSProxyProcedureEndpoint.cpp
    transports/dds/components/ServerProcedureEndpoint.cpp
    transports/dds/components/RTPSServerProcedureEndpoint.cpp
    )
elseif(RPCPROTO STREQUAL "rpcrest")
    set_sources(
        protocols/rest/FastBuffer.cpp
        protocols/rest/HTTPEntities.cpp
        protocols/rest/RESTSerializer.cpp
        transports/components/TCPEndpoint.cpp
        transports/TCPProxyTransport.cpp
        transports/TCPServerTransport.cpp
        transports/HttpProxyTransport.cpp
        transports/HttpServerTransport.cpp
        )
endif()

# Set version
set(RPC_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set(RPC_VERSION_MINOR ${PROJECT_VERSION_MINOR})
set(RPC_VERSION_PATCH ${PROJECT_VERSION_PATCH})
set(RPC_VERSION_STR ${PROJECT_VERSION})

set(EPROSIMA_RPC_LIB_NAME ${PROJECT_NAME})
if(WITH_FASTRTPS)
    set(RPC_WITH_FASTRTPS 1)
else()
    set(RPC_WITH_FASTRTPS 0)
endif()
if(WITH_RTIDDS)
    string(REPLACE ";" "$<SEMICOLON>" RTIDDS_DEFINITIONS_ "${RTIDDS_DEFINITIONS}")
    string(REPLACE ";" "$<SEMICOLON>" RTIDDS_INCLUDE_DIRS_ "${RTIDDS_INCLUDE_DIRS}")
    string(REPLACE ";" "$<SEMICOLON>" RTIDDS_LIBRARIES_"${RTIDDS_LIBRARIES}")
    set(RPC_WITH_RTIDDS 1)
else()
    set(RPC_WITH_RTIDDS 0)
endif()

configure_file(${PROJECT_SOURCE_DIR}/include/config.h.in
    ${PROJECT_BINARY_DIR}/include/${PROJECT_NAME}/config.h)

# Create libraries
if(MSVC OR MSVC_IDE AND EPROSIMA_INSTALLER AND IS_TOP_LEVEL)
    generate_msvc_libraries(i86Win32VS2013)
    generate_msvc_libraries(x64Win64VS2013)
    generate_msvc_libraries(i86Win32VS2015)
    generate_msvc_libraries(x64Win64VS2015)
    generate_msvc_libraries(i86Win32VS2017)
    generate_msvc_libraries(x64Win64VS2017)
elseif(NOT EPROSIMA_INSTALLER)
    #Create library
    add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_SOURCES})
    set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${PROJECT_VERSION})
    set_target_properties(${PROJECT_NAME} PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})

    target_compile_definitions(${PROJECT_NAME} PRIVATE
        RPC_SOURCE
        $<$<AND:$<NOT:$<BOOL:${WIN32}>>,$<STREQUAL:"${CMAKE_BUILD_TYPE}","Debug">>:__DEBUG>
        $<$<AND:$<BOOL:${WIN32}>,$<STREQUAL:"${CMAKE_SYSTEM_NAME}","WindowsStore">>:_WIN32_WINNT=0x0603>
        $<$<AND:$<BOOL:${WIN32}>,$<NOT:$<STREQUAL:"${CMAKE_SYSTEM_NAME}","WindowsStore">>>:_WIN32_WINNT=0x0601>
        PUBLIC
        $<$<BOOL:${WIN32}>:BOOST_ALL_DYN_LINK>
        $<$<AND:$<STREQUAL:"${RPCPROTO}","rpcdds">,$<BOOL:${WITH_RTIDDS}>>:${RTIDDS_DEFINITIONS_}>
        )

    # Define public headers
    target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include> $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include/${PROJECT_NAME}>
        $<INSTALL_INTERFACE:include>
        $<$<AND:$<STREQUAL:"${RPCPROTO}","rpcdds">,$<BOOL:${WITH_RTIDDS}>>:${RTIDDS_INCLUDE_DIRS_}>
        PRIVATE
        ${Boost_INCLUDE_DIR} # Include Boost header files.
        ${PROJECT_SOURCE_DIR}/thirdparty/boost-threadpool # Include threadpool header files.
        )

    # Made linked libraries PRIVATE to prevent local directories in Windows installer.
    if(EPROSIMA_INSTALLER_MINION)
        set(PRIVACY "PRIVATE")
    endif()

    target_link_libraries(${PROJECT_NAME} ${PRIVACY}
        ${Boost_LIBRARIES}
        $<$<OR:$<STREQUAL:"${RPCPROTO}","fastrpc">,$<STREQUAL:"${RPCPROTO}","rpcdds">>:fastcdr>
        $<$<AND:$<STREQUAL:"${RPCPROTO}","rpcdds">,$<BOOL:${WITH_FASTRTPS}>>:fastrtps>
        $<$<AND:$<STREQUAL:"${RPCPROTO}","rpcdds">,$<BOOL:${WITH_RTIDDS}>>:${RTIDDS_LIBRARIES_}>
        )

    if(MSVC OR MSVC_IDE)
        set_target_properties(${PROJECT_NAME} PROPERTIES RELEASE_POSTFIX -${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR})
        set_target_properties(${PROJECT_NAME} PROPERTIES RELWITHDEBINFO_POSTFIX -${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR})
        set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX d-${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR})

        get_target_property(TARGET_TYPE ${PROJECT_NAME} TYPE)
        if(TARGET_TYPE STREQUAL "SHARED_LIBRARY")
            # Export symbols in DLL library
            target_compile_definitions(${PROJECT_NAME} PUBLIC RPC_DYN_LINK)
            if(RPCPROTO STREQUAL "rpcdds" AND WITH_RTIDDS)
                target_compile_definitions(${PROJECT_NAME} PUBLIC ${RTIDDS_DLL_DEFINITIONS})
            endif()
        else()
            # Rename the library to have a "lib" before.
            set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME lib${PROJECT_NAME})
        endif()

        if("${CMAKE_SYSTEM_NAME}" STREQUAL "WindowsStore")
            set_target_properties(${PROJECT_NAME} PROPERTIES VS_WINRT_COMPONENT "true")
        endif()

        # For installing purpose.
        if(EPROSIMA_INSTALLER_MINION)
            set(MSVCARCH_EXTENSION "_${MSVC_ARCH}")
            set(MSVCARCH_DIR_EXTENSION "/${MSVC_ARCH}")
            set(MSVCARCH_DIR_EXTENSION_EXT "/${MSVC_ARCH}")
            if(NOT TARGET_TYPE STREQUAL "SHARED_LIBRARY")
                set(MSVCARCH_DIR_EXTENSION_EXT "${MSVCARCH_DIR_EXTENSION_EXT}_static")
            endif()
        endif()
    endif()
endif()

###############################################################################
# Packaging
###############################################################################

# Install public headers
set_public_headers_directory(${PROJECT_SOURCE_DIR}/include ""
    DESTINATION ${INCLUDE_INSTALL_DIR}/${PROJECT_NAME}
    COMPONENT headers
    )

# Install config.h header
set_public_header(${PROJECT_BINARY_DIR}/include ${PROJECT_NAME} config.h
    DESTINATION ${INCLUDE_INSTALL_DIR}/${PROJECT_NAME}
    COMPONENT headers
    )

set(CPACK_COMPONENT_HEADERS_DISPLAY_NAME "C++ Headers" PARENT_SCOPE)
set(CPACK_COMPONENT_HEADERS_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} C++ Headers" PARENT_SCOPE)

# Install sources
if(UNIX AND EPROSIMA_INSTALLER)
    install(DIRECTORY ${PROJECT_SOURCE_DIR}/src/
        DESTINATION src
        COMPONENT sources
        FILES_MATCHING
        PATTERN "*.c"
        PATTERN "*.cpp"
        PATTERN "*.h"
        PATTERN "*.hpp"
        )

    install(DIRECTORY ${PROJECT_BINARY_DIR}/autotools/
        DESTINATION .
        USE_SOURCE_PERMISSIONS
        OPTIONAL
        COMPONENT sources
        )
endif()

# Install libraries
if(MSVC OR MSVC_IDE AND EPROSIMA_INSTALLER AND IS_TOP_LEVEL)
    install_msvc_libraries(i86Win32VS2013)
    install_msvc_libraries(x64Win64VS2013)
    install_msvc_libraries(i86Win32VS2015)
    install_msvc_libraries(x64Win64VS2015)
    install_msvc_libraries(i86Win32VS2017)
    install_msvc_libraries(x64Win64VS2017)

    configure_file(${PROJECT_SOURCE_DIR}/cmake/packaging/windows/Config.cmake.in ${PROJECT_BINARY_DIR}/cmake/packaging/windows/${PROJECT_NAME}-config.cmake @ONLY)
    install(FILES ${PROJECT_BINARY_DIR}/cmake/packaging/windows/${PROJECT_NAME}-config.cmake
        DESTINATION ${DATA_INSTALL_DIR}/${PROJECT_NAME}/cmake
        COMPONENT cmake
        )
elseif(NOT EPROSIMA_INSTALLER)
    install(TARGETS ${PROJECT_NAME}
        EXPORT ${PROJECT_NAME}-targets
        RUNTIME DESTINATION ${BIN_INSTALL_DIR}${MSVCARCH_DIR_EXTENSION}
        LIBRARY DESTINATION ${LIB_INSTALL_DIR}${MSVCARCH_DIR_EXTENSION}
        ARCHIVE DESTINATION ${LIB_INSTALL_DIR}${MSVCARCH_DIR_EXTENSION}
        COMPONENT libraries${MSVCARCH_EXTENSION}
        )

    export(TARGETS ${PROJECT_NAME} FILE ${PROJECT_BINARY_DIR}/cmake/config/${PROJECT_NAME}-targets.cmake)
    install(EXPORT ${PROJECT_NAME}-targets
        DESTINATION ${DATA_INSTALL_DIR}/${PROJECT_NAME}/cmake${MSVCARCH_DIR_EXTENSION_EXT}
        COMPONENT cmake
        )

    if(MSVC OR MSVC_IDE)
        if(TARGET_TYPE STREQUAL "SHARED_LIBRARY")
            # Install pdb files
            install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/Debug/
                DESTINATION ${LIB_INSTALL_DIR}${MSVCARCH_DIR_EXTENSION}
                COMPONENT libraries${MSVCARCH_EXTENSION}
                CONFIGURATIONS Debug
                FILES_MATCHING
                PATTERN "*.pdb"
                )
        elseif(NOT (("${MSVC_ARCH}" STREQUAL "i86Win32VS2013") OR ("${MSVC_ARCH}" STREQUAL "x64Win64VS2013")))
            install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.dir/Debug/${PROJECT_NAME}.pdb
                DESTINATION ${LIB_INSTALL_DIR}${MSVCARCH_DIR_EXTENSION}
                COMPONENT libraries${MSVCARCH_EXTENSION}
                CONFIGURATIONS Debug
                )
        endif()
    endif()

    ###############################################################################
    # Create CMake package config file
    ###############################################################################
    include(CMakePackageConfigHelpers)

    if(RPCPROTO STREQUAL "fastrpc" OR RPCPROTO STREQUAL "rpcdds")
        set(EPROSIMA_FIND_DEPENDENCIES
            "if(NOT fastcdr_FOUND)\n    find_package(fastcdr REQUIRED)\nendif()\n")
    endif()

    if(RPCPROTO STREQUAL "rpcdds" AND WITH_FASTRTPS)
        set(EPROSIMA_FIND_DEPENDENCIES
            "if(NOT fastrtps_FOUND)\n    find_package(fastcdr REQUIRED)\nendif()\n")
    endif()

    configure_package_config_file(${PROJECT_SOURCE_DIR}/cmake/packaging/Config.cmake.in
        ${PROJECT_BINARY_DIR}/cmake/config/${PROJECT_NAME}-config.cmake
        INSTALL_DESTINATION ${DATA_INSTALL_DIR}$/${PROJECT_NAME}/cmake${MSVCARCH_DIR_EXTENSION_EXT}
        PATH_VARS BIN_INSTALL_DIR INCLUDE_INSTALL_DIR LIB_INSTALL_DIR
        )
    write_basic_package_version_file(${PROJECT_BINARY_DIR}/cmake/config/${PROJECT_NAME}-config-version.cmake
        VERSION ${PROJECT_VERSION}
        COMPATIBILITY SameMajorVersion
        )
    install(FILES ${PROJECT_BINARY_DIR}/cmake/config/${PROJECT_NAME}-config.cmake
        ${PROJECT_BINARY_DIR}/cmake/config/${PROJECT_NAME}-config-version.cmake
        DESTINATION ${DATA_INSTALL_DIR}/${PROJECT_NAME}/cmake${MSVCARCH_DIR_EXTENSION_EXT}
        COMPONENT cmake
        )

    if(MSVCARCH_EXTENSION)
        string(TOUPPER "${MSVC_ARCH}" MSVC_ARCH_UPPER)
        set(CPACK_COMPONENT_LIBRARIES_${MSVC_ARCH_UPPER}_DISPLAY_NAME "${MSVC_ARCH}" PARENT_SCOPE)
        set(CPACK_COMPONENT_LIBRARIES_${MSVC_ARCH_UPPER}_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} libraries for platform ${MSVC_ARCH}" PARENT_SCOPE)
        set(CPACK_COMPONENT_LIBRARIES_${MSVC_ARCH_UPPER}_GROUP "Libraries" PARENT_SCOPE)
        set(CPACK_COMPONENT_GROUP_LIBRARIES_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} libraries" PARENT_SCOPE)
    else()
        set(CPACK_COMPONENT_LIBRARIES_DISPLAY_NAME "Libraries" PARENT_SCOPE)
        set(CPACK_COMPONENT_LIBRARIES_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} libraries" PARENT_SCOPE)
    endif()
endif()
