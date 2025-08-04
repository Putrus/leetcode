cmake_minimum_required(VERSION 3.16)

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
   src/two_sum.cpp
   )

enable_testing()

find_package(GTest CONFIG REQUIRED)

include(cmake/UpdateSubmodules.cmake)

add_executable(leetcode_cpp ${HEADERS} ${SOURCES})

target_link_libraries(leetcode_cpp PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(leetcode_cpp)