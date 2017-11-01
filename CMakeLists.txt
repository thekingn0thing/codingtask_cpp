cmake_minimum_required(VERSION 3.7)
project(codingtasks)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES leetcode/single_number_3.cpp leetcode/SolutionSearch2DMatrix.cpp leetcode/SolutionSearch2DMatrix.h geekforgeek/MirrorTree.cpp geekforgeek/MirrorTree.h geekforgeek/tree.cpp geekforgeek/tree.h geekforgeek/bigIntSum.cpp geekforgeek/bigIntSum.h leetcode/single_number_3_test.cpp test/test.cpp leetcode/balanced_binary_tree.cpp leetcode/balanced_binary_tree.h leetcode/balanced_binary_tree_test.cpp leetcode/combinations.cpp leetcode/combinations.h leetcode/combinations_test.cpp)
add_executable(codingtasks_cpp ${SOURCE_FILES})
