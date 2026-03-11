cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_CLANG_TIDY
    clang-tidy;
    -checks=cppcoreguidelines-*
)

add_executable(istream_iterator istream-iterator.cpp)
add_executable(ostream_iterator ostream-iterator.cpp)
add_executable(vector_insert_iterator vector-insert-iterator.cpp)
