cmake_minimum_required(VERSION 3.17)
project(untitled5)

set(CMAKE_CXX_STANDARD 14)

enable_testing()
add_subdirectory(googletest)
include_directories(googletest/googletest/include)

set(SOURCE_FILES Function.cpp)
add_executable(untitled5 main.cpp ${SOURCE_FILES})
add_executable(tests tests.cpp ${SOURCE_FILES})

target_link_libraries(tests gtest)