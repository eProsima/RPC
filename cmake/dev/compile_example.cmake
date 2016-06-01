macro(compile_example example example_directory require_boost)
    if(NOT ((EPROSIMA_INSTALLER OR EPROSIMA_INSTALLER_MINION) AND (MSVC OR MSVC_IDE)))

	get_target_property(${PROJECT_NAME}_INCLUDE_DIR ${PROJECT_NAME} INTERFACE_INCLUDE_DIRECTORIES)
	file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/config/${PROJECT_NAME}Config.cmake
		"set(${PROJECT_NAME}_INCLUDE_DIR ${${PROJECT_NAME}_INCLUDE_DIR})\n"
		"include(\"${PROJECT_BINARY_DIR}/cmake/config/${PROJECT_NAME}Targets.cmake\")\n"
		)

        # Separate CMAKE_PREFIX_PATH
        string(REPLACE ";" "|" CMAKE_PREFIX_PATH_ "${CMAKE_PREFIX_PATH}")
        set(${example}_CMAKE_ARGS
            "-DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_INSTALL_PREFIX}"
            "-DCMAKE_PREFIX_PATH=${CMAKE_CURRENT_BINARY_DIR}/config|${CMAKE_PREFIX_PATH_}"
	    )
        if(require_boot STREQUAL "REQ_BOOST")
    		set(${example}_CMAKE_ARGS ${example}_CMAKE_ARGS
	    	"-DBOOST_ROOT:PATH=${BOOST_ROOT}"
            	"-DBOOST_LIBRARYDIR:PATH=${BOOST_LIBRARYDIR}"
            	"-DBIN_INSTALL_DIR:PATH=${BIN_INSTALL_DIR}") 
	else()
		MESSAGE( STATUS "Skipping Boost Libraries for this  example")
	endif()
	list(APPEND ${example}_CMAKE_ARGS LIST_SEPARATOR "|")

        include(ExternalProject)

        ExternalProject_Add(${example}
            DEPENDS ${PROJECT_NAME}
            CMAKE_GENERATOR "${CMAKE_GENERATOR}"
            CMAKE_ARGS
            ${${example}_CMAKE_ARGS}
            SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/${example_directory}"
            BINARY_DIR "${CMAKE_CURRENT_BINARY_DIR}/${example_directory}"
            INSTALL_COMMAND ""
            )
    endif()
endmacro()
