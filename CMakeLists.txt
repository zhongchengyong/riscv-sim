cmake_minimum_required(VERSION 3.17)
project(riscv-sim)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

enable_testing()

add_subdirectory(main)
add_subdirectory(test)
add_subdirectory(riscv)
add_subdirectory(common)

