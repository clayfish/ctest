cmake_minimum_required(VERSION 3.5)
project(ctest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB SOURCE_FILES
        "*.c"
        )
add_executable(application ${SOURCE_FILES})
