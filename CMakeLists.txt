cmake_minimum_required(VERSION 3.5)
project(gtest_example)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 14)

add_executable(gtest_example fake_class.hpp fake_class_tests.cpp)
target_link_libraries(gtest_example ${GTEST_LIBRARIES} pthread)