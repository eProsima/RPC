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
set(RPC_VERSION_MAJOR ${PROJECT_MAJOR_VERSION})
set(RPC_VERSION_MINOR ${PROJECT_MINOR_VERSION})
set(RPC_VERSION_MICRO ${PROJECT_MICRO_VERSION})
set(EPROSIMA_RPC_LIB_NAME ${PROJECT_NAME})
if(WITH_FASTRTPS)
    set(RPC_WITH_FASTRTPS 1)
else()
    set(RPC_WITH_FASTRTPS 0)
endif()
if(WITH_RTIDDS)
    set(RPC_WITH_RTIDDS 1)
else()
    set(RPC_WITH_RTIDDS 0)
endif()

configure_file(${PROJECT_SOURCE_DIR}/include/config.h.in
    ${PROJECT_BINARY_DIR}/include/${PROJECT_NAME}/config.h)

# Definitions
# If Windows, set define for export dll functions
add_definitions(-DRPC_SOURCE)
if(WIN32)
    add_definitions(-DBOOST_ALL_DYN_LINK -D_WIN32_WINNT=0x0501)
endif()

# Include Boost header files.
include_directories(${Boost_INCLUDE_DIR})

# Include threadpool header files.
include_directories(${PROJECT_SOURCE_DIR}/thirdparty/boost-threadpool)

# Create libraries
if(MSVC OR MSVC_IDE)
    if(EPROSIMA_INSTALLER)
        generate_msvc_libraries(i86Win32VS2010)
        generate_msvc_libraries(x64Win64VS2010)
        generate_msvc_libraries(i86Win32VS2013)
        generate_msvc_libraries(x64Win64VS2013)
    else()
        add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_SOURCES})
        set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME}-${PROJECT_MAJOR_VERSION}.${PROJECT_MINOR_VERSION})
        set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_OUTPUT_NAME ${PROJECT_NAME}d-${PROJECT_MAJOR_VERSION}.${PROJECT_MINOR_VERSION})

        add_library(${PROJECT_NAME}_static STATIC ${${PROJECT_NAME}_SOURCES})
        # Rename the library to have a "lib" before.
        set_target_properties(${PROJECT_NAME}_static PROPERTIES OUTPUT_NAME lib${PROJECT_NAME}-${PROJECT_MAJOR_VERSION}.${PROJECT_MINOR_VERSION})
        set_target_properties(${PROJECT_NAME}_static PROPERTIES DEBUG_OUTPUT_NAME lib${PROJECT_NAME}d-${PROJECT_MAJOR_VERSION}.${PROJECT_MINOR_VERSION})

        set_target_properties(${PROJECT_NAME} ${PROJECT_NAME}_static PROPERTIES RUNTIME_OUTPUT_DIRECTORY_DEBUG
            ${PROJECT_BINARY_DIR}/lib)
        set_target_properties(${PROJECT_NAME} ${PROJECT_NAME}_static PROPERTIES ARCHIVE_OUTPUT_DIRECTORY_DEBUG
            ${PROJECT_BINARY_DIR}/lib)
        set_target_properties(${PROJECT_NAME} ${PROJECT_NAME}_static PROPERTIES RUNTIME_OUTPUT_DIRECTORY_RELEASE
            ${PROJECT_BINARY_DIR}/lib)
        set_target_properties(${PROJECT_NAME} ${PROJECT_NAME}_static PROPERTIES ARCHIVE_OUTPUT_DIRECTORY_RELEASE
            ${PROJECT_BINARY_DIR}/lib)

        # Export symbols in DLL library
        target_compile_definitions(${PROJECT_NAME} PUBLIC RPC_DYN_LINK)

        # Define public headers
        target_include_directories(${PROJECT_NAME} PUBLIC
            $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include> $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include/${PROJECT_NAME}>
            $<INSTALL_INTERFACE:include>
            )

        # Define public headers for static library
        target_include_directories(${PROJECT_NAME}_static PUBLIC
            $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include> $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include/${PROJECT_NAME}>
            $<INSTALL_INTERFACE:include>
            )

        if(RPCPROTO STREQUAL "fastrpc" OR RPCPROTO STREQUAL "rpcdds")
            target_link_libraries(${PROJECT_NAME}
                fastcdr
                )
            target_include_directories(${PROJECT_NAME}_static PRIVATE ${fastcdr_INCLUDE_DIR})
        endif()

        if(RPCPROTO STREQUAL "rpcdds" AND WITH_FASTRTPS)
            target_link_libraries(${PROJECT_NAME}
                fastrtps
                )
            target_include_directories(${PROJECT_NAME}_static PRIVATE ${fastrtps_INCLUDE_DIR})
        endif()

        if(RPCPROTO STREQUAL "rpcdds" AND WITH_RTIDDS)
            target_compile_definitions(${PROJECT_NAME} PUBLIC ${RTIDDS_DEFINITIONS} ${RTIDDS_DLL_DEFINITIONS})
            target_compile_definitions(${PROJECT_NAME}_static PUBLIC ${RTIDDS_DEFINITIONS})
            target_include_directories(${PROJECT_NAME} PUBLIC ${RTIDDS_INCLUDE_DIRS})
            target_include_directories(${PROJECT_NAME}_static PUBLIC ${RTIDDS_INCLUDE_DIRS})
            target_link_libraries(${PROJECT_NAME}
                ${RTIDDS_LIBRARIES}
                )
        endif()

        # Link library to external win32 libraries.
        target_link_libraries(${PROJECT_NAME}
            ${Boost_LIBRARIES}
            )
    endif()
else()
    if(CMAKE_BUILD_TYPE STREQUAL "Debug")
        add_definitions(-D__DEBUG)
    endif()

    #Create library
    add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_SOURCES})

    # Set the output directory for the library.
    set_target_properties(${PROJECT_NAME} PROPERTIES LIBRARY_OUTPUT_DIRECTORY
        ${PROJECT_BINARY_DIR}/lib)

    # Define public headers
    target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include> $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include/${PROJECT_NAME}>
        $<INSTALL_INTERFACE:include>
        )

    if(RPCPROTO STREQUAL "fastrpc" OR RPCPROTO STREQUAL "rpcdds")
        target_link_libraries(${PROJECT_NAME}
            fastcdr
            )
    endif()

    if(RPCPROTO STREQUAL "rpcdds" AND WITH_FASTRTPS)
        target_link_libraries(${PROJECT_NAME}
            fastrtps
            )
    endif()

    if(RPCPROTO STREQUAL "rpcdds" AND WITH_RTIDDS)
        target_compile_definitions(${PROJECT_NAME} PUBLIC ${RTIDDS_DEFINITIONS})
        target_include_directories(${PROJECT_NAME} PUBLIC ${RTIDDS_INCLUDE_DIRS})
        target_link_libraries(${PROJECT_NAME}
            ${RTIDDS_LIBRARIES}
            )
    endif()

    # Link library to external libraries.
    target_link_libraries(${PROJECT_NAME}
        ${Boost_LIBRARIES}
        )
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
install(DIRECTORY ${PROJECT_SOURCE_DIR}/src/
    DESTINATION src
    COMPONENT sources
    FILES_MATCHING
    PATTERN "*.c"
    PATTERN "*.cpp"
    PATTERN "*.h"
    PATTERN "*.hpp"
    )
if(UNIX)
    install(DIRECTORY ${PROJECT_BINARY_DIR}/autotools/
        DESTINATION .
        USE_SOURCE_PERMISSIONS
        OPTIONAL
        COMPONENT sources
        )
endif()

# Install libraries
if(MSVC OR MSVC_IDE)
    if(EPROSIMA_INSTALLER)
        install_msvc_libraries(i86Win32VS2010)
        install_msvc_libraries(x64Win64VS2010)
        install_msvc_libraries(i86Win32VS2013)
        install_msvc_libraries(x64Win64VS2013)
    else()
        install(TARGETS ${PROJECT_NAME} ${PROJECT_NAME}_static
            EXPORT ${PROJECT_NAME}Targets
            RUNTIME DESTINATION ${BIN_INSTALL_DIR}
            LIBRARY DESTINATION ${LIB_INSTALL_DIR}
            ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
            COMPONENT libraries_${MSVC_ARCH}
            )

        export(TARGETS ${PROJECT_NAME} ${PROJECT_NAME}_static FILE ${PROJECT_BINARY_DIR}/cmake/config/${PROJECT_NAME}Targets.cmake)
        install(EXPORT ${PROJECT_NAME}Targets
            DESTINATION ${LIB_INSTALL_DIR}/${PROJECT_NAME}/cmake
            COMPONENT cmake
            )


        # Install pdb files
        install(DIRECTORY ${PROJECT_BINARY_DIR}/lib/
            DESTINATION ${LIB_INSTALL_DIR}
            COMPONENT libraries_${MSVC_ARCH}
            FILES_MATCHING
            PATTERN "*.pdb"
            )

        string(TOUPPER "${MSVC_ARCH}" MSVC_ARCH_UPPER)
        set(CPACK_COMPONENT_LIBRARIES_${MSVC_ARCH_UPPER}_DISPLAY_NAME "${MSVC_ARCH}" PARENT_SCOPE)
        set(CPACK_COMPONENT_LIBRARIES_${MSVC_ARCH_UPPER}_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} libraries for platform ${MSVC_ARCH}" PARENT_SCOPE)
        set(CPACK_COMPONENT_LIBRARIES_${MSVC_ARCH_UPPER}_GROUP "Libraries" PARENT_SCOPE)
    endif()

    set(CPACK_COMPONENT_GROUP_LIBRARIES_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} libraries" PARENT_SCOPE)
else()
    install(TARGETS ${PROJECT_NAME}
        EXPORT ${PROJECT_NAME}Targets
        RUNTIME DESTINATION ${BIN_INSTALL_DIR}
        LIBRARY DESTINATION ${LIB_INSTALL_DIR}
        ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
        COMPONENT libraries
        )

    export(TARGETS ${PROJECT_NAME} FILE ${PROJECT_BINARY_DIR}/cmake/config/${PROJECT_NAME}Targets.cmake)
    install(EXPORT ${PROJECT_NAME}Targets
        DESTINATION ${LIB_INSTALL_DIR}/${PROJECT_NAME}/cmake
        COMPONENT cmake
        )

    set(CPACK_COMPONENT_LIBRARIES_DISPLAY_NAME "Libraries" PARENT_SCOPE)
    set(CPACK_COMPONENT_LIBRARIES_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} libraries" PARENT_SCOPE)
endif()
