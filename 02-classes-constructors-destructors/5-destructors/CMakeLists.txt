cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_CLANG_TIDY
    clang-tidy;
    -checks=cppcoreguidelines-*
)

add_executable(DestructorsAndScopes DestructorsAndScopes.cpp units/IntList.cpp)
add_executable(Error1MemoryLeak Error1MemoryLeak.cpp units/IntList.cpp)
add_executable(Error2DoubleDestruction Error2DoubleDestruction.cpp units/IntList.cpp)
add_executable(scope scope.cpp)
