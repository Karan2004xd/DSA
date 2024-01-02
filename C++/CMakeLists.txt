cmake_minimum_required(VERSION 3.6)
project("Data Structure and Algorithm in C++")

add_subdirectory("./LinkedLists")
add_subdirectory("./Stack")

add_executable(runner "./Demo.cpp")
target_link_libraries(runner PRIVATE list stack)
