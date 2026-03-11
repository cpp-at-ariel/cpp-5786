cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_CLANG_TIDY
    clang-tidy;
    -checks=cppcoreguidelines-*
)

add_executable(assign_a_reference assign_a_reference.cpp)
add_executable(lvalue_rvalue_1 lvalue_rvalue_1.cpp)
add_executable(lvalue_rvalue_2 lvalue_rvalue_2.cpp)
add_executable(optional_null_reference optional/null-reference.cpp)
add_executable(optional_reference_from_pointer optional/reference-from-pointer.cpp)
add_executable(optional_reference_to_pointer optional/reference-to-pointer.cpp)
