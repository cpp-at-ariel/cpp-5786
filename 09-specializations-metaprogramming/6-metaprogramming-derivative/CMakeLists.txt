cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(animate_demo animate_demo.cpp)
add_executable(derivative_demo derivative_demo.cpp)
add_executable(functors_demo functors_demo.cpp)
