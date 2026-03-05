cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(fill_iota fill_iota.cpp)
add_executable(generate_bind generate_bind.cpp)
add_executable(replace replace.cpp)
