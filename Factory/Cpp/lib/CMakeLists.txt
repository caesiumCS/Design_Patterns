cmake_minimum_required(VERSION 3.24)

project(lib)

set(SOURCE_LIB Ship.cpp
                Truck.cpp 
                TruckFactory.cpp 
                ShipFactory.cpp 
                LogisticCompany.cpp)

add_library(lib STATIC ${SOURCE_LIB})