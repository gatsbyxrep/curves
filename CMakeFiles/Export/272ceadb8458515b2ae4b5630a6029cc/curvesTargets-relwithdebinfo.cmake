#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "curves::curves" for configuration "RelWithDebInfo"
set_property(TARGET curves::curves APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(curves::curves PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/curves.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/curves.dll"
  )

list(APPEND _cmake_import_check_targets curves::curves )
list(APPEND _cmake_import_check_files_for_curves::curves "${_IMPORT_PREFIX}/lib/curves.lib" "${_IMPORT_PREFIX}/bin/curves.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
