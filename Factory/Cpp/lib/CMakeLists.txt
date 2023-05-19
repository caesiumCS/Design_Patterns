cmake_minimum_required(VERSION 3.24)

project(lib)

set(SOURCE_LIB Ship.cpp
                Truck.cpp)

set(HEADERS ITransport.h Ship.h Truck.h)

add_library(lib STATIC ${SOURCE_LIB})