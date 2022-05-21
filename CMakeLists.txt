cmake_minimum_required(VERSION 3.19)
project(oop_project)

set(CMAKE_CXX_STANDARD 98)

add_executable(oop_project main.cpp input/Input.cpp input/Input.h output/Output.cpp output/Output.h domain/destination/Destination.cpp domain/destination/Destination.h domain/recommendation/Recommendation.cpp domain/recommendation/Recommendation.h domain/destination/Airplane.cpp domain/destination/CityBus.cpp domain/destination/Train.cpp domain/station/BusInfo.cpp domain/station/BusInfo.h domain/time/custom_time.cpp domain/time/custom_time.h)