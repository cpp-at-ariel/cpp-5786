cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(DestructorsAndScopes.exe DestructorsAndScopes.cpp units/IntList.cpp)
add_executable(Error1MemoryLeak.exe Error1MemoryLeak.cpp units/IntList.cpp)
add_executable(Error2DoubleDestruction.exe Error2DoubleDestruction.cpp units/IntList.cpp)
add_executable(scope.exe scope.cpp)
