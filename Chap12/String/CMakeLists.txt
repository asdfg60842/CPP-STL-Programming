cmake_minimum_required(VERSION 3.26)
project(String)

set(CMAKE_CXX_STANDARD 17)

#add_executable(String StringCTOR.cpp)

add_executable(StringCTOR StringCTOR.cpp)
add_executable(CStr CStr.cpp)
add_executable(Compare Compare.cpp)
add_executable(Copy Copy.cpp)
add_executable(Find Find.cpp)
add_executable(Insert Insert.cpp)
add_executable(Substr Substr.cpp)
add_executable(Getline Getline.cpp)
add_executable(Replace Replace.cpp)
add_executable(Append Append.cpp)
add_executable(Assign Assign.cpp)