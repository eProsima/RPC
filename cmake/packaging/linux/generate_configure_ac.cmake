macro(generate_rpcdds_configure_ac)
    if(NOT RPCPROTO STREQUAL "rpcdds")
        message(FATAL_ERROR "Not use macro generate_rpcdds_configure_ac in other protocol than rpcdds")
    endif()
        
    if(WITH_FASTRTPS AND WITH_RTIDDS)
        set(RPCDDS_CONFIGURE_AC_EXTRA "AC_ARG_WITH([fastrtps],
            AS_HELP_STRING([\"--without-fastrtps\"], [\"Disables the compilation against eProsima Fast RTPS\"]))
            
            AS_IF([test \"x\$with_fastrtps\" = \"xno\"],
                [AC_DEFINE([RPC_WITH_FASTRTPS], [0], [Defined if building agaist eProsima Fast RTPS])],
                [AC_CHECK_HEADER([fastrtps/config.h],
                [AC_MSG_NOTICE([Found eProsima Fast RTPS])
                AC_DEFINE([RPC_WITH_FASTRTPS], [1], [Defined if building agaist eProsima Fast RTPS])],
                [AC_MSG_ERROR([Could not find eProsima Fast RTPS])],
                []) LDFLAGS=\"\$LDFLAGS -lfastrtps\"
                ])
            
            AC_ARG_WITH([rtidds],
            AS_HELP_STRING([\"--with-rtidds=[ARG]\"], [\"Enables the compilation against RTI DDS. The argument is the RTI DDS platform [ARG=x64Linux2.6gcc4.4.5]\"]))
            
            AS_IF([test \"x\$with_rtidds\" = \"x\"],
                [AC_DEFINE([RPC_WITH_RTIDDS], [0], [Defined if building agaist RTI DDS])],
                [AC_CHECK_HEADER([\$NDDSHOME/include/ndds/ndds_version.h],
                [AC_MSG_NOTICE([Found RTI DDS])
                AC_DEFINE([RPC_WITH_RTIDDS], [1], [Defined if building agaist RTI DDS])]
                AS_IF([test -d \$NDDSHOME/lib/\$with_rtidds],
                    [],
                    [AC_MSG_ERROR([Directory \$NDDSHOME/lib/\$with_rtidds not found. Use the configure argument --with-rtidds to set the RTI DDS platform])]),
                [AC_MSG_ERROR([Could not find RTI DDS. Set NDDSHOME environment variable])],
                []) LDFLAGS=\"\$LDFLAGS -L\$NDDSHOME/lib/\$with_rtidds -lnddscore -lnddsc -lnddscpp -lpthread -ldl\" CPPFLAGS=\"\$CPPFLAGS -DRTI_UNIX -DRTI_LINUX -I\$NDDSHOME/include -I\$NDDSHOME/include/ndds\"
                ])"
            )
    elseif(WITH_FASTRTPS)
        set(RPCDDS_CONFIGURE_AC_EXTRA "AC_CHECK_HEADER([fastrtps/config.h],
            [AC_MSG_NOTICE([Found eProsima Fast RTPS])
            AC_DEFINE([RPC_WITH_FASTRTPS], [1], [Defined if building agaist eProsima Fast RTPS])],
            [AC_MSG_ERROR([Could not find eProsima Fast RTPS])],
            [])
            LDFLAGS=\"\$LDFLAGS -lfastrtps\"

            AC_DEFINE([RPC_WITH_RTIDDS], [0], [Defined if building agaist RTI DDS])"
            )
    elseif(WITH_RTIDDS)
        set(RPCDDS_CONFIGURE_AC_EXTRA "AC_ARG_WITH([rtidds],
            AS_HELP_STRING([\"--with-rtidds=[ARG]\"], [\"Enables the compilation against RTI DDS. The argument is the RTI DDS platform [ARG=x64Linux2.6gcc4.4.5]. Default:x64Linux2.6gcc4.4.5\"]),
            [], [with_rtidds=x64Linux2.6gcc4.4.5])

            AS_IF([test \"x\$with_rtidds\" = \"x\"],
                [AC_MSG_ERROR([RTI DDS platform not set. Use the configure argument --with-rtidds])],
                [AC_CHECK_HEADER([\$NDDSHOME/include/ndds/ndds_version.h],
                [AC_MSG_NOTICE([Found RTI DDS])
                AC_DEFINE([RPC_WITH_RTIDDS], [1], [Defined if building agaist RTI DDS])]
                AS_IF([test -d \$NDDSHOME/lib/\$with_rtidds],
                    [],
                    [AC_MSG_ERROR([Directory \$NDDSHOME/lib/\$with_rtidds not found. Use the configure argument --with-rtidds to set the RTI DDS platform])]),
                [AC_MSG_ERROR([Could not find RTI DDS. Set NDDSHOME environment variable])],
                [])
                LDFLAGS=\"\$LDFLAGS -L\$NDDSHOME/lib/\$with_rtidds -lnddscore -lnddsc -lnddscpp -lpthread -ldl\" CPPFLAGS=\"\$CPPFLAGS -DRTI_UNIX -DRTI_LINUX -I\$NDDSHOME/include -I\$NDDSHOME/include/ndds\"
                ])
            
            AC_DEFINE([RPC_WITH_FASTRTPS], [0], [Defined if building agaist eProsima Fast RTPS])"
            )
    endif()

    configure_file(${PROJECT_SOURCE_DIR}/configure_${PROJECT_NAME}.ac.in ${PROJECT_BINARY_DIR}/configure_${PROJECT_NAME}.ac)

endmacro()
