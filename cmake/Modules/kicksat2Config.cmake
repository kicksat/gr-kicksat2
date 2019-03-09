INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_KICKSAT2 kicksat2)

FIND_PATH(
    KICKSAT2_INCLUDE_DIRS
    NAMES kicksat2/api.h
    HINTS $ENV{KICKSAT2_DIR}/include
        ${PC_KICKSAT2_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    KICKSAT2_LIBRARIES
    NAMES gnuradio-kicksat2
    HINTS $ENV{KICKSAT2_DIR}/lib
        ${PC_KICKSAT2_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(KICKSAT2 DEFAULT_MSG KICKSAT2_LIBRARIES KICKSAT2_INCLUDE_DIRS)
MARK_AS_ADVANCED(KICKSAT2_LIBRARIES KICKSAT2_INCLUDE_DIRS)

