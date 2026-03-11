cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_CLANG_TIDY
    clang-tidy;
    -checks=cppcoreguidelines-*
)

add_executable(PointTest Point.cpp PointTest.cpp)
add_executable(PointTestWithArrays Point.cpp PointTestWithArrays.cpp)
add_executable(WrongProgramWithoutConstructor Point.cpp WrongProgramWithoutConstructor.cpp)
add_executable(default Point.cpp default.cpp)
