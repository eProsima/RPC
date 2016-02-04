if(NOT ((MSVC OR MSVC_IDE) AND EPROSIMA_INSTALLER))
    macro(add_env_test_by_topic TEST TEST_NAME BYTOPIC)
        add_test(NAME ${TEST}
            COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/run_test.py
            ${TEST_NAME} rti ${BYTOPIC})

        set_property(TEST ${TEST} PROPERTY ENVIRONMENT
            "CMAKE_JAVA_EXECUTABLE=${Java_JAVA_EXECUTABLE}")
        set_property(TEST ${TEST} APPEND PROPERTY ENVIRONMENT
            "CMAKE_PROJECT_SOURCE_DIR=${PROJECT_SOURCE_DIR}")
        set_property(TEST ${TEST} APPEND PROPERTY ENVIRONMENT
            "CMAKE_CURRENT_SOURCE_DIR=${CMAKE_CURRENT_SOURCE_DIR}")
        set_property(TEST ${TEST} APPEND PROPERTY ENVIRONMENT
            "CMAKE_CURRENT_BINARY_DIR=${CMAKE_CURRENT_BINARY_DIR}")
        set_property(TEST ${TEST} APPEND PROPERTY ENVIRONMENT
            "CMAKE_BUILD_TOOL=${CMAKE_BUILD_TOOL}")

        if(MSVC OR MSVC_IDE)
            set_property(TEST ${TEST} APPEND PROPERTY ENVIRONMENT
                "CMAKE_MSVC_ARCH=${MSVC_ARCH}")
        endif()


        string(REPLACE ";" "\\;" ${PROJECT_NAME}_INCLUDE_DIRS
            "$<TARGET_PROPERTY:${PROJECT_NAME},INTERFACE_INCLUDE_DIRECTORIES>")
        set_property(TEST ${TEST} APPEND PROPERTY ENVIRONMENT
            "CMAKE_INCLUDE_DIRECTORIES=${Boost_INCLUDE_DIR}\\;$<JOIN:$<TARGET_PROPERTY:${PROJECT_NAME},INTERFACE_INCLUDE_DIRECTORIES>,\\;>")

        string(REPLACE ";" "\\;" Boost_LIBRARY_DIRS_ "${Boost_LIBRARY_DIRS}")
        set_property(TEST ${TEST} APPEND PROPERTY ENVIRONMENT
            "CMAKE_LIBRARY_DIRECTORIES=${Boost_LIBRARY_DIRS}\\;$<TARGET_FILE_DIR:${PROJECT_NAME}>\\;$<TARGET_FILE_DIR:fastcdr>")

        set_property(TEST ${TEST} APPEND PROPERTY ENVIRONMENT
            "CMAKE_REMOVE_INCLUDE_PREFIX=true")

        # Set NDDSHOME environment variable
        set_property(TEST ${TEST} APPEND PROPERTY ENVIRONMENT
            "NDDSHOME=$ENV{NDDSHOME}")
    endmacro()

    macro(add_env_test TEST)
        add_env_test_by_topic(rpcdds_rti.${TEST}_byInterface ${TEST} byInterface)

        add_env_test_by_topic(rpcdds_rti.${TEST}_byOperation ${TEST} byOperation)
    endmacro()

    add_env_test(AsyncCallTest)

    add_env_test(BasicTypeTest)

    add_env_test(EnumYStringTest)

    add_env_test(Inheritance)

    add_env_test(MultiInterfacesTest)

    add_env_test(MultithreadTest)

    add_env_test(OnewayCallTest)

    add_env_test(SequenceTest)

    add_env_test(ServerException)

    add_env_test(StructTest)

    add_env_test(TypedefTest)

    add_env_test(UnionTest)

    add_env_test(UserExceptions)

    add_env_test(WANTest)
endif()
