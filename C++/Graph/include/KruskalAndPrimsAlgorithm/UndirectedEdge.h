#ifndef UNDIRECTED_EDGE_H
#define UNDIRECTED_EDGE_H
#include "../../include/Nodes/WeightedNode.h"

class UndirectedEdge {
public:
  WeightedNode *first {nullptr};
  WeightedNode *second {nullptr};
  int weight;

  UndirectedEdge(WeightedNode *first, WeightedNode *second, int weight)
    : first {first}, second {second}, weight {weight} {}
};
#endif // UNDIRECTED_EDGE_H
