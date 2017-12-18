# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms

# Include any dependencies generated for this target.
include CMakeFiles/test_quadrature.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_quadrature.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_quadrature.dir/flags.make

CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o: CMakeFiles/test_quadrature.dir/flags.make
CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o: /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/test_quadrature.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o"
	/usr/lib/ccache/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o -c /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/test_quadrature.cc

CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.i"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/test_quadrature.cc > CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.i

CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.s"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/test_quadrature.cc -o CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.s

CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o.requires:

.PHONY : CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o.requires

CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o.provides: CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o.requires
	$(MAKE) -f CMakeFiles/test_quadrature.dir/build.make CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o.provides.build
.PHONY : CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o.provides

CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o.provides.build: CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o


# Object files for target test_quadrature
test_quadrature_OBJECTS = \
"CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o"

# External object files for target test_quadrature
test_quadrature_EXTERNAL_OBJECTS =

bin/test_quadrature: CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o
bin/test_quadrature: CMakeFiles/test_quadrature.dir/build.make
bin/test_quadrature: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmcore.a
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libboost_regex.so
bin/test_quadrature: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmoutput.a
bin/test_quadrature: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmgrid.a
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libdunealbertagrid_1d.so.2.5.0
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libdunealbertagrid_2d.so.2.5.0
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libdunealbertagrid_3d.so.2.5.0
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi_cxx.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libumfpack.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libamd.so
bin/test_quadrature: /usr/lib/liblapack.so
bin/test_quadrature: /usr/lib/libblas.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libm.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libsuitesparseconfig.so
bin/test_quadrature: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmcommon.a
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/test_quadrature: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/libopmparser.a
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libtrilinos_zoltan.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libalberta_1d.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libalberta_2d.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libdunegrid.so.2.5.0
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libdunegeometry.so.2.5.0
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libdunecommon.so.2.5.0
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libalberta_3d.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libalberta_utilities.so
bin/test_quadrature: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/libopmjson.a
bin/test_quadrature: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/libecl.a
bin/test_quadrature: /usr/lib/liblapack.so
bin/test_quadrature: /usr/lib/libblas.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libz.so
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libboost_filesystem.a
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libboost_date_time.a
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libboost_system.a
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.a
bin/test_quadrature: /usr/lib/x86_64-linux-gnu/libboost_regex.a
bin/test_quadrature: CMakeFiles/test_quadrature.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/test_quadrature"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_quadrature.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_quadrature.dir/build: bin/test_quadrature

.PHONY : CMakeFiles/test_quadrature.dir/build

CMakeFiles/test_quadrature.dir/requires: CMakeFiles/test_quadrature.dir/tests/test_quadrature.cc.o.requires

.PHONY : CMakeFiles/test_quadrature.dir/requires

CMakeFiles/test_quadrature.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_quadrature.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_quadrature.dir/clean

CMakeFiles/test_quadrature.dir/depend:
	cd /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms/CMakeFiles/test_quadrature.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_quadrature.dir/depend

