cmake_minimum_required(VERSION 3.25)
project(MultiSet)

set(CMAKE_CXX_STANDARD 17)

#add_executable(MultiSet Insert.cpp)

add_executable(Insert Insert.cpp)
add_executable(FindFunc FindFunc.cpp)
add_executable(EqualRange EqualRange.cpp)