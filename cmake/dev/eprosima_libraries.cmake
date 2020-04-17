macro(check_threadpool)
    # Verify thirdparty
    message(STATUS "Checking boost-threadpool thirdparty...")
    execute_process(COMMAND git submodule update --recursive --init thirdparty/boost-threadpool
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
        RESULT_VARIABLE EXECUTE_RESULT
        )

    if(NOT EXECUTE_RESULT EQUAL 0)
        message(FATAL_ERROR "Failed updating Git submodule boost-threadpool")
    endif()
endmacro()
