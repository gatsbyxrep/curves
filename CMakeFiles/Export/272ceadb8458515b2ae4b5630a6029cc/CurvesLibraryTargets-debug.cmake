#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "curves::CurvesLibrary" for configuration "Debug"
set_property(TARGET curves::CurvesLibrary APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(curves::CurvesLibrary PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/CurvesLibraryd.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/CurvesLibraryd.dll"
  )

list(APPEND _cmake_import_check_targets curves::CurvesLibrary )
list(APPEND _cmake_import_check_files_for_curves::CurvesLibrary "${_IMPORT_PREFIX}/lib/CurvesLibraryd.lib" "${_IMPORT_PREFIX}/bin/CurvesLibraryd.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
