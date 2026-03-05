cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(comparators_int comparators_int.cpp)
add_executable(comparators_point comparators_point.cpp)
add_executable(loops loops.cpp)
add_executable(set_without_operator_less_than set_without_operator_less_than.cpp)
