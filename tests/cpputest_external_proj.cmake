# include cpputest common settings.
include(cpputest_common.cmake)

# build CppUTest and CppUMock libraries.
include(ExternalProject)
ExternalProject_Add(cpputest
    GIT_REPOSITORY https://github.com/cpputest/cpputest.git
    GIT_TAG v4.0
    INSTALL_DIR ${EXTERNAL_INSTALL_LOCATION}
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=<INSTALL_DIR>
)

# add the installed cpputest and cppumock include directories to those the
# compiler uses to search for include files.
include_directories(${EXTERNAL_INSTALL_LOCATION}/include)

# adds the paths of installed cpputest and cppumock libraries in which the linker
# should search for libraries.
link_directories(${EXTERNAL_INSTALL_LOCATION}/lib)

