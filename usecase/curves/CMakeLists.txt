cmake_minimum_required(VERSION 3.9)

project(curves-usage LANGUAGES C CXX)

find_package(curvesLibrary 0.0.1 REQUIRED CONFIG)

find_package(OpenMP REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

if(OpenMP_CXX_FOUND)
    target_link_libraries(${PROJECT_NAME} PRIVATE OpenMP::OpenMP_CXX)
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE curves::curvesLibrary)
