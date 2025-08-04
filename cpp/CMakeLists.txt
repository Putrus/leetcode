cmake_minimum_required(VERSION 3.6..3.28)

project(leetcode_cpp
   VERSION 0.1.0
   LANGUAGES CXX
   DESCRIPTION "leetcode cpp"
   )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS
   inc/solution.h
   )

set(SOURCES
   )


include(cmake/UpdateSubmodules.cmake)

add_library(STATIC leetcode_cpp ${HEADERS} ${SOURCES})

add_subdirectory(backend)