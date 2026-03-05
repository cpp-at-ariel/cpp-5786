cmake_minimum_required(VERSION 3.10)
project(CourseProject CXX)

set(CMAKE_CXX_STANDARD 20) # need here 20 because erase using cpp 20 methods
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Auto-generated targets
add_executable(erase erase.cpp)
add_executable(string string.cpp)