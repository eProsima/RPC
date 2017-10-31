macro(find_eprosima_package package)
    if(NOT (EPROSIMA_INSTALLER AND (MSVC OR MSVC_IDE)))
        if(THIRDPARTY)
            set(LIST_OF_OPTIONS "")
            set(next_is_option FALSE)
            foreach(arg ${ARGN})
                if(next_is_option)
                    set(next_is_option FALSE)
                    list(APPEND LIST_OF_OPTIONS "-D${arg}=ON")
                elseif("${arg}" STREQUAL "OPTION")
                    set(next_is_option TRUE)
                endif()
            endforeach()

            set(EPROSIMA_PACKAGE_EXTERNAL_DIR "" CACHE STRING "External directory to compile eprosima libraries")

            if("${EPROSIMA_PACKAGE_EXTERNAL_DIR}" STREQUAL "")
                set(${package}ExternalDir ${PROJECT_BINARY_DIR}/external/${package})
                set(EPROSIMA_PACKAGE_EXTERNAL_DIR ${PROJECT_BINARY_DIR}/external)
            else()
                set(${package}ExternalDir ${EPROSIMA_PACKAGE_EXTERNAL_DIR}/${package})
            endif()

            if(NOT EXISTS "${${package}ExternalDir}/cmake_install.cmake")
                if(MINION)
                    set(CMAKE_INSTALL_PREFIX_ "${CMAKE_INSTALL_PREFIX}")
                else()
                    set(CMAKE_INSTALL_PREFIX_ "${PROJECT_BINARY_DIR}/external/install")
                endif()

                # Separate CMAKE_PREFIX_PATH
                string(REPLACE ";" "|" CMAKE_PREFIX_PATH_ "${CMAKE_PREFIX_PATH}")
                set(${package}_CMAKE_ARGS
                    "\${SOURCE_DIR_}"
                    "\${GENERATOR_}"
                    "-DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}"
                    "-DCMAKE_CXX_COMPILER_LAUNCHER=${CMAKE_CXX_COMPILER_LAUNCHER}"
                    ${LIST_OF_OPTIONS}
                    "-DMINION=ON"
                    "-DEPROSIMA_INSTALLER_MINION=${EPROSIMA_INSTALLER_MINION}"
                    "-DBIN_INSTALL_DIR:PATH=${BIN_INSTALL_DIR}"
                    "-DINCLUDE_INSTALL_DIR:PATH=${INCLUDE_INSTALL_DIR}"
                    "-DLIB_INSTALL_DIR:PATH=${LIB_INSTALL_DIR}"
                    "-DLICENSE_INSTALL_DIR:PATH=licenses"
                    "\${CMAKE_INSTALL_PREFIX_}"
                    "\${CMAKE_PREFIX_PATH_}"
                    "\${EPROSIMA_PACKAGE_EXTERNAL_DIR_}"
                    )
                list(APPEND ${package}_CMAKE_ARGS LIST_SEPARATOR "|")

                file(MAKE_DIRECTORY ${${package}ExternalDir})
                file(WRITE ${${package}ExternalDir}/CMakeLists.txt
                    "cmake_minimum_required(VERSION 2.8.11)\n"
                    "include(ExternalProject)\n"
                    "set(SOURCE_DIR_ \"${PROJECT_SOURCE_DIR}/thirdparty/${package}\")\n"
                    "set(GENERATOR_ -G \"${CMAKE_GENERATOR}\")\n"
                    "set(CMAKE_INSTALL_PREFIX_ \"-DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_INSTALL_PREFIX_}\")\n"
                    "set(CMAKE_PREFIX_PATH_ -DCMAKE_PREFIX_PATH=\"${CMAKE_PREFIX_PATH_}\")\n"
                    "set(EPROSIMA_PACKAGE_EXTERNAL_DIR_ -DEPROSIMA_PACKAGE_EXTERNAL_DIR=\"${EPROSIMA_PACKAGE_EXTERNAL_DIR}\")\n"
                    "ExternalProject_Add(${package}\n"
                    "CONFIGURE_COMMAND \"${CMAKE_COMMAND}\"\n"
                    "${${package}_CMAKE_ARGS}\n"
                    "DOWNLOAD_COMMAND echo\n"
                    "UPDATE_COMMAND cd \"${PROJECT_SOURCE_DIR}\" && git submodule update --recursive --init \"thirdparty/${package}\"\n"
                    "SOURCE_DIR \${SOURCE_DIR_}\n"
                    "BINARY_DIR \"${${package}ExternalDir}/build\"\n"
                    ")\n")

                if(NOT "$ENV{CMAKE_MAKEFLAGS}" STREQUAL "")
                    set(ENV{MAKEFLAGS} "$ENV{CMAKE_MAKEFLAGS}")
                endif()

                execute_process(COMMAND ${CMAKE_COMMAND}
                    -G ${CMAKE_GENERATOR}
                    WORKING_DIRECTORY ${${package}ExternalDir}
                    RESULT_VARIABLE EXECUTE_RESULT
                    )

                if(NOT EXECUTE_RESULT EQUAL 0)
                    message(FATAL_ERROR "Cannot configure Git submodule ${package}")
                endif()

                if(MSVC OR MSVC_IDE)
                    if("${CMAKE_BUILD_TYPE}" MATCHES "^([Dd][Ed][Bb][Uu][Gg])$")
                        set(BUILD_TYPE_GENERATION "Release")
                    else()
                        set(BUILD_TYPE_GENERATION ${CMAKE_BUILD_TYPE})
                    endif()

                    execute_process(COMMAND ${CMAKE_COMMAND} --build . --config Debug
                        WORKING_DIRECTORY ${${package}ExternalDir}
                        RESULT_VARIABLE EXECUTE_RESULT
                        )

                    if(NOT EXECUTE_RESULT EQUAL 0)
                        message(FATAL_ERROR "Cannot build Git submodule ${package} in debug mode")
                    endif()

                    execute_process(COMMAND ${CMAKE_COMMAND} --build . --config ${BUILD_TYPE_GENERATION} 
                        WORKING_DIRECTORY ${${package}ExternalDir}
                        RESULT_VARIABLE EXECUTE_RESULT
                        )

                    if(NOT EXECUTE_RESULT EQUAL 0)
                        message(FATAL_ERROR "Cannot build Git submodule ${package} in ${BUILD_TYPE_GENERATION} mode")
                    endif()
                else()
                    execute_process(COMMAND ${CMAKE_COMMAND} --build .
                        WORKING_DIRECTORY ${${package}ExternalDir}
                        RESULT_VARIABLE EXECUTE_RESULT
                        )

                    if(NOT EXECUTE_RESULT EQUAL 0)
                        message(FATAL_ERROR "Cannot build Git submodule ${package}")
                    endif()
                endif()
            endif()

            set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${CMAKE_INSTALL_PREFIX_})
        endif()

        find_package(${package} QUIET)

        if(${package}_FOUND)
            message(STATUS "${package} library found...")
        else()
            message(STATUS "${package} library not found...")
        endif()

    endif()
endmacro()

macro(install_eprosima_libraries)
    if((MSVC OR MSVC_IDE) AND THIRDPARTY AND NOT MINION)
        if(EPROSIMA_INSTALLER)
            # Install includes. Take from x64Win64VS2013
            install(DIRECTORY ${PROJECT_BINARY_DIR}/eprosima_installer/x64Win64VS2013/install/${INCLUDE_INSTALL_DIR}/
                DESTINATION ${INCLUDE_INSTALL_DIR}
                COMPONENT headers
                OPTIONAL
                )

            # Install licenses. Take from x64Win64VS2013
            install(DIRECTORY ${PROJECT_BINARY_DIR}/eprosima_installer/x64Win64VS2013/install/licenses/
                DESTINATION ${LICENSE_INSTALL_DIR}
                COMPONENT licenses
                OPTIONAL
                )
        else()
            if("${CMAKE_BUILD_TYPE}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
                set(BUILD_TYPE_INSTALLATION "Release")
            else()
                set(BUILD_TYPE_INSTALLATION ${CMAKE_BUILD_TYPE})
            endif()

            # Install includes
            install(DIRECTORY ${PROJECT_BINARY_DIR}/external/install/${INCLUDE_INSTALL_DIR}/
                DESTINATION ${INCLUDE_INSTALL_DIR}
                COMPONENT headers
                OPTIONAL
                )

            # Install libraries
            install(DIRECTORY ${PROJECT_BINARY_DIR}/external/install/${BIN_INSTALL_DIR}/
                DESTINATION ${BIN_INSTALL_DIR}
                COMPONENT libraries_${MSVC_ARCH}
                CONFIGURATIONS Debug
                OPTIONAL
                FILES_MATCHING
                PATTERN "*d.*"
                PATTERN "*d-*.*"
                )

            install(DIRECTORY ${PROJECT_BINARY_DIR}/external/install/${BIN_INSTALL_DIR}/
                DESTINATION ${BIN_INSTALL_DIR}
                COMPONENT libraries_${MSVC_ARCH}
                CONFIGURATIONS Release
                OPTIONAL
                FILES_MATCHING
                PATTERN "*"
                PATTERN "*d.*" EXCLUDE
                PATTERN "*d-*.*" EXCLUDE
                )

            install(DIRECTORY ${PROJECT_BINARY_DIR}/external/install/${LIB_INSTALL_DIR}/
                DESTINATION ${LIB_INSTALL_DIR}
                COMPONENT libraries_${MSVC_ARCH}
                CONFIGURATIONS Debug
                OPTIONAL
                FILES_MATCHING
                PATTERN "*d.*"
                PATTERN "*d-*.*"
                )

            install(DIRECTORY ${PROJECT_BINARY_DIR}/external/install/${LIB_INSTALL_DIR}/
                DESTINATION ${LIB_INSTALL_DIR}
                COMPONENT libraries_${MSVC_ARCH}
                CONFIGURATIONS Release
                OPTIONAL
                FILES_MATCHING
                PATTERN "*"
                PATTERN "*d.*" EXCLUDE
                PATTERN "*d-*.*" EXCLUDE
                )

            # Install licenses
            install(DIRECTORY ${PROJECT_BINARY_DIR}/external/install/licenses/
                DESTINATION ${LICENSE_INSTALL_DIR}
                COMPONENT licenses
                OPTIONAL
                )
        endif()
    elseif(UNIX AND THIRDPARTY AND NOT MINION AND NOT EPROSIMA_INSTALLER)
        # Install includes
        install(DIRECTORY ${PROJECT_BINARY_DIR}/external/install/${INCLUDE_INSTALL_DIR}/
            DESTINATION ${INCLUDE_INSTALL_DIR}
            COMPONENT headers
            OPTIONAL
            )

        # Install libraries
        install(DIRECTORY ${PROJECT_BINARY_DIR}/external/install/${LIB_INSTALL_DIR}/
            DESTINATION ${LIB_INSTALL_DIR}
            USE_SOURCE_PERMISSIONS
            COMPONENT libraries
            )

        # Install licenses
        install(DIRECTORY ${PROJECT_BINARY_DIR}/external/install/licenses/
            DESTINATION ${LICENSE_INSTALL_DIR}
            COMPONENT licenses
            OPTIONAL
            )
    endif()
endmacro()

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


