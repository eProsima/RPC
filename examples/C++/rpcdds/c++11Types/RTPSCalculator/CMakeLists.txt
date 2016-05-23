cmake_minimum_required(VERSION 2.8.12)
project("RTPSCalculator")

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)
find_package(rpcdds  REQUIRED)
# Set C++11
include(CheckCXXCompilerFlag)
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_COMPILER_IS_CLANG OR
        CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    check_cxx_compiler_flag(--std=c++11 SUPPORTS_CXX11)
    if(SUPPORTS_CXX11)
        add_compile_options(--std=c++11)
    else()
        message(FATAL_ERROR "Compiler doesn't support C++11")
    endif()
endif()

message(STATUS "Configuring RTPSCalculator Server and Client...")
set(RTPSCALCULATORSERVER_SOURCES_CXX Calculator.cxx CalculatorDDSAsyncSupport.cxx CalculatorDDSProtocol.cxx CalculatorDDSProtocol.cxx CalculatorProxy.cxx CalculatorServer.cxx CalculatorServerExample.cxx CalculatorServerImplExample.cxx CalculatorTopics.cxx CalculatorTopicsPlugin.cxx)
set(RTPSCALCULATORCLIENT_SOURCES_CXX Calculator.cxx CalculatorDDSAsyncSupport.cxx CalculatorDDSProtocol.cxx CalculatorDDSProtocol.cxx CalculatorProxy.cxx CalculatorClientExample.cxx CalculatorTopics.cxx CalculatorTopicsPlugin.cxx)

add_executable(RTPSCALCULATORSERVER ${RTPSCALCULATORSERVER_SOURCES_CXX})
target_include_directories(RTPSCALCULATORSERVER PRIVATE ${Boost_INCLUDE_DIR})
target_link_libraries(RTPSCALCULATORSERVER fastrtps fastcdr rpcdds ${Boost_LIBRARIES})
install(TARGETS RTPSCALCULATORSERVER
	RUNTIME DESTINATION examples/C++/RTPSCALCULATORCLIENT/${BIN_INSTALL_DIR})

add_executable(RTPSCALCULATORCLIENT ${RTPSCALCULATORCLIENT_SOURCES_CXX})
target_include_directories(RTPSCALCULATORCLIENT PRIVATE ${Boost_INCLUDE_DIR})
target_link_libraries(RTPSCALCULATORCLIENT fastrtps fastcdr rpcdds ${Boost_LIBRARIES})
install(TARGETS RTPSCALCULATORCLIENT
	RUNTIME DESTINATION examples/C++/RTPSCALCULATORCLIENT/${BIN_INSTALL_DIR})
