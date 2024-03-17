#ifndef DIJKASTRA_ALGORITHM_IMPL_H
#define DIJKASTRA_ALGORITHM_IMPL_H

#include "../../include/Nodes/WeightedNodesCommonOpr.h"
#include <cwchar>
#include <functional>
#include <queue>

/* DijkastraAlgorithmImpl graph; */
/* graph.add_vertices("A", 0); */
/* graph.add_vertices("B", 1); */
/* graph.add_vertices("C", 2); */
/* graph.add_vertices("D", 3); */
/* graph.add_vertices("E", 4); */
/* graph.add_vertices("F", 5); */
/* graph.add_vertices("G", 7); */

/* graph.add_weighted_directed_edge(0, 1, 2); */
/* graph.add_weighted_directed_edge(0, 2, 5); */
/* graph.add_weighted_directed_edge(1, 2, 6); */
/* graph.add_weighted_directed_edge(1, 3, 1); */
/* graph.add_weighted_directed_edge(1, 4, 3); */
/* graph.add_weighted_directed_edge(2, 5, 8); */
/* graph.add_weighted_directed_edge(3, 4, 4); */
/* graph.add_weighted_directed_edge(4, 6, 9); */
/* graph.add_weighted_directed_edge(5, 6, 7); */

/* graph.dijkastra(); */

// Output 
// Printing path from A
/* Node: A, distance: 0, Path: A */
/* Node: B, distance: 2, Path: A B */
/* Node: C, distance: 5, Path: A C */
/* Node: D, distance: 3, Path: A B D */
/* Node: E, distance: 5, Path: A B E */
/* Node: F, distance: 13, Path: A C F */
/* Node: G, distance: 14, Path: A B E G */

struct CompareDistance {
  bool operator()(const WeightedNode *a, const WeightedNode *b) const {
    return a->distance > b->distance;
  }
};

class DijkastraAlgorithmImpl : public WeightedNodesCommonOpr {
private:
  std::priority_queue<WeightedNode *, std::vector<WeightedNode *>, CompareDistance> queue;
  void dijkastraHelper(WeightedNode *root);
public:
  void dijkastra();
};
#endif // DIJKASTRA_ALGORITHM_IMPL_H
