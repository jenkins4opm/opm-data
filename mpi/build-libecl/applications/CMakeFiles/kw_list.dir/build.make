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
CMAKE_SOURCE_DIR = /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/libecl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-libecl

# Include any dependencies generated for this target.
include applications/CMakeFiles/kw_list.dir/depend.make

# Include the progress variables for this target.
include applications/CMakeFiles/kw_list.dir/progress.make

# Include the compile flags for this target's objects.
include applications/CMakeFiles/kw_list.dir/flags.make

applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.o: applications/CMakeFiles/kw_list.dir/flags.make
applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.o: /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/libecl/applications/ecl/kw_list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-libecl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.o"
	cd /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-libecl/applications && /usr/lib/ccache/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/kw_list.dir/ecl/kw_list.c.o   -c /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/libecl/applications/ecl/kw_list.c

applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/kw_list.dir/ecl/kw_list.c.i"
	cd /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-libecl/applications && /usr/lib/ccache/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/libecl/applications/ecl/kw_list.c > CMakeFiles/kw_list.dir/ecl/kw_list.c.i

applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/kw_list.dir/ecl/kw_list.c.s"
	cd /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-libecl/applications && /usr/lib/ccache/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/libecl/applications/ecl/kw_list.c -o CMakeFiles/kw_list.dir/ecl/kw_list.c.s

applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.o.requires:

.PHONY : applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.o.requires

applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.o.provides: applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.o.requires
	$(MAKE) -f applications/CMakeFiles/kw_list.dir/build.make applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.o.provides.build
.PHONY : applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.o.provides

applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.o.provides.build: applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.o


# Object files for target kw_list
kw_list_OBJECTS = \
"CMakeFiles/kw_list.dir/ecl/kw_list.c.o"

# External object files for target kw_list
kw_list_EXTERNAL_OBJECTS =

bin/kw_list.x: applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.o
bin/kw_list.x: applications/CMakeFiles/kw_list.dir/build.make
bin/kw_list.x: lib/libecl.a
bin/kw_list.x: /usr/lib/libblas.so
bin/kw_list.x: /usr/lib/liblapack.so
bin/kw_list.x: /usr/lib/libblas.so
bin/kw_list.x: /usr/lib/liblapack.so
bin/kw_list.x: /usr/lib/x86_64-linux-gnu/libz.so
bin/kw_list.x: applications/CMakeFiles/kw_list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-libecl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/kw_list.x"
	cd /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-libecl/applications && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kw_list.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
applications/CMakeFiles/kw_list.dir/build: bin/kw_list.x

.PHONY : applications/CMakeFiles/kw_list.dir/build

applications/CMakeFiles/kw_list.dir/requires: applications/CMakeFiles/kw_list.dir/ecl/kw_list.c.o.requires

.PHONY : applications/CMakeFiles/kw_list.dir/requires

applications/CMakeFiles/kw_list.dir/clean:
	cd /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-libecl/applications && $(CMAKE_COMMAND) -P CMakeFiles/kw_list.dir/cmake_clean.cmake
.PHONY : applications/CMakeFiles/kw_list.dir/clean

applications/CMakeFiles/kw_list.dir/depend:
	cd /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-libecl && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/libecl /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/libecl/applications /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-libecl /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-libecl/applications /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-libecl/applications/CMakeFiles/kw_list.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : applications/CMakeFiles/kw_list.dir/depend

