cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_CLANG_TIDY
    clang-tidy;
    -checks=cppcoreguidelines-*
)

add_executable(double_args_pair double-args-pair.cpp)
add_executable(numeric_args_array numeric-args-array.cpp)
add_executable(numeric_args_default_value numeric-args-default-value.cpp)
