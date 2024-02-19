cmake_minimum_required(VERSION 3.16)
project(clion_leetcode)

set(CMAKE_CXX_STANDARD 11)
include_directories(./)


add_executable(88 main.cpp vector/vector.h vector/vector.inl)
add_executable(test test_main.cpp vector/vector.h vector/vector.inl)
add_executable(add test_main.cpp vector/vector.h vector/vector.inl)
