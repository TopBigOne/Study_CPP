cmake_minimum_required(VERSION 3.22)
project(function_point)

set(CMAKE_CXX_STANDARD 17)

add_executable(function_point main.cpp func_callback.cpp func_callback.h)
