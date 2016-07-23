cmake_minimum_required(VERSION 3.3)
project(inheritance)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

set(INHERITANCE_SRCS
        ${PROJECT_SOURCE_DIR}/main.cpp
        src/A.cpp src/A.h src/B.cpp src/B.h src/C.cpp src/C.h src/I.cpp src/I.h src/D.cpp src/D.h)

option (SEPARATE_BUILD OFF)

if (SEPARATE_BUILD)
    if (SEPARATE_BUILD STREQUAL "ON")
        include_directories("${CMAKE_SOURCE_DIR}/../include")
    else()
        include_directories("${SEPARATE_BUILD}")
    endif()
endif (SEPARATE_BUILD)

include_directories("${PROJECT_BINARY_DIR}")
add_executable(inheritance ${INHERITANCE_SRCS})
include_directories("${PROJECT_INCLUDE_DIR}")