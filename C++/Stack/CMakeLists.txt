cmake_minimum_required(VERSION 3.6)
project("Stack")
add_library(stack
    "./src/StackUsingArray.cpp"
)

target_include_directories(stack PUBLIC "./include")
