cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LineTest LineTest.cpp units/Line.cpp units/Point.cpp)
add_executable(PointTest PointTest.cpp units/Line.cpp units/Point.cpp)
