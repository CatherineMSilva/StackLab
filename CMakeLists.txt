cmake_minimum_required(VERSION 3.24)
project(StackLab)

set(CMAKE_CXX_STANDARD 17)

add_executable(StackLab stackQueue.cpp Stack.cpp Stack.h List.h List.cpp Queue.cpp Queue.h)
