# Specify the minimum version for CMake

cmake_minimum_required(VERSION 2.8)

# Project's name
project(mat-mul)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")

add_library(mat-mul-lib mat-mul.c)

set(CMAKE_C_FLAGS "-fopenmp -fopenmp-targets=nvptx64-nvidia-cuda") #-fopenmp-targets=x86_64-unknown-linux-gnu")


add_executable(main ${PROJECT_SOURCE_DIR}/main.c)
target_link_libraries(main mat-mul-lib)
