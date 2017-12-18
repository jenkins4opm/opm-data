# Install script for directory: /var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/ConditionalStorage.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/ErrorMacros.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/Exceptions.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/ResetLocale.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/Unused.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/Valgrind.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/data" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/data/SimulationDataContainer.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/OpmLog" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/OpmLog/CounterLog.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/OpmLog" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/OpmLog/EclipsePRTLog.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/OpmLog" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/OpmLog/LogBackend.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/OpmLog" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/OpmLog/Logger.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/OpmLog" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/OpmLog/LogUtil.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/OpmLog" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/OpmLog/MessageFormatter.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/OpmLog" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/OpmLog/MessageLimiter.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/OpmLog" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/OpmLog/OpmLog.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/OpmLog" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/OpmLog/StreamLog.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/OpmLog" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/OpmLog/TimerLog.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/util/numeric" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/util/numeric/cmp.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/utility/platform_dependent" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/utility/platform_dependent/disable_warnings.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/common/utility/platform_dependent" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/common/utility/platform_dependent/reenable_warnings.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/core/utility/parameters" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/core/utility/parameters/ParameterGroup.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/core/utility/parameters" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/core/utility/parameters/ParameterGroup_impl.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/core/utility/parameters" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/core/utility/parameters/Parameter.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/core/utility/parameters" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/core/utility/parameters/ParameterMapItem.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/core/utility/parameters" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/core/utility/parameters/ParameterRequirement.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/core/utility/parameters" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/core/utility/parameters/ParameterStrings.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opm/core/utility/parameters" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/opm/core/utility/parameters/ParameterTools.hpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE STATIC_LIBRARY FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-common/lib/libopmcommon.a")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/dunecontrol/opm-common" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/dune.module")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/opm-common" TYPE FILE RENAME "opm-common-config.cmake" FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-common/opm-common-install.cmake")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake/opm-common" TYPE FILE FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-common/opm-common-config-version.cmake")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/pkgconfig/opm-common.pc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/lib/x86_64-linux-gnu/pkgconfig" TYPE FILE RENAME "opm-common.pc" FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-common/opm-common-install.pc")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/opm" TYPE DIRECTORY FILES "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-common/cmake")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-common/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
