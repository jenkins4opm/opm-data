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
include CMakeFiles/groundwater_immiscible.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/groundwater_immiscible.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/groundwater_immiscible.dir/flags.make

CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o: CMakeFiles/groundwater_immiscible.dir/flags.make
CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o: /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/groundwater_immiscible.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o"
	/usr/lib/ccache/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o -c /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/groundwater_immiscible.cc

CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.i"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/groundwater_immiscible.cc > CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.i

CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.s"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/groundwater_immiscible.cc -o CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.s

CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o.requires:

.PHONY : CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o.requires

CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o.provides: CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o.requires
	$(MAKE) -f CMakeFiles/groundwater_immiscible.dir/build.make CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o.provides.build
.PHONY : CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o.provides

CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o.provides.build: CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o


# Object files for target groundwater_immiscible
groundwater_immiscible_OBJECTS = \
"CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o"

# External object files for target groundwater_immiscible
groundwater_immiscible_EXTERNAL_OBJECTS =

bin/groundwater_immiscible: CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o
bin/groundwater_immiscible: CMakeFiles/groundwater_immiscible.dir/build.make
bin/groundwater_immiscible: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmcore.a
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libboost_regex.so
bin/groundwater_immiscible: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmoutput.a
bin/groundwater_immiscible: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmgrid.a
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libdunealbertagrid_1d.so.2.5.0
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libdunealbertagrid_2d.so.2.5.0
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libdunealbertagrid_3d.so.2.5.0
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi_cxx.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libumfpack.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libamd.so
bin/groundwater_immiscible: /usr/lib/liblapack.so
bin/groundwater_immiscible: /usr/lib/libblas.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libm.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libsuitesparseconfig.so
bin/groundwater_immiscible: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmcommon.a
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/groundwater_immiscible: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/libopmparser.a
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libtrilinos_zoltan.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libalberta_1d.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libalberta_2d.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libdunegrid.so.2.5.0
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libdunegeometry.so.2.5.0
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libdunecommon.so.2.5.0
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libalberta_3d.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libalberta_utilities.so
bin/groundwater_immiscible: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/libopmjson.a
bin/groundwater_immiscible: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/libecl.a
bin/groundwater_immiscible: /usr/lib/liblapack.so
bin/groundwater_immiscible: /usr/lib/libblas.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libz.so
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libboost_filesystem.a
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libboost_date_time.a
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libboost_system.a
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.a
bin/groundwater_immiscible: /usr/lib/x86_64-linux-gnu/libboost_regex.a
bin/groundwater_immiscible: CMakeFiles/groundwater_immiscible.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/groundwater_immiscible"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/groundwater_immiscible.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/groundwater_immiscible.dir/build: bin/groundwater_immiscible

.PHONY : CMakeFiles/groundwater_immiscible.dir/build

CMakeFiles/groundwater_immiscible.dir/requires: CMakeFiles/groundwater_immiscible.dir/tests/groundwater_immiscible.cc.o.requires

.PHONY : CMakeFiles/groundwater_immiscible.dir/requires

CMakeFiles/groundwater_immiscible.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/groundwater_immiscible.dir/cmake_clean.cmake
.PHONY : CMakeFiles/groundwater_immiscible.dir/clean

CMakeFiles/groundwater_immiscible.dir/depend:
	cd /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms/CMakeFiles/groundwater_immiscible.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/groundwater_immiscible.dir/depend

