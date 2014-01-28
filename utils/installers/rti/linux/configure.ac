AC_INIT([RPC over REST], [VERSION], [support@eprosima.com], [rpcdds], [http://eprosima.com/])
AC_PREREQ([2.59])
AC_CHECK_HEADER([$NDDSHOME/include/ndds/ndds_version.h],
	[AC_MSG_NOTICE([Found RTI DDS])],
	[AC_MSG_ERROR([Could not find RTI DDS. Set NDDSHOME environment variable])],
	[])
AM_INIT_AUTOMAKE([1.10 no-define foreign])
AC_PROG_CXX
LT_INIT
AC_CONFIG_FILES([Makefile include/Makefile])

# Check endianess
AC_C_BIGENDIAN(
  AC_DEFINE(__BIG_ENDIAN__, 1, [machine is bigendian]),
  AC_DEFINE(__LITTLE_ENDIAN__, 1, [machine is littleendian]),
  AC_MSG_ERROR(unknown endianess),
  AC_MSG_ERROR(universial endianess not supported)
)

AC_OUTPUT
