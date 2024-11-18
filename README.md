# Introduction

This repository contains a set of C++ libraries that provide different [RPC][rpc] communications.

* **eProsima Fast RPC** provides a fast RPC communication using a [modified CDR serialization][fastcdr] over TCP.
* **eProsima RPC over DDS** provides an RPC communication over an OMG DDS implementation. Currently it supports
  [**eProsima Fast DDS**][fastdds] and [RTI DDS][rti] implementations.
* **eProsima RPC over REST** provides an RPC communication over RESTful paradigma.

## Commercial support

Looking for commercial support? Write us to info@eprosima.com

Find more about us at [eProsima’s webpage](https://eprosima.com/).

# Building from sources

This section provides the instructions for installing *eProsima RPC* from sources.
The following packages will be installed:

* `boost_threadpool` is a cross-platform C++ thread pool library.
* `foonathan_memory_vendor`, an STL compatible C++ memory allocator [library](https://github.com/foonathan/memory).
* `fastcdr`, a C++ library that serializes according to the [standard CDR](https://www.omg.org/cgi-bin/doc?formal/02-06-51) serialization mechanism.
* `fastdds`, the core library of *eProsima Fast DDS* library.

First of all, the [software requirements](#requirements) and [software dependencies](#dependencies) detailed below need to be met.
Afterwards, the user can choose whether to follow either the [colcon installation](#colcon-installation)
or the [CMake installation](#cmake-installation) instructions.

## Requirements

### Windows requirements

The installation of *eProsima RPC* in a Windows environment from sources requires the following tools to be
installed in the system:

* [Visual Studio](#visual-studio)
* [Chocolatey](#chocolatey)
* [CMake and other tools](#cmake-and-other-tools)

#### Visual Studio

[Visual Studio](https://visualstudio.microsoft.com/) is required to have a C++ compiler in the system.
For this purpose, make sure to check the `Desktop development with C++` option during the Visual Studio installation
process.

If Visual Studio is already installed but the Visual C++ Redistributable packages are not, open Visual Studio and go to
`Tools` -> `Get Tools and Features` and in the `Workloads` tab enable `Desktop development with C++`.
Finally, click `Modify` at the bottom right.

#### Chocolatey

Chocolatey is a Windows package manager.
It is needed to install some of *eProsima RPC*'s dependencies.
Download and install it directly from the [website](https://chocolatey.org/).

#### CMake and other tools

These packages provide the tools required to install *eProsima RPC* and its dependencies from command line.
Download and install [CMake][cmake], [pip3][pip3], [wget][wget] and [git][git] by following the instructions detailed in the respective
websites.
Once installed, add the path to the executables to the `PATH` from the *Edit the system environment variables* control panel.

## Dependencies

*eProsima RPC* has the following dependencies, when installed from sources in a Windows environment:

* [Asio and TinyXML2 libraries](#asio-and-tinyxml2-libraries)

### Asio and TinyXML2 libraries

Asio is a cross-platform C++ library for network and low-level I/O programming, which provides a consistent
asynchronous model.
TinyXML2 is a simple, small and efficient C++ XML parser.

**Windows**

On Windows, they can be downloaded directly from the links below:

* [Asio](https://github.com/ros2/choco-packages/releases/download/2020-02-24/asio.1.12.1.nupkg>)
* [TinyXML2](https://github.com/ros2/choco-packages/releases/download/2020-02-24/tinyxml2.6.0.0.nupkg)

After downloading these packages, open an administrative shell with *PowerShell* and execute the following command:

```cmd
    choco install -y -s <PATH_TO_DOWNLOADS> asio tinyxml2
```

where `<PATH_TO_DOWNLOADS>` is the folder into which the packages have been downloaded.

## Colcon installation

[colcon][colcon] is a command line tool based on [CMake][cmake] aimed at building sets of software packages.
This section explains how to use it to compile *eProsima RPC* and its dependencies.

**Note:**

    Run colcon within a Visual Studio prompt. To do so, launch a "Developer Command Prompt" from the
    search engine.

1. Install the ROS 2 development tools ([colcon][colcon] and [vcstool][vcstool]) by executing the following command:

   ```cmd
   pip3 install -U colcon-common-extensions vcstool
   ```

   and add the path to the `vcs` executable to the `PATH` from the *Edit the system environment variables* control panel.

   **Note:**

       If this fails due to an Environment Error, add the :code:`--user` flag to the :code:`pip3` installation command.

2. Create a `RPC` directory and download the repos file that will be used to install *eProsima RPC* and its dependencies:

   ```cmd
    mkdir ~\RPC
    cd ~\RPC
    wget https://raw.githubusercontent.com/eProsima/RPC/master/rpc.repos -output rpc.repos
    mkdir src
    vcs import src --input rpc.repos
   ```

   Finally, use [colcon][colcon] to compile all software:

   - Building *eProsima RPC over DDS* use next command:
     ```cmd
     colcon build --cmake-args -DNO_TLS=ON -DRPCPROTO=rpcdds
     ```
### Run an application

When running an instance of an application using *eProsima RPC*, the colcon overlay built in the
dedicated `RPC` directory must be sourced.
There are two possibilities:

* Every time a new shell is opened, prepare the environment locally by typing the
  command:

  ```
  setup.bat
  ```

* Add the sourcing of the colcon overlay permanently, by opening the
  *Edit the system environment variables* control panel, and adding `~/RPC/install/setup.bat`
  to the `PATH`.

## CMake installation

This section explains how to compile *eProsima RPC* with [CMake][cmake], either [locally][#local-installation] or
[globally](#global-installation).

### Local installation

1. Open a command prompt, and create a `RPC` directory where to download and build *eProsima RPC* and
   its dependencies:

   ```cmd
       mkdir ~\RPC
   ```

1. Clone the following dependencies and compile them using [CMake][¢make].

   * [boost_threadpool](https://github.com/eProsima/boost_threadpool)

     ```cmd
     cd ~\RPC
     git clone https://github.com/eProsima/boost_threadpool.git
     cd boost_threadpool
     mkdir build && cd build
     cmake -DCMAKE_INSTALL_PREFIX=~/RPC/install ..
     cmake --build . --target install
     ```

   * RPC depends on [Foonathan memory](https://github.com/foonathan/memory).
     To ease the dependency management, *eProsima* provides a vendor package
     [Foonathan memory vendor](https://github.com/eProsima/foonathan_memory_vendor), which downloads and builds a
     specific revision of *Foonathan memory* if the library is not found in the system.

     ```cmd
     cd ~\RPC
     git clone https://github.com/eProsima/foonathan_memory_vendor.git
     cd foonathan_memory_vendor
     mkdir build && cd build
     cmake -DCMAKE_INSTALL_PREFIX=~/RPC/install ..
     cmake --build . --target install
     ```

   * [Fast CDR][fastcdr]

     ```cmd
     cd ~\RPC
     git clone https://github.com/eProsima/Fast-CDR.git
     cd Fast-CDR
     mkdir build && cd build
     cmake -DCMAKE_INSTALL_PREFIX=~/RPC/install ..
     cmake --build . --target install
     ```

   * [Fast DDS](fastdds)

     ```cmd
     cd ~\RPC
     git clone https://github.com/eProsima/Fast-DDS.git
     cd Fast-DDS
     mkdir build && cd build
     cmake -DNO_TLS=ON -DCMAKE_INSTALL_PREFIX=~/RPC/install ..
     cmake --build . --target install
     ```

1. Once all dependencies are installed, install *eProsima RPC*:

   - Building *eProsima RPC over DDS* use next commands:

     ```cmd
     cd ~\RPC
     [git](git) clone https://github.com/eProsima/RPC.git
     cd RPC
     mkdir build && cd build
     cmake -DRPCPROTO=rpcdds -DCMAKE_INSTALL_PREFIX=~/RPC/install ..
     cmake --build . --target install
     ```

### Global installation

To install *eProsima RPC* system-wide instead of locally, remove the `CMAKE_INSTALL_PREFIX` flags that
appear in the configuration steps.

### Run an application

When running an instance of an application using *eProsima RPC*, it must be linked with the library where the
packages have been installed.
This can be done by opening the *Edit system environment variables* control panel and adding to the `PATH` the *RPC*, *Fast DDS*
and *Fast CDR* installation directories:

*   *RPC*: C:\\Program Files\\rpc
*   *Fast DDS*: C:\\Program Files\\fastdds
*   *Fast CDR*: C:\\Program Files\\fastcdr


[eprosima]: http://www.eprosima.com
[fastcdr]: http://www.github.com/eProsima/Fast-CDR
[fastdds]: http://www.github.com/eProsima/Fast-DDS
[rti]: http://www.rti.com
[rpc]: https://en.wikipedia.org/wiki/Remote_procedure_call
[colcon]: https://colcon.readthedocs.io/en/released/
[cmake]: http://www.cmake.org
[pip3]: https://docs.python.org/3/installing/index.html
[wget]: https://www.gnu.org/software/wget/
[git]: https://git-scm.com/
[vcstool]: https://pypi.org/project/vcstool/
