cmake_minimum_required(VERSION 3.15)

project(unit_testing)

add_subdirectory(googletest)
add_executable(test test.cpp basic_math.cpp)

target_link_libraries(test PRIVATE gtest)