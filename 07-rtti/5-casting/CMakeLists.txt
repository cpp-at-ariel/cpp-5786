cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(_1_reinterpret_cast 1-reinterpret_cast.cpp)
add_executable(_2_static_cast 2-static_cast.cpp)
add_executable(_3_dynamic_cast 3-dynamic_cast.cpp)
