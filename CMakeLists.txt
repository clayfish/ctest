cmake_minimum_required(VERSION 3.5)
project(ctest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Application.c Calculator.c)
add_executable(ctest Application.c)
add_executable(calculator Calculator.c)
add_executable(greater findGreater.c)
add_executable(even EvenOdd.c)
add_executable(tabel Tabel.c)