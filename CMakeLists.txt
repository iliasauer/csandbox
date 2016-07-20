cmake_minimum_required(VERSION 3.3)
project(rootproject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

include_directories("${PROJECT_INCLUDE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}")

add_subdirectory(square)
add_subdirectory(helloworld)
add_subdirectory(stackoverflow)
add_subdirectory(maxelement)
add_subdirectory(callocation)
add_subdirectory(allocation)
add_subdirectory(rnarrays)
add_subdirectory(classdemo)