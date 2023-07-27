cmake_minimum_required(VERSION 3.25)
project(SortedRangeAlgorithms)

set(CMAKE_CXX_STANDARD 17)

#add_executable(SortedRangeAlgorithms BinarySearch1.cpp)

add_executable(BinarySearch1 BinarySearch1.cpp)
add_executable(BinarySearch2 BinarySearch2.cpp)
add_executable(BinarySearch3 BinarySearch3.cpp)
add_executable(Includes Includes.cpp)
add_executable(LowerUpperBound LowerUpperBound.cpp)
add_executable(EqualRange EqualRange.cpp)
add_executable(Merge Merge.cpp)
add_executable(InplaceMerge InplaceMerge.cpp)
add_executable(SetUnion SetUnion.cpp)
add_executable(Set Set.cpp)