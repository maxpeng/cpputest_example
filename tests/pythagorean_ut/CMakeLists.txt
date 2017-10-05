cmake_minimum_required(VERSION 2.8.11)

## only support ctest now.
#option(use_ctest "set USE_CTEST to ON to use CTest." ON)
#option(use_cppunittest "set CPP_UNITTEST to ON to use cppunittest" OFF)

#if(use_ctest)
#    add_definitions(-DUSE_CTEST)
#elseif(use_cppunittest)
#    add_definitions(-DCPP_UNITTEST)
#else()
#    message(FATAL_ERROR "You need to select either \"use_ctest\" or \"use_cppunittest\" option.")
#endif()
add_definitions(-DUSE_CTEST)

include_directories(${CPPUTEST_SRC_DIR})
include_directories(${CPPUTESTEXT_SRC_DIR})
include_directories(${PROJECT_SOURCE_DIR}/src)

set(SOURCE_FILES
    main.cpp
    pythagorean_ut.cpp
    ${PROJECT_SOURCE_DIR}/src/pythagorean.c
    square_root_mock.cpp)

add_executable(pythagorean_ut ${SOURCE_FILES})
target_link_libraries(pythagorean_ut CppUTest CppUTestExt)

add_test(pythagorean_test pythagorean_ut)