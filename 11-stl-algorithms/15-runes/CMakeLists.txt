cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_CLANG_TIDY
    clang-tidy;
    -checks=cppcoreguidelines-*
)

add_executable(X_copy X_copy.cpp)
add_executable(X_if X_if.cpp)
add_executable(is_X is_X.cpp)
add_executable(stable_X stable_X.cpp)
