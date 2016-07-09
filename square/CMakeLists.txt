cmake_minimum_required(VERSION 3.3)
project(csandbox)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(PROJECT1_SRCS
        ${PROJECT_SOURCE_DIR}/math.cpp
        ${PROJECT_SOURCE_DIR}/main.cpp
        ${PROJECT_SOURCE_DIR}/math.h
        )

include_directories("${PROJECT_BINARY_DIR}")
add_executable(csandbox ${PROJECT1_SRCS})
include_directories("${PROJECT_INCLUDE_DIR}")