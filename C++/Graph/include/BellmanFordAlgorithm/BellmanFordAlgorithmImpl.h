#ifndef BELLMAN_FORD_ALGORITHM_IMPL_H
#define BELLMAN_FORD_ALGORITHM_IMPL_H
#include "../Nodes/WeightedNodesCommonOpr.h"

/* BellmanFordAlgorithmImpl graph; */
/* graph.add_vertices("A", 0); */
/* graph.add_vertices("B", 1); */
/* graph.add_vertices("C", 2); */
/* graph.add_vertices("D", 3); */
/* graph.add_vertices("E", 4); */
/* graph.add_vertices("F", 5); */
/* graph.add_vertices("G", 6); */

/* graph.add_weighted_directed_edge(0, 1, 2); */
/* graph.add_weighted_directed_edge(0, 2, 5); */
/* graph.add_weighted_directed_edge(1, 2, 6); */
/* graph.add_weighted_directed_edge(1, 3, 1); */
/* graph.add_weighted_directed_edge(1, 4, 3); */
/* graph.add_weighted_directed_edge(2, 5, 8); */
/* graph.add_weighted_directed_edge(3, 4, 4); */
/* graph.add_weighted_directed_edge(4, 6, 9); */
/* graph.add_weighted_directed_edge(5, 6, 7); */

/* graph.bellmanFord(); */

// Output 
/* Printing node list of A */
/* Checking for negative cycle... */
/* Negative cycles where not found */
/* Node: A, distance: 0, Path: A */
/* Node: B, distance: 2, Path: A B */
/* Node: C, distance: 5, Path: A C */
/* Node: D, distance: 3, Path: A B D */
/* Node: E, distance: 5, Path: A B E */
/* Node: F, distance: 13, Path: A C F */
/* Node: G, distance: 14, Path: A B E G */

class BellmanFordAlgorithmImpl : public WeightedNodesCommonOpr {
private:
  void bellmanFordHelper(WeightedNode *root);
public:
  void bellmanFord();
};
#endif // BELLMAN_FORD_ALGORITHM_IMPL_H
