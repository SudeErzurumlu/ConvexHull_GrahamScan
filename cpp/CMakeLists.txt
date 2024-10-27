cmake_minimum_required(VERSION 3.10)
project(ConvexHull_GrahamScan)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(convex_hull src/main.cpp src/graham_scan.cpp)
