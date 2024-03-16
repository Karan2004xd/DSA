#include "../../include/DijkstraAlgorithm/DijkastraAlgorithmImpl.h"

void DijkastraAlgorithmImpl::dijkastraHelper(WeightedNode *root) {
  if (root == nullptr) return;
  root->distance = 0;
  std::vector<WeightedNode *> node_list = get_node_list();

  for (const auto &node : node_list) {
    queue.push(node);
  }

  while (!queue.empty()) {
    WeightedNode *current_node = queue.front();
    queue.pop();
    for (const auto &node : current_node->neighbours) {
      if (!node->is_visited) {
        int distance_to_compare = current_node->distance + current_node->weight_map[node];
        if (node->distance > distance_to_compare) {
          node->distance = distance_to_compare;
          node->parent = current_node;
          node->is_visited = true;
          queue.push(node);
        }
      }
    }
  }

  for (const auto &node : node_list) {
    std::cout << "Node: " << node->name << ", distance: "
      << node->distance << ", Path: ";
    print_path(node);
    std::cout << "\n";
  }
}

void DijkastraAlgorithmImpl::dijkastra() {
  WeightedNode *root = get_node_list()[0];
  std::cout << "\nPrinting path from " << root->name << std::endl;;
  dijkastraHelper(root);
}
