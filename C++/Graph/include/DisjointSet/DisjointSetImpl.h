#ifndef DISJOINT_SET_IMPL_H
#define DISJOINT_SET_IMPL_H
#include <vector>
#include <iostream>

class WeightedNodeForSet;

class DisjointSetImpl {
public:
  std::vector<WeightedNodeForSet *> node_list;

  void make_set(const std::vector<WeightedNodeForSet *> &node_list);
  DisjointSetImpl find_set(WeightedNodeForSet *node) const;

  DisjointSetImpl union_of_set(WeightedNodeForSet *node_1, WeightedNodeForSet *node_2);
  void print_all_nodes_of_set();
};
#endif // DISJOINT_SET_IMPL_H
