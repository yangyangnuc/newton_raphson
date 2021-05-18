cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(newton_raphson)

add_definitions(-std=c++11)


# find_package(PCL 1.5 REQUIRED)

#include_directories(${PCL_INCLUDE_DIRS})
#link_directories(${PCL_LIBRARY_DIRS})
#add_definitions(${PCL_DEFINITIONS})

add_executable (newton_raphson src/wrapper.cpp)
target_link_libraries (newton_raphson )
