set(CppUTestExt_src
        ${CMAKE_CURRENT_LIST_DIR}/CodeMemoryReportFormatter.cpp
        ${CMAKE_CURRENT_LIST_DIR}/IEEE754ExceptionsPlugin.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MemoryReporterPlugin.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MockFailure.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MockSupportPlugin.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MockActualCall.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MockSupport_c.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MemoryReportAllocator.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MockExpectedCall.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MockNamedValue.cpp
        ${CMAKE_CURRENT_LIST_DIR}/OrderedTest.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MemoryReportFormatter.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MockExpectedCallsList.cpp
        ${CMAKE_CURRENT_LIST_DIR}/MockSupport.cpp
)

set(CppUTestExt_headers
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/CodeMemoryReportFormatter.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/IEEE754ExceptionsPlugin.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MemoryReportAllocator.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MockExpectedCall.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MockCheckedExpectedCall.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MockExpectedCallsList.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MockSupportPlugin.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MemoryReportFormatter.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MockFailure.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MockSupport.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MockSupport_c.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/GMock.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/GTest.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MemoryReporterPlugin.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/OrderedTest.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/GTestConvertor.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MockActualCall.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MockCheckedActualCall.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MockNamedValue.h
        ${CMAKE_CURRENT_LIST_DIR}/CppUTestExt/MockSupport.h
)

add_library(CppUTestExt STATIC ${CppUTestExt_src} ${CppUTestExt_headers})

target_include_directories(CppUTestExt
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/../CppUTest
)

# this is the include directory
# the following "set" statetement exports across the project a global variable called
# CPPUTESTEXT_SRC_DIR  that expands to whatever needs to included when using "CppUTestExt" library
set(CPPUTESTEXT_SRC_DIR ${CMAKE_CURRENT_LIST_DIR} CACHE INTERNAL "this is directory to be included for using CppUTestExt library" FORCE)
