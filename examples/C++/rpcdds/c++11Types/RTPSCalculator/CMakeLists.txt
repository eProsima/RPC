cmake_minimum_required(VERSION 3.20)

project("RTPSCalculator")

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

set(RTPSCALCULATOR_COMMON_SOURCES_CXX CalculatorTopicsPlugin.cxx CalculatorTopics.cxx CalculatorTopicsv1.cxx CalculatorDDSProtocol.cxx CalculatorDDSAsyncSupport.cxx)
message(STATUS "Configuring RTPSCalculator libraries...")
set(RTPSCALCULATOR_SOURCES_CXX Calculator.cxx Calculatorv1.cxx)
set(RTPSCALCULATORCLIENT_SOURCES_CXX CalculatorProxy.cxx)
set(RTPSCALCULATORSERVER_SOURCES_CXX CalculatorServer.cxx)

add_library(Calculator STATIC ${RTPSCALCULATOR_COMMON_SOURCES_CXX} ${RTPSCALCULATOR_SOURCES_CXX})
target_compile_definitions(Calculator PRIVATE BOOST_ALL_DYN_LINK EPROSIMA_ALL_DYN_LINK)
target_include_directories(Calculator PRIVATE ${rpcdds_INCLUDE_DIR} ${Boost_INCLUDE_DIR})
target_link_libraries(Calculator fastcdr fastrtps)

add_library(CalculatorClient STATIC ${RTPSCALCULATORCLIENT_SOURCES_CXX})
target_compile_definitions(CalculatorClient PRIVATE BOOST_ALL_DYN_LINK EPROSIMA_ALL_DYN_LINK)
target_include_directories(CalculatorClient PRIVATE ${rpcdds_INCLUDE_DIR} ${Boost_INCLUDE_DIR})
target_link_libraries(CalculatorClient fastcdr fastrtps)

add_library(CalculatorServer STATIC ${RTPSCALCULATORSERVER_SOURCES_CXX})
target_compile_definitions(CalculatorServer PRIVATE BOOST_ALL_DYN_LINK EPROSIMA_ALL_DYN_LINK)
target_include_directories(CalculatorServer PRIVATE ${rpcdds_INCLUDE_DIR} ${Boost_INCLUDE_DIR})
target_link_libraries(CalculatorServer fastcdr fastrtps)

message(STATUS "Configuring RTPSCalculator Server and Client examples...")
set(RTPSCALCULATORSERVEREXAMPLE_SOURCES_CXX CalculatorServerExample.cxx CalculatorServerImplExample.cxx)
set(RTPSCALCULATORCLIENTEXAMPLE_SOURCES_CXX CalculatorClientExample.cxx)

add_executable(CalculatorServerExample ${RTPSCALCULATORSERVEREXAMPLE_SOURCES_CXX})
target_include_directories(CalculatorServerExample PRIVATE ${Boost_INCLUDE_DIR})
target_link_libraries(CalculatorServerExample CalculatorServer Calculator)
target_link_libraries(CalculatorServerExample rpcdds fastrtps fastcdr ${Boost_LIBRARIES})

install(TARGETS CalculatorServerExample
    RUNTIME DESTINATION examples/C++/RTPSCalculator/${BIN_INSTALL_DIR})

add_executable(CalculatorClientExample ${RTPSCALCULATORCLIENTEXAMPLE_SOURCES_CXX})
target_include_directories(CalculatorClientExample PRIVATE ${Boost_INCLUDE_DIR})
target_link_libraries(CalculatorClientExample CalculatorClient Calculator)
target_link_libraries(CalculatorClientExample rpcdds fastrtps fastcdr ${Boost_LIBRARIES})

install(TARGETS CalculatorClientExample
    RUNTIME DESTINATION examples/C++/RTPSCalculator/${BIN_INSTALL_DIR})
