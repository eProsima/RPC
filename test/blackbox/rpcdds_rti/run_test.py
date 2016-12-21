#!/usr/bin/python3

import os
import sys
import platform
import shutil
from subprocess import check_call, Popen
from time import sleep

def get_options():
    global java_executable, project_source_dir, current_source_dir, current_binary_dir, build_tool, example
    global output_dir, code_dir, datadir, setinclude

    datadir = "/fastrpcgen/share/rpcdds"
    setinclude = False

    # Get environment variables

    java_executable = os.environ.get("CMAKE_JAVA_EXECUTABLE")
    # Set default value
    if java_executable == None:
        java_executable = "java"

    project_source_dir = os.environ.get("CMAKE_PROJECT_SOURCE_DIR")
    if project_source_dir == None:
        project_source_dir = os.environ.get("RPCDDSHOME")
        if project_source_dir != None:
            datadir = "/share/rpcdds"
            setinclude = True
        else:
            raise RuntimeError("Project source directory not specified. Use RPCDDSHOME environment variable")

    current_source_dir = os.environ.get("CMAKE_CURRENT_SOURCE_DIR")
    if current_source_dir == None:
        current_source_dir = os.path.dirname(os.path.realpath(__file__))

    current_binary_dir = os.environ.get("CMAKE_CURRENT_BINARY_DIR")
    if current_binary_dir == None:
        current_binary_dir = os.getcwd() + "/build"

    build_tool = os.environ.get("CMAKE_BUILD_TOOL")
    if build_tool == None:
        if platform.system() == "Linux":
            build_tool = "make"
        elif platform.system() == "Windows":
            build_tool = "msbuild.exe"
        else:
            print("Operation system not supported by this tests")
            sys.exit()

    if platform.system() == "Linux":
        if platform.architecture()[0] == "64bit":
            example = "x64Linux2.6gcc4.4.5"
        else:
            example = "i86Linux2.6gcc4.4.5"
    elif platform.system() == "Windows":
        example = os.environ.get("CMAKE_MSVC_ARCH")
        if example == None:
            example = "i86Win32VS2013"
    else:
        print("Operation system not supported by this tests")
        sys.exit()


    # Get parameters
    if len(sys.argv) != 4:
        print("Bad number parameters")
        exit()

    #TODO Opcion de listar los tests que puede ejecutar y opcion --help
    global test_name, types, topic
    test_name = sys.argv[1]
    types = sys.argv[2]
    topic = sys.argv[3]

    # Generate internal values
    output_dir = current_binary_dir + "/" + test_name + "_output"
    code_dir = current_source_dir + "/" + test_name

    # Check NDDSHOME
    if os.environ.get("NDDSHOME") == None:
        raise RuntimeError("NDDSHOME not specified. Use NDDSHOME environment variable")

def make_dirs():
    # Create directory
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)

def remove_dirs():
    pass
    # Remove directory
    if os.path.exists(output_dir):
        shutil.rmtree(output_dir, True)

def generate_code():
    # Call generator
    envvars = os.environ.copy()
    if setinclude == True:
        envvars["CMAKE_INCLUDE_DIRECTORIES"] = project_source_dir + "/include/rpcdds"

    check_call([java_executable, "-jar", project_source_dir + datadir + "/rpcddsgen.jar", "-local", "-replace", 
        "-types", types, "-topicGeneration", topic, "-d", output_dir, "-example", example,
        "-datadir", project_source_dir + datadir,
        current_source_dir + "/" + test_name + "/" + test_name + ".idl"], env=envvars)

def copy_code():
    files = os.listdir(code_dir)

    for filename in files:
        full_filename = os.path.join(code_dir, filename)
        if os.path.isfile(full_filename):
            shutil.copy(full_filename, output_dir)

def compile_code():
    if platform.system() == "Linux":
        #TODO Remove
        #make_env = os.environ.copy()
        #make_env["RPCDDSHOME"] = project_source_dir
        check_call([build_tool, "-f", "makefile_" + example], cwd=output_dir)

def execute_test():
    retvalue = -1
    envvars = os.environ.copy()

    if platform.system() == "Linux":
        libdir = envvars.get("CMAKE_LIBRARY_DIRECTORIES")
        if libdir != None:
            envvars["LD_LIBRARY_PATH"] =  envvars["NDDSHOME"] + "/lib/" + example + ":" + libdir.replace(";", ":")
        else:
            envvars["LD_LIBRARY_PATH"] = envvars["NDDSHOME"] + "/lib/" + example + ":" + project_source_dir + "/lib"

    # Run server
    server = Popen([output_dir + "/bin/" + example  + "/" + test_name + "ServerExample"], env=envvars)

    # Wait 5 seconds before run client
    sleep(5) 

    client = Popen([output_dir + "/bin/" + example  + "/" + test_name + "ClientExample"], env=envvars)
    client.wait()
    client.communicate()
    retvalue = client.returncode

    server.kill()

    return retvalue

if __name__ == "__main__":
    get_options()
    make_dirs()
    try:
        generate_code()
        copy_code()
        compile_code()
        sys.exit(execute_test())
    finally:
        remove_dirs()

    sys.exit(-1)
