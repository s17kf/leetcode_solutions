cmake_minimum_required(VERSION 3.30)
project(Solution_1910)

set(CMAKE_CXX_STANDARD 26)

add_executable(1910_test main.cpp tests.cpp)

target_link_libraries(1910_test gmock)
