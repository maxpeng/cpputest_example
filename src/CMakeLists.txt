cmake_minimum_required(VERSION 2.8.11)

project(cpputest_example_pythagorean)

set(CMAKE_C_STANDARD 99)

include(CTest)

set(SOURCE_FILES main.c pythagorean.c square_root.c)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${UMOCK_C_INC_DIR})
include_directories(${TEST_RUNNER_INC_DIR})
include_directories(${CTEST_INC_DIR})
include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(umock_example_pythagorean ${SOURCE_FILES})

# link against math library.
target_link_libraries(umock_example_pythagorean m)
