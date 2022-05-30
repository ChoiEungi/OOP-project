cmake_minimum_required(VERSION 3.22)
project(untitled)

set(CMAKE_CXX_STANDARD 98)

add_executable(untitled main.cpp input/Input.cpp input/Input.h output/Output.cpp output/Output.h domain/destination/Destination.cpp domain/recommendation/Recommendation.cpp domain/recommendation/Recommendation.h domain/destination/Airplane.cpp domain/destination/ExpressBus.cpp domain/destination/Train.cpp domain/station/BusInfo.cpp domain/station/BusInfo.h domain/time/CustomTime.cpp domain/time/CustomTime.h domain/station/BusInfoList.cpp domain/station/BusInfoList.h domain/destination/DestinationList.cpp domain/destination/DestinationList.h)