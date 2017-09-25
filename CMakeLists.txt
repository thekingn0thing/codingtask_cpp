cmake_minimum_required(VERSION 3.7)
project(codingtasks)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp leetcode/single_number_3.cpp leetcode/SolutionSearch2DMatrix.cpp leetcode/SolutionSearch2DMatrix.h geekforgeek/MirrorTree.cpp geekforgeek/MirrorTree.h geekforgeek/tree.cpp geekforgeek/tree.h)
add_executable(codingtasks_cpp ${SOURCE_FILES})
