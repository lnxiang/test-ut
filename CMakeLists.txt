cmake_minimum_required(VERSION 3.1...3.29)
#SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}  -fPIC ")
#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
project(
  Add
  VERSION 1.0
  LANGUAGES CXX)

enable_testing()
find_package(GTest REQUIRED)

#include_directories(/usr/src/googletest/googletest/include/gtest)
#link_directories(/usr/lib/x86_64-linux-gnu)

add_library(add src/add.cpp)
target_include_directories(add PUBLIC src)

#Add the test
add_executable(test_add unit_test/test_add.cpp)
target_link_libraries(test_add GTest::Main add)

add_Test(NAME AddTest COMMAND test_add)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
target_link_libraries(add gcov)

