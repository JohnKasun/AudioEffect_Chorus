cmake_minimum_required(VERSION 3.15)
Project(JohnK VERSION 0.0.1)
set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_subdirectory(src bin)
add_subdirectory(cmake)
add_subdirectory(test)
add_subdirectory(extern)

