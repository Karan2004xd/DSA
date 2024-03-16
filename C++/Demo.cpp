#include "Graph/include/DisjointSet/DisjointSetImpl.h"
#include "Graph/include/DisjointSet/WeightedNodeForSet.h"

int main() {
  DisjointSetImpl new_set;
  std::vector<WeightedNodeForSet *> node_list;
  node_list.push_back(new WeightedNodeForSet("A"));
  node_list.push_back(new WeightedNodeForSet("B"));
  node_list.push_back(new WeightedNodeForSet("C"));
  node_list.push_back(new WeightedNodeForSet("D"));

  new_set.make_set(node_list);
  WeightedNodeForSet *first_node = node_list[0];
  WeightedNodeForSet *second_node = node_list[1];

  DisjointSetImpl new_set_1 = new_set.find_set(second_node);
  new_set_1.print_all_nodes_of_set();

  new_set_1 = new_set.union_of_set(first_node, second_node);
  new_set_1.print_all_nodes_of_set();
  return 0;
}
