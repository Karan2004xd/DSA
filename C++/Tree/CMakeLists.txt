cmake_minimum_required(VERSION 3.6)
project(tree)
add_library(tree
    "./src/BasicTree.cpp"
)

target_include_directories(tree PRIVATE "./include")
