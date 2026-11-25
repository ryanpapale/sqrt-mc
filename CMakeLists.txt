cmake_minimum_required(VERSION 3.20)

project(sqrt_mc
    VERSION 1.0
    DESCRIPTION "Monte Carlo Square Root Approximation"
    LANGUAGES CXX
)

# C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Executable
add_executable(sqrt_mc
    src/sqrt_mc.cpp
)