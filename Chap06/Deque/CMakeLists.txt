cmake_minimum_required(VERSION 3.25)
project(Deque)

set(CMAKE_CXX_STANDARD 17)

#add_executable(Deque PushBack.cpp)

add_executable(PushBack PushBack.cpp)
add_executable(PushFront PushFront.cpp)
add_executable(Iterator Iterator.cpp)
add_executable(Insert Insert.cpp)