set(CMAKE_C_STANDARD 99)

set(CURRENT_EXE_NAME cpputest_exasple_pythagorean)
set(SOURCE_FILES main.c pythagorean.c square_root.c)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_executable(${CURRENT_EXE_NAME} ${SOURCE_FILES})

# link against math library.
target_link_libraries(${CURRENT_EXE_NAME} m)
install(TARGETS ${CURRENT_EXE_NAME} DESTINATION bin)
