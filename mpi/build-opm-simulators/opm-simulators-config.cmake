# - Simulators and utilities for automatic differentiation config mode
#
# Defines the following variables:
#  opm-simulators_FOUND        - true
#  opm-simulators_VERSION      - version of the opm-simulators library found, e.g. 0.2
#  opm-simulators_DEFINITIONS  - defines to be made on the command line
#  opm-simulators_INCLUDE_DIRS - header directories with which to compile
#  opm-simulators_LINKER_FLAGS - flags that must be passed to the linker
#  opm-simulators_LIBRARIES    - names of the libraries with which to link
#  opm-simulators_LIBRARY_DIRS - directories in which the libraries are situated
#
# You should put lines like this in your CMakeLists.txt
#  set (opm-simulators_DIR "${PROJECT_BINARY_DIR}/../opm-simulators" CACHE LOCATION "Build tree of opm-simulators")
#  find_package (opm-simulators)
#  configure_vars (
#    FILE  CXX  "${PROJECT_BINARY_DIR}/config.h"
#    WRITE ${opm-simulators_CONFIG_VARS}
#    )

# <http://www.vtk.org/Wiki/CMake/Tutorials/How_to_create_a_ProjectConfig.cmake_file>

# Prevent multiple inclusions
if(NOT opm-simulators_FOUND)

  # propagate these properties from one build system to the other
  set (opm-simulators_VERSION "2018.04")
  set (opm-simulators_DEFINITIONS "-DDUNE_COMMON_FIELDVECTOR_SIZE_IS_METHOD=1;-DHAVE_OPM_GRID")
  set (opm-simulators_INCLUDE_DIRS "/var/lib/jenkins/workspace/opm-simulators-PR-builder;/usr/include;/usr/lib/x86_64-linux-gnu/openmpi/include/openmpi;/usr/lib/x86_64-linux-gnu/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent;/usr/lib/x86_64-linux-gnu/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent/include;/usr/lib/x86_64-linux-gnu/openmpi/include;/usr/include/suitesparse;/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/include;/usr/include/trilinos;/usr/local/include;/usr/include/eigen3")
  set (opm-simulators_LIBRARY_DIRS "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-simulators/lib")
  set (opm-simulators_LINKER_FLAGS "-Wl,--enable-new-dtags")
  set (opm-simulators_CONFIG_VARS "HAS_ATTRIBUTE_UNUSED;HAS_ATTRIBUTE_DEPRECATED;HAS_ATTRIBUTE_DEPRECATED_MSG;HAVE_ARRAY;HAVE_BOOST_MAKE_SHARED_HPP;HAVE_BOOST_SHARED_PTR_HPP;HAVE_DUNE_BOOST;HAVE_GMP;HAVE_MAKE_SHARED;HAVE_MPI;HAVE_NULLPTR;HAVE_STATIC_ASSERT;HAVE_SHARED_PTR;MPI_2;SHARED_PTR_HEADER;SHARED_PTR_NAMESPACE;HAVE_TYPE_TRAITS;HAVE_TR1_TUPLE;HAVE_TUPLE;HAVE_CXA_DEMANGLE;HAVE_BOOST_FUSION;HAVE_MEM_USAGE_T_EXPANSIONS;HAVE_PARDISO;HAVE_BOOST;HAVE_PARMETIS;HAVE_SUPERLU;HAVE_UMFPACK;SUPERLU_MIN_VERSION_4_3;SUPERLU_POST_2005_VERSION;HAVE_OPM_PARSER;HAVE_REGEX;HAVE_ERT;HAVE_ALGLIB;HAVE_UG;HAVE_DUNE_FEM;HAVE_GRIDTYPE;HAVE_GRAPE;HAVE_PSURFACE;HAVE_AMIRAMESH;HAVE_ALBERTA;HAVE_STDINT_H;DUNE_GRID_EXPERIMENTAL_GRID_EXTENSIONS;DUNE_GRID_VERSION_MAJOR;DUNE_GRID_VERSION_MINOR;DUNE_GRID_VERSION_REVISION;DUNE_GEOMETRY_VERSION_MAJOR;DUNE_GEOMETRY_VERSION_MINOR;DUNE_GEOMETRY_VERSION_REVISION;DUNE_COMMON_VERSION_MAJOR;DUNE_COMMON_VERSION_MINOR;DUNE_COMMON_VERSION_REVISION;HAVE_DUNE_ISTL;HAVE_ZOLTAN;HAVE_VALGRIND;HAVE_FINAL;HAVE_SUITESPARSE_UMFPACK_H;HAVE_PETSC;DUNE_ISTL_VERSION_MAJOR;DUNE_ISTL_VERSION_MINOR;DUNE_ISTL_VERSION_REVISION;HAVE_QUAD;HAVE_DUNE_COMMON;HAVE_DUNE_GEOMETRY;HAVE_DUNE_GRID;HAVE_DUNE_LOCALFUNCTIONS;HAVE_DUNE_ALUGRID;DUNE_AVOID_CAPABILITIES_IS_PARALLEL_DEPRECATION_WARNING;HAVE_OPM_GRID;HAVE_PTHREAD;HAVE_EWOMS;DUNE_ISTL_VERSION_MAJOR;DUNE_ISTL_VERSION_MINOR;DUNE_ISTL_VERSION_REVISION;HAVE_SUITESPARSE_UMFPACK")

  # libraries come from the build tree where this file was generated
  set (opm-simulators_LIBRARY "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-simulators/lib/libopmsimulators.a")
  set (opm-simulators_LIBRARIES ${opm-simulators_LIBRARY} "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmcore.a;/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmoutput.a;/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmgrid.a;/usr/lib/x86_64-linux-gnu/libboost_regex.so;dunegrid;dunealbertagrid_1d;dunealbertagrid_2d;dunealbertagrid_3d;dunegeometry;dunecommon;/usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi_cxx.so;/usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi.so;/usr/lib/x86_64-linux-gnu/libumfpack.so;/usr/lib/x86_64-linux-gnu/libamd.so;/usr/lib/liblapack.so;/usr/lib/libblas.so;/usr/lib/x86_64-linux-gnu/libm.so;/usr/lib/x86_64-linux-gnu/libsuitesparseconfig.so;-lrt;/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmcommon.a;-lpthread;/usr/lib/x86_64-linux-gnu/libboost_date_time.so;/usr/lib/x86_64-linux-gnu/libboost_filesystem.so;/usr/lib/x86_64-linux-gnu/libboost_system.so;opmparser;/usr/lib/x86_64-linux-gnu/libtrilinos_zoltan.so")
  mark_as_advanced (opm-simulators_LIBRARY)

  # not all projects have targets; conditionally add this part
  if (NOT "opmsimulators" STREQUAL "")
    # add the library as a target, so that other things in the project including
    # this file may depend on it and get rebuild if this library changes.
    add_library (opmsimulators UNKNOWN IMPORTED)
    set_property (TARGET opmsimulators PROPERTY IMPORTED_LOCATION "${opm-simulators_LIBRARY}")
  endif (NOT "opmsimulators" STREQUAL "")

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
if (DEFINED HAVE_BOOST_FUSION AND NOT "${HAVE_BOOST_FUSION}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_BOOST_FUSION}\" of variable \"HAVE_BOOST_FUSION\"")
endif ()
set (HAVE_BOOST_FUSION)
if (DEFINED HAVE_MEM_USAGE_T_EXPANSIONS AND NOT "${HAVE_MEM_USAGE_T_EXPANSIONS}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_MEM_USAGE_T_EXPANSIONS}\" of variable \"HAVE_MEM_USAGE_T_EXPANSIONS\"")
endif ()
set (HAVE_MEM_USAGE_T_EXPANSIONS)
if (DEFINED HAVE_PARDISO AND NOT "${HAVE_PARDISO}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_PARDISO}\" of variable \"HAVE_PARDISO\"")
endif ()
set (HAVE_PARDISO)
if (DEFINED HAVE_BOOST AND NOT "${HAVE_BOOST}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_BOOST}\" of variable \"HAVE_BOOST\"")
endif ()
set (HAVE_BOOST "1")
if (DEFINED HAVE_PARMETIS AND NOT "${HAVE_PARMETIS}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_PARMETIS}\" of variable \"HAVE_PARMETIS\"")
endif ()
set (HAVE_PARMETIS)
if (DEFINED HAVE_SUPERLU AND NOT "${HAVE_SUPERLU}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_SUPERLU}\" of variable \"HAVE_SUPERLU\"")
endif ()
set (HAVE_SUPERLU)
if (DEFINED HAVE_UMFPACK AND NOT "${HAVE_UMFPACK}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_UMFPACK}\" of variable \"HAVE_UMFPACK\"")
endif ()
set (HAVE_UMFPACK "1")
if (DEFINED SUPERLU_MIN_VERSION_4_3 AND NOT "${SUPERLU_MIN_VERSION_4_3}" STREQUAL "")
	message (WARNING "Incompatible value \"${SUPERLU_MIN_VERSION_4_3}\" of variable \"SUPERLU_MIN_VERSION_4_3\"")
endif ()
set (SUPERLU_MIN_VERSION_4_3)
if (DEFINED SUPERLU_POST_2005_VERSION AND NOT "${SUPERLU_POST_2005_VERSION}" STREQUAL "")
	message (WARNING "Incompatible value \"${SUPERLU_POST_2005_VERSION}\" of variable \"SUPERLU_POST_2005_VERSION\"")
endif ()
set (SUPERLU_POST_2005_VERSION)
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
if (DEFINED HAVE_ALGLIB AND NOT "${HAVE_ALGLIB}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_ALGLIB}\" of variable \"HAVE_ALGLIB\"")
endif ()
set (HAVE_ALGLIB)
if (DEFINED HAVE_UG AND NOT "${HAVE_UG}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_UG}\" of variable \"HAVE_UG\"")
endif ()
set (HAVE_UG)
if (DEFINED HAVE_DUNE_FEM AND NOT "${HAVE_DUNE_FEM}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_DUNE_FEM}\" of variable \"HAVE_DUNE_FEM\"")
endif ()
set (HAVE_DUNE_FEM)
if (DEFINED HAVE_GRIDTYPE AND NOT "${HAVE_GRIDTYPE}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_GRIDTYPE}\" of variable \"HAVE_GRIDTYPE\"")
endif ()
set (HAVE_GRIDTYPE)
if (DEFINED HAVE_GRAPE AND NOT "${HAVE_GRAPE}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_GRAPE}\" of variable \"HAVE_GRAPE\"")
endif ()
set (HAVE_GRAPE)
if (DEFINED HAVE_PSURFACE AND NOT "${HAVE_PSURFACE}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_PSURFACE}\" of variable \"HAVE_PSURFACE\"")
endif ()
set (HAVE_PSURFACE)
if (DEFINED HAVE_AMIRAMESH AND NOT "${HAVE_AMIRAMESH}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_AMIRAMESH}\" of variable \"HAVE_AMIRAMESH\"")
endif ()
set (HAVE_AMIRAMESH)
if (DEFINED HAVE_ALBERTA AND NOT "${HAVE_ALBERTA}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_ALBERTA}\" of variable \"HAVE_ALBERTA\"")
endif ()
set (HAVE_ALBERTA)
if (DEFINED HAVE_STDINT_H AND NOT "${HAVE_STDINT_H}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_STDINT_H}\" of variable \"HAVE_STDINT_H\"")
endif ()
set (HAVE_STDINT_H)
if (DEFINED DUNE_GRID_EXPERIMENTAL_GRID_EXTENSIONS AND NOT "${DUNE_GRID_EXPERIMENTAL_GRID_EXTENSIONS}" STREQUAL "1")
	message (WARNING "Incompatible value \"${DUNE_GRID_EXPERIMENTAL_GRID_EXTENSIONS}\" of variable \"DUNE_GRID_EXPERIMENTAL_GRID_EXTENSIONS\"")
endif ()
set (DUNE_GRID_EXPERIMENTAL_GRID_EXTENSIONS "1")
if (DEFINED DUNE_GRID_VERSION_MAJOR AND NOT "${DUNE_GRID_VERSION_MAJOR}" STREQUAL "2")
	message (WARNING "Incompatible value \"${DUNE_GRID_VERSION_MAJOR}\" of variable \"DUNE_GRID_VERSION_MAJOR\"")
endif ()
set (DUNE_GRID_VERSION_MAJOR "2")
if (DEFINED DUNE_GRID_VERSION_MINOR AND NOT "${DUNE_GRID_VERSION_MINOR}" STREQUAL "5")
	message (WARNING "Incompatible value \"${DUNE_GRID_VERSION_MINOR}\" of variable \"DUNE_GRID_VERSION_MINOR\"")
endif ()
set (DUNE_GRID_VERSION_MINOR "5")
if (DEFINED DUNE_GRID_VERSION_REVISION AND NOT "${DUNE_GRID_VERSION_REVISION}" STREQUAL "0")
	message (WARNING "Incompatible value \"${DUNE_GRID_VERSION_REVISION}\" of variable \"DUNE_GRID_VERSION_REVISION\"")
endif ()
set (DUNE_GRID_VERSION_REVISION "0")
if (DEFINED DUNE_GEOMETRY_VERSION_MAJOR AND NOT "${DUNE_GEOMETRY_VERSION_MAJOR}" STREQUAL "2")
	message (WARNING "Incompatible value \"${DUNE_GEOMETRY_VERSION_MAJOR}\" of variable \"DUNE_GEOMETRY_VERSION_MAJOR\"")
endif ()
set (DUNE_GEOMETRY_VERSION_MAJOR "2")
if (DEFINED DUNE_GEOMETRY_VERSION_MINOR AND NOT "${DUNE_GEOMETRY_VERSION_MINOR}" STREQUAL "5")
	message (WARNING "Incompatible value \"${DUNE_GEOMETRY_VERSION_MINOR}\" of variable \"DUNE_GEOMETRY_VERSION_MINOR\"")
endif ()
set (DUNE_GEOMETRY_VERSION_MINOR "5")
if (DEFINED DUNE_GEOMETRY_VERSION_REVISION AND NOT "${DUNE_GEOMETRY_VERSION_REVISION}" STREQUAL "0")
	message (WARNING "Incompatible value \"${DUNE_GEOMETRY_VERSION_REVISION}\" of variable \"DUNE_GEOMETRY_VERSION_REVISION\"")
endif ()
set (DUNE_GEOMETRY_VERSION_REVISION "0")
if (DEFINED DUNE_COMMON_VERSION_MAJOR AND NOT "${DUNE_COMMON_VERSION_MAJOR}" STREQUAL "2")
	message (WARNING "Incompatible value \"${DUNE_COMMON_VERSION_MAJOR}\" of variable \"DUNE_COMMON_VERSION_MAJOR\"")
endif ()
set (DUNE_COMMON_VERSION_MAJOR "2")
if (DEFINED DUNE_COMMON_VERSION_MINOR AND NOT "${DUNE_COMMON_VERSION_MINOR}" STREQUAL "5")
	message (WARNING "Incompatible value \"${DUNE_COMMON_VERSION_MINOR}\" of variable \"DUNE_COMMON_VERSION_MINOR\"")
endif ()
set (DUNE_COMMON_VERSION_MINOR "5")
if (DEFINED DUNE_COMMON_VERSION_REVISION AND NOT "${DUNE_COMMON_VERSION_REVISION}" STREQUAL "0")
	message (WARNING "Incompatible value \"${DUNE_COMMON_VERSION_REVISION}\" of variable \"DUNE_COMMON_VERSION_REVISION\"")
endif ()
set (DUNE_COMMON_VERSION_REVISION "0")
if (DEFINED HAVE_DUNE_ISTL AND NOT "${HAVE_DUNE_ISTL}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_DUNE_ISTL}\" of variable \"HAVE_DUNE_ISTL\"")
endif ()
set (HAVE_DUNE_ISTL "1")
if (DEFINED HAVE_ZOLTAN AND NOT "${HAVE_ZOLTAN}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_ZOLTAN}\" of variable \"HAVE_ZOLTAN\"")
endif ()
set (HAVE_ZOLTAN "1")
if (DEFINED HAVE_VALGRIND AND NOT "${HAVE_VALGRIND}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_VALGRIND}\" of variable \"HAVE_VALGRIND\"")
endif ()
set (HAVE_VALGRIND "1")
if (DEFINED HAVE_FINAL AND NOT "${HAVE_FINAL}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_FINAL}\" of variable \"HAVE_FINAL\"")
endif ()
set (HAVE_FINAL "1")
if (DEFINED HAVE_SUITESPARSE_UMFPACK_H AND NOT "${HAVE_SUITESPARSE_UMFPACK_H}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_SUITESPARSE_UMFPACK_H}\" of variable \"HAVE_SUITESPARSE_UMFPACK_H\"")
endif ()
set (HAVE_SUITESPARSE_UMFPACK_H "1")
if (DEFINED HAVE_PETSC AND NOT "${HAVE_PETSC}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_PETSC}\" of variable \"HAVE_PETSC\"")
endif ()
set (HAVE_PETSC)
if (DEFINED DUNE_ISTL_VERSION_MAJOR AND NOT "${DUNE_ISTL_VERSION_MAJOR}" STREQUAL "2")
	message (WARNING "Incompatible value \"${DUNE_ISTL_VERSION_MAJOR}\" of variable \"DUNE_ISTL_VERSION_MAJOR\"")
endif ()
set (DUNE_ISTL_VERSION_MAJOR "2")
if (DEFINED DUNE_ISTL_VERSION_MINOR AND NOT "${DUNE_ISTL_VERSION_MINOR}" STREQUAL "5")
	message (WARNING "Incompatible value \"${DUNE_ISTL_VERSION_MINOR}\" of variable \"DUNE_ISTL_VERSION_MINOR\"")
endif ()
set (DUNE_ISTL_VERSION_MINOR "5")
if (DEFINED DUNE_ISTL_VERSION_REVISION AND NOT "${DUNE_ISTL_VERSION_REVISION}" STREQUAL "0")
	message (WARNING "Incompatible value \"${DUNE_ISTL_VERSION_REVISION}\" of variable \"DUNE_ISTL_VERSION_REVISION\"")
endif ()
set (DUNE_ISTL_VERSION_REVISION "0")
if (DEFINED HAVE_QUAD AND NOT "${HAVE_QUAD}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_QUAD}\" of variable \"HAVE_QUAD\"")
endif ()
set (HAVE_QUAD)
if (DEFINED HAVE_DUNE_COMMON AND NOT "${HAVE_DUNE_COMMON}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_DUNE_COMMON}\" of variable \"HAVE_DUNE_COMMON\"")
endif ()
set (HAVE_DUNE_COMMON "1")
if (DEFINED HAVE_DUNE_GEOMETRY AND NOT "${HAVE_DUNE_GEOMETRY}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_DUNE_GEOMETRY}\" of variable \"HAVE_DUNE_GEOMETRY\"")
endif ()
set (HAVE_DUNE_GEOMETRY "1")
if (DEFINED HAVE_DUNE_GRID AND NOT "${HAVE_DUNE_GRID}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_DUNE_GRID}\" of variable \"HAVE_DUNE_GRID\"")
endif ()
set (HAVE_DUNE_GRID "1")
if (DEFINED HAVE_DUNE_LOCALFUNCTIONS AND NOT "${HAVE_DUNE_LOCALFUNCTIONS}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_DUNE_LOCALFUNCTIONS}\" of variable \"HAVE_DUNE_LOCALFUNCTIONS\"")
endif ()
set (HAVE_DUNE_LOCALFUNCTIONS "1")
if (DEFINED HAVE_DUNE_ALUGRID AND NOT "${HAVE_DUNE_ALUGRID}" STREQUAL "")
	message (WARNING "Incompatible value \"${HAVE_DUNE_ALUGRID}\" of variable \"HAVE_DUNE_ALUGRID\"")
endif ()
set (HAVE_DUNE_ALUGRID)
if (DEFINED DUNE_AVOID_CAPABILITIES_IS_PARALLEL_DEPRECATION_WARNING AND NOT "${DUNE_AVOID_CAPABILITIES_IS_PARALLEL_DEPRECATION_WARNING}" STREQUAL "1")
	message (WARNING "Incompatible value \"${DUNE_AVOID_CAPABILITIES_IS_PARALLEL_DEPRECATION_WARNING}\" of variable \"DUNE_AVOID_CAPABILITIES_IS_PARALLEL_DEPRECATION_WARNING\"")
endif ()
set (DUNE_AVOID_CAPABILITIES_IS_PARALLEL_DEPRECATION_WARNING "1")
if (DEFINED HAVE_OPM_GRID AND NOT "${HAVE_OPM_GRID}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_OPM_GRID}\" of variable \"HAVE_OPM_GRID\"")
endif ()
set (HAVE_OPM_GRID "1")
if (DEFINED HAVE_PTHREAD AND NOT "${HAVE_PTHREAD}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_PTHREAD}\" of variable \"HAVE_PTHREAD\"")
endif ()
set (HAVE_PTHREAD "1")
if (DEFINED HAVE_EWOMS AND NOT "${HAVE_EWOMS}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_EWOMS}\" of variable \"HAVE_EWOMS\"")
endif ()
set (HAVE_EWOMS "1")
if (DEFINED HAVE_SUITESPARSE_UMFPACK AND NOT "${HAVE_SUITESPARSE_UMFPACK}" STREQUAL "1")
	message (WARNING "Incompatible value \"${HAVE_SUITESPARSE_UMFPACK}\" of variable \"HAVE_SUITESPARSE_UMFPACK\"")
endif ()
set (HAVE_SUITESPARSE_UMFPACK "1")
