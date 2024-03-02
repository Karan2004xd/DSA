cmake_minimum_required(VERSION 3.6)
project("Data Structure and Algorithm in C++")

add_subdirectory("./LinkedLists")
add_subdirectory("./Stack")
add_subdirectory("./Queue")
add_subdirectory("./Tree")
add_subdirectory("./Hashing")
add_subdirectory("./Algorithm")
add_subdirectory("./Graph")

add_executable(runner "./Demo.cpp")

# Linked Lists
# target_link_libraries(runner PRIVATE list)

# Stack
# target_link_libraries(runner PRIVATE stack)

# Queue
# target_link_libraries(runner PRIVATE queue)

# Tree
target_link_libraries(runner PRIVATE tree)

# Hashing
# target_link_libraries(runner PRIVATE hashing)

# Algorithm
# target_link_libraries(runner PRIVATE algo)

# Graph
# target_link_libraries(runner PRIVATE graph)
