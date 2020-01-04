cmake_minimum_required(VERSION 3.15.0)
project(ugv VERSION 1.0.0)

set(LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}")
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}")

add_subdirectory(ugv)
add_subdirectory(ugvtest)
