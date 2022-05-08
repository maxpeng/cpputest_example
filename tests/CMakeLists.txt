# load and build cpputest/cppumock library.
include(cpputest_external_proj.cmake)

# build the unit test(s).
add_subdirectory(pythagorean_ut)