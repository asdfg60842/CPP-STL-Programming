cmake_minimum_required(VERSION 3.26)
project(ContainerAdaptor)

set(CMAKE_CXX_STANDARD 17)

#add_executable(ContainerAdaptor Stack.cpp)

add_executable(Stack Stack.cpp)
add_executable(Queue Queue.cpp)
add_executable(PriorityQueue PriorityQueue.cpp)