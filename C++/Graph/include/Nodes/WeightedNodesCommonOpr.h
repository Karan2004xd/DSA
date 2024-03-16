#ifndef WEIGHTED_NODES_COMMON_OPR
#define WEIGHTED_NODES_COMMON_OPR

#include "WeightedNode.h"
#include <iostream>

class WeightedNodesCommonOpr {
private:
  std::vector<WeightedNode *> node_list;
public:
  void add_vertices(const std::string &name, int index);
  void add_weighted_directed_edge(int i, int j, int d);

  void print_path(WeightedNode *node);

  std::vector<WeightedNode *> get_node_list() { return this->node_list; }
};
#endif // WEIGHTED_NODES_COMMON_OPR
