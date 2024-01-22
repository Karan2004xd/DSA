cmake_minimum_required(VERSION 3.6)
project(graph)

add_library(${PROJECT_NAME}
    "./src/BasicImplementation/AdjacencyMatrix.cpp"
)

target_include_directories(${PROJECT_NAME} PRIVATE "./include")
