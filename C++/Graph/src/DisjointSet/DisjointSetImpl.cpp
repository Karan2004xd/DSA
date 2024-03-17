#include "../../include/DisjointSet/DisjointSetImpl.h"
#include "../../include/DisjointSet/WeightedNodeForSet.h"

void DisjointSetImpl::make_set(std::vector<WeightedNodeForSet *> &node_list) {
  for (const auto &node : node_list) {
    DisjointSetImpl *set = new DisjointSetImpl();
    set->node_list.push_back(node);
    node->set = set;
  }
}

DisjointSetImpl *DisjointSetImpl::find_set(WeightedNodeForSet *node) const {
  return node->set;
}

DisjointSetImpl *DisjointSetImpl::union_of_set(WeightedNodeForSet *node_1, WeightedNodeForSet *node_2) {
  if (node_1 == node_2) return nullptr;
  DisjointSetImpl *set_1 = node_1->set;
  DisjointSetImpl *set_2 = node_2->set;

  if (set_1->node_list.size() > set_2->node_list.size()) {
    std::vector<WeightedNodeForSet *> node_set_2 = set_2->node_list;
    for (const auto &node : node_set_2) {
      node->set = set_1;
      set_1->node_list.push_back(node);
    }
    return set_1;
  } else {
    std::vector<WeightedNodeForSet *> node_set_1 = set_1->node_list;
    for (const auto &node : node_set_1) {
      node->set = set_2;
      set_2->node_list.push_back(node);
    }
    return set_2;
  }
}

void DisjointSetImpl::print_all_nodes_of_set() {
  std::cout << "Printing all nodes of the set: " << std::endl;
  for (const auto &node : node_list) {
    std::cout << node->name << " ";
  }
  std::cout << "\n";
}
