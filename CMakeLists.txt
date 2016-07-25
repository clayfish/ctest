cmake_minimum_required(VERSION 3.5)
project(ctest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Application.c Calculator.c)
add_executable(ctest Application.c)
add_executable(calculator Calculator.c)
