include(${PROJECT_SOURCE_DIR}/cmake/dev/compile_example.cmake)
if(RPCPROTO STREQUAL "rpcdds")
	compile_example(RTPSCalculator C++/rpcdds/c++11Types/RTPSCalculator)
endif()


