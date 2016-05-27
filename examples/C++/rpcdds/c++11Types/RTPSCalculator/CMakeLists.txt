cmake_minimum_required(VERSION 2.8.12)
project("RTPSCalculator")

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)
find_package(rpcdds REQUIRED)
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

set(RTPSCALCULATOR_COMMON_SOURCES_CXX CalculatorTopicsPlugin.cxx CalculatorTopics.cxx CalculatorDDSProtocol.cxx CalculatorDDSAsyncSupport.cxx)
message(STATUS "Configuring RTPS Calculator libraries...")
set(RTPSCALCULATOR_SOURCES_CXX Calculator.cxx)
set(RTPSCALCULATORCLIENT_SOURCES_CXX CalculatorProxy.cxx)
set(RTPSCALCULATORSERVER_SOURCES_CXX CalculatorServer.cxx)

add_library(rtpscalculator STATIC ${RTPSCALCULATOR_COMMON_SOURCES_CXX} ${RTPSCALCULATOR_SOURCES_CXX})
target_include_directories(rtpscalculator PRIVATE ${rpcdds_INCLUDE_DIR} ${fastrtps_INCLUDE_DIR} ${fastcdr_INCLUDE_DIR} ${Boost_INCLUDE_DIR})

add_library(rtpscalculatorclient STATIC ${RTPSCALCULATORCLIENT_SOURCES_CXX})
target_include_directories(rtpscalculatorclient PRIVATE ${rpcdds_INCLUDE_DIR} ${fastrtps_INCLUDE_DIR} ${fastcdr_INCLUDE_DIR} ${Boost_INCLUDE_DIR})

add_library(rtpscalculatorserver STATIC ${RTPSCALCULATORSERVER_SOURCES_CXX})
target_include_directories(rtpscalculatorserver PRIVATE ${rpcdds_INCLUDE_DIR} ${fastrtps_INCLUDE_DIR} ${fastcdr_INCLUDE_DIR} ${Boost_INCLUDE_DIR})

message(STATUS "Configuring RTPSCalculator Server and Client examples...")
set(RTPSCALCULATORSERVEREXAMPLE_SOURCES_CXX CalculatorServerExample.cxx CalculatorServerImplExample.cxx) 
set(RTPSCALCULATORCLIENTEXAMPLE_SOURCES_CXX CalculatorClientExample.cxx) 

add_executable(RTPSCALCULATORSERVEREXAMPLE ${RTPSCALCULATORSERVEREXAMPLE_SOURCES_CXX})
target_include_directories(RTPSCALCULATORSERVEREXAMPLE PRIVATE ${Boost_INCLUDE_DIR})
target_link_libraries(RTPSCALCULATORSERVEREXAMPLE rtpscalculatorserver rtpscalculator)
target_link_libraries(RTPSCALCULATORSERVEREXAMPLE rpcdds fastrtps fastcdr ${Boost_LIBRARIES})

install(TARGETS RTPSCALCULATORSERVEREXAMPLE
	RUNTIME DESTINATION examples/C++/RTPSCALCULATORSERVER/${BIN_INSTALL_DIR})

add_executable(RTPSCALCULATORCLIENTEXAMPLE ${RTPSCALCULATORCLIENTEXAMPLE_SOURCES_CXX})
target_include_directories(RTPSCALCULATORCLIENTEXAMPLE PRIVATE ${Boost_INCLUDE_DIR})
target_link_libraries(RTPSCALCULATORCLIENTEXAMPLE rtpscalculatorclient rtpscalculator)
target_link_libraries(RTPSCALCULATORCLIENTEXAMPLE rpcdds fastrtps fastcdr ${Boost_LIBRARIES})

install(TARGETS RTPSCALCULATORCLIENTEXAMPLE
	RUNTIME DESTINATION examples/C++/RTPSCALCULATORCLIENTEXAMPLE/${BIN_INSTALL_DIR})
