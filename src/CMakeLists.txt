# Set source files
set(${PROJECT_NAME}_source_files
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
set(proto_dep_source_files
    transports/components/TCPEndpoint.cpp
    transports/TCPProxyTransport.cpp
    transports/TCPServerTransport.cpp
    )
elseif(RPCPROTO STREQUAL "rpcdds")
set(proto_dep_source_files
    utils/dds/Middleware.cpp
    transports/AsyncTask.cpp
    protocols/dds/MessageHeader.cpp
    protocols/dds/MessageHeaderv1.cpp
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
set(proto_dep_source_files
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

list(APPEND ${PROJECT_NAME}_source_files
    ${proto_dep_source_files}
    )

# Set version
set(RPC_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set(RPC_VERSION_MINOR ${PROJECT_VERSION_MINOR})
set(RPC_VERSION_PATCH ${PROJECT_VERSION_PATCH})
set(RPC_VERSION_STR ${PROJECT_VERSION})

set(EPROSIMA_RPC_LIB_NAME ${PROJECT_NAME})
if(WITH_FASTDDS)
    set(RPC_WITH_FASTDDS 1)
else()
    set(RPC_WITH_FASTDDS 0)
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

#Create library
add_library(${PROJECT_NAME} ${${PROJECT_NAME}_source_files})
set_target_properties(${PROJECT_NAME} PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR}
    )

target_compile_definitions(${PROJECT_NAME} PRIVATE
    RPC_SOURCE
    EPROSIMA_USER_DLL_EXPORT
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
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include/protocols/dds>
    $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include> $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include/${PROJECT_NAME}>
    $<INSTALL_INTERFACE:include>
    $<$<AND:$<STREQUAL:"${RPCPROTO}","rpcdds">,$<BOOL:${WITH_RTIDDS}>>:${RTIDDS_INCLUDE_DIRS_}>
    PRIVATE
    ${Boost_INCLUDE_DIR} # Include Boost header files.
    )

target_link_libraries(${PROJECT_NAME} PUBLIC
    $<$<OR:$<STREQUAL:"${RPCPROTO}","fastrpc">,$<STREQUAL:"${RPCPROTO}","rpcdds">>:fastcdr>
    $<$<AND:$<STREQUAL:"${RPCPROTO}","rpcdds">,$<BOOL:${WITH_FASTDDS}>>:fastdds>
    $<$<AND:$<STREQUAL:"${RPCPROTO}","rpcdds">,$<BOOL:${WITH_RTIDDS}>>:${RTIDDS_LIBRARIES_}>
    PRIVATE
    ${Boost_LIBRARIES}
    boost::threadpool
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
endif()

###############################################################################
# Packaging
###############################################################################

# Install headers
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/
    DESTINATION ${INCLUDE_INSTALL_DIR}/${PROJECT_NAME}
    COMPONENT headers
    FILES_MATCHING
    PATTERN "*.h"
    PATTERN "*.hpp"
    )

# Install config.h header
install(FILES ${PROJECT_BINARY_DIR}/include/${PROJECT_NAME}/config.h
    DESTINATION ${INCLUDE_INSTALL_DIR}/${PROJECT_NAME}
    COMPONENT headers
    )

set(CPACK_COMPONENT_HEADERS_DISPLAY_NAME "C++ Headers" PARENT_SCOPE)
set(CPACK_COMPONENT_HEADERS_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} C++ Headers" PARENT_SCOPE)

# Generate different target names depending on linking
get_target_property(TARGET_TYPE ${PROJECT_NAME} TYPE)
if(TARGET_TYPE STREQUAL "SHARED_LIBRARY")
    set(RPC_LINKING dynamic)
else()
    set(RPC_LINKING static)
endif()

install(TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}-${RPC_LINKING}-targets
    RUNTIME DESTINATION ${BIN_INSTALL_DIR}
    LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    COMPONENT libraries
    )

export(TARGETS ${PROJECT_NAME} FILE
    ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-${RPC_LINKING}-targets.cmake)
install(EXPORT ${PROJECT_NAME}-${RPC_LINKING}-targets
    DESTINATION ${LIB_INSTALL_DIR}/cmake/${PROJECT_NAME}
    COMPONENT cmake
    )

if(MSVC OR MSVC_IDE)
    # Install pdb files
    install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/Debug/
        DESTINATION ${LIB_INSTALL_DIR}
        COMPONENT libraries
        CONFIGURATIONS Debug
        FILES_MATCHING
        PATTERN "*.pdb"
        )
endif()

###############################################################################
# Create CMake package config file
###############################################################################
include(CMakePackageConfigHelpers)

if(RPCPROTO STREQUAL "fastrpc" OR RPCPROTO STREQUAL "rpcdds")
    set(EPROSIMA_FIND_DEPENDENCIES
        "if(NOT fastcdr_FOUND)\n    find_package(fastcdr REQUIRED)\nendif()\n")
endif()

if(RPCPROTO STREQUAL "rpcdds" AND WITH_FASTDDS)
    set(EPROSIMA_FIND_DEPENDENCIES
        "if(NOT fastdds_FOUND)\n    find_package(fastdds REQUIRED)\nendif()\n")
endif()

configure_package_config_file(${PROJECT_SOURCE_DIR}/cmake/packaging/Config.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake
    INSTALL_DESTINATION ${LIB_INSTALL_DIR}/cmake/${PROJECT_NAME}
    PATH_VARS BIN_INSTALL_DIR INCLUDE_INSTALL_DIR LIB_INSTALL_DIR
    )
write_basic_package_version_file(
    ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY SameMajorVersion
    )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake
    ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake
    DESTINATION ${LIB_INSTALL_DIR}/cmake/${PROJECT_NAME}
    COMPONENT cmake
    )

set(CPACK_COMPONENT_LIBRARIES_DISPLAY_NAME "Libraries" PARENT_SCOPE)
set(CPACK_COMPONENT_LIBRARIES_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} libraries" PARENT_SCOPE)
