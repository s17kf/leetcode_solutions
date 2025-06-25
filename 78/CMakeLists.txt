cmake_minimum_required(VERSION 3.30)
project(Solution_78)

set(CMAKE_CXX_STANDARD 26)

add_executable(78_test main.cpp tests.cpp)

target_link_libraries(78_test gmock)
