cmake_minimum_required(VERSION 3.6)
project(graph)

add_library(${PROJECT_NAME}
    "./src/BasicImplementation/AdjacencyMatrix.cpp"
    "./src/BasicImplementation/AdjacencyList.cpp"
    "./src/Traversal/BfsAndDfsUsingMatrix.cpp"
    "./src/Traversal/BfsAndDfsUsingList.cpp"
    "./src/TopologicalSort/TpsUsingList.cpp"
    "./src/TopologicalSort/TpsUsingMatrix.cpp"
)

target_include_directories(${PROJECT_NAME} PRIVATE "./include")
