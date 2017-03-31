cmake_minimum_required(VERSION 3.6)
project(General3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp
        headers/tabStack.h
        headers/STLstack.h
        headers/defines.h)
add_executable(General3 ${SOURCE_FILES})