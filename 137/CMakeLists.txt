cmake_minimum_required(VERSION 3.30)
project(Solution_137)

set(CMAKE_CXX_STANDARD 26)

add_executable(137_test main.cpp tests.cpp)

target_link_libraries(137_test gmock)
