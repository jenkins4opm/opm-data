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
include CMakeFiles/diffusion_flash.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/diffusion_flash.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/diffusion_flash.dir/flags.make

CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o: CMakeFiles/diffusion_flash.dir/flags.make
CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o: /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/diffusion_flash.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o"
	/usr/lib/ccache/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o -c /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/diffusion_flash.cc

CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.i"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/diffusion_flash.cc > CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.i

CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.s"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms/tests/diffusion_flash.cc -o CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.s

CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o.requires:

.PHONY : CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o.requires

CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o.provides: CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o.requires
	$(MAKE) -f CMakeFiles/diffusion_flash.dir/build.make CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o.provides.build
.PHONY : CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o.provides

CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o.provides.build: CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o


# Object files for target diffusion_flash
diffusion_flash_OBJECTS = \
"CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o"

# External object files for target diffusion_flash
diffusion_flash_EXTERNAL_OBJECTS =

bin/diffusion_flash: CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o
bin/diffusion_flash: CMakeFiles/diffusion_flash.dir/build.make
bin/diffusion_flash: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmcore.a
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libboost_regex.so
bin/diffusion_flash: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmoutput.a
bin/diffusion_flash: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmgrid.a
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libdunealbertagrid_1d.so.2.5.0
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libdunealbertagrid_2d.so.2.5.0
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libdunealbertagrid_3d.so.2.5.0
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi_cxx.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libumfpack.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libamd.so
bin/diffusion_flash: /usr/lib/liblapack.so
bin/diffusion_flash: /usr/lib/libblas.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libm.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libsuitesparseconfig.so
bin/diffusion_flash: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/libopmcommon.a
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/diffusion_flash: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/libopmparser.a
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libtrilinos_zoltan.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libalberta_1d.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libalberta_2d.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libdunegrid.so.2.5.0
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/openmpi/lib/libmpi.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libdunegeometry.so.2.5.0
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libdunecommon.so.2.5.0
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libalberta_3d.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libalberta_utilities.so
bin/diffusion_flash: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/libopmjson.a
bin/diffusion_flash: /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/libecl.a
bin/diffusion_flash: /usr/lib/liblapack.so
bin/diffusion_flash: /usr/lib/libblas.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libz.so
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libboost_filesystem.a
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libboost_date_time.a
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libboost_system.a
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.a
bin/diffusion_flash: /usr/lib/x86_64-linux-gnu/libboost_regex.a
bin/diffusion_flash: CMakeFiles/diffusion_flash.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/diffusion_flash"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/diffusion_flash.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/diffusion_flash.dir/build: bin/diffusion_flash

.PHONY : CMakeFiles/diffusion_flash.dir/build

CMakeFiles/diffusion_flash.dir/requires: CMakeFiles/diffusion_flash.dir/tests/diffusion_flash.cc.o.requires

.PHONY : CMakeFiles/diffusion_flash.dir/requires

CMakeFiles/diffusion_flash.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/diffusion_flash.dir/cmake_clean.cmake
.PHONY : CMakeFiles/diffusion_flash.dir/clean

CMakeFiles/diffusion_flash.dir/depend:
	cd /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-ewoms/CMakeFiles/diffusion_flash.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/diffusion_flash.dir/depend

