#include "../../include/DijkstraAlgorithm/DijkastraAlgorithmImpl.h"
#include <unordered_map>

void DijkastraAlgorithmImpl::dijkastraHelper(WeightedNode *root) {
  if (root == nullptr) return;
  root->distance = 0;

  std::vector<WeightedNode *> node_list = get_node_list();
  std::unordered_map<WeightedNode *, bool> visited;

  queue.push(root);

  while (!queue.empty()) {
    WeightedNode *current_node = queue.top();
    queue.pop();
    if (visited[current_node]) continue;
    visited[current_node] = true;

    for (const auto &node : current_node->neighbours) {
      int distance_to_compare = current_node->distance + current_node->weight_map[node];
      if (node->distance > distance_to_compare) {
        node->distance = distance_to_compare;
        node->parent = current_node;
        node->is_visited = true;
        queue.push(node);
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
