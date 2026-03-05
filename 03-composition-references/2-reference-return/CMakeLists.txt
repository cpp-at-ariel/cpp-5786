cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Complex Complex.cpp)
add_executable(a_referece_as_return_value a_referece_as_return_value.cpp)
