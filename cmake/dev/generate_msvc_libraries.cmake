macro(generate_msvc_libraries platform)
    string(SUBSTRING "${platform}" 0 8 arch_)
    string(SUBSTRING "${platform}" 8 -1 vstool_)
    string(COMPARE EQUAL "${arch_}" "x64Win64" IS_X64)
    string(COMPARE EQUAL "${vstool_}" "VS2013" IS_VS2013)
    string(COMPARE EQUAL "${vstool_}" "VS2015" IS_VS2015)
    string(COMPARE EQUAL "${vstool_}" "VS2017" IS_VS2017)
    string(SUBSTRING "${CMAKE_GENERATOR}" 0 21 generator_)

    if(IS_X64)
        set(generator_ "${generator_} Win64")
    endif()

    if(IS_VS2013)
        set(toolset_ "v120")
    elseif(IS_VS2015)
        set(toolset_ "v140")
    elseif(IS_VS2017)
        set(toolset_ "v141")
    else()
        message(FATAL_ERROR "Lexical error defining platform. Trying to use platform \"${platform}\"")
    endif()

    add_custom_target(${PROJECT_NAME}_${platform}_dir
        COMMAND ${CMAKE_COMMAND} -E make_directory "${PROJECT_BINARY_DIR}/eprosima_installer/${platform}"
        )

    add_custom_target(${PROJECT_NAME}_${platform}_dir_static
        COMMAND ${CMAKE_COMMAND} -E make_directory "${PROJECT_BINARY_DIR}/eprosima_installer/${platform}_static")

    set(_USE_FASTRTPS "")
    set(_USE_RTIDDS "")
    if(RPCPROTO STREQUAL "rpcdds")
        set(_USE_FASTRTPS "-DWITH_FASTRTPS=${WITH_FASTRTPS}")
        set(_USE_RTIDDS "-DWITH_RTIDDS=${WITH_RTIDDS}")
    endif()

    add_custom_target(${PROJECT_NAME}_${platform} ALL
        COMMAND ${CMAKE_COMMAND} -G "${generator_}" -T "${toolset_}" -DEPROSIMA_BUILD=ON -DEPROSIMA_INSTALLER_MINION=ON -DCMAKE_INSTALL_PREFIX=${PROJECT_BINARY_DIR}/eprosima_installer/${platform}/install -DRPCPROTO=${RPCPROTO} ${_USE_FASTRTPS} ${_USE_RTIDDS} ${PROJECT_SOURCE_DIR}
        COMMAND ${CMAKE_COMMAND} --build . --target install --config Release
        COMMAND ${CMAKE_COMMAND} --build . --target install --config Debug
        WORKING_DIRECTORY ${PROJECT_BINARY_DIR}/eprosima_installer/${platform}
        )

    add_custom_target(${PROJECT_NAME}_${platform} ALL
        COMMAND ${CMAKE_COMMAND} -G "${generator_}" -T "${toolset_}" -DBUILD_SHARED_LIBS=OFF -DEPROSIMA_BUILD=ON -DEPROSIMA_INSTALLER_MINION=ON -DCMAKE_INSTALL_PREFIX=${PROJECT_BINARY_DIR}/eprosima_installer/${platform}/install -DRPCPROTO=${RPCPROTO} ${_USE_FASTRTPS} ${_USE_RTIDDS} ${PROJECT_SOURCE_DIR}
        COMMAND ${CMAKE_COMMAND} --build . --target install --config Release
        COMMAND ${CMAKE_COMMAND} --build . --target install --config Debug
        WORKING_DIRECTORY ${PROJECT_BINARY_DIR}/eprosima_installer/${platform}
        )

    add_dependencies(${PROJECT_NAME}_${platform} ${PROJECT_NAME}_${platform}_dir)
    add_dependencies(${PROJECT_NAME}_${platform}_static ${PROJECT_NAME}_${platform}_dir_static)
endmacro()

macro(install_msvc_libraries platform)
    install(DIRECTORY ${PROJECT_BINARY_DIR}/eprosima_installer/${platform}/install/${BIN_INSTALL_DIR}/
        DESTINATION ${BIN_INSTALL_DIR}
        COMPONENT libraries_${platform}
        )

    install(DIRECTORY ${PROJECT_BINARY_DIR}/eprosima_installer/${platform}/install/${LIB_INSTALL_DIR}/
        DESTINATION ${LIB_INSTALL_DIR}
        COMPONENT libraries_${platform}
        )

    install(DIRECTORY ${PROJECT_BINARY_DIR}/eprosima_installer/${platform}/install/${DATA_INSTALL_DIR}/${PROJECT_NAME}/cmake
        DESTINATION ${DATA_INSTALL_DIR}/${PROJECT_NAME}
        COMPONENT cmake
        )

    string(TOUPPER "${platform}" ${platform}_UPPER)
    set(CPACK_COMPONENT_LIBRARIES_${${platform}_UPPER}_DISPLAY_NAME "${platform}" PARENT_SCOPE)
    set(CPACK_COMPONENT_LIBRARIES_${${platform}_UPPER}_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} libraries for platform ${platform}" PARENT_SCOPE)
    set(CPACK_COMPONENT_LIBRARIES_${${platform}_UPPER}_GROUP "Libraries" PARENT_SCOPE)
endmacro()
