cmake_minimum_required(VERSION 3.30)
project(Solution_2342)

set(CMAKE_CXX_STANDARD 26)

add_executable(2342_test main.cpp tests.cpp)

target_link_libraries(2342_test gmock)
