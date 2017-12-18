# - Open Porous Media Initiative File Parser Library config mode
#
# Defines the following variables:
#  opm-output_FOUND        - true
#  opm-output_VERSION      - version of the opm-output library found, e.g. 0.2
#  opm-output_DEFINITIONS  - defines to be made on the command line
#  opm-output_INCLUDE_DIRS - header directories with which to compile
#  opm-output_LINKER_FLAGS - flags that must be passed to the linker
#  opm-output_LIBRARIES    - names of the libraries with which to link
#  opm-output_LIBRARY_DIRS - directories in which the libraries are situated
#
# You should put lines like this in your CMakeLists.txt
#  set (opm-output_DIR "${PROJECT_BINARY_DIR}/../opm-output" CACHE LOCATION "Build tree of opm-output")
#  find_package (opm-output)
#  configure_vars (
#    FILE  CXX  "${PROJECT_BINARY_DIR}/config.h"
#    WRITE ${opm-output_CONFIG_VARS}
#    )

# <http://www.vtk.org/Wiki/CMake/Tutorials/How_to_create_a_ProjectConfig.cmake_file>

# Prevent multiple inclusions
if(NOT opm-output_FOUND)

  # propagate these properties from one build system to the other
  set (opm-output_VERSION "2018.04")
  set (opm-output_DEFINITIONS "")
  set (opm-output_INCLUDE_DIRS "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/include;/usr/include;/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/include")
  set (opm-output_LIBRARY_DIRS "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu")
  set (opm-output_LINKER_FLAGS "-Wl,--enable-new-dtags")
  set (opm-output_CONFIG_VARS "HAS_ATTRIBUTE_UNUSED;HAVE_OPM_PARSER;HAVE_REGEX;HAVE_ERT;HAVE_ERT")

  # libraries come from the build tree where this file was generated
  set (opm-output_LIBRARY "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmoutput.a")
  set (opm-output_LIBRARIES ${opm-output_LIBRARY} "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmcommon.a;-lpthread;/usr/lib/x86_64-linux-gnu/libboost_system.so;opmparser")
  mark_as_advanced (opm-output_LIBRARY)

  # not all projects have targets; conditionally add this part
  if (NOT "opmoutput" STREQUAL "")
    # add the library as a target, so that other things in the project including
    # this file may depend on it and get rebuild if this library changes.
    add_library (opmoutput UNKNOWN IMPORTED)
    set_property (TARGET opmoutput PROPERTY IMPORTED_LOCATION "${opm-output_LIBRARY}")
  endif (NOT "opmoutput" STREQUAL "")

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
  set(COMPARE_SUMMARY_COMMAND /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/bin/compareSummary)
set(COMPARE_ECL_COMMAND /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/bin/compareECL)
endif()
if (DEFINED HAS_ATTRIBUTE_UNUSED AND NOT "${HAS_ATTRIBUTE_UNUSED}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAS_ATTRIBUTE_UNUSED}\" of variable \"HAS_ATTRIBUTE_UNUSED\"")
endif ()
set (HAS_ATTRIBUTE_UNUSED "1")
if (DEFINED HAVE_OPM_PARSER AND NOT "${HAVE_OPM_PARSER}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_OPM_PARSER}\" of variable \"HAVE_OPM_PARSER\"")
endif ()
set (HAVE_OPM_PARSER "1")
if (DEFINED HAVE_REGEX AND NOT "${HAVE_REGEX}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_REGEX}\" of variable \"HAVE_REGEX\"")
endif ()
set (HAVE_REGEX)
if (DEFINED HAVE_ERT AND NOT "${HAVE_ERT}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_ERT}\" of variable \"HAVE_ERT\"")
endif ()
set (HAVE_ERT "1")
