cmake_minimum_required(VERSION 3.1)
project(det)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")

find_package(xtl REQUIRED)
find_package(xtensor REQUIRED)

add_executable(det src/main.cpp src/det.cpp src/dimension.cpp)

target_link_libraries(det xtensor)
