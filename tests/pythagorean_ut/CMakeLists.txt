cmake_minimum_required(VERSION 2.8.11)

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