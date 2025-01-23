cmake_minimum_required(VERSION 3.30)
project(Solution_1765)

set(CMAKE_CXX_STANDARD 26)

add_executable(1267_test main.cpp tests.cpp)

target_link_libraries(1267_test gmock)
