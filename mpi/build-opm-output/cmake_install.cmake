# Install script for directory: /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/output" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/output/OutputWriter.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/output/data" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/output/data/Wells.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/output/data" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/output/data/Cells.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/test_util" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/test_util/summaryRegressionTest.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/test_util" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/test_util/summaryIntegrationTest.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/test_util" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/test_util/summaryComparator.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/output/eclipse" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/output/eclipse/EclipseGridInspector.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/output/eclipse" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/output/eclipse/EclipseIOUtil.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/output/eclipse" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/output/eclipse/EclipseIO.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/output/eclipse" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/output/eclipse/LinearisedOutputTable.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/output/eclipse" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/output/eclipse/RestartIO.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/output/eclipse" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/output/eclipse/RestartValue.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/output/eclipse" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/output/eclipse/Summary.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/output/eclipse" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/output/eclipse/Tables.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/output/eclipse" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/output/eclipse/RegionCache.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/output/data" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/output/data/Solution.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/test_util" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/test_util/EclFilesComparator.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/test_util" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/test_util/summaryRegressionTest.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/test_util" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/opm/test_util/summaryComparator.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE STATIC_LIBRARY FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output/lib/libopmoutput.a")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/dunecontrol/opm-output" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-output/dune.module")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/opm-output" TYPE FILE RENAME "opm-output-config.cmake" FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output/opm-output-install.cmake")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/opm-output" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output/opm-output-config-version.cmake")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/pkgconfig/opm-output.pc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/pkgconfig" TYPE FILE RENAME "opm-output.pc" FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output/opm-output-install.pc")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareECL" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareECL")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareECL"
         RPATH "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu:/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output/bin/compareECL")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareECL" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareECL")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareECL"
         OLD_RPATH "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu:/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib:"
         NEW_RPATH "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu:/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareECL")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareSummary" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareSummary")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareSummary"
         RPATH "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu:/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output/bin/compareSummary")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareSummary" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareSummary")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareSummary"
         OLD_RPATH "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu:/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib:"
         NEW_RPATH "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu:/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/compareSummary")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-output/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
