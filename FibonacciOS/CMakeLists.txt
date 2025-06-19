cmake_minimum_required(VERSION 3.10.0)
project(lab3 VERSION 0.1.0 LANGUAGES C CXX)
file(GLOB  CPPS "main.cpp")

add_executable( lab3 main.cpp )
include(CTest)
enable_testing()

