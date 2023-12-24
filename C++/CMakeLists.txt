cmake_minimum_required(VERSION 3.6)
project("Data Structure and Algorithm in C++")

# file(GLOB_RECURSE SRC_FILES "./main/src/*.cpp")
add_executable(run )
target_link_directories(run PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/main/include")
