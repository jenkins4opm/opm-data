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
include CMakeFiles/reservoir_ncp_ecfv.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/reservoir_ncp_ecfv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/reservoir_ncp_ecfv.dir/flags.make

CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o: CMakeFiles/reservoir_ncp_ecfv.dir/flags.make
CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o: /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/reservoir_ncp_ecfv.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o"
	/usr/lib/ccache/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o -c /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/reservoir_ncp_ecfv.cc

CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.i"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/reservoir_ncp_ecfv.cc > CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.i

CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.s"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/reservoir_ncp_ecfv.cc -o CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.s

CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o.requires:

.PHONY : CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o.requires

CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o.provides: CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o.requires
	$(MAKE) -f CMakeFiles/reservoir_ncp_ecfv.dir/build.make CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o.provides.build
.PHONY : CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o.provides

CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o.provides.build: CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o


# Object files for target reservoir_ncp_ecfv
reservoir_ncp_ecfv_OBJECTS = \
"CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o"

# External object files for target reservoir_ncp_ecfv
reservoir_ncp_ecfv_EXTERNAL_OBJECTS =

bin/reservoir_ncp_ecfv: CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o
bin/reservoir_ncp_ecfv: CMakeFiles/reservoir_ncp_ecfv.dir/build.make
bin/reservoir_ncp_ecfv: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmcore.a
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libboost_regex.so
bin/reservoir_ncp_ecfv: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmoutput.a
bin/reservoir_ncp_ecfv: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmgrid.a
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libdunealbertagrid_1d.so.2.5.0
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libdunealbertagrid_2d.so.2.5.0
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libdunealbertagrid_3d.so.2.5.0
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi_cxx.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libumfpack.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libamd.so
bin/reservoir_ncp_ecfv: /usr/lib/liblapack.so
bin/reservoir_ncp_ecfv: /usr/lib/libblas.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libm.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libsuitesparseconfig.so
bin/reservoir_ncp_ecfv: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmcommon.a
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/reservoir_ncp_ecfv: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/libopmparser.a
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libtrilinos_zoltan.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libalberta_1d.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libalberta_2d.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libdunegrid.so.2.5.0
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libdunegeometry.so.2.5.0
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libdunecommon.so.2.5.0
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libalberta_3d.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libalberta_utilities.so
bin/reservoir_ncp_ecfv: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/libopmjson.a
bin/reservoir_ncp_ecfv: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/libecl.a
bin/reservoir_ncp_ecfv: /usr/lib/liblapack.so
bin/reservoir_ncp_ecfv: /usr/lib/libblas.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libz.so
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libboost_filesystem.a
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libboost_date_time.a
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libboost_system.a
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.a
bin/reservoir_ncp_ecfv: /usr/lib/x86_64-linux-gnu/libboost_regex.a
bin/reservoir_ncp_ecfv: CMakeFiles/reservoir_ncp_ecfv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/reservoir_ncp_ecfv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/reservoir_ncp_ecfv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/reservoir_ncp_ecfv.dir/build: bin/reservoir_ncp_ecfv

.PHONY : CMakeFiles/reservoir_ncp_ecfv.dir/build

CMakeFiles/reservoir_ncp_ecfv.dir/requires: CMakeFiles/reservoir_ncp_ecfv.dir/tests/reservoir_ncp_ecfv.cc.o.requires

.PHONY : CMakeFiles/reservoir_ncp_ecfv.dir/requires

CMakeFiles/reservoir_ncp_ecfv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/reservoir_ncp_ecfv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/reservoir_ncp_ecfv.dir/clean

CMakeFiles/reservoir_ncp_ecfv.dir/depend:
	cd /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms/CMakeFiles/reservoir_ncp_ecfv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/reservoir_ncp_ecfv.dir/depend

