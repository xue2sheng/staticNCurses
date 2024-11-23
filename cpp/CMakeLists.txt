# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.10...3.20)
project(staticNCurses)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create static library for SillyLib
add_library(SillyLib STATIC ${CMAKE_SOURCE_DIR}/src/SillyLib.cpp)

# Include directory for SillyLib header files
target_include_directories(SillyLib PUBLIC ${CMAKE_SOURCE_DIR}/src)
