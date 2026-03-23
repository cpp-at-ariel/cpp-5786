cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(throw_a_string throw_a_string.cpp)
add_executable(throw_an_exception throw_an_exception.cpp)
add_executable(throw_an_object throw_an_object.cpp)
