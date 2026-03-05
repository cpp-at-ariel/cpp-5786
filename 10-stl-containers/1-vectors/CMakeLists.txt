cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(arrays arrays.cpp)
add_executable(push_vs_emplace push_vs_emplace.cpp)
add_executable(vector_iterators vector_iterators.cpp)
