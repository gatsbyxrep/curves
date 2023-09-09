#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "curves::CurvesLibrary" for configuration ""
set_property(TARGET curves::CurvesLibrary APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(curves::CurvesLibrary PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libCurvesLibrary.so"
  IMPORTED_SONAME_NOCONFIG "libCurvesLibrary.so"
  )

list(APPEND _cmake_import_check_targets curves::CurvesLibrary )
list(APPEND _cmake_import_check_files_for_curves::CurvesLibrary "${_IMPORT_PREFIX}/lib/libCurvesLibrary.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
