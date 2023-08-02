cmake_minimum_required(VERSION 3.26)
project(FunctionAdaptors)

set(CMAKE_CXX_STANDARD 11)

#add_executable(FunctionAdaptors PtrFun1.cpp)

add_executable(PtrFun1 PtrFun1.cpp)
add_executable(PtrFun2 PtrFun2.cpp)
add_executable(PtrFun3 PtrFun3.cpp)
add_executable(MemFunRef1 MemFunRef1.cpp)
add_executable(MemFunRef2 MemFunRef2.cpp)
add_executable(MemFun MemFun.cpp)