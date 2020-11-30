cmake_minimum_required(VERSION 3.16)
project(assignment3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(assignment3
        numbers.txt
        sorting.c)
