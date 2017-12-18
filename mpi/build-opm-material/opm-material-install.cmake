# - This module contains the thermodynamic framework used by OPM config mode
#
# Defines the following variables:
#  opm-material_FOUND        - true
#  opm-material_VERSION      - version of the opm-material library found, e.g. 0.2
#  opm-material_DEFINITIONS  - defines to be made on the command line
#  opm-material_INCLUDE_DIRS - header directories with which to compile
#  opm-material_LINKER_FLAGS - flags that must be passed to the linker
#  opm-material_LIBRARIES    - names of the libraries with which to link
#  opm-material_LIBRARY_DIRS - directories in which the libraries are situated
#
# You should put lines like this in your CMakeLists.txt
#  set (opm-material_DIR "${PROJECT_BINARY_DIR}/../opm-material" CACHE LOCATION "Build tree of opm-material")
#  find_package (opm-material)
#  configure_vars (
#    FILE  CXX  "${PROJECT_BINARY_DIR}/config.h"
#    WRITE ${opm-material_CONFIG_VARS}
#    )

# <http://www.vtk.org/Wiki/CMake/Tutorials/How_to_create_a_ProjectConfig.cmake_file>

# Prevent multiple inclusions
if(NOT opm-material_FOUND)

  # propagate these properties from one build system to the other
  set (opm-material_VERSION "2018.04")
  set (opm-material_DEFINITIONS "-DDUNE_COMMON_FIELDVECTOR_SIZE_IS_METHOD=1")
  set (opm-material_INCLUDE_DIRS "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/include;/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/include;/usr/include;/usr/lib/x86_64-linux-gnu/openmpi/include/openmpi;/usr/lib/x86_64-linux-gnu/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent;/usr/lib/x86_64-linux-gnu/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent/include;/usr/lib/x86_64-linux-gnu/openmpi/include;/usr/local/include")
  set (opm-material_LIBRARY_DIRS "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu")
  set (opm-material_LINKER_FLAGS "-Wl,--enable-new-dtags")
  set (opm-material_CONFIG_VARS "HAVE_OPM_PARSER;HAVE_REGEX;HAVE_ERT;HAS_ATTRIBUTE_UNUSED;HAS_ATTRIBUTE_DEPRECATED;HAS_ATTRIBUTE_DEPRECATED_MSG;HAVE_ARRAY;HAVE_BOOST_MAKE_SHARED_HPP;HAVE_BOOST_SHARED_PTR_HPP;HAVE_DUNE_BOOST;HAVE_GMP;HAVE_MAKE_SHARED;HAVE_MPI;HAVE_NULLPTR;HAVE_STATIC_ASSERT;HAVE_SHARED_PTR;MPI_2;SHARED_PTR_HEADER;SHARED_PTR_NAMESPACE;HAVE_TYPE_TRAITS;HAVE_TR1_TUPLE;HAVE_TUPLE;HAVE_CXA_DEMANGLE;HAVE_MPI;HAVE_TYPE_TRAITS;HAVE_VALGRIND;HAVE_FINAL")

  # libraries come from the build tree where this file was generated
  set (opm-material_LIBRARY "")
  set (opm-material_LIBRARIES ${opm-material_LIBRARY} "opmparser;/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmcommon.a;-lpthread;/usr/lib/x86_64-linux-gnu/libboost_regex.so;/usr/lib/x86_64-linux-gnu/libboost_filesystem.so;/usr/lib/x86_64-linux-gnu/libboost_system.so;/usr/lib/x86_64-linux-gnu/libboost_date_time.so;dunecommon;/usr/lib/liblapack.so;/usr/lib/libblas.so;/usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi_cxx.so;/usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi.so")
  mark_as_advanced (opm-material_LIBRARY)

  # not all projects have targets; conditionally add this part
  if (NOT "" STREQUAL "")
    # add the library as a target, so that other things in the project including
    # this file may depend on it and get rebuild if this library changes.
    add_library ( UNKNOWN IMPORTED)
    set_property (TARGET  PROPERTY IMPORTED_LOCATION "${opm-material_LIBRARY}")
  endif (NOT "" STREQUAL "")

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
  
endif()
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
if (DEFINED HAS_ATTRIBUTE_UNUSED AND NOT "${HAS_ATTRIBUTE_UNUSED}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAS_ATTRIBUTE_UNUSED}\" of variable \"HAS_ATTRIBUTE_UNUSED\"")
endif ()
set (HAS_ATTRIBUTE_UNUSED "1")
if (DEFINED HAS_ATTRIBUTE_DEPRECATED AND NOT "${HAS_ATTRIBUTE_DEPRECATED}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAS_ATTRIBUTE_DEPRECATED}\" of variable \"HAS_ATTRIBUTE_DEPRECATED\"")
endif ()
set (HAS_ATTRIBUTE_DEPRECATED "1")
if (DEFINED HAS_ATTRIBUTE_DEPRECATED_MSG AND NOT "${HAS_ATTRIBUTE_DEPRECATED_MSG}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAS_ATTRIBUTE_DEPRECATED_MSG}\" of variable \"HAS_ATTRIBUTE_DEPRECATED_MSG\"")
endif ()
set (HAS_ATTRIBUTE_DEPRECATED_MSG "1")
if (DEFINED HAVE_ARRAY AND NOT "${HAVE_ARRAY}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_ARRAY}\" of variable \"HAVE_ARRAY\"")
endif ()
set (HAVE_ARRAY "1")
if (DEFINED HAVE_BOOST_MAKE_SHARED_HPP AND NOT "${HAVE_BOOST_MAKE_SHARED_HPP}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_BOOST_MAKE_SHARED_HPP}\" of variable \"HAVE_BOOST_MAKE_SHARED_HPP\"")
endif ()
set (HAVE_BOOST_MAKE_SHARED_HPP)
if (DEFINED HAVE_BOOST_SHARED_PTR_HPP AND NOT "${HAVE_BOOST_SHARED_PTR_HPP}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_BOOST_SHARED_PTR_HPP}\" of variable \"HAVE_BOOST_SHARED_PTR_HPP\"")
endif ()
set (HAVE_BOOST_SHARED_PTR_HPP)
if (DEFINED HAVE_DUNE_BOOST AND NOT "${HAVE_DUNE_BOOST}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_DUNE_BOOST}\" of variable \"HAVE_DUNE_BOOST\"")
endif ()
set (HAVE_DUNE_BOOST "1")
if (DEFINED HAVE_GMP AND NOT "${HAVE_GMP}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_GMP}\" of variable \"HAVE_GMP\"")
endif ()
set (HAVE_GMP)
if (DEFINED HAVE_MAKE_SHARED AND NOT "${HAVE_MAKE_SHARED}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_MAKE_SHARED}\" of variable \"HAVE_MAKE_SHARED\"")
endif ()
set (HAVE_MAKE_SHARED "1")
if (DEFINED HAVE_MPI AND NOT "${HAVE_MPI}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_MPI}\" of variable \"HAVE_MPI\"")
endif ()
set (HAVE_MPI "1")
if (DEFINED HAVE_NULLPTR AND NOT "${HAVE_NULLPTR}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_NULLPTR}\" of variable \"HAVE_NULLPTR\"")
endif ()
set (HAVE_NULLPTR "1")
if (DEFINED HAVE_STATIC_ASSERT AND NOT "${HAVE_STATIC_ASSERT}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_STATIC_ASSERT}\" of variable \"HAVE_STATIC_ASSERT\"")
endif ()
set (HAVE_STATIC_ASSERT "1")
if (DEFINED HAVE_SHARED_PTR AND NOT "${HAVE_SHARED_PTR}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_SHARED_PTR}\" of variable \"HAVE_SHARED_PTR\"")
endif ()
set (HAVE_SHARED_PTR "1")
if (DEFINED MPI_2 AND NOT "${MPI_2}" STREQUAL "1")
	message (WARNING "Incompatible value \"${MPI_2}\" of variable \"MPI_2\"")
endif ()
set (MPI_2 "1")
if (DEFINED SHARED_PTR_HEADER AND NOT "${SHARED_PTR_HEADER}" STREQUAL "<memory>")
	message (WARNING "Incompatible value \"${SHARED_PTR_HEADER}\" of variable \"SHARED_PTR_HEADER\"")
endif ()
set (SHARED_PTR_HEADER "<memory>")
if (DEFINED SHARED_PTR_NAMESPACE AND NOT "${SHARED_PTR_NAMESPACE}" STREQUAL "std")
	message (WARNING "Incompatible value \"${SHARED_PTR_NAMESPACE}\" of variable \"SHARED_PTR_NAMESPACE\"")
endif ()
set (SHARED_PTR_NAMESPACE "std")
if (DEFINED HAVE_TYPE_TRAITS AND NOT "${HAVE_TYPE_TRAITS}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_TYPE_TRAITS}\" of variable \"HAVE_TYPE_TRAITS\"")
endif ()
set (HAVE_TYPE_TRAITS "1")
if (DEFINED HAVE_TR1_TUPLE AND NOT "${HAVE_TR1_TUPLE}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_TR1_TUPLE}\" of variable \"HAVE_TR1_TUPLE\"")
endif ()
set (HAVE_TR1_TUPLE "1")
if (DEFINED HAVE_TUPLE AND NOT "${HAVE_TUPLE}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_TUPLE}\" of variable \"HAVE_TUPLE\"")
endif ()
set (HAVE_TUPLE "1")
if (DEFINED HAVE_CXA_DEMANGLE AND NOT "${HAVE_CXA_DEMANGLE}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_CXA_DEMANGLE}\" of variable \"HAVE_CXA_DEMANGLE\"")
endif ()
set (HAVE_CXA_DEMANGLE "1")
if (DEFINED HAVE_VALGRIND AND NOT "${HAVE_VALGRIND}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_VALGRIND}\" of variable \"HAVE_VALGRIND\"")
endif ()
set (HAVE_VALGRIND "1")
if (DEFINED HAVE_FINAL AND NOT "${HAVE_FINAL}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_FINAL}\" of variable \"HAVE_FINAL\"")
endif ()
set (HAVE_FINAL "1")
