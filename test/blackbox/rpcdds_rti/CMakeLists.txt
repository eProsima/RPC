macro(add_env_test TEST)
    add_test(NAME ${TEST}
        COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/run_test.py ${TEST})

    set_tests_properties(AsyncCallTest PROPERTIES ENVIRONMENT
        "PROJECT_SOURCE_DIR=${PROJECT_SOURCE_DIR}")
endmacro()

add_env_test(AsyncCallTest)

