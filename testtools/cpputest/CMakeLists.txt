set(CppUTest_src
        ${CMAKE_CURRENT_LIST_DIR}/CommandLineArguments.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MemoryLeakWarningPlugin.cpp
        ${CMAKE_CURRENT_LIST_DIR}/TestHarness_c.cpp
        ${CMAKE_CURRENT_LIST_DIR}/TestRegistry.cpp
        ${CMAKE_CURRENT_LIST_DIR}/CommandLineTestRunner.cpp
        ${CMAKE_CURRENT_LIST_DIR}/SimpleString.cpp
        ${CMAKE_CURRENT_LIST_DIR}/TestMemoryAllocator.cpp
        ${CMAKE_CURRENT_LIST_DIR}/TestResult.cpp
        ${CMAKE_CURRENT_LIST_DIR}/JUnitTestOutput.cpp
        ${CMAKE_CURRENT_LIST_DIR}/TeamCityTestOutput.cpp
        ${CMAKE_CURRENT_LIST_DIR}/TestFailure.cpp
        ${CMAKE_CURRENT_LIST_DIR}/TestOutput.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MemoryLeakDetector.cpp
        ${CMAKE_CURRENT_LIST_DIR}/TestFilter.cpp
        ${CMAKE_CURRENT_LIST_DIR}/TestPlugin.cpp
        ${CMAKE_CURRENT_LIST_DIR}/TestTestingFixture.cpp
        ${CMAKE_CURRENT_LIST_DIR}/SimpleMutex.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Utest.cpp

        ${CMAKE_CURRENT_LIST_DIR}/UtestPlatform.cpp
)


set(CppUTest_headers
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/CommandLineArguments.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/PlatformSpecificFunctions.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/TestMemoryAllocator.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/CommandLineTestRunner.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/PlatformSpecificFunctions_c.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/TestOutput.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/CppUTestConfig.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/SimpleString.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/TestPlugin.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/JUnitTestOutput.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/TeamCityTestOutput.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/StandardCLibrary.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/TestRegistry.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/MemoryLeakDetector.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/TestFailure.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/TestResult.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/MemoryLeakDetectorMallocMacros.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/TestFilter.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/TestTestingFixture.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/MemoryLeakDetectorNewMacros.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/TestHarness.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/Utest.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/MemoryLeakWarningPlugin.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/TestHarness_c.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTest/UtestMacros.h
)

add_library(CppUTest STATIC ${CppUTest_src} ${CppUTest_headers})

target_include_directories(CppUTest
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)

# this is the include directory
# the following "set" statetement exports across the project a global variable called
# CPPUTEST_SRC_DIR  that expands to whatever needs to included when using "CppUTest" library
set(CPPUTEST_SRC_DIR ${CMAKE_CURRENT_LIST_DIR} CACHE INTERNAL "this is directory to be included for using CppUTest library" FORCE)
