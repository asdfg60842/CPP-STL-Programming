cmake_minimum_required(VERSION 3.26)
project(IteratorTraits)

set(CMAKE_CXX_STANDARD 17)

#add_executable(IteratorTraits Advance.cpp)

add_executable(Advance Advance.cpp)
add_executable(Distance Distance.cpp)
add_executable(IteratorTraits IteratorTraits.cpp)