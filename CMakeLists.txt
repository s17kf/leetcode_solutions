cmake_minimum_required(VERSION 3.30)

project(leetcode)

include_directories(
        googletest/googletest/include
        googletest/googlemock/include)

add_subdirectory(googletest)

add_subdirectory(2661)
add_subdirectory(1765)
add_subdirectory(1267)
add_subdirectory(2948)
add_subdirectory(1910)
add_subdirectory(2342)
