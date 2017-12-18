#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "opmjson" for configuration "Release"
set_property(TARGET opmjson APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(opmjson PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C;CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libopmjson.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opmjson )
list(APPEND _IMPORT_CHECK_FILES_FOR_opmjson "${_IMPORT_PREFIX}/lib/libopmjson.a" )

# Import target "opmparser" for configuration "Release"
set_property(TARGET opmparser APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(opmparser PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libopmparser.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS opmparser )
list(APPEND _IMPORT_CHECK_FILES_FOR_opmparser "${_IMPORT_PREFIX}/lib/libopmparser.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
