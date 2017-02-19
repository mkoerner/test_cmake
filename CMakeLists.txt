cmake_minimum_required(VERSION 3.0)

project(test_cmake)

enable_testing()

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

file(GLOB LIB_SOURCES src/*.cpp)
add_library(hello STATIC ${LIB_SOURCES})

file(GLOB SOURCES app/*.cpp)
add_executable(app ${SOURCES})
target_link_libraries(app hello)

file(GLOB TESTS test/*.cpp)
add_executable(run_test ${TESTS})
target_link_libraries(run_test hello)
add_test(run_test run_test)

