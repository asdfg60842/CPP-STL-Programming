cmake_minimum_required(VERSION 3.25)
project(MutatingAlgorithms)

set(CMAKE_CXX_STANDARD 17)

#add_executable(MutatingAlgorithms NextPermutation1.cpp)
add_executable(NextPermutation1 NextPermutation1.cpp)
add_executable(NextPermutation2 NextPermutation2.cpp)

add_executable(Partition Partition.cpp)
add_executable(StablePartition StablePartition.cpp)
add_executable(RandomShuffle RandomShuffle.cpp)
add_executable(Reverse Reverse.cpp)
add_executable(ReverseCopy ReverseCopy.cpp)
add_executable(RotateCopy RotateCopy.cpp)
add_executable(Rotate Rotate.cpp)