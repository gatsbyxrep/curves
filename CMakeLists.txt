cmake_minimum_required(VERSION 3.15)

set(namespace "curves")
project("curvesLibrary"
    LANGUAGES C CXX
    VERSION 0.0.1
)

add_library(${PROJECT_NAME} SHARED)

set(HEADERS
    include/circle.h
    include/curve.h
    include/curve3abstract.h
    include/curves3factory.h
    include/ellipse.h
    include/helix3.h
    include/point3.h
    include/vector3.h
)
set(SOURCE_FILES src/circle.cpp src/curve.cpp src/curve3abstract.cpp src/curves3factory.cpp src/ellipse.cpp src/helix3.cpp)
target_sources(${PROJECT_NAME}
    PRIVATE
       ${SOURCE_FILES}
       ${HEADERS}
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        # where the library itself will look for its internal headers
        ${CMAKE_CURRENT_SOURCE_DIR}/src
    PUBLIC
        # where top-level project will look for the library's public headers
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        # where external projects will look for the library's public headers
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

set(public_headers
    include/circle.h
    include/curve.h
    include/curve3abstract.h
    include/curves3factory.h
    include/ellipse.h
    include/helix3.h
    include/point3.h
    include/vector3.h
)

if(CMAKE_COMPILER_IS_GNUCXX)
    target_compile_options(${PROJECT_NAME} PRIVATE -Werror)
else()
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON) # would be better by flag
endif()


set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
#message(STATUS "CMake module path: ${CMAKE_MODULE_PATH}")
include(Installing)
