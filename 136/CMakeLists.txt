cmake_minimum_required(VERSION 3.30)
project(Solution_136)

set(CMAKE_CXX_STANDARD 26)

add_executable(136_test main.cpp tests.cpp)

target_link_libraries(136_test gmock)
