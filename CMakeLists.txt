cmake_minimum_required(VERSION 2.8.11)

project(umock_c_example)
include(CTest)

## only support ctest now.
#option(use_ctest "set USE_CTEST to ON to use CTest." ON)
#option(use_cppunittest "set CPP_UNITTEST to ON to use cppunittest" OFF)

add_subdirectory(testtools)
add_subdirectory(tests)
add_subdirectory(src)
