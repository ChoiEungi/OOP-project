cmake_minimum_required(VERSION 3.19)
project(oop_project)

set(CMAKE_CXX_STANDARD 98)

add_executable(oop_project main.cpp input/Input.cpp input/Input.h output/Output.cpp output/Output.h domain/destination/Destination.cpp domain/destination/Destination.h domain/station/Station.cpp domain/station/Station.h domain/recommendation/Recommendation.cpp domain/recommendation/Recommendation.h domain/destination/Airplane.cpp)