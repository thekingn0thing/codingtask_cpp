cmake_minimum_required(VERSION 3.7)
project(codingtasks)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp leetcode/single_number_3.cpp)
add_executable(codingtasks_cpp ${SOURCE_FILES})
