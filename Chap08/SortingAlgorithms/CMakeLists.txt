cmake_minimum_required(VERSION 3.25)
project(SortingAlgorithms)

set(CMAKE_CXX_STANDARD 17)

#add_executable(SortingAlgorithms MakeHeap.cpp)

add_executable(MakeHeap MakeHeap.cpp)
add_executable(PushHeap PushHeap.cpp)
add_executable(PopHeap PopHeap.cpp)
add_executable(SortHeap SortHeap.cpp)
add_executable(Heap Heap.cpp)
add_executable(NthElement NthElement.cpp)
add_executable(Sort Sort.cpp)
add_executable(PartialSort PartialSort.cpp)
add_executable(StableSort StableSort.cpp)
add_executable(PartialSortCopy PartialSortCopy.cpp)