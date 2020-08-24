cmake_minimum_required(VERSION 3.17)
project(exampleOLC)

set(CMAKE_CXX_STANDARD 14)

add_executable(exampleOLC main.cpp)
target_link_libraries(exampleOLC X11 GL pthread png stdc++fs)
