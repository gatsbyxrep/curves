#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "curves::curves" for configuration "Debug"
set_property(TARGET curves::curves APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(curves::curves PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/curvesd.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/curvesd.dll"
  )

list(APPEND _cmake_import_check_targets curves::curves )
list(APPEND _cmake_import_check_files_for_curves::curves "${_IMPORT_PREFIX}/lib/curvesd.lib" "${_IMPORT_PREFIX}/bin/curvesd.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
