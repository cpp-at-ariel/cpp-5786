cmake_minimum_required(VERSION 3.10)
project(AutoProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(numeric_queries numeric_queries.cpp)
add_executable(property_queries property_queries.cpp)
add_executable(search_queries search_queries.cpp)
add_executable(two_range_queries two_range_queries.cpp)
