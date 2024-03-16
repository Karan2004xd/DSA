#include "../../include/BellmanFordAlgorithm/BellmanFordAlgorithmImpl.h"

void BellmanFordAlgorithmImpl::bellmanFordHelper(WeightedNode *root) {
  if (root == nullptr) return;
  root->distance = 0;

  std::vector<WeightedNode *> node_list = get_node_list();
  for (int i = 0; i < node_list.size(); i++) {
    for (const auto &current_node : node_list) {
      for (const auto &neighbour : current_node->neighbours) {
        int distance_to_compare = current_node->distance + current_node->weight_map[neighbour];
        if (neighbour->distance > distance_to_compare) {
          neighbour->distance = distance_to_compare;
          neighbour->parent = current_node;
        }
      }
    }
  }

  std::cout << "Checking for negative cycle..." << std::endl;
  for (const auto &current_node : node_list) {
    for (const auto &neighbour : current_node->neighbours) {
      int distance_to_compare = current_node->distance + current_node->weight_map[neighbour];
      if (neighbour->distance > distance_to_compare) {
        std::cout << "\nNegative Cycle found\n";
        std::cout << "Vertex name : " << neighbour->name
                  << "Old Cost : " << neighbour->distance
                  << "New Cost : " << distance_to_compare
                  << std::endl;
        return ;
      }
    }
  }

  std::cout << "Negative cycles where not found" << std::endl;
  for (const auto &node : node_list) {
    std::cout << "Node: " << node->name << ", distance: "
      << node->distance << ", Path: ";
    print_path(node);
    std::cout << "\n";
  }
}

void BellmanFordAlgorithmImpl::bellmanFord() {
  WeightedNode *root = get_node_list()[0];
  std::cout << "Printing node list of " << root->name << std::endl;
  bellmanFordHelper(root);
}
