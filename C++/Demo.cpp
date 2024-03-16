#include "Graph/include/FloydWarshallAlgorithm/FloydWarshallImpl.h"

int main() {
  FloydWarshallImpl graph;
  graph.add_vertices("A", 0);
  graph.add_vertices("B", 1);
  graph.add_vertices("C", 2);
  graph.add_vertices("D", 3);

  graph.add_weighted_directed_edge(0, 3, 1);
  graph.add_weighted_directed_edge(0, 1, 8);
  graph.add_weighted_directed_edge(1, 2, 1);
  graph.add_weighted_directed_edge(2, 0, 4);
  graph.add_weighted_directed_edge(3, 1, 2);
  graph.add_weighted_directed_edge(3, 2, 9);

  graph.floyd_warshall();
  return 0;
}
