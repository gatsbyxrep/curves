#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "curves::CurvesLibrary" for configuration "MinSizeRel"
set_property(TARGET curves::CurvesLibrary APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(curves::CurvesLibrary PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/CurvesLibrary.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/CurvesLibrary.dll"
  )

list(APPEND _cmake_import_check_targets curves::CurvesLibrary )
list(APPEND _cmake_import_check_files_for_curves::CurvesLibrary "${_IMPORT_PREFIX}/lib/CurvesLibrary.lib" "${_IMPORT_PREFIX}/bin/CurvesLibrary.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
