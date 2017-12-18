# - Open Porous Media Initiative shared infrastructure config mode
#
# Defines the following variables:
#  opm-common_FOUND        - true
#  opm-common_VERSION      - version of the opm-common library found, e.g. 0.2
#  opm-common_DEFINITIONS  - defines to be made on the command line
#  opm-common_INCLUDE_DIRS - header directories with which to compile
#  opm-common_LINKER_FLAGS - flags that must be passed to the linker
#  opm-common_LIBRARIES    - names of the libraries with which to link
#  opm-common_LIBRARY_DIRS - directories in which the libraries are situated
#
# You should put lines like this in your CMakeLists.txt
#  set (opm-common_DIR "${PROJECT_BINARY_DIR}/../opm-common" CACHE LOCATION "Build tree of opm-common")
#  find_package (opm-common)
#  configure_vars (
#    FILE  CXX  "${PROJECT_BINARY_DIR}/config.h"
#    WRITE ${opm-common_CONFIG_VARS}
#    )

# <http://www.vtk.org/Wiki/CMake/Tutorials/How_to_create_a_ProjectConfig.cmake_file>

# Prevent multiple inclusions
if(NOT opm-common_FOUND)

  # propagate these properties from one build system to the other
  set (opm-common_VERSION "2018.04")
  set (opm-common_DEFINITIONS "")
  set (opm-common_INCLUDE_DIRS "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/include;/usr/include")
  set (opm-common_LIBRARY_DIRS "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu")
  set (opm-common_LINKER_FLAGS "-Wl,--enable-new-dtags")
  set (opm-common_CONFIG_VARS "HAS_ATTRIBUTE_UNUSED")

  # libraries come from the build tree where this file was generated
  set (opm-common_LIBRARY "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmcommon.a")
  set (opm-common_LIBRARIES ${opm-common_LIBRARY} "-lpthread;/usr/lib/x86_64-linux-gnu/libboost_system.so")
  mark_as_advanced (opm-common_LIBRARY)

  # not all projects have targets; conditionally add this part
  if (NOT "opmcommon" STREQUAL "")
    # add the library as a target, so that other things in the project including
    # this file may depend on it and get rebuild if this library changes.
    add_library (opmcommon UNKNOWN IMPORTED)
    set_property (TARGET opmcommon PROPERTY IMPORTED_LOCATION "${opm-common_LIBRARY}")
  endif (NOT "opmcommon" STREQUAL "")

  # ensure that we build with support for C++11 to preserve ABI
  string (REPLACE "-std=c++14" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
  string (REPLACE "" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
  string (STRIP "${CMAKE_CXX_FLAGS}" CMAKE_CXX_FLAGS)
  set (CMAKE_CXX_FLAGS "-std=c++14 ${CMAKE_CXX_FLAGS}")

  # same as above, but for C99
  string (REPLACE "-std=c99" "" CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
  string (STRIP "${CMAKE_C_FLAGS}" CMAKE_C_FLAGS)
  set (CMAKE_C_FLAG "-std=c99 ${CMAKE_C_FLAGS}")

  # build with OpenMP if that was found
  if (NOT "" STREQUAL "")
    string (REPLACE "" "" CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
    string (STRIP "${CMAKE_C_FLAGS}" CMAKE_C_FLAGS)
    set (CMAKE_C_FLAG " ${CMAKE_C_FLAGS}")
  endif (NOT "" STREQUAL "")
  if (NOT "" STREQUAL "")
    string (REPLACE "" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
    string (STRIP "${CMAKE_CXX_FLAGS}" CMAKE_CXX_FLAGS)
    set (CMAKE_C_FLAG " ${CMAKE_CXX_FLAGS}")
  endif (NOT "" STREQUAL "")

  # this is the contents of config.h as far as our probes can tell:

  # extra code
  set(OPM_MACROS_ROOT /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/share/opm)
                                       list(APPEND CMAKE_MODULE_PATH ${OPM_MACROS_ROOT}/cmake/Modules)
endif()
if (DEFINED HAS_ATTRIBUTE_UNUSED AND NOT "${HAS_ATTRIBUTE_UNUSED}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAS_ATTRIBUTE_UNUSED}\" of variable \"HAS_ATTRIBUTE_UNUSED\"")
endif ()
set (HAS_ATTRIBUTE_UNUSED "1")
