cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(image1_struct image1_struct.cpp)
add_executable(image2_ptr image2_ptr.cpp)
add_executable(image3_virtual image3_virtual.cpp)
