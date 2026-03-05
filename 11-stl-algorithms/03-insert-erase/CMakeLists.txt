cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(insert_one insert_one.cpp)
add_executable(insert_range insert_range.cpp)
add_executable(loop_past_the_end loop-past-the-end.cpp)
add_executable(odd_elements_erase odd_elements_erase.cpp)
