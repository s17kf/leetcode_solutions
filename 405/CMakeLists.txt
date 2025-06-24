cmake_minimum_required(VERSION 3.30)
project(Solution_405)

set(CMAKE_CXX_STANDARD 26)

add_executable(405_test main.cpp tests.cpp)

target_link_libraries(405_test gmock)
