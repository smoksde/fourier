cmake_minimum_required(VERSION 3.10)
project(fourier)

# Add the executable
add_executable(fourier main.cpp)

# Include header files directory
target_include_directories(fourier PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Set C++ standard
set_property(TARGET fourier PROPERTY CXX_STANDARD 17)
