cmake_minimum_required(VERSION 3.16)
project(clion_leetcode)


set(CMAKE_CXX_STANDARD 11)
set(dir )
include_directories(.)


add_executable(88 main.cpp vector/vector.h vector/vector.inl list/listnode.h)
add_executable(test test_main.cpp vector/vector.h vector/vector.inl)
add_executable(add test_main.cpp vector/vector.h vector/vector.inl)
add_executable(list list/list_main.cpp list/list.inl list/listnode.h list/list.h list/list_iterator.h)
add_executable(threadpool threadpool/threadpool.cpp threadpool/threadpool.h vector/vector.h vector/vector.inl threadpool/main.cpp)
add_executable(DesginModle threadpool/threadpool.h threadpool/threadpool.cpp)
add_executable(string string/string.h string/string.inl string/string_main.cpp)
target_link_libraries(threadpool pthread)