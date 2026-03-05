cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(heaps heaps.cpp)
add_executable(partition partition.cpp)
add_executable(permutations permutations.cpp)
add_executable(rotate rotate.cpp)
add_executable(shapley_value shapley_value.cpp)
add_executable(shuffle shuffle.cpp)
add_executable(sort sort.cpp)
