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
CMAKE_SOURCE_DIR = /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-core

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-core

# Utility rule file for check-commits.

# Include the progress variables for this target.
include CMakeFiles/check-commits.dir/progress.make

CMakeFiles/check-commits:
	/usr/bin/cmake -DPROJECT_SOURCE_DIR=/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-core -DCMAKE_BINARY_DIR=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-core -P /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/share/opm/cmake/Scripts/CheckCommits.cmake

check-commits: CMakeFiles/check-commits
check-commits: CMakeFiles/check-commits.dir/build.make

.PHONY : check-commits

# Rule to build all files generated by this target.
CMakeFiles/check-commits.dir/build: check-commits

.PHONY : CMakeFiles/check-commits.dir/build

CMakeFiles/check-commits.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/check-commits.dir/cmake_clean.cmake
.PHONY : CMakeFiles/check-commits.dir/clean

CMakeFiles/check-commits.dir/depend:
	cd /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-core && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-core /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-core /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-core /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-core /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-core/CMakeFiles/check-commits.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/check-commits.dir/depend

