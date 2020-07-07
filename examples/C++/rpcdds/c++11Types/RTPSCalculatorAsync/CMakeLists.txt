cmake_minimum_required(VERSION 2.8.12)

if(NOT CMAKE_VERSION VERSION_LESS 3.0)
    cmake_policy(SET CMP0048 NEW)
endif()

project("RTPSCalculatorAsync")

# Find requirements
if(NOT fastcdr_FOUND)
    find_package(fastcdr REQUIRED)
endif()

if(NOT fastrtps_FOUND)
    find_package(fastrtps REQUIRED)
endif()

if(NOT rpcdds_FOUND)
    find_package(rpcdds REQUIRED)
endif()

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
message(STATUS "Configuring RTPSCalculator libraries...")
set(RTPSCALCULATOR_SOURCES_CXX Calculator.cxx)
set(RTPSCALCULATORCLIENT_SOURCES_CXX CalculatorProxy.cxx)
set(RTPSCALCULATORSERVER_SOURCES_CXX CalculatorServer.cxx)

add_library(CalculatorAsync STATIC ${RTPSCALCULATOR_COMMON_SOURCES_CXX} ${RTPSCALCULATOR_SOURCES_CXX})
target_compile_definitions(CalculatorAsync PRIVATE BOOST_ALL_DYN_LINK EPROSIMA_ALL_DYN_LINK)
target_include_directories(CalculatorAsync PRIVATE ${rpcdds_INCLUDE_DIR} ${Boost_INCLUDE_DIR})
target_link_libraries(CalculatorAsync fastrtps fastcdr)

add_library(CalculatorAsyncClient STATIC ${RTPSCALCULATORCLIENT_SOURCES_CXX})
target_compile_definitions(CalculatorAsyncClient PRIVATE BOOST_ALL_DYN_LINK EPROSIMA_ALL_DYN_LINK)
target_include_directories(CalculatorAsyncClient PRIVATE ${rpcdds_INCLUDE_DIR} ${Boost_INCLUDE_DIR})
target_link_libraries(CalculatorAsyncClient fastrtps fastcdr)

add_library(CalculatorAsyncServer STATIC ${RTPSCALCULATORSERVER_SOURCES_CXX})
target_compile_definitions(CalculatorAsyncServer PRIVATE BOOST_ALL_DYN_LINK EPROSIMA_ALL_DYN_LINK)
target_include_directories(CalculatorAsyncServer PRIVATE ${rpcdds_INCLUDE_DIR} ${Boost_INCLUDE_DIR})
target_link_libraries(CalculatorAsyncServer fastrtps fastcdr)

message(STATUS "Configuring RTPSCalculator Server and Client examples...")
set(RTPSCALCULATORSERVEREXAMPLE_SOURCES_CXX CalculatorServerExample.cxx CalculatorServerImplExample.cxx) 
set(RTPSCALCULATORCLIENTEXAMPLE_SOURCES_CXX CalculatorClientExample.cxx) 

add_executable(CalculatorAsyncServerExample ${RTPSCALCULATORSERVEREXAMPLE_SOURCES_CXX})
target_include_directories(CalculatorAsyncServerExample PRIVATE ${Boost_INCLUDE_DIR})
target_link_libraries(CalculatorAsyncServerExample CalculatorServer Calculator)
target_link_libraries(CalculatorAsyncServerExample rpcdds fastrtps fastcdr ${Boost_LIBRARIES})

install(TARGETS CalculatorAsyncServerExample
    RUNTIME DESTINATION examples/C++/RTPSCalculator/${BIN_INSTALL_DIR})

add_executable(CalculatorAsyncClientExample ${RTPSCALCULATORCLIENTEXAMPLE_SOURCES_CXX})
target_include_directories(CalculatorAsyncClientExample PRIVATE ${Boost_INCLUDE_DIR})
target_link_libraries(CalculatorAsyncClientExample CalculatorClient Calculator)
target_link_libraries(CalculatorAsyncClientExample rpcdds fastrtps fastcdr ${Boost_LIBRARIES})

install(TARGETS CalculatorAsyncClientExample
    RUNTIME DESTINATION examples/C++/RTPSCalculator/${BIN_INSTALL_DIR})
