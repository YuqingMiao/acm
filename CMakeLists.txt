cmake_minimum_required(VERSION 3.7)
project(acm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        problems/uva455.cpp
        )

add_executable(acm ${SOURCE_FILES})