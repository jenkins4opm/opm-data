if(NOT opm-parser_FOUND)
  #import the target
  if(NOT ecl_DIR)
      set(ecl_DIR /var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/install/share/cmake/ecl)
  endif()
  # Find without registry
  find_package(ecl NO_CMAKE_PACKAGE_REGISTRY NO_CMAKE_SYSTEM_PACKAGE_REGISTRY)
  # Fall back to registry
  find_package(ecl REQUIRED)

  get_filename_component(_dir "${CMAKE_CURRENT_LIST_FILE}" PATH)
  include("${_dir}/opm-parser-targets.cmake")

  #report other information
  set(opm-parser_INSTALLED "OFF")
  set(opm-parser_PREFIX "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-parser")
  set(opm-parser_INCLUDE_DIRS "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-parser/lib/eclipse/include;/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-parser/lib/json/include")
  set(opm-parser_LIBRARY_DIRS "/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-parser/lib/eclipse;/var/lib/jenkins/workspace/opm-simulators-PR-builder/mpi/build-opm-parser/lib/json")
  set(opm-parser_CXX_FLAGS "-std=c++11 ")
  set(opm-parser_CXX_FLAGS_DEBUG "-pedantic -Wall -Wextra -Wformat-nonliteral -Wcast-align -Wpointer-arith -Wmissing-declarations -Wcast-qual -Wshadow -Wwrite-strings -Wchar-subscripts -Wredundant-decls -g")
  set(opm-parser_CXX_FLAGS_MINSIZEREL "-Os -DNDEBUG")
  set(opm-parser_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")
  set(opm-parser_CXX_FLAGS_RELWITHDEBINFO "-O2 -g -DNDEBUG")
  set(opm-parser_LIBRARIES "opmparser")
  set(opm-parser_MODULE_PATH "/var/lib/jenkins/workspace/opm-simulators-PR-builder/deps/opm-parser/cmake/modules")
endif(NOT opm-parser_FOUND)
