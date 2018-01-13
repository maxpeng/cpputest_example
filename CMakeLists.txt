cmake_minimum_required(VERSION 2.8.11)

project(cpputest_example)

include(CTest)

add_subdirectory(testtools)
add_subdirectory(tests)
add_subdirectory(src)
