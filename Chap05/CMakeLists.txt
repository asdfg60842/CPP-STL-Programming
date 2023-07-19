cmake_minimum_required(VERSION 3.25)
project(Chap05)

set(CMAKE_CXX_STANDARD 17)

#add_executable(Chap05 Container.cpp)

add_executable(Container Container.cpp)
add_executable(Iterator Iterator1.cpp)
add_executable(Iterator2 Iterator2.cpp)
add_executable(Algorithms1 Algorithms1.cpp)
add_executable(Algorithms2 Algorithms2.cpp)
add_executable(Functor Functor.cpp)
add_executable(Adaptor1 Adaptor1.cpp)
add_executable(Adaptor2 Adaptor2.cpp)
add_executable(Adaptor3 Adaptor3.cpp)
add_executable(Adaptor4 Adaptor4.cpp)
add_executable( Adaptor5 " Adaptor5.cpp")
add_executable(Allocator Allocator.cpp)