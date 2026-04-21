cmake_minimum_required(VERSION 3.31)
project(Biblioteca)

set(CMAKE_CXX_STANDARD 23)

add_executable(Biblioteca main.cpp
        biblioteca.h
        biblioteca.cpp)
