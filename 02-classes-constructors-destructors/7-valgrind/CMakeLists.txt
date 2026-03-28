cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(a_minimal_program.exe a_minimal_program.cpp)
add_executable(a_new_without_delete.exe a_new_without_delete.cpp)
add_executable(class_with_destructor.exe class_with_destructor.cpp)
add_executable(class_without_destructor.exe class_without_destructor.cpp)
