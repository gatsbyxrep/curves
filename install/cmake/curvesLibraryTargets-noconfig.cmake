#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "curves::curvesLibrary" for configuration ""
set_property(TARGET curves::curvesLibrary APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(curves::curvesLibrary PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcurvesLibrary.so"
  IMPORTED_SONAME_NOCONFIG "libcurvesLibrary.so"
  )

list(APPEND _cmake_import_check_targets curves::curvesLibrary )
list(APPEND _cmake_import_check_files_for_curves::curvesLibrary "${_IMPORT_PREFIX}/lib/libcurvesLibrary.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
