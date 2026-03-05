cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(is_integral is_integral.cpp)
add_executable(is_same is_same.cpp)
add_executable(vector_rvalue vector_rvalue.cpp)
