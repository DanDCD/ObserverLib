cmake_minimum_required(VERSION 3.22.1)
project (ObserverLib VERSION 1.0 DESCRIPTION "Basic implementation of the Observer pattern")
set(CMAKE_CXX_STANDARD 17)

# set up the library
add_library(ObserverLib INTERFACE) # header only library so no source files
target_include_directories(ObserverLib INTERFACE include)


# set up tests
include(CTest)
# if top level project, enable testing
if (${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_CURRENT_SOURCE_DIR})
    add_executable(ObserverLibTests tests/observerLibTests.cpp)
    target_link_libraries(ObserverLibTests PRIVATE ObserverLib)
    add_test(Test ObserverLibTests COMMAND ObserverLibTests)
endif ()