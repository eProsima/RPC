#!/bin/sh

#NOTES:
# 1. The IDL file must be named "test.idl"

RETURNEDVALUE=1
DDSCS_DIR="D:\richi\workspace\desarrollo\DDS\proyectos\ddscs"
DDSCS_LIBRARY_DIR="${DDSCS_DIR}\idl2ddscs\lib"
ANTLR_DIR="${DDSCS_LIBRARY_DIR}\antlr-2.7.7.jar"
STRINGTEMPLATE_DIR="${DDSCS_LIBRARY_DIR}\stringtemplate-3.2.1.jar"

# Java 1.4.2 in cygwin
JAVA=/cygdrive/c/j2sdk1.4.2_19/bin/java

IDL2DDSCS_OPTS="-ppDisable -language C++"
NDDSHOME_SET=-DNDDSHOME=${NDDSHOME}

function checkReturnedValue
{
    if [ $RETURNEDVALUE = 0 ]; then
        echo "TEST" ${TEST_NAME} "SUCCESSFULLY"
    else
        echo "TESTS FAILED"
        exit $RETURNEDVALUE
    fi
}

function clean
{
    rm -f ${TEST_OUTPUT_DIR}/*.cxx
    rm -f ${TEST_OUTPUT_DIR}/*.h
    rm -f ${TEST_OUTPUT_DIR}/*.sln
    rm -f ${TEST_OUTPUT_DIR}/*.vcproj
    rm -rf ${TEST_OUTPUT_DIR}/objs
    find ${TEST_OUTPUT_DIR} -iname "*.idl" -and -not -iname "test.idl" -exec rm -f {} \;
}

function compile
{
    cmd.exe /C "C:\Program Files (x86)\Microsoft Visual Studio 8\VC\vcvarsall.bat" "&&" cd  $TEST_OUTPUT_DIR "&&" VCBUILD TestGenServer-VS2005.vcproj 
    RETURNEDVALUE=$?

    if [ $RETURNEDVALUE = 0 ]; then
        cmd.exe /C "C:\Program Files (x86)\Microsoft Visual Studio 8\VC\vcvarsall.bat" "&&" cd  $TEST_OUTPUT_DIR "&&" VCBUILD TestGenClient-VS2005.vcproj 
        RETURNEDVALUE=$?
    fi
}

# This tests check IDL2DDSCS when parameter are external directory in relative URL and idl file in relative URL.
function test1
{
    TEST_NAME="Test1"
    TEST_OUTPUT_DIR="utils/pcTests/idl2ddscs/tests1"
    TEST_IDL_FILE="utils/pcTests/idl2ddscs/tests1/test.idl"

    echo Starting $TEST_NAME
    ${JAVA} -classpath "c:\j2sdk1.4.2_19\src.zip;${ANTLR_DIR};${STRINGTEMPLATE_DIR};${DDSCS_LIBRARY_DIR}\idl2ddscs.jar" ${NDDSHOME_SET} com.eprosima.ddscs.idl.IDL2DDSCS ${IDL2DDSCS_OPTS} -d ${TEST_OUTPUT_DIR} ${TEST_IDL_FILE}
    RETURNEDVALUE=$?

    if [ $RETURNEDVALUE = 0 ]; then
        compile
    fi

    clean
    checkReturnedValue
}

# This tests check IDL2DDSCS when parameter are absolute directory in relative URL and idl file in relative URL.
function test2
{
    TEST_NAME="Test2"
    TEST_OUTPUT_DIR="d:/richi/workspace/desarrollo/DDS/proyectos/ddscs/utils/pcTests/idl2ddscs/tests1"
    TEST_IDL_FILE="utils/pcTests/idl2ddscs/tests1/test.idl"

    echo Starting $TEST_NAME
    ${JAVA} -classpath "c:\j2sdk1.4.2_19\src.zip;${ANTLR_DIR};${STRINGTEMPLATE_DIR};${DDSCS_LIBRARY_DIR}\idl2ddscs.jar" ${NDDSHOME_SET} com.eprosima.ddscs.idl.IDL2DDSCS ${IDL2DDSCS_OPTS} -d ${TEST_OUTPUT_DIR} ${TEST_IDL_FILE}
    RETURNEDVALUE=$?

    if [ $RETURNEDVALUE = 0 ]; then
        compile
    fi

    clean
    checkReturnedValue
}

# This tests check IDL2DDSCS when parameter is only idl file in relative URL.
function test3
{
    TEST_NAME="Test3"
    TEST_OUTPUT_DIR="utils/pcTests/idl2ddscs/tests1"
    TEST_IDL_FILE="test.idl"

    echo Starting $TEST_NAME
    cd $TEST_OUTPUT_DIR
    ${JAVA} -classpath "c:\j2sdk1.4.2_19\src.zip;${ANTLR_DIR};${STRINGTEMPLATE_DIR};${DDSCS_LIBRARY_DIR}\idl2ddscs.jar" ${NDDSHOME_SET} com.eprosima.ddscs.idl.IDL2DDSCS ${IDL2DDSCS_OPTS} ${TEST_IDL_FILE}
    cd -
    RETURNEDVALUE=$?

    if [ $RETURNEDVALUE = 0 ]; then
        compile
    fi

    clean
    checkReturnedValue
}

# This tests check IDL2DDSCS when parameter are external directory in relative URL and idl file in absolute URL.
function test4
{
    TEST_NAME="Test4"
    TEST_OUTPUT_DIR="utils/pcTests/idl2ddscs/tests1"
    TEST_IDL_FILE="d:/richi/workspace/desarrollo/DDS/proyectos/ddscs/utils/pcTests/idl2ddscs/tests1/test.idl"

    echo Starting $TEST_NAME
    ${JAVA} -classpath "c:\j2sdk1.4.2_19\src.zip;${ANTLR_DIR};${STRINGTEMPLATE_DIR};${DDSCS_LIBRARY_DIR}\idl2ddscs.jar" ${NDDSHOME_SET} com.eprosima.ddscs.idl.IDL2DDSCS ${IDL2DDSCS_OPTS} -d ${TEST_OUTPUT_DIR} ${TEST_IDL_FILE}
    RETURNEDVALUE=$?

    if [ $RETURNEDVALUE = 0 ]; then
        compile
    fi

    clean
    checkReturnedValue
}

function test5
{
    TEST_NAME="Test5"
    TEST_OUTPUT_DIR="utils/pcTests/idl2ddscs/test5"
    TEST_IDL_FILE="utils/pcTests/idl2ddscs/test5/test.idl"

    echo Starting $TEST_NAME
    ${JAVA} -classpath "c:\j2sdk1.4.2_19\src.zip;${ANTLR_DIR};${STRINGTEMPLATE_DIR};${DDSCS_LIBRARY_DIR}\idl2ddscs.jar" ${NDDSHOME_SET} com.eprosima.ddscs.idl.IDL2DDSCS ${IDL2DDSCS_OPTS} -d ${TEST_OUTPUT_DIR} ${TEST_IDL_FILE}
    RETURNEDVALUE=$?

    if [ $RETURNEDVALUE = 0 ]; then
        compile
    fi

    clean
    checkReturnedValue
}

function test6
{
    TEST_NAME="Test6"
    TEST_OUTPUT_DIR="utils/pcTests/idl2ddscs/test6"
    TEST_IDL_FILE="utils/pcTests/idl2ddscs/test6/test.idl"

    echo Starting $TEST_NAME
    ${JAVA} -classpath "c:\j2sdk1.4.2_19\src.zip;${ANTLR_DIR};${STRINGTEMPLATE_DIR};${DDSCS_LIBRARY_DIR}\idl2ddscs.jar" ${NDDSHOME_SET} com.eprosima.ddscs.idl.IDL2DDSCS ${IDL2DDSCS_OPTS} -d ${TEST_OUTPUT_DIR} ${TEST_IDL_FILE}
    RETURNEDVALUE=$?

    if [ $RETURNEDVALUE = 0 ]; then
        compile
    fi

    clean
    checkReturnedValue
}

echo "Running tests for IDL2DDSCS"

if [ -d ./lib ]; then
    test1
    test2
    test3
    test4
    test5
    test6
else
    echo "Run in ddscs root directory"
fi

if [ $RETURNEDVALUE = 0 ]; then
    echo "TESTS SUCCESSFULLY"
else
    echo "TESTS FAILED"
fi

exit $RETURNEDVALUE
