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
CMAKE_SOURCE_DIR = /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output

# Utility rule file for distclean.

# Include the progress variables for this target.
include CMakeFiles/distclean.dir/progress.make

CMakeFiles/distclean:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) files
	/usr/bin/cmake --build /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output -- clean
	/usr/bin/cmake -E remove -f CMakeCache.txt cmake_install.cmake config.h config.h.tmp opm-output-config.cmake opm-output-config-version.cmake opm-output-install.cmake opm-output.pc opm-output-install.pc doc/doxygen/Doxyfile doc/doxygen/Doxyfile.in CTestTestfile.cmake DartConfiguration.tcl lib/ install_manifest.txt project-version.h project-version.tmp Makefile dune.module dunemod.tmp
	/usr/bin/cmake -E remove_directory CMakeFiles/
	/usr/bin/cmake -E remove_directory Testing/
	/usr/bin/cmake -DDIR=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output/lib -P /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/share/opm/cmake/Scripts/RemoveEmptyDir.cmake
	/usr/bin/cmake -DDIR=/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output/bin -P /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/share/opm/cmake/Scripts/RemoveEmptyDir.cmake
	/usr/bin/cmake -DDIR:LOCATION=doc/doxygen -P /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/share/opm/cmake/Scripts/RemoveEmptyDir.cmake
	/usr/bin/cmake -DDIR:LOCATION=tests -P /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/share/opm/cmake/Scripts/RemoveEmptyDir.cmake

distclean: CMakeFiles/distclean
distclean: CMakeFiles/distclean.dir/build.make

.PHONY : distclean

# Rule to build all files generated by this target.
CMakeFiles/distclean.dir/build: distclean

.PHONY : CMakeFiles/distclean.dir/build

CMakeFiles/distclean.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/distclean.dir/cmake_clean.cmake
.PHONY : CMakeFiles/distclean.dir/clean

CMakeFiles/distclean.dir/depend:
	cd /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output/CMakeFiles/distclean.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/distclean.dir/depend

