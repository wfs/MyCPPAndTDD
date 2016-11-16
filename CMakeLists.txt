cmake_minimum_required(VERSION 3.5.1)

project(MyCPPAndTDD)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 --coverage")

include_directories(Line)
include_directories(Soundex)

add_subdirectory(Line)
add_subdirectory(Line_Test)
add_subdirectory(Soundex)