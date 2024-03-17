#ifndef UNDIRECTED_EDGE_H
#define UNDIRECTED_EDGE_H
#include "../../include/DisjointSet/WeightedNodeForSet.h"
#include <ostream>

class UndirectedEdge {
public:
  WeightedNodeForSet *first {nullptr};
  WeightedNodeForSet *second {nullptr};
  int weight;

  UndirectedEdge(WeightedNodeForSet *first, WeightedNodeForSet *second, int weight)
    : first {first}, second {second}, weight {weight} {}

  friend std::ostream &operator<<(std::ostream &os, const UndirectedEdge &edge) {
    os << "Edge (" << edge.first->name << ", " << edge.second->name << "), weight = " << edge.weight;
    return os;
  }
};
#endif // UNDIRECTED_EDGE_H
