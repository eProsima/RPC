if(NOT ((MSVC OR MSVC_IDE) AND EPROSIMA_INSTALLER))
    if(BUILD_JAVA)
        macro(add_env_test_by_topic TEST TEST_NAME BYTOPIC)
            # Check parameters
            set(lib_tag_)
            set(CMAKE_LIBRARIES)
            foreach(arg ${ARGN})
                if("${arg}" STREQUAL "LIB")
                    set(lib_tag_ "true")
                else()
                    if(lib_tag_)
                        set(CMAKE_LIBRARIES ${CMAKE_LIBRARIES} ${arg})
                    else()
                        message(FATAL_ERROR "Bad argument ${arg}")
                    endif()
                endif()
            endforeach()

            #Add test
            add_test(NAME ${TEST}
                COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/run_test.py
                ${TEST_NAME} rti ${BYTOPIC})

            # Set enviroment variables
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

            if(CMAKE_LIBRARIES)
                set_property(TEST ${TEST} APPEND PROPERTY ENVIRONMENT
                    "CMAKE_LIBRARIES=$<JOIN:${CMAKE_LIBRARIES},\\;>")
            endif()

            set_property(TEST ${TEST} APPEND PROPERTY ENVIRONMENT
                "CMAKE_REMOVE_INCLUDE_PREFIX=true")

            # Set NDDSHOME environment variable
            set_property(TEST ${TEST} APPEND PROPERTY ENVIRONMENT
                "NDDSHOME=$ENV{NDDSHOME}")
        endmacro()

        macro(add_env_test TEST)
            add_env_test_by_topic(rpcdds_rti.${TEST}.byInterface ${TEST}
                byInterface ${ARGN})

            add_env_test_by_topic(rpcdds_rti.${TEST}.byOperation ${TEST}
                byOperation ${ARGN})
        endmacro()

        add_env_test(AsyncCallTest)

        add_env_test(BasicTypeTest)

        add_env_test(EnumYStringTest)

        add_env_test(Inheritance)

        add_env_test(MultiInterfacesTest)

        add_env_test(MultithreadTest LIB boost_system boost_thread)

        add_env_test(OnewayCallTest)

        add_env_test(SequenceTest)

        add_env_test(ServerException)

        add_env_test(StructTest)

        add_env_test(TypedefTest)

        add_env_test(UnionTest)

        add_env_test(UserExceptions)

        add_env_test(WANTest)
    endif()
endif()
