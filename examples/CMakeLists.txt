include(${PROJECT_SOURCE_DIR}/cmake/dev/compile_example.cmake)
if(RPCPROTO STREQUAL "rpcdds")
	file(COPY ${PROJECT_SOURCE_DIR}/include/ DESTINATION ${PROJECT_BINARY_DIR}/include/rpcdds/) 

    if(WITH_FASTRTPS)
        compile_example(RTPSCalculator C++/rpcdds/c++11Types/RTPSCalculator BOOST_NOT_REQUIRED)
        compile_example(RTPSCalculatorAsync C++/rpcdds/c++11Types/RTPSCalculatorAsync BOOST_NOT_REQUIRED)
    endif()
endif()
