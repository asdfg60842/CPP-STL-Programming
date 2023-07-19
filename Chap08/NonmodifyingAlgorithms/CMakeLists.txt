cmake_minimum_required(VERSION 3.25)
project(NonmodifyingAlgorithms)

set(CMAKE_CXX_STANDARD 17)

#add_executable(NonmodifyingAlgorithms AdjacentFind1.cpp)

add_executable(AdjacentFind1 AdjacentFind1.cpp)
add_executable(AdjacentFind2 AdjacentFind2.cpp)
add_executable(AdjacentFind3 AdjacentFind3.cpp)
add_executable(Count Count.cpp)
add_executable(CountIf CountIf.cpp)