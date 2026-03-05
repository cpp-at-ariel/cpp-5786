cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(IntList_bad IntList_bad.cpp)
add_executable(IntList_good IntList_good.cpp)
