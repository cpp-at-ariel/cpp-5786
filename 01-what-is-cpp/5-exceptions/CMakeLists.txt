cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_CLANG_TIDY
    clang-tidy;
    -checks=cppcoreguidelines-*
)

add_executable(throw_a_string throw_a_string.cpp)
add_executable(throw_an_exception throw_an_exception.cpp)
add_executable(throw_an_object throw_an_object.cpp)
