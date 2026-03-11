cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_CLANG_TIDY
    clang-tidy;
    -checks=cppcoreguidelines-*
)

add_executable(a_minimal_program a_minimal_program.cpp)
add_executable(a_new_without_delete a_new_without_delete.cpp)
add_executable(class_with_destructor class_with_destructor.cpp)
add_executable(class_without_destructor class_without_destructor.cpp)
