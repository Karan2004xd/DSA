cmake_minimum_required(VERSION 3.6)
project(graph)

add_library(${PROJECT_NAME}
  "./src/BasicImplementation/AdjacencyMatrix.cpp"
  "./src/BasicImplementation/AdjacencyList.cpp"
  "./src/Traversal/BfsAndDfsUsingMatrix.cpp"
  "./src/Traversal/BfsAndDfsUsingList.cpp"
  "./src/TopologicalSort/TpsUsingList.cpp"
  "./src/TopologicalSort/TpsUsingMatrix.cpp"
  "./src/SSSPP/SSSPPUsingMatrix.cpp"
  "./src/SSSPP/SSSPPUsingList.cpp"
  "./src/DijkstraAlgorithm/DijkastraAlgorithmImpl.cpp"
  "./src/Nodes/WeightedNodesCommonOpr.cpp"
  "./src/BellmanFordAlgorithm/BellmanFordAlgorithmImpl.cpp"
  "./src/FloydWarshallAlgorithm/FloydWarshallImpl.cpp"
  "./src/DisjointSet/DisjointSetImpl.cpp"
  "./src/KruskalAndPrimsAlgorithm/KruskalAndPrimsImpl.cpp"
)

target_include_directories(${PROJECT_NAME} PRIVATE "./include")
