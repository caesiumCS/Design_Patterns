cmake_minimum_required(VERSION 3.24)

set (CMAKE_CXX_STANDARD 17)

project(factory)

set(SOURCE_EXE main.cpp)

include_directories(lib)

add_executable(main ${SOURCE_EXE})

add_subdirectory(lib)

target_link_libraries(main lib)