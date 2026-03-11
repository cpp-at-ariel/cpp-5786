cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_CLANG_TIDY
    clang-tidy;
    -checks=cppcoreguidelines-*
)

add_executable(move_demo move_demo.cpp)
add_executable(move_demo_operators move_demo_operators.cpp)
add_executable(move_iterable_OLD move_iterable.OLD.cpp)
