cmake_minimum_required(VERSION 3.16)
project(clion_leetcode)

set(CMAKE_CXX_STANDARD 11)
set(dir )
include_directories(.)


add_executable(88 main.cpp vector/vector.h vector/vector.inl)
add_executable(test test_main.cpp vector/vector.h vector/vector.inl)
add_executable(add test_main.cpp vector/vector.h vector/vector.inl)
add_executable(list list/list.cpp)
add_executable(threadpool threadpool/threadpool.cpp threadpool/threadpool.h vector/vector.h vector/vector.inl threadpool/main.cpp)
add_executable(DesginModle threadpool/threadpool.h threadpool/threadpool.cpp)
target_link_libraries(threadpool pthread)