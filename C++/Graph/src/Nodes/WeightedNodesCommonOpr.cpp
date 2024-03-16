#include "../../include/Nodes/WeightedNodesCommonOpr.h"

void WeightedNodesCommonOpr::add_vertices(const std::string &name, int index) {
  node_list.push_back(new WeightedNode(name, index));
}

void WeightedNodesCommonOpr::add_weighted_directed_edge(int i, int j, int d) {
  WeightedNode *first = node_list[i];
  WeightedNode *second = node_list[j];
  first->neighbours.push_back(second);
  first->weight_map[second] = d;
}

void WeightedNodesCommonOpr::print_path(WeightedNode *node) {
  if (node->parent != nullptr) {
    print_path(node->parent);
  }
  std::cout << node->name << " ";
}
