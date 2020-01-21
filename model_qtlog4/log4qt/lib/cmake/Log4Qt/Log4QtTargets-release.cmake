#----------------------------------------------------------------
# Generated CMake target import file for configuration "release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Log4Qt::log4qt" for configuration "release"
set_property(TARGET Log4Qt::log4qt APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Log4Qt::log4qt PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liblog4qt.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS Log4Qt::log4qt )
list(APPEND _IMPORT_CHECK_FILES_FOR_Log4Qt::log4qt "${_IMPORT_PREFIX}/lib/liblog4qt.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
