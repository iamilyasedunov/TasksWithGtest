cmake_minimum_required(VERSION 3.12)
project(TriangleWithTests)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_STANDARD 17)


add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

#main run all tests
#headers files in include
set(SOURCE_FILES src/main.cpp  include/task1.h include/task2.h include/task3.h tests/test.cpp include/headers.h)

#adding all linked files
add_executable(TriangleWithTests ${SOURCE_FILES})

target_link_libraries(TriangleWithTests gtest gtest_main)
