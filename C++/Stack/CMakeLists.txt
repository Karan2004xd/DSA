cmake_minimum_required(VERSION 3.6)
project("Stack")
add_library(stack
    "./src/StackUsingArray.cpp"
    "./src/StackUsingLL.cpp"
)

target_include_directories(stack PRIVATE "./include")
target_link_libraries(stack PRIVATE list)
